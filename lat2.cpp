#include <iostream>
using namespace std;

int main(){
    int a, b; cin >> a >> b; 
    int *Ptr_a = &a;
    int *Ptr_b = &b;
    if(a > b){
        Ptr_a = &b; 
        Ptr_b = &a;
    }
    cout << *Ptr_a << " " << *Ptr_b << endl; 
    return 0; 
}