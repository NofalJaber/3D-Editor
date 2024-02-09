
#include <iostream>
#include "raylib.h"
#include <fstream>
#include <strstream>
#include <cmath>
#include <conio.h>
#include <vector>
#include <algorithm>
#include <cstring>
///ScreenWidth si ScreenHeight >=1400
#define ScreenWidth 1920
#define ScreenHeight 1080
#define VISINIU (Color) {138,7,7,255}

using namespace std;

void Shading(float lum,short &r,short &g,short &b)
{
    int pixel_bw = (int)(40.0f*lum);
    switch (pixel_bw)
    {
    case 0:
        r=g=b=0;
        break;
    case 1:
        r=g=b=7;
        break;
    case 2:
        r=g=b=13;
        break;
    case 3:
        r=g=b=20;
        break;
    case 4:
        r=g=b=26;
        break;
    case 5:
        r=g=b=33;
        break;
    case 6:
        r=g=b=39;
        break;
    case 7:
        r=g=b=46;
        break;
    case 8:
        r=g=b=52;
        break;
    case 9:
        r=g=b=59;
        break;
    case 10:
        r=g=b=65;
        break;
    case 11:
        r=g=b=72;
        break;
    case 12:
        r=g=b=78;
        break;
    case 13:
        r=g=b=85;
        break;
    case 14:
        r=g=b=92;
        break;
    case 15:
        r=g=b=98;
        break;
    case 16:
        r=g=b=105;
        break;
    case 17:
        r=g=b=111;
        break;
    case 18:
        r=g=b=118;
        break;
    case 19:
        r=g=b=124;
        break;
    case 20:
        r=g=b=131;
        break;
    case 21:
        r=g=b=137;
        break;
    case 22:
        r=g=b=144;
        break;
    case 23:
        r=g=b=150;
        break;
    case 24:
        r=g=b=157;
        break;
    case 25:
        r=g=b=163;
        break;
    case 26:
        r=g=b=170;
        break;
    case 27:
        r=g=b=177;
        break;
    case 28:
        r=g=b=183;
        break;
    case 29:
        r=g=b=190;
        break;
    case 30:
        r=g=b=196;
        break;
    case 31:
        r=g=b=203;
        break;
    case 32:
        r=g=b=209;
        break;
    case 33:
        r=g=b=216;
        break;
    case 34:
        r=g=b=222;
        break;
    case 35:
        r=g=b=229;
        break;
    case 36:
        r=g=b=235;
        break;
    case 37:
        r=g=b=242;
        break;
    case 38:
        r=g=b=248;
        break;
    case 39:
        r=g=b=255;
        break;
    default:
        r=g=b=255;
    }

}
void Curcubeu(float lum,short &r,short &g,short &b)
{
    int pixel_bw = (int)(60.0f*lum);
    switch (pixel_bw)
    {
    case 0:
        r=255;
        g=0;
        b=0;
        break;
    case 1:
        r=255;
        g=28;
        b=0;
        break;
    case 2:
        r=255;
        g=57;
        b=0;
        break;
    case 3:
        r=255;
        g=85;
        b=0;
        break;
    case 4:
        r=255;
        g=113;
        b=0;
        break;
    case 5:
        r=255;
        g=142;
        b=0;
        break;
    case 6:
        r=255;
        g=170;
        b=0;
        break;
    case 7:
        r=255;
        g=198;
        b=0;
        break;
    case 8:
        r=255;
        g=227;
        b=0;
        break;
    case 9:
        r=255;
        g=255;
        b=0;
        break;
    case 10:
        r=230;
        g=255;
        b=0;
        break;
    case 11:
        r=204;
        g=255;
        b=0;
        break;
    case 12:
        r=179;
        g=255;
        b=0;
        break;
    case 13:
        r=153;
        g=255;
        b=0;
        break;
    case 14:
        r=128;
        g=255;
        b=0;
        break;
    case 15:
        r=102;
        g=255;
        b=0;
        break;
    case 16:
        r=77;
        g=255;
        b=0;
        break;
    case 17:
        r=51;
        g=255;
        b=0;
        break;
    case 18:
        r=26;
        g=255;
        b=0;
        break;
    case 19:
        r=0;
        g=255;
        b=0;
        break;
    case 20:
        r=0;
        g=255;
        b=26;
        break;
    case 21:
        r=0;
        g=255;
        b=51;
        break;
    case 22:
        r=0;
        g=255;
        b=77;
        break;
    case 23:
        r=0;
        g=255;
        b=102;
        break;
    case 24:
        r=0;
        g=255;
        b=128;
        break;
    case 25:
        r=0;
        g=255;
        b=153;
        break;
    case 26:
        r=0;
        g=255;
        b=179;
        break;
    case 27:
        r=0;
        g=255;
        b=204;
        break;
    case 28:
        r=0;
        g=255;
        b=230;
        break;
    case 29:
        r=0;
        g=255;
        b=255;
        break;
    case 30:
        r=0;
        g=230;
        b=255;
        break;
    case 31:
        r=0;
        g=204;
        b=255;
        break;
    case 32:
        r=0;
        g=179;
        b=255;
        break;
    case 33:
        r=0;
        g=153;
        b=255;
        break;
    case 34:
        r=0;
        g=128;
        b=255;
        break;
    case 35:
        r=0;
        g=102;
        b=255;
        break;
    case 36:
        r=0;
        g=77;
        b=255;
        break;
    case 37:
        r=0;
        g=51;
        b=255;
        break;
    case 38:
        r=0;
        g=26;
        b=255;
        break;
    case 39:
        r=0;
        g=0;
        b=255;
        break;
    case 40:
        r=26;
        g=0;
        b=255;
        break;
    case 41:
        r=51;
        g=0;
        b=255;
        break;
    case 42:
        r=77;
        g=0;
        b=255;
        break;
    case 43:
        r=102;
        g=0;
        b=255;
        break;
    case 44:
        r=128;
        g=0;
        b=255;
        break;
    case 45:
        r=153;
        g=0;
        b=255;
        break;
    case 46:
        r=179;
        g=0;
        b=255;
        break;
    case 47:
        r=204;
        g=0;
        b=255;
        break;
    case 48:
        r=230;
        g=0;
        b=255;
        break;
    case 49:
        r=255;
        g=0;
        b=255;
        break;
    case 50:
        r=255;
        g=0;
        b=230;
        break;
    case 51:
        r=255;
        g=0;
        b=204;
        break;
    case 52:
        r=255;
        g=0;
        b=179;
        break;
    case 53:
        r=255;
        g=0;
        b=153;
        break;
    case 54:
        r=255;
        g=0;
        b=128;
        break;
    case 55:
        r=255;
        g=0;
        b=102;
        break;
    case 56:
        r=255;
        g=0;
        b=77;
        break;
    case 57:
        r=255;
        g=0;
        b=51;
        break;
    case 58:
        r=255;
        g=0;
        b=26;
        break;
    case 59:
        r=255;
        g=0;
        b=0;
        break;
    default:
        r=255;
        g=b=0;
    }

}

void Gradient(float lum,short &r,short &g,short &b,int r1,int g1,int b1,int r2,int g2,int b2)
{
    int pixel_bw = (int)(60.0f*lum);
    r=r1+(r2-r1)/60*pixel_bw;
    g=g1+(g2-g1)/60*pixel_bw;
    b=b1+(b2-b1)/60*pixel_bw;

}

bool OKstart=0;
void meniu()
{

    DrawText("Editor  D",740,100,100,RED);
    DrawText("3",1080,100,100,WHITE);

    ///start
    DrawRectangle(805,295,310,110,RED);
    DrawRectangle(810,300,300,100,WHITE);
    DrawText("START",870,325,50,RED);

    ///exit
    DrawRectangle(805,495,310,110,RED);
    DrawRectangle(810,500,300,100,WHITE);
    DrawText("EXIT",895,525,50,RED);

    if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && GetMouseX()>=805 && GetMouseX()<=1115 && GetMouseY()>=295 && GetMouseY()<=405)
       OKstart=1;
    if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && GetMouseX()>=805 && GetMouseX()<=1115 && GetMouseY()>=495 && GetMouseY()<=605)
       {
           EndDrawing();
           CloseWindow();
       }


}

struct vec3d
{
  float x, y, z,viz=0,zverde;
} camera;
struct triangle
{
    vec3d p[3];
    int nrpct1,nrpct2,nrpct3;
    int numar;
    short R,G,B;
};

vector<vec3d> vec;
int nr=0;
int nrpuncte=0;
struct mesh
{
    ///tris -> coordonatele X,Y,Z a 3 puncte care formeazaz un triunghi
    vector<triangle>tris;


    ///functie de citire a unui fisier .OBJ (import de obiecte 3D)
    bool LoadFile(string file)
    {

        ifstream f(file);
        if (!f.is_open())
            return false;

        vec.clear();

        while (!f.eof())
        {
            char line[128];
            f.getline(line, 128);

            strstream s;

            ///bagam in s linia citita
            s << line;

            char junk;

            ///v = coordonatele unui punct
            ///f = 3 puncte ce definesc un triunghi
            if (line[0] == 'v')
            {
                vec3d v;
                s >> junk >> v.x >> v.y >> v.z;
                nrpuncte+=1;

                ///bagam la finalul vectorului vec coordonatele X,Y,Z
                vec.push_back(v);
            }

            if (line[0] == 'f')
            {
                int f[3];
                s >> junk >> f[0] >> f[1] >> f[2];

                ///facem "-1" deoarece in fisier punctele sunt numerotate de la 1, iar noi dorim sa fie de la 0
                tris.push_back({ vec[f[0] - 1], vec[f[1] - 1], vec[f[2] - 1] });
                tris[nr].nrpct1=f[0];
                tris[nr].nrpct2=f[1];
                tris[nr].nrpct3=f[2];
                tris[nr].numar=nr;
                nr++;

            }
        }

        return true;
    }
} meshcube;

struct mat4x4
{
    float m[4][4] = { 0.0f };
} matProj, matTran, matRot, matScal, matView,invmatProj,invmatTrain,invmatRot,invmatScal,invmatView,matProji,matTrani,matRoti,matScali;

