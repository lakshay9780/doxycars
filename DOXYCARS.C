#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
int b,f,g,i,h,k,l,s,t,u;
char a[50],c[50],d[50],o[50],p[50],q[50],m[50],n[50],r[50],z[50],e[50];
FILE * fpointer= fopen("employeesinfo.txt","a");
diya:
textcolor(BLUE);
textbackground(WHITE);
clrscr();
gotoxy(30,1);
printf("welcome to doxycars");
printf("\nplease enter your name= ");
scanf("%\s",&a);
printf("please enter your number= ");
scanf("%s",&z);
printf("\welcome to doxycars ");
printf("\npress 1 if you want to book a car");
printf("\npress 2 if you want to get a companion   ");
scanf("%d",&b);
switch(b)
{
case 1:
laksh:
textcolor(BLUE);
textbackground(WHITE);
clrscr();
printf("enter your location= ");
scanf("%s",&c);
printf("enter destination location= ");
scanf("%s",&d);
printf("enter date DD/MM/YYYY format= ");
scanf("%s",&e );
printf("enter number of passenger (maximum passengers are 3)= ");
scanf("%d",&h);
if(h<4)
{
textcolor(BLUE);
textbackground(WHITE);
clrscr();
printf("\nplease recheck your information");
fprintf(fpointer,"\nname:%s",a);
fprintf(fpointer,"\nnumber:%s",z);
fprintf(fpointer,"\nfrom:%s",c);
fprintf(fpointer,"\nto:%s",d);
fprintf(fpointer,"\ndate of traveling:%d/%d/%d",e,f,g);
fprintf(fpointer,"\nnumber of passengers:%d",h);
printf("\nname:%s",a);
printf("\nnumber:%s",z);
printf("\nfrom:%s",c);
printf("\nto:%s",d);
printf("\ndate of traveling:%d/%d/%d",e,f,g);
printf("\nnumber of passengers:%d",h);
samanu:
printf("\npress 1 if you want to change the details");
printf("\npress 2 if detail is fine");
scanf("%d",&i);
switch(i)
{
case 1:goto laksh;
case 2:break;
default:printf("\nplease enter the correct option");
goto samanu;
}
clrscr();
printf("\ndriver information will be shared with you soon");
printf("\nthank you for giving us your information \nwe will call you soon");
break;
}
else {
printf("The number of companions cannot exceed 3");
}
goto diya;
case 2:
aahram:
textcolor(BLUE);
textbackground(WHITE);
clrscr();
printf("enter your car model= ");
scanf("%s",&o);
printf("enter car colour= ");
scanf("%s",&p);
printf("enter your car no= ");
scanf("%s",&q);
printf("starting location= ");
scanf("%s",&m);
printf("destination= ");
scanf("%s",&n);
printf("date of journey in the format of DD/MM/YYYY ");
scanf("%d/%d/%d",&l,&k,&s);
textcolor(BLUE);
textbackground(WHITE);
clrscr();
cprintf("please recheck your information");
fprintf(fpointer,"\nname:%s",a);
fprintf(fpointer,"\nnumber:%s",z);
fprintf(fpointer,"\ncar model:%s",o);
fprintf(fpointer,"\ncar colour:%s",p);
fprintf(fpointer,"\ncar number:%s",q);
fprintf(fpointer,"\ndate:%d/%d/%d",l,k,s);
fprintf(fpointer,"\nfrom:%s",m);
fprintf(fpointer,"\nto:%s",n);
printf("\nname:%s",a);
printf("\nnumber:%s",z);
printf("\nfrom:%s",c);
printf("\nto:%s",d);
printf("\ndate of traveling:%d/%d/%d",e,f,g);
printf("\nnumber of passengers:%d",h);
printf("\npress 1 if you want to coreect the information");
printf("\npress 2 if the given information is correct");
scanf("%d",&t);
switch(t)
{
case 1:goto aahram;
case 2:break;
default:printf("\nplease enter the correct option");
}
textcolor(BLUE);
textbackground(WHITE);
clrscr();
printf("\ncompanion information will be shared with you soon \nthank you for giving your information\nwe will call you soon");
break;
default:printf("please enter the correct option");
goto diya;
}
fclose(fpointer);
getch();
}



