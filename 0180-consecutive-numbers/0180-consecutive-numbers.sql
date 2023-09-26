# Write your MySQL query statement below
with consecutive as 
(
    select *, lead(num,1) over() as next, lead(num,2) over () as next_2 
    from Logs
)

select distinct num as ConsecutiveNums
from consecutive
where num = next and next = next_2;