#ifndef VIATURA_H_
#define VIATURA_H_
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <time.h>
#include "Utilities.h"
using namespace std;

class Viatura {
protected:
	string matricula;
	int anoFabrico;
	string marca;
	struct tm *dataUltimaInspecao;
	int periodicidade;
public:
	Viatura(string Matricula, int Ano, string Marca, int Periodicidade) : matricula(Matricula), anoFabrico(Ano), marca(Marca), dataUltimaInspecao(getTimeInfo()), periodicidade(Periodicidade) {}
	virtual ~Viatura() {}

	virtual int info();
	virtual string printToFile() const;

	// Getters e Setters
	string getMatricula() { return matricula; }
	int getAnoFabrico() { return anoFabrico; }
	string getMarca() const { return marca; }
	virtual string getTipo() const = 0;
	struct tm *getDataUltimaInspecao() const { return dataUltimaInspecao; }
	string getStringComDataUltimaInspecao() const;
	int getPeriodicidade() const { return periodicidade; }
};

#endif
