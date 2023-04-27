def insert_at_end(arr, x):
    n = len(arr)
    new_arr = [0] * (n + 1)
    for i in range(n):
        new_arr[i] = arr[i]
    new_arr[n] = x
    return new_arr

list = [1, 3, 4, 5, 7]
print ("Original list : " + str(list))
k = int(input("Total values to be added: "))
for i in range(k):
    m = int(input("Enter a value at end: "))
    list = insert_at_end(list, m)
    print ("Resultant list is : " + str(list))
