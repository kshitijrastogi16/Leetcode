# Write your MySQL query statement below
select p.product_id, case when round(sum(p.price*u.units)/ sum(u.units),2) is null then 0.00 
else round(sum(p.price*u.units)/ sum(u.units),2) end as average_price
from Prices as p
left join UnitsSold as u
on p.product_id = u.product_id 
and u.purchase_date between start_date and end_date
group by product_id


