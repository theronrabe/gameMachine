<<<<<<< HEAD
#ifndef _graphics.h_
#define _graphics.h_

//Drawing Structures 
struct _VERTEX { float x,y,s,t; };
extern struct _VERTEX _PRIM[];
=======
//Drawing Structures 
struct _VERTEX { float x,y,s,t; };
struct _VERTEX _PRIM[] = {-1,-1,0,0, 1,-1,1,0, 1,1,1,1, -1,1,0,1};
>>>>>>> 0c130a3d454dd197adecb20ae56faedd74e4f93a
GLuint _VAO[2], _VBO[2];
GLint _SAMPLER_LOC;

//Framework Functions
void loadShaders(char *vert, char *frag);

//User Functions
void createWindow(char *title, int x, int y, int width, int height);
void seeWorld2D(int x1, int y1, int x2, int y2);
void seeWorld3D(int cx, int cy, int cz, int fx, int fy, int fz, int vx, int vy, int vz);
void drawImage(GLuint Image, int x1, int y1, int width, int height, float rotation);
void drawImagePoints(GLuint Image, int x1, int y1, int z1, int x2, int y2, int z2, float rotation);
void buildPrimitive();
GLuint newImage(char *file);
<<<<<<< HEAD

#endif
=======
>>>>>>> 0c130a3d454dd197adecb20ae56faedd74e4f93a
