##include <stdio.h>
#include <math.h>

int main() {
	float delta = (8*M_PI)/81;
	float variable_x = 0;
	float y = 0;
	FILE *archivo1;
	
	archivo1 = fopen("TP7-1.txt", "w");
	if(archivo1 == NULL){
		printf("Error");
		return -1;
	}
	
	for (int i=0; i<81; i++){
		
		y = pow(sin(variable_x),2);
		
		fprintf (archivo1,"\n Los valores de son: %f,\t%f", y, variable_x);
		//printf ("\n Los valores de x son: %f", variable_x);
		
		variable_x=delta++;
	}
	fclose(archivo1);
	return 0;
}

}

