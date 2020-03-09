select B.Id
from Weather A,Weather B
where DATEDIFF(A.RecordDate,B.RecordDate) = -1 and B.Temperature > A.Temperature