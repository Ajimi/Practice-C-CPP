#include "stdio.h"
#include "string.h"
#include "stdlib.h"


int MatriceDat[500][5];
char tabnom[500][50];

/*
Sort the table
*/
void sort(){
	sortYear(2);
	sortMonth(1);
	sortDay(0);
	sortHour(3);
	// TODO : Create the sorting algorithm
}

/*
	check the hour
*/
int checkHour(int sh , int eh){
	// Sh mean startHour eh mean endHour
	if((sh < 1 || sh > 23) || (eh < 1 || eh > 23)){
		return -1;
	}
	return 1;
}
/*
	check the date
*/
int checkDate(int yy , int mm , int dd){
	if(yy>=1900 && yy<=9999) {
        //check month
        if(mm>=1 && mm<=12){
            //check days
            if((dd>=1 && dd<=31) && (mm==1 || mm==3 || mm==5 || mm==7 || mm==8 || mm==10 || mm==12))
                printf("Date is valid.\n"); 
            else if((dd>=1 && dd<=30) && (mm==4 || mm==6 || mm==9 || mm==11))
                printf("Date is valid.\n");
            else if((dd>=1 && dd<=28) && (mm==2))
                printf("Date is valid.\n");
            else if(dd==29 && mm==2 && (yy%400==0 ||(yy%4==0 && yy%100!=0)))
                printf("Date is valid.\n");
            else{
                printf("Day is invalid.\n");
                return -1;
            }
        } else {
            printf("Month is not valid.\n");
            return -1;
        }
    } else {
        printf("Year is not valid.\n");
        return -1;
    }
    return 1;    
}

/*
Ta9ra heure
*/
int * readHour(){
	int startHour , endHour;
	int status;
	int *table = malloc(sizeof(int) * 2);
	do{
	printf("Write the start hour\n");
	scanf("%d",&startHour);

	printf("Write the end hour\n");
	scanf("%d",&endHour);
	// TODO : check the hour
	status = checkHour(startHour,endHour); // if valid hour will return 1 else -1
	if(status == -1 )
		printf("Please write a valid hour\n");
	} while(status == 1);
	// return table of hour
	table[0] = startHour;
	table[1] = endHour;
	return table;
}
/*
ta9ra el date 
*/
int * readDate(){
	int year, month , day;
	int *table = malloc(sizeof(int) * 3);
	printf("Write the Year\n");
	scanf("%d" , &year);

	printf("Write the Month\n");
	scanf("%d" , &month);

	printf("Write the day\n");
	scanf("%d" , &day);
	// TODO : check the date

	// return a table of date
	table[0] = day;
	table[1] = month;
	table[2] = year;

	return table;
}
/*
Creation de tableau date
*/
int * createTableDate(){
	static int time [5] ;
	int i;
	int *date = readDate();
	int *hour = readHour();
	for(i = 0 ; i < 3 ; i++)
		time[i] = date[i];
	for(i = 0 ; i < 2 ; i++)
		time[i+3] = hour[i];
	return time ;
}

/*
Lire nom de personne
*/
char *readName(){
	static char name[500];
	scanf("%[^\n]s" , name); // Read with spaces;
	// return the string
	return name;
}


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