void salvare(char fisier[100])
{
    ofstream f(fisier);
    for(auto i:vec)
    {
        f<<"v "<<i.x<<" "<<i.y<<" "<<i.z<<'\n';
    }
    for(auto i:meshcube.tris)
    {
        if(i.numar!=-1)
            f<<"f "<<i.nrpct1<<" "<<i.nrpct2<<" "<<i.nrpct3<<'\n';
    }

}
int x = 1;
int y = 0;
float unghix = 0.0f, unghiy = 0.0f, unghiz = 0.0f, sx = 1, sy = 1, sz = 1, tx = 0.0f, ty = 0.0f, tz = 3.0f, sizef = 0.5f;
float n = 0.1f, f = 1000.0f, FOV = 90.0f, ar = 1.0f;
float r = n * tan(FOV / 2) * ar, t = n * tan(FOV / 2), FOVrad = 1.0f / tanf(FOV * 0.5f / 180.0f * 3.14159f);
float l = -r, b = -t;
bool OKafisare=0;
bool OKmodel=0;
bool OKpunct=0;
bool OKcustom=0;
bool OKedit=0;
bool OKtransparent=0;
bool OKadancime=0;
bool OKstergere=0;
bool OKgasit=0;
bool OKsave=0;
bool OKopen=0;
bool OKajutor=0;
short afisare=0;
char nume[100];
float ez=0;
vec3d centru={0,0,0};
vec3d stergere;
float zminstergere=1000;
int pozstergere;
char numefisier[100];
int nrlitere=0;
Color culoare1=WHITE,culoare2=WHITE;

/// functii matematica
bool gluInvertMatrix(float m[4][4], float invOut[4][4])
{
    float inv[4][4], det;
    inv[0][0] = m[1][1]  * m[2][2] * m[3][3] -
             m[1][1]  * m[2][3] * m[3][2] -
             m[2][1]  * m[1][2]  * m[3][3] +
             m[2][1]  * m[1][3]  * m[3][2] +
             m[3][1] * m[1][2]  * m[2][3] -
             m[3][1] * m[1][3]  * m[2][2];

    inv[1][0] = -m[1][0]  * m[2][2] * m[3][3] +
              m[1][0]  * m[2][3] * m[3][2] +
              m[2][0]  * m[1][2]  * m[3][3] -
              m[2][0]  * m[1][3]  * m[3][2] -
              m[3][0] * m[1][2]  * m[2][3] +
              m[3][0] * m[1][3]  * m[2][2];

    inv[2][0] = m[1][0]  * m[2][1] * m[3][3] -
             m[1][0]  * m[2][3] * m[3][1] -
             m[2][0]  * m[1][1] * m[3][3] +
             m[2][0]  * m[1][3] * m[3][1] +
             m[3][0] * m[1][1] * m[2][3] -
             m[3][0] * m[1][3] * m[2][1];

    inv[3][0] = -m[1][0]  * m[2][1] * m[3][2] +
               m[1][0]  * m[2][2] * m[3][1] +
               m[2][0]  * m[1][1] * m[3][2] -
               m[2][0]  * m[1][2] * m[3][1] -
               m[3][0] * m[1][1] * m[2][2] +
               m[3][0] * m[1][2] * m[2][1];

    inv[0][1] = -m[0][1]  * m[2][2] * m[3][3] +
              m[0][1]  * m[2][3] * m[3][2] +
              m[2][1]  * m[0][2] * m[3][3] -
              m[2][1]  * m[0][3] * m[3][2] -
              m[3][1] * m[0][2] * m[2][3] +
              m[3][1] * m[0][3] * m[2][2];

    inv[1][1] = m[0][0]  * m[2][2] * m[3][3] -
             m[0][0]  * m[2][3] * m[3][2] -
             m[2][0]  * m[0][2] * m[3][3] +
             m[2][0]  * m[0][3] * m[3][2] +
             m[3][0] * m[0][2] * m[2][3] -
             m[3][0] * m[0][3] * m[2][2];

    inv[2][1] = -m[0][0]  * m[2][1] * m[3][3] +
              m[0][0]  * m[2][3] * m[3][1] +
              m[2][0]  * m[0][1] * m[3][3] -
              m[2][0]  * m[0][3] * m[3][1] -
              m[3][0] * m[0][1] * m[2][3] +
              m[3][0] * m[0][3] * m[2][1];

    inv[3][1] = m[0][0]  * m[2][1] * m[3][2] -
              m[0][0]  * m[2][2] * m[3][1] -
              m[2][0]  * m[0][1] * m[3][2] +
              m[2][0]  * m[0][2] * m[3][1] +
              m[3][0] * m[0][1] * m[2][2] -
              m[3][0] * m[0][2] * m[2][1];

    inv[0][2] = m[0][1]  * m[1][2] * m[3][3] -
             m[0][1]  * m[1][3] * m[3][2] -
             m[1][1]  * m[0][2] * m[3][3] +
             m[1][1]  * m[0][3] * m[3][2] +
             m[3][1] * m[0][2] * m[1][3] -
             m[3][1] * m[0][3] * m[1][2];

    inv[1][2] = -m[0][0]  * m[1][2] * m[3][3] +
              m[0][0]  * m[1][3] * m[3][2] +
              m[1][0]  * m[0][2] * m[3][3] -
              m[1][0]  * m[0][3] * m[3][2] -
              m[3][0] * m[0][2] * m[1][3] +
              m[3][0] * m[0][3] * m[1][2];

    inv[2][2] = m[0][0]  * m[1][1] * m[3][3] -
              m[0][0]  * m[1][3] * m[3][1] -
              m[1][0]  * m[0][1] * m[3][3] +
              m[1][0]  * m[0][3] * m[3][1] +
              m[3][0] * m[0][1] * m[1][3] -
              m[3][0] * m[0][3] * m[1][1];

    inv[3][2] = -m[0][0]  * m[1][1] * m[3][2] +
               m[0][0]  * m[1][2] * m[3][1] +
               m[1][0]  * m[0][1] * m[3][2] -
               m[1][0]  * m[0][2] * m[3][1] -
               m[3][0] * m[0][1] * m[1][2] +
               m[3][0] * m[0][2] * m[1][1];

    inv[0][3] = -m[0][1] * m[1][2] * m[2][3] +
              m[0][1] * m[1][3] * m[2][2] +
              m[1][1] * m[0][2] * m[2][3] -
              m[1][1] * m[0][3] * m[2][2] -
              m[2][1] * m[0][2] * m[1][3] +
              m[2][1] * m[0][3] * m[1][2];

    inv[1][3] = m[0][0] * m[1][2] * m[2][3] -
             m[0][0] * m[1][3] * m[2][2] -
             m[1][0] * m[0][2] * m[2][3] +
             m[1][0] * m[0][3] * m[2][2] +
             m[2][0] * m[0][2] * m[1][3] -
             m[2][0] * m[0][3] * m[1][2];

    inv[2][3] = -m[0][0] * m[1][1] * m[2][3] +
               m[0][0] * m[1][3] * m[2][1] +
               m[1][0] * m[0][1] * m[2][3] -
               m[1][0] * m[0][3] * m[2][1] -
               m[2][0] * m[0][1] * m[1][3] +
               m[2][0] * m[0][3] * m[1][1];

    inv[3][3] = m[0][0] * m[1][1] * m[2][2] -
              m[0][0] * m[1][2] * m[2][1] -
              m[1][0] * m[0][1] * m[2][2] +
              m[1][0] * m[0][2] * m[2][1] +
              m[2][0] * m[0][1] * m[1][2] -
              m[2][0] * m[0][2] * m[1][1];

    det = m[0][0] * inv[0][0] + m[0][1] * inv[1][0] + m[0][2] * inv[2][0] + m[0][3] * inv[3][0];

    if (det == 0)
        return false;

    det = 1.0 / det;

    for (int i = 0; i < 4; i++)
         for (int j = 0; j < 4; j++)
        invOut[i][j] = inv[i][j] * det;

    return true;
}
void creare()
{

    ///perspective projection
    matProj.m[0][0] = ar * FOVrad;
    matProj.m[1][1] = FOVrad;
    matProj.m[2][2] = (f / (f - n));
    matProj.m[2][3] = ((-f * n) / (f - n));
    matProj.m[3][2] = 1.0f;

    ///Matrice de translatie
    matTran.m[0][0] = 1.0f;
    matTran.m[0][3] = tx;
    matTran.m[1][1] = 1.0f;
    matTran.m[1][3] = ty;
    matTran.m[2][2] = 1.0f;
    matTran.m[2][3] = tz;
    matTran.m[3][3] = 1.0f;

    ///Matrice de scalare
    matScal.m[0][0] = sx;
    matScal.m[1][1] = sy;
    matScal.m[2][2] = sz;
    matScal.m[3][3] = 1.0f;

    ///Matrice view
    matView.m[0][0] = cos(unghiy) * cos(unghiz);
    matView.m[0][1] = -sin(unghiz) * cos(unghiy);
    matView.m[0][2] = sin(unghiy);
    matView.m[0][3] = tx;
    matView.m[1][0] = cos(unghix) * sin(unghiz) + sin(unghix) * sin(unghiy) * cos(unghiz);
    matView.m[1][1] = cos(unghix) * cos(unghiz) - sin(unghix) * sin(unghiy) * sin(unghiz);
    matView.m[1][2] = -sin(unghix) * cos(unghiy);
    matView.m[1][3] = ty;
    matView.m[2][0] = sin(unghix) * sin(unghiz) - cos(unghix) * sin(unghiy) * cos(unghiz);
    matView.m[2][1] = sin(unghix) * cos(unghiz) + cos(unghix) * sin(unghiy) * sin(unghiz);
    matView.m[2][2] = cos(unghix) * cos(unghiy);
    matView.m[2][3] = tz;
    matView.m[3][3] = 1.0f;

    ///matrice rotire (pt X, Y si Z la un loc)
    matRot.m[0][0] = cos(unghiy) * cos(unghiz);
    matRot.m[0][1] = -sin(unghiz) * cos(unghiy);
    matRot.m[0][2] = sin(unghiy);
    matRot.m[1][0] = cos(unghix) * sin(unghiz) + sin(unghix) * sin(unghiy) * cos(unghiz);
    matRot.m[1][1] = cos(unghix) * cos(unghiz) - sin(unghix) * sin(unghiy) * sin(unghiz);
    matRot.m[1][2] = -sin(unghix) * cos(unghiy);
    matRot.m[2][0] = sin(unghix) * sin(unghiz) - cos(unghix) * sin(unghiy) * cos(unghiz);
    matRot.m[2][1] = sin(unghix) * cos(unghiz) + cos(unghix) * sin(unghiy) * sin(unghiz);
    matRot.m[2][2] = cos(unghix) * cos(unghiy);
    matRot.m[3][3] = 1.0f;

     ///////////////////////////////

        ///perspective projection
    matProji.m[0][0]=ar*FOVrad;
    matProji.m[1][1]=FOVrad;
    matProji.m[2][2]=(f/(f-n));
    matProji.m[2][3]=((-f*n)/(f-n));
    matProji.m[3][2]=1.0f;

    ///Matrice de translatie
    matTrani.m[0][0]=1.0f;
    matTrani.m[0][3]=0.0f;
    matTrani.m[1][1]=1.0f;
    matTrani.m[1][3]=0.0f;
    matTrani.m[2][2]=1.0f;
    matTrani.m[2][3]=0.0f;
    matTrani.m[3][3]=1.0f;

    ///Matrice de scalare
    matScali.m[0][0]=1.0f;
    matScali.m[1][1]=1.0f;
    matScali.m[2][2]=1.0f;
    matScali.m[3][3]=1.0f;

    ///matrice rotire (pt X, Y si Z la un loc)
    matRoti.m[0][0]=cos(0.0f)*cos(0.0f);
    matRoti.m[0][1]=-sin(0.0f)*cos(0.0f);
    matRoti.m[0][2]=sin(0.0f);
    matRoti.m[1][0]=cos(0.0f)*sin(0.0f)+sin(0.0f)*sin(0.0f)*cos(0.0f);
    matRoti.m[1][1]=cos(0.0f)*cos(0.0f)-sin(0.0f)*sin(0.0f)*sin(0.0f);
    matRoti.m[1][2]=-sin(0.0f)*cos(0.0f);
    matRoti.m[2][0]=sin(0.0f)*sin(0.0f)-cos(0.0f)*sin(0.0f)*cos(0.0f);
    matRoti.m[2][1]=sin(0.0f)*cos(0.0f)+cos(0.0f)*sin(0.0f)*sin(0.0f);
    matRoti.m[2][2]=cos(0.0f)*cos(0.0f);
    matRoti.m[3][3]=1.0f;

    gluInvertMatrix(matProji.m,invmatProj.m);
    gluInvertMatrix(matTrani.m,invmatTrain.m);
    gluInvertMatrix(matRoti.m,invmatRot.m);
    gluInvertMatrix(matScali.m,invmatScal.m);

}

