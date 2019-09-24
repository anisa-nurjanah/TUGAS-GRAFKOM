#include <GLFW/glfw3.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

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
    glOrtho(0,1080,640,0, 1.f, -1.f);
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
    glColor3ub(6,150,114);
    glVertex2d(0,0);
    glVertex2d(1080,0);
    glVertex2d(1080,640);
    glVertex2d(0,640);
    glEnd();
    }

void bg1 (){
    glBegin(GL_POLYGON);
    glColor3ub(155,172,188);
    glVertex2d(0,0);
    glVertex2d(1080,0);
    glColor3ub(224,229,253);
    glVertex2d(1080,392);
    glVertex2d(0,392);
    glEnd();
    }

void bg2 (){
    glBegin(GL_POLYGON);
    glColor3ub(90,120,60);
    glVertex2d(0,392);
    glVertex2d(1080,392);
    glColor3ub(121,164,75);
    glVertex2d(1080,641);
    glVertex2d(0,640);
    glEnd();
    }

void jalan (){
    glBegin(GL_POLYGON);
    glColor3ub(165,163,168);
    glVertex2d(0,600.5);
    glVertex2d(1080,600.6);
    glVertex2d(1080,640);
    glVertex2d(0,640);
    glEnd();
    }
void atap1(){
glBegin(GL_POLYGON);
    glColor3ub(96,96,96);
    glVertex2d(424,54.5);
    glVertex2d(820.75,54.5);
    glVertex2d(904,146);
    glVertex2d(388,146);
    glEnd();
}
void atap1a(){

glBegin(GL_POLYGON);
    glColor3ub(60,60,60);
    glVertex2d(411.5,73.51);
    glVertex2d(419.5,73.51);
    glVertex2d(395,156);
    glVertex2d(380,156);
    glEnd();
}
void atap2(){
glBegin(GL_POLYGON);
    glColor3ub(96,96,96);
    glVertex2d(242.75,73.51);
    glVertex2d(416.62,73.51);
    glVertex2d(391,156);
    glVertex2d(164,156);
    glEnd();
}
void a(){
    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2d(242.33,156.5);
    glVertex2d(823,156.5);
    glVertex2d(823,462.33);
    glVertex2d(242.33,462.33);
    glEnd();
}
void a1(){
glBegin(GL_POLYGON);
    glColor3ub(245,245,245);
    glVertex2d(168.5,156);
    glVertex2d(384,156);
    glVertex2d(370,170.5);
    glVertex2d(170.5,170.5);
    glEnd();
}

void a2(){
glBegin(GL_POLYGON);
    glColor3ub(245,245,245);
    glVertex2d(391,146);
    glVertex2d(901.5,146);
    glVertex2d(897,161);
    glVertex2d(394,161);
    glEnd();
}

void coklat(){
glBegin(GL_POLYGON);
    glColor3ub(139,115,77);
    glVertex2d(341,170.5);
    glVertex2d(441.5,170.5);
    glVertex2d(441.5,462.33);
    glVertex2d(341,462.33);
    glEnd();
}

void b1(){
     glBegin(GL_POLYGON);
    glColor3ub(127,127,127);
    glVertex2d(242.33,170.5);
    glVertex2d(341,170.5);
    glVertex2d(341,203.5);
    glVertex2d(242.33,203.5);
    glEnd();
}

void b2(){
    glBegin(GL_POLYGON);
    glBegin(GL_POLYGON);
    glColor3ub(127,127,127);
    glVertex2d(384,156);
    glVertex2d(603.75,156);
    glVertex2d(603.75,197.63);
    glVertex2d(441,197.63);
    glVertex2d(441,170.5);
    glVertex2d(370,170.5);
    glEnd();
}

void b3(){
glBegin(GL_POLYGON);
    glColor3ub(72,61,43);
    glVertex2d(341,170.5);
    glVertex2d(441.5,170.5);
    glVertex2d(441.5,224.75);
    glVertex2d(355.75,224.75);
    glVertex2d(358.5,201);
    glVertex2d(341,201);
    glEnd();

}

void b4(){

    glBegin(GL_POLYGON);
    glColor3ub(127,127,127);
    glVertex2d(578.75,197.63);
    glVertex2d(603.75,197.63);
    glVertex2d(603.75,231);
    glVertex2d(578.75,231);
    glEnd();
}

void b5(){
    glBegin(GL_POLYGON);
    glColor3ub(127,127,127);
    glVertex2d(707.25,156.5);
    glVertex2d(823,156.5);
    glVertex2d(823,198.75);
    glVertex2d(707.25,198.75);
    glEnd();
}

void b6(){
    glBegin(GL_POLYGON);
    glColor3ub(116,116,116);
    glVertex2d(605.33,146);
    glVertex2d(610.5,146);
    glVertex2d(610.5,231);
    glVertex2d(603.75,231);
    glVertex2d(603.75,156);
    glEnd();
}

