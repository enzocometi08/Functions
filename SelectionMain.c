//Function  Selection

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> //library that contains the lower

void selector(){
    int sel;
	char ver;
	do{
		printf("\n[1]Option one\n[2]Options two\n[0]Close\nInsert the option: ");   //main to select
		scanf("%d",&sel);
	
		switch (sel){
			case 1:{
				//insert the function
				
			}
			case 2:{
                //insert the function
			}
			case 0:
				printf("\nFinalizing the program...");
				break;
			default:
				printf("\nOption invalidates");
		}
		if(sel==0){
			break;
		}
		else{
			printf("\nDo you wish to continue? [y/n]: ");
			scanf(" %c", &ver);
            ver = tolower(ver);
		}
		
	}while (ver!='n');
}