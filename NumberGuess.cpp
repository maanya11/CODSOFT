#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    int num = 0;
    int guess = 0;
    int tries = 0;

    srand(time(NULL));
    num = (rand() % 100) + 1;

    std::cout << "NUMBER GUESSING GAME\n";

    do
    {
        std::cout << "Enter a guess between (1-100): ";
        std::cin >> guess;
        tries++;

        if(guess > num){
            std::cout << "Too high!\n";
        }
        else if(guess < num){
            std::cout << "Too low!\n";
        }
        else{
            std::cout << "CORRECT!" << tries << '\n';
        }
    
    }while(guess != num);

    return 0;
}
