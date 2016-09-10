@CODE_COVERAGE_RULES@
includedir=$(prefix)/include/ucrypt/
lib_LTLIBRARIES=libucrypt.la
include_HEADERS=sha256.h ecies.h aes.h
libucrypt_la_SOURCES=sha256.c ecies.c aes/aes128_dec.c aes/aes128_enc.c aes/aes192_enc.c aes/aes192_dec.c aes/aes256_enc.c aes/aes256_dec.c aes/aes_dec.c aes/aes_enc.c aes/aes_invsbox.c aes/aes_keyschedule.c aes/aes_sbox.c aes/gf256mul.c
libucrypt_la_CFLAGS=$(CODE_COVERAGE_CFLAGS) -std=gnu99 -Wall -Werror
