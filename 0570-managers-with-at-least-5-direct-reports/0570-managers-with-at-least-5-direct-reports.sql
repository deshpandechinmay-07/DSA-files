SELECT m.name
FROM Employee e
JOIN Employee m ON e.managerID = m.id
GROUP BY m.id, m.name
HAVING COUNT(e.id) >= 5;
