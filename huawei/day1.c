/*
 * 题目:
 * 请一个在字符串中找出连续最长的数字串，并把这个串的长度返回；如果存在长度相同的连续数字串，返回最后一个连续数字串；
 * 注意：数字串只需要是数字组成的就可以，并不要求顺序，比如数字串“1234”的长度就小于数字串“1359055”，如果没有数字，则返回空字符串（“”）而不是NULL！（说明：不需要考虑负数）
 * 输入描述:
 * 字符串输出描述:
 * 连续数字串&在所有数字串最长的长度
 * 示例1:
 * 输入:
 * abcd12345ed125ss123058789
 * 输出:
 * 123058789
 * 9
 */

#include <stdio.h>
#include <string.h>

int main()
{
    char str[128] = {0};
    int maxlen = 0;
    int pos = -1;
    int len = 0;
    int i = 0;

    while(1)
    {
        len = 0;
        maxlen = 0;
        printf("输入:\n");
        scanf("%s", str);
        for(i = 0; i< strlen(str); ++i)
        {
            if(str[i] >= '0' && str[i] <= '9')
            {
                len++;
                if(maxlen <= len)
                {
                    maxlen = len;
                    pos = i;
                }
            }
            else
                len = 0;
        }
        printf("输出:\n");
        if(maxlen)
        {
            for(i = (pos - maxlen + 1); i < pos + 1; ++i)
            {
                printf("%c",str[i]);
            }
            printf("\n");
        }
        printf("maxlen = %d\n", maxlen);
    }
    return 0;
}





