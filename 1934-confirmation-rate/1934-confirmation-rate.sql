# Write your MySQL query statement below
select s.user_id, 
case when c.action is null then 0.00
else round(sum(case when c.action = 'confirmed' then 1 else 0 end)/count(action),2) end as confirmation_rate 
from Signups as s
left join Confirmations as c
on s.user_id = c.user_id
group by s.user_id;