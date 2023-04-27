def DeleteEndElement(arr):
  n = len(arr)
  k = int(input("Enter the number of values which you want to remove from last: "))
  arr = arr[:n-k]
  return arr
arr = [1, 2, 3, 4, 5]
print(DeleteEndElement(arr))
