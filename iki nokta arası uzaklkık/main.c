#include <stdio.h>
#include <math.h>

struct point{
	int x;
	int y;
};



int main(int argc, const char * argv[]) {
  
    int min=0;
    int i=0;
    int total=0;
    int x1;
    int y1;
    int arryx[]={1,2,3,4,5};
    int arryy[]={6,7,8,9,10};
   struct point points[] = {
	   {1,6},{2,7},{3,8},{4,9},{5,10}
   };
   
    printf("please enter first x");
    scanf("%d",&x1);
    printf("please enter first y");
    scanf("%d",&y1);
 
    min = sqrt((x1-point[0].x)*(x1-point[0].x) + (y1-point[0].y)*(y1-point[0].y));
    while(i<5){
        total = sqrt((x1-arryx[i])*(x1-arryx[i]) + (y1-arryy[i])*(y1-arryy[i]));
      if(total<min)
          min=total;
        i++;
    }
 
    printf("%d",min);
    return 0;
}
