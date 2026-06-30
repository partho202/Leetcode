# Write your MySQL query statement below
-- //-----------राधा-----------//
delete p1 from person p1
join person p2          -- self join here and delete p1 means id of p1
on p1.email = p2.email
and p1.id > p2.id;