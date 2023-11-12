#include <iostream>
using namespace std;

void menyalin(char* teksInput, char* teksOutput){
    while(*teksInput != '\0'){
        *teksOutput = *teksInput; //textinput[0]
        teksInput++;
        teksOutput++;
    }
}

int main(){
    char teksInput[100], teksOutput[100];
    // getline(cin, nama string) untuk string
    // cin.getline(nama array char, ukuran array) untuk char array
    cin.getline(teksInput, sizeof(teksInput));
    menyalin(teksInput, teksOutput); 
    cout << teksOutput << endl; 
    return 0; 
}

/*
int array a[5] = {0,1,2,3,4}
int *ptr //mendeklarasikan pointer
ptr = &a -> a[0]

int *ptr
int* ptr
*/

/*

memory applications
te
*/
