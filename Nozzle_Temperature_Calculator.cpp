#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
	
	int plastictype;
	char polypropylene[2]= "pp";
	char polyethylene[2]= "pe";
	char polystyrene[2]= "ps";
	char inp[2];	
	int flag=1;
	float roomtemp=0,x;


	printf("\nEnter Room Temperature\n");
	scanf("%f",&roomtemp);
	while(flag){
	flag=0;
	printf("\nEnter the plastic type,\n Enter pp for polypropylene\n Enter pe for polyethylene\n Enter ps for polystyrene\n\n");
	scanf("%s",inp);

    inp[1]= tolower(inp[1]);
	
	if(polypropylene[1]==inp[1]){

			x= ((165000*1.8))/1920 -(roomtemp-30)+30;

	}

	else if(polyethylene[1]==inp[1]){
			x= ((float)(160000*1.8))/1900 +-(roomtemp-30)+30;

	}
	else if(polystyrene[1]==inp[1]){

		// printf("\npolystyrene\n");
		// 		printf("\ninput= %s",inp);
					x= ((float)(150000*1.8))/1500 -(roomtemp-30)+30;

	}
	else{
		flag=1;
		printf("\nWrong input\n");
	}

   }

	printf("\nTemperature to be set on nozzle is %f *C",x);

	return 0;
}
