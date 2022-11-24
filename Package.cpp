#include "Package.h"
#include <stdexcept>
#include <iomanip>
#include <iostream>
#include <math.h>

using namespace std;

ostream& operator <<(ostream& output, const Package& p) {
	output << "Sender Name: " << p.senderName << "\nSender Address: " << p.senderAddress
		<< "\nSender City: " << p.senderCity << "\nSender State: " << p.senderState
		<< "\nSender Zip: " << p.senderZip << "Receiver Name: " << p.receiverName
		<< "\nReceiver Address: " << p.receiverAddress << "\nReceiver City: " << p.receiverCity
		<< "\nReceiver State: " << p.receiverState << "\nReceiver Zip: " << p.receiverZip <<
		"\nShipping Cost: " <<"";
	return output;

}


Package:: Package(string sN, string sA, string sC, string sS, string sZ,
	string rN, string rA, string rC, string rS, string rZ, double w, double c)
{
	senderName = sN;
	senderAddress = sA;
	senderCity = sC;
	senderState = sS;
	senderZip = sZ;
	receiverName = rN;
	receiverAddress = rA;
	receiverCity = rC;
	receiverState = rS;
	receiverZip = rZ;
	Package::setWeight(w);
	Package::setCostPO(c);
	// the rest of the values will be given null values 
}


//calculate cost
double Package::calculateCost() {
	return getWeight() * getCostPO();
}

//set weight and cost per weight
void Package::setCostPO(double c) {

	if (c > 0) {
		costPerOunce = c;
	}
	else {
		throw invalid_argument("must be a valid cost per ounce");
	}

}
void Package::setWeight(double w) {
	if (w > 0) {
		weight = w;
	}
	else {
		throw invalid_argument("must be a valid weight");
	}

}

//get weight and cost per weight
double Package::getWeight() {
	return weight;
}
double Package::getCostPO() {
	return costPerOunce;
}

//setters for sender and receiver
void Package::setSenderName(string s) {
	senderName = s;
}
void Package::setReceiverName(string r) {
	receiverName = r;
}
void Package::setSenderAddress(string s) {
	senderAddress = s;
}
void Package::setReceiverAdress(string r) {
	receiverAddress = r;
}
void Package::setSenderCity(string s) {
	senderCity = s;
}
void Package::setReceiverCity(string r) {
	receiverCity = r;
}
void Package::setSenderState(string s) {
	senderState = s;
}
void Package::setReceiverState(string r) {
	receiverState = r;
}
void Package::setSenderZip(string s) {
	senderZip = s;
}
void Package::setReceiverZip(string r ) {
	receiverZip = r;
}

//getters for sender and receiver
string Package::getSenderName() { return senderName; }
string Package::getReceiverName() { return receiverName; }
string Package::getSenderAddress() { return senderAddress; }
string Package::getReceiverAdress() { return receiverAddress; }
string Package::getSenderCity() { return senderCity; }
string Package::getReceiverCity() { return receiverCity; }
string Package::getSenderState() { return senderState; }
string Package::getReceiverState() { return receiverState; }
string Package::getSenderZip() { return senderZip; }
string Package::getReceiverZip() { return receiverZip; }
