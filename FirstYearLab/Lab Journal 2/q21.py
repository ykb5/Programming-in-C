print("Yogesh Kumar Bhatt")

num=int(input("Enter number of elements: "))
lst=[]
sum=0
print("Enter the elements: ")
for i in range(num):
    lst.append(int(input()))
    sum+=lst[i]
print("The sum is ",sum)