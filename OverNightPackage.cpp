#include "OverNightPackage.h"
#include "Package.h"
#include <exception>
#include <stdexcept>
using namespace std;

//constructor
OverNightPackage::OverNightPackage(string sN, string sA, string sC, string sS, string sZ, string rN, string rA, string rC, string rS, string rZ, double w, double c, double of)
	: Package(sN, sA, sC, sS, sZ, rN, rA, rC, rS, rZ, w, c)
{
	setOF(of);
}

//setters 
void OverNightPackage::setOF(double of) {
	if (of > 0) {
		 overnightFee = of;
	}
	else {
		throw invalid_argument("invalid overnight fee, please input value higher than 0");
	}

}; // set overnight fee by multiplying fee 

//getters
double OverNightPackage::getOF() {
	return overnightFee;
}; //overnight fee by multiplying the weight times the additional fee per oz

//calculate
double OverNightPackage::calculateCost(){
	return (OverNightPackage::getOF() + Package::getCostPO()) * Package::getWeight();  // weight x ( overnightfee + cost per ounce)

};//redefine to add the flat fee 

