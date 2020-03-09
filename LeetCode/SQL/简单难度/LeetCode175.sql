select Person.FirstName,Person.LastName,Address.City,Address.state
from Person left join Address
on Person.PersonId = Address.PersonId