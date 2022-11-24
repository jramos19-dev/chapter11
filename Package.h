#pragma once
#include <stdio.h>
#include <iomanip>
#include <iostream>
using namespace std;

class Package
{	// friend functions to output and input 
	friend std::ostream& operator<<(std::ostream&, const Package&);
	friend std::istream& operator>>(std::istream&, Package&);

public:
	//constructor
	 Package(string sN, string sA, string sC, string sT, string SZ, string rN, string rA, string rC, string rS, string rZ, double w, double c);

	//setters for package
	 void setWeight(double);
	 void setCostPO(double);

	 //gettters for weight and cost
	 double getWeight();
	 double getCostPO();



	//setters for sender and receiveer
	 void setSenderName(string);
	 void setReceiverName(string);
	 void setSenderAddress(string);
	 void setReceiverAdress(string);
	 void setSenderCity(string);
	 void setReceiverCity(string);
	 void setSenderState(string);
	 void setReceiverState(string);
	 void setSenderZip(string);
	 void setReceiverZip(string);

	 string getSenderName();
	 string getReceiverName();
	 string getSenderAddress();
	 string getReceiverAdress();
	 string getSenderCity();
	 string getReceiverCity();
	 string getSenderState();
	 string getReceiverState();
	 
	 //strings cause we dont do math with em
	 string getSenderZip();
	 string getReceiverZip();



	double calculateCost();
	
	



private:
	//sender
	string senderName;
	string senderAddress;
	string senderCity;
	string senderState;
	string senderZip;
	//receiver
	string receiverName;
	string receiverAddress;
	string receiverCity;
	string receiverState;
	string receiverZip;

	//weight data members
	double weight;
	double costPerOunce;


	

};


