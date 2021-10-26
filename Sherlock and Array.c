#include <stdio.h>                // This program is in C language

void testcase()                   // Main program Begins here, the Testcases
{
    int i,n,sum=0,add=0;          // We have to find prefix sum and suffix sum of the array , so it's time complexity will be O(n)
    scanf("%d",&n);
    int arr[n],arr1[n],arr2[n];   // We have to take two more array to store suffix and prefix sums
    
    for(i=0;i<n;i++)
     scanf("%d",&arr[i]);
     
    for(i=0;i<n;i++)
    {
        arr1[i] = sum + arr[i];    // Here we are adding suffix
        sum = arr1[i];
    }
    
    for(i=n-1;i>=0;i--)
    {
        arr2[i] = add + arr[i];   // Here we are adding prefix
        add = arr2[i];
    }
    
    for(i=0;i<n;i++)
    {
        if(arr1[i]==arr2[i])      // If parallel indices are same then the left is equal to the sum of all elements to the right
        {
            printf("YES\n");
            return;
        }
    } 
    printf("NO\n");
}

int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
     testcase();
    return 0;
}
