#include <iostream>

using namespace std;

void solve_fizz_buzz(int n){
    
    if ( n%15 == 0 ){
        cout << "Fizz Buzz";
        return;
    }
    
    if( n%3 == 0){
        cout << "Fizz";
        return;
    }
    
    if( n%5 == 0){
        cout << "Buzz";
        return;
    }
    
    cout << n;
    
}

int main(){

    int n;
    cin >> n;
    
    for(int i = 1; i <= n; ++i){
        
        solve_fizz_buzz(i);
        
        if(i == n) cout << ".\n";
        else cout << ", ";
        
    }
    
    return 0;
    
}
