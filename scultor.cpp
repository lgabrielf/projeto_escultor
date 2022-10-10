#include "scultor.h"

Scultor::Scultor(int _nx, int _ny, int _nz){
   this->nx = _nx;
   this->ny = _ny;
   this->nz = _nz;
}

//destrutor da classe
Scultor::~Scultor(){

}

void Scultor::setColor(float r, float g, float b, float a){
    this-> r = r;
    this-> g = g;
    this-> b = b;
    this-> a = a;
}


