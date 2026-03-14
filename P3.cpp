#include "splashkit.h"

int main()
{
open_window("House Drawing", 800, 600);
clear_screen(COLOR_BLUE);
    fill_ellipse(COLOR_GREEN, 0, 400, 800, 400);
    fill_rectangle(COLOR_GRAY, 300, 300, 200, 200);
    fill_triangle(COLOR_RED, 250, 300, 400, 150, 550, 300);
    fill_circle(COLOR_YELLOW, 30, 50, 50);
    refresh_screen();

delay(2000);

    // Copy "Calibri.ttf" to Resources/fonts



    load_font("main", "Calibri.ttf");

    clear_screen(COLOR_WHITE);

    draw_text("That was a house", COLOR_BLACK, 10, 20);
    draw_text("A nice house", COLOR_BLACK, "main", 20, 20, 30);

    refresh_screen();
    delay(5000);
}





