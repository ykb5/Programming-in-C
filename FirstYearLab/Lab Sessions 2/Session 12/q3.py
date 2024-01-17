print("Yogesh Kumar Bhatt")
s = input("Enter the string: ")
p_marks = '''!()-[]{};:'"\,<>./?@#$%^&*_~'''
for mark in s:
    if mark in p_marks:
        s = s.replace(mark, "")
print("The string after punctuation filter :", s)