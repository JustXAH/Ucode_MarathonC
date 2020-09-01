/*
 *#include <stdio.h>
 *#include <string.h>
 */

int mx_strncmp(const char *s1, const char *s2, int n) {
    int i = 0;

    while ((s1[i] == s2[i]) && (i < n - 1)) {
		if (s1[i] == '\0' && s2[i] == '\0') 
			return 0;
		i++;
	}
	return (const unsigned char)s1[i] - (const unsigned char)s2[i];
}
/*
 *int main() {
 *    const char *s1 = "00005";
 *    const char *s2 = "000011";
 *    printf("%d\n", strncmp(s1, s2, 6));
 *    printf("%d", mx_strncmp(s1, s2, 6));
 *}
 */
