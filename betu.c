//betuszamlalo c-ben

#include <stdio.h>
#include <ctype.h>

int main(int argc, char **argv) {
	FILE* my_file;
	char ch;
	int betu=0;
	my_file = fopen(argv[1], "r");
	
	if(!my_file) {
		perror("Hiba a fajl megnyitasakkor!");
		return -1;
	}

	while ((ch=getc(my_file)) != EOF) { //karakterenként fájl végéig
		if (isalpha(ch))
			++betu;
	}
	printf("A betuk szama: %d\n", betu);
	fclose(my_file);
	return 0;
}