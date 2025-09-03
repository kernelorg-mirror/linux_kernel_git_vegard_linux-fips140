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

/*
 * crypto/cryptd.c
 */
#if !IS_BUILTIN(CONFIG_CRYPTO_CRYPTD)

#include <crypto/cryptd.h>

DEFINE_CRYPTO_API_STUB(cryptd_alloc_skcipher);
DEFINE_CRYPTO_API_STUB(cryptd_skcipher_child);
DEFINE_CRYPTO_API_STUB(cryptd_skcipher_queued);
DEFINE_CRYPTO_API_STUB(cryptd_free_skcipher);
DEFINE_CRYPTO_API_STUB(cryptd_alloc_ahash);
DEFINE_CRYPTO_API_STUB(cryptd_ahash_child);
DEFINE_CRYPTO_API_STUB(cryptd_shash_desc);
DEFINE_CRYPTO_API_STUB(cryptd_ahash_queued);
DEFINE_CRYPTO_API_STUB(cryptd_free_ahash);
DEFINE_CRYPTO_API_STUB(cryptd_alloc_aead);
DEFINE_CRYPTO_API_STUB(cryptd_aead_child);
DEFINE_CRYPTO_API_STUB(cryptd_aead_queued);
DEFINE_CRYPTO_API_STUB(cryptd_free_aead);

#endif

/*
 * crypto/dh_helper.c
 */
#if !IS_BUILTIN(CONFIG_CRYPTO_DH)

#include <crypto/dh.h>

DEFINE_CRYPTO_API_STUB(crypto_dh_key_len);
DEFINE_CRYPTO_API_STUB(crypto_dh_encode_key);
DEFINE_CRYPTO_API_STUB(crypto_dh_decode_key);

#endif

/*
 * crypto/ecc.c
 */
#if !IS_BUILTIN(CONFIG_CRYPTO_ECC)

#include <crypto/ecc_curve.h>

DEFINE_CRYPTO_API_STUB(ecc_get_curve);
DEFINE_CRYPTO_API_STUB(ecc_get_curve25519);

#include <crypto/internal/ecc.h>

DEFINE_CRYPTO_API_STUB(ecc_digits_from_bytes);
DEFINE_CRYPTO_API_STUB(ecc_is_key_valid);
DEFINE_CRYPTO_API_STUB(ecc_gen_privkey);
DEFINE_CRYPTO_API_STUB(ecc_make_pub_key);
DEFINE_CRYPTO_API_STUB(crypto_ecdh_shared_secret);
DEFINE_CRYPTO_API_STUB(ecc_is_pubkey_valid_partial);
DEFINE_CRYPTO_API_STUB(ecc_is_pubkey_valid_full);
DEFINE_CRYPTO_API_STUB(vli_is_zero);
DEFINE_CRYPTO_API_STUB(vli_cmp);
DEFINE_CRYPTO_API_STUB(vli_sub);
DEFINE_CRYPTO_API_STUB(vli_from_be64);
DEFINE_CRYPTO_API_STUB(vli_from_le64);
DEFINE_CRYPTO_API_STUB(vli_mod_inv);
DEFINE_CRYPTO_API_STUB(vli_mod_mult_slow);
DEFINE_CRYPTO_API_STUB(vli_num_bits);
DEFINE_CRYPTO_API_STUB(ecc_alloc_point);
DEFINE_CRYPTO_API_STUB(ecc_free_point);
DEFINE_CRYPTO_API_STUB(ecc_point_is_zero);
DEFINE_CRYPTO_API_STUB(ecc_point_mult_shamir);

#endif

/*
 * crypto/ecdh_helper.c
 */
#if !IS_BUILTIN(CONFIG_CRYPTO_ECDH)

#include <crypto/ecdh.h>

DEFINE_CRYPTO_API_STUB(crypto_ecdh_key_len);
DEFINE_CRYPTO_API_STUB(crypto_ecdh_encode_key);
DEFINE_CRYPTO_API_STUB(crypto_ecdh_decode_key);

#endif

/*
 * crypto/geniv.c
 */
#if !IS_BUILTIN(CONFIG_CRYPTO_GENIV)

#include <crypto/internal/geniv.h>

