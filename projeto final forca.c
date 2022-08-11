#include <stdio.h>
#include <string.h>
#include <locale.h>


char palavra[20],espaco[20];
int tamanho,erros;

void inicio(void);
int meio(void);
void fim(int r);

main(){

setlocale(LC_ALL,"PORTUGUESE");

int r;


printf("Bem vindo ao jogo da forca.\n");

inicio();
r = meio();
fim(r);

return 0;
	
}


void inicio(void){

int i;
	
do {
	
	printf("Digite a Palavra Secreta:\n");
	gets(palavra);

	system("cls");
	
} while (palavra[0] == NULL);
	
	for(i=0; i<strlen(palavra); i++){
		espaco[i]='x';
		tamanho=strlen(palavra);
	} 	   
}

int meio(void){

int i,x,jogadas=5,pontos=0;
char letra[20];


while(jogadas>0){

do{	printf("%s\n",espaco);

		printf("Digite uma letra:\nja foram %d\n",erros);
		gets(letra);
		
		letra[0]=tolower(letra[0]);
			
		erros=letra[i];
			
			x=0;
			
}while (letra[0] == NULL);
    
	for(i=0; i<strlen(palavra); i++){
		
		if(letra[0]==palavra[i]){
			
			espaco[i]=palavra[i];
			
			pontos++;
            
			x++; }
    }
	if(x==0){
		jogadas--;
	
			if(jogadas==0){
				return 0;
			}
			else{
				printf("Você errou.\nRestam %d jogada(s)\n",jogadas);
		  	}	
		}
	else{
 		if(pontos == tamanho){
		
			return 1;
		}
		else{
			printf("Você acertou uma letra!!!\n");
		}
	
	}

    }
}

void fim(int r) {

    if (r == 0) {
        printf("Você foi enforcado.\nA palavra era: %s\n",palavra);
	} 
	else {
    	printf("Você ganhou.\nA palavra é %s\n",palavra);
	}
}

