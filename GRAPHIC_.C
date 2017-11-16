#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>

void main(){
	int i = 0,gm,gd,k=0,j=750;
	detectgraph(&gd,&gm);
	initgraph(&gd, &gm, "C:\\TC\\BGI");
	while(j > 0){
		for(i = 0; i < 650; i++){
			for(k = 0; k < 650; k++){
				if(i%j == 0 && k%j == 0){
					putpixel(i, k, i);
				}
			}
		}
	j--;
	}
	getch();
}