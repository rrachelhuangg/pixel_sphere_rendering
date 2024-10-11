# pixel_sphere_rendering

* C program that renders a sphere using ray tracing
* header files define ray, sphere, and vector structures
* sphere and light source locations can be customized to change the appearance of the sphere. px*px dimension specifications of the output image can also be modified.
* algorithm iterates through each pixel in the output ppm file:
  * if the ray from the light source intersects that pixel:
    * calculates the intersection point and the normal at which the ray of light hits the sphere
    * simulates illumation of the pixel appropriately based on the light location and the pixel location using ambient, diffuse, and specular lighting
    * writes the colored pixel to output image
  * if the ray from the light source does not intersect the pixel: write a black pixel to output image
<br>
<img width="350" alt="Screenshot 2024-10-11 at 5 26 44 PM" src="https://github.com/user-attachments/assets/1f09b9ca-767a-4c9a-ad2e-376bf08274d5">

