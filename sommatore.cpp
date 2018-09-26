#include"sommatore.h"
#include <iostream>
using namespace std;

Sommatore::Sommatore(){

}

Sommatore::~Sommatore() {

}

void Sommatore::sum(int a, int b) {
	cout<< "Somma: " << (a + b);
}
