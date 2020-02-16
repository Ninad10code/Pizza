#include<iostream>
using namespace std;
int main()
{
     int orderNo,pizzaTypes;
    
    
    cin>>orderNo;
    
    cin>>pizzaTypes;
     int sliceOfPizzas[pizzaTypes],pizzaChoosen[pizzaTypes];
    for ( int i = 0; i < pizzaTypes; i++)
    {
        cin>>sliceOfPizzas[i];
    }
     int set=0,sliceSum=0,j=0,pizzaTypeCount=0;
    for ( int  i = pizzaTypes-1; i  >= 0 ; i--)
    {
        if(sliceSum <= orderNo)
        {
            sliceSum= sliceSum +sliceOfPizzas[i];
            
            if (sliceSum > orderNo)
            {
                sliceSum=sliceSum-sliceOfPizzas[i];
            }
            else
            {
                pizzaChoosen[j]=i;
                j++;
                pizzaTypeCount++;
            }
            
            
        }
    }
    for ( int i = j-1; i >=0; i--)
    {
        cout<<pizzaChoosen[i]<<" ";
        
    }
 
    cout<<"\n"<<pizzaTypeCount<<"\n";
    
    
}