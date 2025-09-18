create database Office;
use office;

CREATE table Employees(
	EmpId int primary key,
    EmpName varchar(30),
    Salary decimal(10,2)
);

insert into Employees (EmpId, EmpName, Salary) values 
(1, "Rahul Ghosh" , 17089.90),
(2, "Subhendu Mandal", 20839.49),
(3, "Subhra Dey", 49029.00),
(4, "Sayandeep Das" , 89327.90),
(5, "Rana Ghosh" , 97323.33);

SELECT * from Employees;

select max(Salary) from Employees where Salary < (select  max(Salary) from employees);  