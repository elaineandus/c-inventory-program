#include <stdio.h>
#include <windows.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>
#define BUFFER_SIZE 1000

#define UP 72
#define DOWN 80
#define LEFT 75
#define RIGHT 77
#define ENTER 13
#define TAB 9
#define BKSP 8

void welcomeScreen();
void loadingAnimation(int x, int y);
void Menu();
void moveArrow(int arrow);
void registers();
void search ();
void update();
void deletes();
void header();
void menu();
void close();

char ip_add [50], user[50], dept[50], IPtype[50], MAC[50], status[50];
int try_again;

//==========================================================================
void gotoxy(int x, int y) //position cursor
{
 	COORD coord;
 	coord.X = x;
 	coord.Y = y;
 	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);

}
//=====================================================================================================
void interfaceBorder()
{
	int j;
    system("cls");
    printf("\033[1;34m");
    gotoxy (2,2);
    for (j=0; j<115; j++)
        printf("%c", 223);
    for (j=2; j<28; j++){
        gotoxy (2, j);
        printf("%c", 178);
    }
    
    gotoxy (2,28);
    for (j=0; j<116; j++)
        printf("%c", 223);
    for (j=2; j<28; j++){
        gotoxy (117, j);
        printf("%c", 178);
    }

    printf("\033[1;36m");
    gotoxy (6,4);
    for (j=0; j<108; j++)
        printf("%c", 223);

    for (j=4; j<26; j++){
        gotoxy (6, j);
        printf("%c", 178);
    }
   gotoxy (6,26);
    for (j=0; j<108; j++)
        printf("%c", 223);
        
    for (j=4; j<26; j++){
        gotoxy (113, j);
        printf("%c", 178);
    }	
}
//===================================================================================================== 
void close(void){
interfaceBorder();
    gotoxy (5, 8);
	printf("\t\t\t:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
	gotoxy (5, 9);
	printf("\t\t\t                    THANK YOU FOR USING THE PROGRAM!                   \n");
	gotoxy (5, 10);
	printf("\t\t\t:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
	system("PAUSE>NULL");
	
	gotoxy (5, 13);
	exit(1);
}
//===================================================================================================== 
void Pambungad()
{
	int x, y, j;
	
	interfaceBorder();
	printf("\033[1;33m");
	gotoxy (7, 7);
    char text1[]=  "\n\t\t\t\t\t          W E L C O M E   T O           ";
	for(x=0; text1[x]!=NULL; x++)
	   {
	     printf("%c",text1[x]);
	      for(y=20; y<=8888888; y++)
	      {
	      }
	   }

	// LETTER I
	for(y=12; y<=16; y++)
    {
        gotoxy(23, y);
        printf("%c", 219);
    }
    
    // Letter N

    for(y=12; y<=16; y++) 
    {
        gotoxy(26, y);
        printf("%c", 219);
    }

    for(x=27, y=12; x<=85, y<=16; x++,y++)
    {
        gotoxy(x, y);
        printf("%c", 219);
    }

    for(y=12; y<=16; y++)
    {
        gotoxy(32, y);
        printf("%c", 219);
    }
    
    // Letter V

    for(x=35, y=12; x<=24, y<=16; x++, y++)
    {
        gotoxy(x, y);
        printf("%c", 219);
    }

    for(x=40; x<=28, y<=16; x++, y++)
    {
        gotoxy(x, y);
        printf("%c", 219);
    }

    for(x=39, y=16; x<=33, y>=12; x++, y--)
    {
        gotoxy(x, y);
        printf("%c", 219);
    }
    
    // Letter E
    
    for(x=46; x<=52; x++)
    {
        gotoxy(x, 16);
        printf("%c", 219);
    }

    for(y=12; y<=16; y++)
    {
        gotoxy(46, y);
        printf("%c", 219);
    }

    for(x=46; x<=52; x++)
    {
        gotoxy(x, 12);
        printf("%c", 219);
    }
    
    for(x=46; x<=52; x++)
    {
        gotoxy(x, 14);
        printf("%c", 219);
    }
    
    // Letter N

    for(y=12; y<=16; y++)
    {
        gotoxy(55, y);
        printf("%c", 219);
    }

    for(x=56, y=12; x<=85, y<=16; x++,y++)
    {
        gotoxy(x, y);
        printf("%c", 219);
    }

    for(y=12; y<=16; y++)
    {
        gotoxy(61, y);
        printf("%c", 219);
    }

	// Letter T

    for(y=12; y<=16; y++)
    {
        gotoxy(67, y);
        printf("%c", 219);
    }

    for(x=64; x<=70; x++)
    {
        gotoxy(x, 12);
        printf("%c", 219);
    }

	// Letter O

    for(y=13; y<=15; y++)
    {
        gotoxy(73, y);
        printf("%c", 219);
    }

    for(x=73; x<=79; x++)
    {
        gotoxy(x, 12);
        printf("%c", 219);
    }

    for(x=73; x<=79; x++)
    {
        gotoxy(x, 16);
        printf("%c", 219);
    }

    for(y=13; y<=15; y++)
    {
        gotoxy(79, y);
        printf("%c", 219);
    }
    
    // lETTER R
	for(y=12; y<=16; y++)
    {
        gotoxy(82, y);
        printf("%c", 219);
    }

    for(x=82; x<=87; x++)
    {
        gotoxy(x, 12);
        printf("%c", 219);
    }

    for(x=82; x<=87; x++)
    {
        gotoxy(x, 15);
        printf("%c", 219);
    }

    for(y=13; y<=14; y++)
    {
        gotoxy(88, y);
        printf("%c", 219);
    }
    
    for(x=88; x<89; x++)
    {
        gotoxy(x, 16);
        printf("%c", 219);
	}

	// Letter Y

    for(y=12; y<=13; y++)
    {
        gotoxy(91, y); // para ma-move yung unang vertical y
        printf("%c", 219);
    }

    for(x=92; x<=96; x++)
    {
        gotoxy(x, 14);
        printf("%c", 219);
    }

    for(y=12; y<=13; y++)
    {
        gotoxy(97, y); // para ma-move yung pangalawang vertical y
        printf("%c", 219);
    }

    for(y=15; y<=16; y++)
    {
        gotoxy(94, y); // para ma-move yung pangatlong vertical y
        printf("%c", 219);
    }

    printf("\033[1;36m");
    gotoxy (6, 20);
    char text2[]=  "\n\t\t\t\t\t\t     P R O G R A M  ";
    
     
    for(x=0; text2[x]!=NULL; x++)
   {
     printf("%c",text2[x]);
      for(y=0; y<=7777777; y++)
      {
      }
   }
    system("PAUSE>NULL");
	system("CLS");
}

//==========================================================================
void loadingAnimation(int x, int y)
{
	int i, j;
    
    interfaceBorder();
    
    printf("\033[1;33m");
    gotoxy(41, 8);    
    printf(" W E L C O M E   T O   I N V E N T O R Y ");
    
    printf("\033[1;33m");
    gotoxy(46,10);
    printf(" P R O G R A M  B Y  U N O");
    printf("\033[1;36m");
    printf("\n\n\n\t     UNO is a group of aspiring students from the Technological University of the Philippines-Manila.");
	printf("\n\t\t  They are currently studying under the course of Bachelor of Science in Computer Science");
	printf("\n\t\t\t                        of the school year 2020-2021.");
    

    printf("\033[0;33m");
	gotoxy(56,18);
    printf("LOADING...");
	
	gotoxy(x,y);
    for(i=1;i<=20;i++)
		{
			//loading animation
	    	for(j=0;j<=60000000;j++);
	    		printf("%c", 177);
	    }
	    printf("\n\n\t\t\t\t\t\t  ENTER to continue");
	    system("PAUSE>NULL");
}
//=====================================================================================================
void welkamScreen() //welcome screen
{
	Pambungad();
	loadingAnimation(49.5,19);
}

//======================================================================================================

int main()
{
    system("cls");
	welkamScreen();
	
	int choice, num, x;
	int i, j = 1;

    while (j == 1)
	{
		menu();
		scanf("%d", &j);

	}
}

void header(){
    FILE *Inventory;
    char examp[255];
    int found=0;
    Inventory = fopen("Inventory.xls","r");
    if(fscanf(Inventory,"%s",examp)==EOF){
        found=1;
    }
    else{
        found=0;
    }
    fclose(Inventory);

    FILE *f;
    f = fopen("Inventory.xls","a");
    if(found==1){
        fprintf(f,"IP_Address\tUser\tDepartment\tType_of_IP_Address\tMAC_Address\tStatus\n");
    }
    fclose(f);
}
//==============================================================================================================
void menu(){
	
	interfaceBorder();
	 
	printf("\033[1;33m");
	gotoxy(45, 4);
    printf(" I N V E N T O R Y   P R O G R A M ");

	printf("\033[1;33m");
	gotoxy(51, 9);
	printf("%c  REGISTER \n\n", 254);
	gotoxy(51, 11);
	printf("%c  SEARCH RECORD \n\n", 254);
	gotoxy(51, 13);
	printf("%c  UPDATE RECORD \n\n", 254);
	gotoxy(51, 15);
	printf("%c  DELETE RECORD \n\n", 254);
	gotoxy(51, 17);
	printf("%c  EXIT \n\n", 254);	
	moveArrow(1);
	
}
//================================================================================================================
void moveArrow(int arrow)
{
	int move, a = 1, i, x = 39, y = 9; //(x,y) arrow position
	
	
	gotoxy(x,y);
	printf("%c", 175); //arrow symbol
	
	while(a == 1) //to move arrow
			{
				move = getch();
					if(move == 0xE0)
						move = getch();
		
				switch(move)
					{
						case UP: //arrow move up
							{	
								if(y != 9) //UPPERMOST VALUE (DISK SCHEDULING)
									{
										gotoxy(x,y);
										printf(" ");
										--y; --y;
										gotoxy(x,y);
										printf("%c", 175);
									}	
								break;	
							}
						case DOWN: //arrow move down
							{
								if(y != 17 && arrow == 1) //LOWERMOST VALUE
									{
										gotoxy(x,y);
										printf(" ");
										++y; ++y;
										gotoxy(x,y);
										printf("%c", 175);
									}
								break;
							}
						
						case ENTER:
							{
								system("cls");
								
								if(arrow == 1)
								{
									if(y == 9)
										registers();
									else if(y == 11)
										search();
									else if(y == 13)
										update();
									else if(y == 15)
										deletes();
									else if(y == 17){
										exit(0);
									}
								}
								
								a = 0; //stop arrow move
								break;
							}	
					}
			}
}
//========================================================================================================              
void registers()
{

    FILE *Inventory;

    Inventory = fopen("Inventory.xls","a");
	
	interfaceBorder();
	printf("\033[1;33m");
	gotoxy(43, 4);
    printf(" R E G I S T E R  N E T W O R K ");
    
	printf("\033[1;33m");
	gotoxy(44, 7);
    printf("FILL THE FOLLOWING INFORMATION");
    
    gotoxy(40, 9);
    printf("IP Address:             ");
    gets(ip_add);
    
    gotoxy(40, 11);
    printf("User:                   ");
    gets(user);
    
    gotoxy(40, 13);
    printf("Department:             ");
    gets(dept);
    
    gotoxy(40, 15);
    printf("Type of IP Address:     ");
    gets(IPtype);
    
    gotoxy(40, 17);
    printf("MAC Address:            ");
    gets(MAC);
    
    gotoxy(40, 19);
    printf("Connection Status:      ");
    gets(status);
	
	interfaceBorder();
	printf("\033[1;33m");
	gotoxy(43, 4);
    printf(" R E G I S T E R  N E T W O R K ");
    
    printf("\033[1;33m");
	gotoxy(48, 7);
    printf("DATA ADDED SUCCESSFULLY!");
    
    gotoxy(40, 9);
    printf("IP Address:             %s", ip_add);
    
    gotoxy(40, 11);
    printf("User:                   %s", user);
    
    gotoxy(40, 13);
    printf("Department:             %s", dept);
    
    gotoxy(40, 15);
    printf("Type of IP Address:     %s", IPtype);
    
    gotoxy(40, 17);
    printf("MAC Address:            %s", MAC);
    
    gotoxy(40, 19);
    printf("Connection Status:      %s", status);

    fprintf(Inventory, "%s\t%s\t%s\t%s\t%s\t%s\n", ip_add, user, dept, IPtype, MAC, status);
    fclose(Inventory);
    
    gotoxy(46, 22);
	printf("Press Any Key To Continue. ");
    system("PAUSE>NULL");
    system("cls");
    interfaceBorder();
    printf("\033[1;33m");
	gotoxy (5, 9);
	printf("\n\n\t\t\t                    DO YOU STILL WANT TO CONTINUE?                     \n");
	gotoxy (5, 10);
	printf("\n\n\t\t\t             Press [1] to Continue and [0] to end the program          \n");
	gotoxy (5, 12);
	printf("\n\n\t\t\t\t\t\t ENTER YOUR CHOICE: ");
	scanf("%d", &try_again);
		if (try_again == 1){
			menu();
		}
		if (try_again == 0){
			close();
		}

}

void search()
{
    char hold[20];
    int compare;

	FILE*Inventory;
    Inventory=fopen("Inventory.xls","r");
search:
	fflush(stdin);
	interfaceBorder();
	printf("\033[1;33m");
	gotoxy(45, 4);
    printf(" S E A R C H  N E T W O R K ");
    
    printf("\033[1;33m");
    gotoxy(40, 7);
    printf("Enter IP Address:             ");
    gets(hold);
	
    while(fscanf(Inventory, "%s\t%s\t%s\t%s\t%s\t%s\n", ip_add, user, dept, IPtype, MAC, status)!=EOF)
	{
    	compare=!strcmp(hold, ip_add);
    	if(compare==1)
    	{
    		interfaceBorder();
			printf("\033[1;33m");
			gotoxy(45, 4);
    		printf(" S E A R C H  N E T W O R K ");
    
	       	printf("\033[1;33m");
    		gotoxy(40, 9);
    		printf("IP Address:             %s", ip_add);
    
    		gotoxy(40, 11);
    		printf("User:                   %s", user);
    
    		gotoxy(40, 13);
    		printf("Department:             %s", dept);
    
    		gotoxy(40, 15);
    		printf("Type of IP Address:     %s", IPtype);
    
    		gotoxy(40, 17);
    		printf("MAC Address:            %s", MAC);
    
    		gotoxy(40, 19);
    		printf("Connection Status:      %s", status);
    		
	        gotoxy(46, 22);
			printf("Press Any Key To Continue. ");
			
    		fflush(stdin);
    		system("PAUSE>NUL");
    		system("cls");
    		interfaceBorder();
    		printf("\033[1;33m");
			gotoxy (5, 9);
			printf("\n\n\t\t\t                    DO YOU STILL WANT TO CONTINUE?                     \n");
			gotoxy (5, 10);
			printf("\n\n\t\t\t             Press [1] to Continue and [0] to end the program          \n");
			gotoxy (5, 12);
			printf("\n\n\t\t\t\t\t\t ENTER YOUR CHOICE: ");
			scanf("%d", &try_again);
				if (try_again == 1){
					menu();
				}
				if (try_again == 0){
					close();
				}
    			break;
		}}
        if (compare==0)
        {
        	interfaceBorder();
        	printf("\033[1;33m");
			gotoxy(45, 4);
    		printf(" S E A R C H  N E T W O R K ");
    		
        	printf("\033[1;33m");
    		gotoxy(49, 13);
        	printf("No IP Address exists.");
        	
            gotoxy(46, 22);
			printf("Press Any Key To Continue. ");
			
    		fflush(stdin);
    		system("PAUSE>NUL");
    		system("cls");
    		interfaceBorder();
    		printf("\033[1;33m");
			gotoxy (5, 9);
			printf("\n\n\t\t\t                    DO YOU STILL WANT TO CONTINUE?                     \n");
			gotoxy (5, 10);
			printf("\n\n\t\t\t             Press [1] to Continue and [0] to end the program          \n");
			gotoxy (5, 12);
			printf("\n\n\t\t\t\t\t\t ENTER YOUR CHOICE: ");
			scanf("%d", &try_again);
				if (try_again == 1){
					menu();
				}
				if (try_again == 0){
					close();
				}	
        }
    fclose(Inventory);
}

void update(){
	
    char hold[20];
    int compare, enterch=0, upd=0, base=0;
    char new_ip_add[50],new_user[50],new_dept[50],new_IPtype[50],new_MAC[50], new_status[50];
    FILE *Inventory;
    Inventory=fopen("Inventory.xls","r");
toupdate:
	fflush(stdin);
   	interfaceBorder();
	printf("\033[1;33m");
	gotoxy(45, 4);
    printf(" U P D A T E  N E T W O R K ");
    
    printf("\033[1;33m");
    gotoxy(40, 7);
    printf("Enter IP Address:             ");
    gets(hold);
    
    while(fscanf(Inventory, "%s\t%s\t%s\t%s\t%s\t%s\n", ip_add, user, dept, IPtype, MAC, status)!=EOF){
    compare=!strcmp(hold, ip_add);
    if(compare==1){
       	interfaceBorder();
			printf("\033[1;33m");
			gotoxy(45, 4);
    		printf(" S E A R C H  N E T W O R K ");
    
	       	printf("\033[1;33m");
    		gotoxy(40, 9);
    		printf("IP Address:             %s", ip_add);
    
    		gotoxy(40, 11);
    		printf("User:                   %s", user);
    
    		gotoxy(40, 13);
    		printf("Department:             %s", dept);
    
    		gotoxy(40, 15);
    		printf("Type of IP Address:     %s", IPtype);
    
    		gotoxy(40, 17);
    		printf("MAC Address:            %s", MAC);
    
    		gotoxy(40, 19);
    		printf("Connection Status:      %s", status);
    		
	        gotoxy(46, 22);
			printf("Press Any Key To Continue. ");
			
    		system("PAUSE>NUL");
    		system("cls");
    	break;}}
		
    if (compare==0 && base==0){
        interfaceBorder();
        	printf("\033[1;33m");
			gotoxy(45, 4);
    		printf(" S E A R C H  N E T W O R K ");
    		
        	printf("\033[1;33m");
    		gotoxy(49, 13);
        	printf("No IP Address exists.");
        	
            gotoxy(46, 22);
			printf("Press Any Key To Continue. ");
			
    		fflush(stdin);
    		system("PAUSE>NUL");
    		system("cls");
    		interfaceBorder();
    		printf("\033[1;33m");
			gotoxy (5, 9);
			printf("\n\n\t\t\t                    DO YOU STILL WANT TO CONTINUE?                     \n");
			gotoxy (5, 10);
			printf("\n\n\t\t\t             Press [1] to Continue and [0] to end the program          \n");
			gotoxy (5, 12);
			printf("\n\n\t\t\t\t\t\t ENTER YOUR CHOICE: ");
			scanf("%d", &try_again);
				if (try_again == 1){
					menu();
				}
				if (try_again == 0){
					close();
				}	
	}
			
    fclose(Inventory);

enterch:
	interfaceBorder();
	printf("\033[1;33m");
	gotoxy(45, 4);
    printf(" U P D A T E  N E T W O R K ");
    
	gotoxy(35, 13);
	printf("[1] Update all data from the current student");
	gotoxy(35, 15);
	printf("[2] Update a specific data of the current student");
	printf("\033[1;33m");
    gotoxy(49, 11);
    printf("Enter your choice: ");
    scanf("%d", &enterch);
	

if(enterch==1){	
	fflush(stdin);
	interfaceBorder();
	printf("\033[1;33m");
	gotoxy(45, 4);
    printf(" U P D A T E  N E T W O R K ");
	    
	printf("\033[1;33m");
    gotoxy(49, 6);
    printf("Enter new data.");
    
	gotoxy(44, 9);
    printf("FILL THE FOLLOWING INFORMATION");
    
    gotoxy(40, 11);
    printf("IP Address:             ");
    gets(new_ip_add);
    
    gotoxy(40, 13);
    printf("User:                   ");
    gets(new_user);
    
    gotoxy(40, 15);
	printf("Department:             ");
    gets(new_dept);
    
    gotoxy(40, 17);
    printf("Type of IP Address:     ");
    gets(new_IPtype);
    
    gotoxy(40, 19);
	printf("MAC Address:            ");
   	gets(new_MAC);
   	
   	gotoxy(40, 21);
    printf("Connection Status:      ");
    gets(new_status);
	
	FILE *fp, *fp1;
    fp=fopen("temp.xls","a");
    Inventory=fopen("Inventory.xls","r");
    while(fscanf(Inventory, "%s\t%s\t%s\t%s\t%s\t%s\n", ip_add, user, dept, IPtype, MAC, status)!=EOF){
    compare=!strcmp(hold, ip_add);
	    if(compare==1){
            fprintf(fp, "%s\t%s\t%s\t%s\t%s\t%s\n", new_ip_add, new_user, new_dept, new_IPtype, new_MAC, new_status);}
        else{
			fprintf(fp, "%s\t%s\t%s\t%s\t%s\t%s\n", ip_add, user, dept, IPtype, MAC, status);}}
	
	fclose(fp);
    fclose(Inventory);
    fp1=fopen("Inventory.xls","w");
    fclose(fp1);
    fp=fopen("temp.xls","r");
    Inventory=fopen("Inventory.xls","a");
    while(fscanf(fp, "%s\t%s\t%s\t%s\t%s\t%s\n", ip_add, user, dept, IPtype, MAC, status)!=EOF)
    {
        fprintf(Inventory, "%s\t%s\t%s\t%s\t%s\t%s\n", ip_add, user, dept, IPtype, MAC, status);
    }
    interfaceBorder();
	printf("\033[1;33m");
	gotoxy(45, 4);
    printf(" U P D A T E  N E T W O R K ");
    
    printf("\033[1;33m");
    gotoxy(47, 13);
    printf("Data successfully updated");
	
	system("PAUSE>NULL");
    		system("cls");
    		interfaceBorder();
    		printf("\033[1;33m");
			gotoxy (5, 9);
			printf("\n\n\t\t\t                    DO YOU STILL WANT TO CONTINUE?                     \n");
			gotoxy (5, 10);
			printf("\n\n\t\t\t             Press [1] to Continue and [0] to end the program          \n");
			gotoxy (5, 12);
			printf("\n\n\t\t\t\t\t\t ENTER YOUR CHOICE: ");
			scanf("%d", &try_again);
				if (try_again == 1){
					menu();
				}
				if (try_again == 0){
					close();
				}	
    fclose(fp);
    fclose(Inventory);
    fp1=fopen("temp.xls","w");
    fclose(fp1);}

else if(enterch==2){
	
	FILE *fp, *fp1;
	
uperror:
	fflush(stdin);
	interfaceBorder();
	printf("\033[1;33m");
	gotoxy(45, 4);
    printf(" U P D A T E  N E T W O R K ");
    
    
	gotoxy(44, 11);
	printf("\n\n\t\t\t  [1] IP Address           \t[2] User            \t[3] Department");
	printf("  \n\t\t\t  [4] Type of IP Address   \t[5] MAC Address     \t[6] Connection Status\n\n\t\t\t\t\t       ");
    
	gotoxy(43, 9);
	printf("What specific data do you want to update: ");
	scanf("%d", &upd);

    switch(upd){
   		case 1:
   			fflush(stdin);
   			interfaceBorder();
			printf("\033[1;33m");
			gotoxy(45, 4);
    		printf(" U P D A T E  N E T W O R K ");
    		
			printf("\033[1;33m");
    		gotoxy(49, 6);
    		printf("Enter new data.");
    		
	    	gotoxy(44, 9);
    		printf("FILL THE FOLLOWING INFORMATION");
    
    		gotoxy(38, 11);
    		printf("New IP Address:             ");
	    	gets(new_ip_add);
	    	
		    fp=fopen("temp.xls","a");
		    Inventory=fopen("Inventory.xls","r");
		   
		    while(fscanf(Inventory, "%s\t%s\t%s\t%s\t%s\t%s\n", ip_add, user, dept, IPtype, MAC, status)!=EOF){
		    compare=!strcmp(hold, ip_add);
		        if(compare==1){
		            fprintf(fp,"%s\t%s\t%s\t%s\t%s\t%s\n", new_ip_add, user, dept, IPtype, MAC, status);}
		        else{
		            fprintf(fp, "%s\t%s\t%s\t%s\t%s\t%s\n", ip_add, user, dept, IPtype, MAC, status);}}
		    break;
		case 2:
			fflush(stdin);
			interfaceBorder();
			printf("\033[1;33m");
			gotoxy(45, 4);
    		printf(" U P D A T E  N E T W O R K ");
    		
			printf("\033[1;33m");
    		gotoxy(49, 6);
    		printf("Enter new data.");
    		
	    	gotoxy(44, 9);
    		printf("FILL THE FOLLOWING INFORMATION");
    
    		gotoxy(38, 11);
			printf("New User:                   ");
    		gets(new_user);
    		
		    fp=fopen("temp.xls","a");
		    Inventory=fopen("Inventory.xls","r");
		   
		    while(fscanf(Inventory, "%s\t%s\t%s\t%s\t%s\t%s\n", ip_add, user, dept, IPtype, MAC, status)!=EOF){
		    compare=!strcmp(hold, ip_add);
		        if(compare==1){
		            fprintf(fp, "%s\t%s\t%s\t%s\t%s\t%s\n", ip_add, new_user, dept, IPtype, MAC, status);}
		        else{
		            fprintf(fp, "%s\t%s\t%s\t%s\t%s\t%s\n", ip_add, user, dept, IPtype, MAC, status);}}
		    break;
		case 3:
			fflush(stdin);
			interfaceBorder();
			printf("\033[1;33m");
			gotoxy(45, 4);
    		printf(" U P D A T E  N E T W O R K ");
    		
			printf("\033[1;33m");
    		gotoxy(49, 6);
    		printf("Enter new data.");
    		
	    	gotoxy(44, 9);
    		printf("FILL THE FOLLOWING INFORMATION");
    
    		gotoxy(38, 11);
			printf("New Department:             ");
    		gets(new_dept);
    		
    		fp=fopen("temp.xls","a");
		    Inventory=fopen("Inventory.xls","r");
		   
		    while(fscanf(Inventory, "%s\t%s\t%s\t%s\t%s\t%s\n", ip_add, user, dept, IPtype, MAC, status)!=EOF){
		    compare=!strcmp(hold, ip_add);
		        if(compare==1){
		            fprintf(fp, "%s\t%s\t%s\t%s\t%s\t%s\n", ip_add, user, new_dept, IPtype, MAC, status);}
		        else{
		            fprintf(fp, "%s\t%s\t%s\t%s\t%s\t%s\n", ip_add, user, dept, IPtype, MAC, status);}}
		    break;
		case 4:
			fflush(stdin);
			interfaceBorder();
			printf("\033[1;33m");
			gotoxy(45, 4);
    		printf(" U P D A T E  N E T W O R K ");
    		
			printf("\033[1;33m");
    		gotoxy(49, 6);
    		printf("Enter new data.");
    		
	    	gotoxy(44, 9);
    		printf("FILL THE FOLLOWING INFORMATION");
    
    		gotoxy(38, 11);
			printf("New Type of IP Address:     ");
    		gets(new_IPtype);
    		
    		fp=fopen("temp.xls","a");
		    Inventory=fopen("Inventory.xls","r");
		   
		    while(fscanf(Inventory, "%s\t%s\t%s\t%s\t%s\t%s\n", ip_add, user, dept, IPtype, MAC, status)!=EOF){
		    compare=!strcmp(hold, ip_add);
		        if(compare==1){
		            fprintf(fp,"%s\t%s\t%s\t%s\t%s\t%s\n", ip_add, user, dept, new_IPtype, MAC, status);}
		        else{
		            fprintf(fp, "%s\t%s\t%s\t%s\t%s\t%s\n", ip_add, user, dept, IPtype, MAC, status);}}
		    break;
		case 5:
			fflush(stdin);
			interfaceBorder();
			printf("\033[1;33m");
			gotoxy(45, 4);
    		printf(" U P D A T E  N E T W O R K ");
    		
			printf("\033[1;33m");
    		gotoxy(49, 6);
    		printf("Enter new data.");
    		
	    	gotoxy(44, 9);
    		printf("FILL THE FOLLOWING INFORMATION");
    
    		gotoxy(38, 11);
			printf("New MAC Address:            ");
    		gets(new_MAC);
    		
    		fp=fopen("temp.xls","a");
		    Inventory=fopen("Inventory.xls","r");
		   
		    while(fscanf(Inventory, "%s\t%s\t%s\t%s\t%s\t%s\n", ip_add, user, dept, IPtype, MAC, status)!=EOF){
		    compare=!strcmp(hold, ip_add);
		        if(compare==1){
		            fprintf(fp, "%s\t%s\t%s\t%s\t%s\t%s\n", ip_add, user, dept, IPtype, new_MAC, status);}
		        else{
		            fprintf(fp, "%s\t%s\t%s\t%s\t%s\t%s\n", ip_add, user, dept, IPtype, MAC, status);}}
		   break;
		case 6:
			fflush(stdin);
			interfaceBorder();
			printf("\033[1;33m");
			gotoxy(45, 4);
    		printf(" U P D A T E  N E T W O R K ");
    		
			printf("\033[1;33m");
    		gotoxy(49, 6);
    		printf("Enter new data.");
    		
	    	gotoxy(44, 9);
    		printf("FILL THE FOLLOWING INFORMATION");
    
    		gotoxy(38, 11);
			printf("New Connection Status:      ");
    		gets(new_status);
    		
    		fp=fopen("temp.xls","a");
		    Inventory=fopen("Inventory.xls","r");
		   
		    while(fscanf(Inventory, "%s\t%s\t%s\t%s\t%s\t%s\n", ip_add, user, dept, IPtype, MAC, status)!=EOF){
		    compare=!strcmp(hold, ip_add);
		        if(compare==1){
		            fprintf(fp, "%s\t%s\t%s\t%s\t%s\t%s\n", ip_add, user, dept, IPtype, MAC, new_status);}
		        else{
		            fprintf(fp, "%s\t%s\t%s\t%s\t%s\t%s\n", ip_add, user, dept, IPtype, MAC, status);}}
		    break;
		}
		    
    fclose(fp);
    fclose(Inventory);
    fp1=fopen("Inventory.xls","w");
    fclose(fp1);
    fp=fopen("temp.xls","r");
    Inventory=fopen("Inventory.xls","a");
    while(fscanf(fp, "%s\t%s\t%s\t%s\t%s\t%s\n", ip_add, user, dept, IPtype, MAC, status)!=EOF){
        fprintf(Inventory, "%s\t%s\t%s\t%s\t%s\t%s\n", ip_add, user, dept, IPtype, MAC, status);}
    interfaceBorder();
	printf("\033[1;33m");
	gotoxy(45, 4);
    printf(" U P D A T E  N E T W O R K ");
    
    printf("\033[1;33m");
    gotoxy(47, 13);
    printf("Data successfully updated");
	
	system("PAUSE>NULL");
    		system("cls");
    		interfaceBorder();
    		printf("\033[1;33m");
			gotoxy (5, 9);
			printf("\n\n\t\t\t                    DO YOU STILL WANT TO CONTINUE?                     \n");
			gotoxy (5, 10);
			printf("\n\n\t\t\t             Press [1] to Continue and [0] to end the program          \n");
			gotoxy (5, 12);
			printf("\n\n\t\t\t\t\t\t ENTER YOUR CHOICE: ");
			scanf("%d", &try_again);
				if (try_again == 1){
					menu();
				}
				if (try_again == 0){
					close();
				}	
    fclose(fp);
    fclose(Inventory);
    fp1=fopen("temp.xls","w");
    fclose(fp1);}
    
else{
	interfaceBorder();
	printf("\033[1;33m");
	gotoxy(45, 4);
    printf(" U P D A T E  N E T W O R K ");
    
    printf("\033[1;33m");
    gotoxy(48, 13);
    printf("Choice Do Not Exist!!!");
	
	system("PAUSE>NUL");
    goto enterch;}}

void deletes(){
	
    char hold[20];
    int compare, del=0, ch=0, enterch=0;
    char space[]="-";
    int base=0;
    FILE *Inventory;
    Inventory=fopen("Inventory.xls","r");
    todelete:
    system("cls");
    interfaceBorder();
	printf("\033[1;33m");
	gotoxy(45, 4);
    printf(" D E L E T E  N E T W O R K ");

	fflush(stdin);
    printf("\033[1;33m");
    gotoxy(40, 7);
    printf("Enter IP Address:             ");
    gets(hold);

    while(fscanf(Inventory, "%s\t%s\t%s\t%s\t%s\t%s\n", ip_add, user, dept, IPtype, MAC, status)!=EOF){
    compare=!strcmp(hold, ip_add);
    if(compare==1){
    	
    	system("cls");
    	interfaceBorder();
		printf("\033[1;33m");
		gotoxy(45, 4);
    	printf(" D E L E T E  N E T W O R K ");	
    	
		gotoxy(40, 7);
    	printf("IP Address:             %s", ip_add);
    
    	gotoxy(40, 9);
    	printf("User:                   %s", user);
    
    	gotoxy(40, 11);
		printf("Department:             %s", dept);
    	
    	gotoxy(40, 13);
    	printf("Type of IP Address:     %s", IPtype);
    
    	gotoxy(40, 15);
		printf("MAC Address:            %s",MAC);
   		
   		gotoxy(40, 17);
    	printf("Connection Status:      %s", status);
    	base++;
		
       	gotoxy(46, 22);
		printf("Press Any Key To Continue. ");
    	system("PAUSE>NULL");
		fflush(stdin);
    	system("cls");
		break;}}
		
    if (compare==0 && base==0){
    	system("cls");
		interfaceBorder();
	 	printf("\033[1;33m");
		gotoxy(47, 13);
    	printf(" No students exists.");
    	printf("\n\n\t\t\t\t\t     PRESS ENTER TO TRY AGAIN. ");
        system("PAUSE>NULL");
		fflush(stdin);
		system("cls");
	}
			
    fclose(Inventory);
	enterch_:
	system("cls");
    interfaceBorder();
	printf("\033[1;33m");
	gotoxy(45, 4);
    printf(" D E L E T E  N E T W O R K ");
    
	gotoxy(35, 13);
	printf("[1] Delete all data from the current student");
	gotoxy(35, 15);
	printf("[2] Delete a specific data of the current student");
	printf("\033[1;33m");
    gotoxy(49, 11);
    printf("Enter your choice: ");
    scanf("%d", &enterch);
	
	
if(enterch==1){
	
	FILE *fp, *fp1;
	
	fp=fopen("temp.xls","a");
    Inventory=fopen("Inventory.xls","r");
    
	while(fscanf(Inventory, "%s\t%s\t%s\t%s\t%s\t%s\n", ip_add, user, dept, IPtype, MAC, status)!=EOF){
    compare=!strcmp(hold, ip_add);
        if(compare==1){
            continue;}
        else{
            fprintf(fp, "%s\t%s\t%s\t%s\t%s\t%s\n", ip_add, user, dept, IPtype, MAC, status);}}

    fclose(fp);
    fclose(Inventory);
    fp1=fopen("Inventory.xls","w");
    fclose(fp1);
    fp=fopen("temp.xls","r");
    Inventory=fopen("Inventory.xls","a");
    while(fscanf(fp, "%s\t%s\t%s\t%s\t%s\t%s\n", ip_add, user, dept, IPtype, MAC, status)!=EOF){
        fprintf(Inventory, "%s\t%s\t%s\t%s\t%s\t%s\n", ip_add, user, dept, IPtype, MAC, status);}
    system("cls");
	interfaceBorder();
	printf("\033[1;33m");
	gotoxy(45, 4);
    printf(" D E L E T E  N E T W O R K ");
    
    printf("\033[1;33m");
    gotoxy(47, 13);
    printf("Data successfully deleted");
    
    	system("PAUSE>NULL");
    		system("cls");
    		interfaceBorder();
    		printf("\033[1;33m");
			gotoxy (5, 9);
			printf("\n\n\t\t\t                    DO YOU STILL WANT TO CONTINUE?                     \n");
			gotoxy (5, 10);
			printf("\n\n\t\t\t             Press [1] to Continue and [0] to end the program          \n");
			gotoxy (5, 12);
			printf("\n\n\t\t\t\t\t\t ENTER YOUR CHOICE: ");
			scanf("%d", &try_again);
				if (try_again == 1){
					menu();
				}
				if (try_again == 0){
					close();
				}	
    fclose(fp);
    fclose(Inventory);
    fp1=fopen("temp.xls","w");
    fclose(fp1);}
    
else if(enterch==2){
	iderror:
    system("cls");
	interfaceBorder();
	printf("\033[1;33m");
	gotoxy(45, 4);
    printf(" D E L E T E  N E T W O R K ");
    
 	gotoxy(44, 11);
    printf("\n\n\t\t\t  [1] IP Address\t   [2] User\t     [3] Department\n\t\t\t  [4] Type of IP Address   [5] MAC Address   [6] Connection Status\n\n\t\t\t\t\t       ");
    
	gotoxy(43, 9);
	printf("What specific data do you want to delete: ");
	scanf("%d", &del);
            
    FILE *fp, *fp1;
   
        switch(del){
        	case 1:
            notexist:
            	system("cls");
				interfaceBorder();
				printf("\033[1;33m");
				gotoxy(45, 4);
    			printf(" D E L E T E  N E T W O R K ");
    			
    			gotoxy(30, 9);
    			printf("Deleting the IP Address will delete all data of the current student. ");
    			gotoxy(43, 11);
    			printf("\n\n\t\t\t\t\t\t [1] Yes              [2] No\n\n\t\t\t\t\t       ");
				printf("\t\t  Continue? ");
            	scanf("%d", &ch);
            	if(ch==1){
            		fp=fopen("temp.xls","a");
   					Inventory=fopen("Inventory.xls","r");
    				while(fscanf(Inventory, "%s\t%s\t%s\t%s\t%s\t%s\n", ip_add, user, dept, IPtype, MAC, status)!=EOF){
    					compare=!strcmp(hold, ip_add);
        				if(compare==1){
            				continue;}
        				else{
            				fprintf(fp, "%s\t%s\t%s\t%s\t%s\t%s\n", ip_add, user, dept, IPtype, MAC, status);}}}
            	else if(ch==2){
            		goto iderror;}
            	else{
            		system("cls");
					interfaceBorder();
					printf("\033[1;33m");
					gotoxy(47, 13);
    				printf("Choice does not exist.");
    				printf("\n\n\t\t\t\t\t     PRESS ENTER TO TRY AGAIN. ");
    				system("PAUSE>NULL");
            		goto notexist;}
            	break;
          	case 2:
            	fp=fopen("temp.xls","a");
   				Inventory=fopen("Inventory.xls","r");
				while(fscanf(Inventory, "%s\t%s\t%s\t%s\t%s\t%s\n", ip_add, user, dept, IPtype, MAC, status)!=EOF){
    				compare=!strcmp(hold, ip_add);
        			if(compare==1){
            			fprintf(fp, "%s\t%s\t%s\t%s\t%s\t%s\n", ip_add, space, dept, IPtype, MAC, status);}
            		else{
            			fprintf(fp, "%s\t%s\t%s\t%s\t%s\t%s\n", ip_add, user, dept, IPtype, MAC, status);}}
            	break;
			case 3:
				fp=fopen("temp.xls","a");
   				Inventory=fopen("Inventory.xls","r");
				while(fscanf(Inventory, "%s\t%s\t%s\t%s\t%s\t%s\n", ip_add, user, dept, IPtype, MAC, status)!=EOF){
    				compare=!strcmp(hold, ip_add);
        			if(compare==1){
						fprintf(fp, "%s\t%s\t%s\t%s\t%s\t%s\n", ip_add, user, space, IPtype, MAC, status);}
					else{
            			fprintf(fp, "%s\t%s\t%s\t%s\t%s\t%s\n", ip_add, user, dept, IPtype, MAC, status);}}
            	break;
			case 4:
				fp=fopen("temp.xls","a");
   				Inventory=fopen("Inventory.xls","r");
				while(fscanf(Inventory, "%s\t%s\t%s\t%s\t%s\t%s\n", ip_add, user, dept, IPtype, MAC, status)!=EOF){
    				compare=!strcmp(hold, ip_add);
        			if(compare==1){
						fprintf(fp, "%s\t%s\t%s\t%s\t%s\t%s\n", ip_add, user, dept, space, MAC, status);}
					else{
            			fprintf(fp, "%s\t%s\t%s\t%s\t%s\t%s\n", ip_add, user, dept, IPtype, MAC, status);}}
            	break;
			case 5:
				fp=fopen("temp.xls","a");
   				Inventory=fopen("Inventory.xls","r");
				while(fscanf(Inventory, "%s\t%s\t%s\t%s\t%s\t%s\n", ip_add, user, dept, IPtype, MAC, status)!=EOF){
    				compare=!strcmp(hold, ip_add);
        			if(compare==1){
						fprintf(fp, "%s\t%s\t%s\t%s\t%s\t%s\n", ip_add, user, dept, IPtype, space, status);}
					else{
            			fprintf(fp, "%s\t%s\t%s\t%s\t%s\t%s\n", ip_add, user, dept, IPtype, MAC, status);}}
            	break;
			case 6:
				fp=fopen("temp.xls","a");
   				Inventory=fopen("Inventory.xls","r");
				while(fscanf(Inventory, "%s\t%s\t%s\t%s\t%s\t%s\n", ip_add, user, dept, IPtype, MAC, status)!=EOF){
    				compare=!strcmp(hold, ip_add);
        			if(compare==1){
						fprintf(fp, "%s\t%s\t%s\t%s\t%s\t%s\n", ip_add, user, dept, IPtype, MAC, space);}
					else{
            			fprintf(fp, "%s\t%s\t%s\t%s\t%s\t%s\n", ip_add, user, dept, IPtype, MAC, status);}}
            	break;
			}
			
    fclose(fp);
    fclose(Inventory);
    fp1=fopen("Inventory.xls","w");
    fclose(fp1);
    fp=fopen("temp.xls","r");
    Inventory=fopen("Inventory.xls","a");
    while(fscanf(fp, "%s\t%s\t%s\t%s\t%s\t%s\n", ip_add, user, dept, IPtype, MAC, status)!=EOF){
        fprintf(Inventory, "%s\t%s\t%s\t%s\t%s\t%s\n", ip_add, user, dept, IPtype, MAC, status);}
    
    system("cls");
    interfaceBorder();
	printf("\033[1;33m");
    gotoxy(47, 13);
    printf("Data successfully deleted");
    
    		system("PAUSE>NULL");
    		system("cls");
    		interfaceBorder();
    		printf("\033[1;33m");
			gotoxy (5, 9);
			printf("\n\n\t\t\t                    DO YOU STILL WANT TO CONTINUE?                     \n");
			gotoxy (5, 10);
			printf("\n\n\t\t\t             Press [1] to Continue and [0] to end the program          \n");
			gotoxy (5, 12);
			printf("\n\n\t\t\t\t\t\t ENTER YOUR CHOICE: ");
			scanf("%d", &try_again);
				if (try_again == 1){
					menu();
				}
				if (try_again == 0){
					close();
				}	
    fclose(fp);
    fclose(Inventory);
    fp1=fopen("temp.xls","w");
    fclose(fp1);}
    
else{
   	system("cls");
	interfaceBorder();
	printf("\033[1;33m");
	gotoxy(47, 13);
    printf("Choice does not exist.");
    printf("\n\n\t\t\t\t\t     PRESS ENTER TO TRY AGAIN. ");
    system("PAUSE>NULL");
    goto enterch_;}}
