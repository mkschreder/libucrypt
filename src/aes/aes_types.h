/*
	This file is part of martink project.
	
	Implementation by Daniel Otte (daniel.otte@rub.de) Copyright (C) 2008  

	martink firmware project is free software: you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation, either version 3 of the License, or
	(at your option) any later version.

	martink firmware is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with martink firmware.  If not, see <http://www.gnu.org/licenses/>.

	LibK project on github: https://github.com/mkschreder
*/
/**
 * \file     aes_types.h
 * \email    daniel.otte@rub.de
 * \author   Daniel Otte
 * \date     2008-12-30
 * \license  GPLv3 or later
 *
 */
#ifndef AES_TYPES_H_
#define AES_TYPES_H_

#include <stdint.h>

typedef struct{
	uint8_t ks[16];
} aes_roundkey_t;

typedef struct{
	aes_roundkey_t key[10+1];
} aes128_ctx_t;

typedef struct{
	aes_roundkey_t key[12+1];
} aes192_ctx_t;

typedef struct{
	aes_roundkey_t key[14+1];
} aes256_ctx_t;

typedef struct{
	//aes_roundkey_t key[1]; // removed due to static analysis warning
	aes_roundkey_t key[14+1]; /* just to avoid the warning */
} aes_genctx_t;

typedef struct{
	uint8_t s[16];
} aes_cipher_state_t;

#define AES_BLOCK_SIZE 16

#endif
