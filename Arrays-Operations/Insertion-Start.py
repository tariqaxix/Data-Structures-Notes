list = [1, 3, 4, 5, 7]
print ("Original list : " + str(list))
k = int(input("Total values to be added: "))
for i in range(k):
  m = int(input("Enter a value at start: "))
  list[:0] = [m]
  print ("Resultant list is : " + str(list))
