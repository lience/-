
/*  题目：将一个uint32的整形数以二进制前后翻转输出 */

#include <stdio.h>
#include <stdint.h>

/*第一种方法：*/
/*取出每一位与0按位或在左移 (m >> i) & 1 取出一位*/
#if 0
int main()
{
    uint32_t m = 0;
    uint32_t ret = 0;
    scanf("%d", &m);
    printf("m = %u\n", m);

    int i = 0;

    for(i = 0; i < 32; ++i)
    {
        ret = ret << 1;
        ret  = ret | ((m >> i) & 1);
    }
    printf("输出：%u\n", ret);
    return 0;
}
#endif



#if 1
/*第二种方法：*/
/*按照计算一个数的二进制方法去做 然后将每次得到的余数左移对应的位数*/
int main()
{
    uint32_t m = 0;
    uint32_t ret = 0;
    int i = 32;
    scanf("%d", &m);

    do{
        i--;
        ret = ret + ((m % 2) << i);
        m = m / 2;
    }while(m != 0);

    printf("ret = %u\n", ret);
    return 0;
}
#endif


