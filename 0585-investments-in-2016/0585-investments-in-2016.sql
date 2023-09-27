select round(sum(tiv_2016),2) as tiv_2016
from Insurance 
where pid in 
(
    select pid 
    from Insurance 
    group by lat * 1000 + lon
    having count(lat * 1000 + lon) = 1
) and 
tiv_2015 in 
(
    select tiv_2015
    from Insurance
    group by tiv_2015
    having count(tiv_2015) > 1
);