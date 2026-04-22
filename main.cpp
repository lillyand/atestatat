#include <iostream>

using namespace std;

int main()
{
    int n,S=0,szamj,szam,pref=0;
    cout<<"n=";
    cin>>n;
    while(n>0){
        szamj=szam%10;
        szam=szam/10;
        pref=pref+szamj;
        pref=pref*10;
        S=S+pref;
    }
    cout<<S;
    return 0;
}
