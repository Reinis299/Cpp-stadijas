#include "monitor.h"

monitor::monitor()
{
    price = 0;
    size = 0;
}

bool monitor::Set(double a, double b)
{
    if (a>b){
        a = price;
        b = size;
        return true;}
        else{return false;
    }
}
