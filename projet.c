#include "stdio.h"
#include "string.h"
#include "stdlib.h"


int MatriceDate[500][5];
char *tabnom[500];
int tableLength = 0;



int checkDateIfExist(int date []){
	int i , j , count = 0;
	for(i = 0 ; i < tableLength ; i++)
		for(j = 0 ; j < 4 ; j++)
			if(MatriceDate[i][j] == date[j] ){
				count++; // 10 11 2016 11 13
				if(count >= 4)
					return i;
			}
	return -1;
}


int checkHour(int sh , int eh){
	// Sh mean startHour eh mean endHour
	if(eh < sh)
		return -1;
	if((sh < 1 || sh > 23) || (eh < 1 || eh > 23))
		return -1;
	return 1;
}


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
	} while(status == -1);
	// return table of hour
	table[0] = startHour;
	table[1] = endHour;
	return table;
}


int * readDate(){
	
	int *table = malloc(sizeof(int) * 3);

	int year, month , day;
	
	int status;
	
	do{
		printf("Write the Year\n");
		scanf("%d",&year);

		printf("Write the Month\n");
		scanf("%d",&month);

		printf("Write the day\n");
		scanf("%d",&day);

		// TODO : check the date
		status = checkDate(year,month,day);
	} while(status == -1);
	// return a table of date
	table[0] = day;
	table[1] = month;
	table[2] = year;

	return table;
}


int * createTableDate(){
	int *time = malloc(sizeof(int) * 5); 
	int i;
	int *date = readDate();
	int *hour = readHour();
	for(i = 0 ; i < 3 ; i++)
		time[i] = date[i];
	for(i = 0 ; i < 2 ; i++)
		time[i+3] = hour[i];
	return time ;
}


void readName(int position){
	char name[100];
	printf("write your name\n"); 
	scanf("%s",name); // Read with spaces;
	//Adding to the generale table
	tabnom[position] = name;
}

void readRendezVous(int n){
	int i;
	int *table  = createTableDate();
	if(checkDateIfExist(table) == -1) {
		for( i = 0 ; i < 5 ; i++){
			MatriceDate[n][i] = table[i];
		}
		readName(n);
	} else {
		printf("The date already reserved\n");
	}
}



void addRDV(){
	readRendezVous(tableLength);
	tableLength++;
}



/*
	Delete chetfase5lek rendez vous mel position mte3i idha ken position file5er n--
	* if position melol decalage zeda fil woset decalage t[i] = t[i+1]
*/

int dateIsBigger(int start[] , int date[] ){
	if(start[2] > date[2] ) // 10 1 2017 // 1 2 2016 
		return -1;
	if(start[1] > date[1])
		return -1;
	if(start[0] > date[0])
		return -1;
	if(start[4] > date[4])
		return -1;
	return 1;
}

int dateIsLesser(int end[] , int date[]){
	if(end[2] < date[2] ) // 10 1 2017 // 1 2 2016 11
		return -1;
	if(end[1] < date[1])
		return -1;
	if(end[0] < date[0])
		return -1;
	if(end[4] < date[4])
		return -1;
	return 1;
}

/*
	Delete Mel position n
*/

void deleteFromPosition(int n){
	int i;
	if(n > 0 && n < tableLength ){
		for(i = n ; i < tableLength ; i++){
			int j;
			for(j = 0 ; j < 5 ;j++)
				MatriceDate[i][j]= MatriceDate[i][j+1];
			tabnom[i] = tabnom[i+1];
		}
		tableLength--;
	}else{
		printf("Please Write an existing position\n");
	}
}
/*
	Delete From starting position to ending position
*/
void deleteRendezVous(int start[], int end[]){
	int i;
	for(i = 0 ; i <tableLength ; i++){
		if(dateIsBigger(start,MatriceDate[i]) != -1 && dateIsLesser(start,MatriceDate[i])){
			deleteFromPosition(i);
		}
	}
}

void readDateToDelete(){
	int * startingDate = createTableDate();
	int * endingDate = createTableDate();
	deleteRendezVous(startingDate,endingDate);
}

void deleteRDV(){
	readDateToDelete();
 }


/*
	Ma5demtehech
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
void showRendezVous(int n){
	printf("%s\n",tabnom[n] );
	int i;
	for(i = 0 ; i < 5 ;i++){
		printf("%d / ", MatriceDate[n][i]);
	}
}
	



void showFromDate(int start[] , int end []){
	int i , j;
	for( i = 0 ; i < tableLength ; i++){
		if((dateIsBigger(start , MatriceDate[i]) != -1) && dateIsLesser(end, MatriceDate[i]) != -1){
			for(j = 0 ; j < 5 ;j++)
				printf(" %d / ",MatriceDate[i][j]);
		}
	}
}

/*
	Read Starting Date and ending Date
*/
void readDateToShow(){
	int * startingDate = createTableDate();
	int * endingDate = createTableDate();
	showFromDate(startingDate , endingDate);
}

void showRDV(){
	readDateToShow();
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
					showRDV();
					break;
				case 2 :
					printf("Appel de Modification");
					// Not Working
					break;
				case 3 :
					printf("Appel de la suppression");
					deleteRDV();
					break;
				case 4 :
					printf("Appel de l'ajout");
					addRDV();
					break;
			}
	}while (choix != 'q');
	printf("you Quitted\n");
}

int main() {

	multipleChoice();
	
	return 0;
}
