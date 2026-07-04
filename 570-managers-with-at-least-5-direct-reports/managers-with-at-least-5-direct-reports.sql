# Write your MySQL query statement below
-- //-----------राधा-----------//
select name
from Employee
where id in(select managerId
    from Employee
    where managerID is not null 
    group by managerId
    having count(managerId)>=5);