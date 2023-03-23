#include<stdio.h>
#include<conio.h>
#include<string.h>

struct account
{ int cardno;
  int credit;
  int bonus;
  int points;	
}person[100];

void card();
void action(int);
void games(int);
void shopping(int);
void movie(int);
void ride(int);
void logout(int);
void charging(int);
void login();
void balance(int);
int c=1001;
int e;
int i=1;

main()
{ char a;
  printf("\t\t\tWELCOME TO OUR FUN LAND");
  printf("\n\t\t\t=======================");
  printf("\n\n\n\n\nFOR MAKING A MEMBERSHIP CARD PRESS M OR m ELSE ANY KEY : ");
  a=getche();
  if(a=='M'||a=='m')
  {card();}
}

void card()
{ char b;
  printf("\n\n\n\t\t   WHICH TYPE OF CARD DO YOU WANT?");
  printf("\n\t\t   ===============================");
  printf("\n\n");
  printf("\n\t||       FOR       ||       FOR       ||       FOR       ||");
  printf("\n\t||   YELLOW CARD   ||     RED CARD    ||   GOLDEN CARD   ||");
  printf("\n\t||   PRICE= 100 $  ||   PRICE= 500 $  ||  PRICE= 1000 $  ||");
  printf("\n\t||     GET THE     ||     GET THE     ||     GET THE     ||");	
  printf("\n\t||    CREDIT 50    ||    CREDIT 300   ||    CREDIT 700   ||");
  printf("\n\t||                 ||     BONUS 100   ||     BONUS 100   ||");
  printf("\n\t||                 ||                 ||    POINTS 100   ||");
  printf("\n\t||                 ||                 ||                 ||");
  printf("\n\t||   PRESS Y OR y  ||   PRESS R OR r  ||   PRESS G OR g  ||");	
  printf("\n\t===========================================================");	
  printf("\n\n");
  b=getche();
  if(b=='y'||b=='y')
  { person[i].cardno=c;
    person[i].credit=50;
    printf("\n\nYOR MEMBERSHIP CARD NO IS %d.\nPLEASE KEEP IT REMEMBER.",c);
    i++;
    c++;
    action(i-1);}
   else if(b=='R'||b=='r')
   { person[i].cardno=c;
     person[i].credit=300;
     person[i].bonus=100;
     printf("\n\nYOR MEMBERSHIP CARD NO IS %d.\nPLEASE KEEP IT REMEMBER.",c);
	 i++;
     c++;
     action(i-1);}
  else if(b=='G'||b=='g')
  { person[i].cardno=c;
   person[i].credit=700;
   person[i].bonus=100;
   person[i].points=100;
   printf("\n\nYOR MEMBERSHIP CARD NO IS %d.\nPLEASE KEEP IT REMEMBER.",c);	
    i++;
  	c++;
	action(i-1);} 	 
  	else
 {printf("\n\nYOU TYPE WRONG LETTER.\nTYPE AGAIN.");
  card();}
}
  	
void action(int j)
{ char d;
  printf("\n\n\n\t\tWHICH TYPE OF ACTION YOU WOULD LIKE TO PERFORM?");
  printf("\n\t\t===============================================");
  printf("\n\n\n");
  printf("\nFOR PLAYING GAMES     \t\t PRESS P OR p");
  printf("\nFOR SHOPPING          \t\t PRESS S OR s");
  printf("\nFOR WATHING MOVIE     \t\t PRESS M OR m");
  printf("\nFOR TAKING RIDE       \t\t PRESS R OR r");
  printf("\nFOR LOGOUT            \t\t PRESS L OR l");
  printf("\nFOR RECHARGING        \t\t PRESS C OR c");
  printf("\nFOR BALANCE CHECKING  \t\t PRESS B OR b");
  printf("\n\n\n");
  d=getche();
  if(d=='p'||d=='P')
   games(j);
  else if(d=='s'||d=='S')
  shopping(j);
  else if(d=='M'||d=='m')
  movie(j);
  else if(d=='r'||d=='R')
  ride(j);
  else if(d=='l'||d=='L')
  logout(j);
  else if(d=='c'||d=='C')
  charging(j);
  else if(d=='B'||d=='b')
  balance(j);  		
}

