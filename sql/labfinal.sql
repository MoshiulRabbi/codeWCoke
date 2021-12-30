CREATE DATABASE RABBIFINAL

CREATE TABLE Employee(
    Empid int Primary Key,
    EmpName varchar(25),
    Department VARCHAR(25),
    ContactNo int,
    EmailId VARCHAR(30),
    EmpHeadId int
    );



CREATE TABLE EmpDept(
    DepId varchar(10) primary key,
    DeptName VARCHAR(30),
    Dept_off VARCHAR(30),
    DeptHead int,
    FOREIGN key (DeptHead) REFERENCES Employee(Empid)
    );





CREATE TABLE EmpSalary(
    EmpID INT,
    FOREIGN KEY (EmpID) REFERENCES Employee(Empid),
    Salary int,
    IsPermanent VARCHAR(10)


);





CREATE TABLE ClientTable (
    ClientId VARCHAR(5) PRIMARY KEY,
    ClientNAme VARCHAR(20),
    cid VARCHAR(5)

);



CREATE TABLE EmpProject(
    EmpId INT,
    FOREIGN key (EmpId) REFERENCES Employee(Empid),

    ProjectId VARCHAR(5) ,
    ClientID VARCHAR(5),
    FOREIGN KEY (ClientID) REFERENCES ClientTable(ClientId),

    StartYear INT,
    Endyear INT
);



-- drop table EmpSalary
-- drop TABLE EmpProject
-- DROP TABLE EmpDept
-- DROP TABLE Employee
-- DROP TABLE ClientTable


INSERT Into Employee VALUES(101,'ISha','E-101',1234567890,'isha@gmail.com',105)
INSERT Into Employee VALUES(102,'Priya','E-104',1234567890,'priya@yahoo.com',103)
INSERT Into Employee VALUES(103,'Neha','E-101',1234567890,'neha@gmail.com',101)
INSERT Into Employee VALUES(104,'Rahul','E-102',1234567890,'rahul@yahoo.com',105)
INSERT Into Employee VALUES(105,'Abhishek','E-101',1234567890,'abhishek@gmail.com',102)



INSERT Into EmpDept VALUES('E-101','HR','Monday',105)
INSERT Into EmpDept VALUES('E-102','Development','Tuesday',101)
INSERT Into EmpDept VALUES('E-103','House keeping','Saturday',103)
INSERT Into EmpDept VALUES('E-104','Sales','Sunday',104)
INSERT Into EmpDept VALUES('E-105','Purchage','Tuesday',104)




INSERT INTO EmpSalary VALUES(101,2000,'Yes')
INSERT INTO EmpSalary VALUES(102,10000,'Yes')
INSERT INTO EmpSalary VALUES(103,5000,'No')
INSERT INTO EmpSalary VALUES(104,1900,'Yes')
INSERT INTO EmpSalary VALUES(105,2300,'Yes')



INSERT Into ClientTable VALUES('cl-1','ABC Group','c-1')
INSERT Into ClientTable VALUES('cl-2','PQR','c-2')
INSERT Into ClientTable VALUES('cl-3','XYZ','c-3')
INSERT Into ClientTable VALUES('cl-4','tech altum','c-4')
INSERT Into ClientTable VALUES('cl-5','mnp','c-5')



insert into EmpProject VALUES(101,'p-1','CL-1',2010,2010)
insert into EmpProject VALUES(102,'p-2','CL-2',2010,2012)
insert into EmpProject(EmpId,ProjectId,ClientID,StartYear) VALUES(103,'p-1','CL-3',2013)
insert into EmpProject VALUES(104,'p-4','CL-1',2014,2015)
insert into EmpProject(EmpId,ProjectId,ClientID,StartYear) VALUES(105,'p-4','CL-5',2015)



SELECT * FROM Employee
SELECT * FROM EmpDept
SELECT * FROM EmpProject
SELECT * FROM EmpSalary
SELECT * FROM ClientTable





select * from Employee where EmailId like '%@yahoo.com'





select * from employee where empname like '____j%'





select EmpName from Employee where EmpHeadId =(select EmpId from employee where empname='abhishek') 




select EmpName from Employee where EmpId =(select DeptHead from EmpDept where DeptName='hr')








select EmpName from Employee
where EmpId in(select EmpheadId from Employee) and EmpId in(select EmpId
from EmpSalary where IsPermanent='no')


--q7 for later
select * from employee 
where department in(select DepId from empdept where Dept_Off = 'monday')





select * from Employee 
where Department in(select DepId from EmpDept where DeptName='development')







select * from employee 
where department in(select DepId from empdept where Dept_Off = 'Saturday')



SELECT EmpName,Clientname  FROM Employee,ClientTable  where Empid , ClientId in(select EmpId,ClientId from EmpProject where Endyear < 2014)

SELECT Clientname  FROM ClientTable  where Clientid in(select ClientId from EmpProject where Endyear < 2014)

-- (select EmpId, ClientID from EmpProject where Endyear = 2014)


select EmpId, ClientID from EmpProject where Endyear < 2014




select EmpName from Employee
where EmpId in(select EmpheadId from Employee) and EmpId in(select EmpId
from EmpSalary where IsPermanent='no')

select ClientId from EmpProject where Endyear < 2014







SELECT EmpName,Clientname  FROM Employee,ClientTable where Empid in(select EmpId from EmpProject where Endyear < 2014)
and ClientId in(select ClientId from EmpProject where Endyear < 2014)
