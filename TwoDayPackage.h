#pragma once
#include "Package.h"

using namespace std;

class TwoDayPackage : public Package 
{
public:
	TwoDayPackage(string, string, string, string, string, string, string, string, string, string, double c = 1, double w = 1, double flat=1);

	//setters 
	 void setFlatFee(double);
	//getters
	double getFlatFee();

	//calculate
	double calculateCost();//redefine to add the flat fee 
private:
	double flatFee;

};


