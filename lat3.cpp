#include <iostream>
using namespace std;

void scanTeks(char* teks, char c){
    char* Ptr_teks = teks;
    int i = 1;
    bool ada = false; 
    while(*Ptr_teks != '\0'){
        if(*Ptr_teks == c){
            cout << i << " ";
            ada = true; 
        }
        Ptr_teks++; 
        i++; 
    }
    if(!ada){
        cout << "-1" << endl; 
    }
}

int main(){
    char teks[100], c; 
    cin.getline(teks, sizeof(teks)); 
    cin >> c; 
    scanTeks(teks, c);
    return 0; 
}