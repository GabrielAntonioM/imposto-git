#include <bits/stdc++.h>

using namespace std;

int main() {
	double rendaSala, rendaServ, rendaCapital, gMedico, gEduca;
	cout << fixed << setprecision(2);
	// DADOS
	cout << "Renda anual com salario: ";
	cin >> rendaSala;
	cout << "Renda anual com prestacao de servicos: ";
	cin >> rendaServ;
	cout << "Renda anual com ganho de capital: ";
	cin >> rendaCapital;
	cout << "Gastos medicos: ";
	cin >> gMedico;
	cout << "Gastos educacionais: ";
	cin >> gEduca;
	cout << endl;
	cout << "RELATORIO DE IMPOSTO DE RENDA" << endl;
	cout << endl;
	// CONSOLIDADO CALCULOS E IMPRESSAO	
	cout << "CONSOLIDADO DE RENDA:" << endl;
	double Salario, RSimposto, RPimposto, RCimposto;
	Salario = rendaSala/12.00;
	if(Salario < 3000.00){
		RSimposto = 0;
	}else if(Salario >= 3000.00 && Salario < 5000.00){
		RSimposto = rendaSala * 0.1;
	}else{
		RSimposto = rendaSala * 0.2;
	}
	cout << "Imposto sobre salario: " << RSimposto << endl;
	
	RPimposto = rendaServ * 0.15;
	cout << "Imposto sobre servicos: " << RPimposto << endl;
	
	RCimposto = rendaCapital * 0.2;
	cout << "Imposto sobre ganho de capital: " << RCimposto << endl;
	
	//DEDUCOES
	double dedutivel, totalImpostos, gastototal;
	totalImpostos = RSimposto + RPimposto + RCimposto;
	dedutivel = totalImpostos * 0.3;
	gastototal = gMedico + gEduca;
	cout << endl;
	cout << "DEDUCOES: "<< endl;
	cout << "Maximo dedutivel: " << dedutivel << endl;
	cout << "Gastos dedutiveis: " << gastototal << endl;
	
	//RESUMO
	double abatimento, ImpostoDevido;
	
	if(gastototal > dedutivel){
		abatimento = dedutivel;
	}else {
		abatimento = gastototal;
	}
	ImpostoDevido = totalImpostos - abatimento;
	
	cout << endl << "RESUMO: " << endl;
	cout << "Imposto bruto total: " << totalImpostos << endl;
	cout << "Abatimento: " << abatimento << endl;
	cout << "Imposto devido: " << ImpostoDevido;
	return 0;
}
