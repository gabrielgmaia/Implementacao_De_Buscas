#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int i=0;
int alvo;
int alvoBinario;
int aux_comparador_linear;
int aux_compador_binario;
int arr[1000];
int c;
int b;
int f;

int gerador_de_valores(){	
	while(i<1000){
    arr[i]=i;
	i++;    
	}
  return 1;
}

int Busca_linear(){
	for(i = 0; i < 1000; i++){
    c++;
	if(i == alvo){
		return i;
		}
	}	
	return -1;
}

int Busca_Binaria(){

  gerador_de_valores();
  
int meio = -1;
int min=1;
int max=1000;

if(alvo > 1000){
	b = 10;
 return b;
}else{
	
  while( meio != alvo){
 
    meio = (min + max)/2;
    b++;   
    
      if(arr[meio] == alvo){
        return arr[meio];
      }
    
      if(arr[meio] < alvo){
      min = meio - 1;
    }else if(arr[meio] > alvo){
      max = meio + 1;
    }else {   
        return -1;
    }    
  }	
  return meio;
	}
}
  
int Busca_de_dados(){
	
int freq[i];
	for (i = 0; i < arr[1000]; i++){
	freq[arr[1000]]++;
}
while(freq[i] != alvo){
	f++;
}

	if(freq[alvo] > 0){
		return 1;	
	}else{
		return 0;
	}
	
	
}

int main(){
	cout <<  "Digite qual o seu alvo: ";
	cin >>alvo;
  	Busca_Binaria();  
  	Busca_de_dados();
  	
	if(Busca_linear() == alvo){
		cout << "Alvo Encontrado (alvo = " << alvo << "):" << endl;
		cout << "Busca Linear: " << c << " Comaparacoes" << endl;
		cout << "Busca Binaria: " << b << " Comaparacoes" << endl;
		cout << "Busca de frequencia: " << f << " Comaparacoes" << endl;
	}else{
		cout << "Alvo Nao Encontrado (alvo = " << alvo << "):" << endl;
		cout << "Busca Linear: " << c << " Comaparacoes" << endl;
		cout << "Busca Binaria: " << b << " Comaparacoes" << endl;
		cout << "Busca de frequencia: " << f << " Comaparacoes" << endl;
	}
		
    return 0;
}
