# Write your MySQL query statement below
with next_student as (
    select id, student as current_stu, lead(student,1) over() as next_stu, lag(student,1) over() as prev_stu
    from Seat
)

select id, case when mod(id,2) != 0 then next_stu else prev_stu end as student
from next_student
having student is not null
union 
select id, student
from Seat
where mod(id,2) != 0 and id = (select count(*) from Seat);