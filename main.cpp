#include <windows.h> // for MS Windows
#include <GL/glut.h> // GLUT, include glu.h and gl.h
#include <math.h>

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void Road()
{
glColor3ub(17, 17, 9); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(-5,10);
glVertex2f(110,10);
glVertex2f(110,40);
glVertex2f(-5,40);

glEnd();
glBegin(GL_LINES);
glColor3ub(255, 255, 255);
glVertex2f(0, 25);
glVertex2f(20, 25);
glEnd();

glBegin(GL_LINES);
glColor3ub(255, 255, 255);
glVertex2f(0 + 25, 25);
glVertex2f(20 + 25, 25);
glEnd();

glBegin(GL_LINES);
glColor3ub(255, 255, 255);
glVertex2f(0 + 25 + 25, 25);
glVertex2f(20 + 25 + 25, 25);
glEnd();

glBegin(GL_LINES);
glColor3ub(255, 255, 255);
glVertex2f(0 + 25, 25);
glVertex2f(20 + 25, 25);
glEnd();

glBegin(GL_LINES);
glColor3ub(255, 255, 255);
glVertex2f(80, 25);
glVertex2f(100, 25);
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
    glVertex2f(10+x,y+65-20);
    glVertex2f(35+x,y+65-20);
    glVertex2f(35+x,y+58-20);
    glVertex2f(10+x,y+58-20);
    glEnd();
    glColor3ub(255,0,0);
    glBegin(GL_POLYGON);
    glVertex2f(14+x,y+65-20);
    glVertex2f(31+x,y+65-20);
    glVertex2f(28+x,y+70-20);
    glVertex2f(17+x,y+70-20);
    glEnd();

    glColor3ub(0, 0, 0);
    circle(17 + x, 38 + y, 4);
    glColor3ub(0, 0, 0);
    circle(27 + x, 38 + y, 4);


}

void Car1(int x, int y)
{

    glBegin(GL_POLYGON);
    glVertex2f(10+x,y+65-20);
    glVertex2f(35+x,y+65-20);
    glVertex2f(35+x,y+58-20);
    glVertex2f(10+x,y+58-20);
    glEnd();
    glColor3ub(255, 102, 255);
    glBegin(GL_POLYGON);
    glVertex2f(22+x,y+65-20);
    glVertex2f(34+x,y+65-20);
    glVertex2f(34+x,y+70-20);
    glVertex2f(22+x,y+70-20);
    glEnd();

    glColor3ub(0, 0, 0);
    circle(17 + x, 38 + y, 3);
    glColor3ub(0, 0, 0);
    circle(27 + x, 38 + y, 3);


}

