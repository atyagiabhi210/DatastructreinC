#include<stdio.h>

    int main() {
    int n;    
    printf("size \n");
    scanf("%d",&n);
    printf("ENTER THE ELEMENTS \n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d \n",arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==arr[i+1]){
            printf("%d \n",i+1);
        }
        else{
            printf("%d \n",i);
        }
    }
    
return 0;
}