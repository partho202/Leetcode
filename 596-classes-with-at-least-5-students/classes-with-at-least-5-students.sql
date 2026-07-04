# Write your MySQL query statement below
-- //-----------राधा-----------//
select class
from Courses
group by class 
having count(class) >= 5; -- here class count because class is 5 or more then studen is 5 or more that's why use class