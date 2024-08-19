arr = [4,5,2,9,6,3,8,1,2]


for i in range(1,len(arr)):
    j = i-1
    temp = arr[i]
    while(j>=0):
        if(arr[j]>temp):
            arr[j+1] = arr[j]
            j-=1
        else:
            break
    arr[j+1] = temp

for i in arr:
    print(i)
