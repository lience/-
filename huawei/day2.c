/*；题目：报数游戏
 *
 * 100个人围成一圈，每个人有一个编码，编号从1开始到100。他们从1开始依次报数，
 * 报到为M的人自动退出圈圈，然后下一个人接着从1开始报数，直到剩余的人数小于M。
 * 请问最后剩余的人在原先的编号为多少？ 例如输入M=3时，输出为： “58,91” ，
 * 输入M=4时，输出为： “34,45,97”
 *
 * */

#include <stdio.h>
#include <string.h>

int main()
{
    int m = 0;
    int i = 0;
    int index = 0;
    int n = 0;
    int buf[100] = {0};
    while(1)
    {
        printf("输入:\n");
        scanf("%d", &m);
        if(m < 1 || m > 99)
        {
            printf("请输入1-100内的整数\n");
            continue;
        }
        index = 0;
        memset(buf, 0, sizeof(buf));
        do
        {
            n = 0;
            for(i = 0; i < 100; ++i)
            {
                if(buf[i] == 0)
                    index++;
                if(index == m)
                {
                    buf[i] = 1;
                    index = 0;
                }
            }
#if 1
            for(i = 0; i< 100; ++i)
            {
                if(buf[i] == 0)
                    n++;
            }
#endif
        }while(n >= m);
        printf("输出:\n");
        for(i = 0; i < 100; ++i)
        {
            if(buf[i] == 0)
                printf("%d,", (i + 1));
        }
        printf("\b \n");
    }
    return 0;
}
