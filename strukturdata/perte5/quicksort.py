def partition(arr, rendah, tinggi):
    i = (rendah-1)         
    pivot = arr[tinggi]   
 
    for j in range(rendah, tinggi):
 
        if arr[j] <= pivot:
 

            i = i+1
            arr[i], arr[j] = arr[j], arr[i]
 
    arr[i+1], arr[tinggi] = arr[tinggi], arr[i+1]
    return (i+1)
 
 
def quickSort(arr, rendah, tinggi):
    if len(arr) == 1:
        return arr
    if rendah < tinggi:
 
        pi = partition(arr, rendah, tinggi)
 
        quickSort(arr, rendah, pi-1)
        quickSort(arr, pi+1, tinggi)

arr = [65, 46, 98, 34, 43, 10, 98]
n = len(arr)
quickSort(arr, 0, n-1)
print("Array yang sudah disoritr:")
for i in range(n):
    print("%d" % arr[i])
