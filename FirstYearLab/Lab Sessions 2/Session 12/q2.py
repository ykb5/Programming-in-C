print("Yogesh Kumar Bhatt")
f = open("File.txt","r")
s = f.read()
print("Content of File:", s)
print("Number of words in text file :", len(s.split()))
f.close()