void games(int j)
{ printf("\n\n\n\t\tWHICH GAME YOU WOULD LIKE TO PLAY?");
  printf("\n\t\t==================================");
  printf("\n\n\n");
  printf("\nFOR CAR RACING       \t\t PRESS 1");
  printf("\nFOR PUNCHING BOX     \t\t PRESS 2");	
  printf("\nFOR GUN SHOOTER      \t\t PRESS 3");
  printf("\nFOR PINBALL          \t\t PRESS 4");
  printf("\nFOR TICKETS CATCHER  \t\t PRESS 5");
  printf("\n\n\t\tPRICE OF EACH GAME IS 100 CREDIT\n\n");
  scanf("%d",&e);	
  if(e==1||e==2||e==3||e==4||e==5)
  { if(person[j].credit>=100)
    {printf("\n\n\t\t\t     ENJOY THE GAME");
     printf("\n\t\t\t       YOU HAVE WON");
  	 printf("\n\t\t        THANKS FOR PLAYING THE GAME");
  	 person[j].credit=person[j].credit-100;
  	 action(j);}	
  else
  {printf("\n\nYOU DOESNOT HAVE INSUFFICIENT MONEY TO PLAY");
   action(j);}}
  else 
  {printf("\n\nYOU TYPE WRONG KEY.\nPLEASE TRYAGAIN.\n");
   games(j);}		
}

void shopping(int j)
{ printf("\n\n\t\tWHAT TYPE OF SHOPPING YOU WANT TO DO?");
  printf("\n\t\t=====================================");
  printf("\n\n\n");
  printf("\n||    FOR     ||    FOR     ||     FOR     ||      FOR     ||    FOR     ||");
  printf("\n||   BUYING   ||   BUYING   ||    BUYING   ||    BUYING    ||   BUYING   ||");
  printf("\n||3 PIECE SUIT|| KIDS DRESS ||FIRDDOUS LAWN||SHALWAR KAMEEZ||   SHOES    ||");
  printf("\n|| IS OF PRICE|| IS OF PRICE||  IS OF PRICE||   IS OF PRICE|| IS OF PRICE||");	
  printf("\n|| 5000 CREDIT|| 5000 CREDIT||  5000 CREDIT||   5000 CREDIT|| 5000 CREDIT||");
  printf("\n||            ||            ||             ||              ||            ||");
  printf("\n||   PRESS 1  ||   PRESS 2  ||    PRESS 3  ||    PRESS 4   ||   PRESS 5  ||");
  printf("\n===========================================================================");
  printf("\n\n\n");
  scanf("%d",&e);	
  if(e==1||e==2||e==3||e==4||e==5)
  { if(person[j].credit>=5000)
    {printf("\n\n\t\tTHANKS FOR SHOPPING IN OUR MALL");
  	 person[j].credit=person[j].credit-5000;
  	 action(j);}	
  else
  {printf("\n\nYOU DOESNOT HAVE INSUFFICIENT MONEY FOR SHOPPING");
   action(j);}}
  else 
  {printf("\n\nYOU TYPE WRONG KEY.\nPLEASE TRYAGAIN.\n");
   games(j);}		
}

void ride(int j)
{ printf("\n\n\n\t\tWHICH TYPE OF RIDE YOU WOULD LIKE TO ENJOY?");
  printf("\n\t\t===========================================");
  printf("\n\n\n");
  printf("\nFOR ROLLER COASTER       \t\t PRESS 1");
  printf("\nFOR SUB MARINE           \t\t PRESS 2");	
  printf("\nFOR DOGGING CAR          \t\t PRESS 3");
  printf("\nFOR PIRATE SHIP          \t\t PRESS 4");
  printf("\nFOR TRAIN RIDE           \t\t PRESS 5");
  printf("\n\n\t\tPRICE OF EACH RIDE IS 100 BONUS\n\n");
  scanf("%d",&e);	
  if(e==1||e==2||e==3||e==4||e==5)
  { if(person[j].bonus>=100)
    {printf("\n\n\t\t\t   ENJOY THE RIDE");
  	 printf("\n\t\t   THANKS FOR JOINING THE RIDE");
  	 person[j].bonus=person[j].bonus-100;
  	 action(j);}	
  else
  {printf("\n\nYOU DOESNOT HAVE INSUFFICIENT MONEY TO ENJOY THE RIDE");
   action(j);}}
  else 
  {printf("\n\nYOU TYPE WRONG KEY.\nPLEASE TRYAGAIN.\n");
   games(j);}		
}

