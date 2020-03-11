'''
题目:
  请一个在字符串中找出连续最长的数字串，并把这个串的长度返回；如果存在长度相同的连续数字串，返回最后一个连续数字串；
  注意：数字串只需要是数字组成的就可以，并不要求顺序，比如数字串“1234”的长度就小于数字串“1359055”，如果没有数字，则返回空字符串（“”）而不是NULL！（说明：不需要考虑负数）
  输入描述:
  字符串输出描述:
  连续数字串&在所有数字串最长的长度
  示例1:
  输入:
  abcd12345ed125ss123058789
  输出:
  123058789
  9
'''

#!/usr/bin/python

while True:
    str_len = 0
    pos = 0
    max_len = 0   
    print("input:")
    str1 =  raw_input()
    for index in range(0,len(str1)):
        if str1[index].isdigit():
            str_len += 1
            if str_len >= max_len:
                max_len = str_len
                pos = index
        else:
            str_len = 0
    if max_len:
        print("output:")
        print("%s" % str1[pos -max_len + 1: pos+1])
        print(max_len)
