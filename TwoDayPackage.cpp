#include "TwoDayPackage.h"
#include "Package.h"
#include <exception>
#include <stdexcept>
using namespace std;

//constructor
TwoDayPackage::TwoDayPackage(string sN,string sA,string sC,string sS,string sZ,string rN,string rA,string rC,string rS,string rZ,double w, double c,double flat)
	:Package(sN,sA,sC,sS,sZ,rN,rA,rC,rS,rZ,w,c)
{
	setFlatFee(flat);
}

//set flat
void TwoDayPackage::setFlatFee(double f) {
	if (f >= 0) {
		flatFee = f;
	}
	else {
		throw invalid_argument("invalid flat fee, please input flat fee higher than 0");
	}
}


double TwoDayPackage::getFlatFee() {
	return flatFee;
}

//override the calculateCost
double TwoDayPackage::calculateCost() {
	return Package::calculateCost() + TwoDayPackage::getFlatFee();
}   
