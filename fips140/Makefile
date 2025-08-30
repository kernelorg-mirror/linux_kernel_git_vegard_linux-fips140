# SPDX-License-Identifier: GPL-2.0-only
#
# Copyright (C) 2014 Linaro Ltd <ard.biesheuvel@linaro.org>
# Copyright © 2025, Oracle and/or its affiliates.
#

#
# Global options
#

# make sure both .c and .S files see this
subdir-ccflags-y += -DFIPS_MODULE=1
subdir-asflags-y += -DFIPS_MODULE=1

#
# Glue
#

fips140-y := fips140-glue.o

#
# crypto/Makefile
#

fips140-y += crypto/algapi.o
fips140-y += crypto/api.o
fips140-y += crypto/ahash.o
fips140-y += crypto/cryptd.o
fips140-y += crypto/shash.o
fips140-y += crypto/proc.o

# cryptomgr.ko
fips140-y += crypto/algboss.o crypto/testmgr.o

fips140-$(CONFIG_CRYPTO_FIPS140_SHA3) += crypto/sha3_generic.o

# jitterentropy_rng.ko
CFLAGS_crypto/jitterentropy.o = -O0
KASAN_SANITIZE_crypto/jitterentropy.o = n
UBSAN_SANITIZE_crypto/jitterentropy.o = n
fips140-$(CONFIG_CRYPTO_FIPS140_JITTERENTROPY) += crypto/jitterentropy.o crypto/jitterentropy-kcapi.o

fips140-$(CONFIG_CRYPTO_FIPS140_SHA512) += crypto/sha512.o

fips140-$(CONFIG_CRYPTO_FIPS140_PCRYPT) += crypto/pcrypt.o
fips140-y += crypto/ghash-generic.o

# crypto_simd.ko
fips140-y += crypto/simd.o

fips140-$(CONFIG_CRYPTO_FIPS140_HMAC) += crypto/hmac.o
fips140-y += crypto/authenc.o
fips140-y += crypto/authencesn.o

# rsa_generic.ko
fips140-$(CONFIG_CRYPTO_FIPS140_RSA) += $(addprefix crypto/, \
	rsapubkey.asn1.o \
	rsaprivkey.asn1.o \
	rsa.o \
	rsa_helper.o \
	rsa-pkcs1pad.o \
	rsassa-pkcs1.o \
)

fips140-$(CONFIG_CRYPTO_FIPS140_SHA256) += crypto/sha256.o

fips140-$(CONFIG_CRYPTO_FIPS140_CMAC) += crypto/cmac.o
fips140-$(CONFIG_CRYPTO_FIPS140_AES) += crypto/aes_generic.o
fips140-$(CONFIG_CRYPTO_FIPS140_CBC) += crypto/cbc.o
fips140-$(CONFIG_CRYPTO_FIPS140_CCM) += crypto/ccm.o
fips140-$(CONFIG_CRYPTO_FIPS140_ECB) += crypto/ecb.o
fips140-$(CONFIG_CRYPTO_FIPS140_CTR) += crypto/ctr.o
fips140-$(CONFIG_CRYPTO_FIPS140_ECC) += crypto/ecc.o
fips140-y += crypto/drbg.o

fips140-$(CONFIG_CRYPTO_FIPS140_ECDH) += $(addprefix crypto/, \
	ecdh.o \
	ecdh_helper.o \
)

# ecdsa_generic.ko
$(obj)/crypto/ecdsasignature.asn1.o: $(obj)/crypto/ecdsasignature.asn1.c $(obj)/crypto/ecdsasignature.asn1.h
$(obj)/crypto/ecdsa.o: $(obj)/crypto/ecdsasignature.asn1.h
fips140-$(CONFIG_CRYPTO_FIPS140_ECDSA) += $(addprefix crypto/, \
	ecdsa.o \
	ecdsa-x962.o \
	ecdsa-p1363.o \
	ecdsasignature.asn1.o \
)

# dh_generic.ko
fips140-$(CONFIG_CRYPTO_FIPS140_DH) += $(addprefix crypto/, \
	dh.o \
	dh_helper.o \
)

