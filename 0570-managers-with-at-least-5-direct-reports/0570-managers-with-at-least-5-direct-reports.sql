# Write your MySQL query statement below


select name from Employee where id in (select managerId from Employee group by managerID having count(managerId)>=5)