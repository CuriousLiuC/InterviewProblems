select Customers.Name as Customers
from Customers
where Customers.Id not in(
    select Orders.CustomerId
    from Orders
)