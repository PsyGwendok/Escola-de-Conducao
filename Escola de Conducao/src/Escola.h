#ifndef ESCOLA_H_
#define ESCOLA_H_

#include "Viatura.h"
#include "Automovel.h"
#include "Ligeiro.h"
#include "Pesado.h"
#include "Motociclo.h"

class Escola {
private:
	string nome;
	vector<Viatura*> viaturas;
public:
	Escola();
	virtual ~Escola();

	int loadSchoolData();

	void showLoginScreen();
	void showLoginUI();
	void showSignUpUI();
	void showMainMenu();
	void showManutencaoViaturas();
	void showAdicionarViaturaUI();
	void showManutencaoInstrutores();
	void showManutencaoAlunos();
	void showManutencaoAulas();

	void visualizaViaturas();
	void adicionaViatura(Viatura *viatura) { viaturas.push_back(viatura); }

	int numViaturas() const { return viaturas.size(); }

	/*
	int menorAno() const;
	void info() const;
	*/
};

#endif
