# Workshop Raycasting

You'll only have to edit functions with comments in it.

## 1. Raycasting 2D
- Display the map and the player
- Cast rays and wall collisions
- Move in the map

## 2. Raycasting 3D
- Calculating wall width and height
- Color walls to give them depth

## 3. To go further
- Adding a ground and a ceiling
- Adding collisions player-walls
- Apply textures on walls

---

## Generic Math Formulas

**Convert degrees to radians** <br>
radians = angle * PI / 180 <br>

**Calculate distance between player and ray** <br>
distance = (cos(ray_angle) * (ray_x - player_x)) - (sin(ray_angle) * (ray_y - player_y)) <br>
