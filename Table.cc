#include<GL/freeglut.h>
#include<GL/gl.h>

void drawTable()
{

glBegin(GL_QUADS); // RIGHT
glNormal3f(0,0,1);
glColor3d(0.5,0.35,0.05);
glVertex3f(m_TableX, 0.0f, m_TableWidth); //bottom left
glVertex3f(m_TableLength, 0.0f, m_TableWidth);//bottom right
glVertex3f(m_TableLength, 0.0f, m_TableWidth);//top right
glVertex3f(m_TableX, 0.0f, m_TableWidth); //top left        
glEnd();

glBegin(GL_QUADS); //BACK
glNormal3f(1,0,0);
glColor3d(0.5,0.35,0.05);
glVertex3f(m_TableLength, 0.0f,  m_TableWidth);
glVertex3f(m_TableLength, 0.0f, m_TableZ);
glVertex3f(m_TableLength, 0.0f, m_TableZ);
glVertex3f(m_TableLength, 0.0f, m_TableWidth);
glEnd();

glBegin(GL_QUADS); //FRONT
glNormal3f(-1,0,0);
glColor3d(0.5,0.35,0.05);
glVertex3f(m_TableX, 0.0f, m_TableZ);
glVertex3f(m_TableX, 0.0f, m_TableWidth);
glVertex3f(m_TableX, 0.0f, m_TableWidth);
glVertex3f(m_TableX, 0.0f, m_TableZ);
glEnd();

glBegin(GL_QUADS); //lEFT
glNormal3f(0,0,-1);
glColor3d(0.5,0.35,0.05);
glVertex3f(m_TableX, 0.0f, m_TableZ);
glVertex3f(m_TableLength, 0.0f, m_TableZ);
glVertex3f(m_TableX, 0.0f, m_TableZ);
glVertex3f(m_TableLength, 0.0f, m_TableZ);
glEnd();

glBegin(GL_QUADS); //BOTTOM
glNormal3f(0,-1,0);
glColor3d(0.5,0.35,0.05);
glVertex3f(m_TableX, -0.001f,  m_TableWidth);
glVertex3f(m_TableLength, -0.001f,  m_TableWidth);
glVertex3f(m_TableLength, -0.001f, m_TableZ); 
glVertex3f(m_TableX, -0.001f, m_TableZ);
glEnd();


}
