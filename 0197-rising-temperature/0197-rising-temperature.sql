# Write your MySQL query statement below

select a.id  from weather as a , weather as b where b.temperature< a.temperature and datediff(a.recordDate,b.recordDate)=1  
