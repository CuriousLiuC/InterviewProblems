select A.Email
from Person A,Person B
where A.Email = B.Email and A.Id!=B.Id
group by A.Email