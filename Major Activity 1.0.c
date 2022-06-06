#include<stdio.h>

int main()
{
    int Consumer, A;
    int ID = 2137816;
    float B,C,D,E,F,G,H;
    do
    {
    if(Consumer != ID){
      printf("Input Consumer ID:");
      scanf("%d",&Consumer);
      }
    }while (Consumer != ID);
    printf("Input the unit consumed by the consumer:");
    scanf("%d",&A);
    
    printf("\n[Electricity Bill]\n");
    
    printf("\nConsumer ID#                   :%d",ID);
    printf("\nUnit consumed.                 :%d",A);
    
    if(A>=600){
       B=2.00;
    }else if(A>=450){
       B=1.85;
    }else if(A>=250){
       B=1.60;
    }else if(A>=199){
       B=1.50;
    }
    
    C=A*B;
    D=C;
    
    printf("\nUnit charge @P. %.2f per unit  :P %.2f",B,D);
    
    E=A*0.1;
    F=E;
    
    if(E<=99){
       F=100;
    }else if(E>=100){
      F=E;
       
      }
    
   
    printf("\nSurcharge amount               :P %.2f",F);
    
    G=D+F;
    H=G;
    
    printf("\nTotal Consumer Bill            :P %.2f",H);

    return 0;
}