def InsertionAtPos(m, A, pos):
    return A[:pos-1]+[m]+A[pos-1:]
A = [1, 2, 3, 4, 5, 6]
pos = int(input("Enter the index where the element to be inserted: ")) + 1
m = int(input("Enter the value: "))
result = InsertionAtPos(m, A, pos)
print(result)
