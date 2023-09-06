#include <iostream>
#include <bits/stdc++.h>
#include <string.h>
using namespace std;
int getlength(char ch[])
{
    int length = 0;
    int i = 0;
    while (ch[i] != '\0')
    {
        length++;
        i++;
    }
    return length;
}
void reverse(char name[])
{
    int i = 0;
    int n = getlength(name);
    int j = n - 1;
    while (i <= j)
    {
        swap(name[i], name[j]);
        i++;
        j--;
    }
}
    int main()
    {
        char name[100];
        cin >> name;
          reverse(name);
          cout<<name;
        return 0;
    }