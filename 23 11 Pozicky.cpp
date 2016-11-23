#include <stdio.h>
#include <math.h>

void vypocetSplatky(float, float, int, float *);

main(){
	float suma, urok; 
	int dlzka;
	float splatka, mesZarobok;
	float castZarobku;
	printf("Zadaj sumu pozicky: ");
	scanf("%f", &suma);
	printf("Zadaj vysku uroku v %: ");
	scanf("%f", &urok);
	printf("Zadaj dlzku splacania v mesiacoch: ");
	scanf("%d", &dlzka);
	printf("Zadaj zadaj svoj mescny prijem: ");
	scanf("%f", &mesZarobok);
	
	vypocetSplatky(suma,urok,dlzka,&splatka);
	castZarobku=mesZarobok*0.15;
	if(castZarobku<splatka)
		printf("Pozicka nieje mozna.");
	else
		printf("Vasa mesacna splatka bude %.2f", splatka);
}

void vypocetSplatky(float suma, float urok, int dlzka, float *spl){
	int nasSplatky=0;
	nasSplatky=dlzka/12;
	if(dlzka%12 > 0)
		nasSplatky++;
	urok=urok/100+1;
	urok=pow(urok,nasSplatky);
	*spl=suma/dlzka*urok;
}
