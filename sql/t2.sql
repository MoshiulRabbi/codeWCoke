CREATE DATABASE SAIFUL;

CREATE TABLE students(
    roll int primary key,
    NAME NVARCHAR(25) Not null,
    Department NVARCHAR(25) not NULL
);





CREATE TABLE courses(
    c_id int PRIMARY KEY ,
    c_name NVARCHAR(25) UNIQUE,
    year INT CHECK(year BETWEEN 1 AND 4),
    term INT CHECK(term BETWEEN 1 AND 2) ,
    credit FLOAT DEFAULT '3.00'
);

CREATE TABLE course_taken(
    roll int REFERENCES students(roll) on delete CASCADE,
    c_id int,
    session NVARCHAR(25)
);

ALTER TABLE course_taken ADD FOREIGN KEY (c_id) REFERENCES courses(c_id) on delete CASCADE;

SELECT * FROM students
SELECT * FROM courses
SELECT * FROM course_taken
SELECT * FROM courses WHERE credit = 2


INSERT into courses(c_id,c_name,year,term) values(23,'twdo',4,2)

drop table students
drop table courses
drop table course_taken

TRUNCATE TABLE students

INSERT into students VALUEs(1,'jonas','cse')
INSERT into courses values(101,'db',3,2,'2.00')
INSERT into course_taken values(1,101,'fall')


INSERT into students VALUEs(2,'martha','cse')
INSERT into courses values(102,'cn',3,2,'2.00')
INSERT into course_taken values(2,102,'spring')


INSERT into students VALUEs(5,'adam','eee')
INSERT into courses values(105,'oop',4,2,'3.00')
INSERT into course_taken values(5,105,'summer')


delete from students where roll = 5;