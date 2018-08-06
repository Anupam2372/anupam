#include<windows.h>
#include <GL/glut.h>
 
void house (void) {
    glBegin(GL_QUADS); //roof
 glColor3f(0.1,0.9,1);
 glVertex3f(0.5, 0.4, 0);
 glVertex3f(-0.3, 0.4, 0);
 glVertex3f(-0.5,0.0, 0);
 glVertex3f(0.3, 0.0, 0);
 glEnd();//end the shape we are currently working on
 
 
    glBegin(GL_TRIANGLES); //side roof
 glColor3f(0.38,0.52,1);
 glVertex3f(0.5, 0.4, 0);
 glVertex3f(0.3, 0.0, 0);
 glVertex3f(0.6,0.15, 0);
 glEnd();
 
 glBegin(GL_QUADS); //wall
 glColor3f(1,0.87,0.87);
 glVertex3f(0.3, 0.0, 0);
 glVertex3f(0.3, -0.4, 0);
 glVertex3f(-0.4,-0.4, 0);
 glVertex3f(-0.4, 0.0, 0);
 glEnd();
 
 glBegin(GL_QUADS); //side wall
 glColor3f(0.57,0.87,0.87);
 glVertex3f(0.6, 0.15, 0);
 glVertex3f(0.6, -0.2, 0);
 glVertex3f(0.3,-0.4, 0);
 glVertex3f(0.3, 0.0, 0);
 glEnd();
 
 glBegin(GL_QUADS); //door frame
 glColor3f(0.1,0.5,0.8);
 glVertex3f(-0.1,-0.2, 0);
 glVertex3f(-0.1,-0.4, 0);
 glVertex3f(0.1,-0.4, 0);
 glVertex3f(0.1,-0.2, 0);
 glEnd();
 glBegin(GL_QUADS); //door upper
 glColor3f(0,0,0);
 glVertex3f(-0.1,-0.2, 0);
 glVertex3f(-0.033,-0.25, 0);
 glVertex3f(0.033,-0.25, 0);
 glVertex3f(0.1,-0.2, 0);
 glEnd();
 glBegin(GL_QUADS); //door lower
 glColor3f(0,0,0);
 glVertex3f(-0.033,-0.25, 0);
 glVertex3f(-0.033,-0.4, 0);
 glVertex3f(0.033,-0.4, 0);
 glVertex3f(0.033,-0.25, 0);
 glEnd();
 glBegin(GL_QUADS); //left window
 glColor3f(0,0,0);
 glVertex3f(-0.3,-0.1, 0);
 glVertex3f(-0.3,-0.3, 0);
 glVertex3f(-0.15,-0.3, 0);
 glVertex3f(-0.15,-0.1, 0);
 glEnd();
 glBegin(GL_QUADS); //right window
 glColor3f(0,0,0);
 glVertex3f(0.15,-0.1, 0);
 glVertex3f(0.15,-0.3, 0);
 glVertex3f(0.28,-0.3, 0);
 glVertex3f(0.28,-0.1, 0);
 glEnd();
 glBegin(GL_QUADS); //side window
 glColor3f(0,0,0);
 glVertex3f(0.5,0.0, 0);   // upper right
 glVertex3f(0.4,-0.05, 0); // upper left
 glVertex3f(0.4,-0.2, 0);  // lower left
 glVertex3f(0.5,-0.15, 0); // lower right
 glEnd();
 glBegin(GL_QUADS); //lower part
 glColor3f(1,0.45,0.25);
 glVertex3f(0.3,-0.4, 0);   // upper right
 glVertex3f(-0.4,-0.4, 0); // upper left
 glVertex3f(-0.4,-0.45, 0);  // lower left
 glVertex3f(0.3,-0.45, 0); // lower right
 glEnd();
 glBegin(GL_QUADS); //side lower part
 glColor3f(1,0.45,0.45);
 glVertex3f(0.6,-0.2, 0);   // upper right
 glVertex3f(0.3,-0.4, 0); // upper left
 glVertex3f(0.3,-0.45, 0);  // lower left
 glVertex3f(0.6,-0.25, 0); // lower right
 glEnd();
 
}
 
void display (void) {
 
    glClear (GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
 house();
 glFlush();
}
 
 
 
int main (int argc, char **argv) {
    glutInit (&argc, argv);
 glutInitDisplayMode (GLUT_SINGLE);
 glutInitWindowSize (800, 500);
 glutInitWindowPosition (100, 100);
    glutCreateWindow ("House");
    glutDisplayFunc (display);
    glutMainLoop ();
    return 0;
}
