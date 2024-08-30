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
} data[4000];


struct counter{
	long int count1;
	long int count2;
	long int count3;
	long int count4;
	long int count5;
	long int count6;
	long int count7;
	long int count8;
	long int count9;		
	long int count10;
	long int count11;
	long int count12;
	long int count13;
	long int count14;
	long int count15;
	long int count16;
	long int count17;
	long int count18;	
	long int count19;
	long int count20;	
	long int count21;	
	long int count22;	
	long int count23;
	long int count24;					
	
	
}counter;

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
//		printf("%lld", count);
		
char input[101];
	
	printf("choose category");
	printf("| loc 1 | loc 2 | price | rooms | bathrooms | carpark | type | area | furnish |\n");
	printf(">>");
	scanf("%[^\n]", input);
	
	if(strcasecmp(input,"loc1")==0){
		
		for(int i=0; i<count; i++){
			
			if(strcasecmp(data[i].loc1,"Batu-caves")==0){
				counter.count1++;
			}
			else if(strcasecmp(data[i].loc1,"Bangsar-South")==0){
				counter.count2++;
			}
			else if(strcasecmp(data[i].loc1,"Kuchai-Lama")==0){
				counter.count3++;
			}
			else if(strcasecmp(data[i].loc1,"Jinjang")==0){
				counter.count4++;
			}
			else if(strcasecmp(data[i].loc1,"Bandar-Tasik_Selatan")==0){
				counter.count5++;
			}
			else if(strcasecmp(data[i].loc1,"OUG")==0){
				counter.count6++;
			}
			else if(strcasecmp(data[i].loc1,"Setiawangsa")==0){
				counter.count7++;
			}
			else if(strcasecmp(data[i].loc1,"Sri-Hartamas")==0){
				counter.count8++;
			}
			else if(strcasecmp(data[i].loc1,"Ampang-Hilir")==0){
				counter.count9++;
			}
			else if(strcasecmp(data[i].loc1,"Seputeh")==0){
				counter.count10++;
			}
			else if(strcasecmp(data[i].loc1,"Pandan-Indah")==0){
				counter.count11++;
			}
			else if(strcasecmp(data[i].loc1,"Mid-Valley-City")==0){
				counter.count12++;
			}
			else if(strcasecmp(data[i].loc1,"Brickfields")==0){
				counter.count13++;
			}
			else if(strcasecmp(data[i].loc1,"Damansara")==0){
				counter.count14++;
			}
			else if(strcasecmp(data[i].loc1,"Gombak")==0){
				counter.count15++;
			}
			else if(strcasecmp(data[i].loc1,"Pandan-Jaya")==0){
				counter.count16++;
			}
			else if(strcasecmp(data[i].loc1,"Alam-Damai")==0){
				counter.count17++;
			}
			else if(strcasecmp(data[i].loc1,"Sunway-SPK")==0){
				counter.count18++;
			}
			else if(strcasecmp(data[i].loc1,"Pandan-Perdana")==0){
				counter.count19++;
			}
			else if(strcasecmp(data[i].loc1,"Other")==0){
				counter.count20++;
			}
			else if(strcasecmp(data[i].loc1,"Happy-Garden")==0){
				counter.count21++;
			}
			else if(strcasecmp(data[i].loc1,"Taman-Sri-Keramat")==0){
				counter.count22++;
			}
			else if(strcasecmp(data[i].loc1,"TAMAN-MELATI")==0){
				counter.count23++;
			}
			else if(strcasecmp(data[i].loc1,"Jalan-Sultan-Ismail")==0){
				counter.count24++;
			}
		}
		
		printf("Batu-Caves: %d\n", counter.count1);
		printf("Bangsar-South: %d\n", counter.count2);
		printf("Kuchai-Lama: %d\n", counter.count3);
		printf("Jinjang: %d\n", counter.count4);
		printf("Bandar-Tasik-Selatan: %d\n", counter.count5);
		printf("OUG: %d\n", counter.count6);
		printf("Setiawangsa: %d\n", counter.count7);
		printf("Sri-Hartamas: %d\n", counter.count8);
		printf("Ampang-Hilir: %d\n", counter.count9);
		printf("Seputeh: %d\n", counter.count10);
		printf("Pandan-Indah: %d\n", counter.count11);
		printf("Mid-Valley-City: %d\n", counter.count12);
		printf("Brickfields: %d\n", counter.count13);
		printf("Damansara: %d\n", counter.count14);
		printf("Gombak: %d\n", counter.count15);
		printf("Pandan-Jaya: %d\n", counter.count16);
		printf("Alam-Damai: %d\n", counter.count17);
		printf("Sunway-SPK: %d\n", counter.count18);
		printf("Pandan-Perdana: %d\n", counter.count19);
		printf("Other: %d\n", counter.count20);
		printf("Happy-Garden: %d\n", counter.count21);
		printf("Taman-Sri-Keramat: %d\n", counter.count22);
		printf("Taman-Melati: %d\n", counter.count23);
		printf("Jalan-Sultan-Ismail: %d\n", counter.count24);
		
		getchar();
		getchar();
		system("cls");
	}
	else if(strcasecmp(input,"loc2")==0){
		system("cls");
	}
	else if(strcasecmp(input,"price")==0){
		system("cls");
	}
	else if(strcasecmp(input,"rooms")==0){
		system("cls");
	}
	else if(strcasecmp(input,"bathrooms")==0){
		system("cls");
	}
	else if(strcasecmp(input,"carpark")==0){
		system("cls");
	}
	else if(strcasecmp(input,"type")==0){
		system("cls");
	}
	else if(strcasecmp(input,"area")==0){
		system("cls");
	}
	else if(strcasecmp(input,"furnish")==0){
		system("cls");
	}
		
	}
	
	return 0;
}
