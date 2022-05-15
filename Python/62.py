student={
    'Student 1':65,
    'Student 2':70,
    'Student 3':75,
    'Student 4':80
}

max_total=max(student.values())

for key,value in student.items():
    if value==max_total:
        print(key)