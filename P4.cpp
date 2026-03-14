
#include "splashkit.h"

int main()
{
    string name;
    write("What is your name: ");
    name = read_line();
    
    const int(MINUTES_PER_HOUR) = 60;

    double speed = 0.0;
    double time = 0.0;
    double distance = 0.0;

    string user_input;

    write_line();
    write_line("Hi" " " + name + ".");
    write_line();

    write("How far have you travelled so far? Enter km: ");
    user_input = read_line();
    distance = to_double(user_input);

    write("How long has it taken? Enter minutes: ");
    user_input = read_line();
    time = to_double(user_input);

    write("Your speed is:");
    write(distance / time);
    write("km/hr");
}