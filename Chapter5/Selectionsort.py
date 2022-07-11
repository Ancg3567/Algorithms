def SelectionSort(arr, r):
    for i in range(0, r - 1):
        min1 = i
        for j in range(i + 1, r):
            if arr[min1] > arr[j]:
                min1 = j

        arr[min1], arr[i] = arr[i], arr[min1]
    return arr


arr = []
r = int(input("Enter the number of element in array"))
for i in range(0, r):
    ele = int(input(f"Enter the {i} element: "))
    arr.append(ele)

print(f"The Selection Sort is: {SelectionSort(arr, r)}")
