#include <iostream>
using namespace std;

int main(){
    int arr1[3][3] = {{1,2,3},{4,5,6},{7,8,9}},sum = 0 ;

    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            sum += arr1[i][j];
            cout << sum;
        }
    }
    return 0;
}
