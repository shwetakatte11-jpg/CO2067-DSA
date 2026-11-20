#include<stdio.h>

int main()
{
    int A[20],n,i,choice,target,flag,key,j,mid,low,high,temp,found;
    printf("ENTER NO OF SUBJECTS:");
    scanf("%d",&n);
    do{
    printf("\n=====MENU=====");
    printf("\n1.Insert marks \n2.Display marks \n3.Delete marks \n4.linear search \n5.Binary search \n6.Exit");
    printf("\nENTER YOUR CHOICE");
    scanf("%d",&choice);
    switch(choice)
    {
      case 1://INSERT MARKS
      printf("\nENTER MARKS OF %d SUBJECTS OF STUDENT",n);
      for(i=0;i<n;i++)
      {
        scanf("%d",&A[i]);
      }
    break;
    
    case 2://DISPLAY MARKS
      printf("\nMARKS OF THE STUDENT OF %d SUBJECTS :",n);
      for(i=0;i<n;i++)
      {
        printf("\n%d",A[i]);
      }
      break;
    
     case 3://DELETE MARKS
      printf("\n ENTER THE MARKS YOU WANT TO DELETE");
      scanf("%d",&target);
      for(i=target;i<n;i++)
      {   
        A[i]=A[i+1];
        
       }
       n=n-1;
       break;
    case 4://linear search
      printf("\n ENTER THE MARKS YOU WANT TO FIND");
      scanf("%d",&key);
      flag=0;
      for(i=0;i<n;i++)
        {if (A[i]==key)
          {printf("Marks is found at %d position",i+1);
          flag=1;
          }
        }
        if(flag==0)
          {printf("NOT FOUND");
          }
    break;
    
    case 5:   //Binary search
 
    
    for(i=0;i<n-1;i++)
    { 
      for(j=0;j<n-i-1;j++)
      { 
        if(A[j]>A[j+1]) 
        { 
          temp=A[j];
          A[j]=A[j+1];
          A[j+1]=temp;
        }
      } 
     // printf("pass %d",i);
    }
    
    printf("\nSorted Array");
    for(i=0;i<n+1;i++)
    {
      printf("%d\n", A[i]);
    }
    printf("ENTER THE MARKS YOU WANT TO FIND: ");
    scanf("%d",&key);
    low=0;
    high=n-1;
    
    while(low<=high) 
    {
        mid=(low+high)/2;
        if(A[mid]==key)
          {
            printf("MARKS %d FOUND AT POSITION %d\n",key, mid+1);
            break;
          }
        else if(A[mid]<key)
         {
            low=mid+1;
          }
        else 
          {
            high=mid-1;
         }
      }

      break;
    
    case 6:
    break;
    
    default:
      printf("\nInvalid Choice");

    }
    
    }while(choice!=6);
    return 0;
}

