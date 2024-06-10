-- create database 'hbtn_0d_usa'
CREATE DATABASE IF NOT EXISTS hbtn_0d_usa;

-- create the table inside the database
CREATE TABLE IF NOT EXISTS hbtn_0d_usa.states
(
    PRIMARY KEY (id),
    id INT UNIQUE AUTO_INCREMENT NOT NULL,
    name VARCHAR(256) NOT NULL
);