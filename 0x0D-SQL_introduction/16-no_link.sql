-- lists all records with the value 'name'
SELECT score, name
FROM second_table
HAVING name IS NOT NULL
ORDER BY score DESC;