#include <iostream>
#include <bits/stdc++.h>
#include <string.h>
using namespace std;
bool checkpalindrome(char name[])
{
    int i = 0;
    int n = strlen(name);
    int j = n - 1;
    while (i <= j)
    {
        if (name[i] != name[j])
            return false;
        else
        {
            i++;
            j--;
        }
    }
    return true;
}
int main()
{
    char name[100];
cin.getline(name,100);
    return 0;
}