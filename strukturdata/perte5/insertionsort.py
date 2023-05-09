def insertionSort(arr):
    n = len(arr)
 
    for i in range(1, n):
 
        key = arr[i]
 
        j = i-1
        while j >=0 and key < arr[j] :
                arr[j+1] = arr[j]
                j -= 1
        arr[j+1] = key

arr = [54, 67, 20, 15, 22, 78, 61]
print ("sebelum disortir: ",arr)
insertionSort(arr)
 
print ("A:")
for i in range(len(arr)):
    print ("%d" %arr[i]),
