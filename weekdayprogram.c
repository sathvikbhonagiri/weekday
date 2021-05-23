#include<stdio.h>
void main()
{int dd,mm,yyyy,leapyear,yy,oddday=0;
   printf("enter the date") ; 
   scanf("%d%d%d",&dd,&mm,&yyyy);
   yy=yyyy-1;
    yy=yy%400;
     if(yy>=300)
     {  oddday=oddday+1;
        yy=yy-300;
        }
      else
      {if(yy>=200)
       {oddday=oddday+3;
        yy=yy-200;  }  /* code */
       else
       {if(yy>=100)
        {oddday=oddday+5;
        yy=yy-100;} 
       }
leapyear=yy/4;
  oddday=oddday+(leapyear*2)+(yy-leapyear)+dd;
  if(mm==1) 
     oddday=oddday;
   else if(mm==2)
        oddday=oddday+31;
   else if(mm==3)
         oddday=oddday+31+28;
   else if(mm==4)
        oddday=oddday+31+28+31;
   else if(mm==5)
        oddday=oddday+31+28+31+30;
    else if(mm==6)
         oddday=oddday+31+28+31+30+31;
     else if(mm==7)
          oddday=oddday+31+28+31+30+31+30;
      else if(mm==8)
       oddday=oddday+31+28+31+30+31+30+31;
       else if(mm==9)
        oddday=oddday+31+28+31+30+31+30+31+31;
       else if(mm==10)
        oddday=oddday+31+28+31+30+31+30+31+31+30;
        else if(mm==11)
      oddday=oddday+31+28+31+30+31+30+31+31+30+31;
         else if(mm==12)
        oddday=oddday+31+28+31+30+31+30+31+31+30+31+30;
       
       oddday=oddday%7;
        switch(oddday)
        {  case 0:
           printf("sunday");
            break;
            case 1:
            printf("monday");
            break;
            case 2:
            printf("tuesday");
             break;
             case 3:
             printf("wednesday");
             break;
             case 4:
             printf("thursday");
             break;
             case 5:
             printf("friday");
             break;
             case 6:
             printf("saturday");
             break;}
             }     
}
