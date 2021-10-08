# include<stdio.h>
# include<stdlib.h>

int main(){
	FILE *source, *destination;
	char filename[100], c;
	printf("Enter Source File: ");
	scanf("%s", filename);
	source = fopen(filename, "r");
	if(source==NULL){
		printf("Error!! Cannot open file %s\n", filename);
		exit(0);
	}
	printf("Enter Destination File: ");
	scanf("%s", filename);
	destination = fopen(filename, "w");
	if(destination==NULL){
		printf("Error!! Cannot open file %s\n", filename);
		exit(0);
	}
	c = fgetc(source);
	while(c != EOF){
		fputc(c, destination);
		c = fgetc(source);
	}
	printf("Everything Copied Succesfully to %s", filename);
	fclose(source);
	fclose(destination);
	return 0;
}