# Write your MySQL query statement below
-- //-----------राधा-----------//
SELECT MAX(salary) AS SecondHighestSalary
FROM Employee
WHERE salary < (
    SELECT MAX(salary)
    FROM Employee
);