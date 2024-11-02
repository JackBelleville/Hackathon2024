#include <stdio.h>
#include <ncurses.h>

int main() {
    initscr();  // Initialize ncurses

    int ch;
    while ((ch = getch()) != 'q') {  // Wait for a key press

        switch (ch) {
            case KEY_UP:
                printw("Up arrow pressed\n");
                break;
            case KEY_DOWN:
                printw("Down arrow pressed\n");
                break;
            case KEY_LEFT:
                printw("Left arrow pressed\n");
                break;
            case KEY_RIGHT:
                printw("Right arrow pressed\n");
                break;
            default:
                printw("Other key pressed: %c\n", ch);
        }
    }

    endwin();  // End ncurses
    return 0;
}
