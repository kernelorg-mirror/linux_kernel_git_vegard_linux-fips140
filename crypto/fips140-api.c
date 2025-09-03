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

/*
 * lib/crypto/sha256.c
 */
#if !IS_BUILTIN(CONFIG_CRYPTO_LIB_SHA256)

#include <crypto/sha2.h>

DEFINE_CRYPTO_API_STUB(__sha256_update);
DEFINE_CRYPTO_API_STUB(__hmac_sha256_init);
DEFINE_CRYPTO_API_STUB(sha224_init);
DEFINE_CRYPTO_API_STUB(sha224_final);
DEFINE_CRYPTO_API_STUB(sha224);
DEFINE_CRYPTO_API_STUB(hmac_sha224_preparekey);
DEFINE_CRYPTO_API_STUB(hmac_sha224_init_usingrawkey);
DEFINE_CRYPTO_API_STUB(hmac_sha224_final);
DEFINE_CRYPTO_API_STUB(hmac_sha224);
DEFINE_CRYPTO_API_STUB(hmac_sha224_usingrawkey);
DEFINE_CRYPTO_API_STUB(sha256_init);
DEFINE_CRYPTO_API_STUB(sha256_final);
DEFINE_CRYPTO_API_STUB(sha256);
DEFINE_CRYPTO_API_STUB(hmac_sha256_preparekey);
DEFINE_CRYPTO_API_STUB(hmac_sha256_init_usingrawkey);
DEFINE_CRYPTO_API_STUB(hmac_sha256_final);
DEFINE_CRYPTO_API_STUB(hmac_sha256);
DEFINE_CRYPTO_API_STUB(hmac_sha256_usingrawkey);

#endif

/*
 * lib/crypto/sha512.c
 */
#if !IS_BUILTIN(CONFIG_CRYPTO_LIB_SHA512)

#include <crypto/sha2.h>

DEFINE_CRYPTO_API_STUB(__sha512_update);
DEFINE_CRYPTO_API_STUB(__hmac_sha512_init);
DEFINE_CRYPTO_API_STUB(sha384_init);
DEFINE_CRYPTO_API_STUB(sha384_final);
DEFINE_CRYPTO_API_STUB(sha384);
DEFINE_CRYPTO_API_STUB(hmac_sha384_preparekey);
DEFINE_CRYPTO_API_STUB(hmac_sha384_init_usingrawkey);
DEFINE_CRYPTO_API_STUB(hmac_sha384_final);
DEFINE_CRYPTO_API_STUB(hmac_sha384);
DEFINE_CRYPTO_API_STUB(hmac_sha384_usingrawkey);
DEFINE_CRYPTO_API_STUB(sha512_init);
DEFINE_CRYPTO_API_STUB(sha512_final);
DEFINE_CRYPTO_API_STUB(sha512);
DEFINE_CRYPTO_API_STUB(hmac_sha512_preparekey);
DEFINE_CRYPTO_API_STUB(hmac_sha512_init_usingrawkey);
DEFINE_CRYPTO_API_STUB(hmac_sha512_final);
DEFINE_CRYPTO_API_STUB(hmac_sha512);
DEFINE_CRYPTO_API_STUB(hmac_sha512_usingrawkey);

#endif