fips140-$(CONFIG_CRYPTO_FIPS140_GCM) += crypto/gcm.o
fips140-$(CRYPTO_FIPS140_XTS) += crypto/xts.o
fips140-y += crypto/tcrypt.o

fips140-y += crypto/aead.o
fips140-y += crypto/kpp.o
fips140-y += crypto/cipher.o
fips140-y += crypto/akcipher.o
fips140-y += crypto/skcipher.o
fips140-y += crypto/lskcipher.o
fips140-y += crypto/rng.o
fips140-y += crypto/sig.o
fips140-$(CONFIG_CRYPTO_FIPS140_GENIV) += crypto/geniv.o
fips140-$(CONFIG_CRYPTO_FIPS140_SEQIV) += crypto/seqiv.o
fips140-$(CONFIG_CRYPTO_FIPS140_ECHAINIV) += crypto/echainiv.o
fips140-$(CONFIG_CRYPTO_FIPS140_ESSIV) += crypto/essiv.o

#
# crypto/asymmetric_keys/Makefile
#

fips140-$(CONFIG_FIPS140_ASYMMETRIC_KEY_TYPE) += \
	$(addprefix crypto/asymmetric_keys/, \
		asymmetric_type.o restrict.o signature.o)

fips140-$(CONFIG_FIPS140_ASYMMETRIC_PUBLIC_KEY_SUBTYPE) += crypto/asymmetric_keys/public_key.o

$(obj)/crypto/asymmetric_keys/x509_cert_parser.o: \
	$(addprefix $(obj)/crypto/asymmetric_keys/, \
		x509.asn1.h x509_akid.asn1.h)
$(obj)/crypto/asymmetric_keys/x509.asn1.o: \
	$(addprefix $(obj)/crypto/asymmetric_keys/, \
		x509.asn1.c x509.asn1.h)
$(obj)/crypto/asymmetric_keys/x509_akid.asn1.o: \
	$(addprefix $(obj)/crypto/asymmetric_keys/, \
		x509_akid.asn1.c x509_akid.asn1.h)

fips140-$(CONFIG_FIPS140_X509_CERTIFICATE_PARSER) += \
	$(addprefix crypto/asymmetric_keys/, \
		x509_cert_parser.o \
		x509_loader.o \
		x509_akid.asn1.o \
		x509.asn1.o \
		x509_public_key.o \
	)

$(obj)/crypto/asymmetric_keys/pkcs8_parser.o: $(obj)/crypto/asymmetric_keys/pkcs8.asn1.h
$(obj)/crypto/asymmetric_keys/pkcs8-asn1.o: \
	$(addprefix $(obj)/crypto/asymmetric_keys/, \
		pkcs8.asn1.c pkcs8.asn1.h)

fips140-$(CONFIG_FIPS140_PKCS8_PRIVATE_KEY_PARSER) += \
	$(addprefix crypto/asymmetric_keys/, \
		pkcs8_parser.o \
		pkcs8.asn1.o \
	)

fips140-$(CONFIG_FIPS140_PKCS7_MESSAGE_PARSER) += \
	$(addprefix crypto/asymmetric_keys/, \
		pkcs7_parser.o \
		pkcs7_trust.o \
		pkcs7_verify.o \
		pkcs7_key_type.o \
		pkcs7.asn1.o \
	)

$(obj)/crypto/asymmetric_keys/pkcs7_parser.o: $(obj)/crypto/asymmetric_keys/pkcs7.asn1.h
$(obj)/crypto/asymmetric_keys/pkcs7.asn1.o: \
	$(addprefix $(obj)/crypto/asymmetric_keys/, \
		pkcs7.asn1.c pkcs7.asn1.h)

#
# lib/crypto/Makefile
#

fips140-y += lib/crypto/aes.o
fips140-y += lib/crypto/aesgcm.o
fips140-y += lib/crypto/sha256.o
fips140-y += lib/crypto/sha512.o
fips140-y += lib/crypto/gf128mul.o
fips140-y += lib/crypto/memneq.o
fips140-y += lib/crypto/utils.o

# Use custom linker script to collect initcalls
LDFLAGS_fips140.o += -T $(src)/fips140.lds

obj-m += fips140.o
