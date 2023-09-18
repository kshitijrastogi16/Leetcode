# Write your MySQL query statement below
select w2.Id from Weather w1 inner join Weather w2 on w1.recordDate = DATE_ADD(w2.recordDate, interval -1 day) and w2.temperature > w1.temperature;