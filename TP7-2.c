#include <stdio.h>
#include <math.h>

int main() {
	float delta = (8*M_PI)/81;
	float variable_x = 0;
	float y1 = 0;
	float x2[81]={0}, y2[81]={0}, derivada[81]={0}, dx= 0.000001;
	char espacio;
	FILE *archivo3;
	archivo3 = fopen("TP7-3-1.txt", "w");
	FILE *archivo4;
	archivo4 = fopen("TP7-3-2.txt", "w");
	if(archivo3 == NULL){
		printf("Error");
		return -1;
	}
	for (int i=0; i<81; i++){
		y1 = sin(4*variable_x);
		fprintf (archivo3,"%f %f\n", y1, variable_x);
		variable_x=delta++;
	}
	fclose(archivo3);
	
	archivo3 = fopen("TP7-3-1.txt", "r");
	for(int i=0; i<81; i++){
		fscanf(archivo3, "%f", &y2[i]);
		fscanf(archivo3, "%c", &espacio);
		fscanf(archivo3, "%f", &x2[i]);
	}
	for (int i=0; i<81; i++){
		derivada[i] = (((sin(4*(x2[i]+dx)))-y2[i])/dx);
		fprintf(archivo4, "%f,%f,%f \n", x2[i], y2[i], derivada[i]);
	}
	fclose(archivo4);
	return 0;
}



	
	
	

