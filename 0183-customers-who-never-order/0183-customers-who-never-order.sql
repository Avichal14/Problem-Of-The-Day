# Write your MySQL query statement below
# Write your MySQL query statement below
SELECT NAME Customers FROM CUSTOMERS WHERE ID NOT IN(SELECT CUSTOMERID FROM ORDERS);