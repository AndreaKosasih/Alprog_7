#include <iostream> 
#include <cmath>
#include <iomanip>
using namespace std;

struct Titik {
    int x, y;
};

float jarakKoordinat(Titik* a, Titik* b){
    float jarak = sqrt(pow(a->x - b->x, 2) + pow(a->y - b->y, 2));
    return jarak; 
}

int main(){
    Titik a, b; 
    cin >> a.x >> a.y; 
    cin >> b.x >> b.y;
    cout << fixed << setprecision(2)<< jarakKoordinat(&a, &b) << endl; 
}