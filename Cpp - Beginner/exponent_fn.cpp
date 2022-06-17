#include <iostream>

using namespace std;

int power(int base_num, int pow_num){
    int result = 1;
    for(int i = 0; i < pow_num; i++){
        result = result * base_num;

    }

    return result;

}

int main(){

    cout << power(2,5);

    return 0;
}