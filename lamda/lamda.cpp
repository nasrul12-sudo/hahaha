#include <iostream>

using namespace std;

int main(){
    int i = 1, j = 10, k = 100, l = 1000;

    auto lambda= [i, &j] (int k0, int &l0) -> int{
        j = 2* j;
        k0 = 2* k0;
        l0 = 2* l0;
        return i+j+k0+l0;
    };

    cout<<i<<endl;
    cout<<j<<endl;
    cout<<k<<endl;
    cout<<l<<endl;

    cout<<lambda(k,l)<<endl;
    cout<<i<<endl;
    cout<<j<<endl;
    cout<<k<<endl;
    cout<<l<<endl;
    cout<<lambda(k,l)<<endl;







    return 0;
}