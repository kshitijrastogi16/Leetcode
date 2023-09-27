# Write your MySQL query statement below
with table_1 as
(
    select visited_on, sum(amount) as total_amount
    from Customer
    group by visited_on
),
table_2 as 
(
    select visited_on, sum(total_amount) over(order by visited_on range between interval 6 day preceding and current row) as     amount, round((sum(total_amount) over(order by visited_on range between interval 6 day preceding and current row))/7,2)     as average_amount
    from table_1
)

select *
from table_2 
where visited_on >= 
(
    select visited_on 
    from table_2
    order by visited_on
    limit 1
) + 6
order by visited_on;