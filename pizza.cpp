#include<iostream>
using namespace std;
int main()
{
    int orderNo,pizzaTypes;
    int sliceOfPizzas['n'],pizzaChoosen['n'];
    cout<<"sliceOfPizzas: "<<sizeof(sliceOfPizzas)<<"\n";
    cout<<"Enter the order no\n";
    cin>>orderNo;
    cout<<"Types of pizzas you want\n";
    cin>>pizzaTypes;
    for (int i = 0; i < pizzaTypes; i++)
    {
        cin>>sliceOfPizzas[i];
    }
    int set=0,sliceSum=0,j=0,pizzaTypeCount=0;
    for (int  i = pizzaTypes-1; i  >= 0 ; i--)
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
    for (int i = 0; i < j; i++)
    {
        cout<<pizzaChoosen[i]<<"\t";
        
    }
    cout<<"\nTotal Pizza slices "<<sliceSum<<"\n";
    cout<<"Types of pizza ordered "<<pizzaTypeCount<<"\n";
    
    
}