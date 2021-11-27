#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    char name[20];
    cout<<"Enter your full name is : ";
    gets(name);
    int i = 0,len = 0;
    while(name[i] !='\0')
    {
        i++;
        len++;
    }
    cout<<"Total length is : "<<len<<endl;
    getch();
}
