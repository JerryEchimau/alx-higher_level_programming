# SQL Introduction

This repository contains a series of SQL scripts that cover various concepts and tasks related to SQL and MySQL database management. The tasks range from listing databases to creating tables, inserting data, updating records, and performing various operations on the data.

## Table of Contents

- [Task 0: List Databases](#task-0-list-databases)
- [Task 1: Create a Database](#task-1-create-a-database)
- [Task 2: Delete a Database](#task-2-delete-a-database)
- [Task 3: List Tables](#task-3-list-tables)
- [Task 4: First Table](#task-4-first-table)
- [Task 5: Full Description](#task-5-full-description)
- [Task 6: List All in Table](#task-6-list-all-in-table)
- [Task 7: First Add](#task-7-first-add)
- [Task 8: Count 89](#task-8-count-89)
- [Task 9: Full Creation](#task-9-full-creation)
- [Task 10: List by Best](#task-10-list-by-best)
- [Task 11: Select the Best](#task-11-select-the-best)
- [Task 12: Cheating is Bad](#task-12-cheating-is-bad)
- [Task 13: Score Too Low](#task-13-score-too-low)
- [Task 14: Average](#task-14-average)
- [Task 15: Number by Score](#task-15-number-by-score)
- [Task 16: Say My Name](#task-16-say-my-name)


## Tasks

### 0. List databases

**Concept:** Listing available databases in a MySQL server.  
**File:** [0-list_databases.sql](0-list_databases.sql)  
**Description:** This script lists all the databases available in the MySQL server using the `SHOW DATABASES;` statement.

### 1. Create a database

**Concept:** Creating a new database in a MySQL server.  
**File:** [1-create_database_if_missing.sql](1-create_database_if_missing.sql)  
**Description:** This script creates a new database named `hbtn_0c_0` in the MySQL server using the `CREATE DATABASE IF NOT EXISTS hbtn_0c_0;` statement. If the database already exists, the script does not fail.

### 2. Delete a database

**Concept:** Dropping (deleting) a database from a MySQL server.  
**File:** [2-remove_database.sql](2-remove_database.sql)  
**Description:** This script deletes the `hbtn_0c_0` database from the MySQL server using the `DROP DATABASE IF EXISTS hbtn_0c_0;` statement. If the database does not exist, the script does not fail.

### 3. List tables

**Concept:** Listing tables in a specific database.  
**File:** [3-list_tables.sql](3-list_tables.sql)  
**Description:** This script lists all the tables present in the `mysql` database using the `SHOW TABLES;` statement. The database name is passed as an argument to the `mysql` command.

### 4. First table

**Concept:** Creating a new table in a database.  
**File:** [4-first_table.sql](4-first_table.sql)  
**Description:** This script creates a new table named `first_table` in the specified database (passed as an argument to the `mysql` command). The table has two columns: `id` (INT) and `name` (VARCHAR(256)). If the table already exists, the script does not fail.

### 5. Full description

**Concept:** Displaying the full description (CREATE statement) of a table.  
**File:** [5-full_table.sql](5-full_table.sql)  
**Description:** This script prints the full description (CREATE statement) of the `first_table` table from the `hbtn_0c_0` database using the `SHOW CREATE TABLE first_table;` statement.

### 6. List all in table

**Concept:** Selecting all records from a table.  
**File:** [6-list_values.sql](6-list_values.sql)  
**Description:** This script lists all rows (records) and all fields (columns) from the `first_table` table in the `hbtn_0c_0` database using the `SELECT * FROM first_table;` statement.

### 7. First add

**Concept:** Inserting a new record into a table.  
**File:** [7-insert_value.sql](7-insert_value.sql)  
**Description:** This script inserts a new row into the `first_table` table in the `hbtn_0c_0` database. The new row has `id = 89` and `name = 'Best School'` using the `INSERT INTO first_table (id, name) VALUES (89, 'Best School');` statement.

### 8. Count 89

**Concept:** Counting the number of records with a specific condition.  
**File:** [8-count_89.sql](8-count_89.sql)  
**Description:** This script displays the number of records with `id = 89` in the `first_table` table of the `hbtn_0c_0` database using the `SELECT COUNT(*) FROM first_table WHERE id = 89;` statement.

### 9. Full creation

**Concept:** Creating a new table with multiple records.  
**File:** [9-full_creation.sql](9-full_creation.sql)  
**Description:** This script creates a new table named `second_table` in the `hbtn_0c_0` database with the following columns: `id` (INT), `name` (VARCHAR(256)), and `score` (INT). It then inserts four records into the table with predefined values for `id`, `name`, and `score`.

### 10. List by best

**Concept:** Selecting records from a table with sorting.  
**File:** [10-top_score.sql](10-top_score.sql)  
**Description:** This script lists all records from the `second_table` table in the `hbtn_0c_0` database, displaying the `score` and `name` columns. The records are ordered by the `score` column in descending order (top scores first) using the `SELECT score, name FROM second_table ORDER BY score DESC;` statement.

### 11. Select the best

**Concept:** Selecting records with a specific condition and sorting.  
**File:** [11-best_score.sql](11-best_score.sql)  
**Description:** This script lists all records with a `score >= 10` from the `second_table` table in the `hbtn_0c_0` database, displaying the `score` and `name` columns. The records are ordered by the `score` column in descending order (top scores first) using the `SELECT score, name FROM second_table WHERE score >= 10 ORDER BY score DESC;` statement.

### 12. Cheating is bad

**Concept:** Updating records in a table based on a specific condition.  
**File:** [12-no_cheating.sql](12-no_cheating.sql)  
**Description:** This script updates the `score` of the record with `name = 'Bob'` to `10` in the `second_table` table of the `hbtn_0c_0` database using the `UPDATE second_table SET score = 10 WHERE name = 'Bob';` statement.

### 13. Score too low

**Concept:** Deleting records from a table based on a specific condition.  
**File:** [13-change_class.sql](13-change_class.sql)  
**Description:** This script removes all records with a `score <= 5` from the `second_table` table in the `hbtn_0c_0` database using the `DELETE FROM second_table WHERE score <= 5;` statement.

### 14. Average

**Concept:** Calculating the average value of a column in a table.  
**File:** [14-average.sql](14-average.sql)  
**Description:** This script computes the average `score` of all records in the `second_table` table of the `hbtn_0c_0` database using the `SELECT AVG(score) AS average FROM second_table;` statement. The result column is named `average`.

### 15. Number by score

**Concept:** Grouping records and counting the number of occurrences.  
**File:** [15-groups.sql](15-groups.sql)  
**Description:** This script lists the number of records with the same `score` in the `second_table` table of the `hbtn_0c_0` database. The result displays the `score` and the number of records for each `score` (labeled as `number`). The list is sorted by the `number` of records in descending order using the `SELECT score, COUNT(*) AS number FROM second_table GROUP BY score ORDER BY number DESC;` statement.

### 16. Say my name

**Concept:** Selecting records with a specific condition and sorting, while handling NULL values.  
**File:** [16-no_link.sql](16-no_link.sql)  
**Description:** This script lists all records from the `second_table` table of the `hbtn_0c_0` database, displaying the `score` and `name` columns. It does not list rows without a `name` value (`name IS NOT NULL`). The records are listed by descending `score` order using the `SELECT score, name FROM second_table WHERE name IS NOT NULL ORDER BY score DESC;` statement.

## Author

Jerry John Echimau