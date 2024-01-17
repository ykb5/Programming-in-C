print("Yogesh Kumar Bhatt")
# a.	Creating a dictionary
dictry = {'Brand':'Xiaomi', 'Variant': '6GB 128GB', 'Price': []}
# b.	Adding key, value pairs to the dictionary
dictry["Price"] = "16000"
# c.	Search using a key or value in a dictionary
print("Printing Dictionary: ",dictry)
print("Brand : ",dictry['Brand'])
print("Variant : ",dictry['Variant'])
print("Price : ",dictry['Price'])
# d.	Removing the elements from the dictionary
del dictry['Price']
print("Printing Dictionary after deletion: ",dictry)