# Write your MySQL query statement below
-- //-----------राधा-----------//
select firstname,lastname,city,state 
from Person left join Address on Person.personID = Address.personID

-- Here left-join use hoisa because left side er all data show korba with null and right side er table er sudu match data show korba tai ei khana Allen Wang er city,state nai tai null dakassa right side and Bob Alice er city,state mil asssa tai name dakassa..