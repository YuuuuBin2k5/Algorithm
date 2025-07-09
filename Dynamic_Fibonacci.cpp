#include <bits/stdc++.h>

using namespace std;

//Fibonacci_Dynamic Programming
int fibonacci(int n, int *total)
{
    if(n < 1){
        return 0;
    }
    if(n == 1 || n == 2){
        return 1;
    }
    if(total[n] != 0){
        return total[n];
    }
    return total[n] = fibonacci(n-1, total) + fibonacci(n-2, total);
}
int main(){
    int n;
    printf("Enter the number of terms in the Fibonacci sequence: ");
    cin >> n;

    int total[1000] = {0};
    cout << "Fibonacci sequence: ";
    for(int i = 1; i <= n; i++){
        cout << fibonacci(i, total) << " ";
    }
    cout << endl;
    return 0;

}