#include <stdio.h>
#include <stdlib.h>
#define MAX_LINE_LENGTH 1024


int main(int argc, char *argv[]) {
	
	FILE* fptr;
	int plaka;
	char sehir [MAX_LINE_LENGTH];
	int satir=1;
	 
	fptr=fopen("C:\\Users\\reyya\\OneDrive\\Masaüstü\\Türkiye Plaka Kodlarý\\Türkiye plakalarý.txt","r");
	if (fptr==NULL)
	{
		printf("dosya acilmadi.");
	}
	else{}
	
	printf("Lutfen bir plaka kodu giriniz:");
    scanf("%d",&plaka);
  
  while(fgets(sehir, MAX_LINE_LENGTH, fptr)){
   if(satir==plaka){
   	printf("%s",sehir);}
   
     satir++;  
} 
       if(plaka==61 || plaka== 8 || plaka==28 || plaka==29 || plaka==52|| plaka==53 || plaka==69 ){
   	    printf(" Dogu Karadeniz Bolgesindedir.\n");}
 
     
        if(!(plaka<81)){
    	printf("Hatalý kod girdiniz.");}
	


  fclose(fptr);
	

	return 0;
}
