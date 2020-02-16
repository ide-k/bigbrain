# this stuff is cool
# figure out pip issues

import MySQLdb

# opens a connection
db = MySQLdb.connect("localhost", "testuser", "test123", "TESTDB") 

# prepares a cursor object
cursor = db.cursor()

# Drop table if it already exists through the execute() method
cursor.execute("DROP TABLES IF EMPLOYEE EXISTS")

# Create table as per requirement
sql = """CREATE TABLE EMPLOYEE (FIRST_NAME CHAR(20) NOT NULL, LAST_NAME CHAR(20), AGE INT , SEX CHAR(1), INCOME FLOAT)"""

cursor.execute(sql)

# disconnect from server
db.close()