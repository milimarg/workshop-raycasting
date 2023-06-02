# 2D help

Remember that a circle doesn't exceed 360°.

## Display the map and the player

The 2D map is the core of a raycaster. <br>
You'll see a map defined in the header.h, there are multiple values in it, try to understand why. <br>
Define a size for each block on the map, it'll be useful for later. <br>

<br><br><br><br><br><br><br><br><br><br>

## Cast rays and wall collisions

Did you understand why there was two rays casted instead of one? <br>
Begin by creating only one ray.
Try to calculate the first ray position. Hint: it's not always the player's position.
Try to send the position of the ray further, using the player's angle and the recently block size defined.

<br><br><br><br><br><br><br><br><br><br>

## Move in the map

The move is based on the player's angle. Use a specific delta position to move.
