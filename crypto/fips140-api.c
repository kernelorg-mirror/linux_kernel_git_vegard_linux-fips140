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

/*
 * lib/crypto/utils.c
 */
#if !IS_BUILTIN(CONFIG_CRYPTO_LIB_UTILS)

#include <crypto/utils.h>

DEFINE_CRYPTO_API_STUB(__crypto_xor);

#endif

/*
 * crypto/aead.c
 */
#if !IS_BUILTIN(CONFIG_CRYPTO_AEAD2)

#include <crypto/aead.h>

DEFINE_CRYPTO_API_STUB(crypto_alloc_aead);
DEFINE_CRYPTO_API_STUB(crypto_has_aead);
DEFINE_CRYPTO_API_STUB(crypto_aead_setkey);
DEFINE_CRYPTO_API_STUB(crypto_aead_setauthsize);
DEFINE_CRYPTO_API_STUB(crypto_aead_encrypt);
DEFINE_CRYPTO_API_STUB(crypto_aead_decrypt);

#include <crypto/internal/aead.h>

DEFINE_CRYPTO_API_STUB(crypto_grab_aead);
DEFINE_CRYPTO_API_STUB(crypto_register_aead);
DEFINE_CRYPTO_API_STUB(crypto_unregister_aead);
DEFINE_CRYPTO_API_STUB(crypto_register_aeads);
DEFINE_CRYPTO_API_STUB(crypto_unregister_aeads);
DEFINE_CRYPTO_API_STUB(aead_register_instance);

#endif

/*
 * crypto/aes_generic.c
 */
#if !IS_BUILTIN(CONFIG_CRYPTO_AES)

#include <crypto/aes.h>

DEFINE_CRYPTO_API_STUB(crypto_aes_set_key);

#endif

/*
 * crypto/ahash.c
 */
#if !IS_BUILTIN(CONFIG_CRYPTO_HASH2)

#include <crypto/internal/hash.h>

DEFINE_CRYPTO_API_STUB(crypto_hash_walk_done);
DEFINE_CRYPTO_API_STUB(crypto_hash_walk_first);
DEFINE_CRYPTO_API_STUB(crypto_register_ahash);
DEFINE_CRYPTO_API_STUB(crypto_unregister_ahash);
DEFINE_CRYPTO_API_STUB(crypto_register_ahashes);
DEFINE_CRYPTO_API_STUB(crypto_unregister_ahashes);
DEFINE_CRYPTO_API_STUB(ahash_register_instance);
DEFINE_CRYPTO_API_STUB(ahash_free_singlespawn_instance);
DEFINE_CRYPTO_API_STUB(crypto_hash_alg_has_setkey);
DEFINE_CRYPTO_API_STUB(crypto_grab_ahash);
DEFINE_CRYPTO_API_STUB(shash_ahash_update);
DEFINE_CRYPTO_API_STUB(shash_ahash_finup);
DEFINE_CRYPTO_API_STUB(shash_ahash_digest);
DEFINE_CRYPTO_API_STUB(crypto_ahash_export_core);
DEFINE_CRYPTO_API_STUB(crypto_ahash_import_core);

#include <crypto/hash.h>

DEFINE_CRYPTO_API_STUB(crypto_alloc_ahash);
DEFINE_CRYPTO_API_STUB(crypto_clone_ahash);
DEFINE_CRYPTO_API_STUB(crypto_has_ahash);
DEFINE_CRYPTO_API_STUB(crypto_ahash_setkey);
DEFINE_CRYPTO_API_STUB(crypto_ahash_finup);
DEFINE_CRYPTO_API_STUB(crypto_ahash_digest);
DEFINE_CRYPTO_API_STUB(crypto_ahash_export);
DEFINE_CRYPTO_API_STUB(crypto_ahash_import);
DEFINE_CRYPTO_API_STUB(crypto_ahash_init);
DEFINE_CRYPTO_API_STUB(crypto_ahash_update);
DEFINE_CRYPTO_API_STUB(ahash_request_free);
DEFINE_CRYPTO_API_STUB(crypto_hash_digest);

#endif

/*
 * crypto/akcipher.c
 */
#if !IS_BUILTIN(CONFIG_CRYPTO_AKCIPHER2)

#include <crypto/akcipher.h>

DEFINE_CRYPTO_API_STUB(crypto_alloc_akcipher);
DEFINE_CRYPTO_API_STUB(crypto_akcipher_sync_encrypt);
DEFINE_CRYPTO_API_STUB(crypto_akcipher_sync_decrypt);

#include <crypto/internal/akcipher.h>

DEFINE_CRYPTO_API_STUB(crypto_grab_akcipher);
DEFINE_CRYPTO_API_STUB(crypto_register_akcipher);
DEFINE_CRYPTO_API_STUB(crypto_unregister_akcipher);
DEFINE_CRYPTO_API_STUB(akcipher_register_instance);

#endif

/*
 * crypto/algapi.c
 */
