#include<stdio.h>
#include<stdlib.h>
#include<string.h>

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
}data[4000], temp;

int main(){
	
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
		
	for(int i = 0; i<count - 1; i++){
		
		for(int j=0; j< (count - 1-i); j++){
			
			if(strcasecmp(data[j].loc1, data[j+1].loc1)>0){
			temp = data[j];
			data[j] = data[j+1];
			data[j+1] = temp;
		}
			
		}
	}
	
		for(int i=0; i<count;i++){
			printf("%s\n",data[i].loc1);
		}
}
	
	return 0;
}
