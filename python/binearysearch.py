def bin_search(arr, num):
    x = len(arr)
    first = 0
    last = x - 1
    while(first +1 != last):
        #print(last)
        mid = (first + last) // 2
        if arr[mid] == num:
            return True
        elif num > arr[mid]:
            first = mid
        else:
            last = mid
    if arr[0] == num or arr[x-1] == num:
        return True
    return False

if __name__ == '__main__':
    arr = [0,3,4,5,6,7,9]
    for i in range(12):
        chack = bin_search(arr,i)
        print(chack)
