/*
 *  Quick & Dirty CSV Parser
 *  @author: Jesse Costales
 *  @see: https://www.facebook.com/groups/cprogramming123/posts/4195620680526197/
 *  @see: https://pastebin.com/22Y8NLNa
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
	char buffer[1024];
	char *a, *b, *c;

	while (fgets(buffer, 1024, stdin)) {
		a = buffer;

		while (*a) {

			while (isspace(*a))
				a++;
			if (*a == '"') {
				b = strchr(a + 1, '"');
				c = strchr(b, ',');
			 } else
				c = strchr(a, ',');
	 
			 if (c) {
				 *c = '\0';
				 printf("%s\t", a);
				 a = c + 1;
			} else {
				  printf("%s", a);
				  break;
			 }
		}
	}

	return 0;
}
