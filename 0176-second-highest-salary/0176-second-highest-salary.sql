# Write your MySQL query statement below

select max(Employee.salary) as SecondHighestSalary from Employee where Employee.salary not in (select max(Employee.salary) from Employee )