#if !IS_BUILTIN(CONFIG_CRYPTO_ALGAPI2)

#include <crypto/algapi.h>

DEFINE_CRYPTO_API_STUB(crypto_register_alg);
DEFINE_CRYPTO_API_STUB(crypto_unregister_alg);
DEFINE_CRYPTO_API_STUB(crypto_register_algs);
DEFINE_CRYPTO_API_STUB(crypto_unregister_algs);
DEFINE_CRYPTO_API_STUB(crypto_register_template);
DEFINE_CRYPTO_API_STUB(crypto_register_templates);
DEFINE_CRYPTO_API_STUB(crypto_unregister_template);
DEFINE_CRYPTO_API_STUB(crypto_unregister_templates);
DEFINE_CRYPTO_API_STUB(crypto_lookup_template);
DEFINE_CRYPTO_API_STUB(crypto_register_instance);
DEFINE_CRYPTO_API_STUB(crypto_unregister_instance);
DEFINE_CRYPTO_API_STUB(crypto_grab_spawn);
DEFINE_CRYPTO_API_STUB(crypto_drop_spawn);
DEFINE_CRYPTO_API_STUB(crypto_spawn_tfm);
DEFINE_CRYPTO_API_STUB(crypto_spawn_tfm2);
DEFINE_CRYPTO_API_STUB(crypto_get_attr_type);
DEFINE_CRYPTO_API_STUB(crypto_check_attr_type);
DEFINE_CRYPTO_API_STUB(crypto_attr_alg_name);
DEFINE_CRYPTO_API_STUB(__crypto_inst_setname);
DEFINE_CRYPTO_API_STUB(crypto_init_queue);
DEFINE_CRYPTO_API_STUB(crypto_enqueue_request);
DEFINE_CRYPTO_API_STUB(crypto_enqueue_request_head);
DEFINE_CRYPTO_API_STUB(crypto_dequeue_request);
DEFINE_CRYPTO_API_STUB(crypto_inc);
DEFINE_CRYPTO_API_STUB(crypto_register_notifier);
DEFINE_CRYPTO_API_STUB(crypto_unregister_notifier);

#include <crypto/internal.h>

DEFINE_CRYPTO_API_STUB(crypto_alg_tested);
DEFINE_CRYPTO_API_STUB(crypto_remove_spawns);
DEFINE_CRYPTO_API_STUB(crypto_remove_final);
DEFINE_CRYPTO_API_STUB(crypto_alg_extsize);
DEFINE_CRYPTO_API_STUB(crypto_type_has_alg);

#endif

/*
 * crypto/api.c
 */
#if !IS_BUILTIN(CONFIG_CRYPTO)

#include <linux/crypto.h>

DEFINE_CRYPTO_API_STUB(crypto_req_done);
DEFINE_CRYPTO_API_STUB(crypto_has_alg);
DEFINE_CRYPTO_API_STUB(crypto_alloc_base);
DEFINE_CRYPTO_API_STUB(crypto_destroy_tfm);
DEFINE_CRYPTO_API_STUB(crypto_request_clone);

#include <crypto/algapi.h>

DEFINE_CRYPTO_API_STUB(crypto_mod_put);

#include <crypto/internal.h>

DEFINE_CRYPTO_API_STUB(crypto_mod_get);
DEFINE_CRYPTO_API_STUB(crypto_alg_mod_lookup);
DEFINE_CRYPTO_API_STUB(crypto_larval_alloc);
DEFINE_CRYPTO_API_STUB(crypto_schedule_test);
DEFINE_CRYPTO_API_STUB(crypto_shoot_alg);
DEFINE_CRYPTO_API_STUB(__crypto_alloc_tfmgfp);
DEFINE_CRYPTO_API_STUB(__crypto_alloc_tfm);
DEFINE_CRYPTO_API_STUB(crypto_create_tfm_node);
DEFINE_CRYPTO_API_STUB(crypto_clone_tfm);
DEFINE_CRYPTO_API_STUB(crypto_find_alg);
DEFINE_CRYPTO_API_STUB(crypto_alloc_tfm_node);
DEFINE_CRYPTO_API_STUB(crypto_probing_notify);
DEFINE_CRYPTO_API_STUB(crypto_destroy_alg);

#endif

/*
 * crypto/authenc.c
 */
#if !IS_BUILTIN(CONFIG_CRYPTO_AUTHENC)

#include <crypto/authenc.h>

DEFINE_CRYPTO_API_STUB(crypto_authenc_extractkeys);

#endif

/*
 * crypto/cipher.c
 */
#if !IS_BUILTIN(CONFIG_CRYPTO)

#include <crypto/internal/cipher.h>

DEFINE_CRYPTO_API_STUB(crypto_cipher_setkey);
DEFINE_CRYPTO_API_STUB(crypto_cipher_encrypt_one);
DEFINE_CRYPTO_API_STUB(crypto_cipher_decrypt_one);
DEFINE_CRYPTO_API_STUB(crypto_clone_cipher);

#endif

