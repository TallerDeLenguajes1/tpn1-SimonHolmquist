#include <iostream>

using namespace std;

int main(){
    int *p, a = 5;
    p = &a;
    //a)
    cout<<*p<<'\n';
    //b)
    cout<<p<<'\n';
    //c)
    cout<<&a<<'\n';
    //d)
    cout<<&p<<'\n';
    //e)
    cout<<sizeof(p)<<' '<<sizeof(a)<<'\n';
    return 0;
}