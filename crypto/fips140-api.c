// SPDX-License-Identifier: GPL-2.0-or-later

/*
 * Define static call keys for any functions which are part of the crypto
 * API and used by the standalone FIPS module but which are not built into
 * vmlinux.
 */

/*
 * lib/crypto/aes.c
 */
#if !IS_BUILTIN(CONFIG_CRYPTO_LIB_AES)

#include <crypto/aes.h>

DEFINE_CRYPTO_API_STUB(aes_expandkey);
DEFINE_CRYPTO_API_STUB(aes_encrypt);
DEFINE_CRYPTO_API_STUB(aes_decrypt);

#endif

/*
 * lib/crypto/aesgcm.c
 */
#if !IS_BUILTIN(CONFIG_CRYPTO_LIB_AESGCM)

#include <crypto/gcm.h>

DEFINE_CRYPTO_API_STUB(aesgcm_expandkey);
DEFINE_CRYPTO_API_STUB(aesgcm_encrypt);
DEFINE_CRYPTO_API_STUB(aesgcm_decrypt);

#endif

/*
 * lib/crypto/gf128mul.c
 */
#if !IS_BUILTIN(CONFIG_CRYPTO_LIB_GF128MUL)

#include <crypto/gf128mul.h>

DEFINE_CRYPTO_API_STUB(gf128mul_lle);
DEFINE_CRYPTO_API_STUB(gf128mul_init_4k_lle);
DEFINE_CRYPTO_API_STUB(gf128mul_4k_lle);
DEFINE_CRYPTO_API_STUB(gf128mul_x8_ble);
DEFINE_CRYPTO_API_STUB(gf128mul_init_64k_bbe);
DEFINE_CRYPTO_API_STUB(gf128mul_free_64k);
DEFINE_CRYPTO_API_STUB(gf128mul_64k_bbe);

#endif

/*
 * lib/crypto/memneq.c
 */
#if !IS_BUILTIN(CONFIG_CRYPTO_LIB_UTILS)

#include <crypto/utils.h>

DEFINE_CRYPTO_API_STUB(__crypto_memneq);

#endif

