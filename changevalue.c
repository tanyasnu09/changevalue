#include <stdio.h>
void changevalue(int *address)
{
    *address = 67;

}
int main()
{
    int a=34;
    printf("the value of a now is %d",a);
    chamgevalue(&a);
    printf(:"the value of a now is %d",a);

}