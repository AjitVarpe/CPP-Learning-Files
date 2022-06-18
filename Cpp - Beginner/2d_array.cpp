#include <iostream>

using namespace std;

int main(){
    // 2d arrays and nested for loops
    int number_grid [3][2] = {
        {1,2},{2,3},{3,4}
    };

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 2; j++){
            cout << number_grid[i][j];
        }
        cout << endl;
    }
    return 0;
}