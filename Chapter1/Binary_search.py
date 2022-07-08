import math
def BinarySearch(arr1, m, key):
    print(f"sorted array is : {arr1}")
    start = 0
    end = m-1
    while start <= end:
        mid = math.floor(start+end)//2
        if arr1[mid] == key:
            return 1
        elif arr1[mid] < key:
            start = mid+1
        elif arr1[mid] > key:
            end = mid-1
    return 0

m = int(input("Enter the size of array :"))

arr = []
print(f"Enter the {n} element in array")
for i in range(0, m):
    ele = int(input())
    arr.append(ele)

key = int(input("Enter the searching element "))
arr1 = sorted(arr)
print(f"sorted array is : {arr1}")
if(BinarySearch(arr1, m, key)==1):
    print("Element found")
else:
    print("Element not found")
