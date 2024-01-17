print("Yogesh Kumar Bhatt")
print("Enter the numbers: ")
lst=[]
prime=[]
while(1):
    a=input()
    if a=="END":
        break
    lst.append(int(a))
for i in range(len(lst)):
    if lst[i]>1:
        for j in range(2,lst[i]):
            if(lst[i]%j==0):
                break
        else:
            prime.append(lst[i])
print("So the prime numbers are: ",prime)