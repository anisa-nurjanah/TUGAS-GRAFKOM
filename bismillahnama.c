#include <GLFW/glfw3.h>
#include <stdlib.h>
#include <stdio.h>

int x=0.1;
double stop = 0.0;

    static void error_callback(int error, const char* description) {
      fputs(description, stderr);
    }
    static void key_callback(GLFWwindow* window, int key, int scancode, int action, int mods){
      if (key == GLFW_KEY_ESCAPE && action == GLFW_PRESS)
      glfwSetWindowShouldClose(window, GL_TRUE);
    }



void setup_viewport(GLFWwindow* window)
{
    // setting viewports size, projection etc
    float ratio;
    int width, height;
    glfwGetFramebufferSize(window, &width, &height);
    ratio = width / (float) height;
    glViewport(0, 0, width, height);

    glClear(GL_COLOR_BUFFER_BIT);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0,720,720,0, 1.f, -1.f);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glFlush();
}

void bg (){
    glBegin(GL_POLYGON);
    glColor3ub(202,223,228);
    glVertex2d(0,0);
    glColor3ub(6,150,114);
    glVertex2d(720,0);
    glColor3ub(202,223,228);
    glVertex2d(720,720);
    glColor3ub(6,150,114);
    glVertex2d(0,720);
    glEnd();}

void N (){
    glBegin(GL_POLYGON);
    glColor3ub(150,170,215);
    glVertex2d(37.5,305.5);
    glVertex2d(65,305.5);
    glVertex2d(65,396);
    glVertex2d(37.5,396);
    glEnd();

    glBegin(GL_POLYGON);
     glColor3ub(150,170,215);
    glVertex2d(65,305.5);
    glVertex2d(77.88,318);
    glVertex2d(65,318);
    glEnd();

    glBegin(GL_POLYGON);
     glColor3ub(150,170,215);
    glVertex2d(121.75,305.5);
    glVertex2d(155.75,305.5);
    glVertex2d(155.5,396);
    glVertex2d(121.75,396);
    glEnd();

}
void I (){
glBegin(GL_POLYGON);
    glColor3ub(150,170,215);
    glVertex2d(174.25,305.5);
    glVertex2d(208,305.5);
    glVertex2d(208,396);
    glVertex2d(174.25,396);
    glEnd();
}

void S (){


glBegin(GL_POLYGON);
     glColor3ub(150,170,215);
    glVertex2d(253.83,305.5);
    glVertex2d(253.83,319.5);
    glVertex2d(225.75,319.5);
    glEnd();

glBegin(GL_POLYGON);
     glColor3ub(150,170,215);
    glVertex2d(253.83,305.5);
    glVertex2d(348.25,305.5);
    glVertex2d(348.25,334.25);
    glVertex2d(253.83,334.25);
    glEnd();

glBegin(GL_POLYGON);
     glColor3ub(150,170,215);
    glVertex2d(225.75,319.5);
    glVertex2d(267,319.5);
    glVertex2d(267,345.63);
    glVertex2d(225.75,345.63);
    glEnd();

glBegin(GL_POLYGON);
     glColor3ub(150,170,215);
    glVertex2d(225.75,345.63);
    glVertex2d(253.5,345.63);
    glVertex2d(253.5,363.13);
    glEnd();

glBegin(GL_POLYGON);
    glColor3ub(150,170,215);
    glVertex2d(253.5,341.88);
    glVertex2d(324,341.88);
    glVertex2d(324,363.13);
    glVertex2d(253.5,363.13);
    glEnd();

glBegin(GL_POLYGON);
     glColor3ub(150,170,215);
    glVertex2d(323.93,341.88);
    glVertex2d(351,355.58);
    glVertex2d(337.6,381.94);
    glVertex2d(310.59,368.23);
    glEnd();

glBegin(GL_POLYGON);
     glColor3ub(150,170,215);
    glVertex2d(309.75,355.5);
    glVertex2d(351,355.5);
    glVertex2d(351,396);
    glVertex2d(309.75,396);
    glEnd();

glBegin(GL_POLYGON);
     glColor3ub(150,170,215);
    glVertex2d(226.75,374.75);
    glVertex2d(321.5,374.75);
    glVertex2d(351.5,396);
    glVertex2d(226.75,396);
    glEnd();
}

