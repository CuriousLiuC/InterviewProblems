各题总结

175题：https://leetcode-cn.com/problems/combine-two-tables/

题目：编写一个 SQL 查询，满足条件：无论 person 是否有地址信息，都需要基于上述两表提供 person 的以下信息。

分析：由于其中一个表的主键不管是否为NULL，都要提供消息，这时候无法使用where语句进行查询，改换策略采用表连接的方式

