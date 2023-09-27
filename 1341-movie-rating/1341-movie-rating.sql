# Write your MySQL query statement below
with table_1 as
(
    select mr.*, m.title, u.name
    from MovieRating as mr
    left join Movies as m
    on mr.movie_id = m.movie_id
    left join Users as u
    on mr.user_id = u.user_id
)

(
    select name as results 
    from table_1
    group by name
    order by count(*) desc, name asc
    limit 1
)
union all
(
    select title as results
    from table_1
    where created_at between '2020-02-01' and '2020-02-29'
    group by title
    order by avg(rating) desc, title asc
    limit 1
);