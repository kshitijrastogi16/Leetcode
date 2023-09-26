# Write your MySQL query statement below
with row_total as 
(
    select *, sum(weight) over(order by turn rows between unbounded preceding and current row) as total
    from Queue
)

select person_name 
from row_total
where total <= 1000 
order by total desc
limit 1;