void b7(){
    glBegin(GL_POLYGON);
    glColor3ub(120,120,120);
    glVertex2d(605.33,125.33);
    glVertex2d(610.5,110.5);
    glVertex2d(610.5,146);
    glEnd();
}

void b8(){


    glBegin(GL_POLYGON);
    glColor3ub(123,123,123);
    glVertex2d(242.33,256.67);
    glVertex2d(341,256.67);
    glVertex2d(341,276);
    glVertex2d(332,285);
    glVertex2d(242.33,285);
    glEnd();
}

void b9(){
    glBegin(GL_POLYGON);
    glColor3ub(69,56,40);
    glVertex2d(341,256.67);
    glVertex2d(360.33,256.67);
    glVertex2d(341,276);
    glEnd();
}

void b10(){
glBegin(GL_POLYGON);
    glColor3ub(112,112,112);
    glVertex2d(449,254.67);
    glVertex2d(603.75,254.67);
    glVertex2d(603.75,344);
    glVertex2d(449,344);

    glEnd();
}
void b10a(){
glBegin(GL_POLYGON);
glColor3ub(112,112,112);
    glVertex2d(577,254.67);
    glVertex2d(603.75,254.67);
    glVertex2d(603.75,462.33);
    glVertex2d(577,462.33);
    glEnd();
}

void b11(){
glBegin(GL_POLYGON);
    glColor3ub(103,103,103);
    glVertex2d(603.75,254.67);
    glVertex2d(610.5,248.67);
    glVertex2d(610.5,285.5);
    glVertex2d(603.75,283.67);
    glEnd();
}
void b12(){
glBegin(GL_POLYGON);
    glColor3ub(61,61,61);
    glVertex2d(610.5,248.67);
    glVertex2d(627.5,248.67);
    glVertex2d(627.5,282.67);
    glVertex2d(610.5,282.67);
    glEnd();
}

void p1(){
glBegin(GL_POLYGON);
    glColor3ub(56,49,29);
    glVertex2d(603.75,283.67);
    glVertex2d(610.5,285.5);
    glVertex2d(610.5,483.5);
    glVertex2d(603.75,462.33);
    glEnd();
}

void depan1(){
glBegin(GL_POLYGON);
    glColor3ub(190,178,159);
    glVertex2d(409,552.5);
    glVertex2d(1080,552.5);
    glVertex2d(1080,580);
    glVertex2d(409,580);
    glEnd();

}

void depan2(){
glBegin(GL_POLYGON);
    glColor3ub(229,223,194);
    glVertex2d(409,546);
    glVertex2d(1080,546);
    glVertex2d(1080,552.5);
    glVertex2d(409,552.5);
    glEnd();

}
void depan3(){
glBegin(GL_POLYGON);
    glColor3ub(86,82,91);
    glVertex2d(409,546);
    glVertex2d(409,580);
    glVertex2d(400,600.5);
    glEnd();

}
void l1(){
glBegin(GL_POLYGON);
    glColor3ub(147,146,144);
    glVertex2d(491,462.33);
    glVertex2d(603.75,462.33);
    glVertex2d(610.5,483.5);
    glVertex2d(491,483.5);
    glEnd();
}
void l2(){
glBegin(GL_POLYGON);
    glColor3ub(117,122,115);
    glVertex2d(491,483.5);
    glVertex2d(627.5,483.5);
    glVertex2d(627.5,500.5);
    glVertex2d(491,500.5);
    glEnd();
}

void l3(){
glBegin(GL_POLYGON);
    glColor3ub(147,146,144);
    glVertex2d(707,462.33);
    glVertex2d(822.5,462.33);
    glVertex2d(846,470);
    glVertex2d(707,470);
    glEnd();
}
void l4(){
glBegin(GL_POLYGON);
    glColor3ub(117,122,115);
    glVertex2d(707,470);
    glVertex2d(846,470);
    glVertex2d(846,488.33);
    glVertex2d(707,488.33);
    glEnd();
}

void l5(){
glBegin(GL_POLYGON);
    glColor3ub(147,139,152);
    glVertex2d(242.75,458.31);
    glVertex2d(463.75,458.31);
    glVertex2d(416,530.5);
    glVertex2d(93.5,530.5);
    glEnd();
}
void l6(){
glBegin(GL_POLYGON);
    glColor3ub(151,149,162);
    glVertex2d(93.5,530.5);
    glVertex2d(416,530.5);
    glVertex2d(400,600.5);
    glVertex2d(70,600.5);
    glEnd();
}


void jz(){
glBegin(GL_POLYGON);
    glColor3ub(28,32,23);
    glVertex2d(739.67,291.5);
    glVertex2d(808,291.5);
    glVertex2d(808,307);
    glVertex2d(739.67,307);
   // glVertex2d(739.67,381.5);
    //glVertex2d(701.33,381.5);
    glEnd();
}
void jz1(){
glBegin(GL_POLYGON);
    glColor3ub(28,32,23);
    glVertex2d(701.33,291.5);
    glVertex2d(739.67,291.5);
    glVertex2d(739.67,300.67);
    glVertex2d(701.33,300.67);
   // glVertex2d(739.67,381.5);
    //glVertex2d(701.33,381.5);
    glEnd();
}

