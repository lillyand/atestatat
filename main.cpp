#include <iostream>

using namespace std;

bool prim(int x){
    for(int oszto=2;oszto*oszto<=x;oszto++)
        if(x%oszto==0){
            return false;
        }return true;
}

int main()
{
    int n;
    cout<<"n=";
    cin>>n;
    for(int i=3;i<n;i++){
        if(prim(i)&&prim(i+2)){
            cout<<"("<<i<<","<<i+2<<")";
        }
    }


    return 0;
}
