def bubble_sort(list1):
    for i in range (0, len(list1)-1): 
        for j in range(len(list1)-1): 
            if(list1[j]>list1[j+1]):
    
                """temp = list1[j]
                list1[j] = list1[j+z1]
                list1[j+1] = temp"""
                list1[j],list1[j+1] = list1[j+1],list1[j]
    return list1

list1 = [5,3,8,6,7,2]
print("List yang belum di sort: ", list1)
print("Liat yang sudah di sort : ", bubble_sort(list1))