void jz2(){
glBegin(GL_POLYGON);
    glColor3ub(94,78,55);
    glVertex2d(739.67,307);
    glVertex2d(808,307);
    glVertex2d(808,454);
    glVertex2d(739.67,454);
   // glVertex2d(739.67,381.5);
    //glVertex2d(701.33,381.5);
    glEnd();
}
void jz3(){
glBegin(GL_POLYGON);
    glColor3ub(94,78,55);
    glVertex2d(701.33,300.67);
    glVertex2d(739.67,300.67);
    glVertex2d(739.67,381.5);
    glVertex2d(701.33,381.5);
   // glVertex2d(739.67,381.5);
    //glVertex2d(701.33,381.5);
    glEnd();
}

void jz4(){
glBegin(GL_POLYGON);
    glColor3ub(98,91,63);
    glVertex2d(745,307);
    glVertex2d(804,307);
    glVertex2d(804,454);
    glVertex2d(745,454);
   // glVertex2d(739.67,381.5);
    //glVertex2d(701.33,381.5);
    glEnd();
}

void jz5(){
glBegin(GL_POLYGON);
    glColor3ub(98,91,63);
    glVertex2d(701.33,300.67);
    glVertex2d(738,300.67);
    glVertex2d(738,377);
    glVertex2d(701.33,377);
   // glVertex2d(739.67,381.5);
    //glVertex2d(701.33,381.5);
    glEnd();
}

void jz6(){
glBegin(GL_POLYGON);
    glColor3ub(38,35,26);
    glVertex2d(747,296.08);
    glVertex2d(804,296.08);
    glVertex2d(804,307);
    glVertex2d(747,307);
   // glVertex2d(739.67,381.5);
    //glVertex2d(701.33,381.5);
    glEnd();
}

void jz7(){
glBegin(GL_POLYGON);
    glColor3ub(38,35,26);
    glVertex2d(701.33,296.08);
    glVertex2d(738,296.08);
    glVertex2d(738,300.67);
    glVertex2d(701.33,300.67);
   // glVertex2d(739.67,381.5);
    //glVertex2d(701.33,381.5);
    glEnd();
}

void jz8(){
glBegin(GL_POLYGON);
    glColor3ub(112,112,112);
    glVertex2d(704,296.08);
    glVertex2d(734.33,296.08);
    glVertex2d(734.33,373);
    glVertex2d(704,373);
   // glVertex2d(739.67,381.5);
    //glVertex2d(701.33,381.5);
    glEnd();
}


void j1(){
glBegin(GL_POLYGON);
    glColor3ub(97,80,60);
    glVertex2d(260.5,292.75);
    glVertex2d(341,292.75);
    glVertex2d(341,414.75);
    glVertex2d(260.5,414.75);
    glEnd();
}
void j1a(){
    glBegin(GL_POLYGON);
glColor3ub(98,91,63);
    glVertex2d(264,296.25);
    glVertex2d(338.75,296.25);
    glVertex2d(338.75,410.75);
    glVertex2d(264,410.75);
    glEnd();
}
void j1b(){
glBegin(GL_POLYGON);
    glColor3ub(118,118,118);
    glVertex2d(269.25,301.5);
    glVertex2d(295,301.5);
    glVertex2d(295,405.5);
    glVertex2d(269.25,405.5);
    glEnd();
}

void j1c(){
glBegin(GL_POLYGON);
    glColor3ub(118,118,118);
    glVertex2d(309,301.5);
    glVertex2d(334.75,301.5);
    glVertex2d(334.75,405.5);
    glVertex2d(309,405.5);
    glEnd();
}

void j1d(){
glBegin(GL_POLYGON);
    glColor3ub(97,80,60);
    glVertex2d(299.75,292.75);
    glVertex2d(304.25,292.75);
    glVertex2d(304.25,414.75);
    glVertex2d(299.75,414.75);
    glEnd();
}
void j2(){
glBegin(GL_POLYGON);
    glColor3ub(97,80,60);
    glVertex2d(671.67,287.67);
    glVertex2d(701.33,287.67);
    glVertex2d(701.33,430.67);
    glVertex2d(671.67,430.67);
    glEnd();
}
void j2b(){
glBegin(GL_POLYGON);
    glColor3ub(118,118,118);
    glVertex2d(675,291.5);
    glVertex2d(699,291.5);
    glVertex2d(699,425.5);
    glVertex2d(675,425.5);
    glEnd();
}

void j2c(){
glBegin(GL_POLYGON);
    glColor3ub(97,80,60);
    glVertex2d(686.75,287.67);
    glVertex2d(688.75,287.67);
    glVertex2d(688.75,430.67);
    glVertex2d(686.75,430.67);
    glEnd();
}

