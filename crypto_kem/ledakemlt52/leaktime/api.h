#ifndef PQCLEAN_LEDAKEMLT52_LEAKTIME_API_H
#define PQCLEAN_LEDAKEMLT52_LEAKTIME_API_H

#include <stdint.h>

#define PQCLEAN_LEDAKEMLT52_LEAKTIME_CRYPTO_SECRETKEYBYTES  42
#define PQCLEAN_LEDAKEMLT52_LEAKTIME_CRYPTO_PUBLICKEYBYTES  19040
#define PQCLEAN_LEDAKEMLT52_LEAKTIME_CRYPTO_CIPHERTEXTBYTES 19040
#define PQCLEAN_LEDAKEMLT52_LEAKTIME_CRYPTO_BYTES           64

#define PQCLEAN_LEDAKEMLT52_LEAKTIME_CRYPTO_ALGNAME "LEDAKEMLT52"

int PQCLEAN_LEDAKEMLT52_LEAKTIME_crypto_kem_keypair(uint8_t *pk, uint8_t *sk);
int PQCLEAN_LEDAKEMLT52_LEAKTIME_crypto_kem_enc(uint8_t *ct, uint8_t *ss, const uint8_t *pk);
int PQCLEAN_LEDAKEMLT52_LEAKTIME_crypto_kem_dec(uint8_t *ss, const uint8_t *ct, const uint8_t *sk);


#endif