void inmultirematrice(vec3d& i, vec3d& o, mat4x4& m)
{
    o.x = i.x * m.m[0][0] + i.y * m.m[0][1] + i.z * m.m[0][2] + m.m[0][3];
    o.y = i.x * m.m[1][0] + i.y * m.m[1][1] + i.z * m.m[1][2] + m.m[1][3];
    o.z = i.x * m.m[2][0] + i.y * m.m[2][1] + i.z * m.m[2][2] + m.m[2][3];
    float w = i.x * m.m[3][0] + i.y * m.m[3][1] + i.z * m.m[3][2] + m.m[3][3];

    if (w != 0.0f)
    {
        o.x /= w;
        o.y /= w;
        o.z /= w;
    }
}
void inmultirematrice1(vec3d &i, vec3d&o, mat4x4 &m)
{
    o.x = i.x * m.m[0][0] + i.y * m.m[0][1] + i.z * m.m[0][2] + m.m[0][3];
    o.y = i.x * m.m[1][0] + i.y * m.m[1][1] + i.z * m.m[1][2] + m.m[1][3];
    o.z = i.x * m.m[2][0] + i.y * m.m[2][1] + i.z * m.m[2][2] + m.m[2][3];
    float w = i.x * m.m[3][0] + i.y * m.m[3][1] + i.z * m.m[3][2] + m.m[3][3];

}


void DreptunghiEditare()
{
    vec3d pct1,pct2,pct3,pct4;
    vec3d pct1r,pct2r,pct3r,pct4r;
    vec3d pct1p,pct2p,pct3p,pct4p;
    vec3d pct1t,pct2t,pct3t,pct4t;
    pct1.x=-1.5f;
    pct1.y=-1.5f;
    pct2.x=1.5f;
    pct2.y=-1.5f;
    pct3.x=1.5f;
    pct3.y=1.5;
    pct4.x=-1.5f;
    pct4.y=1.5f;
    pct1.z=-1.0f;
    pct2.z=-1.0f;
    pct3.z=-1.0f;
    pct4.z=-1.0f;

    inmultirematrice(pct1,pct1r,matRot);
    inmultirematrice(pct2,pct2r,matRot);
    inmultirematrice(pct3,pct3r,matRot);
    inmultirematrice(pct4,pct4r,matRot);

    inmultirematrice(pct1r,pct1t,matTran);
    inmultirematrice(pct2r,pct2t,matTran);
    inmultirematrice(pct3r,pct3t,matTran);
    inmultirematrice(pct4r,pct4t,matTran);

    inmultirematrice(pct1t,pct1p,matProj);
    inmultirematrice(pct2t,pct2p,matProj);
    inmultirematrice(pct3t,pct3p,matProj);
    inmultirematrice(pct4t,pct4p,matProj);

    pct1p.x *= 0.5f * (float)1400;
    pct1p.y *= 0.5f * (float)1400;
    pct2p.x *= 0.5f * (float)1400;
    pct2p.y *= 0.5f * (float)1400;
    pct3p.x *= 0.5f * (float)1400;
    pct3p.y *= 0.5f * (float)1400;
    pct4p.x *= 0.5f * (float)1400;
    pct4p.y *= 0.5f * (float)1400;

    pct1p.x += 0.5f * (float)ScreenWidth;
    pct1p.y += 0.5f * (float)ScreenHeight;
    pct2p.x += 0.5f * (float)ScreenWidth;
    pct2p.y += 0.5f * (float)ScreenHeight;
    pct3p.x += 0.5f * (float)ScreenWidth;
    pct3p.y += 0.5f * (float)ScreenHeight;
    pct4p.x += 0.5f * (float)ScreenWidth;
    pct4p.y += 0.5f * (float)ScreenHeight;

    DrawTriangle({pct1p.x,pct1p.y}, {pct2p.x,pct2p.y}, {pct4p.x,pct4p.y}, {0, 0, 0,255});
    DrawTriangle({pct2p.x,pct2p.y}, {pct3p.x,pct3p.y}, {pct4p.x,pct4p.y},  {0, 0, 0,255});

    DrawTriangle({pct1p.x,pct1p.y}, {pct4p.x,pct4p.y}, {pct2p.x,pct2p.y}, {0, 0, 0,255});
    DrawTriangle({pct2p.x,pct2p.y}, {pct4p.x,pct4p.y}, {pct3p.x,pct3p.y},  {0, 0, 0,255});
}


/// UI
void paginaafisare()
{
    DrawRectangle(ScreenWidth-170,60,160,174,RED);
    DrawRectangleLines(ScreenWidth-170,60,160,174,WHITE);
    DrawLine(ScreenWidth-170,104,ScreenWidth-10,104,WHITE);
    DrawLine(ScreenWidth-170,148,ScreenWidth-10,148,WHITE);
    DrawLine(ScreenWidth-170,192,ScreenWidth-10,192,WHITE);
    DrawText("Gol",ScreenWidth-130,73,20,WHITE);
    DrawLine(ScreenWidth-80,60,ScreenWidth-80,104,WHITE);
    DrawRectangle(ScreenWidth-58,70,25,25,WHITE);
    DrawText("Shading",ScreenWidth-127,117,20,WHITE);
    DrawText("Colorat",ScreenWidth-125,161,20,WHITE);
    DrawText("Custom",ScreenWidth-125,205,20,WHITE);
}
void paginacustom()
{
    Vector2 v1={ScreenWidth-250,650};
    Vector2 v2={ScreenWidth-10,650};
    DrawRectangle(ScreenWidth-250,250,240,800,VISINIU);
    DrawRectangle(ScreenWidth-250,250,240,50,BLACK);
    DrawText("Culoare 1",ScreenWidth-230,260,30,WHITE);
    DrawRectangle(ScreenWidth-250,650,240,50,BLACK);
    DrawRectangle(ScreenWidth-60,260,30,30,culoare1);
    DrawRectangleLines(ScreenWidth-60,260,30,30,WHITE);
    DrawText("Culoare 2",ScreenWidth-230,660,30,WHITE);
    DrawRectangleLines(ScreenWidth-250,250,240,800,WHITE);
    DrawRectangle(ScreenWidth-60,660,30,30,culoare2);
    DrawRectangleLines(ScreenWidth-60,660,30,30,WHITE);

    ///culori 1
    DrawRectangle(ScreenWidth-220,340,40,40,WHITE);
    DrawRectangle(ScreenWidth-150,340,40,40,BLACK);
    DrawRectangle(ScreenWidth-80,340,40,40,BLUE);

    DrawRectangle(ScreenWidth-220,415,40,40,RED);
    DrawRectangle(ScreenWidth-150,415,40,40,GREEN);
    DrawRectangle(ScreenWidth-80,415,40,40,YELLOW);

    DrawRectangle(ScreenWidth-220,490,40,40,ORANGE);
    DrawRectangle(ScreenWidth-150,490,40,40,LIME);
    DrawRectangle(ScreenWidth-80,490,40,40,SKYBLUE);

    DrawRectangle(ScreenWidth-220,565,40,40,VIOLET);
    DrawRectangle(ScreenWidth-150,565,40,40,BEIGE);
    DrawRectangle(ScreenWidth-80,565,40,40,BROWN);

    ///culori 2
    DrawRectangle(ScreenWidth-220,740,40,40,WHITE);
    DrawRectangle(ScreenWidth-150,740,40,40,BLACK);
    DrawRectangle(ScreenWidth-80,740,40,40,BLUE);

    DrawRectangle(ScreenWidth-220,815,40,40,RED);
    DrawRectangle(ScreenWidth-150,815,40,40,GREEN);
    DrawRectangle(ScreenWidth-80,815,40,40,YELLOW);

    DrawRectangle(ScreenWidth-220,890,40,40,ORANGE);
    DrawRectangle(ScreenWidth-150,890,40,40,LIME);
    DrawRectangle(ScreenWidth-80,890,40,40,SKYBLUE);

    DrawRectangle(ScreenWidth-220,965,40,40,VIOLET);
    DrawRectangle(ScreenWidth-150,965,40,40,BEIGE);
    DrawRectangle(ScreenWidth-80,965,40,40,BROWN);
}
void paginamodel()
{
    DrawRectangle(ScreenWidth-320,60,160,218,RED);
    DrawRectangleLines(ScreenWidth-320,60,160,218,WHITE);
    DrawLine(ScreenWidth-320,104,ScreenWidth-160,104,WHITE);
    DrawLine(ScreenWidth-320,148,ScreenWidth-160,148,WHITE);
    DrawLine(ScreenWidth-320,192,ScreenWidth-160,192,WHITE);
    DrawLine(ScreenWidth-320,236,ScreenWidth-160,236,WHITE);
    DrawText("Cub",ScreenWidth-258,73,20,WHITE);
    DrawText("Ceainic",ScreenWidth-270,117,20,WHITE);
    DrawText("Maimuta",ScreenWidth-275,161,20,WHITE);
    DrawText("Pinguin",ScreenWidth-275,205,20,WHITE);
    DrawText("Racheta",ScreenWidth-277,249,20,WHITE);

}

