#include <iostream>

using namespace std;

int main()
{
    int n,fakt=1,S=0;
    cout<<"n=";
    cin>>n;
    for(int i=1;i<=n;i++){
        fakt=fakt*i;
        if(i%2==1){
            S=S+fakt;
        }else{
            S=S-fakt;
        }
    }
    cout<<S;

    return 0;
}
