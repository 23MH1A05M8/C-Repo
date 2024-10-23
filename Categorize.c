#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n<150)
    {
        printf("Person is Dwarf.\n");
    }
    else if(n>150&&n<=165)
    {
        printf("Person is average heighted.\n");
    }
    else if(n>165&&n<=195)
    {
        printf("Person is taller.\n");
    }
    else{
        printf("Abnormal height.\n");
    }
}