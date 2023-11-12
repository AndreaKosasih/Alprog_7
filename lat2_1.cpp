#include <iostream>
using namespace std;

int main(){
    int a, b; cin >> a >> b;
    int *Ptr_a = &a;
    int *Ptr_b = &b;
    if(a > b){
        int temp = *Ptr_a;
        *Ptr_a = *Ptr_b;
        *Ptr_b = temp;
    }
    cout << *Ptr_a << " " << *Ptr_b << endl; 
    // cout << a << " " << b << endl; 
    return 0; 
}