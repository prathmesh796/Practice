emp={'ename':'prathm', 'eage':18, 'salary':00, 'company':'nothing'}

#accessing dictionary value
print("your salary is:" ,emp['salary'])

#updating dictionary value
emp['salary']=(input("salary:"))
print(emp)

#deleting dictionary elemen
del emp["company"]
print(emp)
