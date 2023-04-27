def bubble_sort(A):
    n = len(A)
    for i in range(n):
        for j in range(0, n-i-1):
            if A[j] > A[j+1]:
                A[j], A[j+1] = A[j+1], A[j]
    return A
A = [7, 9, 3, 6, 2, 0, 5]
print(bubble_sort(A))