void SaveWindow()
{
    DrawRectangle(260,140,1400,700,RED);
    DrawRectangleLines(260,140,1400,700,WHITE);
    DrawText("Salvare Obiect",600,180,100,WHITE);
    DrawRectangle(800,450,400,120,BLACK);
    DrawRectangleLines(800,450,400,120,WHITE);
    DrawText("Nume:",630,480,50,WHITE);
    if(nrlitere>0)
    {
        DrawText(numefisier,810,485,40,WHITE);
    }
}

void OpenWindow()
{
    DrawRectangle(260,140,1400,700,RED);
    DrawRectangleLines(260,140,1400,700,WHITE);
    DrawText("Deschide Obiect",600,180,100,WHITE);
    DrawRectangle(800,450,400,120,BLACK);
    DrawRectangleLines(800,450,400,120,WHITE);
    DrawText("Nume:",630,480,50,WHITE);
    if(nrlitere>0)
    {
        DrawText(numefisier,810,485,40,WHITE);
    }
}

void HelpWindow()
{
    DrawRectangle(260,140,1400,700,RED);
    DrawRectangleLines(260,140,1400,700,WHITE);
    DrawText("CONTROALE TASTATURA:",270,150,20,BLACK);

    DrawText("*TRANSLATIE:",290,170,20,WHITE);
    DrawText("-W/S ---> translatie sus/jos (axa Y)",310,190,20,WHITE);
    DrawText("-A/D ---> translatie stanga/dreapta (axa X)",310,210,20,WHITE);
    DrawText("-E/Q ---> translatie fata/spate (axa Z)",310,230,20,WHITE);

    DrawText("*ROTIRE",290,270,20,WHITE);
    DrawText("-W/S ---> translatie sus/jos (axa Y)",310,290,20,WHITE);
    DrawText("-A/D ---> translatie stanga/dreapta (axa X)",310,310,20,WHITE);
    DrawText("-E/Q ---> translatie fata/spate (axa Z)",310,330,20,WHITE);

    DrawText("BUTOANE:",270,370,20,BLACK);
    DrawText("-Model ---> alegerea unui model 3D predefinit (cub, racheta, maimuta etc.)",290,390,20,WHITE);
    DrawText("-Afisare ---> alegerea modului de afisare a modelului 3D (gol (cu optiune de transparenta), shading (cu umbre), colorat,",290,410,20,WHITE);
    DrawText("custom (asemanator cu shading, dar se pot alege cele 2 culori de afisare))",400,430,20,WHITE);
    DrawText("-Puncte ---> evidentierea punctelor (doar daca modul de afisare este \"gol\")",290,450,20,WHITE);

    DrawText("-Editare:",290,470,20,WHITE);
    DrawText("---> editarea obiectului 3D prin adaugarea/stergerea de triunghiuri",320,490,20,WHITE);
    DrawText("---> stergere: click dreapta pe triunghiul care dorim sa il stergem",320,510,20,WHITE);
    DrawText("---> adaugare: click stanga (in trei puncte A,B,C), adauga un triunghi nou cu varfurile in A, B, C.",320,530,20,WHITE);
    DrawText("---> buton adancime: selectam pe cele 2 butoane (+,-) adancimea pe care dorim sa adaugam triunghiuri noi. Punctele deja existente",320,550,20,WHITE);
    DrawText("pe adancimea aleasa vor fi colorate cu verde in loc de rosu (modul \"puncte\" trebuie activat)",350,570,20,WHITE);
    DrawText("---> casuta alba: cand activata, v-a afisa un \"plan\" negru care evidentiaza adancimea pe care editam",320,590,20,WHITE);

    DrawText("-Pozitie editare: reseteaza cele 3 unghiuri (X,Y,Z) la 0. Cele 3 unghiuri trebuie sa fie 0 astfel incat sa putem adauga ",290,610,20,WHITE);
    DrawText("triunghiuri corect",310,630,20,WHITE);

    DrawText("-Save: deschide o pagina in care putem salva obiectul afisat in momentul respectiv (cu toate modificare facute asupra acestuia). ",290,650,20,WHITE);
    DrawText("Scriem numele pe care dorim fisierul respectiv sa il aiba, dupa urmatorul model: \"nume.obj\". Dupa scrierea numelui fisierului se",310,670,20,WHITE);
    DrawText("apasa ENTER pentru salvare, sau ESC pentru anulare.",310,690,20,WHITE);

    DrawText("-Open: deschide o pagina in care putem deschide orice fisier salvat anterior, dupa urmatorul model: \"nume.obj\". Dupa scrierea ",290,710,20,WHITE);
    DrawText("numelui fisierului se apasa ENTER pentru salvare, sau ESC pentru anulare.",310,730,20,WHITE);

    DrawText("TABEL Translatie/Rotatie/Scalare:",290,770,20,BLACK);
    DrawText("Ne permite modificarea parametrilor Translatie, Rotatie si Scalare (pe oricare din axele X,Y,Z) prin butoanele +,-;",290,790,20,WHITE);

}

