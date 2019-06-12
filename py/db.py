import mysql.connector

mydb = mysql.connector.connect(
  host="localhost",
  user="root",
  passwd="",
  database="musicRec"
)

db = mydb.cursor()

sql = "INSERT INTO songs (name) VALUES (%s)"
val = ("High way to hell")
db.execute(sql, val)

mydb.commit()

print(mycursor.rowcount, "record inserted.")