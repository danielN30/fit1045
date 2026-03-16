
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
    double remaining_distance = 0.0;
    double total_distance, total_time = 0.0;
    double time_to_destination = 0.0;
    

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

    speed = distance / time / MINUTES_PER_HOUR;
    write("Your speed is:");
    write(speed);
    write("km/hr");

    write_line();
    write("How far do you have to go? Enter km: ");
    user_input = read_line();
    remaining_distance = to_double(user_input);

    time_to_destination = remaining_distance / speed * MINUTES_PER_HOUR;

    write_line("You will take another " + to_string(time_to_destination) + " minutes before you arrive");

    total_distance = distance + remaining_distance;
    total_time = time + time_to_destination;

    write_line("Total distance will be " + to_string(total_distance) + " km");
    write_line("Total time will be " + to_string(total_time) + "minutes");
}
