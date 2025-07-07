#ifndef MULTI_H
#define MULTI_H


class multi
{
    public:
        multi();
        virtual ~multi();
        multi(const multi& other);
        multi& operator=(const multi& other);
        long double xofmulti=0;
        long double addofx=0;
        long double move_and_find(long double aristera,long double dexia);

    protected:

    private:
};

#endif // MULTI_H
