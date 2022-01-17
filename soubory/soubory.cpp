#include <stdio.h>

int main(void) {

	FILE* soubor = fopen("pokus.txt", "w");
	if (soubor == NULL) {
		printf("chyba: Soubor nelze otevrit pro zapis.\n");
		return 1;
	}
	fprintf(soubor, "ahoj svete\n");
	if (fclose(soubor) == EOF) {
		printf("chyba: soubor se nepodarilo otevrit.\n");
		return 1;
	}
	return (0);
}