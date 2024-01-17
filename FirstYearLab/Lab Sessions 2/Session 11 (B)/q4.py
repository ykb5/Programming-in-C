print("Yogesh Kumar Bhatt")
rows=int(input("Enter the number of rows: "))
num=1
for i in range(rows):
    for j in range(i+1):
        print(num,end=" ")
        num+=1
    print()