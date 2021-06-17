#include<stdio.h>

int sort(int[], int);

int main(void)
{
    int a[30], size, i, index, j, finish=1;
    
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    printf("\nEnter elements into the array:\n\n");
    
    i=0;
    while(i<size)
    {
        scanf("%d", &a[i]);
        
        i++;
    }
    
    sort(a, size);
    
    i=0;
    
    while(i<size)
    {
        j=i+1;
        while(j<size)
        {
            if(j==i)
            {
                j++;
            }
            
            else
            {
                if(a[i]==a[j])
                {
                    a[j]=0;
                }
                j++;
            }
        }
        
        i++;
    }
    
    
    while(1)
    {
        j=0;
        while(j<size)
        {
            if(a[j]==0)
            {
                finish=0;
                break;
            }
            
            j++;
        }
        
        if(finish==0)
        {
            index=j;
            while(index<size-1)
            {
                a[index]=a[index+1];
                index++;
            }
            size--;
            finish=1;
        }
        
        else
        {
            break;
        }
    }
    
    printf("\nPrinting the array after removing the duplicate elements:\n\n");
    i=0;
    
    while(i<size)
    {
        printf("%d\n", a[i]);
        i++;
    }
    
    return 0;
}

int sort(int a[], int s)
{
    int i, j, temp;
    
    i=0;
    while(i<s-1)
    {
        j=i+1;
        while(j>0)
        {
            if(a[j-1]>a[j])
            {
                temp=a[j-1];
                a[j-1]=a[j];
                a[j]=temp;
            }
            
            j--;
        }
        i++;
    }
    
    printf("\nPrinting the sorted array:\n\n");
    
    i=0;
    while(i<s)
    {
        printf("%d\n", a[i]);
        i++;
    }
    
    return 0;
}