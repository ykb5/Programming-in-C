print("Yogesh Kumar Bhatt")

num=int(input("Enter number of elements: "))
lst=[]
new=[]
print("Enter the elements: ")
for i in range(num):
    lst.append(input())
for i in lst:
    if i not in new:
        new.append(i)
print("New unique list is: ", new)