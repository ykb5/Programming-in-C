print("Yogesh Kumar Bhatt")
s = input("Enter the String: ").split()
d={}
for i in s:
     d[i] = len(i)

l2 = sorted(d.keys(), key=len, reverse  = True)
l3 = sorted(d.values(), reverse = True)

for i in range(len(l3)):
     print(f"{l3[i]} : {l2[i]}", end=' ')