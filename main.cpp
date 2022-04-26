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
int min=0;
int max=1000;
  
  while( meio != alvo){

    
    printf("meio= %d\n", meio);
    printf("alvo= %d\n", alvo);
    printf("min= %d\n", min);
    printf("max= %d\n", max);

    
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

int Busca_de_dados(){
  f++;
	return -1;
}


int main(){
  
  /*for(int i = 0; i < 1000; i++){
    arr[i]=i;
  }*/
	cout <<  "Digite qual o seu alvo: ";
	cin >>alvo;
  Busca_Binaria();  
	if(Busca_linear() == alvo){
		cout << "1) Alvo Encontrado (alvo = " << alvo << "):" << endl;
		cout << "Busca Linear: " << c << " Comaparacoes" << endl;
		cout << "Busca Binaria: " << b << " Comaparacoes" << endl;
		cout << "Busca de frequencia: " << f << " Comaparacoes" << endl;
	}else{
		cout << "1) Alvo Nao Encontrado (alvo = " << alvo << "):" << endl;
		cout << "Busca Linear: " << c << " Comaparacoes" << endl;
		cout << "Busca Binaria: " << b << " Comaparacoes" << endl;
		cout << "Busca de frequencia: " << f << " Comaparacoes" << endl;
	}
	
    return 0;
}