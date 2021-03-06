/*
 * Utilities.cpp
 *
 *  Created on: Nov 6, 2013
 *      Author: henrique
 */
#include <sstream>
#include <fstream>
#include <time.h>
#include "Utilities.h"
#include "Exceptions.h"
using namespace std;

struct tm *getTimeInfo() {
	time_t rawtime;
	struct tm * timeinfo;

	time(&rawtime);
	timeinfo = localtime(&rawtime);

	return timeinfo;
}

int getAnoActual() {
	return (1900 + getTimeInfo()->tm_year);
}


bool fileExists(const string &fileName) {
	ifstream infile(fileName.c_str());
	return infile.good();
}

int parseFilename(string &fileName) {
	stringstream ss;

	ss.str(string());
	ss << "data//" << fileName << ".in";
	fileName = ss.str();

	return 0;
}


int processMatricula(string &Matricula) {
	if (Matricula.size() != 8)
		throw(MatriculaInvalida(Matricula));

	int nums = 0, chars = 0;
	FOR(i, 0, Matricula.size()) {
		if ((i == 2 || i == 5) && Matricula[i] != '-')
			throw(MatriculaInvalida(Matricula));

		Matricula[i] = toupper(Matricula[i]);
		if ('A' <= Matricula[i] && Matricula[i] <= 'Z')
			chars++;
		if ('0' <= Matricula[i] && Matricula[i] <= '9')
			nums++;

		if (nums > 4 || chars > 2)
			throw(MatriculaInvalida(Matricula));
	}

	return 0;
}

