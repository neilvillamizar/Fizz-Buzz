#include <stdio.h>

void solve_fizz_buzz(int n){
    
    if ( n%15 == 0 ){
        printf("Fizz Buzz");
        return;
    }
    
    if( n%3 == 0){
        printf("Fizz");
        return;
    }
    
    if( n%5 == 0){
        printf("Buzz");
        return;
    }
    
    printf("%d", n);
    
}

int main(){

    int n;
    scanf("%d", &n);
    
    for(int i = 1; i <= n; ++i){
        
        solve_fizz_buzz(i);
        
        if(i == n) printf(".\n");
        else printf(", ");
        
    }
    
    return 0;
    
}
