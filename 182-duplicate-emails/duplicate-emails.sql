# Write your MySQL query statement below
-- //-----------राधा-----------//
select email from Person
group by email
having count(email) > 1