#include <iostream>
#include <bits/stdc++.h>
#include <string.h>
using namespace std;
 
 void uperc(char sen[])
 {
    
    int n=strlen(sen);
    
    for(int i=0;i<n;i++){
        if(sen[i]>='a'&& sen[i]<='z'){
       sen[i]=sen[i]-'a'+'A';
        }
    }
 }
    int main()
    {
        char name[100];
       cin.getline(name,100);
uperc(name);
cout<<name;
           
        return 0;
    }