void UI()
{
    char copie[100];

    ///fisier
    DrawRectangle(ScreenWidth-135,ScreenHeight-225,120,225,RED);
    DrawRectangleLines(ScreenWidth-135,ScreenHeight-225,120,225,WHITE);
    DrawLine(ScreenWidth-135,ScreenHeight-150,ScreenWidth-15,ScreenHeight-150,WHITE);
    DrawLine(ScreenWidth-135,ScreenHeight-75,ScreenWidth-15,ScreenHeight-75,WHITE);
    DrawText("Save",ScreenWidth-115,ScreenHeight-200,30,WHITE);
    DrawText("Open",ScreenWidth-115,ScreenHeight-125,30,WHITE);
    DrawText("Close",ScreenWidth-115,ScreenHeight-50,30,WHITE);

    if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT) && GetMouseX()>=ScreenWidth-135 && GetMouseX()<=ScreenWidth-15 && GetMouseY()>=ScreenHeight-225 && GetMouseY()<=ScreenHeight-150)
    {
        OKsave=1;
    }

    if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT) && GetMouseX()>=ScreenWidth-135 && GetMouseX()<=ScreenWidth-15 && GetMouseY()>=ScreenHeight-150 && GetMouseY()<=ScreenHeight-75)
    {
        OKopen=1;
    }
    if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT) && GetMouseX()>=ScreenWidth-135 && GetMouseX()<=ScreenWidth-15 && GetMouseY()>=ScreenHeight-75 && GetMouseY()<=ScreenHeight)
    {
        meshcube.tris.clear();
                vec.clear();
                nr=0;
                nrpuncte=0;
    }

    if(OKsave==1)
    {
        SaveWindow();
        int buton=GetCharPressed();
        if(buton>0 && buton<=125)
        {
            numefisier[nrlitere]=(char)buton;
            numefisier[nrlitere+1]='\0';
            nrlitere++;
        }
        if(IsKeyPressed(KEY_BACKSPACE))
        {
            nrlitere--;
            if(nrlitere<0)
                nrlitere=0;
            numefisier[nrlitere]='\0';
        }

        if(IsKeyPressed(KEY_ESCAPE))
        {
            OKsave=0;
            nrlitere=0;
            numefisier[nrlitere]='\0';
        }

        if(IsKeyPressed(KEY_ENTER))
        {
            OKsave=0;
            if(nrlitere>0)
            {
                salvare(numefisier);
            }
            nrlitere=0;
            numefisier[nrlitere]='\0';
        }


    }

    if(OKopen==1)
    {
        OpenWindow();
        int buton=GetCharPressed();
        if(buton>0 && buton<=125)
        {
            numefisier[nrlitere]=(char)buton;
            numefisier[nrlitere+1]='\0';
            nrlitere++;
        }
        if(IsKeyPressed(KEY_BACKSPACE))
        {
            nrlitere--;
            if(nrlitere<0)
                nrlitere=0;
            numefisier[nrlitere]='\0';
        }

        if(IsKeyPressed(KEY_ESCAPE))
        {
            OKopen=0;
            nrlitere=0;
            numefisier[nrlitere]='\0';
        }

        if(IsKeyPressed(KEY_ENTER))
        {
            OKopen=0;
            if(nrlitere>0)
            {
                meshcube.tris.clear();
                vec.clear();
                nr=0;
                nrpuncte=0;
                meshcube.LoadFile(numefisier);
            }
            nrlitere=0;
            numefisier[nrlitere]='\0';
        }
    }

    ///buton editare
    if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT) && GetMouseX()>=ScreenWidth-620 && GetMouseX()<=ScreenWidth-490 && GetMouseY()>=10 && GetMouseY()<=50)
    {

        if(OKedit==0)
        {
            OKedit=1;
            unghix=0;
            unghiy=0;
            unghiz=0;

        }
        else
        {
            OKedit=0;

        }
    }
    if(OKedit==1)
    {
        DrawRectangle(ScreenWidth-620,70,130,200,RED);
        DrawRectangleLines(ScreenWidth-620,70,130,200,WHITE);
        DrawText("Adancime",ScreenWidth-610,80,25,WHITE);
        DrawRectangle(ScreenWidth-580,120,55,40,DARKGRAY);
        DrawText("+",ScreenWidth-565,117,50,WHITE);
        DrawRectangle(ScreenWidth-600,170,90,40,BLACK);
        DrawRectangle(ScreenWidth-580,220,55,40,DARKGRAY);
        DrawText("-",ScreenWidth-565,217,50,WHITE);
        sprintf(copie,"%.2f",ez);
        DrawText(copie,ScreenWidth-585,180,25,WHITE);
        DrawRectangle(ScreenWidth-490,70,40,40,RED);
        DrawRectangleLines(ScreenWidth-490,70,40,40,WHITE);
        DrawRectangle(ScreenWidth-485,75,30,30,WHITE);
        if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT) && GetMouseX()>=ScreenWidth-620 && GetMouseX()<=ScreenWidth-490 && GetMouseY()>=70 && GetMouseY()<=270)
        {
            if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT) && GetMouseX()>=ScreenWidth-580 && GetMouseX()<=ScreenWidth-525 && GetMouseY()>=120 && GetMouseY()<=160)
                {ez-=0.1f;
                tz-=0.1f;
                }
            if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT) && GetMouseX()>=ScreenWidth-580 && GetMouseX()<=ScreenWidth-525 && GetMouseY()>=220 && GetMouseY()<=260)
                {ez+=0.1f;
                tz+=0.1f;
                }
        }

        if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT) && GetMouseX()>=ScreenWidth-485 && GetMouseX()<=ScreenWidth-455 && GetMouseY()>=75 && GetMouseY()<=105)
        {
            if(OKadancime==0)
                OKadancime=1;
            else
                OKadancime=0;
        }
    }
    DrawRectangle(ScreenWidth-620,10,130,40,RED);
    DrawRectangleLines(ScreenWidth-620,10,130,40,WHITE);
    DrawText("Editare",ScreenWidth-608,20,20,WHITE);
    DrawRectangle(ScreenWidth-525,15,30,30,WHITE);
    if(OKedit==1)
    {
        DrawLineEx({ScreenWidth-525,15}, {ScreenWidth-495,45},5,BLACK);
        DrawLineEx({ScreenWidth-525,45}, {ScreenWidth-495,15},5,BLACK);
        if(OKadancime==1)
    {
        DrawLineEx({ScreenWidth-485,75}, {ScreenWidth-455,105},5,BLACK);
        DrawLineEx({ScreenWidth-485,105}, {ScreenWidth-455,75},5,BLACK);
    }
    }


    ///Stanga jos
    DrawRectangle(0,ScreenHeight-200,900,50,RED);
    DrawRectangle(0,ScreenHeight-150,900,150,WHITE);

    DrawLine(0,ScreenHeight-150,900,ScreenHeight-150,BLACK);
    DrawLine(0,ScreenHeight-200,900,ScreenHeight-200,BLACK);
    DrawLine(900,ScreenHeight-200,900,ScreenHeight,BLACK);
    DrawLine(900,ScreenHeight,0,ScreenHeight,BLACK);
    DrawLine(0,ScreenHeight,0,ScreenHeight-100,BLACK);
    DrawLine(300,ScreenHeight-200,300,ScreenHeight,BLACK);
    DrawLine(600,ScreenHeight-200,600,ScreenHeight,BLACK);
    DrawLine(0,ScreenHeight-100,900,ScreenHeight-100,BLACK);
    DrawLine(0,ScreenHeight-50,900,ScreenHeight-50,BLACK);

    ////////////////////////////////////////////////////

    DrawText("Translatie",20,ScreenHeight-195,45,WHITE);
    DrawText("X:",20,ScreenHeight-140,30,BLACK);
    DrawRectangle(225,ScreenHeight-145,70,40,BLACK);
    sprintf(copie,"%.2f",tx);
    DrawText(copie,230,ScreenHeight-135,20,WHITE);
    /// -
    DrawRectangle(75,ScreenHeight-145,55,40,DARKGRAY);
    DrawText("-",90,ScreenHeight-148,50,RED);
    /// +
    DrawRectangle(140,ScreenHeight-145,55,40,DARKGRAY);
    DrawText("+",155,ScreenHeight-148,50,RED);

    DrawText("Y:",20,ScreenHeight-90,30,BLACK);
    DrawRectangle(225,ScreenHeight-95,70,40,BLACK);
    if(ty==0.0)
        sprintf(copie,"%.2f",ty);
    else
        sprintf(copie,"%.2f",-ty);
    DrawText(copie,230,ScreenHeight-85,20,WHITE);
    /// -
    DrawRectangle(75,ScreenHeight-95,55,40,DARKGRAY);
    DrawText("-",90,ScreenHeight-98,50,RED);
    /// +
    DrawRectangle(140,ScreenHeight-95,55,40,DARKGRAY);
    DrawText("+",155,ScreenHeight-98,50,RED);

    DrawText("Z:",20,ScreenHeight-40,30,BLACK);
    DrawRectangle(225,ScreenHeight-45,70,40,BLACK);
    sprintf(copie,"%.2f",tz);
    DrawText(copie,230,ScreenHeight-35,20,WHITE);
    /// -
    DrawRectangle(75,ScreenHeight-45,55,40,DARKGRAY);
    DrawText("-",90,ScreenHeight-48,50,RED);
    /// +
    DrawRectangle(140,ScreenHeight-45,55,40,DARKGRAY);
    DrawText("+",155,ScreenHeight-48,50,RED);

    /////////////////////////////////////////////////////////////
    DrawText("Rotatie",370,ScreenHeight-195,45,WHITE);
    DrawText("X:",320,ScreenHeight-140,30,BLACK);
    DrawRectangle(525,ScreenHeight-145,70,40,BLACK);
    sprintf(copie,"%.2f",unghix);
    DrawText(copie,530,ScreenHeight-135,20,WHITE);
    /// -
    DrawRectangle(375,ScreenHeight-145,55,40,DARKGRAY);
    DrawText("-",390,ScreenHeight-148,50,RED);
    /// +
    DrawRectangle(440,ScreenHeight-145,55,40,DARKGRAY);
    DrawText("+",455,ScreenHeight-148,50,RED);


    DrawText("Y:",320,ScreenHeight-90,30,BLACK);
    DrawRectangle(525,ScreenHeight-95,70,40,BLACK);
    sprintf(copie,"%.2f",unghiy);
    DrawText(copie,530,ScreenHeight-85,20,WHITE);
    /// -
    DrawRectangle(375,ScreenHeight-95,55,40,DARKGRAY);
    DrawText("-",390,ScreenHeight-98,50,RED);
    /// +
    DrawRectangle(440,ScreenHeight-95,55,40,DARKGRAY);
    DrawText("+",455,ScreenHeight-98,50,RED);


    DrawText("Z:",320,ScreenHeight-40,30,BLACK);
    DrawRectangle(525,ScreenHeight-45,70,40,BLACK);
    sprintf(copie,"%.2f",unghiz);
    DrawText(copie,530,ScreenHeight-35,20,WHITE);
    /// -
    DrawRectangle(375,ScreenHeight-45,55,40,DARKGRAY);
    DrawText("-",390,ScreenHeight-48,50,RED);
    /// +
    DrawRectangle(440,ScreenHeight-45,55,40,DARKGRAY);
    DrawText("+",455,ScreenHeight-48,50,RED);


    ///////////////////////////////////////////////////
    DrawText("Scalare",660,ScreenHeight-195,45,WHITE);
    DrawText("X:",620,ScreenHeight-140,30,BLACK);
    DrawRectangle(825,ScreenHeight-145,70,40,BLACK);
    sprintf(copie,"%.2f",sx);
    DrawText(copie,830,ScreenHeight-135,20,WHITE);
    /// -
    DrawRectangle(675,ScreenHeight-145,55,40,DARKGRAY);
    DrawText("-",690,ScreenHeight-148,50,RED);
    /// +
    DrawRectangle(740,ScreenHeight-145,55,40,DARKGRAY);
    DrawText("+",755,ScreenHeight-148,50,RED);



    DrawText("Y:",620,ScreenHeight-90,30,BLACK);
    DrawRectangle(825,ScreenHeight-95,70,40,BLACK);
    sprintf(copie,"%.2f",sy);
    DrawText(copie,830,ScreenHeight-85,20,WHITE);
    /// -
    DrawRectangle(675,ScreenHeight-95,55,40,DARKGRAY);
    DrawText("-",690,ScreenHeight-98,50,RED);
    /// +
    DrawRectangle(740,ScreenHeight-95,55,40,DARKGRAY);
    DrawText("+",755,ScreenHeight-98,50,RED);


    DrawText("Z:",620,ScreenHeight-40,30,BLACK);
    DrawRectangle(825,ScreenHeight-45,70,40,BLACK);
    sprintf(copie,"%.2f",sz);
    DrawText(copie,830,ScreenHeight-35,20,WHITE);
    /// -
    DrawRectangle(675,ScreenHeight-45,55,40,DARKGRAY);
    DrawText("-",690,ScreenHeight-48,50,RED);
    /// +
    DrawRectangle(740,ScreenHeight-45,55,40,DARKGRAY);
    DrawText("+",755,ScreenHeight-48,50,RED);


    if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
    {
        int mousex,mousey;
        mousex=GetMouseX();
        mousey=GetMouseY();
        ///translatie
        if(mousex>=75 && mousex<=130 && mousey>=ScreenHeight-145 && mousey<=ScreenHeight-105)
            tx-=0.1f;
        else if(mousex>=140 && mousex<=195 && mousey>=ScreenHeight-145 && mousey<=ScreenHeight-105)
            tx+=0.1f;
        else if(mousex>=75 && mousex<=130 && mousey>=ScreenHeight-95 && mousey<=ScreenHeight-55)
            ty+=0.1f;
        else if(mousex>=140 && mousex<=195 && mousey>=ScreenHeight-95 && mousey<=ScreenHeight-55)
            ty-=0.1f;
        else if(mousex>=75 && mousex<=130 && mousey>=ScreenHeight-45 && mousey<=ScreenHeight-5)
            tz-=0.1f;
        else if(mousex>=140 && mousex<=195 && mousey>=ScreenHeight-45 && mousey<=ScreenHeight-5)
            tz+=0.1f;

        ///rotatie
        else if(mousex>=375 && mousex<=430 && mousey>=ScreenHeight-145 && mousey<=ScreenHeight-105)
            unghix-=0.1f;
        else if(mousex>=340 && mousex<=495 && mousey>=ScreenHeight-145 && mousey<=ScreenHeight-105)
            unghix+=0.1f;
        else if(mousex>=375 && mousex<=430 && mousey>=ScreenHeight-95 && mousey<=ScreenHeight-55)
            unghiy-=0.1f;
        else if(mousex>=340 && mousex<=495 && mousey>=ScreenHeight-95 && mousey<=ScreenHeight-55)
            unghiy+=0.1f;
        else if(mousex>=375 && mousex<=430 && mousey>=ScreenHeight-45 && mousey<=ScreenHeight-5)
            unghiz-=0.1f;
        else if(mousex>=440 && mousex<=495 && mousey>=ScreenHeight-45 && mousey<=ScreenHeight-5)
            unghiz+=0.1f;

        ///scalare
        if(mousex>=675 && mousex<=730 && mousey>=ScreenHeight-145 && mousey<=ScreenHeight-105)
            sx-=0.1f;
        else if(mousex>=740 && mousex<=795 && mousey>=ScreenHeight-145 && mousey<=ScreenHeight-105)
            sx+=0.1f;
        else if(mousex>=675 && mousex<=730 && mousey>=ScreenHeight-95 && mousey<=ScreenHeight-55)
            sy-=0.1f;
        else if(mousex>=740 && mousex<=795 && mousey>=ScreenHeight-95 && mousey<=ScreenHeight-55)
            sy+=0.1f;
        else if(mousex>=675 && mousex<=730 && mousey>=ScreenHeight-45 && mousey<=ScreenHeight-5)
            sz-=0.1f;
        else if(mousex>=740 && mousex<=795 && mousey>=ScreenHeight-45 && mousey<=ScreenHeight-5)
            sz+=0.1f;


    }

    ///resetare rotatie
    DrawRectangle(950,ScreenHeight-50,250,45,RED);
    DrawRectangleLines(950,ScreenHeight-50,250,45,WHITE);
    DrawText("Pozitie editare",960,ScreenHeight-40,30,WHITE);
    if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT) && GetMouseX()>=950 && GetMouseX()<=1200 && GetMouseY()>=ScreenHeight-50 && GetMouseY()<=ScreenHeight-5)
    {
        unghix=unghiy=unghiz=0;
    }



    ///Dreapta sus
    //buton afisare
    Vector2 v1= {ScreenWidth-70,17};
    Vector2 v2= {ScreenWidth-57,42};
    Vector2 v3= {ScreenWidth-45,17};
    DrawRectangle(ScreenWidth-170,10,130,40,RED);
    DrawRectangleLines(ScreenWidth-170,10,130,40,WHITE);
    DrawText("Afisare",ScreenWidth-158,20,20,WHITE);
    DrawLine(ScreenWidth-75,10,ScreenWidth-75,50,WHITE);
    DrawLineEx(v1,v2,3,BLACK);
    DrawLineEx(v3,v2,3,BLACK);


    //pagina mod de afisare
    if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT) && ((GetMouseX()>=ScreenWidth-170 && GetMouseX()<=ScreenWidth-40 && GetMouseY()>=10 && GetMouseY()<=50) || (GetMouseX()>=ScreenWidth-170 && GetMouseX()<=ScreenWidth-40 && GetMouseY()>=10 && GetMouseY()<=280 && OKafisare==1)))
    {
        int mousex,mousey;
        mousex=GetMouseX();
        mousey=GetMouseY();
        if(OKafisare==0)
        {
            OKafisare=1;

        }
        else
        {
            if(mousex>=ScreenWidth-170 && mousex<=ScreenWidth-10 && mousey>=60 && mousey<=236)
            {
                if(mousex>=ScreenWidth-58 && mousex<=ScreenWidth-33 && mousey>=70 && mousey<=95)
                {
                    if(OKtransparent==1)
                        OKtransparent=0;
                    else
                        OKtransparent=1;
                    afisare=0;

                }
                if(mousex>=ScreenWidth-170 && mousex<=ScreenWidth-80 && mousey>=60 && mousey<=104)
                    afisare=0;
                else if(mousex>=ScreenWidth-170 && mousex<=ScreenWidth-10 && mousey>=104 && mousey<=148)
                    {afisare=1;
                    OKtransparent=0;
                    }
                else if(mousex>=ScreenWidth-170 && mousex<=ScreenWidth-10 && mousey>=148 && mousey<=192)
                    {afisare=2;
                    OKtransparent=0;
                    }
                else if(mousex>=ScreenWidth-170 && mousex<=ScreenWidth-10 && mousey>=192 && mousey<=236)
                {
                    if(OKcustom==0)
                        OKcustom=1;
                    else
                        OKcustom=0;
                    OKtransparent=0;
                }
            }
            else
            {
                OKafisare=0;
                OKcustom=0;
            }
        }
    }

    if(OKafisare==1)
    {
        paginaafisare();
        if(OKtransparent==1)
        {
            DrawLineEx({ScreenWidth-58,70}, {ScreenWidth-33,95},5,BLACK);
            DrawLineEx({ScreenWidth-58,95}, {ScreenWidth-33,70},5,BLACK);
        }

    }
    if(OKcustom==1 && OKafisare==1)
        paginacustom();
    if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT) && GetMouseX()>=ScreenWidth-250 && GetMouseX()<=ScreenWidth-10 && GetMouseY()>=240 && GetMouseY()<=1040 &&OKcustom==1)
    {
        if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT) && GetMouseX()>=ScreenWidth-250 && GetMouseX()<=ScreenWidth-10 && GetMouseY()>=240 && GetMouseY()<=650)
        {
            if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT) && GetMouseX()>=ScreenWidth-220 && GetMouseX()<=ScreenWidth-180 && GetMouseY()>=340 && GetMouseY()<=380)
                culoare1=WHITE;
            else if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT) && GetMouseX()>=ScreenWidth-150 && GetMouseX()<=ScreenWidth-110 && GetMouseY()>=340 && GetMouseY()<=380)
                culoare1=BLACK;
            else if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT) && GetMouseX()>=ScreenWidth-80 && GetMouseX()<=ScreenWidth-40 && GetMouseY()>=340 && GetMouseY()<=380)
                culoare1=BLUE;
            else if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT) && GetMouseX()>=ScreenWidth-220 && GetMouseX()<=ScreenWidth-180 && GetMouseY()>=415 && GetMouseY()<=455)
                culoare1=RED;
            else if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT) && GetMouseX()>=ScreenWidth-150 && GetMouseX()<=ScreenWidth-110 && GetMouseY()>=415 && GetMouseY()<=455)
                culoare1=GREEN;
            else if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT) && GetMouseX()>=ScreenWidth-80 && GetMouseX()<=ScreenWidth-40 && GetMouseY()>=415 && GetMouseY()<=455)
                culoare1=YELLOW;
            else if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT) && GetMouseX()>=ScreenWidth-220 && GetMouseX()<=ScreenWidth-180 && GetMouseY()>=490 && GetMouseY()<=530)
                culoare1=ORANGE;
            else if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT) && GetMouseX()>=ScreenWidth-150 && GetMouseX()<=ScreenWidth-110 && GetMouseY()>=490 && GetMouseY()<=530)
                culoare1=LIME;
            else if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT) && GetMouseX()>=ScreenWidth-80 && GetMouseX()<=ScreenWidth-40 && GetMouseY()>=490 && GetMouseY()<=530)
                culoare1=SKYBLUE;
            else if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT) && GetMouseX()>=ScreenWidth-220 && GetMouseX()<=ScreenWidth-180 && GetMouseY()>=565 && GetMouseY()<=605)
                culoare1=VIOLET;
            else if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT) && GetMouseX()>=ScreenWidth-150 && GetMouseX()<=ScreenWidth-110 && GetMouseY()>=565 && GetMouseY()<=605)
                culoare1=BEIGE;
            else if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT) && GetMouseX()>=ScreenWidth-80 && GetMouseX()<=ScreenWidth-40 && GetMouseY()>=565 && GetMouseY()<=605)
                culoare1=BROWN;
        }
        else
        {
            if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT) && GetMouseX()>=ScreenWidth-220 && GetMouseX()<=ScreenWidth-180 && GetMouseY()>=740 && GetMouseY()<=780)
                culoare2=WHITE;
            else if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT) && GetMouseX()>=ScreenWidth-150 && GetMouseX()<=ScreenWidth-110 && GetMouseY()>=740 && GetMouseY()<=780)
                culoare2=BLACK;
            else if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT) && GetMouseX()>=ScreenWidth-80 && GetMouseX()<=ScreenWidth-40 && GetMouseY()>=740 && GetMouseY()<=780)
                culoare2=BLUE;
            else if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT) && GetMouseX()>=ScreenWidth-220 && GetMouseX()<=ScreenWidth-180 && GetMouseY()>=815 && GetMouseY()<=855)
                culoare2=RED;
            else if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT) && GetMouseX()>=ScreenWidth-150 && GetMouseX()<=ScreenWidth-110 && GetMouseY()>=815 && GetMouseY()<=855)
                culoare2=GREEN;
            else if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT) && GetMouseX()>=ScreenWidth-80 && GetMouseX()<=ScreenWidth-40 && GetMouseY()>=815 && GetMouseY()<=855)
                culoare2=YELLOW;
            else if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT) && GetMouseX()>=ScreenWidth-220 && GetMouseX()<=ScreenWidth-180 && GetMouseY()>=890 && GetMouseY()<=930)
                culoare2=ORANGE;
            else if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT) && GetMouseX()>=ScreenWidth-150 && GetMouseX()<=ScreenWidth-110 && GetMouseY()>=890 && GetMouseY()<=930)
                culoare2=LIME;
            else if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT) && GetMouseX()>=ScreenWidth-80 && GetMouseX()<=ScreenWidth-40 && GetMouseY()>=890 && GetMouseY()<=930)
                culoare2=SKYBLUE;
            else if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT) && GetMouseX()>=ScreenWidth-220 && GetMouseX()<=ScreenWidth-180 && GetMouseY()>=965 && GetMouseY()<=1005)
                culoare2=VIOLET;
            else if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT) && GetMouseX()>=ScreenWidth-150 && GetMouseX()<=ScreenWidth-110 && GetMouseY()>=965 && GetMouseY()<=1005)
                culoare2=BEIGE;
            else if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT) && GetMouseX()>=ScreenWidth-80 && GetMouseX()<=ScreenWidth-40 && GetMouseY()>=965 && GetMouseY()<=1005)
                culoare2=BROWN;
        }

        afisare=3;
    }


    //buton model
    v1= {ScreenWidth-220,17};
    v2= {ScreenWidth-207,42};
    v3= {ScreenWidth-195,17};
    DrawRectangle(ScreenWidth-320,10,130,40,RED);
    DrawRectangleLines(ScreenWidth-320,10,130,40,WHITE);
    DrawText("Model",ScreenWidth-308,20,20,WHITE);
    DrawLine(ScreenWidth-225,10,ScreenWidth-225,50,WHITE);
    DrawLineEx(v1,v2,3,BLACK);
    DrawLineEx(v3,v2,3,BLACK);

    //pagina modele
    if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT) && ((GetMouseX()>=ScreenWidth-320 && GetMouseX()<=ScreenWidth-190 && GetMouseY()>=10 && GetMouseY()<=50) || (GetMouseX()>=ScreenWidth-320 && GetMouseX()<=ScreenWidth-190 && GetMouseY()>=10 && GetMouseY()<=280 && OKmodel==1)))
    {
        int mousex,mousey;
        mousex=GetMouseX();
        mousey=GetMouseY();
        if(OKmodel==0)
        {
            OKmodel=1;
        }
        else
        {
            if(mousex>=ScreenWidth-320 && mousex<=ScreenWidth-160 && mousey>=60 && mousey<=280)
            {
                ez=0;
                if(mousex>=ScreenWidth-320 && mousex<=ScreenWidth-160 && mousey>=60 && mousey<=104)
                    strcpy(nume,"cube.obj");
                else if(mousex>=ScreenWidth-320 && mousex<=ScreenWidth-160 && mousey>=104 && mousey<=148)
                    strcpy(nume,"teapot.obj");
                else if(mousex>=ScreenWidth-320 && mousex<=ScreenWidth-160 && mousey>=148 && mousey<=192)
                    strcpy(nume,"monke.obj");
                else if(mousex>=ScreenWidth-320 && mousex<=ScreenWidth-160 && mousey>=192 && mousey<=236)
                    strcpy(nume,"penguin.obj");
                else if(mousex>=ScreenWidth-320 && mousex<=ScreenWidth-160 && mousey>=236 && mousey<=280)
                    strcpy(nume,"VideoShip.obj");
                meshcube.tris.clear();
                vec.clear();
                nrpuncte=0;
                nr=0;
                if(!strcmp(nume,"teapot.obj"))
                {
                    unghix=3.7f;
                    tz=6.2f;
                    unghiy = 0.0f;
                    unghiz = 0.0f;
                    sx = 1;
                    sy = 1;
                    sz = 1;
                    tx = 0.0f;
                    ty = 0.0f;
                }
                else if(!strcmp(nume,"penguin.obj"))
                {
                    ty=0.8f;
                    tz=1.7f;
                    unghiy=5.7f;
                    unghix = 0.0f;
                    unghiz = 0.0f;
                    sx = 1;
                    sy = 1;
                    sz = 1;
                    tx = 0.0f;
                }
                else if(!strcmp(nume,"VideoShip.obj"))
                {
                    tz=5.6f;
                    unghix=0.6f;
                    unghiy = 0.0f;
                    unghiz = 0.0f;
                    sx = 1;
                    sy = 1;
                    sz = 1;
                    tx = 0.0f;
                    ty = 0.0f;
                }
                else
                {
                    unghix = 0.0f;
                    unghiy = 0.0f;
                    unghiz = 0.0f;
                    sx = 1;
                    sy = 1;
                    sz = 1;
                    tx = 0.0f;
                    ty = 0.0f;
                    tz = 3.0f;
                }
                meshcube.LoadFile(nume);

            }
            else
                OKmodel=0;
        }
    }
    if(OKmodel==1)
        paginamodel();


    ///buton punct
    DrawRectangle(ScreenWidth-470,10,130,40,RED);
    DrawRectangleLines(ScreenWidth-470,10,130,40,WHITE);
    DrawText("Puncte",ScreenWidth-458,20,20,WHITE);
    if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT) && GetMouseX()>=ScreenWidth-470 && GetMouseX()<=ScreenWidth-340 && GetMouseY()>=10 && GetMouseY()<=50)
    {
        if(OKpunct==0)
            OKpunct=1;
        else
            OKpunct=0;
    }



    ///ajutor
    DrawRectangle(10,10,100,50,RED);
    DrawRectangleLines(10,10,100,50,WHITE);
    DrawText("Ajutor",20,20,25,WHITE);
    if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT) && GetMouseX()>=10 && GetMouseX()<=110 && GetMouseY()>=10 && GetMouseY()<=60)
    {
        OKajutor=1;
    }

    if(OKajutor==1)
    {
        HelpWindow();
        int buton=GetCharPressed();
        if(IsKeyPressed(KEY_ESCAPE) || IsKeyPressed(KEY_ENTER))
        {
            OKajutor=0;
        }

    }






}


