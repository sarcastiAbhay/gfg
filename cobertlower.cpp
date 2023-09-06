#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void lower(char sen[])
{
    int n=strlen(sen);
    for(int i=0;i<n;i++)
    {
        if(sen[i]>='A' && sen[i]<='Z')
        {
            sen[i]=sen[i]+32;
        }
    }

}
int main(){
char arr[100];
cin.getline(arr,100);
lower(arr);
cout<<arr;

    return 0;
}