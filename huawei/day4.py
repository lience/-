#酒馆里有m个龙头可供顾客们接啤酒，每个龙头每秒的出酒量相等，都是1。现有n名顾客准备接酒，
#他们初始的接酒顺序已经确定。将这些顾客按接酒顺序从1到n编号，i号顾客的接酒量为w_i。接酒开始时，
#1到m号顾客各占一个酒龙头，并同时打开龙头接酒。当其中某个顾客j完成其接酒量要求wj后，
#下一名排队等候接酒的顾客k马上接替j顾客的位置开始接酒。这个换人的过程是瞬间完成的，
#且没有任何酒的浪费。即j顾客第x秒结束时完成接酒，则k顾客第x+1秒立刻开始接酒。若当前接酒人数n’不足m，
#则只有n’个龙头供酒，其它m-n’个龙头关闭。现在给出n名顾客的接酒量，按照上述规则，问所有顾客都接完酒需要多少秒？

#事例：
#输入: 
#5 3
#4 4 1 2 1
#输出:
# 4

#!/usr/bin/python


people = 0   #人数
drink = 0    #酒龙头数
maxnum = 0   #最终需要的时间
s1 = []
s2 = []
pos = 0
index1 = 0



# 输入人数与酒龙头数
for i in map(int, raw_input().split()):
    s1.append(i)
    
people = s1[0]
drink = s1[1]
print("people = %d drink = %d" % (people, drink))


#输入每个人的接酒量
for i in map(int, raw_input().split()):
    s2.append(i)
    if len(s2) == people:
        break

print(s2)
if people <= drink:
    for index in range(people):
        if maxnum < s2[index]:
            maxnum = s2[index]
    print(maxnum)
else:
    while True:
        for i in range(drink):
            if  s2[i] == 0:
                if (drink + index1) < people:
                    print(index1)
                    s2[i] = s2[drink + index1]
                    s2[i] = s2[i] - 1
                    index1 += 1
            else:
                s2[i] = s2[i] - 1
        pos = 0
        for i in range(drink):
            if s2[i] > 0:
                pos = 1
                break
        maxnum += 1
        if pos == 0:
            break
    print(maxnum)
        


