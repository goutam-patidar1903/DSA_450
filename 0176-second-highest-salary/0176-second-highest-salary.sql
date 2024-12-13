# Write your MySQL query statement below

# SELECT MAX(e.salary) AS SecondHighestSalary
# FROM Employee e
# WHERE e.salary < (SELECT MAX(ee.salary) FROM Employee ee);




# SELECT salary as SecondHighestSalary
# FROM Employee
# ORDER BY salary
# LIMIT 1 OFFSET 1;




SELECT IFNULL(
    (SELECT DISTINCT salary 
     FROM Employee 
     ORDER BY salary DESC 
     LIMIT 1 OFFSET 1),
    NULL
) AS SecondHighestSalary;
