#include<bits/stdc++.h>
using namespace std;

#define scn scanf("%d",&n)

int main()
{
    int n;
    scn;

    if(n%2==1 || (n%2==0 && n>=6 && n<=20)) printf("Weird");
    else printf("Not Weird");

    return 0;
}
