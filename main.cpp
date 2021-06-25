#include <windows.h> // for MS Windows
#include <GL/glut.h> // GLUT, include glu.h and gl.h
#include <math.h>

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void Road()
{
glColor3ub(62,62,40); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(0,40);
glVertex2f(100,40);
glVertex2f(100,60);
glVertex2f(0,60);

glEnd();
glBegin(GL_LINES);
glColor3ub(255, 255, 255);
glVertex2f(0, 50);
glVertex2f(20, 50);
glEnd();

glBegin(GL_LINES);
glColor3ub(255, 255, 255);
glVertex2f(0 + 25, 50);
glVertex2f(20 + 25, 50);
glEnd();

glBegin(GL_LINES);
glColor3ub(255, 255, 255);
glVertex2f(0 + 25 + 25, 50);
glVertex2f(20 + 25 + 25, 50);
glEnd();

glBegin(GL_LINES);
glColor3ub(255, 255, 255);
glVertex2f(0 + 25, 50);
glVertex2f(20 + 25, 50);
glEnd();

glBegin(GL_LINES);
glColor3ub(255, 255, 255);
glVertex2f(80, 50);
glVertex2f(100, 50);
glEnd();
}

void circle(int xx, int yy, float r)
{

    glBegin(GL_POLYGON); // Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        // glColor3ub(255, 215, 0);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        // float r = 4.0f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + xx, y + yy);
    }
    glEnd();
}

void Car(int x, int y)
{

    glBegin(GL_POLYGON);
    glVertex2f(20+x,y+70);
    glVertex2f(35+x,y+70);
    glVertex2f(35+x,y+65);
    glVertex2f(40+x,y+65);
    glVertex2f(40+x,y+58);
    glVertex2f(14+x,y+58);
    glVertex2f(14+x,y+65);
    glVertex2f(20+x,y+65);
    glVertex2f(20+x,y+70);

    glEnd();
}
void signalLight()
{
    glBegin(GL_QUADS);
    glColor3ub(0, 51, 0);
    glVertex2f(40, 25);
    glVertex2f(42, 25);
    glVertex2f(42, 55);
    glVertex2f(40, 55);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 51, 0);
    glVertex2f(40 - 2, 55);
    glVertex2f(42 + 2, 55);
    glVertex2f(42 + 2, 55 + 20);
    glVertex2f(40 - 2, 55 + 20);
    glEnd();

   glColor3ub(255, 0, 0);
    circle(41, 58, 2);

   glColor3ub(102, 255, 51);
    circle(41, 58 + 6, 2);
    glColor3ub(255, 255, 153);
    circle(41, 58 + 12, 2);

    //glEnd();
}
void triangle()
{
glColor3f(1.0f,1.0f,0.0f); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(0.0f,0.5f);
glVertex2f(0.5f,0.5f);
glVertex2f(0.25f,0.7f);

 glEnd();
}
void display() {
glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
glClear(GL_COLOR_BUFFER_BIT);
Road();
triangle();
glColor3ub(255,255,0);
Car(10,0);
signalLight();
glFlush(); // Render now
}

int main(int argc, char** argv) {
glutInit(&argc, argv); // Initialize GLUT
glutInitWindowSize(1080, 600);// Set the window's initial width & height
glutCreateWindow("Traffic Scenario");
gluOrtho2D(0,100,0,100); // Create a window with the given title

glutDisplayFunc(display);// Register display callback handler for window re-paint
glutMainLoop(); // Enter the event-processing loop
return 0;
}