void signalLight()
{
    glBegin(GL_QUADS);
    glColor3ub(0, 26, 0);
    glVertex2f(40+12, 25);
    glVertex2f(42+12, 25);
    glVertex2f(42+12, 55);
    glVertex2f(40+12, 55);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 26, 0);
    glVertex2f(40 - 2+12, 55);
    glVertex2f(42 + 2+12, 55);
    glVertex2f(42 + 2+12, 55 + 20);
    glVertex2f(40 - 2+12, 55 + 20);
    glEnd();

   glColor3ub(255, 0, 0);
    circle(41+12, 58, 2);

   glColor3ub(102, 255, 51);
    circle(41+12, 58 + 6, 2);
    glColor3ub(255, 255, 153);
    circle(41+12, 58 + 12, 2);

    //glEnd();
}
void Crossing(float x,float y)
{
glColor3ub(166, 166, 166); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(43 + x, 10.2+y);
glVertex2f(63 + x, 10.2 + y);
glVertex2f(63 + x, 14.5 + y);
glVertex2f(43 + x, 14.5 + y);
 glEnd();
}
void tree(int x, int y)
{
    glBegin(GL_QUADS);
    glColor3ub(102, 51, 0);
    glVertex2f(-60 + x, -70 + y);
    glVertex2f(-55 + x, -70 + y);
    glVertex2f(-55 + x, -50 + y);
    glVertex2f(-60 + x, -50 + y);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(-67 + x, -50 + y);
    glColor3ub(56, 28, 42);
    glVertex2f(-48 + x, -50 + y);
    glColor3ub(60, 59, 95);
    glVertex2f(-57.5 + x, -35 + y);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(-65 + x, -41 + y);
    glColor3ub(56, 28, 42);
    glVertex2f(-50 + x, -41 + y);
    glColor3ub(60, 59, 95);
    glVertex2f(-57.5 + x, -26 + y);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(-63 + x, -33 + y);
    glColor3ub(56, 28, 42);
    glVertex2f(-52 + x, -33 + y);
    glColor3ub(60, 59, 95);
    glVertex2f(-57.5 + x, -22 + y);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(-62 + x, -27 + y);
    glColor3ub(60, 59, 95);
    glVertex2f(-53 + x, -27 + y);
    glColor3ub(56, 28, 42);
    glVertex2f(-57.5 + x, -20 + y);
    glEnd();
}
void sky()
{
    glBegin(GL_TRIANGLES);
   // glColor3ub(0, 153, 255); sky blue
    glColor3ub(60, 59, 95);   //#3c3b5f
    glVertex2f(-5,40);
    glColor3ub(56, 28, 42);  //#381c2a
    glVertex2f(110,40);
    glColor3ub(179, 36, 0);
    glVertex2f(110,100);
    glEnd();

}
void sky1()
{
    glBegin(GL_TRIANGLES);
   // glColor3ub(0, 153, 255); sky blue
    glColor3ub(230, 46, 0);   //#3c3b5f
    glVertex2f(-5,100);
    glColor3ub(230, 184, 0);  //#381c2a
    glVertex2f(110,100);
    glColor3ub(255, 26, 26);
    glVertex2f(-5,40);

    glEnd();
}
void Grass()
{
    glBegin(GL_QUADS);
  //  glColor3f(0.0, 255.0,0.0);
    glColor3ub(0, 26, 0);
    glVertex2f(-5,10);
   // glColor3f(0.0, 153.0, 0.0);
    glColor3ub(0, 77, 0);
    glVertex2f(110,10);
  //  glColor3f(255.0, 255.0,0.0);
    glColor3ub(128, 128, 0);
    glVertex2f(110,-15);
    glColor3f(204.0, 204.0, 0.0);
    glVertex2f(-5,-15);

    glEnd();
}
void Grass1(int x,int y)
{
    glBegin(GL_POLYGON);
    glColor3ub(0, 26, 0);
    glVertex2f(20+x,0+y);
    glColor3ub(0, 77, 0);
    glVertex2f(18.5+x,5+y);
    glColor3ub(153, 153, 0);
    glVertex2f(23+x,1+y);
    glColor3ub(25, 103, 25);
    glVertex2f(22+x,7+y);
    glColor3ub(10, 41, 10);
    glVertex2f(23+x,1.5+y);
    glColor3ub(128,128,0);
    glVertex2f(25+x,3+y);
    glVertex2f(23+x,0+y);

    glEnd();

}
void display() {
glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
glClear(GL_COLOR_BUFFER_BIT);
sky1();
glColor3ub(204, 0, 3);      //#420001
circle(50,70,10);
sky();

tree(160, 105);
tree(140, 105);
tree(120, 105);
tree(100, 105);
tree(80, 105);
tree(60, 105);
Road();
Crossing(0,0);
Crossing(0,8.3);
Crossing(0,16.6);
Crossing(0,24.9);
glColor3ub(255,255,0);
Car(-5,0);
signalLight();
Car(60,0);
Grass();
Grass1(0,0);
Grass1(10,0);
Grass1(12,-03);
Grass1(6,-10);
Grass1(48,-8);
Grass1(64,-8);
Grass1(66,-9);
Grass1(85,-9);
Grass1(66,6);
Car1(10,-22);
glColor3ub(255, 102, 0);
Car1(72,-22);

glFlush(); // Render now
}

int main(int argc, char** argv) {
glutInit(&argc, argv); // Initialize GLUT
glutInitWindowSize(1080, 600);// Set the window's initial width & height
glutCreateWindow("Traffic Scenario");
gluOrtho2D(-5,110,-15,100); // Create a window with the given title

glutDisplayFunc(display);// Register display callback handler for window re-paint
glutMainLoop(); // Enter the event-processing loop
return 0;
}
