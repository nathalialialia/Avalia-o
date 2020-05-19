#include <bits/stdc++.h>


int main() {
	int volume, ticket, atraso, scorevol, scorein, scorepay;
	char pagamento;

  cout << "SISTEMA DE PERFIL DE CLIENTE" << endl;
  cout << "--------------------------------" << endl;
  cout << "INFORME OS DADOS DO ULTIMO ANO" << endl;
  \\
  cout << "Quantas compras o cliente fez no ultimo ano?"<<endl;
  cin >> volume;
  cout << "Qual o ticket medio?" << endl;
  cin >> ticket;
  \\
  cout << "Quantas vezes o cliente atrasou o pagamento?" << endl;
  cin >> atraso;
  cout << "A maioria das compras foi em dinheiro, cartao, ou boleto?" << endl;
  cin >> pagamento;
  \\
  if(v<=2 && ticket<=3000)scorevol=20;
  else if(v>2 && ticket<=3000)scorevol=40;
  else if(ticket>3000)scorevol=60;
  else scorevol=0;
  cout << "Score de volume de compras = " << scorevol << " pontos"<< endl;
  \\
  if(atraso>1 ||volume=0)scorein=0;
  else if(atraso==1)scorein=15;
  else scorein=30;
  if(pagamento=='D')scorepay=5;
  else scorepay=10;
  cout << "Score de inadimplencia = " << scorepay << " pontos"<< endl;
  cout << "Score de forma de pagamento = " << scorepay << " pontos"<< endl;
  \\
  classificacao = scorevol+ scorein + scorepay;
  if(classificacao<=25){
  cout << "Classificacao final = CLIENTE BRONZE" << endl;
  }
  else if(classificacao>25 && classificacao<=75){cout << "Classificacao final = CLIENTE PRATA" << endl;
  }
  else cout << "Classificacao final = CLIENTE OURO" << endl;




	return 0;
}
