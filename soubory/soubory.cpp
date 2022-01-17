#include <stdio.h>

int main(void) {

	FILE* soubor = fopen("pokus.txt", "w");
	if (soubor == NULL) {
		printf("chyba: Soubor nelze otevrit pro zapis.\n");
		return 1;
	}
}