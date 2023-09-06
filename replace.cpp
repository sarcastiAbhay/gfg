#include <iostream>
#include <bits/stdc++.h>
#include <string.h>
using namespace std;
// int getlength(char ch[])
// {
//     int length = 0;
//     int i = 0;
//     while (ch[i] != '\0')
//     {
//         length++;
//         i++;
//     }
//     return length;
// }
 void replace(char sens[])
 {
    int i=0;
    int n=strlen(sens);
    for(int i=0;i<n;i++)
    {
        if(sens[i]==' ')
        {
            sens[i]='@';
        }
    }
 }
    int main()
    {
        char name[100];
       cin.getline(name,100);
replace(name);
cout<<name;
           
        return 0;
    }