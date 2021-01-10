#include <stdio.h>
#include <string.h>
#include <unistd.h>

int mx_strlen(const char *s) {
	int count = 0;
	char c = s[0];
	while (c != '\0') {
		count++;
		c = s[count];
	}
	return count;
}
