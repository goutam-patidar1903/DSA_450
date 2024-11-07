# Write your MySQL query statement below

# SELECT 
#     user_id, 
#     CONCAT(UPPER(LEFT(name,1)), LOWER(SUBSTRING(name,2))) as name
# FROM Users
# ORDER BY user_id;


SELECT 
    user_id, 
    CONCAT(UPPER(SUBSTRING(name,1,1)), LOWER(SUBSTRING(name,2))) as name
FROM Users
ORDER BY user_id;