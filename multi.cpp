#include "multi.h"
#include <iostream>
using namespace std;
multi::multi(){}//ctor

multi::~multi(){}//dtor

multi::multi(const multi& other){}//copy ctor

multi& multi::operator=(const multi& rhs)
{
    if (this == &rhs) return *this; // handle self assignment
    //assignment operator
    return *this;
}

long double multi::move_and_find(long double aristera,long double dexia){
    long double x=1;
    long double near_find=0;
    for(;;){
    near_find=dexia*x;
    if(near_find>aristera){x-=1;near_find=dexia*x;break;}
    if(near_find==aristera){break;}
    if(near_find<aristera){x+=1;}
    }
    xofmulti=x;
    addofx=aristera-near_find;
    //cout<<"x " << x << " * " << dexia << " := " << near_find <<" ";
    //cout<<" and y := " << addofx<<"\n";
   return addofx;
}
