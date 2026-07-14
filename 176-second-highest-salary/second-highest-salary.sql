# Write your MySQL query statement below
-- //-----------राधा-----------//
select max(salary) as SecondHighestSalary
from Employee
where salary < ( select max(salary)
                from Employee );