void A(){
glBegin(GL_POLYGON);
     glColor3ub(150,170,215);
    glVertex2d(368.75,320.5);
    glVertex2d(410,320.5);
    glVertex2d(410,396);
    glVertex2d(368.75,396);
    glEnd();

glBegin(GL_POLYGON);
    glColor3ub(150,170,215);
    glVertex2d(448.25,320.5);
    glVertex2d(483.75,320.5);
    glVertex2d(483.75,396);
    glVertex2d(448.25,396);
    glEnd();

glBegin(GL_POLYGON);
     glColor3ub(150,170,215);
    glVertex2d(411.48,347.98);
    glVertex2d(452.73,347.98);
    glVertex2d(452.73,374.1);
    glVertex2d(411.48,374.1);
    glEnd();

glBegin(GL_POLYGON);
    glColor3ub(150,170,215);
    glVertex2d(389.04,305.98);
    glVertex2d(389.04,320.5);
    glVertex2d(369.75,320.5);
    glEnd();

glBegin(GL_POLYGON);
     glColor3ub(150,170,215);
    glVertex2d(462.94,305.98);
    glVertex2d(483.75,320.5);
    glVertex2d(462.94,320.5);
    glEnd();

glBegin(GL_POLYGON);
     glColor3ub(150,170,215);
    glVertex2d(389.04,305.98);
    glVertex2d(462.94,305.98);
    glVertex2d(462.94,332.1);
    glVertex2d(389.04,332.1);
    glEnd();
}

void J(){
glBegin(GL_POLYGON);
     glColor3ub(150,170,215);
    glVertex2d(619.25,305.5);
    glVertex2d(660.5,305.5);
    glVertex2d(660.5,396);
    glVertex2d(619.25,396);
    glEnd();

glBegin(GL_POLYGON);
     glColor3ub(150,170,215);
    glVertex2d(557.04,375.08);
    glVertex2d(630.94,375.08);
    glVertex2d(630.94,396);
    glVertex2d(557.04,396);
    glEnd();
}

void N1(){
glBegin(GL_POLYGON);
    glColor3ub(0,0,80);
    glVertex2d(47.75,315.75);
    glVertex2d(75.75,315.75);
    glVertex2d(75.75,405.75);
    glVertex2d(47.75,405.75);
    glEnd();

glBegin(GL_POLYGON);
     glColor3ub(0,0,80);
    glVertex2d(75.75,315.75);
    glVertex2d(141.79,378.54);
    glVertex2d(132.25,405.75);
    glVertex2d(59.18,335.73);
    glEnd();

glBegin(GL_POLYGON);
     glColor3ub(0,0,80);
    glVertex2d(132.25,315.75);
    glVertex2d(166,315.75);
    glVertex2d(166,405.75);
    glVertex2d(132.25,405.75);
    glEnd();

glBegin(GL_POLYGON);
     glColor3ub(0,0,80);
    glVertex2d(73.73,349.66);
    glVertex2d(80.88,349.66);
    glVertex2d(80.88,405.75);
    glVertex2d(73.73,405.75);
    glEnd();
}

void I1 (){
glBegin(GL_POLYGON);
    glColor3ub(0,0,80);
    glVertex2d(184,315.83);
    glVertex2d(218.83,315.83);
    glVertex2d(218.83,405.67);
    glVertex2d(184,405.67);
    glEnd();
}

void S1(){
glBegin(GL_POLYGON);
    glColor3ub(0,0,80);
    glVertex2d(357.67,315.83);
    glVertex2d(357.67,336.67);
    glVertex2d(263,336.67);
    glVertex2d(263,315.83);
    glEnd();

glBegin(GL_POLYGON);
    glColor3ub(0,0,80);
    glVertex2d(236,330);
    glVertex2d(277.83,330);
    glVertex2d(277.83,355.83);
    glVertex2d(236,355.83);
    glEnd();

glBegin(GL_POLYGON);
    glColor3ub(0,0,80);
    glVertex2d(334,351.67);
    glVertex2d(334,370);
    glVertex2d(263,370);
    glVertex2d(263,351.67);
    glEnd();

glBegin(GL_POLYGON);
    glColor3ub(0,0,80);
    glVertex2d(320.33,366);
    glVertex2d(360,366);
    glVertex2d(360,405.67);
    glVertex2d(320.33,405.67);
    glEnd();

glBegin(GL_POLYGON);
    glColor3ub(0,0,80);
    glVertex2d(330,384.83);
    glVertex2d(330,405.67);
    glVertex2d(237.33,405.67);
    glVertex2d(237.33,384.83);
    glEnd();

glBegin(GL_POLYGON);
    glColor3ub(0,0,80);
    glVertex2d(236,330);
    glVertex2d(263,315.83);
    glVertex2d(263,330);
    glEnd();

glBegin(GL_POLYGON);
    glColor3ub(0,0,80);
    glVertex2d(236,355.83);
    glVertex2d(263,315.83);
    glVertex2d(263,370);
    glEnd();

glBegin(GL_POLYGON);
    glColor3ub(0,0,80);
    glVertex2d(334,351.67);
    glVertex2d(334,366);
    glVertex2d(360,366);
    glEnd();
}

