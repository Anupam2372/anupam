#include<GL/freeglut.h>
#include<GL/gl.h>
#include<math.h>
#include<stdlib.h>

float a = 0;
float b = 0;
float c = 0;
float d = 0;
float e = 0;
float f = 0;
float g = 0;
float h = 0;
float i = 0;
float j = 0;
float s = 0;
 
 
float red=0.3, blue=0.4, green=0.5;
 
float tx = 0, ty = 0, tz =0;
 
void changeSize(int w, int h) {
 // Prevent a divide by zero, when window is too short
 // (you cant make a window of zero width).
 if(h == 0)
  h = 1;
 
 float ratio = 1.0* w / h;
 
 // Reset the coordinate system before modifying
 glMatrixMode(GL_PROJECTION);
 glLoadIdentity();
 
 // Set the viewport to be the entire window
    glViewport(0, 0, w, h);
 
 // Set the correct perspective.
 gluPerspective(50,ratio,1,1000);
 glMatrixMode(GL_MODELVIEW);
 glLoadIdentity();
 gluLookAt(0.0,0.0,35.0,
        0.0,0.0,0.0,
     1.0f,0.5f,0.5f);
 
}
 
 
void drawAxix()
{
 glBegin(GL_LINES);
  glVertex3f(-5,0, 0.0);
  glVertex3f(5,0, 0.0);
 
 glEnd();
 glBegin(GL_LINES);
  glVertex3f(0, -5,0.0);
  glVertex3f(0,5,0);
 glEnd();
 
}
 
 
void renderScene(void) {
  glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
  glColor3d(1,0,0);
 
//drawAxix();
 
glPushMatrix();
 
glTranslated(tx,ty,tz);
 
//// draw sun
 
glPushMatrix();
 
s+=0.5;
       glRotatef(s,0.1,0.1,0);
    glColor3f(1,0,0);
       glutSolidSphere(4.5,50,50);
 
glPopMatrix();
 
 
 
///// draw a
 
glPushMatrix();
 
a+=1;
     glRotatef(a,0.1,0.1,0);
     glColor3f(0.5,0.5,0);
        glTranslated(2.5,-2,0);
        glutSolidSphere(0.3,50,50);
 
glPopMatrix();
 
//////draw b
 
 
glPushMatrix();
 
b+=0.08;
     glRotatef(b,0.1,0.1,0);
     glColor3f(1.2,0.3,0);
        glTranslated(3.5,-3.5,0);
        glutSolidSphere(0.5,50,50);
 
glPopMatrix();
 
////draw c
 
 
glPushMatrix();
 
c+=0.07;
     glRotatef(c,0.1,0.1,0);
     glColor3f(0,0,1);
        glTranslated(5.5,-5.5,0);
        glutSolidSphere(0.7,50,50);
 
 
glPopMatrix();
 
////draw d
 
 
glPushMatrix();
 
d+=0.06;
     glRotatef(d,0.1,0.1,0);
     glColor3f(0,1.5,0);
        glTranslated(7.5,-7.5,0);
        glutSolidSphere(0.9,50,50);
 
 
glPopMatrix();
 
////draw e
 
 
glPushMatrix();
e+=0.05;
        glRotatef(e,0.1,0.1,0);
     glColor3f(0.5,1.7,1);
        glTranslated(9.5,-9.5,0);
        glutSolidSphere(1.0,50,50);
 
 
glPopMatrix();
 
////draw f
 
glPushMatrix();
f+=0.04;
     glRotatef(f,0.1,0.1,0);
     glColor3f(1.5,0,0.3);
        glTranslated(11.5,-11.5,0);
        glutSolidSphere(1.1,50,50);
 
glPopMatrix();
 
////draw g
 
glPushMatrix();
g+=0.03;
     glRotatef(g,0.1,0.1,0);
     glColor3f(0.5,0.5,0);
        glTranslated(12.5,-12.5,0);
        glutSolidSphere(1.3,50,50);
 
glPopMatrix();
 
////draw h
 
 
 
glPushMatrix();
h+=0.02;
        glRotatef(h,0.1,0.1,0);
     glColor3f(1.3,0,0.7);
        glTranslated(13.5,-13.5,0);
        glutSolidSphere(1.5,50,50);
 
glPopMatrix();
 
////draw i
 
glPushMatrix();
i+=0.01;
     glRotatef(i,0.1,0.1,0);
     glColor3f(1,0.2,0.6);
        glTranslated(14.5,-14.5,0);
        glutSolidSphere(0.5,50,50);
 
glPopMatrix();
 
////draw j
 
glPushMatrix();
j+=0.05;
     glRotatef(j,0.1,0.1,0);
     glColor3f(0.7,1.4,0.6);
        glTranslated(15.5,-15.5,0);
        glutSolidSphere(0.7,50,50);
 
glPopMatrix();
 
//glutSolidCone(2);
 
glPopMatrix();
 
glutSwapBuffers();
 
}
 
