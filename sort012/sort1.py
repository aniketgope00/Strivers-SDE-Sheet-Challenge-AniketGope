def sortColors(nums)->None:
    keyList = [0,1,2]
    d = {}
    for k in keyList:
        d[k]=nums.count(k)
    start = 0
    for k in keyList:
        for _ in range(d[k]):
            nums[start] = k
            start += 1
    print(nums)
    

sortColors([0,1,0,2,1,0,1,2,1])

    