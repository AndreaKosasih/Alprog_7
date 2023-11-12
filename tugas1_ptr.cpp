#include <iostream>
using namespace std;

void input(int size, int* array){
    for(int i = 0; i < size; i++){
        cin >> array[i];
    }
}

void outputDariBelakang(int size, int* array){
    for(int i = size - 1; i >= 0; i--){
        cout << *(array + i) << " ";
    }
}

// *(array + i) == array[i]

int main(){
    int size; cin >> size; 
    int array[size]; 
    input(size, array);
    outputDariBelakang(size, array);
    return 0; 
}