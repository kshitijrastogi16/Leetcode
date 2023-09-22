# Write your MySQL query statement below
with first_order as 
(
    select order_date, customer_pref_delivery_date, rank() over(partition by customer_id order by order_date) as ranking 
    from Delivery
)

select round(avg(case when order_date = customer_pref_delivery_date then 1.00 else 0.00 end)*100, 2) as immediate_percentage 
from first_order 
where ranking = 1;