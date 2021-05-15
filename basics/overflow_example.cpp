#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x = INT_MAX;
    cout<<"maximum integer is: "<<x<<endl;
    cout<<"overflow example of char ";
    char z = 127;
    ++z;
    cout<<(int)z;
}