//szószámláló c-ben

#include <stdio.h>

int main(int argc, char **argv) {
	FILE* my_file;
	char str[88];
	int szoszam=0;
	my_file = fopen(argv[1], "r");
	
	if(!my_file) {
		perror("Hiba a fajl megnyitasakkor!");
		return -1;
	}

	while (!feof(my_file)) { //karakterenként fájl végéig
		fscanf(my_file,"%s",str);
		++szoszam;

	}
	printf("Szavak szama: %d\n", szoszam);
	fclose(my_file);
	return 0;
}
