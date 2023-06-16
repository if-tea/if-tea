#include<stdio.h>
#include<conio.h>
#include<time.h>

int main(){
	int hh=0,mm=0,ss=0;
	
	
	printf("Here is your time");
	start:
	for (hh;hh<=24;hh++){
		for (mm;mm<=60;mm++){
			for (ss;ss<=60;ss++){
				
				printf("%02d,%2d,%2d",hh,mm,ss);
				if(hh<12){
					printf("PM");
				}
				else{
					printf("AM");
					}
								
			}
			ss=0;
		}
		mm=0;
	}
	hh=0;
	
	
}