void A1(){
glBegin(GL_POLYGON);
    glColor3ub(0,0,80);
    glVertex2d(378.83,329.83);
    glVertex2d(413,329.83);
    glVertex2d(413,405.67);
    glVertex2d(378.84,405.67);
    glEnd();

glBegin(GL_POLYGON);
    glColor3ub(0,0,80);
    glVertex2d(459,329.83);
    glVertex2d(493.17,329.83);
    glVertex2d(493.17,405.67);
    glVertex2d(459,405.67);
    glEnd();

glBegin(GL_POLYGON);
    glColor3ub(0,0,80);
    glVertex2d(399,315.83);
    glVertex2d(472.83,315.83);
    glVertex2d(472.83,336.67);
    glVertex2d(399,336.67);
    glEnd();

glBegin(GL_POLYGON);
    glColor3ub(0,0,80);
    glVertex2d(403.67,357.83);
    glVertex2d(465.33,357.83);
    glVertex2d(465.33,378.83);
    glVertex2d(403.67,378.83);
    glEnd();

glBegin(GL_POLYGON);
    glColor3ub(0,0,80);
    glVertex2d(378.83, 329.83);
    glVertex2d(399,315.83);
    glVertex2d(399,329.83);
    glEnd();

glBegin(GL_POLYGON);
    glColor3ub(0,0,80);
    glVertex2d(472.83,315.83);
    glVertex2d(493.17,329.83);
    glVertex2d(472.83,329.83);
    glEnd();
}

void J1 (){
glBegin(GL_POLYGON);
    glColor3ub(0,0,80);
    glVertex2d(629,315.83);
    glVertex2d(670.67,315.83);
    glVertex2d(670.67,405.67);
    glVertex2d(629,405.67);
    glEnd();

glBegin(GL_POLYGON);
    glColor3ub(0,0,80);
    glVertex2d(567.67,384.67);
    glVertex2d(637.33,384.67);
    glVertex2d(637.33,405.67);
    glVertex2d(567.67,405.67);
    glEnd();
}

void bentuk1(){
    glPushMatrix();
    glTranslatef(x,0,0);
glBegin(GL_POLYGON);
    glColor3ub(150,170,215);
    glVertex2d(37,227.35);
    glVertex2d(194.17,217.7);
    glVertex2d(508.5,217.7);
    glColor3ub(0,0,80);
    glVertex2d(665.67,227.35);
    glVertex2d(508.5,237);
    glVertex2d(194.17,237);
    glEnd();

    if(x<=720)x++;
        else if(x>=720) {
            x--;
            if(x==720) x=0;
        }
    glPopMatrix();
}

void bentuk2(){
    glPushMatrix();
    glTranslatef(-x,0,0);
glBegin(GL_POLYGON);
    glColor3ub(0,0,80);
    glVertex2d(37,485.35);
    glVertex2d(194.17,475.7);
    glVertex2d(508.5,475.7);
    glColor3ub(150,170,215);
    glVertex2d(665.67,485.35);
    glVertex2d(508.5,495);
    glVertex2d(194.17,495);
    glEnd();
glPopMatrix();

}

