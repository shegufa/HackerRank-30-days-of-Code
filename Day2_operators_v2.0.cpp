#include<bits/stdc++.h>
using namespace std;

int main()
{
    double meal;
    int tip,tax;
    cin>>meal>>tip>>tax;
    double total;
    total = meal+meal*(tip/100.0)+meal*(tax/100.0);
    cout<<round(total);
    return 0;
}
