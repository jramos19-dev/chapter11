#pragma once
#include "Package.h"

using namespace std;

class OverNightPackage : public Package
{
public:
	 OverNightPackage(string, string, string, string, string, string, string, string, string, string, double c = 1, double w = 1, double oF = 1);

	//setters 
	void setOF(double); // set overnight fee by multiplying fee 
	//getters
	double getOF(); //overnight fee by multiplying the weight times the additional fee per oz

	//calculate
	double calculateCost();//redefine to add the flat fee 
private:
	double overnightFee; 

};


