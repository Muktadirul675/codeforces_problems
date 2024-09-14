#include<stdio.h>
#include<stdlib.h>

int main(){
    int t; scanf("%d",&t);
    while(t--){
        int n; scanf("%d",&n);
        int skills[n], arr[n+1], singles = 0, i, max = 0;
        for(i=0;i<=n;i++) arr[i] = 0;
        for(i=0;i<n;i++){
            scanf("%d",&skills[i]);
            arr[skills[i]]++;
            if(arr[skills[i]] == 1) singles++;
        }
        if(n==1){
            printf("0\n");
        }else if(singles == 1 || singles == n){
            printf("1\n");
        }else{
            /*
            printf("singles: %d\n",singles);
            for(i=0;i<n;i++){
                printf("%d : %d, ", i, arr[i]);
            }printf("\n");
            */
            for(i=1;i<=n;i++){
                if(arr[i] != 0 && arr[i] > 1){
                    int team, temp = singles-1;
                    if(temp == arr[i]) team = arr[i];
                    else if(temp > arr[i]){
                        team = arr[i];
                    }else{
                        int diff = arr[i] - temp;
                        //printf("%d - %d = %d", arr[i],temp,diff);
                        if(diff >= 2) team = temp+1;
                        else team = temp;
                    }
                    if(max < team) max = team;
                }
            }
            printf("%d\n",max);
        }
    }
    return 0;
}
