select A.Name as Employee
from Employee A
where A.ManagerId is not null and A.Salary >(
    select max(B.Salary)
    from Employee B
    where A.ManagerId = B.Id
)