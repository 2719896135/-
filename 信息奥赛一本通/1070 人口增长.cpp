#include <iostream>  
#include <iomanip> 
#include <cstdio> 
using namespace std;  
int main()  
{  
    int x, n;  
    double people;  
    cin >> x >> n;  
    people = x;  
    for (int i=0; i<n; i++){
        people *= 1.001;
    }  
    printf("%.4lf",people);
    return 0;  
}
