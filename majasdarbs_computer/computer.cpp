#include "computer.h"

computer::computer()
{
    price = 0;
    weight = 0;
	//
}

bool computer::Set(double a, double b)
{
    if (a>b){
        a = price;
        b = weight;
        return true;}
        else{return false;
    }
}

