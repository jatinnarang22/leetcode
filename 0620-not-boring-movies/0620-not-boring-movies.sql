# Write your MySQL query statement below

select id ,movie,description,rating 
from Cinema where
MOD(ID, 2) <> 0 and description <> 'boring' order by  rating  desc ;