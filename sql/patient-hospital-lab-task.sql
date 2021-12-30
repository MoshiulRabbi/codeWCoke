
CREATE TABLE Hospital(
    Id INT PRIMARY key,
    HospitalName VARCHAR(30),
    HospitalAddress VARCHAR(30)

);

CREATE TABLE Patient(
    Id INT Primary Key,
    Name VARCHAR(30),
    Age INT,
    CHECK (Age>=18),
    Address VARCHAR(50) not null Unique,
    Diagnosis VARCHAR(50) DEFAULT 'Diabeties',

    HospitalId Int NOT NULL,
    FOREIGN KEY (HospitalId) REFERENCES Hospital(Id)
);


CREATE TABLE MedicalRecord(
    ID INT,
    PRIMARY KEY(ID),
    date_of_examination date  DEFAULT GETDATE(),
    problem VARCHAR(100) Not Null,
    PatientId INT ,
    FOREIGN KEY (PatientId) REFERENCES Patient(Id)

);


INSERT into Hospital VALUES(1,'Labiad','Dhanmondi')
INSERT into Hospital VALUES(2,'Square','Kalabagan')
INSERT into Hospital VALUES(3,'Popular','Motijheel')
INSERT into Hospital VALUES(4,'Apollo','Uttara')
INSERT into Hospital VALUES(5,'United','Savar')


INSERT Into Patient(Id,Name,Age,Address,HospitalId) VALUES(1,'Jon',19,'Kalaban',1)
INSERT Into Patient VALUES(2,'Ygritte',19,'Dhanmondi','Heart Attack',2)
INSERT Into Patient(Id,Name,Age,Address,HospitalId) VALUES(3,'Arya',18,'Motijheel',3)
INSERT Into Patient(Id,Name,Age,Address,HospitalId) VALUES(4,'Bran',21,'Uttara',4)
INSERT Into Patient(Id,Name,Age,Address,HospitalId) VALUES(5,'Sansa',24,'Savar',5)


Insert into MedicalRecord VALUES(1,GETDATE(),'sick',1)
Insert into MedicalRecord VALUES(2,GETDATE(),'Cant stand',2)
Insert into MedicalRecord VALUES(3,GETDATE(),'sick',3)
Insert into MedicalRecord VALUES(4,GETDATE(),'sick',4)
Insert into MedicalRecord VALUES(5,GETDATE(),'COvid',5)


SELECT * from Hospital
SELECT * from Patient
select * from MedicalRecord