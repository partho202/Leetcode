# Write your MySQL query statement below
-- //-----------राधा-----------//
select distinct author_id as id
from Views
where author_id = viewer_id 
order by author_id ASC