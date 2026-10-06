SELECT 
    Users.name,
    SUM(Transactions.amount) AS balance
FROM Transactions
LEFT JOIN Users 
    ON Users.account = Transactions.account
GROUP BY Users.name, Users.account
HAVING SUM(Transactions.amount) > 10000;
