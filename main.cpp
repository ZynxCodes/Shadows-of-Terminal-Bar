#include <iostream>

int main()
{
    int age;
    std::cin >> age;

    std::cout << "Welcome to the Terminal Bar" << std::endl;
    if (age >= 21)
    {
        std::cout << "You can enter the bar and drink alcohol." << std::endl;
    }
    else if (age >= 18)
    {
        std::cout << "You can enter the bar but cannot drink alcohol." << std::endl;
    }
    else
    {
        std::cout << "You cannot enter the bar." << std::endl;
    }
    // if age is equal to 21 ask what drink they want
    if (age >= 21)
    {
        std::string drink;
        std::cout << "What drink would you like?" << std::endl;
        std::cin >> drink;
        std::cout << "Here is your " << drink << ". Enjoy!" << std::endl;

        if (drink == "whiskey" || drink == "vodka" || drink == "rum")
        {
            std::cout << "That drink can be strong, please be careful!" << std::endl;
        }
        else if (drink == "beer" || drink == "wine")
        {
            std::cout << "Enjoy your drink!" << std::endl;
        }
        else
        {
            std::cout << "Sorry, we don't have that drink." << std::endl;
        }
        if (age >= 18)
        {
            std::string minor_drink;
            std::cout << "You can only have non-alcoholic drinks. What would you like?" << std::endl;
            std::cin >> minor_drink;
            std::cout << "Here is your " << minor_drink << ". Enjoy!" << std::endl;
        }
        if (age < 18)
        {
            std::string excuse;
            std::cout << "How did you get into this bar?" << std::endl;
            std::cin >> excuse;
            std::cout << "SECURITY! Remove this delinquent! They said: " << excuse << std::endl;
        }
        std::string game_answer;
        std::cout << "Thank you for visiting the Terminal Bar. Would you like to play pool" << std::endl;
        std::cin >> game_answer;
        std::cout << "You answered: " << game_answer << std::endl;
        if (game_answer == "yes" || game_answer == "Yes")
        {
            std::cout << "Great! Let's play!" << std::endl;
            int player1_score = 0;
            int player2_score = 0;
            while (player1_score < 5 && player2_score < 5)
            {
                int player1_shot;
                int player2_shot;
                std::cout << "Player 1, enter your shot score (0-3): ";
                std::cin >> player1_shot;
                std::cout << "Player 2, enter your shot score (0-3): ";
                std::cin >> player2_shot;
                player1_score += player1_shot;
                player2_score += player2_shot;
                std::cout << "Current Score - Player 1: " << player1_score << " Player 2: " << player2_score << std::endl;
            }
            if (player1_score >= 5)
            {
                std::cout << "Player 1 wins!" << std::endl;
            }
            else
            {
                std::cout << "Player 2 wins!" << std::endl;
            }
        }
        else
        {
            std::cout << "Maybe next time!" << std::endl;
        }
        return 0;
    }