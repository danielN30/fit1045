#include "utilities.h"

const int MAX_NUMBER = 100;
const int MAX_GUESSES = 7;

void print_line(int length)
{
    for (int i = 0; i < length; i++)
    {
        write("-");
    }
    write_line("");
}

bool perform_guess(int guess_number, int target)
{
    int guess;

    guess = read_integer("Guess " + to_string(guess_number) + ": ");

    if (target < guess)
    {
        write_line("The number is less than " + to_string(guess));
    }
    else if (target > guess)
    { 
        write_line("The number is larger than " + to_string(guess));
    }
    else
    {
        write_line("Well done... the number was " + to_string(guess));
    }

    return guess == target;
}

void play_game()
{
    int my_number, guess_number;
    bool got_it;

    my_number = rnd(1, MAX_NUMBER);
    guess_number = 0;

    write_line("I am thinking of a number between 1 and " + to_string(MAX_NUMBER) + "\n");
    do
    {
        guess_number++;
        got_it = perform_guess(guess_number, my_number);
    } while (guess_number < MAX_GUESSES && !got_it);

    if (!got_it)
    {
        write_line("You ran out of guesses... the number was " + to_string(my_number) + "\n");
    }
}

int main()
{
    string again = "";

    do
    {
        play_game();

        write_line();
        print_line(50);
        again = read_string("Do you want to play again [Y/n]? ");
    } while (again != "N" && again != "n");

    write_line("\nBye - enjoy the rest of your day!");
    return 0;
}