DEFINE_CRYPTO_API_STUB(aead_geniv_alloc);
DEFINE_CRYPTO_API_STUB(aead_init_geniv);
DEFINE_CRYPTO_API_STUB(aead_exit_geniv);

#endif

/*
 * crypto/kpp.c
 */
#if !IS_BUILTIN(CONFIG_CRYPTO_KPP2)

#include <crypto/kpp.h>

DEFINE_CRYPTO_API_STUB(crypto_alloc_kpp);
DEFINE_CRYPTO_API_STUB(crypto_has_kpp);

#include <crypto/internal/kpp.h>

DEFINE_CRYPTO_API_STUB(crypto_register_kpp);
DEFINE_CRYPTO_API_STUB(crypto_unregister_kpp);
DEFINE_CRYPTO_API_STUB(kpp_register_instance);
DEFINE_CRYPTO_API_STUB(crypto_grab_kpp);

#endif

/*
 * crypto/lskcipher.c
 */
#if !IS_BUILTIN(CONFIG_CRYPTO_SKCIPHER2)

#include <crypto/skcipher.h>

DEFINE_CRYPTO_API_STUB(crypto_alloc_lskcipher);
DEFINE_CRYPTO_API_STUB(crypto_lskcipher_setkey);
DEFINE_CRYPTO_API_STUB(crypto_lskcipher_encrypt);
DEFINE_CRYPTO_API_STUB(crypto_lskcipher_decrypt);

#include <crypto/internal/skcipher.h>

DEFINE_CRYPTO_API_STUB(crypto_grab_lskcipher);
DEFINE_CRYPTO_API_STUB(crypto_register_lskcipher);
DEFINE_CRYPTO_API_STUB(crypto_unregister_lskcipher);
DEFINE_CRYPTO_API_STUB(crypto_register_lskciphers);
DEFINE_CRYPTO_API_STUB(crypto_unregister_lskciphers);
DEFINE_CRYPTO_API_STUB(lskcipher_register_instance);
DEFINE_CRYPTO_API_STUB(lskcipher_alloc_instance_simple);

#endif

/*
 * crypto/rng.c
 */
#if !IS_BUILTIN(CONFIG_CRYPTO_RNG2)

#include <crypto/rng.h>

DEFINE_CRYPTO_API_STUB(crypto_get_default_rng);
DEFINE_CRYPTO_API_STUB(crypto_put_default_rng);
DEFINE_CRYPTO_API_STUB(crypto_alloc_rng);
DEFINE_CRYPTO_API_STUB(crypto_rng_reset);

#include <crypto/internal/rng.h>

DEFINE_CRYPTO_API_STUB(crypto_register_rng);
DEFINE_CRYPTO_API_STUB(crypto_unregister_rng);
DEFINE_CRYPTO_API_STUB(crypto_register_rngs);
DEFINE_CRYPTO_API_STUB(crypto_unregister_rngs);
DEFINE_CRYPTO_API_STUB(crypto_del_default_rng);

#endif

/*
 * crypto/rsa_helper.c
 */
#if !IS_BUILTIN(CONFIG_CRYPTO_RSA)

#include <crypto/internal/rsa.h>

DEFINE_CRYPTO_API_STUB(rsa_parse_pub_key);
DEFINE_CRYPTO_API_STUB(rsa_parse_priv_key);

#endif

/*
 * crypto/sha3_generic.c
 */
#if !IS_BUILTIN(CONFIG_CRYPTO_SHA3)

#include <crypto/sha3.h>

DEFINE_CRYPTO_API_STUB(crypto_sha3_init);

#endif

/*
 * crypto/shash.c
 */
#if !IS_BUILTIN(CONFIG_CRYPTO_HASH2)

#include <crypto/hash.h>

DEFINE_CRYPTO_API_STUB(crypto_alloc_shash);
DEFINE_CRYPTO_API_STUB(crypto_clone_shash);
DEFINE_CRYPTO_API_STUB(crypto_has_shash);
DEFINE_CRYPTO_API_STUB(crypto_shash_setkey);
DEFINE_CRYPTO_API_STUB(crypto_shash_digest);
DEFINE_CRYPTO_API_STUB(crypto_shash_tfm_digest);
DEFINE_CRYPTO_API_STUB(crypto_shash_export);
DEFINE_CRYPTO_API_STUB(crypto_shash_import);
DEFINE_CRYPTO_API_STUB(crypto_shash_init);
DEFINE_CRYPTO_API_STUB(crypto_shash_finup);

