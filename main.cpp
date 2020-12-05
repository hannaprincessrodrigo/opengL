#include <GL/glut.h>

void display ();
void reshape (int,int);
void init ()
{
	glClearColor (0.85, 0.85, 0.95, 0.0);
}

int main (int argc, char**argv)
	{
		glutInit (&argc, argv);
		glutInitDisplayMode (GLUT_RGB);
		
		glutInitWindowPosition (350, 90);
		glutInitWindowSize (800, 600);

		glutCreateWindow ("My Initials");
	
		glutDisplayFunc (display);
		glutReshapeFunc(reshape);
		init();
		glutMainLoop();
}

void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glLoadIdentity();

	glBegin(GL_QUADS);
	//letter H
	glColor3f (1.0, 0.59, 0.59);
	glVertex2f (-9,9);
	glVertex2f (-7,9);
	glVertex2f (-7,-9);
	glVertex2f (-9,-9);
	glEnd();

	glBegin(GL_QUADS);
	//letter H
	glColor3f (1.0, 0.59, 0.59);
	glVertex2f (-3,9);
	glVertex2f (-1,9);
	glVertex2f (-1,-9);
	glVertex2f (-3,-9);
	glEnd();

	glBegin(GL_QUADS);
	//letter H
	glColor3f (1.0, 0.59, 0.59);
	glVertex2f (-7,1);
	glVertex2f (-3,1);
	glVertex2f (-3,-1);
	glVertex2f (-7,-1);
	glEnd();

	glBegin(GL_QUADS);
	//letter R
	glColor3f (1.0, 0.59, 0.59);
	glVertex2f (1,9);
	glVertex2f (3,9);
	glVertex2f (3,-9);
	glVertex2f (1,-9);
	glEnd();

	glBegin(GL_QUADS);
	//letter R
	glColor3f (1.0, 0.59, 0.59);
	glVertex2f (3,9);
	glVertex2f (7,9);
	glVertex2f (6,7);
	glVertex2f (3,7);
	glEnd();

	glBegin(GL_QUADS);
	//letter R
	glColor3f (1.0, 0.59, 0.59);
	glVertex2f (6,7);
	glVertex2f (7,9);
	glVertex2f (9,6);
	glVertex2f (7.5,5);
	glEnd();

	glBegin(GL_QUADS);
	//letter R
	glColor3f (1.0, 0.59, 0.59);
	glVertex2f (7.5,5);
	glVertex2f (9,6);
	glVertex2f (9,3);
	glVertex2f (7.5,3.5);
	glEnd();

	glBegin(GL_QUADS);
	//letter R
	glColor3f (1.0, 0.59, 0.59);
	glVertex2f (7.5,3.5);
	glVertex2f (9,3);
	glVertex2f (7,0);
	glVertex2f (6,2);
	glEnd();

	glBegin(GL_QUADS);
	//letter R
	glColor3f (1.0, 0.59, 0.59);
	glVertex2f (6,2);
	glVertex2f (7,0);
	glVertex2f (3,0);
	glVertex2f (3,2);
	glEnd();

	glBegin(GL_QUADS);
	//letter R
	glColor3f (1.0, 0.59, 0.59);
	glVertex2f (3,0);
	glVertex2f (5,0);
	glVertex2f (9,-9);
	glVertex2f (7,-9);
	glEnd();


	glFlush ();
}

void reshape (int w, int h)
{
	glViewport (0,0, (GLsizei)w,(GLsizei)h);
	glMatrixMode (GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D (-10,10,-10,10);
	glMatrixMode (GL_MODELVIEW);
}