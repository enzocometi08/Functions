//Selection menu

#include <stdio.h>

void selector(){
    int sel;
	char ver;
	do{
		printf("\n[1]Option x\n[2]Options y\n[0]Close\nInsert the option: ");   //main to select
		scanf("%d",&sel);
	
		switch (sel){
			case 1:{
				//insert the function
				break;
			}
			case 2:{
                //insert the function
				break;
			}
			case 0:
				printf("\nFinalizing the program...");
				break;
			default:
				printf("\nInvalid option");
		}		
	}while (option != 0);
}
