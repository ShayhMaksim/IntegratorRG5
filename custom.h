//---------------------------------------------------------------------------

#ifndef customH
#define customH

#include "model.h"


//---------------------------------------------------------------------------
// Задача Аренсторфа (начальные условия 1)
using namespace MyLinearAlgebra;

class TArenstorfModel : public TModel
{
    protected:
        static const long double m;
        static const long double m1;
    public:
        TArenstorfModel( long double t0, long double t1, long double SamplingIncrement );
        TVector getRight( const TVector& X, long double t );
};

//---------------------------------------------------------------------------
// Задача Аренсторфа (начальные условия 2)

class TArenstorfModel2 : public TArenstorfModel
{
    public:
        TArenstorfModel2( long double t0, long double t1, long double SamplingIncrement );
};
//---------------------------------------------------------------------------
#endif