void j2d(){
glBegin(GL_POLYGON);
    glColor3ub(97,80,60);
    glVertex2d(671.67,334.75);
    glVertex2d(701.33,334.75);
    glVertex2d(701.33,336.75);
    glVertex2d(671.67,336.75);
    glEnd();
}

void j2e(){
glBegin(GL_POLYGON);
    glColor3ub(97,80,60);
    glVertex2d(671.67,381.5);
    glVertex2d(701.33,381.5);
    glVertex2d(701.33,383.5);
    glVertex2d(671.67,383.5);
    glEnd();
}

void j2f(){
glBegin(GL_POLYGON);
    glColor3ub(97,80,60);
    glVertex2d(671.67,287.67);
    glVertex2d(707,287.67);
    glVertex2d(707,291.5);
    glVertex2d(671.67,291.5);
    glEnd();
}
void j2g(){
glBegin(GL_POLYGON);
    glColor3ub(97,80,60);
    glVertex2d(671.67,425.5);
    glVertex2d(707,425.5);
    glVertex2d(707,430.67);
    glVertex2d(671.67,430.67);
    glEnd();
}

void j4(){
glBegin(GL_POLYGON);
    glColor3ub(28,32,23);
    glVertex2d(449,291.5);
    glVertex2d(577,291.5);
    glVertex2d(577,344);
    glVertex2d(449,344);

    glEnd();
}

void j4a(){
glBegin(GL_POLYGON);
    glColor3ub(40,37,28);
    glVertex2d(496.33,295.33);
    glVertex2d(572,294.33);
    glVertex2d(572,344);
    glVertex2d(496.33,344);

    glEnd();
}

void j4c(){
glBegin(GL_POLYGON);
    glColor3ub(110,110,110);
    glVertex2d(499,300);
    glVertex2d(526,300);
    glVertex2d(526,344);
    glVertex2d(499,344);
    glEnd();
}

void j4d(){
glBegin(GL_POLYGON);
    glColor3ub(110,110,110);
    glVertex2d(540,300);
    glVertex2d(567,300);
    glVertex2d(567,344);
    glVertex2d(540,344);
    glEnd();
}

void j4e(){
glBegin(GL_POLYGON);
    glColor3ub(28,32,23);
    glVertex2d(531.67,291.5);
    glVertex2d(535,291.5);
    glVertex2d(535,344);
    glVertex2d(531.67,344);

    glEnd();
}

void j3(){
glBegin(GL_POLYGON);
    glColor3ub(77,64,45);
    glVertex2d(449,344);
    glVertex2d(577,344);
    glVertex2d(577,420.33);
    glVertex2d(449,420.33);

    glEnd();
}

void j3a(){
glBegin(GL_POLYGON);
    glColor3ub(97,90,64);
    glVertex2d(496.33,344);
    glVertex2d(572,344);
    glVertex2d(572,415.33);
    glVertex2d(496.33,415.33);

    glEnd();
}

void j3c(){
glBegin(GL_POLYGON);
    glColor3ub(117,117,117);
    glVertex2d(499,344);
    glVertex2d(526,344);
    glVertex2d(526,410.33);
    glVertex2d(499,410.33);
    glEnd();
}

void j3d(){
glBegin(GL_POLYGON);
    glColor3ub(117,117,117);
    glVertex2d(540,344);
    glVertex2d(567,344);
    glVertex2d(567,410.33);
    glVertex2d(540,410.33);
    glEnd();
}

void j3e(){
glBegin(GL_POLYGON);
    glColor3ub(77,64,45);
    glVertex2d(531.67,344);
    glVertex2d(535,344);
    glVertex2d(535,420.33);
    glVertex2d(531.67,420.33);

    glEnd();
}

void v1(){
    glBegin(GL_POLYGON);
    glColor3ub(154,154,154);
    glVertex2d(486,216.33);
    glVertex2d(491.67,216.33);
    glVertex2d(491.67,231);
    glVertex2d(486,231);
    glEnd();
}

void v2(){
    glBegin(GL_POLYGON);
    glColor3ub(154,154,154);
    glVertex2d(522,216.33);
    glVertex2d(533,216.33);
    glVertex2d(533,231);
    glVertex2d(522,231);
    glEnd();
}

void v3(){
    glBegin(GL_POLYGON);
    glColor3ub(154,154,154);
    glVertex2d(564,216.33);
    glVertex2d(575,216.33);
    glVertex2d(575,231);
    glVertex2d(564,231);
    glEnd();
}

void v4(){
    glBegin(GL_POLYGON);
    glColor3ub(142,142,142);
    glVertex2d(707,216.33);
    glVertex2d(714.67,216.33);
    glVertex2d(714.67,234.67);
    glVertex2d(707,234.67);
    glEnd();
}

void v5(){
    glBegin(GL_POLYGON);
    glColor3ub(142,142,142);
    glVertex2d(746,216.33);
    glVertex2d(756,216.33);
    glVertex2d(756,234.67);
    glVertex2d(746,234.67);
    glEnd();
}