void kris1(){
    glPushMatrix();
    glTranslated(604.67,108,0);  //957, 400 itu pusat rotasinya
        glRotatef((float)glfwGetTime()*100.0f,0.0f,0.0f,1.0f);
        glTranslated(-604.67,-108,0);

glBegin(GL_POLYGON);
    glColor3ub(21,69,73);
    glVertex2d(651.67,77.67);
    glVertex2d(669,154.33);
    glVertex2d(595,171);
    glVertex2d(607.67,133.67);
    glEnd();

glBegin(GL_POLYGON);
    glColor3ub(11,138,145);
    glVertex2d(607.67,133.67);
    glVertex2d(595,171);
    glVertex2d(528.33,148.33);
    glVertex2d(528.33,111);
    glEnd();

glBegin(GL_POLYGON);
    glColor3ub(23,63,63);
    glVertex2d(651.67,77.67);
    glVertex2d(664.33,45);
    glVertex2d(681,111);
    glVertex2d(669,154.33);
    glEnd();

glBegin(GL_POLYGON);
    glColor3ub(7,178,188);
    glVertex2d(528.33,111);
    glVertex2d(651.67,77.67);
    glVertex2d(607.67,133.67);
    glEnd();

glBegin(GL_POLYGON);
    glColor3ub(12,203,255);
    glVertex2d(528.33,111);
    glVertex2d(603.67,45);
    glVertex2d(651.67,77.67);
    glEnd();

glBegin(GL_POLYGON);
    glColor3ub(7,178,188);
    glVertex2d(603.67,45);
    glVertex2d(664.33,45);
    glVertex2d(651.67,77.67);
    glEnd();

        glPopMatrix();
}

void kris2(){
    glPushMatrix();
    glTranslated(113.67,612,0);  //957, 400 itu pusat rotasinya
        glRotatef((float)glfwGetTime()*100.0f,0.0f,0.0f,1.0f);
        glTranslated(-113.67,-612,0);


glBegin(GL_POLYGON);
    glColor3ub(21,242,255);
    glVertex2d(77,547.67);
    glVertex2d(134.33,536.33);
    glVertex2d(137.67,585);
    glVertex2d(110.33,614.33);
    glVertex2d(77,617);
    glEnd();

glBegin(GL_POLYGON);
    glColor3ub(13,181,190);
    glVertex2d(77,547.67);
    glVertex2d(77,617);
    glVertex2d(54.33,637.67);
    glVertex2d(57.67,571.67);
    glEnd();

glBegin(GL_POLYGON);
    glColor3ub(11,201,253);
    glVertex2d(54.33,637.67);
    glVertex2d(77,617);
    glVertex2d(110.33,614.33);
    glVertex2d(156.33,675);
    glEnd();

glBegin(GL_POLYGON);
    glColor3ub(27,61,63);
    glVertex2d(134.33,536.33);
    glVertex2d(173,592.67);
    glVertex2d(156.33,675);
    glVertex2d(137.67,588);
    glEnd();

glBegin(GL_POLYGON);
    glColor3ub(15,108,113);
    glVertex2d(110.33,614.33);
    glVertex2d(137.67,585);
    glVertex2d(156.33,675);
    glEnd();

glBegin(GL_POLYGON);
    glColor3ub(22,71,75);
    glVertex2d(54.33,637.67);
    glVertex2d(156.33,675);
    glVertex2d(98.33,687.67);
    glEnd();

    glPopMatrix();
}

 int main(void)
{
    float radius;
    int i;
    GLFWwindow* window;
    if (!glfwInit()) exit(EXIT_FAILURE);

    window = glfwCreateWindow(720, 720, "Anisa Nurjanah_G64170006", NULL, NULL);

    if (!window)
    {
        glfwTerminate();
        exit(EXIT_FAILURE);
    }

    glfwMakeContextCurrent(window);
    glfwSwapInterval(1);
    glfwSetKeyCallback(window, key_callback);

    while (!glfwWindowShouldClose(window))
    {
        stop = glfwGetTime();
        setup_viewport(window);

        display();
        bg();

        glPushMatrix();
        bentuk1();
        bentuk2();
        if(x<=720)x++;
        else if(x>=720) {
            x--;
            if(x==720) x=0;
        }
        //miringannya difungsi kris yaa
        kris2();
        kris1();

        glTranslated(360,360,0);
        	if (stop <= 10) glScalef(stop*0.1,stop*0.1,0);
        	glTranslated(-360,-360,0);
            N();
            I();
            S();
            A();
            J();

            N1();
            I1();
            S1();
            A1();
            J1();

        //glTranslated(360,360,0);  //957, 400 itu pusat rotasinya
        //glRotatef((float)glfwGetTime()*100.0f,0.0f,0.0f,1.0f);
        //glTranslated(-360,-360,0);
        //glRotatef((float) glfwGetTime() * 20.f, 0.f, 0.f, 0.f);


        //glRotatef(-90, 360, 360, 1);










        glfwSwapBuffers(window);
        glfwPollEvents();
    }
    glfwDestroyWindow(window);
    glfwTerminate();

    exit(EXIT_SUCCESS);
}