const GLfloat light_ambient[]  = { 0.0f, 0.0f, 0.0f, 1.0f };
const GLfloat light_diffuse[]  = { 1.0f, 1.0f, 1.0f, 1.0f };
const GLfloat light_specular[] = { 1.0f, 1.0f, 1.0f, 1.0f };
const GLfloat light_position[] = { 2.0f, 5.0f, 5.0f, 0.0f };
 
const GLfloat mat_ambient[]    = { 0.7f, 0.7f, 0.7f, 1.0f };
const GLfloat mat_diffuse[]    = { 0.8f, 0.8f, 0.8f, 1.0f };
const GLfloat mat_specular[]   = { 1.0f, 1.0f, 1.0f, 1.0f };
const GLfloat high_shininess[] = { 1000.0f };
 
 
 
void processNormalKeys(unsigned char key, int x, int y) {
 
 if (key == 27)
  exit(0);
}
 
void processSpecialKeys(int key, int x, int y) {
 
 switch(key) {
  case GLUT_KEY_F1 : red = 1.0; green = 0.0; blue = 0.0;
   tx+=1;
   break;
  case GLUT_KEY_F2 : red = 0.0; green = 1.0; blue = 0.0;
   tx-=1;
   break;
  case GLUT_KEY_F3 : red = 0.0; green = 0.0; blue = 1.0;
   ty+=1;
   break;
  case GLUT_KEY_F4 : red = 1.0; green = 0.0; blue = 0.0;
   ty-=1;
   break;
  case GLUT_KEY_F5 : red = 0.0; green = 1.0; blue = 0.0;
   tz+=1;
   break;
  case GLUT_KEY_F6 : red = 0.0; green = 0.0; blue = 1.0;
   tz-=1;
   break;
 }
}
 
int main(int argc, char **argv) {
 glutInit(&argc, argv);
 glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
 glutInitWindowPosition(150,150);
 glutInitWindowSize(500,500);
 glutCreateWindow("keyboard example");
 glutDisplayFunc(renderScene);
 glutIdleFunc(renderScene);
 glutReshapeFunc(changeSize);
 
 //adding here the setting of keyboard processing
 
 glutKeyboardFunc(processNormalKeys);
 glutSpecialFunc(processSpecialKeys);
 
 
    glEnable(GL_CULL_FACE);
    glCullFace(GL_BACK);
 
    glEnable(GL_DEPTH_TEST);
    glDepthFunc(GL_LESS);
 
    glEnable(GL_LIGHT0);
    glEnable(GL_NORMALIZE);
    glEnable(GL_COLOR_MATERIAL);
    glEnable(GL_LIGHTING);
 
    glLightfv(GL_LIGHT0, GL_AMBIENT,  light_ambient);
    glLightfv(GL_LIGHT0, GL_DIFFUSE,  light_diffuse);
    glLightfv(GL_LIGHT0, GL_SPECULAR, light_specular);
    glLightfv(GL_LIGHT0, GL_POSITION, light_position);
 
    glMaterialfv(GL_FRONT, GL_AMBIENT,   mat_ambient);
    glMaterialfv(GL_FRONT, GL_DIFFUSE,   mat_diffuse);
    glMaterialfv(GL_FRONT, GL_SPECULAR,  mat_specular);
    glMaterialfv(GL_FRONT, GL_SHININESS, high_shininess);
 
 glutMainLoop();
 return 0;
}