#include <crypto/internal/hash.h>

DEFINE_CRYPTO_API_STUB(crypto_shash_alg_has_setkey);
DEFINE_CRYPTO_API_STUB(crypto_register_shash);
DEFINE_CRYPTO_API_STUB(crypto_unregister_shash);
DEFINE_CRYPTO_API_STUB(crypto_register_shashes);
DEFINE_CRYPTO_API_STUB(crypto_unregister_shashes);
DEFINE_CRYPTO_API_STUB(shash_register_instance);
DEFINE_CRYPTO_API_STUB(shash_free_singlespawn_instance);
DEFINE_CRYPTO_API_STUB(crypto_grab_shash);
DEFINE_CRYPTO_API_STUB(crypto_shash_export_core);
DEFINE_CRYPTO_API_STUB(crypto_shash_import_core);

#endif

/*
 * crypto/sig.c
 */
#if !IS_BUILTIN(CONFIG_CRYPTO_SIG2)

#include <crypto/sig.h>

DEFINE_CRYPTO_API_STUB(crypto_alloc_sig);

#include <crypto/internal/sig.h>

DEFINE_CRYPTO_API_STUB(crypto_register_sig);
DEFINE_CRYPTO_API_STUB(crypto_unregister_sig);
DEFINE_CRYPTO_API_STUB(sig_register_instance);
DEFINE_CRYPTO_API_STUB(crypto_grab_sig);

#endif

/*
 * crypto/simd.c
 */
#if !IS_BUILTIN(CONFIG_CRYPTO_SIMD)

#include <crypto/internal/simd.h>

DEFINE_CRYPTO_API_STUB(simd_skcipher_create_compat);
DEFINE_CRYPTO_API_STUB(simd_skcipher_free);
DEFINE_CRYPTO_API_STUB(simd_register_skciphers_compat);
DEFINE_CRYPTO_API_STUB(simd_unregister_skciphers);
DEFINE_CRYPTO_API_STUB(simd_register_aeads_compat);
DEFINE_CRYPTO_API_STUB(simd_unregister_aeads);

#endif

/*
 * crypto/skcipher.c
 */
#if !IS_BUILTIN(CONFIG_CRYPTO_SKCIPHER2)

#include <crypto/skcipher.h>

DEFINE_CRYPTO_API_STUB(crypto_alloc_skcipher);
DEFINE_CRYPTO_API_STUB(crypto_alloc_sync_skcipher);
DEFINE_CRYPTO_API_STUB(crypto_has_skcipher);
DEFINE_CRYPTO_API_STUB(crypto_skcipher_setkey);
DEFINE_CRYPTO_API_STUB(crypto_skcipher_encrypt);
DEFINE_CRYPTO_API_STUB(crypto_skcipher_decrypt);
DEFINE_CRYPTO_API_STUB(crypto_skcipher_export);
DEFINE_CRYPTO_API_STUB(crypto_skcipher_import);

#include <crypto/internal/skcipher.h>

DEFINE_CRYPTO_API_STUB(crypto_grab_skcipher);
DEFINE_CRYPTO_API_STUB(crypto_register_skcipher);
DEFINE_CRYPTO_API_STUB(crypto_unregister_skcipher);
DEFINE_CRYPTO_API_STUB(crypto_register_skciphers);
DEFINE_CRYPTO_API_STUB(crypto_unregister_skciphers);
DEFINE_CRYPTO_API_STUB(skcipher_register_instance);
DEFINE_CRYPTO_API_STUB(skcipher_walk_virt);
DEFINE_CRYPTO_API_STUB(skcipher_walk_aead_encrypt);
DEFINE_CRYPTO_API_STUB(skcipher_walk_aead_decrypt);
DEFINE_CRYPTO_API_STUB(skcipher_alloc_instance_simple);

#endif

/*
 * crypto/testmgr.c
 */
#if !IS_BUILTIN(CONFIG_CRYPTO_MANAGER2)

#include <crypto/internal.h>

DEFINE_CRYPTO_API_STUB(alg_test);

#endif

