

#!/usr/bin/python

array = []
m = 0
index = 0

while True:
    print("input:")
    m = int(raw_input())
    if m < 1 or m > 99:
        print("please input number range 1 - 100:")
    for i in range(1,101):
        array.append(i)
        index = 0
    while True:
        n = 0
        for i in range(100):
            if array[i] != 0:
                index += 1
            if index == m:
                array[i] = 0;
                index = 0

        for i in range(100):
            if array[i] != 0:
                n += 1
        if n < m:
            break    
    print("output:")
    for i in range(100):
        if array[i] != 0:
            print(array[i])
    del array[:]