///construire cub
void cub3D()
{
    creare();

    vector<triangle> TRIANGLES;
    triangle triProjected, triScaled, triRotated, triTranslated;
    for (auto i : meshcube.tris)
    {

        i.p[0].z-=ez;
        i.p[1].z-=ez;
        i.p[2].z-=ez;

        ///scalare
        inmultirematrice(i.p[0], triScaled.p[0], matScal);
        inmultirematrice(i.p[1], triScaled.p[1], matScal);
        inmultirematrice(i.p[2], triScaled.p[2], matScal);

        ///rotire
        inmultirematrice(triScaled.p[0], triRotated.p[0], matRot);
        inmultirematrice(triScaled.p[1], triRotated.p[1], matRot);
        inmultirematrice(triScaled.p[2], triRotated.p[2], matRot);

        ///translatie
        inmultirematrice(triRotated.p[0], triTranslated.p[0], matTran);
        inmultirematrice(triRotated.p[1], triTranslated.p[1], matTran);
        inmultirematrice(triRotated.p[2], triTranslated.p[2], matTran);

        ///normals (a.i cubul sa nu mai fie transparent)
        vec3d normal, line1, line2;
        line1.x = triTranslated.p[1].x - triTranslated.p[0].x;
        line1.y = triTranslated.p[1].y - triTranslated.p[0].y;
        line1.z = triTranslated.p[1].z - triTranslated.p[0].z;

        line2.x = triTranslated.p[2].x - triTranslated.p[0].x;
        line2.y = triTranslated.p[2].y - triTranslated.p[0].y;
        line2.z = triTranslated.p[2].z - triTranslated.p[0].z;

        normal.x = line1.y * line2.z - line1.z * line2.y;
        normal.y = line1.z * line2.x - line1.x * line2.z;
        normal.z = line1.x * line2.y - line1.y * line2.x;

        float l = sqrtf(normal.x * normal.x + normal.y * normal.y + normal.z * normal.z);
        normal.x /= l;
        normal.y /= l;
        normal.z /= l;

        if(OKtransparent==0)
        {

        if (normal.x * (triTranslated.p[0].x - camera.x) +
                normal.y * (triTranslated.p[0].y - camera.y) +
                normal.z * (triTranslated.p[0].z - camera.z) < 0.0f)
        {
            /// Iluminare
            vec3d light_direction = { 0.0f, 0.0f, -1.0f };
            float l = sqrtf(light_direction.x * light_direction.x + light_direction.y * light_direction.y + light_direction.z * light_direction.z);
            light_direction.x /= l;
            light_direction.y /= l;
            light_direction.z /= l;

            /// Cat de similara este normala la directia luminii
            float dp = normal.x * light_direction.x + normal.y * light_direction.y + normal.z * light_direction.z;

            if(afisare==1 )
                Shading(dp,triTranslated.R,triTranslated.G,triTranslated.B);
            else if(afisare==2)
                Curcubeu(dp,triTranslated.R,triTranslated.G,triTranslated.B);
            else if(afisare==3)
                Gradient(dp,triTranslated.R,triTranslated.G,triTranslated.B,culoare1.r,culoare1.g,culoare1 .b,culoare2.r,culoare2.g,culoare2.b);

            ///proiectie
            inmultirematrice(triTranslated.p[0],triProjected.p[0],matProj);
            inmultirematrice(triTranslated.p[1],triProjected.p[1],matProj);
            inmultirematrice(triTranslated.p[2],triProjected.p[2],matProj);

            triProjected.R=triTranslated.R;
            triProjected.G=triTranslated.G;
            triProjected.B=triTranslated.B;

            triProjected.p[0].x *= 0.5f * (float)1400;
            triProjected.p[0].y *= 0.5f * (float)1400;
            triProjected.p[1].x *= 0.5f * (float)1400;
            triProjected.p[1].y *= 0.5f * (float)1400;
            triProjected.p[2].x *= 0.5f * (float)1400;
            triProjected.p[2].y *= 0.5f * (float)1400;

            triProjected.p[0].x += 0.5f * (float)ScreenWidth;
            triProjected.p[0].y += 0.5f * (float)ScreenHeight;
            triProjected.p[1].x += 0.5f * (float)ScreenWidth;
            triProjected.p[1].y += 0.5f * (float)ScreenHeight;
            triProjected.p[2].x += 0.5f * (float)ScreenWidth;
            triProjected.p[2].y += 0.5f * (float)ScreenHeight;

            triProjected.p[0].zverde=i.p[0].z;
            triProjected.p[1].zverde=i.p[1].z;
            triProjected.p[2].zverde=i.p[2].z;

            triProjected.numar=i.numar;

            TRIANGLES.push_back(triProjected);
        }
        }

        else
        {

            ///proiectie
            inmultirematrice(triTranslated.p[0],triProjected.p[0],matProj);
            inmultirematrice(triTranslated.p[1],triProjected.p[1],matProj);
            inmultirematrice(triTranslated.p[2],triProjected.p[2],matProj);

            triProjected.R=triTranslated.R;
            triProjected.G=triTranslated.G;
            triProjected.B=triTranslated.B;

            triProjected.p[0].x *= 0.5f * (float)1400;
            triProjected.p[0].y *= 0.5f * (float)1400;
            triProjected.p[1].x *= 0.5f * (float)1400;
            triProjected.p[1].y *= 0.5f * (float)1400;
            triProjected.p[2].x *= 0.5f * (float)1400;
            triProjected.p[2].y *= 0.5f * (float)1400;

            triProjected.p[0].x += 0.5f * (float)ScreenWidth;
            triProjected.p[0].y += 0.5f * (float)ScreenHeight;
            triProjected.p[1].x += 0.5f * (float)ScreenWidth;
            triProjected.p[1].y += 0.5f * (float)ScreenHeight;
            triProjected.p[2].x += 0.5f * (float)ScreenWidth;
            triProjected.p[2].y += 0.5f * (float)ScreenHeight;

            triProjected.p[0].zverde=i.p[0].z;
            triProjected.p[1].zverde=i.p[1].z;
            triProjected.p[2].zverde=i.p[2].z;

            triProjected.numar=i.numar;

            TRIANGLES.push_back(triProjected);

        }

    }


    /// Sort triangles from back to front
    sort(TRIANGLES.begin(), TRIANGLES.end(), [](triangle& t1, triangle& t2)
    {
        float z1 = (t1.p[0].z + t1.p[1].z + t1.p[2].z) / 3.0f;
        float z2 = (t2.p[0].z + t2.p[1].z + t2.p[2].z) / 3.0f;
        return z1 > z2;
    });

    for (auto& triProjected : TRIANGLES)
    {
        if(OKstergere==1)
        {
             if(CheckCollisionPointTriangle({stergere.x,stergere.y},{triProjected.p[0].x,triProjected.p[0].y},{triProjected.p[1].x,triProjected.p[1].y},{triProjected.p[2].x,triProjected.p[2].y}))
                {
                    if(meshcube.tris[triProjected.numar-1].numar==meshcube.tris[triProjected.numar].numar)
                        meshcube.tris[triProjected.numar-1].numar=-1;
                    else if(meshcube.tris[triProjected.numar+1].numar==meshcube.tris[triProjected.numar].numar)
                        meshcube.tris[triProjected.numar+1].numar=-1;
                    meshcube.tris[triProjected.numar].numar=-1;
                    OKstergere=0;

                }
        }

        if(meshcube.tris[triProjected.numar].numar!=-1)

        {

        if(afisare==1 || afisare==2 || afisare==3)
        {
            Color x= {triProjected.R,triProjected.G,triProjected.B,255};

            Vector2 v1=(Vector2)
            {
                triProjected.p[0].x, triProjected.p[0].y
            };
            Vector2 v2=(Vector2)
            {
                triProjected.p[1].x, triProjected.p[1].y
            };
            Vector2 v3=(Vector2)
            {
                triProjected.p[2].x, triProjected.p[2].y
            };
            DrawTriangle(v1, v2, v3, x);
        }
        else if(afisare==0)
        {
            if(OKpunct==1)
            {
                if(triProjected.p[0].viz==0)
                {
                    if(triProjected.p[0].zverde>=-1.05f && triProjected.p[0].zverde<=-0.95f && OKedit==1)
                        DrawCircle(triProjected.p[0].x,triProjected.p[0].y,5,GREEN);
                    else
                        DrawCircle(triProjected.p[0].x,triProjected.p[0].y,5,RED);
                    triProjected.p[0].viz=1;
                }
                if(triProjected.p[1].viz==0)
                {
                    if(triProjected.p[1].zverde>=-1.05f && triProjected.p[1].zverde<=-0.95f && OKedit==1)
                        DrawCircle(triProjected.p[1].x,triProjected.p[1].y,5,GREEN);
                    else
                        DrawCircle(triProjected.p[1].x,triProjected.p[1].y,5,RED);
                    triProjected.p[1].viz=1;
                }

                    if(triProjected.p[2].viz==0)
                {
                    if(triProjected.p[2].zverde>=-1.05f && triProjected.p[2].zverde<=-0.95f && OKedit==1)
                        DrawCircle(triProjected.p[2].x,triProjected.p[2].y,5,GREEN);
                    else
                        DrawCircle(triProjected.p[2].x,triProjected.p[2].y,5,RED);
                    triProjected.p[2].viz=1;
                }

            }

            DrawLine(triProjected.p[0].x, triProjected.p[0].y, triProjected.p[1].x, triProjected.p[1].y, RAYWHITE);
            DrawLine(triProjected.p[1].x, triProjected.p[1].y, triProjected.p[2].x, triProjected.p[2].y, RAYWHITE);
            DrawLine(triProjected.p[2].x, triProjected.p[2].y, triProjected.p[0].x, triProjected.p[0].y, RAYWHITE);

        }
        }



    }


}

