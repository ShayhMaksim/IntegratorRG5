//---------------------------------------------------------------------------

#include "custom.h"
#define TIME1 -2.00158510637908252240537862224
#define TIME2 -2.0317326295573368357302057924

//---------------------------------------------------------------------------
// Задача Аренсторфа (начальные условия 1)

const long double TArenstorfModel::m  = 0.012277471;
const long double TArenstorfModel::m1 =(1-0.012277471);

TArenstorfModel::TArenstorfModel( long double t0, long double t1, long double SamplingIncrement )
    : TModel()

{
	this->t0=t0;
	this->t1=t1;
	this->SamplingIncrement=SamplingIncrement;
    X0.Resize(4);
	X0.SetItem(0, 0.994);
	X0.SetItem(1, 0);
	X0.SetItem(2, 0);
    X0.SetItem(3, TIME1);
}

//---------------------------------------------------------------------------

TVector TArenstorfModel::getRight( const TVector& X, long double t )
{
    MyLinearAlgebra::TVector Y(4);
	long double D1=pow(pow((X[0]+m),2)+ pow(X[1], 2), 1.5);
    long double D2=pow(pow((X[0]-m1),2)+ pow(X[1], 2), 1.5);
    Y.SetItem(0, X[2]);
    Y.SetItem(1, X[3]);
    Y.SetItem(2, X[0]+2*X[3]-m1*(X[0]+m)/D1-m*(X[0]-m1)/D2);
    Y.SetItem(3, X[1]-2*X[2]-m1*X[1]/D1-m*X[1]/D2);
    return Y;
}

//---------------------------------------------------------------------------
// Задача Аренсторфа (начальные условия 2)

TArenstorfModel2::TArenstorfModel2( long double t0, long double t1, long double SamplingIncrement )
    : TArenstorfModel( t0, t1, SamplingIncrement )
{
	  X0.SetItem(0, 0.994);
	  X0.SetItem(1, 0);
      X0.SetItem(2, 0);
      X0.SetItem(3, TIME2);
}
//---------------------------------------------------------------------------

