# Please write a DELETE statement and DO NOT write a SELECT statement.
# Write your MySQL query statement below

Delete p1.*
FROM Person p1 INNER JOIN
    Person p2 where p1.email=p2.email and p1.id>p2.id