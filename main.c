#include "header.h"

int main(void)
{
    sfEvent event = {0};
    sfVideoMode mode = {800, 600, 32};
    sfRenderWindow *window = sfRenderWindow_create(mode, "MyRaycaster", sfDefaultStyle, NULL);
    sfClock *clock = sfClock_create();
    sfInt64 current_time = 0;
    sfInt64 clock_time = 0;
    raycaster_t raycaster = init_raycaster();

    while (sfRenderWindow_isOpen(window)) {
        sfRenderWindow_clear(window, sfBlack);
        clock_time = sfClock_getElapsedTime(clock).microseconds / 1000;
        if (clock_time - current_time > (100)) {
            move_player(&raycaster);
            current_time = clock_time;
        }
        while (sfRenderWindow_pollEvent(window, &event)) {
            if (event.type == sfEvtClosed) {
                sfRenderWindow_close(window);
            }
        }
        cast_rays(&raycaster);
        render_3d_wall(&raycaster);
        display_3d_walls(&raycaster);
        display_2d_map(&raycaster);
        sfRenderWindow_display(window);
    }
    sfRenderWindow_destroy(window);
    sfClock_destroy(clock);
}
