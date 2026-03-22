#include "splashkit.h"
#include "utilities.h"

enum day;

int main()
{
    enum day
    {
        SUNDAY,
        MONDAY,
        TUESDAY,
        WEDNESDAY,
        THURSDAY,
        FRIDAY,
        SATURDAY
    };
    day today;

    // Assigning a value to the enum variable
    today = WEDNESDAY;

    // Print the value of today
    write_line("Today is day number " + to_string(today));

    return 0;
}