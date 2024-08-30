#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//bikin struct buat nyimpen data 
struct data{
	char loc1[101];
	char loc2 [101];
	int price;
	int rooms;
	int bathrooms;
	int carpark;
	char type[101];
	int area;
	char furnish[101];
}data[4000];

int main(){
	
	char input[100];
	long long int count = 0;
	FILE *fptr= fopen("file.csv", "r");
	//cek file ada ato tidak
	if(!fptr){
		return 1;
	}
	else{
	
		while(fscanf(fptr,"%[^,],%[^,],%d,%d,%d,%d,%[^,],%d,%[^\n]",data[count].loc1,data[count].loc2,&data[count].price,&data[count].rooms,&data[count].bathrooms,&data[count].carpark,data[count].type,&data[count].area,data[count].furnish)!= EOF)
		{	
			count++;
		}
		
		scanf("%[^\n]", input);
		
		for(int i=0;i<strlen(input);i++){
			
			
		}
	
	}
	
	
	return 0;
}
