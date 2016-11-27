//
// Created by montgomery anderson on 26/11/16.
//

#include <allegro5/allegro5.h>


uint WINDOW_WIDTH = 600;
uint WINDOW_HEIGHT = 400;


void initialise() {
    al_init();
    al_install_keyboard();

    al_create_display(WINDOW_WIDTH, WINDOW_HEIGHT);

    while(true);
}


int main(int argc, char **argv) {
    initialise();

    return 0;
}