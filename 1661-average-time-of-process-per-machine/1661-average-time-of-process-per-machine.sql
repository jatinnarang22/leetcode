# Write your MySQL query statement below


select t1.machine_id,round(avg(t2.timestamp - t1.timestamp),3) as processing_time 
from Activity as t1 join Activity as t2
on t1.machine_id = t2.machine_id && t1.process_id  = t2.process_id 
where t1.activity_type ='start' and  t2.activity_type ='end' group by  t1.machine_id;
