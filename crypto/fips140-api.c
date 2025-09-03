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

