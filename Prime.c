#include <stdio.h>
int main() 
{ 
    int x,n,i; 
    scanf("%d",&x); 
    for(n=x+1;n<x+100;n++)  
    {    
        int flag=0;    
        for(i=2;i<n;i++)     
        {        
            if(n%i==0)        
            {             
                flag=1;            
                break;         
            }          
        }    
        if(flag==0)    
        {        
            printf(" %d",n);        
            break;     
        }   
    }
}
