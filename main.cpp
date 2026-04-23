#include <iostream>

using namespace std;

bool prim(int n){
    for(int oszto=2;oszto*oszto<=n;oszto++)
        if(n%oszto==0){
            return false;
        }return true;
}

int main()
{
    int x,y,k, szamlalo;
    cout<<"x=";
    cin>>x;
    cout<<"y=";
    cin>>y;
    cout<<"k=";
    cin>>k;

    for(int i=x;i<y;i++){
        if(prim(i)){
            cout<<i<<" ";
            szamlalo++;
        }
    }
    if(szamlalo<k){
        cout<<endl;
        cout<<"s-au gasit mai putine numere prime: "<<szamlalo;
    }


    return 0;
}
