#define filas 21
#define poltro 30
#define dias 2
char a[filas][poltro][dias],op;
int i,j,k,cont=0;
int main(){
	for(i=0;i<filas;i++){
		for(j=0;j<poltro;j++){
			for(k=0;k<dias;k++){
			a[i][j][k]='D';
		}
		}
	}
	printf("BEM VINDO AO CEFET CINEMAS\nTEMOS APENAS UM FILME POR SEMANA\nE UMA SESSAO EM CADA DIA DO FINAL DE SEMANA\t(SEX,SAB,DOM)\n");	
	while(op!='f'){
		printf("\nt-PARA SABER QUANTAS POLTRONAS ESTAO DISPONIVEIS NO DIA ESCOLHIDO\nr-PARA RESERVAR SUA POLTRONA\nc-PARA VER TODAS AS POLTRONAS\nf-PARA FINALIZAR O SISTEMA\nDIGITE A OPERACAO: ");
		scanf("%c",&op);
			if(op=='t'){
				printf("escolha o dia\n0-sexta\n1-sabado\n2-domingo\n-->:");
				scanf("%d",&k);
				cont=0;
				for(i=1;i<filas;i++){
					for(j=0;j<poltro;j++){
						if(i==1){
							if(a[i-1][j][k]=='D'){
								cont++;
							}
						}
						else{
							if(a[i][j][k]=='D'){
								cont++;
						}
					}
				}
			}
				printf("%d poltronas disponiveis\n\n",cont);
			}
			if(op=='r'){
				printf("escolha o dia\n0-sexta\n1-sabado\n2-domingo\n-->:");
				scanf("%d",&k);
					printf("-------------------------------------------------------------------| T E L A |------------------------------------------------------------\n\n");
				for(i=0;i<filas;i++){
					for(j=0;j<poltro;j++){
						if(a[i][j][k]=='D'){
					
						printf("%c|%d ",a[i][j][k],j);
					}
						if(a[i][j][k]=='O'){
						
							printf("%c|%d ",a[i][j][k],j);
							
						}
					}
					
				printf(" %d \n", i);
				}
				printf("\nESCOLHA UMA POLTRONA DISPONIVEL\n");
				printf("\n0-5---500 reais\n6-10---400 reais\n11-15---300 reais\n16-20---200 reais\ndigite a fila:");
				do{
				scanf("%d",&i);
				printf("\ndigite a poltrona:");
				scanf("%d",&j);
				if(a[i][j][k]=='O')
				printf("\npoltrona ocupada, digite dnv a fila:");
				}while(a[i][j][k]=='O');
					a[i][j][k]='O';
					
					if(i<=5)
					printf("\tPAGUE 500 reais\n\n");
					if(i<=10 && i>=6)
					printf("\tPAGUE 400 reais\n\n");
					if(i<=20 && i>=16)
					printf("\tPAGUE 200 reais\n\n");
					if(i>=11 && i<=15)
					printf("\tPAGUE 300 reais\n\n");
		}
		if(op=='c'){
			printf("escolha o dia\n0-sexta\n1-sabado\n2-domingo\n-->:");
			scanf("%d",&k);
				for(i=0;i<filas;i++){
					for(j=0;j<poltro;j++){
						if(a[i][j][k]=='D'){
							printf("Poltrona[%d][%d] esta disponvel\n",i,j);
						}
					}
				}
					printf("-------------------------------------------------------------------| T E L A |------------------------------------------------------------\n\n");
				for(i=0;i<filas;i++){
					for(j=0;j<poltro;j++){
						if(a[i][j][k]=='D'){
						
							printf("%c|%d ",a[i][j][k],j);
						}
						if(a[i][j][k]=='O'){
						
							printf("%c|%d ",a[i][j][k],j);
							
						}
						
					}
					
				printf(" %d \n", i);
				}
				
		}
		if(op=='f'){
			printf("PROGRAMA FINALIZADO");
		}
		
		
					
					
				
					
				


				
							
				
				
				
			}
	}
