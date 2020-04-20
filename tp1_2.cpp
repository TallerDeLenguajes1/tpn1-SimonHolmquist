#include <iostream>

using namespace std;
//a)
int cuadradoInt(int a){
    return a*a;
}
//b)
void cuadradoVoid(int *a){
    *a = (*a)*(*a);
}
//c)
void DirCont(int *a){
    cout<<a<<' '<<*a<<'\n';
}
//d)
void invertir(int *a, int *b){
    int c = *a;
    *a = *b;
    *b = c;
}
//e)
void ordenar(int *a, int *b){
    if(*a>*b) invertir(a,b);
}
//f)
int main(){
    int a, b;
    while(cin>>a>>b){
        ordenar(&a,&b);
        cout<<a<<' '<<b<<'\n';
    }
    return 0;
}