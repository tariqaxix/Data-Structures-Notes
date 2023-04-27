def DeleteAtPos(arr, index):
    n = len(arr)
    if index >= n or index < 0:
        return arr
    A = [0] * (n - 1)
    for i in range(index):
        A[i] = arr[i]
    for i in range(index + 1, n):
        A[i - 1] = arr[i]
    return A

list = [1, 3, 4, 5, 7, 8, 9]
index = int(input("Enter index to delete: "))
list = DeleteAtPos(list, index)
print (str(list))
