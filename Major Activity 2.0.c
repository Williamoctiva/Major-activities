#include<stdio.h>

int main()
{
    int a[3][2];
    int i,j,ID,PIN;
    int I,P;
    
    for(i=0;i<3; i++){
    printf("\nEnter ID Number:");
    scanf("%d",&ID);
      for(j=1; j<2; j++ ){
      
    printf("Enter PIN:");
    scanf("%d",&PIN);      
    
               
                       if(ID==1434){     
                          if(PIN==1431){
                        
                          printf("\nYou have successfully logged in");
                          printf("\nID#:%d \n",ID);
                           }
                        }else if(ID==3672){     
                               if(PIN==7098){
                           
                          printf("\nYou have successfully logged in");
                          printf("\nID#:%d \n",ID);
                            }
                       }else  if(ID==1114){     
                                if(PIN==3726){
                        
                          printf("\nYou have successfully logged in");
                          printf("\nID#:%d\n",ID);
                             }
                      }else if (ID!=I){
                          printf("\nInvalid ID/PIN\n");
                          } else if (PIN!=P){
                          printf("\nInvalid ID/PIN\n");
                          }
                   
                 
         } 
    }
    
    
    
  
    
    
    return 0;
}