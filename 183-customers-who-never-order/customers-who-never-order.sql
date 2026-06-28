# Write your MySQL query statement below
-- //-----------राधा-----------//
select name as Customers
from Customers
where id not in (select customerId from orders);     -- -> easy quary


-- LEFT JOIN

-- SELECT C.NAME AS Customers
-- FROM CUSTOMERS C
-- LEFT JOIN ORDERS O ON O.customerId  = C.id
-- WHERE o.customerId is null ;

-- Not Exists
-- SELECT name AS Customers
-- FROM Customers c
-- WHERE NOT EXISTS (SELECT * FROM Orders o WHERE c.id = o.customerId);