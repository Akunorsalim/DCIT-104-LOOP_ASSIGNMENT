//Akunor Salim Ibrahim (10974180)
//DCIT 104- Programming Fundamentals.
#include <iostream>
using namespace std;
int main() {
    int num, i ,upto =0;
    int sum = 2;
    int avg = 2;
    // take input from the user.
    std::cout << "Find the sum of prime numbers up to : ";
    std::cin >> upto;
    for (num=2; num<=upto; num++) {
        for (i = 2; i <= (num / 2); i++) {
            if (num % i == 0) {
                i = num;
                break;
            }
        }
        //finding the sum of the prime numbers
        if(i != num) {
            sum += num;
        }
    }
    //Finding the average of the prime numbers
    int  mean = avg+sum/upto;
    std::cout <<"The sum of of all prime numbers upto "<<upto<<" is "<< sum <<"\n";
    std::cout <<"The average is "<< mean;
    return 0;
}
