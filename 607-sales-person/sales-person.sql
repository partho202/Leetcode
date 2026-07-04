# Write your MySQL query statement below
-- //-----------राधा-----------//
select name
from SalesPerson
where sales_id  not in (select sales_id
    from Orders o 
    natural join company c
    where o.com_id=c.com_id and c.name = "RED");


-- select name
-- from SalesPerson
-- where sales_id  not in (select sales_id
--     from Orders o 
--     cross join company c
--     where o.com_id=c.com_id and c.name = "RED");


    -- first tmka dakhta hoba kon kon table er common column asssa then join , group kora ber kora tarpor milaita hoba konta hoba and hoba na