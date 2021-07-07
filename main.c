/* Playing around with haval hashing algorithm
 *
 * Compile: gcc -o havaldemo main.c haval.c
 * Run: ./havaldemo
 */
#include <stdlib.h>
#include <stdio.h>
#include "sph_types.h"
#include "sph_haval.h"

int main(void) {
  sph_haval_context *ctx;

  char data[] = "test";     // the data to hash
  char out[128];            // the final output

  ctx = (sph_haval_context *) malloc(sizeof(sph_haval_context));
  sph_haval128_3_init(ctx);
  sph_haval128_3(ctx, data, sizeof(data) * sizeof(char));
  sph_haval128_3_close(ctx, out);
  free(ctx);

  printf("%s\n", out);

  return 0;
}

