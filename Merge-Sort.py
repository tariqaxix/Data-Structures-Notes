def merge_sort(A):
    if len(A) > 1:
        m = len(A) // 2
        L = A[:m]
        R = A[m:]
        merge_sort(L)
        merge_sort(R)

        i = 0
        j = 0
        k = 0
        while i < len(L) and j < len(R):
            if L[i] < R[j]:
                A[k] = L[i]
                i = i + 1
            else:
                A[k] = R[j]
                j = j + 1
            k = k + 1

        while i < len(L):
            A[k] = L[i]
            i = i + 1
            k = k + 1

        while j < len(R):
            A[k] = R[j]
            j = j + 1
            k = k + 1
    return A
A = [7, 9, 1, 5, 3, 8, 6, 4]
print("The original array is", A)
print("The sorted array is", merge_sort(A))