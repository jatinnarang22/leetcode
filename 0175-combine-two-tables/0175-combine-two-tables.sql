# Write your MySQL query statement below

Select firstName,lastName,city,state
from Person
Left join Address
on Person.PersonId = Address.PersonId ;