#include <stdio.h>
void ft_sub(int *ptr,int num)
{
    //int *ptr_num;
    //ptr_num = &num;
    *ptr -= num;
    //printf("\n%p\n",ptr_num);
}

int main(void)
{
    int a = 3;
    int b = 5;
    int *ptr_a = &a;

    //printf("%p\n",&a);
    printf("%i\n",a);
    ft_sub(ptr_a,b);
    printf("%i\n",a);
    return(0);
}