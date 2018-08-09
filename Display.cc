// This is under maintanace...... ....

#include <GL/freeglut.h>
#include <GL/gl.h>
#include <math.h>

void drawpattern()
{
    // Set Background Color
    glClearColor(0.4, 0.4, 0.4, 1.0);
   
    // Clear screen
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

            glBegin(GL_POINTS);
            glColor3f(0.4, 0.3, 0.5);
                glVertex3f(100,100,0);
                glVertex3f(100,2100,0);
                glVertex3f(200,2100,0);
                glVertex3f(200,100,0);
           glEnd();

         glBegin(GL_POINTS);
            glColor3f(0.4, 0.3, 0.5);
                glVertex3f(1000,100,0);
                glVertex3f(1000,2100,0);
                glVertex3f(1100,2100,0);
                glVertex3f(1100,100,0);
        glEnd();
               
        glBegin(GL_POINTS);
            glColor3f(0.4, 0.3, 0.5);
                glVertex3f(1900,100,0);
                glVertex3f(1900,2500,0);
                glVertex3f(100,2500,0);
                glVertex3f(100,2600,0);
                glVertex3f(6400,2600,0);
                glVertex3f(6400,2500,0);
                glVertex3f(2000,2500,0);
                glVertex3f(2000,100,0);
        glEnd();
        
         glBegin(GL_POINTS);
            glColor3f(0.4, 0.3, 0.5);
                glVertex3f(2800,100,0);
                glVertex3f(2800,2100,0);
                glVertex3f(2900,2100,0);
                glVertex3f(2900,100,0);
        glEnd();

         glBegin(GL_POINTS);
            glColor3f(0.4, 0.3, 0.5);
                glVertex3f(4000,100,0);
                glVertex3f(3700,100,0);
                glVertex3f(3700,200,0);
                glVertex3f(3900,200,0);
                glVertex3f(3900,900,0);
                glVertex3f(3700,900,0);
                glVertex3f(3900,2100,0);
                glVertex3f(4000,2100,0);
                glVertex3f(4000,2000,0);
                glVertex3f(3800,2000,0);
                glVertex3f(3800,1000,0);
                glVertex3f(4000,1000,0);
        glEnd();

        glBegin(GL_POINTS);
            glColor3f(0.4, 0.3, 0.5);
                glVertex3f(5000,100,0);
                glVertex3f(5000,2100,0);
                glVertex3f(5500,2100,0);
                glVertex3f(5700,1900,0);
                glVertex3f(5900,2100,0);
                glVertex3f(6400,2100,0);
                glVertex3f(6400,100,0);
                glVertex3f(6300,100,0);
                glVertex3f(6300,2000,0);
                glVertex3f(5500,1800,0);
                glVertex3f(5100,2000,0);
                glVertex3f(5100,100,0);
        glEnd();
       
    glFlush();
}


int main(int argc, char **argv)
{
        // Initialize GLUT and process user parameters
        glutInit(&argc, argv);

        // Request double buffered true color window with Z-buffer
        glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);

        glutInitWindowSize(5000,7000);
        glutInitWindowPosition(100, 100);

        // Create window
        glutCreateWindow("OpenGL_Pattern_Printing");
        
        // Callback functions
        glutDisplayFunc(drawpattern);
        
        // Pass control to GLUT for events
        glutMainLoop();

        return 0;
}
