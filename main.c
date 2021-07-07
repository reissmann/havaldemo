#include <stdlib.h>
#include <stdio.h>
#include "sph_types.h"
#include "sph_haval.h"

int main(void) {
  sph_haval_context *ctx;
	char data[] = "test";
	char out[128];

	ctx = (sph_haval_context *) malloc(sizeof(sph_haval_context));
	sph_haval128_3_init(ctx);
	sph_haval128_3(ctx, data, sizeof(data) * sizeof(char));
  sph_haval128_3_close(ctx, out);

	printf("%s\n", out);
	return 0;
}

