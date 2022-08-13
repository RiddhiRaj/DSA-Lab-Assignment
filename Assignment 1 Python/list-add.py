#Concatenate two lists index-wise

list1 = ["WELL", "HELLO", "WORLD"]
list2 = ["HI", "TEDDY", "TEST"]
for i in range(len(list1)):
    list1[i] = list1[i] + list2[i]
print(list1)