void v6(){
    glBegin(GL_POLYGON);
    glColor3ub(142,142,142);
    glVertex2d(787.33,216.33);
    glVertex2d(798,216.33);
    glVertex2d(798,234.67);
    glVertex2d(787.33,234.67);
    glEnd();
}

void v7(){
    glBegin(GL_POLYGON);
    glColor3ub(88,88,88);
    glVertex2d(276,266.33);
    glVertex2d(287.5,266.33);
    glVertex2d(287.55,283.67);
    glVertex2d(276,283.67);
    glEnd();
}

void v8(){
    glBegin(GL_POLYGON);
    glColor3ub(88,88,88);
    glVertex2d(315,266.33);
    glVertex2d(326.5,266.33);
    glVertex2d(326.55,283.67);
    glVertex2d(315,283.67);
    glEnd();
}
void g1(){
    glBegin(GL_POLYGON);
    glColor3ub(187,188,183);
    glVertex2d(610.5,110.5);
    glVertex2d(627.5,110.5);
    glVertex2d(627.5,483.5);
    glVertex2d(610.5,483.5);
}

void g2(){
    glBegin(GL_POLYGON);
    glColor3ub(187,188,183);
    glVertex2d(610.5,110.5);
    glVertex2d(709.5,110.5);
    glVertex2d(709.5,127);
    glVertex2d(610.5,127);
    glEnd();
}

void g3(){
    glBegin(GL_POLYGON);
    glColor3ub(253,126,107);
    glVertex2d(441.5,170);
    glVertex2d(486,170);
    glVertex2d(486,177);
    glVertex2d(441.5,177);
    glEnd();
}

void g4(){
    glBegin(GL_POLYGON);
    glColor3ub(253,126,107);
    glVertex2d(441.5,170);
    glVertex2d(454.5,170);
    glVertex2d(454.5,286);
    glVertex2d(441.5,286);
    glEnd();
}

void g5(){
    glBegin(GL_POLYGON);
    glColor3ub(253,126,107);
    glVertex2d(473,170);
    glVertex2d(486,170);
    glVertex2d(486,286);
    glVertex2d(473,286);
    glEnd();
}

void g6(){
    glBegin(GL_POLYGON);
    glColor3ub(187,188,183);
    glVertex2d(408,231);
    glVertex2d(656,231);
    glVertex2d(656,241);
    glVertex2d(408,241);
    glEnd();
}

void g6a(){
    glBegin(GL_POLYGON);
    glColor3ub(37,37,37);
    glVertex2d(408,241);
    glVertex2d(656,241);
    glVertex2d(646,248.67);
    glVertex2d(610.5,248.67);
    glVertex2d(603.75,254.67);
    glVertex2d(432.67,254.67);
    glEnd();
}

void g7(){
    glBegin(GL_POLYGON);
    glColor3ub(191,192,187);
    glVertex2d(225.67,244.67);
    glVertex2d(349.33,244.67);
    glVertex2d(349.33,252.67);
    glVertex2d(225.67,252.67);
    glEnd();
}

void g8(){
    glBegin(GL_POLYGON);
    glColor3ub(99,104,98);
    glVertex2d(349.33,244.67);
    glVertex2d(360.33,248.67);
    glVertex2d(360.33,256.67);
    glVertex2d(349.33,252.67);
    glEnd();
}

void g9(){
    glBegin(GL_POLYGON);
    glColor3ub(36,36,36);
    glVertex2d(225.67,252.67);
    glVertex2d(349.33,252.67);
    glVertex2d(360.33,256.67);
    glVertex2d(242.33,256.67);
    glEnd();
}

void g10(){
    glBegin(GL_POLYGON);
    glColor3ub(158,153,157);
    glVertex2d(627.5,127);
    glVertex2d(707,127);
    glVertex2d(707,287.67);
    glVertex2d(671.67,287.67);
    glVertex2d(671.67,430.67);
    glVertex2d(627.5,430.67);
    glEnd();
}

void g10a(){
    glBegin(GL_POLYGON);
    glColor3ub(158,153,157);
    glVertex2d(627.5,430.67);
    glVertex2d(707,430.67);
    glVertex2d(707,488.33);
    glVertex2d(627.5,488.33);
    glEnd();
}

void g11(){
glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2d(431.33,286);
    glVertex2d(494,286);
    glVertex2d(494,294.33);
    glVertex2d(431.33,294.33);
    glEnd();
}

void g12(){
glBegin(GL_POLYGON);
    glColor3ub(158,153,157);
    glVertex2d(436.5,294.33);
    glVertex2d(491,294.33);
    glVertex2d(491,500.5);
    glVertex2d(436.5,500.5);
    glEnd();
}

