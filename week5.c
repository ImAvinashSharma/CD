#include <stdio.h>

#include <string.h>

char str[10];
int i, error;
void A();
void B();
void S();
int main()
{
    i = 0;
    error = 0;
    printf("enter the string");
    scanf("%s", str);
    S();
    if (strlen(str) == i && error == 0)
        printf("Given grammer is Accepted\n");
    else
        printf("Given grammer is not accepted\n");
}
void S()
{
    A();
    B();
}
void A()
{
    if (str[i] == 'a')
    {
        i++;
    }
}
void B()
{
    if (str[i] == 'b')
    {
        i++;
    }
}
