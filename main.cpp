#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>
#include <iostream>
#include<windows.h>


float _move_sun = 1.00f;
float _move_car_1 = 0.0f;
float _speed_car_1 = 0.125f;
float saveCar1;

float _move_car_2 = 0.0f;
float _speed_car_2 = 0.125f;
float saveCar2;

float R=0.7,T=0,P=0;
float R1=0.0,T1=0.4,P1=0;
float x,y,i ;

void update_sun(int value){
    _move_sun -= 0.0160f;// sun speed
    if(_move_sun <= -1.8)// window size
    {
        _move_sun = 1;// position change of sun
    }
	glutPostRedisplay(); //Notify GLUT that the display has changed

	glutTimerFunc(50, update_sun, 0);


}
void update_car_1(int value) {

    _move_car_1 += _speed_car_1;

    if(_move_car_1 > 1.8)
    {
        _move_car_1 = -1.0;
    }
    saveCar1=_move_car_1;
	glutPostRedisplay(); //Notify GLUT that the display has changed

	glutTimerFunc(20, update_car_1, 0); //Notify GLUT to call update again in 25 milliseconds
}
void update_car_2(int value) {

    _move_car_2 -= _speed_car_2;
    if(_move_car_2 < -1.0)
    {
        _move_car_2 = 1.5;
    }
    saveCar2=_move_car_2;
	glutPostRedisplay(); //Notify GLUT that the display has changed

	glutTimerFunc(20, update_car_2, 0); //Notify GLUT to call update again in 25 milliseconds
}
void keyboard(unsigned char key, int x, int y) {
    switch (key) {
  case 'r':  ///red
        R=1;
        T=0;
        P=0;
        R1=0;
        T1=0.4;
        P1=0;
    _move_car_1 = saveCar1;
    _speed_car_1 = 0.0f;

    _move_car_2 = saveCar2;
    _speed_car_2 = 0.0f;


        break;


      case 'g':  ///green
          R1=0;
          T1=1;
          P1=0;
          R=0.7;
          T=0;
          P=0;
    _move_car_1 = saveCar1;
    _speed_car_1 = 0.130f;

   _move_car_2 = saveCar2;
    _speed_car_2 = 0.130f;


    update_car_1(0);
    update_car_2(0);


        break;


    }
}
void handleMouse(int button, int state, int x, int y) {
	if (button == GLUT_LEFT_BUTTON)
	{
		if (state == GLUT_DOWN)
		{
		    _move_car_1 = saveCar1;
            _speed_car_1 = 0.00020f ;

            _move_car_2 = saveCar2;
             _speed_car_2 = 0.00020f ;



              update_car_1(0);
              update_car_2(0);

		}
	}

	glutPostRedisplay();
}
void sky(){
    //Sky
    if(_move_sun>=-0.18f){
        glClear (GL_COLOR_BUFFER_BIT);
        glBegin(GL_QUADS);
        glColor3f(0.529, 0.808, 0.922);// sky color
        glVertex2f(-1.0,1.0);
        glVertex2f(1.0,1.0);
        glVertex2f(1.0, -0.05);
        glVertex2f(-1.0, -0.05);
        glEnd();



        glPushMatrix();

        glTranslatef(-0.78,0.82,0);
        glScalef(0.6,1,1);
        glColor3f(1.000, 1.000, 1.000);
        glBegin(GL_POLYGON);
        for(int i=0;i<200;i++)
        {
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.06;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
        glEnd();
        glPopMatrix();

        glPushMatrix();

        glTranslatef(-0.74,0.87,0);
        glScalef(0.6,1,1);
        glColor3f(1.000, 1.000, 1.000);
        glBegin(GL_POLYGON);
        for(int i=0;i<200;i++)
        {
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.075;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
        glEnd();
        glPopMatrix();

        glPushMatrix();

        glTranslatef(-0.70,0.91,0);
        glScalef(0.6,1,1);
        glColor3f(1.000, 1.000, 1.000);
        glBegin(GL_POLYGON);
        for(int i=0;i<200;i++)
        {
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.075;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
        glEnd();
        glPopMatrix();

        glPushMatrix();

        glTranslatef(-0.65,0.88,0);
        glScalef(0.6,1,1);
        glColor3f(1.000, 1.000, 1.000);
        glBegin(GL_POLYGON);
        for(int i=0;i<200;i++)
        {
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.07;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
        glEnd();
        glPopMatrix();

        glPushMatrix();

        glTranslatef(-0.61,0.80,0);
        glScalef(0.6,1,1);
        glColor3f(1.000, 1.000, 1.000);
        glBegin(GL_POLYGON);
        for(int i=0;i<200;i++)
        {
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.06;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
        glEnd();
        glPopMatrix();

        glPushMatrix();

        glTranslatef(-0.68,0.77,0);
        glScalef(0.6,1,1);
        glColor3f(1.000, 1.000, 1.000);
        glBegin(GL_POLYGON);
        for(int i=0;i<200;i++)
        {
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.075;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
        glEnd();
        glPopMatrix();

        glPushMatrix();

        glTranslatef(-0.75,0.78,0);
        glScalef(0.6,1,1);
        glColor3f(1.000, 1.000, 1.000);
        glBegin(GL_POLYGON);
        for(int i=0;i<200;i++)
        {
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.06;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
        glEnd();
        glPopMatrix();



        glPushMatrix();

        glTranslatef(0.78,0.84,0);
        glScalef(0.6,1,1);
        glColor3f(1.000, 1.000, 1.000);
        glBegin(GL_POLYGON);
        for(int i=0;i<200;i++)
        {
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.06;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
        glEnd();
        glPopMatrix();

        glPushMatrix();

        glTranslatef(0.74,0.87,0);
        glScalef(0.6,1,1);
        glColor3f(1.000, 1.000, 1.000);
        glBegin(GL_POLYGON);
        for(int i=0;i<200;i++)
        {
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.075;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
        glEnd();
        glPopMatrix();

        glPushMatrix();

        glTranslatef(0.70,0.90,0);
        glScalef(0.6,1,1);
        glColor3f(1.000, 1.000, 1.000);
        glBegin(GL_POLYGON);
        for(int i=0;i<200;i++)
        {
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.075;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
        glEnd();
        glPopMatrix();

        glPushMatrix();

        glTranslatef(0.65,0.88,0);
        glScalef(0.6,1,1);
        glColor3f(1.000, 1.000, 1.000);
        glBegin(GL_POLYGON);
        for(int i=0;i<200;i++)
        {
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.07;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
        glEnd();
        glPopMatrix();

        glPushMatrix();

        glTranslatef(0.61,0.88,0);
        glScalef(0.6,1,1);
        glColor3f(1.000, 1.000, 1.000);
        glBegin(GL_POLYGON);
        for(int i=0;i<200;i++)
        {
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.06;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
        glEnd();
        glPopMatrix();

        glPushMatrix();

        glTranslatef(0.68,0.77,0);
        glScalef(0.6,1,1);
        glColor3f(1.000, 1.000, 1.000);
        glBegin(GL_POLYGON);
        for(int i=0;i<200;i++)
        {
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.075;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
        glEnd();
        glPopMatrix();

        glPushMatrix();

        glTranslatef(0.63,0.78,0);
        glScalef(0.6,1,1);
        glColor3f(1.000, 1.000, 1.000);
        glBegin(GL_POLYGON);
        for(int i=0;i<200;i++)
        {
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.075;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
        glEnd();
        glPopMatrix();

        glPushMatrix();

        glTranslatef(0.75,0.78,0);
        glScalef(0.6,1,1);
        glColor3f(1.000, 1.000, 1.000);
        glBegin(GL_POLYGON);
        for(int i=0;i<200;i++)
        {
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.06;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
        glEnd();
        glPopMatrix();


    }


    else {

        glBegin(GL_QUADS);
        glColor3f(0.0, 0.000, 0.30); // neviblue color
        glVertex2f(-1.0,1.0);
        glVertex2f(1.0,1.0);
        glVertex2f(1.0, -0.05);
        glVertex2f(-1.0, -0.05);
        glEnd();

        glPushMatrix();
        glTranslatef(0.0f,_move_sun, 0.0f); // Moon
        glTranslatef(0.0,1.0,0);
        glScalef(0.6,1,1);
        glColor3f(0.902, 0.902, 0.980);
        glBegin(GL_POLYGON);

        for(int i=0;i<200;i++)
        {
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.085;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(0.95,0.95,0);
        glScalef(0.6,1,1);
        glColor3f(1.000, 1.000, 1.000);
        glBegin(GL_POLYGON);
        for(int i=0;i<200;i++)
        {
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.0085;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(-0.75,0.85,0);
        glScalef(0.6,1,1);
        glColor3f(1.000, 1.000, 1.000);
        glBegin(GL_POLYGON);

        for(int i=0;i<200;i++)
        {
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.0085;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(-0.65,0.65,0);
        glScalef(0.6,1,1);
        glColor3f(1.000, 1.000, 1.000);
        glBegin(GL_POLYGON);
        for(int i=0;i<200;i++)
        {
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.0085;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(0.65,0.75,0);
        glScalef(0.6,1,1);
        glColor3f(1.000, 1.000, 1.000);
        glBegin(GL_POLYGON);
        for(int i=0;i<200;i++)
        {
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.0085;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(-0.65,0.93,0);
        glScalef(0.6,1,1);
        glColor3f(1.000, 1.000, 1.000);
        glBegin(GL_POLYGON);
        for(int i=0;i<200;i++)
        {
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.0085;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(-0.10,0.67,0);
        glScalef(0.6,1,1);
        glColor3f(1.000, 1.000, 1.000);
        glBegin(GL_POLYGON);
        for(int i=0;i<200;i++)
        {
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.0085;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(0.15,0.67,0);
        glScalef(0.6,1,1);
        glColor3f(1.000, 1.000, 1.000);
        glBegin(GL_POLYGON);
        for(int i=0;i<200;i++)
        {
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.0085;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(-0.35,0.85,0);
        glScalef(0.6,1,1);
        glColor3f(1.000, 1.000, 1.000);
        glBegin(GL_POLYGON);
        for(int i=0;i<200;i++)
        {
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.0085;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(0.25,0.73,0);
        glScalef(0.6,1,1);
        glColor3f(1.000, 1.000, 1.000);
        glBegin(GL_POLYGON);
        for(int i=0;i<200;i++)
        {
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.0085;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(-0.72,0.63,0);
        glScalef(0.6,1,1);
        glColor3f(1.000, 1.000, 1.000);
        glBegin(GL_POLYGON);
        for(int i=0;i<200;i++)
        {
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.0085;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(0.65,0.73,0);
        glScalef(0.6,1,1);
        glColor3f(1.000, 1.000, 1.000);
        glBegin(GL_POLYGON);
        for(int i=0;i<200;i++)
        {
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.0085;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
        glEnd();
        glPopMatrix();
    }

}
void sun(){
    //Sun
    glLoadIdentity(); //Reset the drawing perspective
    glMatrixMode(GL_MODELVIEW);

       glPushMatrix();
        glTranslatef(0.0f, _move_sun, 0.0f);
        glScalef(0.6,1,1);
        glColor3f(1.000, 0.647, 0.000);
        glBegin(GL_POLYGON);
        for(int i=0;i<200;i++)
        {
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.125;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
        glEnd();
        glPopMatrix();


}
void building(){



glBegin(GL_QUADS); //building 2
glColor3ub(168,50,50);
glVertex2f(-0.58,0.79);
glVertex2f(-0.58,-0.05);
glVertex2f(-0.48,-0.05);
glVertex2f(-0.48,0.79);
glEnd();

glBegin(GL_QUADS); //building 2 glass
glColor3ub(255,255,255);
glVertex2f(-0.49,0.74);
glVertex2f(-0.49,0.72);
glVertex2f(-0.50,0.72);
glVertex2f(-0.50,0.74);
glEnd();

glBegin(GL_QUADS); //building 2 glass
glColor3ub(255,255,255);
glVertex2f(-0.49,0.68);
glVertex2f(-0.49,0.66);
glVertex2f(-0.50,0.66);
glVertex2f(-0.50,0.68);
glEnd();

glBegin(GL_QUADS); //building 2 glass
glColor3ub(255,255,255);
glVertex2f(-0.49,0.62);
glVertex2f(-0.49,0.60);
glVertex2f(-0.50,0.60);
glVertex2f(-0.50,0.62);
glEnd();

glBegin(GL_QUADS); //building 2 glass
glColor3ub(255,255,255);
glVertex2f(-0.49,0.56);
glVertex2f(-0.49,0.54);
glVertex2f(-0.50,0.54);
glVertex2f(-0.50,0.56);
glEnd();

glBegin(GL_QUADS); //building 2 glass
glColor3ub(255,255,255);
glVertex2f(-0.49,0.50);
glVertex2f(-0.49,0.48);
glVertex2f(-0.50,0.48);
glVertex2f(-0.50,0.50);
glEnd();

glBegin(GL_QUADS); //building 2 glass
glColor3ub(255,255,255);
glVertex2f(-0.49,0.44);
glVertex2f(-0.49,0.42);
glVertex2f(-0.50,0.42);
glVertex2f(-0.50,0.44);
glEnd();

glBegin(GL_QUADS); //building 2 glass
glColor3ub(255,255,255);
glVertex2f(-0.49,0.38);
glVertex2f(-0.49,0.36);
glVertex2f(-0.50,0.36);
glVertex2f(-0.50,0.38);
glEnd();

glBegin(GL_QUADS); //building 2 glass
glColor3ub(255,255,255);
glVertex2f(-0.49,0.32);
glVertex2f(-0.49,0.30);
glVertex2f(-0.50,0.30);
glVertex2f(-0.50,0.32);
glEnd();

glBegin(GL_QUADS); //building 2 glass
glColor3ub(255,255,255);
glVertex2f(-0.49,0.26);
glVertex2f(-0.49,0.24);
glVertex2f(-0.50,0.24);
glVertex2f(-0.50,0.26);
glEnd();

glBegin(GL_QUADS); //building 2 glass
glColor3ub(255,255,255);
glVertex2f(-0.49,0.20);
glVertex2f(-0.49,0.18);
glVertex2f(-0.50,0.18);
glVertex2f(-0.50,0.20);
glEnd();

glBegin(GL_QUADS); //building 2 glass
glColor3ub(255,255,255);
glVertex2f(-0.49,0.14);
glVertex2f(-0.49,0.12);
glVertex2f(-0.50,0.12);
glVertex2f(-0.50,0.14);
glEnd();

glBegin(GL_QUADS); //building 2 glass
glColor3ub(255,255,255);
glVertex2f(-0.49,0.08);
glVertex2f(-0.49,0.06);
glVertex2f(-0.50,0.06);
glVertex2f(-0.50,0.08);
glEnd();

glBegin(GL_QUADS); //building 2 glass
glColor3ub(255,255,255);
glVertex2f(-0.49,0.02);
glVertex2f(-0.49,0.00);
glVertex2f(-0.50,0.00);
glVertex2f(-0.50,0.02);
glEnd();

glBegin(GL_QUADS); //building 2 glass
glColor3ub(255,255,255);
glVertex2f(-0.55,0.74);
glVertex2f(-0.55,0.72);
glVertex2f(-0.56,0.72);
glVertex2f(-0.56,0.74);
glEnd();

glBegin(GL_QUADS); //building 2 glass
glColor3ub(255,255,255);
glVertex2f(-0.55,0.68);
glVertex2f(-0.55,0.66);
glVertex2f(-0.56,0.66);
glVertex2f(-0.56,0.68);
glEnd();

glBegin(GL_QUADS); //building 2 glass
glColor3ub(255,255,255);
glVertex2f(-0.55,0.62);
glVertex2f(-0.55,0.60);
glVertex2f(-0.56,0.60);
glVertex2f(-0.56,0.62);
glEnd();

glBegin(GL_QUADS); //building 2 glass
glColor3ub(255,255,255);
glVertex2f(-0.55,0.56);
glVertex2f(-0.55,0.54);
glVertex2f(-0.56,0.54);
glVertex2f(-0.56,0.56);
glEnd();

glBegin(GL_QUADS); //building 2 glass
glColor3ub(255,255,255);
glVertex2f(-0.55,0.50);
glVertex2f(-0.55,0.48);
glVertex2f(-0.56,0.48);
glVertex2f(-0.56,0.50);
glEnd();

glBegin(GL_QUADS); //building 2 glass
glColor3ub(255,255,255);
glVertex2f(-0.55,0.44);
glVertex2f(-0.55,0.42);
glVertex2f(-0.56,0.42);
glVertex2f(-0.56,0.44);
glEnd();

glBegin(GL_QUADS); //building 2 glass
glColor3ub(255,255,255);
glVertex2f(-0.55,0.38);
glVertex2f(-0.55,0.36);
glVertex2f(-0.56,0.36);
glVertex2f(-0.56,0.38);
glEnd();

glBegin(GL_QUADS); //building 2 glass
glColor3ub(255,255,255);
glVertex2f(-0.55,0.32);
glVertex2f(-0.55,0.30);
glVertex2f(-0.56,0.30);
glVertex2f(-0.56,0.32);
glEnd();

glBegin(GL_QUADS); //building 2 glass
glColor3ub(255,255,255);
glVertex2f(-0.55,0.26);
glVertex2f(-0.55,0.24);
glVertex2f(-0.56,0.24);
glVertex2f(-0.56,0.26);
glEnd();

glBegin(GL_QUADS); //building 2 glass
glColor3ub(255,255,255);
glVertex2f(-0.55,0.20);
glVertex2f(-0.55,0.18);
glVertex2f(-0.56,0.18);
glVertex2f(-0.56,0.20);
glEnd();

glBegin(GL_QUADS); //building 2 glass
glColor3ub(255,255,255);
glVertex2f(-0.55,0.14);
glVertex2f(-0.55,0.12);
glVertex2f(-0.56,0.12);
glVertex2f(-0.56,0.14);
glEnd();

glBegin(GL_QUADS); //building 2 glass
glColor3ub(255,255,255);
glVertex2f(-0.55,0.08);
glVertex2f(-0.55,0.06);
glVertex2f(-0.56,0.06);
glVertex2f(-0.56,0.08);
glEnd();

glBegin(GL_QUADS); //building 2 glass
glColor3ub(255,255,255);
glVertex2f(-0.55,0.02);
glVertex2f(-0.55,0.00);
glVertex2f(-0.56,0.00);
glVertex2f(-0.56,0.02);
glEnd();

glBegin(GL_QUADS); //building 2 roof 1
glColor3ub(255,255,255);
glVertex2f(-0.58,0.79);
glVertex2f(-0.58,0.77);
glVertex2f(-0.15,0.77);
glVertex2f(-0.15,0.79);
glEnd();

glBegin(GL_QUADS); //building 2
glColor3ub(255,255,255);
glVertex2f(-0.38,0.87);
glVertex2f(-0.38,0.85);
glVertex2f(-0.24,0.85);
glVertex2f(-0.24,0.87);
glEnd();

glBegin(GL_QUADS); //building 2
glColor3ub(116,88,163);
glVertex2f(-0.48,0.77);
glVertex2f(-0.48,-0.05);
glVertex2f(-0.47,-0.05);
glVertex2f(-0.47,0.77);
glEnd();

glBegin(GL_QUADS); //building 2
glColor3ub(168,50,50);
glVertex2f(-0.47,0.75);
glVertex2f(-0.47,-0.05);
glVertex2f(-0.40,-0.05);
glVertex2f(-0.40,0.75);
glEnd();

glBegin(GL_QUADS); //building 2
glColor3ub(116,88,163);
glVertex2f(-0.40,0.77);
glVertex2f(-0.40,-0.05);
glVertex2f(-0.37,-0.05);
glVertex2f(-0.37,0.77);
glEnd();

glBegin(GL_QUADS); //building 2
glColor3ub(255,255,255);
glVertex2f(-0.37,0.85);
glVertex2f(-0.37,-0.05);
glVertex2f(-0.25,-0.05);
glVertex2f(-0.25,0.85);
glEnd();

glBegin(GL_QUADS); //building 2
glColor3ub(116,88,163);
glVertex2f(-0.25,0.77);
glVertex2f(-0.25,-0.05);
glVertex2f(-0.22,-0.05);
glVertex2f(-0.22,0.77);
glEnd();

glBegin(GL_QUADS); //building 2
glColor3ub(255,255,255);
glVertex2f(-0.22,0.75);
glVertex2f(-0.22,-0.05);
glVertex2f(-0.20,-0.05);
glVertex2f(-0.20,0.75);
glEnd();

glBegin(GL_QUADS); //building 2
glColor3ub(168,50,50);
glVertex2f(-0.20,0.77);
glVertex2f(-0.20,-0.05);
glVertex2f(-0.15,-0.05);
glVertex2f(-0.15,0.77);
glEnd();

glBegin(GL_QUADS); //building 2 glass
glColor3ub(255,255,255);
glVertex2f(-0.17,0.72);
glVertex2f(-0.17,0.70);
glVertex2f(-0.18,0.70);
glVertex2f(-0.18,0.72);
glEnd();

glBegin(GL_QUADS); //building 2 glass
glColor3ub(255,255,255);
glVertex2f(-0.17,0.66);
glVertex2f(-0.17,0.64);
glVertex2f(-0.18,0.64);
glVertex2f(-0.18,0.66);
glEnd();

glBegin(GL_QUADS); //building 2 glass
glColor3ub(255,255,255);
glVertex2f(-0.17,0.60);
glVertex2f(-0.17,0.58);
glVertex2f(-0.18,0.58);
glVertex2f(-0.18,0.60);
glEnd();

glBegin(GL_QUADS); //building 2 glass
glColor3ub(255,255,255);
glVertex2f(-0.17,0.54);
glVertex2f(-0.17,0.52);
glVertex2f(-0.18,0.52);
glVertex2f(-0.18,0.54);
glEnd();

glBegin(GL_QUADS); //building 2 glass
glColor3ub(255,255,255);
glVertex2f(-0.17,0.48);
glVertex2f(-0.17,0.46);
glVertex2f(-0.18,0.46);
glVertex2f(-0.18,0.48);
glEnd();

glBegin(GL_QUADS); //building 2 glass
glColor3ub(255,255,255);
glVertex2f(-0.17,0.42);
glVertex2f(-0.17,0.40);
glVertex2f(-0.18,0.40);
glVertex2f(-0.18,0.42);
glEnd();

glBegin(GL_QUADS); //building 2 glass
glColor3ub(255,255,255);
glVertex2f(-0.17,0.36);
glVertex2f(-0.17,0.34);
glVertex2f(-0.18,0.34);
glVertex2f(-0.18,0.36);
glEnd();

glBegin(GL_QUADS); //building 2 glass
glColor3ub(255,255,255);
glVertex2f(-0.17,0.30);
glVertex2f(-0.17,0.28);
glVertex2f(-0.18,0.28);
glVertex2f(-0.18,0.30);
glEnd();

glBegin(GL_QUADS); //building 2 glass
glColor3ub(255,255,255);
glVertex2f(-0.17,0.24);
glVertex2f(-0.17,0.22);
glVertex2f(-0.18,0.22);
glVertex2f(-0.18,0.24);
glEnd();

glBegin(GL_QUADS); //building 2 glass
glColor3ub(255,255,255);
glVertex2f(-0.17,0.18);
glVertex2f(-0.17,0.16);
glVertex2f(-0.18,0.16);
glVertex2f(-0.18,0.18);
glEnd();

glBegin(GL_QUADS); //building 2 glass
glColor3ub(255,255,255);
glVertex2f(-0.17,0.12);
glVertex2f(-0.17,0.10);
glVertex2f(-0.18,0.10);
glVertex2f(-0.18,0.12);
glEnd();


glBegin(GL_QUADS); //building 2 glass
glColor3ub(255,255,255);
glVertex2f(-0.17,0.06);
glVertex2f(-0.17,0.04);
glVertex2f(-0.18,0.04);
glVertex2f(-0.18,0.06);
glEnd();

glBegin(GL_QUADS); //building 2 glass
glColor3ub(255,255,255);
glVertex2f(-0.17,0.00);
glVertex2f(-0.17,-0.02);
glVertex2f(-0.18,-0.02);
glVertex2f(-0.18,0.00);
glEnd();


glBegin(GL_QUADS); //building 2 glass
glColor3ub(255,255,255);
glVertex2f(-0.43,0.72);
glVertex2f(-0.43,0.70);
glVertex2f(-0.44,0.70);
glVertex2f(-0.44,0.72);
glEnd();

glBegin(GL_QUADS); //building 2 glass
glColor3ub(255,255,255);
glVertex2f(-0.43,0.66);
glVertex2f(-0.43,0.64);
glVertex2f(-0.44,0.64);
glVertex2f(-0.44,0.66);
glEnd();

glBegin(GL_QUADS); //building 2 glass
glColor3ub(255,255,255);
glVertex2f(-0.43,0.60);
glVertex2f(-0.43,0.58);
glVertex2f(-0.44,0.58);
glVertex2f(-0.44,0.60);
glEnd();

glBegin(GL_QUADS); //building 2 glass
glColor3ub(255,255,255);
glVertex2f(-0.43,0.54);
glVertex2f(-0.43,0.52);
glVertex2f(-0.44,0.52);
glVertex2f(-0.44,0.54);
glEnd();

glBegin(GL_QUADS); //building 2 glass
glColor3ub(255,255,255);
glVertex2f(-0.43,0.48);
glVertex2f(-0.43,0.46);
glVertex2f(-0.44,0.46);
glVertex2f(-0.44,0.48);
glEnd();


glBegin(GL_QUADS); //building 2 glass
glColor3ub(255,255,255);
glVertex2f(-0.43,0.42);
glVertex2f(-0.43,0.40);
glVertex2f(-0.44,0.40);
glVertex2f(-0.44,0.42);
glEnd();
glBegin(GL_QUADS); //building 2 glass
glColor3ub(255,255,255);
glVertex2f(-0.43,0.36);
glVertex2f(-0.43,0.34);
glVertex2f(-0.44,0.34);
glVertex2f(-0.44,0.36);
glEnd();

glBegin(GL_QUADS); //building 2 glass
glColor3ub(255,255,255);
glVertex2f(-0.43,0.30);
glVertex2f(-0.43,0.28);
glVertex2f(-0.44,0.28);
glVertex2f(-0.44,0.30);
glEnd();
glBegin(GL_QUADS); //building 2 glass
glColor3ub(255,255,255);
glVertex2f(-0.43,0.24);
glVertex2f(-0.43,0.22);
glVertex2f(-0.44,0.22);
glVertex2f(-0.44,0.24);
glEnd();

glBegin(GL_QUADS); //building 2 glass
glColor3ub(255,255,255);
glVertex2f(-0.43,0.18);
glVertex2f(-0.43,0.16);
glVertex2f(-0.44,0.16);
glVertex2f(-0.44,0.18);
glEnd();

glBegin(GL_QUADS); //building 2 glass
glColor3ub(255,255,255);
glVertex2f(-0.43,0.12);
glVertex2f(-0.43,0.10);
glVertex2f(-0.44,0.10);
glVertex2f(-0.44,0.12);
glEnd();


glBegin(GL_QUADS); //building 2 glass
glColor3ub(255,255,255);
glVertex2f(-0.43,0.06);
glVertex2f(-0.43,0.04);
glVertex2f(-0.44,0.04);
glVertex2f(-0.44,0.06);
glEnd();

glBegin(GL_QUADS); //building 2 glass
glColor3ub(255,255,255);
glVertex2f(-0.43,0.00);
glVertex2f(-0.43,-0.02);
glVertex2f(-0.44,-0.02);
glVertex2f(-0.44,0.00);
glEnd();

glBegin(GL_QUADS); //building 2 glass
glColor3ub(26, 125, 156);
glVertex2f(-0.34,0.83);
glVertex2f(-0.34,0.81);
glVertex2f(-0.25,0.81);
glVertex2f(-0.25,0.83);
glEnd();

glBegin(GL_QUADS); //building 2 glass
glColor3ub(26, 125, 156);
glVertex2f(-0.34,0.79);
glVertex2f(-0.34,0.77);
glVertex2f(-0.25,0.77);
glVertex2f(-0.25,0.79);
glEnd();

glBegin(GL_QUADS); //building 2 glass
glColor3ub(26, 125, 156);
glVertex2f(-0.34,0.75);
glVertex2f(-0.34,0.73);
glVertex2f(-0.25,0.73);
glVertex2f(-0.25,0.75);
glEnd();

glBegin(GL_QUADS); //building 2 glass
glColor3ub(26, 125, 156);
glVertex2f(-0.34,0.71);
glVertex2f(-0.34,0.69);
glVertex2f(-0.25,0.69);
glVertex2f(-0.25,0.71);
glEnd();
glBegin(GL_QUADS); //building 2 glass
glColor3ub(26, 125, 156);
glVertex2f(-0.34,0.67);
glVertex2f(-0.34,0.65);
glVertex2f(-0.25,0.65);
glVertex2f(-0.25,0.67);
glEnd();

glBegin(GL_QUADS); //building 2 glass
glColor3ub(26, 125, 156);
glVertex2f(-0.34,0.63);
glVertex2f(-0.34,0.61);
glVertex2f(-0.25,0.61);
glVertex2f(-0.25,0.63);
glEnd();

glBegin(GL_QUADS); //building 2 glass
glColor3ub(26, 125, 156);
glVertex2f(-0.34,0.59);
glVertex2f(-0.34,0.57);
glVertex2f(-0.25,0.57);
glVertex2f(-0.25,0.59);
glEnd();

glBegin(GL_QUADS); //building 2 glass
glColor3ub(26, 125, 156);
glVertex2f(-0.34,0.55);
glVertex2f(-0.34,0.53);
glVertex2f(-0.25,0.53);
glVertex2f(-0.25,0.55);
glEnd();
glBegin(GL_QUADS); //building 2 glass
glColor3ub(26, 125, 156);
glVertex2f(-0.34,0.51);
glVertex2f(-0.34,0.49);
glVertex2f(-0.25,0.49);
glVertex2f(-0.25,0.51);
glEnd();

glBegin(GL_QUADS); //building 2 glass
glColor3ub(26, 125, 156);
glVertex2f(-0.34,0.47);
glVertex2f(-0.34,0.45);
glVertex2f(-0.25,0.45);
glVertex2f(-0.25,0.47);
glEnd();

glBegin(GL_QUADS); //building 2 glass
glColor3ub(26, 125, 156);
glVertex2f(-0.34,0.43);
glVertex2f(-0.34,0.41);
glVertex2f(-0.25,0.41);
glVertex2f(-0.25,0.43);
glEnd();

glBegin(GL_QUADS); //building 2 glass
glColor3ub(26, 125, 156);
glVertex2f(-0.34,0.39);
glVertex2f(-0.34,0.37);
glVertex2f(-0.25,0.37);
glVertex2f(-0.25,0.39);
glEnd();
glBegin(GL_QUADS); //building 2 glass
glColor3ub(26, 125, 156);
glVertex2f(-0.34,0.35);
glVertex2f(-0.34,0.33);
glVertex2f(-0.25,0.33);
glVertex2f(-0.25,0.35);
glEnd();

glBegin(GL_QUADS); //building 2 glass
glColor3ub(26, 125, 156);
glVertex2f(-0.34,0.31);
glVertex2f(-0.34,0.29);
glVertex2f(-0.25,0.29);
glVertex2f(-0.25,0.31);
glEnd();

glBegin(GL_QUADS); //building 2 glass
glColor3ub(26, 125, 156);
glVertex2f(-0.34,0.27);
glVertex2f(-0.34,0.25);
glVertex2f(-0.25,0.25);
glVertex2f(-0.25,0.27);
glEnd();

glBegin(GL_QUADS); //building 2 glass
glColor3ub(26, 125, 156);
glVertex2f(-0.34,0.23);
glVertex2f(-0.34,0.21);
glVertex2f(-0.25,0.21);
glVertex2f(-0.25,0.23);
glEnd();
glBegin(GL_QUADS); //building 2 glass
glColor3ub(26, 125, 156);
glVertex2f(-0.34,0.19);
glVertex2f(-0.34,0.17);
glVertex2f(-0.25,.17);
glVertex2f(-0.25,0.19);
glEnd();

glBegin(GL_QUADS); //building 2 glass
glColor3ub(26, 125, 156);
glVertex2f(-0.34,0.15);
glVertex2f(-0.34,0.13);
glVertex2f(-0.25,0.13);
glVertex2f(-0.25,0.15);
glEnd();

glBegin(GL_QUADS); //building 2 glass
glColor3ub(26, 125, 156);
glVertex2f(-0.34,0.11);
glVertex2f(-0.34,0.09);
glVertex2f(-0.25,0.09);
glVertex2f(-0.25,0.11);
glEnd();
glBegin(GL_QUADS); //building 2 glass
glColor3ub(26, 125, 156);
glVertex2f(-0.34,0.07);
glVertex2f(-0.34,0.05);
glVertex2f(-0.25,0.05);
glVertex2f(-0.25,0.07);
glEnd();
glBegin(GL_QUADS); //building 2
glColor3ub(26, 125, 156);
glVertex2f(-0.34,0.03);
glVertex2f(-0.34,0.01);
glVertex2f(-0.25,0.01);
glVertex2f(-0.25,0.03);
glEnd();
glBegin(GL_QUADS); //building 3

glColor3ub(34,97,99);
glVertex2f(0.12f,0.65f);
glVertex2f(0.12f,-0.05f);
glVertex2f(0.20f,-0.05f);
glVertex2f(0.20f,0.65f);
glEnd();

glBegin(GL_QUADS); //stair window glass-1
glColor3ub(255,255,255);
glVertex2f(0.14f,0.55f);
glVertex2f(0.18f,0.55f);
glVertex2f(0.18f,0.45f);
glVertex2f(0.14f,0.45f);
glEnd();


glBegin(GL_QUADS); //stair window glass-2
glColor3ub(255,255,255);
glVertex2f(0.14f,0.35f);
glVertex2f(0.18f,0.35f);
glVertex2f(0.18f,0.25f);
glVertex2f(0.14f,0.25f);
glEnd();

glBegin(GL_QUADS); //stair window glass-3
glColor3ub(255,255,255);
glVertex2f(0.14f,0.15f);
glVertex2f(0.18f,0.15f);
glVertex2f(0.18f,0.05f);
glVertex2f(0.14f,0.05f);
glEnd();



glBegin(GL_QUADS); //building 3
glColor3ub(16, 32, 34);


glVertex2f(0.20,0.65);
glVertex2f(0.20,-0.05);
glVertex2f(0.22,-0.05);
glVertex2f(0.22,0.65);
glEnd();

glBegin(GL_QUADS); //building 3

glColor3ub(34,97,99);
glVertex2f(0.22,0.65);
glVertex2f(0.22,-0.05);
glVertex2f(0.32,-0.05);
glVertex2f(0.32,0.65);
glEnd();

glBegin(GL_QUADS); //building 3

glColor3ub(16, 32, 34);
glVertex2f(0.32,0.65);
glVertex2f(0.32,-0.05);
glVertex2f(0.34,-0.05);
glVertex2f(0.34,0.65);
glEnd();

glBegin(GL_QUADS); //building 3

glColor3ub(34,97,99);
glVertex2f(0.34,0.65);
glVertex2f(0.34,-0.05);
glVertex2f(0.44,-0.05);
glVertex2f(0.44,0.65);
glEnd();

glBegin(GL_QUADS); //building 3

glColor3ub(16, 32, 34);

glVertex2f(0.44,0.65);
glVertex2f(0.44,-0.05);
glVertex2f(0.46,-0.05);
glVertex2f(0.46,0.65);
glEnd();

glBegin(GL_QUADS); //building 3 edited

glColor3ub(34,97,99);
glVertex2f(0.46,0.65);
glVertex2f(0.46,-0.05);
glVertex2f(0.59,-0.05);
glVertex2f(0.59,0.65);
glEnd();


glBegin(GL_QUADS); //stair window glass-4
glColor3ub(255,255,255);
glVertex2f(0.49f,0.55f);
glVertex2f(0.49f,0.45f);
glVertex2f(0.54f,0.45f);
glVertex2f(0.54f,0.55f);
glEnd();


glBegin(GL_QUADS); //stair window glass-5
glColor3ub(255,255,255);
glVertex2f(0.49f,0.35f);
glVertex2f(0.49f,0.25f);
glVertex2f(0.54f,0.25f);
glVertex2f(0.54f,0.35f);
glEnd();

glBegin(GL_QUADS); //stair window glass-6
glColor3ub(255,255,255);
glVertex2f(0.49f,0.15f);
glVertex2f(0.49f,0.05f);
glVertex2f(0.54f,0.05f);
glVertex2f(0.54f,0.15f);
glEnd();


glBegin(GL_QUADS); //building 3 last partition

glColor3ub(16, 32, 34);
glVertex2f(0.57,0.65);
glVertex2f(0.57,-0.05);
glVertex2f(0.60,-0.05);
glVertex2f(0.60,0.65);
glEnd();


glBegin(GL_QUADS); //building 3 roof
glColor3ub(16, 32, 34);
glVertex2f(0.12,0.65);
glVertex2f(0.12,0.70);
glVertex2f(0.60,0.70);
glVertex2f(0.60,0.65);
glEnd();

glBegin(GL_QUADS); //building 3 roof

glColor3ub(34,97,99);
glVertex2f(0.33,0.88);
glVertex2f(0.33,0.86);
glVertex2f(0.38,0.86);
glVertex2f(0.38,0.88);
glEnd();

glBegin(GL_QUADS); //building 3 roof

glColor3ub(34,97,99);
glVertex2f(0.34,0.90);
glVertex2f(0.34,0.88);
glVertex2f(0.37,0.88);
glVertex2f(0.37,0.90);
glEnd();
glBegin(GL_QUADS); //building 3 roof

glColor3ub(34,97,99);
glVertex2f(0.35,0.98);
glVertex2f(0.35,0.90);
glVertex2f(0.36,0.90);
glVertex2f(0.36,0.98);
glEnd();

glBegin(GL_QUADS); //building 3 roof

glColor3ub(34,97,99);
glVertex2f(0.12,0.70);
glVertex2f(0.60,0.70);
glVertex2f(0.48,0.86);
glVertex2f(0.24,0.86);

glEnd();


glBegin(GL_QUADS); //building 3 window glass
glColor3ub(255,255,255);
glVertex2f(0.235,0.65);
glVertex2f(0.235,0.61);
glVertex2f(0.265,0.61);
glVertex2f(0.265,0.65);
glEnd();
glBegin(GL_QUADS); //building 3 window glass
glColor3ub(255,255,255);
glVertex2f(0.235,0.57);
glVertex2f(0.235,0.53);
glVertex2f(0.265,0.53);
glVertex2f(0.265,0.57);
glEnd();


glBegin(GL_QUADS); //building 3 window glass
glColor3ub(255,255,255);
glVertex2f(0.235,0.49);
glVertex2f(0.235,0.45);
glVertex2f(0.265,0.45);
glVertex2f(0.265,0.49);
glEnd();



glBegin(GL_QUADS); //building 3 window glass
glColor3ub(255,255,255);
glVertex2f(0.235,0.41);
glVertex2f(0.235,0.37);
glVertex2f(0.265,0.37);
glVertex2f(0.265,0.41);
glEnd();
glBegin(GL_QUADS); //building 3 window glass
glColor3ub(255,255,255);
glVertex2f(0.235,0.33);
glVertex2f(0.235,0.29);
glVertex2f(0.265,0.29);
glVertex2f(0.265,0.33);
glEnd();



glBegin(GL_QUADS); //building 3 window glass
glColor3ub(255,255,255);
glVertex2f(0.235,0.25);
glVertex2f(0.235,0.21);
glVertex2f(0.265,0.21);
glVertex2f(0.265,0.25);
glEnd();


glBegin(GL_QUADS); //building 3 window glass
glColor3ub(255,255,255);
glVertex2f(0.235,0.17);
glVertex2f(0.235,0.13);
glVertex2f(0.265,0.13);
glVertex2f(0.265,0.17);
glEnd();
glBegin(GL_QUADS); //building 3 window glass
glColor3ub(255,255,255);
glVertex2f(0.235,0.09);
glVertex2f(0.235,0.05);
glVertex2f(0.265,0.05);
glVertex2f(0.265,0.09);
glEnd();



glBegin(GL_QUADS); //building 3 window glass
glColor3ub(255,255,255);
glVertex2f(0.235,0.01);
glVertex2f(0.235,-0.03);
glVertex2f(0.265,-0.03);
glVertex2f(0.265,0.01);
glEnd();

glBegin(GL_QUADS); //building 3 window glass
glColor3ub(255,255,255);
glVertex2f(0.275,0.65);
glVertex2f(0.275,0.61);
glVertex2f(0.305,0.61);
glVertex2f(0.305,0.65);
glEnd();



glBegin(GL_QUADS); //building 3 window glass
glColor3ub(255,255,255);
glVertex2f(0.275,0.25);
glVertex2f(0.275,0.21);
glVertex2f(0.305,0.21);
glVertex2f(0.305,0.25);
glEnd();



glBegin(GL_QUADS); //building 3 window glass
glColor3ub(255,255,255);
glVertex2f(0.275,0.57);
glVertex2f(0.275,0.53);
glVertex2f(0.305,0.53);
glVertex2f(0.305,0.57);
glEnd();



glBegin(GL_QUADS); //building 3 window glass
glColor3ub(255,255,255);
glVertex2f(0.275,0.49);
glVertex2f(0.275,0.45);
glVertex2f(0.305,0.45);
glVertex2f(0.305,0.49);
glEnd();
glBegin(GL_QUADS); //building 3 window glass
glColor3ub(255,255,255);
glVertex2f(0.275,0.41);
glVertex2f(0.275,0.37);
glVertex2f(0.305,0.37);
glVertex2f(0.305,0.41);
glEnd();


glBegin(GL_QUADS); //building 3 window glass
glColor3ub(255,255,255);
glVertex2f(0.275,0.33);
glVertex2f(0.275,0.29);
glVertex2f(0.305,0.29);
glVertex2f(0.305,0.33);
glEnd();



glBegin(GL_QUADS); //building 3 window glass
glColor3ub(255,255,255);
glVertex2f(0.275,0.25);
glVertex2f(0.275,0.21);
glVertex2f(0.305,0.21);
glVertex2f(0.305,0.25);
glEnd();
glBegin(GL_QUADS); //building 3 window glass
glColor3ub(255,255,255);
glVertex2f(0.275,0.17);
glVertex2f(0.275,0.13);
glVertex2f(0.305,0.13);
glVertex2f(0.305,0.17);
glEnd();


glBegin(GL_QUADS); //building 3 window glass
glColor3ub(255,255,255);
glVertex2f(0.275,0.09);
glVertex2f(0.275,0.05);
glVertex2f(0.305,0.05);
glVertex2f(0.305,0.09);
glEnd();



glBegin(GL_QUADS); //building 3 window glass
glColor3ub(255,255,255);
glVertex2f(0.275,0.01);
glVertex2f(0.275,-0.03);
glVertex2f(0.305,-0.03);
glVertex2f(0.305,0.01);
glEnd();
glBegin(GL_QUADS); //building 3 window glass
glColor3ub(255,255,255);
glVertex2f(0.355,0.65);
glVertex2f(0.355,0.61);
glVertex2f(0.385,0.61);
glVertex2f(0.385,0.65);
glEnd();



glBegin(GL_QUADS); //building 3 window glass
glColor3ub(255,255,255);
glVertex2f(0.355,0.57);
glVertex2f(0.355,0.53);
glVertex2f(0.385,0.53);
glVertex2f(0.385,0.57);
glEnd();



glBegin(GL_QUADS); //building 3 window glass
glColor3ub(255,255,255);
glVertex2f(0.355,0.49);
glVertex2f(0.355,0.45);
glVertex2f(0.385,0.45);
glVertex2f(0.385,0.49);
glEnd();
glBegin(GL_QUADS); //building 3 window glass
glColor3ub(255,255,255);
glVertex2f(0.355,0.41);
glVertex2f(0.355,0.37);
glVertex2f(0.385,0.37);
glVertex2f(0.385,0.41);
glEnd();


glBegin(GL_QUADS); //building 3 window glass
glColor3ub(255,255,255);
glVertex2f(0.355,0.33);
glVertex2f(0.355,0.29);
glVertex2f(0.385,0.29);
glVertex2f(0.385,0.33);
glEnd();



glBegin(GL_QUADS); //building 3 window glass
glColor3ub(255,255,255);
glVertex2f(0.355,0.25);
glVertex2f(0.355,0.21);
glVertex2f(0.385,0.21);
glVertex2f(0.385,0.25);
glEnd();
glBegin(GL_QUADS); //building 3 window glass
glColor3ub(255,255,255);
glVertex2f(0.355,0.17);
glVertex2f(0.355,0.13);
glVertex2f(0.385,0.13);
glVertex2f(0.385,0.17);
glEnd();



glBegin(GL_QUADS); //building 3 window glass
glColor3ub(255,255,255);
glVertex2f(0.355,0.09);
glVertex2f(0.355,0.05);
glVertex2f(0.385,0.05);
glVertex2f(0.385,0.09);
glEnd();


glBegin(GL_QUADS); //building 3 window glass
glColor3ub(255,255,255);
glVertex2f(0.355,0.01);
glVertex2f(0.355,-0.03);
glVertex2f(0.385,-0.03);
glVertex2f(0.385,0.01);
glEnd();
glBegin(GL_QUADS); //building 3 window glass
glColor3ub(255,255,255);
glVertex2f(0.395,0.65);
glVertex2f(0.395,0.61);
glVertex2f(0.425,0.61);
glVertex2f(0.425,0.65);
glEnd();



glBegin(GL_QUADS); //building 3 window glass
glColor3ub(255,255,255);
glVertex2f(0.395,0.57);
glVertex2f(0.395,0.53);
glVertex2f(0.425,0.53);
glVertex2f(0.425,0.57);
glEnd();



glBegin(GL_QUADS); //building 3 window glass
glColor3ub(255,255,255);
glVertex2f(0.395,0.49);
glVertex2f(0.395,0.45);
glVertex2f(0.425,0.45);
glVertex2f(0.425,0.49);
glEnd();
glBegin(GL_QUADS); //building 3 window glass
glColor3ub(255,255,255);
glVertex2f(0.395,0.41);
glVertex2f(0.395,0.37);
glVertex2f(0.425,0.37);
glVertex2f(0.425,0.41);
glEnd();


glBegin(GL_QUADS); //building 3 window glass
glColor3ub(255,255,255);
glVertex2f(0.395,0.33);
glVertex2f(0.395,0.29);
glVertex2f(0.425,0.29);
glVertex2f(0.425,0.33);
glEnd();



glBegin(GL_QUADS); //building 3 window glass
glColor3ub(255,255,255);
glVertex2f(0.395,0.25);
glVertex2f(0.395,0.21);
glVertex2f(0.425,0.21);
glVertex2f(0.425,0.25);
glEnd();
glBegin(GL_QUADS); //building 3 window glass
glColor3ub(255,255,255);
glVertex2f(0.395,0.17);
glVertex2f(0.395,0.13);
glVertex2f(0.425,0.13);
glVertex2f(0.425,0.17);
glEnd();



glBegin(GL_QUADS); //building 3 window glass
glColor3ub(255,255,255);
glVertex2f(0.395,0.09);
glVertex2f(0.395,0.05);
glVertex2f(0.425,0.05);
glVertex2f(0.425,0.09);
glEnd();


glBegin(GL_QUADS); //building 3 window glass
glColor3ub(255,255,255);
glVertex2f(0.395,0.01);
glVertex2f(0.395,-0.03);
glVertex2f(0.425,-0.03);
glVertex2f(0.425,0.01);
glEnd();


}
void building_side_road(){
     //Building side road
 glBegin(GL_QUADS);
    glColor3ub(128,128,128);
    glVertex2f(-1.0, 0.0);
    glVertex2f(-1.0, -0.12);
    glVertex2f(1.0, -0.12);
    glVertex2f(1.0, 0.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,0.0);
    glVertex2f(-1.0, -0.10);
    glVertex2f(-1.0, -0.12);
    glVertex2f(1.0, -0.12);
    glVertex2f(1.0, -0.10);
    glEnd();
}
void Trafficlight(){
     glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.00);
    glVertex2f(-0.15, -0.10);
    glVertex2f(-0.165, -0.10);
    glVertex2f(-0.165, -0.04);
    glVertex2f(-0.15, -0.04);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 0.00);
    glVertex2f(-0.15, -0.04);
    glVertex2f(-0.165, -0.04);
    glVertex2f(-0.165, 0.02);
    glVertex2f(-0.15, 0.02);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.00);
    glVertex2f(-0.15, 0.02);
    glVertex2f(-0.165, 0.02);
    glVertex2f(-0.165, 0.08);
    glVertex2f(-0.15, 0.08);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 0.00);
    glVertex2f(-0.15, 0.08);
    glVertex2f(-0.165, 0.08);
    glVertex2f(-0.165, 0.14);
    glVertex2f(-0.15, 0.14);
    glEnd();

     ////Traffic light lamp box

    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.00);
    glVertex2f(-0.180, 0.14);
    glVertex2f(-0.135, 0.14);
    glVertex2f(-0.135, 0.28);
    glVertex2f(-0.180, 0.28);
    glEnd();


        ////green light
        glPushMatrix();
        glTranslatef(-0.1555f, 0.18f, 0.0f);
        glScalef(0.6,1,1);
        glColor3f(R1,T1,P1);
        glBegin(GL_POLYGON);
        for(int i=0;i<200;i++)
        {
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.026;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
        glEnd();

        ////Red light
        glPushMatrix();
        glTranslatef(0.004f, 0.065f, 1.0f);
        glScalef(1,1,1);
        glColor3f(R, T, P);
        glBegin(GL_POLYGON);
        for(int i=0;i<200;i++)
        {
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.0270;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
        glEnd();

}
void road(){
    //Main road lane 1
    glBegin(GL_QUADS);
    glColor3f(0.412, 0.412, 0.412);
    glVertex2f(-1.0, -0.12);
    glVertex2f(-1.0, -0.50);
    glVertex2f(1.0, -0.50);
    glVertex2f(1.0, -0.12);

    //Main Road Strips 1
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex2f(-0.95, -0.45);
    glVertex2f(-0.95, -0.50);
    glVertex2f(-0.65, -0.50);
    glVertex2f(-0.65, -0.45);

    //Main Road Strips 2
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex2f(-0.55, -0.45);
    glVertex2f(-0.55, -0.50);
    glVertex2f(-0.25, -0.50);
    glVertex2f(-0.25, -0.45);



    //Main Road Zebra crossing
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex2f(-0.15, -0.45);
    glVertex2f(-0.15, -0.50);
    glVertex2f(0.15, -0.50);
    glVertex2f(0.15, -0.45);

     glVertex2f(-0.15, -0.38);
    glVertex2f(-0.15, -0.43);
    glVertex2f(0.15, -0.43);
    glVertex2f(0.15, -0.38);

     glVertex2f(-0.15, -0.31);
    glVertex2f(-0.15, -0.36);
    glVertex2f(0.15, -0.36);
    glVertex2f(0.15, -0.31);


     glVertex2f(-0.15, -0.24);
    glVertex2f(-0.15, -0.29);
    glVertex2f(0.15, -0.29);
    glVertex2f(0.15, -0.24);

    glVertex2f(-0.15, -0.17);
    glVertex2f(-0.15, -0.22);
    glVertex2f(0.15, -0.22);
    glVertex2f(0.15, -0.17);


    glVertex2f(-0.15, -0.10);
    glVertex2f(-0.15, -0.15);
    glVertex2f(0.15, -0.15);
    glVertex2f(0.15, -0.10);



    //Main Road Strips 4
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex2f(0.25, -0.45);
    glVertex2f(0.25, -0.50);
    glVertex2f(0.55, -0.50);
    glVertex2f(0.55, -0.45);

    //Main Road Strips 5
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex2f(0.65, -0.45);
    glVertex2f(0.65, -0.50);
    glVertex2f(.95, -0.50);
    glVertex2f(.95, -0.45);
    glEnd();

    //Main road lane 2
    glBegin(GL_QUADS);
    glColor3f(0.412, 0.412, 0.412);
    glVertex2f(-1.0, -0.50);
    glVertex2f(-1.0, -1.0);
    glVertex2f(1.0, -1.0);
    glVertex2f(1.0, -0.50);

    glEnd();

    //Main Road Zebra crossing
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);

    glVertex2f(-0.15, -0.52);
    glVertex2f(-0.15, -0.57);
    glVertex2f(0.15, -0.57);
    glVertex2f(0.15, -0.52);

    glVertex2f(-0.15, -0.59);
    glVertex2f(-0.15, -0.64);
    glVertex2f(0.15, -0.64);
    glVertex2f(0.15, -0.59);

    glVertex2f(-0.15, -0.66);
    glVertex2f(-0.15, -0.71);
    glVertex2f(0.15, -0.71);
    glVertex2f(0.15, -0.66);


    glVertex2f(-0.15, -0.73);
    glVertex2f(-0.15, -0.78);
    glVertex2f(0.15, -0.78);
    glVertex2f(0.15, -0.73);

    glVertex2f(-0.15, -0.80);
    glVertex2f(-0.15, -0.85);
    glVertex2f(0.15, -0.85);
    glVertex2f(0.15, -0.80);

    glVertex2f(-0.15, -0.87);
    glVertex2f(-0.15, -0.92);
    glVertex2f(0.15, -0.92);
    glVertex2f(0.15, -0.87);
    glEnd();
}
void road_lamp(){

    glBegin(GL_POLYGON);//new s light 1
    glColor3f(0.3, .6, 0.75);
    glVertex2f(-0.535, -0.10);
    glVertex2f(-0.520, -0.10);
    glVertex2f(-0.520, 0.15);
    glVertex2f(-0.525, 0.15);

    glEnd();

    //amar bulb 1
    glBegin(GL_POLYGON);
    glColor3f(0.5, 0.3, 0.2);
    glVertex2f(-0.530, 0.15);
    glVertex2f(-0.505, 0.15);
    glVertex2f(-0.510, 0.18);
    glVertex2f(-0.527, 0.18);

    glEnd();

    if(_move_sun<-0.18){
    glColor3f(0.87, 0.97, 0.45);
    glPushMatrix();

    glBegin(GL_POLYGON);
    glVertex2f(-0.530, 0.15);
    glVertex2f(-0.505, 0.15);
    glVertex2f(-0.510, 0.18);
    glVertex2f(-0.527, 0.18);


    glEnd();
    glPopMatrix();
    }


    glBegin(GL_POLYGON);//new s light 2
    glColor3f(0.3, .6, 0.75);
    glVertex2f(-0.735, -0.10);
    glVertex2f(-0.720, -0.10);
    glVertex2f(-0.720, 0.15);
    glVertex2f(-0.725, 0.15);

    glEnd();

    //amar bulb 2
    glBegin(GL_POLYGON);
    glColor3f(0.5, 0.3, 0.2);
    glVertex2f(-0.730, 0.15);
    glVertex2f(-0.705, 0.15);
    glVertex2f(-0.710, 0.18);
    glVertex2f(-0.727, 0.18);

    glEnd();

    if(_move_sun<-0.18){
    glColor3f(0.87, 0.97, 0.45);
    glPushMatrix();

    glBegin(GL_POLYGON);
    glVertex2f(-0.730, 0.15);
    glVertex2f(-0.705, 0.15);
    glVertex2f(-0.710, 0.18);
    glVertex2f(-0.727, 0.18);
    glEnd();
    glPopMatrix();
    }


    glBegin(GL_POLYGON);//new s light 3
    glColor3f(0.3, .6, 0.75);
    glVertex2f(-0.935, -0.10);
    glVertex2f(-0.920, -0.10);
    glVertex2f(-0.920, 0.15);
    glVertex2f(-0.925, 0.15);

    glEnd();

    //amar bulb 3
    glBegin(GL_POLYGON);
    glColor3f(0.5, 0.3, 0.2);
    glVertex2f(-0.930, 0.15);
    glVertex2f(-0.905, 0.15);
    glVertex2f(-0.910, 0.18);
    glVertex2f(-0.927, 0.18);

    glEnd();

    if(_move_sun<-0.18){
    glColor3f(0.87, 0.97, 0.45);
    glPushMatrix();

    glBegin(GL_POLYGON);
    glVertex2f(-0.930, 0.15);
    glVertex2f(-0.905, 0.15);
    glVertex2f(-0.910, 0.18);
    glVertex2f(-0.927, 0.18);

    glEnd();
    glPopMatrix();
    }

    glBegin(GL_POLYGON);//new s light 4
    glColor3f(0.3, .6, 0.75);
    glVertex2f(-0.335, -0.10);
    glVertex2f(-0.320, -0.10);
    glVertex2f(-0.320, 0.15);
    glVertex2f(-0.325, 0.15);

    glEnd();

    //amar bulb 4
    glBegin(GL_POLYGON);
    glColor3f(0.5, 0.3, 0.2);
    glVertex2f(-0.330, 0.15);
    glVertex2f(-0.305, 0.15);
    glVertex2f(-0.310, 0.18);
    glVertex2f(-0.327, 0.18);

    glEnd();

    if(_move_sun<-0.18){
    glColor3f(0.87, 0.97, 0.45);
    glPushMatrix();

    glBegin(GL_POLYGON);
    glVertex2f(-0.330, 0.15);
    glVertex2f(-0.305, 0.15);
    glVertex2f(-0.310, 0.18);
    glVertex2f(-0.327, 0.18);
    glEnd();
    glPopMatrix();
    }


    //Lam Stand 5
    glBegin(GL_POLYGON);
    glColor3f(0.3, .6, 0.75);
    glVertex2f(0.185, -0.10);
    glVertex2f(0.170, -0.10);
    glVertex2f(0.175, 0.15);
    glVertex2f(0.180, 0.15);
    glEnd();

    //Lamp Stand 5 bulb
    glBegin(GL_POLYGON);
    glColor3f(0.5, 0.3, 0.2);
    glVertex2f(0.180, 0.15);
    glVertex2f(0.155, 0.15);
    glVertex2f(0.160, 0.18);
    glVertex2f(0.178, 0.18);
    glEnd();

    if(_move_sun<-0.18){
    glColor3f(0.87, 0.97, 0.45);
    glPushMatrix();

    glBegin(GL_POLYGON);
    glVertex2f(0.180, 0.15);
    glVertex2f(0.155, 0.15);
    glVertex2f(0.160, 0.18);
    glVertex2f(0.178, 0.18);
    glEnd();
    glPopMatrix();
    }


//Lam Stand 6
    glBegin(GL_POLYGON);
    glColor3f(0.3, .6, 0.75);
    glVertex2f(0.385, -0.10);
    glVertex2f(0.370, -0.10);
    glVertex2f(0.375, 0.15);
    glVertex2f(0.380, 0.15);
    glEnd();

    //Lamp Stand 6 bulb
    glBegin(GL_POLYGON);
    glColor3f(0.5, 0.3, 0.2);
    glVertex2f(0.380, 0.15);
    glVertex2f(0.355, 0.15);
    glVertex2f(0.360, 0.18);
    glVertex2f(0.378, 0.18);
    glEnd();

    if(_move_sun<-0.18){
    glColor3f(0.87, 0.97, 0.45);
    glPushMatrix();

    glBegin(GL_POLYGON);
    glVertex2f(0.380, 0.15);
    glVertex2f(0.355, 0.15);
    glVertex2f(0.360, 0.18);
    glVertex2f(0.378, 0.18);
    glEnd();
    glPopMatrix();
    }

//Lam Stand 7
    glBegin(GL_POLYGON);
    glColor3f(0.3, .6, 0.75);
    glVertex2f(0.585, -0.10);
    glVertex2f(0.570, -0.10);
    glVertex2f(0.575, 0.15);
    glVertex2f(0.580, 0.15);
    glEnd();

    //Lamp Stand 7 bulb
    glBegin(GL_POLYGON);
    glColor3f(0.5, 0.3, 0.2);
    glVertex2f(0.580, 0.15);
    glVertex2f(0.555, 0.15);
    glVertex2f(0.560, 0.18);
    glVertex2f(0.578, 0.18);
    glEnd();

    if(_move_sun<-0.18){
    glColor3f(0.87, 0.97, 0.45);
    glPushMatrix();

    glBegin(GL_POLYGON);
    glVertex2f(0.580, 0.15);
    glVertex2f(0.555, 0.15);
    glVertex2f(0.560, 0.18);
    glVertex2f(0.578, 0.18);
    glEnd();
    glPopMatrix();
    }

    //Lam Stand 8
    glBegin(GL_POLYGON);
    glColor3f(0.3, .6, 0.75);
    glVertex2f(0.785, -0.10);
    glVertex2f(0.770, -0.10);
    glVertex2f(0.775, 0.15);
    glVertex2f(0.780, 0.15);
    glEnd();

    //Lamp Stand 8 bulb
    glBegin(GL_POLYGON);
    glColor3f(0.5, 0.3, 0.2);
    glVertex2f(0.780, 0.15);
    glVertex2f(0.755, 0.15);
    glVertex2f(0.760, 0.18);
    glVertex2f(0.778, 0.18);
    glEnd();

    if(_move_sun<-0.18){
    glColor3f(0.87, 0.97, 0.45);
    glPushMatrix();

    glBegin(GL_POLYGON);
    glVertex2f(0.780, 0.15);
    glVertex2f(0.755, 0.15);
    glVertex2f(0.760, 0.18);
    glVertex2f(0.778, 0.18);
    glEnd();
    glPopMatrix();
    }
}
void car_1(){
    glColor3f(0.0,1.0,0.0);
    glLoadIdentity(); //Reset the drawing perspective
    glPushMatrix();
    glTranslatef(_move_car_1, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
        glVertex2f(-0.85, -0.20);
        glVertex2f(-0.55, -0.20);
        glVertex2f(-0.55, -0.13);
        glVertex2f(-0.60, -0.13);
        glVertex2f(-0.65, -0.03);
        glVertex2f(-0.75, -0.03);
        glVertex2f(-0.80, -0.03);
        glVertex2f(-0.85, -0.13);
        glVertex2f(-0.85, -0.20);
        glVertex2d(-0.90, -0.13);
        glVertex2d(-0.90, -0.20);
        glVertex2d(-0.85, -0.13);
        glVertex2d(-0.9,  -0.13);
    glEnd();
    glPopMatrix();

    glColor3f(0.0, 0.0, 0.0);
    glPushMatrix();
    glTranslatef(_move_car_1, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
        glVertex2f(-0.61, -0.13);
        glVertex2f(-0.66, -0.04);
        glVertex2f(-0.79, -0.04);
        glVertex2f(-0.84, -0.13);
    glEnd();
    glPopMatrix();

    glColor3f(1.0,0.0,0.0);
    glPushMatrix();
    glTranslatef(_move_car_1, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
        glVertex2f(-0.73, -0.13);
        glVertex2f(-0.72, -0.13);
        glVertex2f(-0.72, -0.04);
        glVertex2f(-0.73, -0.04);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(_move_car_1, 0.0f, 0.0f);
    glTranslatef(-0.80,-0.21,0);
        glScalef(0.6,1,1);
         glColor3f(0.000, 0.000, 0.000);
         glBegin(GL_TRIANGLE_FAN);         //circle 3
		for(i=0;i<=2*3.14;i+=0.0001)
		{
			x=0.04*sin(i);
			y=0.04*cos(i);
			glVertex2f(x,y);
		}
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(_move_car_1, 0.0f, 0.0f);
    glTranslatef(-0.80,-0.21,0);
        glScalef(0.6,1,1);
        glColor3f(1.000, 1.000, 1.000);
         glBegin(GL_TRIANGLE_FAN);         //circle 3
		glColor3f(1.0,1.0,1.0);
		for(i=0;i<=2*3.14;i+=0.0001)
		{
			x=0.007*sin(i);
			y=0.009*cos(i);
			glVertex2f(x,y);
		}
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(_move_car_1, 0.0f, 0.0f);
        glTranslatef(-0.62,-0.21,0);
        glScalef(0.6,1,1);
        glColor3f(0.000, 0.000, 0.000);
        glBegin(GL_TRIANGLE_FAN);         //circle 3
		for(i=0;i<=2*3.14;i+=0.0001)
		{
			x=0.04*sin(i);
			y=0.04*cos(i);
			glVertex2f(x,y);
		}
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(_move_car_1, 0.0f, 0.0f);
        glTranslatef(-0.62,-0.21,0);
        glScalef(0.6,1,1);
        glColor3f(1.000, 1.000, 1.000);
         glBegin(GL_TRIANGLE_FAN);         //circle 3
		glColor3f(1.0,1.0,1.0);
		for(i=0;i<=2*3.14;i+=0.0001)
		{
			x=0.007*sin(i);
			y=0.009*cos(i);
			glVertex2f(x,y);
		}
    glEnd();
    glPopMatrix();

    glutSwapBuffers();
}
void car_2(){
    glColor3ub(0,0,255);
	glLoadIdentity(); //Reset the drawing perspective
	glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(_move_car_2, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
        glVertex2f(-0.54, -0.72);
        glVertex2f(-0.21, -0.72);
        glVertex2f(-0.20, -0.70);
        glVertex2f(-0.20, -0.43);
        glVertex2f(-0.21, -0.41);
        glVertex2f(-0.54, -0.41);
        glVertex2f(-0.55, -0.43);
        glVertex2f(-0.55, -0.70);
        glVertex2f(-0.54, -0.72);
	glEnd();
    glPopMatrix();

    glColor3d(0.902, 0.902, 0.980);
    glPushMatrix();
    glTranslatef(_move_car_2, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
        glVertex2f(-0.51, -0.58);
        glVertex2f(-0.44, -0.58);
        glVertex2f(-0.44, -0.46);
        glVertex2f(-0.51, -0.46);
	glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(_move_car_2, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
        glVertex2f(-0.40, -0.58);
        glVertex2f(-0.33, -0.58);
        glVertex2f(-0.33, -0.46);
        glVertex2f(-0.40, -0.46);
	glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(_move_car_2, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
        glVertex2f(-0.29, -0.58);
        glVertex2f(-0.22, -0.58);
        glVertex2f(-0.22, -0.46);
        glVertex2f(-0.29, -0.46);
	glEnd();
    glPopMatrix();

    glColor3f(0.700, 0.647, 1.0);
    glPushMatrix();
    glTranslatef(_move_car_2, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
        glVertex2f(-0.52, -0.70);
        glVertex2f(-0.22, -0.70);
        glVertex2f(-0.222, -0.69);
        glVertex2f(-0.522, -0.69);
	glEnd();
    glPopMatrix();

    glPushMatrix();

        glColor3f(0.700, 0.647, 1.000);
    glPushMatrix();
    glTranslatef(_move_car_2, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
        glVertex2f(-0.529, -0.70);
        glVertex2f(-0.533, -0.70);
        glVertex2f(-0.533, -0.42);
        glVertex2f(-0.529, -0.42);
	glEnd();
    glPopMatrix();

    glPushMatrix();

    glTranslatef(_move_car_2, 0.0f, 0.0f);
        glTranslatef(-0.48,-0.73,0);
        glScalef(0.6,1,1);
        glColor3f(0.000, 0.000, 0.000);
        glBegin(GL_POLYGON);
        for(int i=0;i<200;i++)
        {
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.045;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(_move_car_2, 0.0f, 0.0f);
        glTranslatef(-0.48,-0.73,0);
        glScalef(0.6,1,1);
        glColor3f(1.000, 1.000, 1.000);
        glBegin(GL_POLYGON);
        for(int i=0;i<200;i++)
        {
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.01;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(_move_car_2, 0.0f, 0.0f);
        glTranslatef(-0.27,-0.73,0);
        glScalef(0.6,1,1);
        glColor3f(0.000, 0.000, 0.000);
        glBegin(GL_POLYGON);
        for(int i=0;i<200;i++)
        {
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.045;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(_move_car_2, 0.0f, 0.0f);
        glTranslatef(-0.27,-0.73,0);
        glScalef(0.6,1,1);
        glColor3f(1.000, 1.000, 1.000);
        glBegin(GL_POLYGON);
        for(int i=0;i<200;i++)
        {
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.01;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
    glEnd();
    glPopMatrix();

    glutSwapBuffers();
}
void myDisplay(){

     glLoadIdentity();
    sky();
    sun();
     building_side_road();
     road();
    building();
  road_lamp();
     car_1();
     car_2();
     Trafficlight();
     glFlush();

}
void myInit (void){
    glClearColor(1.0, 1.0, 1.0, 0.0);
    glColor3f(0.0f, 0.0f, 0.0f);
    glPointSize(4.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 1.0, 0.0, 1.0);
}
int main(int argc, char** argv){
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (1366, 768);
    glutInitWindowPosition (0, 0);
    glutCreateWindow ("Highway Scenerio ");
    glutDisplayFunc(myDisplay);
    glutKeyboardFunc(keyboard);
    glutMouseFunc(handleMouse);
    glutTimerFunc(5, update_sun, 0);
    myInit ();
    glutMainLoop();
}
