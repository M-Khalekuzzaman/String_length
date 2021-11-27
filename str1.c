#include<stdio.h>
int main()
{
    char name1[20],name2[20];
    printf("Enter your first name is : ");
    gets(name1);
    printf("Enter your last name : ");
    scanf("%s",&name2);
    int i = 0,count = 0;
    int len = strlen(name2);
    while(name1[i] !='\0')
    {
        i++;
        count++;
    }
    printf("Total length is name1 : %d\n",count);
    printf("Total length is name2 : %d\n",len);
    getch();
}
