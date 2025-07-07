#ifndef MOUNTZA_H
#define MOUNTZA_H
#include <iostream>
#include <vector>
#include <string>
using namespace std;
class mountza
{
    public:
        mountza();
        virtual ~mountza();
        mountza(const mountza& other);
        mountza& operator=(const mountza& other);
        long double numbe;
        vector<long double> subseq;
        string o_mouzomenos;
        long double mntz(long double fnum,long double dexia);

    protected:

    private:
};

#endif // MOUNTZA_H
