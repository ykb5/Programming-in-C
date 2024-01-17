print("Yogesh Kumar Bhatt")
n=int(input("Enter the number of values: "))
d={}
for i in range(n):
    keys=input("Enter the key: ")
    values=input("Enter the value: ")
    d[keys]=values
print(d)
vals=d.values()
max=max(vals)
print("Highest item: ",max)