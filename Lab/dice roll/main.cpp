#include <iostream>
#include <ctime>
#include <limits>
#include <cstdlib>


int main()
{
    srand(time(0)); //seeds random generator

    int die1, die2 = 0; //you can put them together to make it smaller + neater
    int roll1, roll2 = 0;
    char repeat = 'y'; //when declaring a char with a letter you have to put ' ' around it

    std::cout << "Welcome. The game is about to begin." << std::endl;

    while (repeat == 'y' || repeat == 'Y') //still needs ' '
    {
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //recommend this instead of system("PAUSE") you will need '#include <limits>"
                                                                            //you can find why this is better in a long thread somewhere in these forums
        die1 = rand() % 6 + 1;
        die2 = rand() % 6 + 1; //dont need brackets around rand()
        roll1 = die1 + die2;

        std::cout << "Your roll was: " << die1 << " + " << die2 << " = " << roll1 << std::endl;
        if (roll1 == 7 || roll1 == 11)
        {
            std::cout << "You win! Would you like to play again? [Y/N]:" << std::endl;
            std::cin >> repeat;
        }
        else if (roll1 == 2 || roll1 == 3 || roll1 == 12)
        {
            std::cout << "Sorry, you lose! Would you like to play again? {Y/N]:" << std::endl;
            std::cin >> repeat;
        } //what happens if it's not 7, 11, 2, 3 or 12?
    }

    return(0);
}