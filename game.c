#include <stdio.h>
#include  <stdlib.h>
#include  <math.h>
#include  <time.h>

int games(int monchoix , int sonchoix){
	
	if (monchoix ==1 && sonchoix==2){
		printf("le pc gangne\n");
		return 0;
	}
	 
	else if (monchoix ==1 && sonchoix==3){
		printf("toi gagne\n");
		return 1;
	}
	 
	else if (monchoix ==2 && sonchoix==1){
		printf("toi gagne\n");
		return 1;
	}
	 
	else if (monchoix ==2 && sonchoix==3){
		printf("le pc gangne\n");
		 return 0;
	}
	
	else if (monchoix ==3 && sonchoix==1){
		printf("le pc gangne\n");
		return 0;
	}
	 
	else if (monchoix ==3 && sonchoix==2){
		printf("toi gagne\n");
		return 1;
	}
	 
	 else if (monchoix ==1 && sonchoix==1){
		printf(" LE RESULTAT ET RAISONABLE\n");
		return -1;
	}
	 
	 else if (monchoix ==2 && sonchoix==2){
		printf("LE RESULTAT ET RAISONABLE\n");
		return -1;
	}
	 
	 else if (monchoix ==3 && sonchoix==3){
		printf("LE RESULTAT ET RAISONABLE\n");
		return -1;
	}
	 
	
	 
	
	
}

int main(){
	
	int n ,le_resulta,monchoix,sonchoix;
	srand(time(NULL));
	n=rand()%3+1;	
	sonchoix=n;	
	printf("entrer 1 pour Pierre , 2 pour Papier et 3 pour le ciseaux ");
	scanf("%d",&monchoix);	
	le_resulta=games(monchoix ,sonchoix);
	
	if (le_resulta==0){
	printf("le pc gangne\n");
	}
	else if (le_resulta==1){
	printf("toi gagne\n");
	}
	else {
	printf("egeaux\n");
	}
	return 0;
}


