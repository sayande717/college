sample_dict= {
    "name": "Kelly",
    "age":25,
    "salary":8000,
    "city":"New York"
}

keys=["name","salary"]


for k in keys:
    sample_dict.pop(k)

print(sample_dict)