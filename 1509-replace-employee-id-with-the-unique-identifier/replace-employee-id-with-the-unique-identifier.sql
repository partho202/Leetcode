# Write your MySQL query statement below
-- //-----------राधा-----------//
select emN.unique_id , em.name
from  Employees em
left join EmployeeUNI emN 
on em.id = emN.id