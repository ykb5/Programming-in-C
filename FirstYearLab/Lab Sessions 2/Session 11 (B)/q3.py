print("Yogesh Kumar Bhatt")
import random
rnum=random.randrange(20)
num=int(input("Guess a number(1-20): "))
print("Number: ",rnum)
if(num==rnum):
    print("You Win")
else:
    print("Better Luck Next Time")