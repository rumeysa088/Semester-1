#include<stdio.h>
#include<math.h>
#include<string.h>
typedef struct {
   float x,y,z;
}Point3D;
typedef struct {
    Point3D p;
   float len,wid,height;
}Cuboid;

float distancePoints( Point3D p1, Point3D p2){
  float distance=sqrt(pow((p2.x-p1.x),2)+pow((p2.y-p1.y),2)+pow((p2.z-p1.z),2));
  return distance;
}
float volume(Cuboid c){
  float volume=c.len*c.wid*c.height;
  return volume;
}
int within(Point3D d,Cuboid c1){
    if((d.x>c1.p.x && d.x<(c1.p.x+c1.len)) && (d.y>c1.p.y&& d.y<(c1.p.y+c1.height))&& (d.z>c1.p.z&& d.z<(c1.p.z+c1.wid))){return 1;}
    else return 0;
}
int main(){
     
    return 0;
}