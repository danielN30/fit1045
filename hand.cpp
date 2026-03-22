#include "splashkit.h"

const string IMAGE_NAME = "tree";

int main()
{
    double rotation, scale;
    string user_input;
    bitmap tree;

    write("Enter rotation degrees: ");
    user_input = read_line();
    rotation = to_double(user_input);

    write("Enter scale: ");
    user_input = read_line();
    scale = to_double(user_input);

    open_window("Image Drawing", 800, 600);

    // Load the image
    tree = load_bitmap(IMAGE_NAME, "tree.png");

    draw_bitmap(IMAGE_NAME, 10, 20, option_scale_bmp(scale, scale));
    draw_bitmap(IMAGE_NAME, 220, 20, option_rotate_bmp(rotation));

    refresh_screen();
    delay(5000);
}
