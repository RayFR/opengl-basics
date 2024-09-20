#include <stdio.h>
#include <GL/glut.h> // GLUT (OpenGL Utility Toolkit) -- allows for user input handling and window creation/graphics rendering

void init()
{
    glClearColor(0.0, 0.0, 0.0, 1.0); // this sets the bg colour to black with the last alpha value being opacity (1.0 = fully opaque)
}

void display() // procedure for drawing the graphics
{
    glClear(GL_COLOR_BUFFER_BIT); // clears the screen to prepare it for drawing -- GL_COLOR_BUFFER_BIT tells OpenGL the to clear the screens colour like a whiteboard
    
    // MAIN DRAWING DISPLAY
    glBegin(GL_TRIANGLES);
        glColor3f(1.0, 0.0, 0.0); // red colour -- sets the colour of each vertex individually (DUE TO DIFFERING COLOURS THERE WILL BE A GRADIENT EFFECT)
        glVertex2f(-0.5, -0.5); // bottom left vertex of tri -- defines the position of each vertex 
        glColor3f(0.0, 1.0, 0.0); // green colour
        glVertex2f(0.5, -0.5); // bottom right vertex of triangle
        glColor3f(0.0, 0.0, 1.0); // blue colour
        glVertex2f(0.0, 0.5); // top vertex of tri
    glEnd();

    glFlush(); // ensures all the OpenGL commands are actually executed in this func -- explicitly ending the func commands (not necessary but good practice as sometimes OpenGL batches commands for efficiency)
}

int main(int argc, char** argv)
{
    printf("PRINTNITNTINTI");

    glutInit(&argc, argv); // this initialises GLUT -- argc = count of args passed into program -- argv = an array of arguments
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB); // specifies single frame buffer and then the RGB colour mode
    glutInitWindowSize(500, 500); // specifies the initial screen size on runtime 
    glutCreateWindow("OpenGL Setup Test"); // creates the window with the title "OpenGL Setup Test" 

    init();
    glutDisplayFunc(display); // tells GLUT which function to call when a window needs to be redrawn                      

    glutMainLoop(); // main loop of the program, this makes GLUT start handling all the events
    return 0;
}
