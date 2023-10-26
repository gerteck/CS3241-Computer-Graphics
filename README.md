# CS3241-Computer-Graphics
OpenGL Programs made during the duration of the course

Labs 1 to 4.

### Lab 1: Basic OpenGL, input & interaction, and animation.

Program lets user click the left mouse button anywhere in the window to add a disc centered at the 
position of the mouse cursor. 

Once added, every disc continues to fly with a constant speed until it hits the window boundary. 
Then it is reflected (simple reflection with no energy loss)

<center> 
<img src="./Screens/Lab1-1.jpg"  height="200">
<img src="./Screens/Lab1-2.jpg"  height="100">
</center>


### Lab 2: OpenGL viewing, transformations, hierarchical modeling, and animation.

When you run the program, user sees a spherical planet at the center of the window. There are a dozen cars moving on the planet surface, and each car moves in a different great circle
(you can search the web to find out what a great circle is), and they have different speeds and colors.

With respect to the planet, the camera’s position can be expressed as latitude and longitude, and its distance from the planet’s center. When the Left or Right arrow key is pressed, the camera’s longitude decreases or increases, respectively; and when the Down or Up arrow key is pressed, the camera’s latitude decreases or, respectively. The camera’s up-vector is always pointing north.

<center> 
<img src="./Screens/Lab2-2.jpg"  height="200">
<img src="./Screens/Lab2-1.jpg"  height="100">
</center>

### Lab 3: OpenGL program to simulate planar reflection using texture-mapping and a multipass rendering technique.

The 3D scene contains a table with a flat rectangular semi-reflective table-top. The scene is also populated with other objects, at least some resting on the table-top. The table-top reflects the scene.

In addition, new texture-mapped object are added into the scene. The new object(s) are positioned above the table-top, and may float in the air.
No 3D models in the GLUT library (e.g. glutSolidTorus()) are used for the new object(s), and function(s) are written by oneself to provide the polygons, vertex normal, texture 
coordinates, and material. Each new object has at least 4 polygons.


<center> 
<img src="./Screens/Lab3-1.jpg"  height="200">
<img src="./Screens/Lab3.jpg"  height="100">
<img src="./Screens/Lab3-2.jpg"  height="100">
<img src="./Screens/Lab3-3.jpg"  height="100">
</center>

## Lab 4: To be done