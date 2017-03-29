#include <iostream>
#include <fstream>
#include <cstdlib>
#include "rating.h"
using namespace std;

int main(){
	int K,ratea,rateb;
	float act_scro;
	
	ifstream inFile("infile.txt", ios::in);
	if(!inFile){
		cerr << "Failed opening" << endl;
		exit(1);
	}
	
	inFile >> K >> ratea >> rateb;
	Rate ratea(),rateb();
	
	ofstream outFile("outfile.txt", ios::out);
	if(!outFile) {
		cerr << "Failed opening" << endl;
		exit(1);
	}

	while( inFile >> act_scro){
		outFile << ratea.Update(K,rateb.returnValue(),act_scro) << "\t" <<
			rateb.Update(K,ratea..returnValue(),act_scro) << endl;
	}
	
	return 0;
}