void g13(){
glBegin(GL_POLYGON);
    glColor3ub(182,183,178);
    glVertex2d(707,236.5);
    glVertex2d(853.5,236.5);
    glVertex2d(853.5,248.17);
    glVertex2d(707,248.17);
    glEnd();
}
void g14(){
glBegin(GL_POLYGON);
    glColor3ub(38,38,38);
    glVertex2d(707,248.17);
    glVertex2d(853.5,248.17);
    glVertex2d(820.75,254.67);
    glVertex2d(707,254.67);
    glEnd();
}
void g15(){
glBegin(GL_POLYGON);
    glColor3ub(98,98,98);
    glVertex2d(707,254.67);
    glVertex2d(808,254.67);
    glVertex2d(808,291.5);
    glVertex2d(707,291.5);
    glEnd();


}
void g15a(){
    glBegin(GL_POLYGON);
    glColor3ub(98,98,98);
    glVertex2d(808,254.67);
    glVertex2d(820.75,254.67);
    glVertex2d(816,302);
    glVertex2d(808,302);
     glEnd();
}
void mobil0(){
 glBegin(GL_POLYGON);
    glColor3ub(48,50,49);
    glVertex2d(680.73,600);
    glVertex2d(930.64,600);
    glVertex2d(930.64,610.45);
    glVertex2d(680.73,610.45);
     glEnd();
}
void mobil1(){
 glBegin(GL_POLYGON);
    glColor3ub(89,87,75);
    glVertex2d(675.39,499.65);
    glVertex2d(834.48,499.22);
    glVertex2d(840.73,504.8);
    glVertex2d(861.3,550.99);
    glVertex2d(680.73,551.41);
    glVertex2d(680.73,513.98);
     glEnd();
}
void mobil2(){
 glBegin(GL_POLYGON);
    glColor3ub(89,87,75);
    glVertex2d(856.91,540.38);
    glVertex2d(920.21,546.35);
    glVertex2d(928.67,551.6);
    glVertex2d(680.73,554.3);
    glVertex2d(681.73,546.35);
    glVertex2d(851.56,546.42);
     glEnd();
}

void mobil3(){
 glBegin(GL_POLYGON);
    glColor3ub(89,87,75);
    glVertex2d(680.73,546.89);
    glVertex2d(917.24,546.87);
    glVertex2d(930.16,555.02);
    glVertex2d(930.64,602.51);
    glVertex2d(680.73,602.51);
     glEnd();
}

void mobil4(){
 glBegin(GL_POLYGON);
    glColor3ub(64,64,66);
    glVertex2d(696.45,505.07);
    glVertex2d(823.49,505.75);
    glVertex2d(851.56,546.42);
    glVertex2d(686.64,546.42);
    glVertex2d(686.64,519.41);
     glEnd();
}

void mobil5(){
 glBegin(GL_POLYGON);
    glColor3ub(89,87,75);
    glVertex2d(711.21,505.37);
    glVertex2d(715.38,503.23);
    glVertex2d(715.18,550.67);
    glVertex2d(707.91,550.26);
     glEnd();
}
void mobil6(){
 glBegin(GL_POLYGON);
    glColor3ub(89,87,75);
    glVertex2d(781.77,501.87);
    glVertex2d(785.94,501.74);
    glVertex2d(791.99,550.05);
    glVertex2d(784.73,549.64);
     glEnd();
}

void mobil7(){
 glBegin(GL_POLYGON);
    glColor3ub(64,64,66);
    glVertex2d(837.85,505.07);
    glVertex2d(840.92,505.07);
    glVertex2d(856.91,540.38);
    glVertex2d(855.04,542.49);
     glEnd();
}

void mobil8(){
 glBegin(GL_POLYGON);
    glColor3ub(64,64,66);
    glVertex2d(844.94,530.54);
    glVertex2d(848.91,532.52);
    glVertex2d(848.91,548.47);
    glVertex2d(844.94,550.45);
     glEnd();
}

void mobil9(){
 glBegin(GL_POLYGON);
    glColor3ub(64,64,66);
    glVertex2d(729.54,549.85);
    glVertex2d(741.95,549.85);
    glVertex2d(741.95,552.71);
    glVertex2d(729.54,552.71);
     glEnd();
}
void mobil10(){
 glBegin(GL_POLYGON);
    glColor3ub(64,64,66);
   glVertex2d(796.55,549.85);
    glVertex2d(808.96,549.85);
    glVertex2d(808.96,552.71);
    glVertex2d(796.55,552.71);
     glEnd();
}
void mobil11(){
 glBegin(GL_POLYGON);
    glColor3ub(56,51,55);
   glVertex2d(661.34,535.05);
    glVertex2d(680.12,535.05);
    glVertex2d(680.12,579.28);
    glVertex2d(661.34,579.28);
     glEnd();
}

void mobil12(){
 glBegin(GL_POLYGON);
    glColor3ub(245,152,31);
    glVertex2d(680.2,561.48);
    glVertex2d(688.37,561.48);
    glVertex2d(688.37,569.36);
    glVertex2d(680.2,569.36);
     glEnd();
}