int main()
{

    InitWindow(ScreenWidth, ScreenHeight, "3D");
    ClearBackground(GRAY);

    char button;
    vec3d oof[3];
    int aux=0;
    SetExitKey(NULL);
    while (!WindowShouldClose())
    {
        BeginDrawing();
        if(OKstart==0)
            meniu();
        else{

        ClearBackground(GRAY);
        if(OKedit==1 && OKadancime==1)
            DreptunghiEditare();
        cub3D();
        UI();
        if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT) && OKedit==1 && !(GetMouseX()>=ScreenWidth-620 && GetMouseX()<=ScreenWidth && GetMouseY()>=10 && GetMouseY()<=270) && !(GetMouseX()>=0 && GetMouseX()<=900 && GetMouseY()>=ScreenHeight-200 && GetMouseY()<=ScreenHeight) && !(GetMouseX()>=950 && GetMouseX()<=1200 && GetMouseY()>=ScreenHeight-50 && GetMouseY()<=ScreenHeight-5))
        {
            int x=GetMouseX();
            int y=GetMouseY();
            oof[aux].x=x;
            oof[aux].y=y;
            oof[aux].z=1;


            oof[aux].x -=0.5f*(float)ScreenWidth;
            oof[aux].y -=0.5f*(float)ScreenHeight;

            oof[aux].x /=0.5f*(float)1400;
            oof[aux].y /=0.5f*(float)1400;

            inmultirematrice1(oof[aux],oof[aux],invmatTrain);
            inmultirematrice1(oof[aux],oof[aux],invmatRot);
            inmultirematrice1(oof[aux],oof[aux],invmatScal);

            aux++;
            if (aux == 3)
            {
                aux = 0;
                oof[0].x*=tz-1;
                oof[0].y*=tz-1;
                oof[1].x*=tz-1;
                oof[1].y*=tz-1;
                oof[2].x*=tz-1;
                oof[2].y*=tz-1;

                oof[0].x-=tx;
                oof[1].x-=tx;
                oof[2].x-=tx;

                oof[0].y-=ty;
                oof[1].y-=ty;
                oof[2].y-=ty;

                ///adancimea celor 3 puncte
                oof[0].z=-1+ez;
                oof[1].z=-1+ez;
                oof[2].z=-1+ez;

                meshcube.tris.push_back({oof[1],oof[0],oof[2]});
                meshcube.tris.push_back({oof[2],oof[0],oof[1]});

                vec.push_back({oof[0].x,oof[0].y,oof[0].z});
                vec.push_back({oof[1].x,oof[1].y,oof[1].z});
                vec.push_back({oof[2].x,oof[2].y,oof[2].z});

                meshcube.tris[nr].numar=nr;
                meshcube.tris[nr].nrpct1=nrpuncte+2;
                meshcube.tris[nr].nrpct2=nrpuncte+1;
                meshcube.tris[nr].nrpct3=nrpuncte+3;

                meshcube.tris[nr+1].numar=nr;
                meshcube.tris[nr+1].nrpct1=nrpuncte+3;
                meshcube.tris[nr+1].nrpct2=nrpuncte+1;
                meshcube.tris[nr+1].nrpct3=nrpuncte+2;

                nrpuncte+=3;
                nr+=2;



            }
        }


        if(IsMouseButtonPressed(MOUSE_BUTTON_RIGHT) && OKedit==1 && !(GetMouseX()>=ScreenWidth-620 && GetMouseX()<=ScreenWidth && GetMouseY()>=10 && GetMouseY()<=270) && !(GetMouseX()>=0 && GetMouseX()<=900 && GetMouseY()>=ScreenHeight-200 && GetMouseY()<=ScreenHeight))
        {
            OKgasit=0;
            OKstergere=1;
            stergere.x=GetMouseX();
            stergere.y=GetMouseY();

        }

        if(afisare==0 && OKtransparent==1 && !(OKsave || OKopen))
        {
        centru.x=0;
        centru.y=0;
        centru.z=0;

        inmultirematrice(centru,centru,matScal);
        inmultirematrice(centru,centru,matRot);
        inmultirematrice(centru,centru,matTran);
        inmultirematrice(centru,centru,matProj);

        centru.x*=0.5f * (float)1400;
        centru.y*=0.5f * (float)1400;
        centru.x+=0.5f * (float)ScreenWidth;
        centru.y+=0.5f * (float)ScreenHeight;

        DrawCircle(centru.x,centru.y,10,BLUE);
        }

        if(button=='a')
            tx-=0.1f;
        else if(button=='d')
            tx+=0.1f;
        else if(button=='e')
            tz+=0.1f;
        else if(button=='q')
            tz-=0.1f;
        else if(button=='s')
            ty+=0.1f;
        else if(button=='w')
            ty-=0.1f;
        else if(button=='j')
            unghiy-=0.1f;
        else if(button=='l')
            unghiy+=0.1f;
        else if(button=='i')
            unghix+=0.1f;
        else if(button=='k')
            unghix-=0.1f;
        else if(button=='o')
            unghiz+=0.1f;
        else if(button=='u')
            unghiz-=0.1f;

        button=GetCharPressed();

        }
        ClearBackground(GRAY);
        int o=GetFrameTime();
        WaitTime(o);
        EndDrawing();



    }
    CloseWindow();
    return 0;
}
