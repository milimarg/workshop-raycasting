#ifndef HEADER_H_
	#define HEADER_H_
    #include <SFML/System.h>
    #include <SFML/Graphics.h>
    #include <SFML/Window.h>

static const int map[64] = {
        1, 1, 1, 1, 1, 1, 1,
        1, 0, 0, 0, 0, 0, 1,
        1, 0, 0, 0, 0, 0, 1,
        1, 0, 0, 0, 0, 0, 1,
        1, 0, 0, 0, 0, 0, 1,
        1, 0, 1, 0, 0, 0, 1,
        1, 0, 0, 0, 0, 0, 1,
        1, 1, 1, 1, 1, 1, 1,
};

typedef struct raycaster_s {
    // variables for the whole raycaster
} raycaster_t;

raycaster_t init_raycaster(void);
void display_2d_map(raycaster_t *raycaster);
void cast_rays(raycaster_t *raycaster);
void move_player(raycaster_t *raycaster);
void render_3d_wall(raycaster_t *raycaster);
void display_3d_walls(raycaster_t *raycaster);

#endif /*HEADER_H_*/