void mobil13(){
 glBegin(GL_POLYGON);
    glColor3ub(232,29,35);
    glVertex2d(680.2,569.36);
    glVertex2d(688.37,569.36);
    glVertex2d(688.37,582.84);
    glVertex2d(680.2,582.84);
     glEnd();
}

void mobil14(){
 glBegin(GL_POLYGON);
    glColor3ub(245,152,31);
    glVertex2d(924.58,558.96);
    glVertex2d(928.96,558.96);
    glVertex2d(928.96,569.73);
    glVertex2d(924.58,569.73);
     glEnd();

}
void mobil15(){
 glBegin(GL_POLYGON);
    glColor3ub(74,74,66);
    glVertex2d(704.36,578.5);
    glVertex2d(752.01,578.5);
    glVertex2d(762.35,603.18);
    glVertex2d(694.7,603.18);
     glEnd();
}

void mobil16(){
 glBegin(GL_POLYGON);
    glColor3ub(74,74,66);
    glVertex2d(861.04,578.5);
    glVertex2d(908.69,578.5);
    glVertex2d(919.02,603.18);
    glVertex2d(851.38,603.18);
     glEnd();
}

void mobil17(){
 glBegin(GL_POLYGON);
    glColor3ub(48,50,49);
    glVertex2d(706.32,583.04);
    glVertex2d(750.06,583.04);
    glVertex2d(757.46,601.77);
    glVertex2d(699.29,600.96);

     glEnd();
}
void mobil18(){
 glBegin(GL_POLYGON);
    glColor3ub(48,50,49);
    glVertex2d(863,583.04);
    glVertex2d(906.73,583.04);
    glVertex2d(914.69,603.18);
    glVertex2d(855.71,601.77);
     glEnd();
}


void mobil20(){
 glBegin(GL_POLYGON);
    glColor3ub(74,74,66);
    glVertex2d(676.01,600.96);
    glVertex2d(699.29,600.96);
    glVertex2d(699.29,610.66);
    glVertex2d(676.01,610.66);
     glEnd();
}

void mobil21(){
 glBegin(GL_POLYGON);
    glColor3ub(74,74,66);
    glVertex2d(757.46,600.96);
    glVertex2d(855.71,600.96);
    glVertex2d(855.71,610.66);
    glVertex2d(757.46,610.66);
     glEnd();
}

void mobil22(){
 glBegin(GL_POLYGON);
    glColor3ub(74,74,66);
    glVertex2d(914.69,594.85);
    glVertex2d(936.38,594.85);
    glVertex2d(936.38,610.66);
    glVertex2d(914.69,610.66);
     glEnd();
}
void lingkaran(int xp, int yp, int r, int n){
    float a,x,y;
    glBegin(GL_POLYGON);
        a=6.28/n;
        for (int i=0; i<n; i++){
            x = xp+r * cos(i*a);
            y = yp+r * sin(i*a);

            glVertex2d(x,y);
        }
    glEnd();
}

void batang1(){
glBegin(GL_POLYGON);
    glColor3ub(122,68,4);
    glVertex2d(97.67,302.01);
    glVertex2d(133.71,302.01);


    glVertex2d(133.71,489.94);
    glVertex2d(97.67,489.94);

     glEnd();

}

void batang2(){
    glBegin(GL_POLYGON);
    glColor3ub(122,68,4);
    glVertex2d(133.71,403.2);
    glVertex2d(164.54,367.49);
    glVertex2d(175.55,377.74);
    glVertex2d(133.71,424.36);
    glEnd();
}

void batang3(){
    glBegin(GL_POLYGON);
    glColor3ub(122,68,4);
    glVertex2d(55.83,404.4);
    glVertex2d(66.85,394.14);
    glVertex2d(97.67,429.85);
    glVertex2d(97.67,451.11);
    glEnd();
}

void daun1(){
    glBegin(GL_POLYGON);
    glColor3ub(144,208,70);
    glVertex2d(46,330);
    glVertex2d(191.74,330);
    glVertex2d(191.74,374);
    glVertex2d(46,374);
    glEnd();
}
void daun2(){
    glBegin(GL_POLYGON);
    glColor3ub(179,242,111);
    glVertex2d(133.71,369.69);
    glVertex2d(199.93,369.69);
    glVertex2d(199.93,386.09);
    glVertex2d(133.71,386.09);
    glEnd();
}


void daun3(){
    glBegin(GL_POLYGON);
    glColor3ub(104,168,28);
    glVertex2d(42,399.13);
    glVertex2d(105,399.13);
    glVertex2d(103,412.6);
    glVertex2d(42,412.6);
    glEnd();
}

