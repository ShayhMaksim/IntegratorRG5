//============================================================================
// Name        : Tryyyy.cpp
// Author      : AAA
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================



#include <iostream>
#include "custom.h"
#include <memory>
#include "MyLinearAlgebra.h"

using namespace std;

int main() {
	        std::unique_ptr<TIntegrator> Integrator (new TDormandPrince());
            Integrator->setPrecision(1e-22);

            TModel* Model1 = new TArenstorfModel(0,  102, 0.1);
            TModel* Model2 = new TArenstorfModel2(0, 66, 0.1);

			Integrator->Run( Model1 );
			TMatrix Result = Model1->getResult();
            Result.toText("first");

			Integrator->Run( Model2 );
			Result = Model2->getResult();
            Result.toText("second");


			delete Model1;
		    delete Model2;
		return 0;
}

