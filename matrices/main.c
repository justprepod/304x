#include <stdio.h>
#include "matrix.h"

int main(void) {
	TMatrix *m;

	m = mx_identity(3);
	mx_print(m);
	return 0;
}