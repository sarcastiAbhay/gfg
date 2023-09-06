#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool compare(string a, string b)
{
    if (a.length() != b.length())
    {
        return false;
    }
    int i = 0;
    int j = 0;

    int n = a.length();
    for (int i = 0; i < n; i++)
    {
        if (a[i] != a[j])
        {
            return false;
        }
        j++;
    }
    return true;
}
int main()
{
    string a;
    string b;
    cin >> a >> b;
cout<<compare(a,b);
    return 0;
}