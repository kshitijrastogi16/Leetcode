with table_1 as
(
    select d.name as Department, e.name as Employee, e.salary as Salary, 
    dense_rank() over(partition by d.id order by Salary desc) as d_rank
    from Employee as e
    inner join Department as d
    on e.departmentId = d.id
)
select Department, Employee, Salary
from table_1
where d_rank <= 3;