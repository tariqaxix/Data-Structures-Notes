def remove_start_element(arr):
  k = int(input("Enter the number of values you want to remove from start: "))
  arr = arr[k:]
  return arr
arr = [1, 2, 3, 4, 5]
print(remove_start_element(arr))