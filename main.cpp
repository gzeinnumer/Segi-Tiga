#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

float funArea(int lebar, int tinggi);

int main(int argc, char** argv) {
    
    int lebar, tinggi; 
	float area;
    
    cout << "Lebar : "; cin >> lebar;
    cout << "Tinggi : "; cin >> tinggi;
    
    area = funArea(lebar, tinggi); 
  
  	cout << "Area = (1/2)*Lebar*Tinggi = " << area;  
	return 0;
}

float funArea(int lebar, int tinggi){
	float hasil;
	hasil = (float) lebar*tinggi*0.5;
	return hasil;
}
