void play_game()
{
    int secret_number, current_guess_count;
    bool player_guessed_correctly;
    // Generate a random secret number for the player to guess
    secret_number = rnd(1, MAX_NUMBER);
    current_guess_count = 0;
    player_guessed_correctly = false;

    write_line("I am thinking of a number between 1 and " + to_string(MAX_NUMBER) + "\n");

    // Keep prompting the player until they guess correctly or run out of guesses
    do
    {
        current_guess_count++;
        player_guessed_correctly = perform_guess(current_guess_count, secret_number);
    } while (current_guess_count < MAX_GUESSES && !player_guessed_correctly);

    // Inform player if they failed to guess the number
    if (!player_guessed_correctly)
    {
        write_line("You ran out of guesses... the number was " + to_string(secret_number) + "\n");
    }
}

int main()
{
    string play_again_response = "";

    // Keep playing until the player chooses to stop
    do
    {
        play_game();

        write_line();
        print_line(50);
        play_again_response = read_string("Do you want to play again [Y/n]? ");
    } while (play_again_response != "N" && play_again_response != "n");

    write_line("\nBye - enjoy the rest of your day!");
    return 0;
}
