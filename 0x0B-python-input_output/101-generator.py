#!/usr/bin/python3
import random
import sys
from time import sleep
import datetime

for i in range(10000):
    sleep(random.random())
    sys.stdout.write("{:d}.{:d}.{:d}.{:d} - [{}] \"GET /projects/260 HTTP/1.1\" {} {}\n".format(
        random.randint(1, 255), random.randint(1, 255), random.randint(1, 255), random.randint(1, 255),
        datetime.datetime.now(),
        random.choice([200, 301, 400, 401, 403, 404, 405, 500]),
        random.randint(1, 1024)
    ))
    sys.stdout.flush()
===================================


===================================
add_item.json


["Best", "School", "89", "Python", "C"] 
===================================
append_after_100.txt


At Holberton School,
Python is really important,
"C is fun!"
But it can be very hard if:
- You don't get all Pythonic tricks
"C is fun!"
- You don't have strong C knowledge.
===================================
file_append.txt


cat: file_append.txt: No such file or directoryThis School is so cool!
This School is so cool!
===================================
my_dict.json


{"id": 12, "name": "John", "places": ["San Francisco", "Tokyo"], "is_active": true, "info": {"age": 36, "average": 3.14}}
==================================
my_fake.json


{"is_active": true, 12 }
===================================
my_file_0.txt


Offers a truly innovative approach to education:
focus on building reliable applications and scalable systems, take on real-world challenges, collaborate with your peers. 

A school every software engineer would have dreamt of!
===================================
my_first_file.txt

This School is so cool!
===================================
my_list.json


[1, 2, 3]
===================================
student.json

{"first_name": "John", "last_name": "Doe", "age": 23}