void movie(int j)	
{ printf("\n\t\tWHICH MOVIE DO YOU LIKE TO SEE?");
  printf("\n\t\t=====================================");
  printf("\n\n\n");
  printf("\n||    FOR     ||    FOR     ||     FOR     ||      FOR     ||     FOR     ||");
  printf("\n||  WATCHING  ||  WATCHING  ||   WATCHING  ||   WATCHING   ||   WATCHING  ||");
  printf("\n||   PARCHI   || BANK CHOR  || MAIN HON NA ||    DANGAL    ||  3 BAHADUR  ||");
  printf("\n|| IS OF PRICE|| IS OF PRICE|| IS OF PRICE ||  IS OF PRICE || IS OF PRICE ||");	
  printf("\n|| 1200 POINT || 1200 POINT ||  1200 POINT ||   1200 POINT ||  1200 POINT ||");
  printf("\n||            ||            ||             ||              ||             ||");
  printf("\n||   PRESS 1  ||   PRESS 2  ||   PRESS 3   ||    PRESS 4   ||    PRESS 5  ||");
  printf("\n============================================================================");
  printf("\n\n\n");
  scanf("%d",&e);	
  if(e==1||e==2||e==3||e==4||e==5)
  {if(person[j].points>=1200)
    {printf("\n\n\t\tTHANKS FOR WATCHNG MOVIE IN OUR MALL");
  	 person[j].points=person[j].points-5000;
  	 action(j);}	
  else
  {printf("\n\nYOU DOESNOT HAVE INSUFFICIENT MONEY FOR WATCHING MOVIE");
   action(j);}}
  else 
  {printf("\n\nYOU TYPE WRONG KEY.\nPLEASE TRYAGAIN.\n");
   games(j);}		
}

void charging(int j)
{ char g;
  int money;
  printf("\n\t\t       WHICH TYPE OF RECHARGE DO YOU WANT?");
  printf("\n\t\t       ===================================");
  printf("\n\n\n");
  printf("\n\t\t||     FOR      ||      FOR     ||      FOR      ||");
  printf("\n\t\t||    CREDIT    ||     BONUS    ||     POINTS    ||");
  printf("\n\t\t||  RECHARGING  ||  RECHARCHING ||   RECHARGING  ||");
  printf("\n\t\t||   PRICE IS   ||   PRICE IS   ||   PRICE IS    ||");	
  printf("\n\t\t||  100 CREDIT  ||  100 BONUS   ||   100 POINT   ||");
  printf("\n\t\t||    IS OF     ||    IS OF     ||     IS OF     ||");
  printf("\n\t\t||    200 $     ||    250 $     ||     350 $     ||");
  printf("\n\t\t||              ||              ||               ||");
  printf("\n\t\t|| PRESS C OR c || PRESS B OR b || PRESS P OR p  ||");
  printf("\n\t\t===================================================");
  printf("\n\n\n");
  g=getche();	
  if(g=='C'||g=='c')
  {printf("\n\nHOW MUCH CREDIT DO YOU WANT TO UPDATE : ");
   scanf("%d",&money);
  person[j].credit=person[j].credit+money;
  action(j);}
  else if(g=='B'||g=='b')
  {printf("\n\nHOW MUCH BONUS DO YOU WANT TO UPDATE : ");
   scanf("%d",&money);
   person[j].bonus=person[j].bonus+money;}
  else if(g=='P'||g=='p')
  {printf("\n\nHOW MUCH POINTS DO YOU WANT TO UPDATE : ");
   scanf("%d",&money);
  person[j].points=person[j].points+money;}
  else 
  {printf("\n\nYOU TYPE WRONG KEY.\nPLEASE TRYAGAIN.\n");
   action(j);}		
}

void logout(int j)
{ char h;
  printf("\n\nARE YOU SURE YOU WANT TO LOGOUT? FOR YES PRESS Y OR y ELSE N OR n : ");
  h=getche();
  if(h=='Y'||h=='y')
  { printf("\n\n\t\t\t     YOU ARE LOGOUT");
    printf("\n\t\t\tTHANKS FOR VISITING OUR MALL");
    login();
  }
else if(h=='N'||h=='n')
{ action(j);
}		
else
{printf("\n\nYOU TYPE WRONG KEY.");
logout(j);}
}


void login()
{ printf("\n\n\nFOR MAKING A MEMBERSHIP CARD PRESS M OR m OR FOR LOGIN WITH ACCOUNT PRESS I OR i : ");
  char p;
  int jug=c-1;
  int z,acc,k;
  p=getche();
  if(p=='M'||p=='m') 
  { card();}
  else
  { printf("\n\n\nENTER THE CARD NO OF MEMBERSHIP : ");
  	scanf("%d",&acc);
  	for(k=1;k<i;k++)
    { if(acc==(jug))
      { action(k);
	    break;}
        jug--;}
   	if(k==i)
	{printf("\n\nYOUR MEMBERSHIP CARD IS NOT REGISTERED.");
	login();}   	  
   }		
   }
   
void balance(int j)
{ printf("\n\n\nYOUR ACCOUNT NUMBER IS %d",person[j].cardno);
  printf("\nYOUR REMAINING CREDIT IS %d",person[j].credit);
  printf("\nYOUR REMAINING BONUS IS %d",person[j].bonus);
  printf("\nYOUR REMAINING POINTS IS %d",person[j].points);
  action(j);}