int main(void)
{
    float radius;
    int i;
    GLFWwindow* window;
    if (!glfwInit()) exit(EXIT_FAILURE);

    window = glfwCreateWindow(1080, 640, "Tugas Rumah - G64170006", NULL, NULL);

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
        setup_viewport(window);
    //isi disini
    bg();bg1();bg2();
    atap2();atap1a();atap1();
    a();a1();
    coklat();

    //lantai dalem
    depan1();depan2();depan3();l5();l6(); jalan();
    // bayangan
    b1();b2();b3();b4();b5();
    a2();//eh harus nyalip
    b6();b7();b8();b9();
    b10();b10a();
    b11();b12();

    //pintu
    p1();l1();l2();l3();l4();
    //jendela
    jz();jz1();jz2();jz3(); jz4();jz5();jz6();jz7();jz8();
    j1();j1a();j1b();j1c();j1d();
    j2();j2b();j2c();j2d();j2e();j2f();j2g();
    j3();j3a();j3c();j3d();j3e();
    j4();j4a();j4c();j4d();j4e();
    //ventilasi
    v1();v2();v3();v4();v5();v6();v7();v8();
    //garis ga jelas
    g1();g2();g3();g4();g5();g6();g6a();g7();g8();g9();
    g10();g10a();
    g11();g12();
    g13();g14();g15();g15a();
//bala
       glColor3ub(252,194,4);lingkaran(102.95,96.55,45,100);

//pohon

batang3();
daun3();
glColor3ub(104,168,28);lingkaran(69.88,386.16,19.04,100);
glColor3ub(104,168,28);lingkaran(50.79,392.21,11.27,100);
glColor3ub(104,168,28);lingkaran(88.92,392.21,11.27,100);
glColor3ub(104,168,28);lingkaran(43.15,402.6,10.6,100);

batang1(); batang2();
daun1();
glColor3ub(144,208,70);lingkaran(118.84,297.99,56.61,100);
glColor3ub(144,208,70);lingkaran(173.16,312.5,29.84,100);
glColor3ub(144,208,70);lingkaran(65.5,312.5,32.09,100);
glColor3ub(144,208,70);lingkaran(45.84,342.16,31.84,100);
glColor3ub(144,208,70);lingkaran(191.74,342.16,31.84,100);

daun2();
glColor3ub(179,242,111);lingkaran(167.69,353.42,28.41,100);
glColor3ub(179,242,111);lingkaran(143.33,359.17,17.22,100);
glColor3ub(179,242,111);lingkaran(190.37,359.17,17.22,100);
glColor3ub(179,242,111);lingkaran(132.82,370.9,15.89,100);
glColor3ub(179,242,111);lingkaran(199.93,370.9,15.89,100);

mobil1();mobil2();mobil3();mobil4();mobil5();mobil6();mobil7();mobil8();mobil9();mobil10();
mobil11();mobil12();mobil13();mobil14();mobil15();mobil16();mobil0();mobil17();mobil18();mobil20();mobil21();mobil22();
glColor3ub(54,54,54);lingkaran(727.33,610.33,24.55,100);
glColor3ub(54,54,54);lingkaran(886.0,610.33,24.55,100);
glColor3ub(200,200,200);lingkaran(727.33,610.33,20.0,100);
glColor3ub(200,200,200);lingkaran(886.0,610.33,20.0,100);
glColor3ub(82,82,84);lingkaran(727.33,610.33,17.0,100);
glColor3ub(82,82,84);lingkaran(886.0,610.33,17.0,100);
glColor3ub(120,120,120);lingkaran(727.33,610.33,5.0,100);
glColor3ub(120,120,120);lingkaran(886.0,610.33,5.0,100);


glTranslatef(830,0,0); // Bergeser ke kanan 100
batang3();
daun3();
glColor3ub(104,168,28);lingkaran(69.88,386.16,19.04,100);
glColor3ub(104,168,28);lingkaran(50.79,392.21,11.27,100);
glColor3ub(104,168,28);lingkaran(88.92,392.21,11.27,100);
glColor3ub(104,168,28);lingkaran(43.15,402.6,10.6,100);

batang1(); batang2();
daun1();
glColor3ub(144,208,70);lingkaran(118.84,297.99,56.61,100);
glColor3ub(144,208,70);lingkaran(173.16,312.5,29.84,100);
glColor3ub(144,208,70);lingkaran(65.5,312.5,32.09,100);
glColor3ub(144,208,70);lingkaran(45.84,342.16,31.84,100);
glColor3ub(144,208,70);lingkaran(191.74,342.16,31.84,100);

daun2();
glColor3ub(179,242,111);lingkaran(167.69,353.42,28.41,100);
glColor3ub(179,242,111);lingkaran(143.33,359.17,17.22,100);
glColor3ub(179,242,111);lingkaran(190.37,359.17,17.22,100);
glColor3ub(179,242,111);lingkaran(132.82,370.9,15.89,100);
glColor3ub(179,242,111);lingkaran(199.93,370.9,15.89,100);


//mobil


    glfwSwapBuffers(window);
    glfwPollEvents();
    }
    glfwDestroyWindow(window);
    glfwTerminate();

    exit(EXIT_SUCCESS);
}
