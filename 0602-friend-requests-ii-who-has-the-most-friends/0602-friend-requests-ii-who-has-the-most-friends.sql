# Write your MySQL query statement below
select requester_id as id, count(requester_id) as num 
from 
(
    select requester_id 
    from RequestAccepted
    union all
    select accepter_id 
    from RequestAccepted
) as table_1
group by requester_id
order by num desc
limit 1;