# Write your MySQL query statement below

SELECT r.contest_id , ROUND((COUNT(*)/(SELECT COUNT(*) from Users))*100,2) as percentage
FROM Users u
RIGHT JOIN Register r
ON u.user_id = r.user_id
GROUP BY r.contest_id
ORDER BY percentage desc , r.contest_id asc;