#include "stdio.h"
#include "string.h"



int MatriceDat[500][5];
char tabnom[500][50];

/*
Sort the table
*/


/*
	Ta9ra heure
*/
/*
	ta9ra el date 

*/

/*
	Lire nom de personne
*/

/*
	Lire rendez vous
	storihom fi donnnée
*/

/*
	Ajout de rendez vous
	(tableau date  , nom)
*/

/*
	Validation de rendez vous
	(date valide)	
*/

/*
	Validationd e rendez vous
	(date existe) thcouf date mawjouda fi tableau wela le
*/

void addRDV(){
	// Saisir Rendez vous
	// En valid rendez vous (date valide , date existe)
}


/*
	Date existe ou nnonn
*/

/*
	Delete chetfase5lek rendez vous mel position mte3i idha ken position file5er n--
	* if position melol decalage zeda fil woset decalage t[i] = t[i+1]

*/

void deleteRDV(){
	// Read date 
	// entier Search for date(entier) -1 don't exist >=0 exist
	// Delete (Decalage) // == n
 }

/*
	
*/

void deleteRDVFromDate(){
	// Read date
	// Sort (trié) tableau
	// Delete from start date to end date..

}
	/*
		Read hour
	*/
void modifyRDV(){
	// Read hour
	// Check hour if -1 error
	// Sort
	// if >= 0 change

}
/*
	Affiche rendez vous(i)
*/
void showRDVDate(){
	//Read date debut
	// Read date fin
}



void multipleChoice(){
	char choix;
	int n ;
	do{
			printf("Choisir une option dans le menu suivan : \
			\n\t <1> --- 	Visualisation 	---  \
			\n\t <2> --- 	Modification  	---  \
			\n\t <3> --- 	Suppression   	---  \
			\n\t <4> --- 	Ajout 		   	---  \
			\n\t <q> --- 	Quitter 		--- ");
			printf("\n\t\t Indiquez votre choix : ");
			scanf("%c",&choix);
			n = choix -'0';
			switch (n){
				case 1 :
					printf("Appel de l'affichage");
					break;
				case 2 :
					printf("Appel de Modification");
					break;
				case 3 :
					printf("Appel de la suppression");
					break;
				case 4 :
					printf("Appel de l'ajjout");
					break;
			}
	}while (choix != 'q');
	printf("you Quitted\n");
}

int main() {
	multipleChoice();
	int n;
	scanf("%d",&n);
	return 0;
}