/*
 * Utilities.h
 *
 *  Created on: Nov 6, 2013
 *      Author: henrique
 */

#ifndef UTILITIES_H_
#define UTILITIES_H_

#include <iostream>
#include <string>
using namespace std;
#define FOR(i, a, b) for(unsigned int i = a; i < b; i++)
#define ALL(v) (v).begin(), (v).end()
#define foreach(v, it) for(typeof((v).begin()) it = (v).begin(); it != (v).end(); it++ )

struct tm *getTimeInfo();
int getAnoActual();

bool fileExists(const string &fileName);
int parseFilename(string &fileName);

int processMatricula(string &Matricula);

#endif /* UTILITIES_H_ */
