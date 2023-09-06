#include<iostream>
#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int getlength(char ch[])
{
    int length=0;
    int i=0;
    while(ch[i]!='\0')
    {
        length++;
        i++;
    }
    return length;
}
int main(){
char name[100];
// getline(cin,name);
// cin.getline(name,50);
cin>>name;
cout<<getlength(name);


    return 0;
}