/*
<:copyright-BRCM:2007:DUAL/GPL:standard

   Copyright (c) 2007 Broadcom Corporation
   All Rights Reserved

This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License, version 2, as published by
the Free Software Foundation (the "GPL").

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.


A copy of the GPL is available at http://www.broadcom.com/licenses/GPLv2.php, or by
writing to the Free Software Foundation, Inc., 59 Temple Place - Suite 330,
Boston, MA 02111-1307, USA.

:>
*/
/***************************************************************************
 * File Name  : 
 *
 * Description: 
 *              
 ***************************************************************************/

#ifndef __SPUDRV_TX_DES3_SHA1_DATA_H__
#define __SPUDRV_TX_DES3_SHA1_DATA_H__

#if defined(CONFIG_BCM_SPU_TEST)
//

// Automatically generated vector file.

//

// Vector format is: {EOP, SOP, PKT_DATA}.

//

// Example vectors:

//     101234567 // EOP = 0, SOP = 1, PKT_DATA = 01234567

//     089abcdef // EOP = 0, SOP = 0, PKT_DATA = 89abcdef

//     213572468 // EOP = 1, SOP = 0, PKT_DATA = 13572468

//

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 80 (0x50) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_sha1_pkt0_tmpl[] = {
    0xb8010050,// 1 CCH   1 

/// ECH cache_idx      : 0x02 

/// ECH pdu_tag        : 0x00 

    0x00020000,// 2 ECH   1 

/// SCX is 19 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound save_icv insert_icv !check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : SHA1 

/// SCX aes_size        : NORMAL_RC4INIT_AES128 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x4 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 40 

    0x00000013,// 3 SCX   1 

    0x80604830,// 4 SCX   2 

    0x00006400,// 5 SCX   3 

    0xf0ce73c9,// 6 SCX   4 

    0xcbe306fc,// 7 SCX   5 

    0x4522f72b,// 8 SCX   6 

    0xf44c7cb9,// 9 SCX   7 

    0xa2e96778,// 10 SCX   8 

    0x7abd27f8,// 11 SCX   9 

    0xed2b6aaf,// 12 SCX  10 

    0xb42d8298,// 13 SCX  11 

    0x0351a08f,// 14 SCX  12 

    0xd2d33276,// 15 SCX  13 

    0x801a6f2c,// 16 SCX  14 

    0xd34f5261,// 17 SCX  15 

    0x51ba3ace,// 18 SCX  16 

    0x90f9886c,// 19 SCX  17 

    0x76c4b48b,// 20 SCX  18 

    0xbd55b020,// 21 SCX  19 

/// BFD is 3 words. 

/// BFD tot_len        : 1645 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 516 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 516 

/// BFD lencrypto      : 56 

/// BFD ofstcrypto     : 308 

/// BFD (ofst+len)cry  : 364 

/// BFD ofstiv         : 12 

/// BFD ofsticv        : 1168 

    0x00000204,// 22 BFD   1 

    0x01340038,// 23 BFD   2 

    0x0490000c,// 24 BFD   3 

/// MFM is 3 words. 

/// MFM vldnibs        : 14 

    0x1400bec3,// 25 MFM   1 

    0x1905f929,// 26 MFM   2 

    0xf6e44eee,// 27 MFM   3 

/// BDA is 413 words. 

/// BDA size     is 1645 (0x66d) 

/// BDA id       is 0xd8ea 

    0x066dd8ea,// 28 BDA   1 

/// PAY Generic Data size   : 1645 byte(s) 

/// PAD Buffer Data Pad size   : 3 byte(s) 

    0x9caaa9d1,// 29 PAY   1 

    0x56560a7d,// 30 PAY   2 

    0xecf9af8d,// 31 PAY   3 

    0x435c473c,// 32 PAY   4 

    0x7cc37371,// 33 PAY   5 

    0xf5a3ae10,// 34 PAY   6 

    0xe4a09d20,// 35 PAY   7 

    0xbf1ca7f5,// 36 PAY   8 

    0xc12575ba,// 37 PAY   9 

    0x41eeb1be,// 38 PAY  10 

    0x8a31985b,// 39 PAY  11 

    0x451fbfdd,// 40 PAY  12 

    0x25d94f67,// 41 PAY  13 

    0xebb2bf6f,// 42 PAY  14 

    0xde846817,// 43 PAY  15 

    0xb77c883f,// 44 PAY  16 

    0x296d1675,// 45 PAY  17 

    0x9b1ac799,// 46 PAY  18 

    0xb0c36c3b,// 47 PAY  19 

    0x8552660b,// 48 PAY  20 

    0xe9b38d10,// 49 PAY  21 

    0xcc1f04f9,// 50 PAY  22 

    0xb7b39b3c,// 51 PAY  23 

    0xab437f85,// 52 PAY  24 

    0xdffc14cd,// 53 PAY  25 

    0x7d5428bc,// 54 PAY  26 

    0xe5b8bd4e,// 55 PAY  27 

    0x4aedc3ea,// 56 PAY  28 

    0xaac9fa9a,// 57 PAY  29 

    0x55cc8e81,// 58 PAY  30 

    0x854fd3b6,// 59 PAY  31 

    0x85d375e6,// 60 PAY  32 

    0x98f10b61,// 61 PAY  33 

    0x467cf6b9,// 62 PAY  34 

    0x553a1338,// 63 PAY  35 

    0x7e6fd9e8,// 64 PAY  36 

    0x4e3f5156,// 65 PAY  37 

    0xca53365b,// 66 PAY  38 

    0xc5023077,// 67 PAY  39 

    0xa1ad3c43,// 68 PAY  40 

    0xfea08e37,// 69 PAY  41 

    0xcaf74e80,// 70 PAY  42 

    0x9b430d50,// 71 PAY  43 

    0x159b20c0,// 72 PAY  44 

    0xa7ac5f96,// 73 PAY  45 

    0xac4c411f,// 74 PAY  46 

    0xe8ff3df2,// 75 PAY  47 

    0xe94a6099,// 76 PAY  48 

    0xc92ec1fa,// 77 PAY  49 

    0x3e515c4c,// 78 PAY  50 

    0x30a8c740,// 79 PAY  51 

    0xe9078e7d,// 80 PAY  52 

    0x63505f11,// 81 PAY  53 

    0x1fb0d0fe,// 82 PAY  54 

    0x527e936f,// 83 PAY  55 

    0x254ffed6,// 84 PAY  56 

    0xfcd843c0,// 85 PAY  57 

    0xd38a29b9,// 86 PAY  58 

    0xa411eecc,// 87 PAY  59 

    0x91d06375,// 88 PAY  60 

    0xeda283ac,// 89 PAY  61 

    0x288bb325,// 90 PAY  62 

    0xd2f420d4,// 91 PAY  63 

    0x6d15f938,// 92 PAY  64 

    0xe9890815,// 93 PAY  65 

    0x0b30a891,// 94 PAY  66 

    0xaea0c448,// 95 PAY  67 

    0xcd026436,// 96 PAY  68 

    0x39cabffd,// 97 PAY  69 

    0x4f915466,// 98 PAY  70 

    0x4a98d2b5,// 99 PAY  71 

    0xd53ffe78,// 100 PAY  72 

    0x4d4ce0b7,// 101 PAY  73 

    0x9263a1bc,// 102 PAY  74 

    0x83bfd807,// 103 PAY  75 

    0xd668acd9,// 104 PAY  76 

    0xa1dfeee0,// 105 PAY  77 

    0x0bbc105d,// 106 PAY  78 

    0x9144ed37,// 107 PAY  79 

    0x9c9d471d,// 108 PAY  80 

    0xe1a0de19,// 109 PAY  81 

    0x455dfb87,// 110 PAY  82 

    0x8a059682,// 111 PAY  83 

    0x5e988e4d,// 112 PAY  84 

    0x14f03580,// 113 PAY  85 

    0x8e802035,// 114 PAY  86 

    0x4d9cf15b,// 115 PAY  87 

    0x49cadf04,// 116 PAY  88 

    0xe949b286,// 117 PAY  89 

    0x2f61caa9,// 118 PAY  90 

    0xde492a63,// 119 PAY  91 

    0x60cc749f,// 120 PAY  92 

    0x266c2bed,// 121 PAY  93 

    0x6392a810,// 122 PAY  94 

    0xbb49567f,// 123 PAY  95 

    0x239a930d,// 124 PAY  96 

    0x4e8da708,// 125 PAY  97 

    0xf616c625,// 126 PAY  98 

    0x193afc8d,// 127 PAY  99 

    0x9ab60685,// 128 PAY 100 

    0x0afe614a,// 129 PAY 101 

    0x8e087dab,// 130 PAY 102 

    0xe474fd7a,// 131 PAY 103 

    0x038703bb,// 132 PAY 104 

    0xef0d0731,// 133 PAY 105 

    0x0a8ba17f,// 134 PAY 106 

    0x1bd34399,// 135 PAY 107 

    0xc7f468f9,// 136 PAY 108 

    0xe1d9d0e3,// 137 PAY 109 

    0xcd46a267,// 138 PAY 110 

    0x0f404a36,// 139 PAY 111 

    0xbb60dff6,// 140 PAY 112 

    0xbf3dcf6d,// 141 PAY 113 

    0x6aca2789,// 142 PAY 114 

    0x2a36b3a6,// 143 PAY 115 

    0x42590b53,// 144 PAY 116 

    0xf96d381f,// 145 PAY 117 

    0x4d3b6fa9,// 146 PAY 118 

    0x032e69c3,// 147 PAY 119 

    0xe0affc2a,// 148 PAY 120 

    0xf810cf77,// 149 PAY 121 

    0xde575894,// 150 PAY 122 

    0x007c207e,// 151 PAY 123 

    0xadff0e97,// 152 PAY 124 

    0x8c8071a3,// 153 PAY 125 

    0x65f15b16,// 154 PAY 126 

    0xcb2d9b11,// 155 PAY 127 

    0xbea8ea54,// 156 PAY 128 

    0xc92cb272,// 157 PAY 129 

    0xd3c2c591,// 158 PAY 130 

    0x4f4ddb75,// 159 PAY 131 

    0x3ad549cc,// 160 PAY 132 

    0xe16ea0f4,// 161 PAY 133 

    0x51511e69,// 162 PAY 134 

    0x540418b8,// 163 PAY 135 

    0x7c09d9f4,// 164 PAY 136 

    0xcb9322ae,// 165 PAY 137 

    0x2f7e880f,// 166 PAY 138 

    0x4509c98c,// 167 PAY 139 

    0xdaf8278f,// 168 PAY 140 

    0x114483ea,// 169 PAY 141 

    0x1d130ef7,// 170 PAY 142 

    0xd560849b,// 171 PAY 143 

    0x2a23a7c4,// 172 PAY 144 

    0x604db3df,// 173 PAY 145 

    0x193fb978,// 174 PAY 146 

    0x73d57336,// 175 PAY 147 

    0x2c47f3bb,// 176 PAY 148 

    0x48bed600,// 177 PAY 149 

    0xbf7543bf,// 178 PAY 150 

    0xa6bfddaf,// 179 PAY 151 

    0x8b1fee76,// 180 PAY 152 

    0xab64bac8,// 181 PAY 153 

    0xe108ee60,// 182 PAY 154 

    0xb96a069c,// 183 PAY 155 

    0xe083d68e,// 184 PAY 156 

    0x55ca5e32,// 185 PAY 157 

    0x3945fe08,// 186 PAY 158 

    0xe249ca01,// 187 PAY 159 

    0xda9c7866,// 188 PAY 160 

    0x5a7a4012,// 189 PAY 161 

    0xa1f8e879,// 190 PAY 162 

    0x490ec80f,// 191 PAY 163 

    0x232a812f,// 192 PAY 164 

    0xfcca31ea,// 193 PAY 165 

    0x207e564e,// 194 PAY 166 

    0xc321aa13,// 195 PAY 167 

    0x89977914,// 196 PAY 168 

    0xdf11482c,// 197 PAY 169 

    0x7dfdc86e,// 198 PAY 170 

    0x4a85847e,// 199 PAY 171 

    0x2857e8fe,// 200 PAY 172 

    0xbf8aba2b,// 201 PAY 173 

    0x27b444b1,// 202 PAY 174 

    0x32971315,// 203 PAY 175 

    0xf597a194,// 204 PAY 176 

    0xe3fd3323,// 205 PAY 177 

    0xea7405a5,// 206 PAY 178 

    0x3cd1d177,// 207 PAY 179 

    0xe43e1dec,// 208 PAY 180 

    0x66567923,// 209 PAY 181 

    0x1f391459,// 210 PAY 182 

    0xaf3aca9e,// 211 PAY 183 

    0xd55b0c01,// 212 PAY 184 

    0xf5d354f8,// 213 PAY 185 

    0x79ea0718,// 214 PAY 186 

    0x07cc7715,// 215 PAY 187 

    0x6d5bb49e,// 216 PAY 188 

    0x7ef91c86,// 217 PAY 189 

    0x5391bcee,// 218 PAY 190 

    0x3839e347,// 219 PAY 191 

    0xe15aa8e3,// 220 PAY 192 

    0x2dfd03c6,// 221 PAY 193 

    0xeced8a6e,// 222 PAY 194 

    0x91cd229e,// 223 PAY 195 

    0xeb56e2ce,// 224 PAY 196 

    0xbc4b0657,// 225 PAY 197 

    0x77376f0e,// 226 PAY 198 

    0x0ad5ea60,// 227 PAY 199 

    0xe5975db0,// 228 PAY 200 

    0xcef42566,// 229 PAY 201 

    0x9c80ed9f,// 230 PAY 202 

    0xc2224889,// 231 PAY 203 

    0x146de6eb,// 232 PAY 204 

    0x5ceaf887,// 233 PAY 205 

    0x3af488a0,// 234 PAY 206 

    0x62779917,// 235 PAY 207 

    0x9638d3c5,// 236 PAY 208 

    0x3b0aac70,// 237 PAY 209 

    0x495ef84a,// 238 PAY 210 

    0x330f3d92,// 239 PAY 211 

    0xc0f68c17,// 240 PAY 212 

    0x25c7698d,// 241 PAY 213 

    0xe8a1bc76,// 242 PAY 214 

    0x11210f6f,// 243 PAY 215 

    0x39673477,// 244 PAY 216 

    0xe130f1bc,// 245 PAY 217 

    0x44f4c914,// 246 PAY 218 

    0x8a59f261,// 247 PAY 219 

    0x7826dfa3,// 248 PAY 220 

    0x8cb68a3c,// 249 PAY 221 

    0x8b1e5805,// 250 PAY 222 

    0x40f8a296,// 251 PAY 223 

    0x659e264b,// 252 PAY 224 

    0x1ff48307,// 253 PAY 225 

    0x20cb2988,// 254 PAY 226 

    0xb1a5cd63,// 255 PAY 227 

    0x91fcec90,// 256 PAY 228 

    0x0fa89967,// 257 PAY 229 

    0x8e0e823b,// 258 PAY 230 

    0x91e20a25,// 259 PAY 231 

    0x28e1b865,// 260 PAY 232 

    0x16577c99,// 261 PAY 233 

    0x7a30459c,// 262 PAY 234 

    0x4d41a39e,// 263 PAY 235 

    0x5831450b,// 264 PAY 236 

    0x9209b601,// 265 PAY 237 

    0xebdd799b,// 266 PAY 238 

    0x2cdce2f4,// 267 PAY 239 

    0x212da149,// 268 PAY 240 

    0xfc471472,// 269 PAY 241 

    0x4c135ec6,// 270 PAY 242 

    0x1ea2b7cd,// 271 PAY 243 

    0x6f59ed36,// 272 PAY 244 

    0x293453ef,// 273 PAY 245 

    0x5147ed91,// 274 PAY 246 

    0xc8bb4a89,// 275 PAY 247 

    0xeccf8fa4,// 276 PAY 248 

    0x6e4692cc,// 277 PAY 249 

    0x14222b5f,// 278 PAY 250 

    0x879adf98,// 279 PAY 251 

    0x5b864acb,// 280 PAY 252 

    0x677eb837,// 281 PAY 253 

    0xd3022512,// 282 PAY 254 

    0x76808bac,// 283 PAY 255 

    0x75a71ea2,// 284 PAY 256 

    0x16ec67e4,// 285 PAY 257 

    0x9cbaeb6e,// 286 PAY 258 

    0x2c29cde5,// 287 PAY 259 

    0x0a6a2d86,// 288 PAY 260 

    0x17457a58,// 289 PAY 261 

    0xae35c179,// 290 PAY 262 

    0xe27cfdb2,// 291 PAY 263 

    0x04a802e2,// 292 PAY 264 

    0xeeb7f315,// 293 PAY 265 

    0x97aa9da8,// 294 PAY 266 

    0x58f271ed,// 295 PAY 267 

    0x27529deb,// 296 PAY 268 

    0xb5af5fea,// 297 PAY 269 

    0x2acec009,// 298 PAY 270 

    0xdf95f0ee,// 299 PAY 271 

    0xfec5364d,// 300 PAY 272 

    0x5218ef57,// 301 PAY 273 

    0x60b9f744,// 302 PAY 274 

    0xf4ff0229,// 303 PAY 275 

    0x764d4449,// 304 PAY 276 

    0x7ef3bce8,// 305 PAY 277 

    0x4b434b0e,// 306 PAY 278 

    0x6c80e725,// 307 PAY 279 

    0xf99c0627,// 308 PAY 280 

    0x7ee95ef0,// 309 PAY 281 

    0xc8d1f6a2,// 310 PAY 282 

    0x891492df,// 311 PAY 283 

    0x3cc9d2dd,// 312 PAY 284 

    0x86aad98f,// 313 PAY 285 

    0x3c9b623d,// 314 PAY 286 

    0x8115d771,// 315 PAY 287 

    0x105e316b,// 316 PAY 288 

    0x7c0d5a72,// 317 PAY 289 

    0x3c9af809,// 318 PAY 290 

    0xaaeeee37,// 319 PAY 291 

    0xde7cd786,// 320 PAY 292 

    0xb15cf169,// 321 PAY 293 

    0x5219ce32,// 322 PAY 294 

    0x5083dfbe,// 323 PAY 295 

    0x7b2d6163,// 324 PAY 296 

    0x57409123,// 325 PAY 297 

    0x03da37d1,// 326 PAY 298 

    0x0e60be95,// 327 PAY 299 

    0xe8ba99fa,// 328 PAY 300 

    0xc630f062,// 329 PAY 301 

    0xb1d0962c,// 330 PAY 302 

    0x99c7e004,// 331 PAY 303 

    0x6e495e6c,// 332 PAY 304 

    0x3d17b67c,// 333 PAY 305 

    0xd48aaf48,// 334 PAY 306 

    0x4202a338,// 335 PAY 307 

    0xcc409839,// 336 PAY 308 

    0x0062d662,// 337 PAY 309 

    0xf2122129,// 338 PAY 310 

    0x57055f80,// 339 PAY 311 

    0x8ed1b0b4,// 340 PAY 312 

    0x866c3350,// 341 PAY 313 

    0x2c785890,// 342 PAY 314 

    0xb73543c1,// 343 PAY 315 

    0x5269cfe9,// 344 PAY 316 

    0x1f83b2a7,// 345 PAY 317 

    0x29855876,// 346 PAY 318 

    0x95bac161,// 347 PAY 319 

    0x3ab8e012,// 348 PAY 320 

    0xffc7c48a,// 349 PAY 321 

    0xe52e92c9,// 350 PAY 322 

    0xdfd79d1c,// 351 PAY 323 

    0x2b5f3034,// 352 PAY 324 

    0xba0d38ff,// 353 PAY 325 

    0x5dc6ec91,// 354 PAY 326 

    0x8a5d3d7e,// 355 PAY 327 

    0x5e790f66,// 356 PAY 328 

    0xaaadb239,// 357 PAY 329 

    0xcf4d6522,// 358 PAY 330 

    0x2c33f917,// 359 PAY 331 

    0x9ffa0797,// 360 PAY 332 

    0x27b0d393,// 361 PAY 333 

    0xb27ac7a6,// 362 PAY 334 

    0xda5b8699,// 363 PAY 335 

    0xb138cfed,// 364 PAY 336 

    0x8ed7fe8c,// 365 PAY 337 

    0xa173552d,// 366 PAY 338 

    0x30416447,// 367 PAY 339 

    0x06543a03,// 368 PAY 340 

    0x04e6db3f,// 369 PAY 341 

    0x9cb331c3,// 370 PAY 342 

    0xf22f7982,// 371 PAY 343 

    0xe92edae2,// 372 PAY 344 

    0xda842fdd,// 373 PAY 345 

    0x2eb0749b,// 374 PAY 346 

    0xa6fbdc72,// 375 PAY 347 

    0x14e6a943,// 376 PAY 348 

    0x23377791,// 377 PAY 349 

    0xf6001646,// 378 PAY 350 

    0xdb5d4ca7,// 379 PAY 351 

    0xe0850674,// 380 PAY 352 

    0xaa7d2992,// 381 PAY 353 

    0x4ee0b50a,// 382 PAY 354 

    0x76f712f3,// 383 PAY 355 

    0x2c042901,// 384 PAY 356 

    0x780e21f0,// 385 PAY 357 

    0xa9d78b36,// 386 PAY 358 

    0xb44dab84,// 387 PAY 359 

    0x147fc8db,// 388 PAY 360 

    0x7f30e5ea,// 389 PAY 361 

    0x70dbb1eb,// 390 PAY 362 

    0x8d037b5a,// 391 PAY 363 

    0xc3036285,// 392 PAY 364 

    0x5011ac70,// 393 PAY 365 

    0x97b49f8a,// 394 PAY 366 

    0xacbd1b25,// 395 PAY 367 

    0x0a5e39de,// 396 PAY 368 

    0xe7d4e714,// 397 PAY 369 

    0x325cdffe,// 398 PAY 370 

    0x2dfe549c,// 399 PAY 371 

    0x8da7f049,// 400 PAY 372 

    0xe54bb19e,// 401 PAY 373 

    0x11244340,// 402 PAY 374 

    0x83699047,// 403 PAY 375 

    0x8f2080c9,// 404 PAY 376 

    0xd880eaea,// 405 PAY 377 

    0x2d44c2d0,// 406 PAY 378 

    0x950d2852,// 407 PAY 379 

    0xe5db731d,// 408 PAY 380 

    0x6b7aba32,// 409 PAY 381 

    0xb5d07048,// 410 PAY 382 

    0x02b83dec,// 411 PAY 383 

    0x0e383250,// 412 PAY 384 

    0x893d8aef,// 413 PAY 385 

    0x595ff34c,// 414 PAY 386 

    0x4a86352a,// 415 PAY 387 

    0x350fff2d,// 416 PAY 388 

    0xc061cf16,// 417 PAY 389 

    0x1cc82520,// 418 PAY 390 

    0x2fd25313,// 419 PAY 391 

    0xa06bf3e0,// 420 PAY 392 

    0x8a9e7cee,// 421 PAY 393 

    0x61bf5d48,// 422 PAY 394 

    0xb5d489af,// 423 PAY 395 

    0xb39e1e3e,// 424 PAY 396 

    0xe1e750ef,// 425 PAY 397 

    0xcdd2f34c,// 426 PAY 398 

    0x2b2559bd,// 427 PAY 399 

    0x12689cb1,// 428 PAY 400 

    0x33907a2e,// 429 PAY 401 

    0xd8fa4a4c,// 430 PAY 402 

    0x32d31a5e,// 431 PAY 403 

    0xacf37c3a,// 432 PAY 404 

    0xc8c7fed5,// 433 PAY 405 

    0xe5fe1f02,// 434 PAY 406 

    0xde59f3c2,// 435 PAY 407 

    0xbe144662,// 436 PAY 408 

    0xa03e3e57,// 437 PAY 409 

    0x52b5d7e7,// 438 PAY 410 

    0x76d48e66,// 439 PAY 411 

    0x10000000,// 440 PAY 412 

/// STA is 1 words. 

/// STA num_pkts       : 99 

/// STA pkt_idx        : 152 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x93 

    0x02609363 // 441 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 80 (0x50) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_sha1_pkt1_tmpl[] = {
    0xb8010050,// 1 CCH   1 

/// ECH cache_idx      : 0x0b 

/// ECH pdu_tag        : 0x00 

    0x000b0000,// 2 ECH   1 

/// SCX is 19 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound !save_icv !insert_icv check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : SHA1 

/// SCX aes_size        : NORMAL_RC4INIT_AES128 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x2 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 40 

    0x08000013,// 3 SCX   1 

    0x80604853,// 4 SCX   2 

    0x00001200,// 5 SCX   3 

    0x6eb407cd,// 6 SCX   4 

    0xd45102f5,// 7 SCX   5 

    0xacf6c415,// 8 SCX   6 

    0x9ee15e1e,// 9 SCX   7 

    0xff1433f1,// 10 SCX   8 

    0x20d82a7e,// 11 SCX   9 

    0x6d5a7f70,// 12 SCX  10 

    0x430751cf,// 13 SCX  11 

    0xbf1bac8e,// 14 SCX  12 

    0x05caa7d4,// 15 SCX  13 

    0x53751920,// 16 SCX  14 

    0x9140c785,// 17 SCX  15 

    0xe1f745b7,// 18 SCX  16 

    0xa3d9e961,// 19 SCX  17 

    0x5a0175bc,// 20 SCX  18 

    0x00af747f,// 21 SCX  19 

/// BFD is 3 words. 

/// BFD tot_len        : 277 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 164 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 164 

/// BFD lencrypto      : 24 

/// BFD ofstcrypto     : 136 

/// BFD (ofst+len)cry  : 160 

/// BFD ofstiv         : 88 

/// BFD ofsticv        : 256 

    0x000000a4,// 22 BFD   1 

    0x00880018,// 23 BFD   2 

    0x01000058,// 24 BFD   3 

/// MFM is 1 words. 

/// MFM vldnibs        : 3 

    0x0300a1d0,// 25 MFM   1 

/// BDA is 71 words. 

/// BDA size     is 277 (0x115) 

/// BDA id       is 0x3d82 

    0x01153d82,// 26 BDA   1 

/// PAY Generic Data size   : 277 byte(s) 

/// PAD Buffer Data Pad size   : 3 byte(s) 

    0x006bf034,// 27 PAY   1 

    0x36e61533,// 28 PAY   2 

    0x22bc3fec,// 29 PAY   3 

    0x5c27acd3,// 30 PAY   4 

    0xcadc5c10,// 31 PAY   5 

    0xfdd6f2f6,// 32 PAY   6 

    0x4baf7b94,// 33 PAY   7 

    0x5ccb75a7,// 34 PAY   8 

    0x28498b09,// 35 PAY   9 

    0xcfeb6091,// 36 PAY  10 

    0xd3015900,// 37 PAY  11 

    0x532f2430,// 38 PAY  12 

    0x545e58f7,// 39 PAY  13 

    0xa780d561,// 40 PAY  14 

    0x560cda6e,// 41 PAY  15 

    0x64a08e6b,// 42 PAY  16 

    0x08eeb9b3,// 43 PAY  17 

    0xd412aee6,// 44 PAY  18 

    0xb98d6995,// 45 PAY  19 

    0xc5427b4a,// 46 PAY  20 

    0x0b8e7c61,// 47 PAY  21 

    0x81a19e15,// 48 PAY  22 

    0xcd8737ca,// 49 PAY  23 

    0x7dd3b29d,// 50 PAY  24 

    0xd01a8d76,// 51 PAY  25 

    0x4de7d99b,// 52 PAY  26 

    0x5d25bcd7,// 53 PAY  27 

    0x792ef098,// 54 PAY  28 

    0x7ea2f522,// 55 PAY  29 

    0xc058ed06,// 56 PAY  30 

    0xc67f5b78,// 57 PAY  31 

    0x23c7d5e2,// 58 PAY  32 

    0x0f73bc6a,// 59 PAY  33 

    0x1fc1624c,// 60 PAY  34 

    0x3a6d4025,// 61 PAY  35 

    0xd7da6781,// 62 PAY  36 

    0x2a88533f,// 63 PAY  37 

    0x3939b368,// 64 PAY  38 

    0x23460726,// 65 PAY  39 

    0x448ab428,// 66 PAY  40 

    0xd327139c,// 67 PAY  41 

    0x03902048,// 68 PAY  42 

    0x1cb7be68,// 69 PAY  43 

    0x533b8f90,// 70 PAY  44 

    0x517f8995,// 71 PAY  45 

    0x7fb36c5c,// 72 PAY  46 

    0xc617abdf,// 73 PAY  47 

    0x59938007,// 74 PAY  48 

    0x3af43e7c,// 75 PAY  49 

    0x7cebc9bc,// 76 PAY  50 

    0xa2aec587,// 77 PAY  51 

    0x76e41f7d,// 78 PAY  52 

    0xa5a9d092,// 79 PAY  53 

    0xdf91dd00,// 80 PAY  54 

    0x7a13b635,// 81 PAY  55 

    0x92ddb002,// 82 PAY  56 

    0x605f21fb,// 83 PAY  57 

    0x04b77c9b,// 84 PAY  58 

    0xd689cd26,// 85 PAY  59 

    0x4ee41a27,// 86 PAY  60 

    0x083e58c5,// 87 PAY  61 

    0xf96b0632,// 88 PAY  62 

    0xd89ac72d,// 89 PAY  63 

    0x545d3eed,// 90 PAY  64 

    0xf1024c66,// 91 PAY  65 

    0xb1e648a0,// 92 PAY  66 

    0xeeb6e7a3,// 93 PAY  67 

    0xf1420dc2,// 94 PAY  68 

    0x60146676,// 95 PAY  69 

    0xf0000000,// 96 PAY  70 

/// STA is 1 words. 

/// STA num_pkts       : 178 

/// STA pkt_idx        : 98 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x80 

    0x018880b2 // 97 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 80 (0x50) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_sha1_pkt2_tmpl[] = {
    0xb8010050,// 1 CCH   1 

/// ECH cache_idx      : 0x02 

/// ECH pdu_tag        : 0x00 

    0x00020000,// 2 ECH   1 

/// SCX is 19 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound save_icv !insert_icv check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : SHA1 

/// SCX aes_size        : NORMAL_RC4INIT_AES128 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x3 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 40 

    0x00000013,// 3 SCX   1 

    0x80604860,// 4 SCX   2 

    0x00005300,// 5 SCX   3 

    0xd4b3b33c,// 6 SCX   4 

    0xf9e241f1,// 7 SCX   5 

    0x8decd16d,// 8 SCX   6 

    0x96f87d47,// 9 SCX   7 

    0x7644a376,// 10 SCX   8 

    0xb743db68,// 11 SCX   9 

    0xe86ccc55,// 12 SCX  10 

    0xff18914a,// 13 SCX  11 

    0x333d4184,// 14 SCX  12 

    0xce82bfc8,// 15 SCX  13 

    0x004ff2a0,// 16 SCX  14 

    0xc6d91c58,// 17 SCX  15 

    0x93dd9f19,// 18 SCX  16 

    0x3d62e573,// 19 SCX  17 

    0x16f137da,// 20 SCX  18 

    0xbd5c4b1a,// 21 SCX  19 

/// BFD is 3 words. 

/// BFD tot_len        : 592 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 360 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 360 

/// BFD lencrypto      : 288 

/// BFD ofstcrypto     : 68 

/// BFD (ofst+len)cry  : 356 

/// BFD ofstiv         : 36 

/// BFD ofsticv        : 500 

    0x00000168,// 22 BFD   1 

    0x00440120,// 23 BFD   2 

    0x01f40024,// 24 BFD   3 

/// MFM is 11 words. 

/// MFM vldnibs        : 52 

    0x52003157,// 25 MFM   1 

    0x76a991ce,// 26 MFM   2 

    0x458bf0d7,// 27 MFM   3 

    0x862d8655,// 28 MFM   4 

    0xe19e2487,// 29 MFM   5 

    0x8576a3e1,// 30 MFM   6 

    0x5c2145f6,// 31 MFM   7 

    0x3ac8eb14,// 32 MFM   8 

    0x6452cff7,// 33 MFM   9 

    0x9a9dfc4a,// 34 MFM  10 

    0x3a281f00,// 35 MFM  11 

/// BDA is 149 words. 

/// BDA size     is 592 (0x250) 

/// BDA id       is 0xb49d 

    0x0250b49d,// 36 BDA   1 

/// PAY Generic Data size   : 592 byte(s) 

/// PAD Buffer Data Pad size   : 0 byte(s) 

    0x77f29563,// 37 PAY   1 

    0x5a0cbf1d,// 38 PAY   2 

    0xf5cd007c,// 39 PAY   3 

    0xc72a5e6a,// 40 PAY   4 

    0xfc9c85d5,// 41 PAY   5 

    0x26942087,// 42 PAY   6 

    0xfb3b5286,// 43 PAY   7 

    0x56fa3df1,// 44 PAY   8 

    0xb4f0fef8,// 45 PAY   9 

    0x45c876bb,// 46 PAY  10 

    0xe6bb8807,// 47 PAY  11 

    0x9455c8a9,// 48 PAY  12 

    0x4e237977,// 49 PAY  13 

    0x8e84ed67,// 50 PAY  14 

    0xd5e6e7a1,// 51 PAY  15 

    0xb6c4dc8b,// 52 PAY  16 

    0x4f790bd6,// 53 PAY  17 

    0xb26a0ceb,// 54 PAY  18 

    0x0696d6af,// 55 PAY  19 

    0x5aaca261,// 56 PAY  20 

    0x741b8c1a,// 57 PAY  21 

    0x4d919b78,// 58 PAY  22 

    0xccf7d742,// 59 PAY  23 

    0x28ef19e6,// 60 PAY  24 

    0x6b9fc0ef,// 61 PAY  25 

    0xd0c895b5,// 62 PAY  26 

    0x847d4c1f,// 63 PAY  27 

    0x196134d6,// 64 PAY  28 

    0x7aed5519,// 65 PAY  29 

    0x2db2c9ad,// 66 PAY  30 

    0x81fbbeec,// 67 PAY  31 

    0x73cddb12,// 68 PAY  32 

    0xd13626ee,// 69 PAY  33 

    0x0843b1a5,// 70 PAY  34 

    0x1d438b7d,// 71 PAY  35 

    0xad4373b5,// 72 PAY  36 

    0x15a77db4,// 73 PAY  37 

    0x44d0d550,// 74 PAY  38 

    0x436e60bf,// 75 PAY  39 

    0x68809511,// 76 PAY  40 

    0x3742a01c,// 77 PAY  41 

    0x03b81bfe,// 78 PAY  42 

    0xb5c6a194,// 79 PAY  43 

    0x938c22ed,// 80 PAY  44 

    0x88ecffbd,// 81 PAY  45 

    0x089c9467,// 82 PAY  46 

    0xf16f730b,// 83 PAY  47 

    0xa8542a4c,// 84 PAY  48 

    0x98153b50,// 85 PAY  49 

    0x246bedd9,// 86 PAY  50 

    0xae97ec01,// 87 PAY  51 

    0xf2faf42a,// 88 PAY  52 

    0xa59a3789,// 89 PAY  53 

    0x17629dd7,// 90 PAY  54 

    0x41510b06,// 91 PAY  55 

    0x8fba5f09,// 92 PAY  56 

    0xcf4c8464,// 93 PAY  57 

    0xf451adcb,// 94 PAY  58 

    0xc7fdd515,// 95 PAY  59 

    0xe49ff4e9,// 96 PAY  60 

    0x7fb29640,// 97 PAY  61 

    0x42d4fa65,// 98 PAY  62 

    0x4e373190,// 99 PAY  63 

    0x3419776a,// 100 PAY  64 

    0xf40fbf3b,// 101 PAY  65 

    0x99cd6186,// 102 PAY  66 

    0x968fff04,// 103 PAY  67 

    0xb79422c2,// 104 PAY  68 

    0xc9c05df0,// 105 PAY  69 

    0x266cdcb4,// 106 PAY  70 

    0x56018a61,// 107 PAY  71 

    0x6b32f39f,// 108 PAY  72 

    0x37940ee1,// 109 PAY  73 

    0x5b7db850,// 110 PAY  74 

    0x4a4b9143,// 111 PAY  75 

    0xfe0ab98a,// 112 PAY  76 

    0x093e8266,// 113 PAY  77 

    0x1f63c51e,// 114 PAY  78 

    0xb5144891,// 115 PAY  79 

    0x53b702c6,// 116 PAY  80 

    0x9655173f,// 117 PAY  81 

    0xb938037d,// 118 PAY  82 

    0x9c0745ae,// 119 PAY  83 

    0xa61e6425,// 120 PAY  84 

    0xc5b89264,// 121 PAY  85 

    0x10f6aec7,// 122 PAY  86 

    0x18462bdc,// 123 PAY  87 

    0x095db6d3,// 124 PAY  88 

    0xac870b22,// 125 PAY  89 

    0x3e058496,// 126 PAY  90 

    0xe4949e46,// 127 PAY  91 

    0xe71c4610,// 128 PAY  92 

    0x978564b0,// 129 PAY  93 

    0x71c4d072,// 130 PAY  94 

    0x598d7451,// 131 PAY  95 

    0x2c4d7beb,// 132 PAY  96 

    0xa8788caf,// 133 PAY  97 

    0x29a03f10,// 134 PAY  98 

    0x8a9be6c7,// 135 PAY  99 

    0x9b8e1585,// 136 PAY 100 

    0xd4bb5a96,// 137 PAY 101 

    0xee3bc58e,// 138 PAY 102 

    0x77f3c5a5,// 139 PAY 103 

    0x56738ab0,// 140 PAY 104 

    0x979aee5a,// 141 PAY 105 

    0xb97c6089,// 142 PAY 106 

    0x1b853d14,// 143 PAY 107 

    0xbd844109,// 144 PAY 108 

    0x264a05f6,// 145 PAY 109 

    0x13009385,// 146 PAY 110 

    0x7c55dd44,// 147 PAY 111 

    0xbd731af6,// 148 PAY 112 

    0xf43e93f9,// 149 PAY 113 

    0x503303df,// 150 PAY 114 

    0x1874ce3f,// 151 PAY 115 

    0x383f4ac8,// 152 PAY 116 

    0xcc76c488,// 153 PAY 117 

    0x22e9368c,// 154 PAY 118 

    0x75f22075,// 155 PAY 119 

    0x5d9ba284,// 156 PAY 120 

    0xe31e8feb,// 157 PAY 121 

    0xb0259a6c,// 158 PAY 122 

    0x1d8ecda5,// 159 PAY 123 

    0xb5373dea,// 160 PAY 124 

    0x5332e9ae,// 161 PAY 125 

    0xbc50dc1a,// 162 PAY 126 

    0xbe7ce5b9,// 163 PAY 127 

    0xb1bd39f1,// 164 PAY 128 

    0xbae5452a,// 165 PAY 129 

    0x0bb58c2d,// 166 PAY 130 

    0x56cc303e,// 167 PAY 131 

    0x2ce6a6c2,// 168 PAY 132 

    0xb162a135,// 169 PAY 133 

    0xefa0ed66,// 170 PAY 134 

    0xc3522e3e,// 171 PAY 135 

    0x05e25ce3,// 172 PAY 136 

    0xcb2f748b,// 173 PAY 137 

    0xd237ae06,// 174 PAY 138 

    0x909d1255,// 175 PAY 139 

    0xef8beff6,// 176 PAY 140 

    0x2e6ad892,// 177 PAY 141 

    0xcd1e459c,// 178 PAY 142 

    0xdf74e905,// 179 PAY 143 

    0x45d6c4eb,// 180 PAY 144 

    0xd94ee7cf,// 181 PAY 145 

    0x9c67cc94,// 182 PAY 146 

    0xa7ad4014,// 183 PAY 147 

    0xb31e419f,// 184 PAY 148 

/// STA is 1 words. 

/// STA num_pkts       : 74 

/// STA pkt_idx        : 189 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xe9 

    0x02f5e94a // 185 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 88 (0x58) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_sha1_pkt3_tmpl[] = {
    0xb8010058,// 1 CCH   1 

/// ECH cache_idx      : 0x09 

/// ECH pdu_tag        : 0x00 

    0x00090000,// 2 ECH   1 

/// SCX is 21 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound save_icv !insert_icv !check_icv sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : SHA1 

/// SCX aes_size        : AES256 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x2 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 8 

/// SCX authctx_size    : 40 

    0x08000015,// 3 SCX   1 

    0x806648c1,// 4 SCX   2 

    0x00004282,// 5 SCX   3 

    0xe6aa0b24,// 6 SCX   4 

    0x83be153d,// 7 SCX   5 

    0xab049046,// 8 SCX   6 

    0xdd485063,// 9 SCX   7 

    0x2c65f334,// 10 SCX   8 

    0x1f1062a2,// 11 SCX   9 

    0xfb27e466,// 12 SCX  10 

    0x2f534b8f,// 13 SCX  11 

    0x6f66ce36,// 14 SCX  12 

    0x9a32ffc5,// 15 SCX  13 

    0x02122ee9,// 16 SCX  14 

    0xaac3ba86,// 17 SCX  15 

    0x42474a42,// 18 SCX  16 

    0xf220f167,// 19 SCX  17 

    0xf213b9c6,// 20 SCX  18 

    0x969c9722,// 21 SCX  19 

    0x05926dd5,// 22 SCX  20 

    0x53213ce6,// 23 SCX  21 

/// BFD is 3 words. 

/// BFD tot_len        : 1877 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 753 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 753 

/// BFD lencrypto      : 304 

/// BFD ofstcrypto     : 360 

/// BFD (ofst+len)cry  : 664 

/// BFD ofstiv         : 224 

/// BFD ofsticv        : 1536 

    0x000002f1,// 24 BFD   1 

    0x01680130,// 25 BFD   2 

    0x060000e0,// 26 BFD   3 

/// MFM is 1 words. 

/// MFM vldnibs        : 4 

    0x0400feec,// 27 MFM   1 

/// BDA is 471 words. 

/// BDA size     is 1877 (0x755) 

/// BDA id       is 0x61e 

    0x0755061e,// 28 BDA   1 

/// PAY Generic Data size   : 1877 byte(s) 

/// PAD Buffer Data Pad size   : 3 byte(s) 

    0x8d01eebf,// 29 PAY   1 

    0x46615a4d,// 30 PAY   2 

    0x4d43d717,// 31 PAY   3 

    0x55e1a86b,// 32 PAY   4 

    0xbd727c05,// 33 PAY   5 

    0x28997dd3,// 34 PAY   6 

    0x663865eb,// 35 PAY   7 

    0x029feb98,// 36 PAY   8 

    0x4551aa6e,// 37 PAY   9 

    0x194c2063,// 38 PAY  10 

    0xd5ec8ba1,// 39 PAY  11 

    0x050faccd,// 40 PAY  12 

    0xfad5fde8,// 41 PAY  13 

    0x9d195c09,// 42 PAY  14 

    0x333d1bd5,// 43 PAY  15 

    0x434c6783,// 44 PAY  16 

    0x77359b7b,// 45 PAY  17 

    0x3a7743c8,// 46 PAY  18 

    0xeab1a016,// 47 PAY  19 

    0xfaee1e83,// 48 PAY  20 

    0x9ed7f0de,// 49 PAY  21 

    0x6cecb079,// 50 PAY  22 

    0x0eda7bab,// 51 PAY  23 

    0x6864bf6a,// 52 PAY  24 

    0x1b969e38,// 53 PAY  25 

    0x462341ba,// 54 PAY  26 

    0x9e345193,// 55 PAY  27 

    0xdaeb34b7,// 56 PAY  28 

    0xa914fbf6,// 57 PAY  29 

    0xfc457b2d,// 58 PAY  30 

    0xdcaec82a,// 59 PAY  31 

    0x70490899,// 60 PAY  32 

    0x2e0b255b,// 61 PAY  33 

    0x6ec5bf8d,// 62 PAY  34 

    0xd03697f4,// 63 PAY  35 

    0xc2e93989,// 64 PAY  36 

    0x6092ae26,// 65 PAY  37 

    0x9984f0fc,// 66 PAY  38 

    0x2fa00e71,// 67 PAY  39 

    0xd1e9c83d,// 68 PAY  40 

    0x1d7a8d9f,// 69 PAY  41 

    0x561d63d3,// 70 PAY  42 

    0x22c8b604,// 71 PAY  43 

    0x6df47677,// 72 PAY  44 

    0x2e50dd9b,// 73 PAY  45 

    0xdda5ff8b,// 74 PAY  46 

    0x649a68a5,// 75 PAY  47 

    0xc97dca0b,// 76 PAY  48 

    0x5aff7f83,// 77 PAY  49 

    0x9f26976a,// 78 PAY  50 

    0x3076dec7,// 79 PAY  51 

    0x8fef599a,// 80 PAY  52 

    0x968dfdb1,// 81 PAY  53 

    0xda9aaf93,// 82 PAY  54 

    0x39996dfc,// 83 PAY  55 

    0x7b0c5cc1,// 84 PAY  56 

    0x3f32532b,// 85 PAY  57 

    0x6687c8e2,// 86 PAY  58 

    0xd140f34c,// 87 PAY  59 

    0xb575ed9c,// 88 PAY  60 

    0xd5a8c884,// 89 PAY  61 

    0xc909a88a,// 90 PAY  62 

    0x68a3d654,// 91 PAY  63 

    0xa9894a52,// 92 PAY  64 

    0xd766a30b,// 93 PAY  65 

    0xb6f28bf2,// 94 PAY  66 

    0x51b96760,// 95 PAY  67 

    0x90e7c55c,// 96 PAY  68 

    0xad423119,// 97 PAY  69 

    0x2cd9e26b,// 98 PAY  70 

    0xb6850d76,// 99 PAY  71 

    0x61d620c1,// 100 PAY  72 

    0x6e7b4edc,// 101 PAY  73 

    0x57344172,// 102 PAY  74 

    0x4d047828,// 103 PAY  75 

    0x6bc098e7,// 104 PAY  76 

    0xecd52ab6,// 105 PAY  77 

    0x64442b51,// 106 PAY  78 

    0xeb5545c0,// 107 PAY  79 

    0x7699a726,// 108 PAY  80 

    0xdc81ede5,// 109 PAY  81 

    0xaaa7cb0b,// 110 PAY  82 

    0xfee2cf9b,// 111 PAY  83 

    0x26bc2837,// 112 PAY  84 

    0x471dfa1d,// 113 PAY  85 

    0x36d22c0b,// 114 PAY  86 

    0xdea50b30,// 115 PAY  87 

    0xb0166f2d,// 116 PAY  88 

    0xf8fb0a8c,// 117 PAY  89 

    0xbb41fc45,// 118 PAY  90 

    0x314b40b8,// 119 PAY  91 

    0x67119864,// 120 PAY  92 

    0xca24e6d7,// 121 PAY  93 

    0xcc7d5ccc,// 122 PAY  94 

    0x724c98f0,// 123 PAY  95 

    0x7f7f3ce6,// 124 PAY  96 

    0x0db5b80a,// 125 PAY  97 

    0x2d5e864b,// 126 PAY  98 

    0x7d1d6259,// 127 PAY  99 

    0xc4ccdcc1,// 128 PAY 100 

    0xf0e13c90,// 129 PAY 101 

    0x98bb6c67,// 130 PAY 102 

    0x3a0262b3,// 131 PAY 103 

    0xd523e871,// 132 PAY 104 

    0x37bdcebf,// 133 PAY 105 

    0x2432de4a,// 134 PAY 106 

    0x9c630fa1,// 135 PAY 107 

    0xd0a81f3c,// 136 PAY 108 

    0x4309bd9e,// 137 PAY 109 

    0xba218e84,// 138 PAY 110 

    0x22ad5863,// 139 PAY 111 

    0x40ae7396,// 140 PAY 112 

    0xb25976c9,// 141 PAY 113 

    0xbb27b8d8,// 142 PAY 114 

    0x157d65f6,// 143 PAY 115 

    0x7f6d6609,// 144 PAY 116 

    0x634db2b0,// 145 PAY 117 

    0x4f103d48,// 146 PAY 118 

    0x9e3a66bd,// 147 PAY 119 

    0x0deda393,// 148 PAY 120 

    0xc67439c6,// 149 PAY 121 

    0x568122fe,// 150 PAY 122 

    0xa923cbcc,// 151 PAY 123 

    0x60c7c7d4,// 152 PAY 124 

    0xad3ab75b,// 153 PAY 125 

    0xb655126c,// 154 PAY 126 

    0xe471d4aa,// 155 PAY 127 

    0x7fb44c16,// 156 PAY 128 

    0xfccaeeee,// 157 PAY 129 

    0x78b3c0b5,// 158 PAY 130 

    0x88db3e69,// 159 PAY 131 

    0x369e61f0,// 160 PAY 132 

    0xff52e57b,// 161 PAY 133 

    0x3f6b904f,// 162 PAY 134 

    0x950b3449,// 163 PAY 135 

    0x9a22f1fc,// 164 PAY 136 

    0xb06c08b0,// 165 PAY 137 

    0x5eee6f32,// 166 PAY 138 

    0xe9cc7c1a,// 167 PAY 139 

    0x7872c0a5,// 168 PAY 140 

    0x793fda46,// 169 PAY 141 

    0xc948b56b,// 170 PAY 142 

    0xabe5b640,// 171 PAY 143 

    0xa9ba56b5,// 172 PAY 144 

    0xe17a9f0b,// 173 PAY 145 

    0x8b5b4caf,// 174 PAY 146 

    0xf6109267,// 175 PAY 147 

    0xd44b717a,// 176 PAY 148 

    0xaa1d8cb6,// 177 PAY 149 

    0xf4515736,// 178 PAY 150 

    0xb45b99f9,// 179 PAY 151 

    0x3cc8a0ab,// 180 PAY 152 

    0x20bdcd35,// 181 PAY 153 

    0x16d041d5,// 182 PAY 154 

    0xa9cd322c,// 183 PAY 155 

    0xddb07482,// 184 PAY 156 

    0x8a974342,// 185 PAY 157 

    0x68f3a9c6,// 186 PAY 158 

    0xeb404de9,// 187 PAY 159 

    0xe728f14d,// 188 PAY 160 

    0xd1f9c1aa,// 189 PAY 161 

    0x095aa938,// 190 PAY 162 

    0xf85e40bf,// 191 PAY 163 

    0x7629e95f,// 192 PAY 164 

    0xaafa3afd,// 193 PAY 165 

    0xa190708d,// 194 PAY 166 

    0x49a25a9e,// 195 PAY 167 

    0x850f33f1,// 196 PAY 168 

    0x2ded73b5,// 197 PAY 169 

    0xf9abedd5,// 198 PAY 170 

    0x8bf446ce,// 199 PAY 171 

    0xa42c1fc1,// 200 PAY 172 

    0x25a84981,// 201 PAY 173 

    0x5bbb94b7,// 202 PAY 174 

    0x43f28df3,// 203 PAY 175 

    0x8617cae2,// 204 PAY 176 

    0x779c042c,// 205 PAY 177 

    0x027ce365,// 206 PAY 178 

    0x429be128,// 207 PAY 179 

    0x9c9e4975,// 208 PAY 180 

    0x6fdc8891,// 209 PAY 181 

    0x575a9b39,// 210 PAY 182 

    0xe267e582,// 211 PAY 183 

    0xd4492ee9,// 212 PAY 184 

    0xa30a1df4,// 213 PAY 185 

    0x1f1ef35e,// 214 PAY 186 

    0xbfa5559e,// 215 PAY 187 

    0x28e16bb6,// 216 PAY 188 

    0x24ce19ee,// 217 PAY 189 

    0xffd21990,// 218 PAY 190 

    0x07cbd5ec,// 219 PAY 191 

    0x429a3cd4,// 220 PAY 192 

    0x8f6a2dec,// 221 PAY 193 

    0xdf5b685b,// 222 PAY 194 

    0x87de9fe1,// 223 PAY 195 

    0x82fe3002,// 224 PAY 196 

    0x001ff3a5,// 225 PAY 197 

    0xc718b5df,// 226 PAY 198 

    0x740d2bc8,// 227 PAY 199 

    0x8c10ca4f,// 228 PAY 200 

    0x8a4cda41,// 229 PAY 201 

    0xe16fb23a,// 230 PAY 202 

    0xab2881d8,// 231 PAY 203 

    0xdf26d1ce,// 232 PAY 204 

    0xba6b99f0,// 233 PAY 205 

    0x67d80176,// 234 PAY 206 

    0x4ffd6f48,// 235 PAY 207 

    0x08844072,// 236 PAY 208 

    0xe477d365,// 237 PAY 209 

    0xd1ce729b,// 238 PAY 210 

    0xe7594d13,// 239 PAY 211 

    0xe588b38b,// 240 PAY 212 

    0xdb1d5193,// 241 PAY 213 

    0x6a141d8e,// 242 PAY 214 

    0xc9f07ada,// 243 PAY 215 

    0xf360ff9b,// 244 PAY 216 

    0x42b7a873,// 245 PAY 217 

    0x3dbe9115,// 246 PAY 218 

    0x80388e31,// 247 PAY 219 

    0x41ba948c,// 248 PAY 220 

    0xcdeeebcd,// 249 PAY 221 

    0xf133eab7,// 250 PAY 222 

    0x65d3afec,// 251 PAY 223 

    0x08904ca2,// 252 PAY 224 

    0xe2651d1f,// 253 PAY 225 

    0x3c0b330d,// 254 PAY 226 

    0x7a5bcc02,// 255 PAY 227 

    0xefa7a2eb,// 256 PAY 228 

    0x13a5184a,// 257 PAY 229 

    0x424677f3,// 258 PAY 230 

    0xd7ff66be,// 259 PAY 231 

    0x2e1214d1,// 260 PAY 232 

    0x28424067,// 261 PAY 233 

    0xc40ad686,// 262 PAY 234 

    0x4edbc7fe,// 263 PAY 235 

    0xea40444c,// 264 PAY 236 

    0x3a306a50,// 265 PAY 237 

    0x223c5b65,// 266 PAY 238 

    0x0f53ca48,// 267 PAY 239 

    0xb31c3a0c,// 268 PAY 240 

    0xf956e4f7,// 269 PAY 241 

    0xfc915dbe,// 270 PAY 242 

    0x26b1806d,// 271 PAY 243 

    0x387ce920,// 272 PAY 244 

    0xbe2cbc08,// 273 PAY 245 

    0x95d4df41,// 274 PAY 246 

    0x51e3e93f,// 275 PAY 247 

    0x047e7a32,// 276 PAY 248 

    0xf3a702db,// 277 PAY 249 

    0x76392907,// 278 PAY 250 

    0x94207bf7,// 279 PAY 251 

    0x068e5ab8,// 280 PAY 252 

    0x9bb3aadd,// 281 PAY 253 

    0xe0ecfd99,// 282 PAY 254 

    0xd983b8f2,// 283 PAY 255 

    0xeefa8707,// 284 PAY 256 

    0x69c467f1,// 285 PAY 257 

    0x309e9c37,// 286 PAY 258 

    0x47e201e4,// 287 PAY 259 

    0x79b38151,// 288 PAY 260 

    0x7b2515bb,// 289 PAY 261 

    0x4ab30d33,// 290 PAY 262 

    0xf14b5678,// 291 PAY 263 

    0x9730c047,// 292 PAY 264 

    0x26ea37fd,// 293 PAY 265 

    0x10e48248,// 294 PAY 266 

    0x3aec8ea9,// 295 PAY 267 

    0x46f3cbc0,// 296 PAY 268 

    0xbb9d4869,// 297 PAY 269 

    0x44f13eca,// 298 PAY 270 

    0x979344f3,// 299 PAY 271 

    0x9d08a269,// 300 PAY 272 

    0x53ace54d,// 301 PAY 273 

    0xcae1f0b5,// 302 PAY 274 

    0x4a73ead9,// 303 PAY 275 

    0x46cbef54,// 304 PAY 276 

    0xdf7262e2,// 305 PAY 277 

    0x06e12fb2,// 306 PAY 278 

    0x0c91d8ac,// 307 PAY 279 

    0xf8677bb0,// 308 PAY 280 

    0xbc6f7b93,// 309 PAY 281 

    0x82900f33,// 310 PAY 282 

    0xc799b623,// 311 PAY 283 

    0x6287d23c,// 312 PAY 284 

    0xe3bd8db4,// 313 PAY 285 

    0x23d69f12,// 314 PAY 286 

    0x67336d46,// 315 PAY 287 

    0xe2f1dcab,// 316 PAY 288 

    0xd0a91b25,// 317 PAY 289 

    0x90939a71,// 318 PAY 290 

    0xcad0ebad,// 319 PAY 291 

    0x383cd909,// 320 PAY 292 

    0x0ab014ec,// 321 PAY 293 

    0x767be2ee,// 322 PAY 294 

    0xeb0a9d5a,// 323 PAY 295 

    0xc76ac521,// 324 PAY 296 

    0xcd55d322,// 325 PAY 297 

    0x833a4b4b,// 326 PAY 298 

    0x40debbf5,// 327 PAY 299 

    0x78efe1fd,// 328 PAY 300 

    0xd2339472,// 329 PAY 301 

    0x59399f2f,// 330 PAY 302 

    0x6da4bb03,// 331 PAY 303 

    0x4c409e58,// 332 PAY 304 

    0x2d542866,// 333 PAY 305 

    0x33f8c9c9,// 334 PAY 306 

    0xdd8e556a,// 335 PAY 307 

    0xc1687299,// 336 PAY 308 

    0x084b0f75,// 337 PAY 309 

    0x46f737a9,// 338 PAY 310 

    0x3c2f9bea,// 339 PAY 311 

    0x43490694,// 340 PAY 312 

    0x358f0ddf,// 341 PAY 313 

    0x6e963802,// 342 PAY 314 

    0xe97b7f20,// 343 PAY 315 

    0xb1df2622,// 344 PAY 316 

    0x2888f91c,// 345 PAY 317 

    0x92a4c08a,// 346 PAY 318 

    0xf098a7a7,// 347 PAY 319 

    0x26f4264d,// 348 PAY 320 

    0x81caa278,// 349 PAY 321 

    0x97b32c08,// 350 PAY 322 

    0xaa347fa6,// 351 PAY 323 

    0x21c4a108,// 352 PAY 324 

    0x7fde893e,// 353 PAY 325 

    0x93e17e34,// 354 PAY 326 

    0xdd6a74d5,// 355 PAY 327 

    0xa1a99987,// 356 PAY 328 

    0x243bf539,// 357 PAY 329 

    0x9cd7cb40,// 358 PAY 330 

    0x610c1b42,// 359 PAY 331 

    0xab9ffad3,// 360 PAY 332 

    0xc639bca6,// 361 PAY 333 

    0x5842d976,// 362 PAY 334 

    0xfb97a9d5,// 363 PAY 335 

    0x18446439,// 364 PAY 336 

    0xc6be8e26,// 365 PAY 337 

    0x186106ae,// 366 PAY 338 

    0x693102f0,// 367 PAY 339 

    0x8e0d791d,// 368 PAY 340 

    0xe7702d96,// 369 PAY 341 

    0x170c04bc,// 370 PAY 342 

    0x2f9644e0,// 371 PAY 343 

    0x7819f7d4,// 372 PAY 344 

    0x0428b728,// 373 PAY 345 

    0x6ab3b423,// 374 PAY 346 

    0x1f5937da,// 375 PAY 347 

    0x47bf4064,// 376 PAY 348 

    0x68611428,// 377 PAY 349 

    0x97d62795,// 378 PAY 350 

    0xd78651a7,// 379 PAY 351 

    0xad824439,// 380 PAY 352 

    0x7e0e443f,// 381 PAY 353 

    0x2f1bcc87,// 382 PAY 354 

    0x31fcad9c,// 383 PAY 355 

    0x7dcbb59a,// 384 PAY 356 

    0x90c55c7d,// 385 PAY 357 

    0x40e72384,// 386 PAY 358 

    0x50146615,// 387 PAY 359 

    0x145f99d9,// 388 PAY 360 

    0x6005b0ff,// 389 PAY 361 

    0x6fe2ac95,// 390 PAY 362 

    0xd9045678,// 391 PAY 363 

    0x3005c6c7,// 392 PAY 364 

    0x53398519,// 393 PAY 365 

    0x1d543a1b,// 394 PAY 366 

    0x40986056,// 395 PAY 367 

    0x01a72e4e,// 396 PAY 368 

    0xbd7b2e82,// 397 PAY 369 

    0xf0044a84,// 398 PAY 370 

    0x1763212a,// 399 PAY 371 

    0xa7298fcc,// 400 PAY 372 

    0x6913d8ef,// 401 PAY 373 

    0xc72c5479,// 402 PAY 374 

    0xaf1a9818,// 403 PAY 375 

    0xbb4b1f61,// 404 PAY 376 

    0x2bb8bbfc,// 405 PAY 377 

    0x31b5dc39,// 406 PAY 378 

    0x312b0ffc,// 407 PAY 379 

    0x06f89363,// 408 PAY 380 

    0xf93f6962,// 409 PAY 381 

    0x931922eb,// 410 PAY 382 

    0x057a7f9b,// 411 PAY 383 

    0xf40680c4,// 412 PAY 384 

    0xb7ca7f7d,// 413 PAY 385 

    0x327123d9,// 414 PAY 386 

    0x1f6cf671,// 415 PAY 387 

    0x66525ed1,// 416 PAY 388 

    0x067da3a3,// 417 PAY 389 

    0xca216d42,// 418 PAY 390 

    0x12dfd153,// 419 PAY 391 

    0x9ffe625d,// 420 PAY 392 

    0x3c4213bf,// 421 PAY 393 

    0x1bd7f883,// 422 PAY 394 

    0x4ac4b065,// 423 PAY 395 

    0xb9d5cef8,// 424 PAY 396 

    0xc4c718d0,// 425 PAY 397 

    0x44d0fe62,// 426 PAY 398 

    0xe4856580,// 427 PAY 399 

    0xe5d09e4b,// 428 PAY 400 

    0xa985c996,// 429 PAY 401 

    0xad061329,// 430 PAY 402 

    0x1c6b2678,// 431 PAY 403 

    0x66055b7f,// 432 PAY 404 

    0xb216cae9,// 433 PAY 405 

    0xd07e3b6f,// 434 PAY 406 

    0xdc40b1a5,// 435 PAY 407 

    0x5d67f30b,// 436 PAY 408 

    0x9cc94e42,// 437 PAY 409 

    0x4deecfaf,// 438 PAY 410 

    0xd36b37f2,// 439 PAY 411 

    0xa582bea0,// 440 PAY 412 

    0x604b7c56,// 441 PAY 413 

    0x7a4db53d,// 442 PAY 414 

    0xcf6fa762,// 443 PAY 415 

    0xab18fe80,// 444 PAY 416 

    0x2207515e,// 445 PAY 417 

    0x07eee550,// 446 PAY 418 

    0x0508e991,// 447 PAY 419 

    0x241e0cb1,// 448 PAY 420 

    0xdd6761a7,// 449 PAY 421 

    0x1ba8edd2,// 450 PAY 422 

    0x853a87f2,// 451 PAY 423 

    0x25b47f29,// 452 PAY 424 

    0x11bbdec5,// 453 PAY 425 

    0x3a2e435e,// 454 PAY 426 

    0x32982038,// 455 PAY 427 

    0x8b4f7c3e,// 456 PAY 428 

    0xb16c0f0a,// 457 PAY 429 

    0x2dd7ced5,// 458 PAY 430 

    0x8bc84e94,// 459 PAY 431 

    0xabdb0924,// 460 PAY 432 

    0x0d9aca9e,// 461 PAY 433 

    0xf06fc3db,// 462 PAY 434 

    0xa1cbebdb,// 463 PAY 435 

    0xa3d29678,// 464 PAY 436 

    0xd375c118,// 465 PAY 437 

    0x8c7d0dd4,// 466 PAY 438 

    0x2bad7724,// 467 PAY 439 

    0x474aac14,// 468 PAY 440 

    0x36c8e129,// 469 PAY 441 

    0x80a23305,// 470 PAY 442 

    0xc683ce86,// 471 PAY 443 

    0xb6a3dc5a,// 472 PAY 444 

    0x14c05454,// 473 PAY 445 

    0xc9897f13,// 474 PAY 446 

    0xa55edd87,// 475 PAY 447 

    0x4f90d4dd,// 476 PAY 448 

    0xd7db5cf9,// 477 PAY 449 

    0xe9e0f913,// 478 PAY 450 

    0x455c2c43,// 479 PAY 451 

    0x656b579c,// 480 PAY 452 

    0x33a077e3,// 481 PAY 453 

    0x4976623e,// 482 PAY 454 

    0xb2dc6875,// 483 PAY 455 

    0x98208aa6,// 484 PAY 456 

    0xf6abfcca,// 485 PAY 457 

    0x15156318,// 486 PAY 458 

    0x387bc325,// 487 PAY 459 

    0xe464e551,// 488 PAY 460 

    0x1942c31a,// 489 PAY 461 

    0x7348055e,// 490 PAY 462 

    0x21ef4a0a,// 491 PAY 463 

    0x13095a7c,// 492 PAY 464 

    0x2df976e5,// 493 PAY 465 

    0x258e5144,// 494 PAY 466 

    0x23f1659a,// 495 PAY 467 

    0x7dd970d3,// 496 PAY 468 

    0x46c855b0,// 497 PAY 469 

    0xd7000000,// 498 PAY 470 

/// STA is 1 words. 

/// STA num_pkts       : 112 

/// STA pkt_idx        : 18 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xb1 

    0x0049b170 // 499 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 88 (0x58) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_sha1_pkt4_tmpl[] = {
    0xb8010058,// 1 CCH   1 

/// ECH cache_idx      : 0x04 

/// ECH pdu_tag        : 0x00 

    0x00040000,// 2 ECH   1 

/// SCX is 21 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound !save_icv insert_icv !check_icv sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : SHA1 

/// SCX aes_size        : AES256 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x4 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 8 

/// SCX authctx_size    : 40 

    0x08000015,// 3 SCX   1 

    0x8066480d,// 4 SCX   2 

    0x00002482,// 5 SCX   3 

    0xc0645da5,// 6 SCX   4 

    0x8fffafda,// 7 SCX   5 

    0xfc0309a2,// 8 SCX   6 

    0xb82a091b,// 9 SCX   7 

    0x0c2db65d,// 10 SCX   8 

    0x5a5ea9a4,// 11 SCX   9 

    0xce8cea98,// 12 SCX  10 

    0xe03d5480,// 13 SCX  11 

    0xc503262a,// 14 SCX  12 

    0xfaa6d17a,// 15 SCX  13 

    0x2d377281,// 16 SCX  14 

    0xc970498f,// 17 SCX  15 

    0xe1679499,// 18 SCX  16 

    0x35ccd899,// 19 SCX  17 

    0xa3fee89d,// 20 SCX  18 

    0x153eec2f,// 21 SCX  19 

    0x8760b866,// 22 SCX  20 

    0xa719c9d5,// 23 SCX  21 

/// BFD is 3 words. 

/// BFD tot_len        : 1335 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 391 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 391 

/// BFD lencrypto      : 40 

/// BFD ofstcrypto     : 148 

/// BFD (ofst+len)cry  : 188 

/// BFD ofstiv         : 140 

/// BFD ofsticv        : 596 

    0x00000187,// 24 BFD   1 

    0x00940028,// 25 BFD   2 

    0x0254008c,// 26 BFD   3 

/// MFM is 3 words. 

/// MFM vldnibs        : 13 

    0x13001e8c,// 27 MFM   1 

    0x528a8b53,// 28 MFM   2 

    0xb76f2d40,// 29 MFM   3 

/// BDA is 335 words. 

/// BDA size     is 1335 (0x537) 

/// BDA id       is 0xff9 

    0x05370ff9,// 30 BDA   1 

/// PAY Generic Data size   : 1335 byte(s) 

/// PAD Buffer Data Pad size   : 1 byte(s) 

    0x6ff827f6,// 31 PAY   1 

    0x9cc3ea28,// 32 PAY   2 

    0xac2d1bc1,// 33 PAY   3 

    0x2db725a8,// 34 PAY   4 

    0x7e20c550,// 35 PAY   5 

    0x69d1ab36,// 36 PAY   6 

    0x07e6345e,// 37 PAY   7 

    0x47130e20,// 38 PAY   8 

    0xbf76a80e,// 39 PAY   9 

    0x35cff346,// 40 PAY  10 

    0x85871029,// 41 PAY  11 

    0xafc36089,// 42 PAY  12 

    0x3582746d,// 43 PAY  13 

    0x95c261a3,// 44 PAY  14 

    0xa085123b,// 45 PAY  15 

    0xf2e953c3,// 46 PAY  16 

    0x70a19794,// 47 PAY  17 

    0x07a7666b,// 48 PAY  18 

    0x02c4c9bf,// 49 PAY  19 

    0xff3a0db8,// 50 PAY  20 

    0x8cce456b,// 51 PAY  21 

    0x2f027094,// 52 PAY  22 

    0xaf13ad86,// 53 PAY  23 

    0x13a184df,// 54 PAY  24 

    0x191ddb8e,// 55 PAY  25 

    0xe9abc9e4,// 56 PAY  26 

    0x96584127,// 57 PAY  27 

    0x37a1c59d,// 58 PAY  28 

    0x757a984b,// 59 PAY  29 

    0xa625d354,// 60 PAY  30 

    0x71a91da8,// 61 PAY  31 

    0x04863431,// 62 PAY  32 

    0x2c69d683,// 63 PAY  33 

    0x2301bc0f,// 64 PAY  34 

    0xab1770a9,// 65 PAY  35 

    0x54a886a1,// 66 PAY  36 

    0x0f69500a,// 67 PAY  37 

    0x6b9b9eaa,// 68 PAY  38 

    0xddd3964a,// 69 PAY  39 

    0xa8ce9393,// 70 PAY  40 

    0x4c3d3589,// 71 PAY  41 

    0xd5670028,// 72 PAY  42 

    0x1c37bd80,// 73 PAY  43 

    0xb68b9a49,// 74 PAY  44 

    0x6af5c4a8,// 75 PAY  45 

    0x9453094c,// 76 PAY  46 

    0xbd0cec91,// 77 PAY  47 

    0xa1a98002,// 78 PAY  48 

    0xf37393cc,// 79 PAY  49 

    0xe8ce4fb0,// 80 PAY  50 

    0x801ae1f0,// 81 PAY  51 

    0x5e16ec41,// 82 PAY  52 

    0x861761da,// 83 PAY  53 

    0xd07ce261,// 84 PAY  54 

    0x5985a079,// 85 PAY  55 

    0x7597cec0,// 86 PAY  56 

    0xa3bd305d,// 87 PAY  57 

    0xf93b4caa,// 88 PAY  58 

    0x89b8168e,// 89 PAY  59 

    0xf9c9a662,// 90 PAY  60 

    0x6e359b37,// 91 PAY  61 

    0xd9300cb7,// 92 PAY  62 

    0x6fcea01f,// 93 PAY  63 

    0x200622f4,// 94 PAY  64 

    0xdaae0b23,// 95 PAY  65 

    0x3de523f6,// 96 PAY  66 

    0x0d0950e5,// 97 PAY  67 

    0x3336a184,// 98 PAY  68 

    0x9ef778e1,// 99 PAY  69 

    0xe200750d,// 100 PAY  70 

    0x48ca31f7,// 101 PAY  71 

    0x6602ea14,// 102 PAY  72 

    0xe9e85bde,// 103 PAY  73 

    0xed0a6304,// 104 PAY  74 

    0x09a42be4,// 105 PAY  75 

    0x4ea4055a,// 106 PAY  76 

    0x37361084,// 107 PAY  77 

    0x3d6dd997,// 108 PAY  78 

    0x2b88ce1b,// 109 PAY  79 

    0x364dcc17,// 110 PAY  80 

    0x7c5d8b25,// 111 PAY  81 

    0x9397869c,// 112 PAY  82 

    0xd81af02d,// 113 PAY  83 

    0x551a1fde,// 114 PAY  84 

    0x42e66ddd,// 115 PAY  85 

    0xbf059a71,// 116 PAY  86 

    0x24d2e8f7,// 117 PAY  87 

    0xff51bdab,// 118 PAY  88 

    0x539b3e84,// 119 PAY  89 

    0x1c2c8a16,// 120 PAY  90 

    0x83e412ad,// 121 PAY  91 

    0x30170b18,// 122 PAY  92 

    0xdb182514,// 123 PAY  93 

    0xf7ea7757,// 124 PAY  94 

    0x195e7322,// 125 PAY  95 

    0x98df5c21,// 126 PAY  96 

    0x9361baf9,// 127 PAY  97 

    0xbe5518c6,// 128 PAY  98 

    0xc34b77ff,// 129 PAY  99 

    0xe9e5a073,// 130 PAY 100 

    0xbf79aabf,// 131 PAY 101 

    0x6fd57898,// 132 PAY 102 

    0x6ca3ab7b,// 133 PAY 103 

    0xe76ed1c4,// 134 PAY 104 

    0x69f4cdc9,// 135 PAY 105 

    0xd20701ed,// 136 PAY 106 

    0x0556716e,// 137 PAY 107 

    0x73bbb3eb,// 138 PAY 108 

    0x0f0a809d,// 139 PAY 109 

    0x8a48cf0e,// 140 PAY 110 

    0xe19f76a6,// 141 PAY 111 

    0x8a61d4cc,// 142 PAY 112 

    0x62c3b35c,// 143 PAY 113 

    0x401e8f70,// 144 PAY 114 

    0x98ea7123,// 145 PAY 115 

    0x71dec9aa,// 146 PAY 116 

    0xf34c0e0b,// 147 PAY 117 

    0x48725294,// 148 PAY 118 

    0x53986186,// 149 PAY 119 

    0x6cb5f62c,// 150 PAY 120 

    0x4a0d1714,// 151 PAY 121 

    0x648c34a1,// 152 PAY 122 

    0xac74e211,// 153 PAY 123 

    0x90766a9f,// 154 PAY 124 

    0x1b8b35a3,// 155 PAY 125 

    0x8a0609d6,// 156 PAY 126 

    0x68366476,// 157 PAY 127 

    0x35349390,// 158 PAY 128 

    0xb4922eba,// 159 PAY 129 

    0x96aa416e,// 160 PAY 130 

    0xe5826cbf,// 161 PAY 131 

    0xf9c2dc4e,// 162 PAY 132 

    0x36592988,// 163 PAY 133 

    0x11cc38f7,// 164 PAY 134 

    0x978a8e15,// 165 PAY 135 

    0x1608cce9,// 166 PAY 136 

    0x0dbbd88e,// 167 PAY 137 

    0x8a532de0,// 168 PAY 138 

    0x1d3dfa1a,// 169 PAY 139 

    0x82ad0f6d,// 170 PAY 140 

    0x473e7623,// 171 PAY 141 

    0x5df047ee,// 172 PAY 142 

    0xaa5c37a5,// 173 PAY 143 

    0x13a7d3aa,// 174 PAY 144 

    0x7eb9f38f,// 175 PAY 145 

    0xd346f664,// 176 PAY 146 

    0x322297f6,// 177 PAY 147 

    0xa07d6e32,// 178 PAY 148 

    0x56a22c7b,// 179 PAY 149 

    0x10a0e1cd,// 180 PAY 150 

    0x6f445feb,// 181 PAY 151 

    0xc6b06147,// 182 PAY 152 

    0x61227860,// 183 PAY 153 

    0xec8bb65d,// 184 PAY 154 

    0xef48e422,// 185 PAY 155 

    0x11aff699,// 186 PAY 156 

    0x37890d79,// 187 PAY 157 

    0x042645c3,// 188 PAY 158 

    0x0b4d1503,// 189 PAY 159 

    0x9d2da9ed,// 190 PAY 160 

    0xf5239ed1,// 191 PAY 161 

    0x2626b2be,// 192 PAY 162 

    0xe344693f,// 193 PAY 163 

    0xfbd845bb,// 194 PAY 164 

    0xf4073a21,// 195 PAY 165 

    0x9364a32f,// 196 PAY 166 

    0xd1e67e3e,// 197 PAY 167 

    0x9bddb148,// 198 PAY 168 

    0xb38c9cca,// 199 PAY 169 

    0x9b21e933,// 200 PAY 170 

    0xda08d07b,// 201 PAY 171 

    0x6f9f2814,// 202 PAY 172 

    0xac28e3a1,// 203 PAY 173 

    0x1938a4c3,// 204 PAY 174 

    0x0fad7f32,// 205 PAY 175 

    0x8cf65bc8,// 206 PAY 176 

    0x13b37275,// 207 PAY 177 

    0xd20407c3,// 208 PAY 178 

    0x6042838d,// 209 PAY 179 

    0x6660fdd4,// 210 PAY 180 

    0x01cf57ab,// 211 PAY 181 

    0xc08a1e65,// 212 PAY 182 

    0x8a260939,// 213 PAY 183 

    0x4ca2c663,// 214 PAY 184 

    0xd571cddf,// 215 PAY 185 

    0x17be8fb0,// 216 PAY 186 

    0xe7c59c35,// 217 PAY 187 

    0xf5acc4fb,// 218 PAY 188 

    0x12f96b41,// 219 PAY 189 

    0xfc65da29,// 220 PAY 190 

    0x88a9dfe9,// 221 PAY 191 

    0x88711fb7,// 222 PAY 192 

    0x87cee88a,// 223 PAY 193 

    0x88f42ab9,// 224 PAY 194 

    0xf1b12370,// 225 PAY 195 

    0xe72b59f3,// 226 PAY 196 

    0x68957171,// 227 PAY 197 

    0x4143f4e9,// 228 PAY 198 

    0x3cd9fe36,// 229 PAY 199 

    0x31417479,// 230 PAY 200 

    0xf6a0f884,// 231 PAY 201 

    0xe01b1257,// 232 PAY 202 

    0xb34b856b,// 233 PAY 203 

    0x06b43c3f,// 234 PAY 204 

    0xa1de3286,// 235 PAY 205 

    0xdbbf09bc,// 236 PAY 206 

    0x604d0ea9,// 237 PAY 207 

    0xd9595b6b,// 238 PAY 208 

    0xa4c95238,// 239 PAY 209 

    0x60fa19cd,// 240 PAY 210 

    0xa850065e,// 241 PAY 211 

    0x84fd25ac,// 242 PAY 212 

    0x4a676e02,// 243 PAY 213 

    0x56cc6287,// 244 PAY 214 

    0xbe5963b0,// 245 PAY 215 

    0xaeee4bf4,// 246 PAY 216 

    0xf5579467,// 247 PAY 217 

    0x41da59ec,// 248 PAY 218 

    0x122e52be,// 249 PAY 219 

    0xb8da859d,// 250 PAY 220 

    0x3cc1c619,// 251 PAY 221 

    0x00f5ddc7,// 252 PAY 222 

    0x0b54faca,// 253 PAY 223 

    0x7fb1a00d,// 254 PAY 224 

    0xca36c0fe,// 255 PAY 225 

    0x987f9e50,// 256 PAY 226 

    0xc760e710,// 257 PAY 227 

    0xe16f0238,// 258 PAY 228 

    0x5b328b89,// 259 PAY 229 

    0x3742cc34,// 260 PAY 230 

    0x75fc7a22,// 261 PAY 231 

    0x0b395458,// 262 PAY 232 

    0x8544dc38,// 263 PAY 233 

    0x2f7bf171,// 264 PAY 234 

    0x22bb2b6e,// 265 PAY 235 

    0xb0ebcbf5,// 266 PAY 236 

    0x50b68810,// 267 PAY 237 

    0xaaa73335,// 268 PAY 238 

    0x1343b49e,// 269 PAY 239 

    0xa7479902,// 270 PAY 240 

    0x434cedf9,// 271 PAY 241 

    0x58f953d3,// 272 PAY 242 

    0x73f41806,// 273 PAY 243 

    0x379f2fcc,// 274 PAY 244 

    0xaebdc9aa,// 275 PAY 245 

    0xc4f5d18f,// 276 PAY 246 

    0xf04fc99e,// 277 PAY 247 

    0xbebe6017,// 278 PAY 248 

    0xbe17a86d,// 279 PAY 249 

    0xb6861baa,// 280 PAY 250 

    0x0e4d5f68,// 281 PAY 251 

    0xc8d14490,// 282 PAY 252 

    0x91769e8b,// 283 PAY 253 

    0x0be3ad28,// 284 PAY 254 

    0x6d7fc0bd,// 285 PAY 255 

    0x05b755a7,// 286 PAY 256 

    0x135671e0,// 287 PAY 257 

    0xeeaa2d6f,// 288 PAY 258 

    0x952c1735,// 289 PAY 259 

    0xfc54cbf9,// 290 PAY 260 

    0x072391f9,// 291 PAY 261 

    0x94e6081d,// 292 PAY 262 

    0xc420c988,// 293 PAY 263 

    0xb1665448,// 294 PAY 264 

    0x877b61de,// 295 PAY 265 

    0x3431561d,// 296 PAY 266 

    0x13930043,// 297 PAY 267 

    0xef0ad1eb,// 298 PAY 268 

    0xe9f8cac3,// 299 PAY 269 

    0xa6ecfabf,// 300 PAY 270 

    0xb272f0e7,// 301 PAY 271 

    0x4dfbeb43,// 302 PAY 272 

    0x4a430343,// 303 PAY 273 

    0xe546afeb,// 304 PAY 274 

    0x4aca0e97,// 305 PAY 275 

    0xde3d73eb,// 306 PAY 276 

    0x965ea15a,// 307 PAY 277 

    0x03ed58a6,// 308 PAY 278 

    0x51ddffb5,// 309 PAY 279 

    0x65d5664c,// 310 PAY 280 

    0x4f3c3448,// 311 PAY 281 

    0xca1ac0ff,// 312 PAY 282 

    0x7009fe17,// 313 PAY 283 

    0xb4507d31,// 314 PAY 284 

    0xc7493345,// 315 PAY 285 

    0x607303b1,// 316 PAY 286 

    0x3a5cddf1,// 317 PAY 287 

    0xfd592b8a,// 318 PAY 288 

    0x0f144e7f,// 319 PAY 289 

    0xe3365cd2,// 320 PAY 290 

    0x6f2f1d68,// 321 PAY 291 

    0xeefd7a40,// 322 PAY 292 

    0x61ad4a74,// 323 PAY 293 

    0x38504f8d,// 324 PAY 294 

    0x5481dadc,// 325 PAY 295 

    0x6f5b049b,// 326 PAY 296 

    0x7ea1d21a,// 327 PAY 297 

    0x76476bfe,// 328 PAY 298 

    0x7ea799e8,// 329 PAY 299 

    0x0d237105,// 330 PAY 300 

    0x1b3c13b1,// 331 PAY 301 

    0x23b89a46,// 332 PAY 302 

    0xa0e4f5bf,// 333 PAY 303 

    0x21e3f1ed,// 334 PAY 304 

    0x2b01599d,// 335 PAY 305 

    0x7a05f786,// 336 PAY 306 

    0xd9fc0b49,// 337 PAY 307 

    0x5b9b7a6d,// 338 PAY 308 

    0xb0473b73,// 339 PAY 309 

    0xe1d352d1,// 340 PAY 310 

    0x0a06ccec,// 341 PAY 311 

    0x57cc420b,// 342 PAY 312 

    0x0e4f0bcd,// 343 PAY 313 

    0xea33e395,// 344 PAY 314 

    0x3d5d550d,// 345 PAY 315 

    0x43395db7,// 346 PAY 316 

    0x58428cbc,// 347 PAY 317 

    0xaa4e6068,// 348 PAY 318 

    0xa02f4c05,// 349 PAY 319 

    0xe03f5fa8,// 350 PAY 320 

    0x74aec080,// 351 PAY 321 

    0x7d4f4966,// 352 PAY 322 

    0xc263ab75,// 353 PAY 323 

    0x0b4f5ad2,// 354 PAY 324 

    0x591025ea,// 355 PAY 325 

    0x482b578b,// 356 PAY 326 

    0x01d684ed,// 357 PAY 327 

    0x220ab8df,// 358 PAY 328 

    0x8430ba45,// 359 PAY 329 

    0xa8f56e83,// 360 PAY 330 

    0xe7fc1c20,// 361 PAY 331 

    0xabc50c0a,// 362 PAY 332 

    0x9cd7db82,// 363 PAY 333 

    0xae2f8c00,// 364 PAY 334 

/// STA is 1 words. 

/// STA num_pkts       : 162 

/// STA pkt_idx        : 20 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xce 

    0x0051cea2 // 365 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 88 (0x58) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_sha1_pkt5_tmpl[] = {
    0xb8010058,// 1 CCH   1 

/// ECH cache_idx      : 0x0d 

/// ECH pdu_tag        : 0x00 

    0x000d0000,// 2 ECH   1 

/// SCX is 21 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound !save_icv !insert_icv check_icv sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : SHA1 

/// SCX aes_size        : AES256 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x3 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 8 

/// SCX authctx_size    : 40 

    0x08000015,// 3 SCX   1 

    0x806648aa,// 4 SCX   2 

    0x00001382,// 5 SCX   3 

    0x407bf5fe,// 6 SCX   4 

    0x52c1f895,// 7 SCX   5 

    0x06b6fe8a,// 8 SCX   6 

    0xfac4dccd,// 9 SCX   7 

    0x60d0a013,// 10 SCX   8 

    0xa76b19de,// 11 SCX   9 

    0x45af4e26,// 12 SCX  10 

    0xa28faf97,// 13 SCX  11 

    0xc581d6c7,// 14 SCX  12 

    0xb8a4eb6e,// 15 SCX  13 

    0x257643de,// 16 SCX  14 

    0x03f6dc04,// 17 SCX  15 

    0x09ddd7e8,// 18 SCX  16 

    0x4ab5bec2,// 19 SCX  17 

    0x581aa9b2,// 20 SCX  18 

    0x99e4bc20,// 21 SCX  19 

    0xa36ccb75,// 22 SCX  20 

    0xf600bcb9,// 23 SCX  21 

/// BFD is 3 words. 

/// BFD tot_len        : 2024 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 216 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 216 

/// BFD lencrypto      : 32 

/// BFD ofstcrypto     : 168 

/// BFD (ofst+len)cry  : 200 

/// BFD ofstiv         : 124 

/// BFD ofsticv        : 908 

    0x000000d8,// 24 BFD   1 

    0x00a80020,// 25 BFD   2 

    0x038c007c,// 26 BFD   3 

/// MFM is 3 words. 

/// MFM vldnibs        : 14 

    0x140095b2,// 27 MFM   1 

    0x413ce3b4,// 28 MFM   2 

    0x33464422,// 29 MFM   3 

/// BDA is 507 words. 

/// BDA size     is 2024 (0x7e8) 

/// BDA id       is 0x93b0 

    0x07e893b0,// 30 BDA   1 

/// PAY Generic Data size   : 2024 byte(s) 

/// PAD Buffer Data Pad size   : 0 byte(s) 

    0x5fc230c1,// 31 PAY   1 

    0x2081d301,// 32 PAY   2 

    0x83c386d8,// 33 PAY   3 

    0xf9b79e7a,// 34 PAY   4 

    0x0213824b,// 35 PAY   5 

    0xfb8e34d0,// 36 PAY   6 

    0xa270b7a0,// 37 PAY   7 

    0x04b40780,// 38 PAY   8 

    0xb65480d0,// 39 PAY   9 

    0x4c17e57a,// 40 PAY  10 

    0xf956f3ce,// 41 PAY  11 

    0x50f284e7,// 42 PAY  12 

    0xbed5f332,// 43 PAY  13 

    0x3ef08e62,// 44 PAY  14 

    0xd0e77981,// 45 PAY  15 

    0xf8f0ba1c,// 46 PAY  16 

    0xd9f79ed4,// 47 PAY  17 

    0x3057e87c,// 48 PAY  18 

    0xe9d63259,// 49 PAY  19 

    0x4b464d65,// 50 PAY  20 

    0x141b2bbe,// 51 PAY  21 

    0xae74f3f0,// 52 PAY  22 

    0x34c15605,// 53 PAY  23 

    0xaf71562f,// 54 PAY  24 

    0x6e49e2ee,// 55 PAY  25 

    0xb59942a1,// 56 PAY  26 

    0x1b51f826,// 57 PAY  27 

    0x4a73113f,// 58 PAY  28 

    0x640eba58,// 59 PAY  29 

    0x2b163ef0,// 60 PAY  30 

    0xa4d3c018,// 61 PAY  31 

    0x83ef563a,// 62 PAY  32 

    0xe39f11ef,// 63 PAY  33 

    0x23ef7055,// 64 PAY  34 

    0x4a3cc2c3,// 65 PAY  35 

    0x8741858f,// 66 PAY  36 

    0xf4a023e9,// 67 PAY  37 

    0x144cf4be,// 68 PAY  38 

    0xc2531afe,// 69 PAY  39 

    0xf7ae99ce,// 70 PAY  40 

    0xcd9f338e,// 71 PAY  41 

    0x8467d369,// 72 PAY  42 

    0x975e612c,// 73 PAY  43 

    0x52bdf308,// 74 PAY  44 

    0x75e3d03e,// 75 PAY  45 

    0xbc48bd23,// 76 PAY  46 

    0x1327304d,// 77 PAY  47 

    0x6bb0051a,// 78 PAY  48 

    0x8a1cfbd9,// 79 PAY  49 

    0x05bf051e,// 80 PAY  50 

    0x15c1728c,// 81 PAY  51 

    0x789ebcc8,// 82 PAY  52 

    0xad18dbc2,// 83 PAY  53 

    0x883ebc4a,// 84 PAY  54 

    0xdc7a7d89,// 85 PAY  55 

    0x54472eb8,// 86 PAY  56 

    0x2a20f0e4,// 87 PAY  57 

    0x00a2c8a1,// 88 PAY  58 

    0x50c4f110,// 89 PAY  59 

    0x73df4672,// 90 PAY  60 

    0x5498649a,// 91 PAY  61 

    0xfca132ff,// 92 PAY  62 

    0xa41b4410,// 93 PAY  63 

    0x5ca52e2b,// 94 PAY  64 

    0xa33c3e41,// 95 PAY  65 

    0xb01629a3,// 96 PAY  66 

    0x3847ed47,// 97 PAY  67 

    0x7181d28b,// 98 PAY  68 

    0xcb059f47,// 99 PAY  69 

    0xab2bd516,// 100 PAY  70 

    0xc9c1c692,// 101 PAY  71 

    0x1b73406c,// 102 PAY  72 

    0x6c16fd19,// 103 PAY  73 

    0xd8486a1b,// 104 PAY  74 

    0x573b2570,// 105 PAY  75 

    0x78289c34,// 106 PAY  76 

    0x7ad75cde,// 107 PAY  77 

    0xb884e70e,// 108 PAY  78 

    0xb68a7e8a,// 109 PAY  79 

    0x69cae614,// 110 PAY  80 

    0xef66a6ba,// 111 PAY  81 

    0x3cc7c0e8,// 112 PAY  82 

    0x647a5120,// 113 PAY  83 

    0x412613da,// 114 PAY  84 

    0x85949fd2,// 115 PAY  85 

    0x44d135a9,// 116 PAY  86 

    0x545a071a,// 117 PAY  87 

    0x48b401fe,// 118 PAY  88 

    0x3c605946,// 119 PAY  89 

    0xc3ef674b,// 120 PAY  90 

    0x5d4b1578,// 121 PAY  91 

    0x3f71533a,// 122 PAY  92 

    0x974454ff,// 123 PAY  93 

    0x62332356,// 124 PAY  94 

    0xc5dd4c62,// 125 PAY  95 

    0xea4ac58f,// 126 PAY  96 

    0xcf859bdb,// 127 PAY  97 

    0x701b44da,// 128 PAY  98 

    0x2fcca7e3,// 129 PAY  99 

    0xa2781c4a,// 130 PAY 100 

    0x0fd1c5b0,// 131 PAY 101 

    0xf95e421e,// 132 PAY 102 

    0xc90ffc72,// 133 PAY 103 

    0x0184d51b,// 134 PAY 104 

    0x29277656,// 135 PAY 105 

    0x4e9d142a,// 136 PAY 106 

    0xae6dfe94,// 137 PAY 107 

    0x860e0bcb,// 138 PAY 108 

    0x54ff3c70,// 139 PAY 109 

    0xe6514eba,// 140 PAY 110 

    0xe5598a5d,// 141 PAY 111 

    0x4dc8d6fe,// 142 PAY 112 

    0xdf732149,// 143 PAY 113 

    0x293cfff3,// 144 PAY 114 

    0x040369c8,// 145 PAY 115 

    0xbafd8fc0,// 146 PAY 116 

    0xbbd333ac,// 147 PAY 117 

    0x1e3992e9,// 148 PAY 118 

    0x41311439,// 149 PAY 119 

    0xcd5886a9,// 150 PAY 120 

    0xf9aaa5ec,// 151 PAY 121 

    0x2ff71806,// 152 PAY 122 

    0xd860281b,// 153 PAY 123 

    0x3b93b7c3,// 154 PAY 124 

    0xed43c392,// 155 PAY 125 

    0x1ce0d26e,// 156 PAY 126 

    0xe2da9595,// 157 PAY 127 

    0xdb2eebb7,// 158 PAY 128 

    0x57293ad3,// 159 PAY 129 

    0xdd244f28,// 160 PAY 130 

    0xeaf6963a,// 161 PAY 131 

    0x398fdfcc,// 162 PAY 132 

    0xad862a84,// 163 PAY 133 

    0xcc2aca91,// 164 PAY 134 

    0x72410a4c,// 165 PAY 135 

    0xad7e69af,// 166 PAY 136 

    0xc4497795,// 167 PAY 137 

    0x08aa753d,// 168 PAY 138 

    0x809c0a2e,// 169 PAY 139 

    0xe894d78d,// 170 PAY 140 

    0xdfccb1cc,// 171 PAY 141 

    0xbf68058d,// 172 PAY 142 

    0x40b13faa,// 173 PAY 143 

    0x40fd2354,// 174 PAY 144 

    0x83b58e7c,// 175 PAY 145 

    0x986ebde4,// 176 PAY 146 

    0x6dc773e6,// 177 PAY 147 

    0x8c5697d2,// 178 PAY 148 

    0xdf36e2e9,// 179 PAY 149 

    0xc186d3bd,// 180 PAY 150 

    0x3af3a61b,// 181 PAY 151 

    0x8996dc04,// 182 PAY 152 

    0x90711514,// 183 PAY 153 

    0x8b6a12b1,// 184 PAY 154 

    0x4666c53c,// 185 PAY 155 

    0x6e92db6a,// 186 PAY 156 

    0x64e33b08,// 187 PAY 157 

    0x8616099a,// 188 PAY 158 

    0x3b9c36dd,// 189 PAY 159 

    0x73023e5b,// 190 PAY 160 

    0xf1cdf6d5,// 191 PAY 161 

    0x8c18c317,// 192 PAY 162 

    0x09557b5c,// 193 PAY 163 

    0xfc8303c8,// 194 PAY 164 

    0x57ccbebb,// 195 PAY 165 

    0x854fe961,// 196 PAY 166 

    0x704a962d,// 197 PAY 167 

    0xe190506c,// 198 PAY 168 

    0xef3f798d,// 199 PAY 169 

    0x217784bb,// 200 PAY 170 

    0xde8cf6bb,// 201 PAY 171 

    0x8df29e45,// 202 PAY 172 

    0x458a13e2,// 203 PAY 173 

    0x51ffda1f,// 204 PAY 174 

    0xc5b97c4f,// 205 PAY 175 

    0x8429179a,// 206 PAY 176 

    0x3f944e6b,// 207 PAY 177 

    0xc05cbbe7,// 208 PAY 178 

    0x2e14473f,// 209 PAY 179 

    0x462a3809,// 210 PAY 180 

    0x2889a507,// 211 PAY 181 

    0x598579ab,// 212 PAY 182 

    0x0f079119,// 213 PAY 183 

    0x531121d1,// 214 PAY 184 

    0x1e23d706,// 215 PAY 185 

    0x2bc80cce,// 216 PAY 186 

    0x02506f61,// 217 PAY 187 

    0x6f463e3a,// 218 PAY 188 

    0xc3f73b31,// 219 PAY 189 

    0x8965263a,// 220 PAY 190 

    0xa9ea22d3,// 221 PAY 191 

    0xec24ba94,// 222 PAY 192 

    0x6cb132df,// 223 PAY 193 

    0x8244f1f1,// 224 PAY 194 

    0xfcc2997c,// 225 PAY 195 

    0x014a0456,// 226 PAY 196 

    0x4610b21a,// 227 PAY 197 

    0xc19a5255,// 228 PAY 198 

    0x0953dad7,// 229 PAY 199 

    0xca00160d,// 230 PAY 200 

    0xd23a12c0,// 231 PAY 201 

    0x10d7c6ac,// 232 PAY 202 

    0xf93d95c3,// 233 PAY 203 

    0x3b71c687,// 234 PAY 204 

    0xbdc00612,// 235 PAY 205 

    0xa2546c3b,// 236 PAY 206 

    0x5ec29d14,// 237 PAY 207 

    0x48104906,// 238 PAY 208 

    0x3f989ac7,// 239 PAY 209 

    0x9b8dcf7d,// 240 PAY 210 

    0x38acaecc,// 241 PAY 211 

    0x3d19af53,// 242 PAY 212 

    0x8b584355,// 243 PAY 213 

    0x602636ed,// 244 PAY 214 

    0x2d46bf5c,// 245 PAY 215 

    0x071b6991,// 246 PAY 216 

    0x715ce77a,// 247 PAY 217 

    0x634502a6,// 248 PAY 218 

    0xcf99015c,// 249 PAY 219 

    0x9866347f,// 250 PAY 220 

    0xdf622071,// 251 PAY 221 

    0x76926942,// 252 PAY 222 

    0xa860b4ff,// 253 PAY 223 

    0x39845b11,// 254 PAY 224 

    0x2299f87b,// 255 PAY 225 

    0x91f0ea5e,// 256 PAY 226 

    0x938aac17,// 257 PAY 227 

    0xa99edff2,// 258 PAY 228 

    0xe63e0509,// 259 PAY 229 

    0xa81fd0ec,// 260 PAY 230 

    0x763460ea,// 261 PAY 231 

    0x614b56dd,// 262 PAY 232 

    0xa8d7d352,// 263 PAY 233 

    0xab3fc4b9,// 264 PAY 234 

    0x35bfaf24,// 265 PAY 235 

    0x195a12ed,// 266 PAY 236 

    0xe5f7d049,// 267 PAY 237 

    0x6d24301a,// 268 PAY 238 

    0x6b4bd631,// 269 PAY 239 

    0x97afe29e,// 270 PAY 240 

    0x9e3b8d16,// 271 PAY 241 

    0x1896f3a5,// 272 PAY 242 

    0x74d79a89,// 273 PAY 243 

    0x574d4663,// 274 PAY 244 

    0x908fa4b6,// 275 PAY 245 

    0x187b028d,// 276 PAY 246 

    0xd603d19e,// 277 PAY 247 

    0x17b3cf22,// 278 PAY 248 

    0xc21190df,// 279 PAY 249 

    0x1b0444c1,// 280 PAY 250 

    0x483cbd00,// 281 PAY 251 

    0x66d0bc36,// 282 PAY 252 

    0x5987cfd9,// 283 PAY 253 

    0xcae2681a,// 284 PAY 254 

    0x706a8b9d,// 285 PAY 255 

    0xfd8079ca,// 286 PAY 256 

    0x0e74cb2f,// 287 PAY 257 

    0x3ac9ec53,// 288 PAY 258 

    0x19863774,// 289 PAY 259 

    0x2157058b,// 290 PAY 260 

    0x19721f75,// 291 PAY 261 

    0x1365670a,// 292 PAY 262 

    0x79f9bb96,// 293 PAY 263 

    0xaab64ce6,// 294 PAY 264 

    0xd1535d41,// 295 PAY 265 

    0x4d9c3949,// 296 PAY 266 

    0xda01dac8,// 297 PAY 267 

    0x729d9c8d,// 298 PAY 268 

    0x1ab53f35,// 299 PAY 269 

    0xc3230680,// 300 PAY 270 

    0x41832aff,// 301 PAY 271 

    0x31377cec,// 302 PAY 272 

    0x9fffa8ea,// 303 PAY 273 

    0x989e548e,// 304 PAY 274 

    0xea52ee8a,// 305 PAY 275 

    0x4131eba8,// 306 PAY 276 

    0xa1f5bceb,// 307 PAY 277 

    0xd1656c1c,// 308 PAY 278 

    0x62b05625,// 309 PAY 279 

    0x1138c1ec,// 310 PAY 280 

    0x940eb47a,// 311 PAY 281 

    0x0b0f938c,// 312 PAY 282 

    0x95142c8c,// 313 PAY 283 

    0x9139667f,// 314 PAY 284 

    0x16132263,// 315 PAY 285 

    0xd8718112,// 316 PAY 286 

    0xdce92160,// 317 PAY 287 

    0xfc63beca,// 318 PAY 288 

    0x2c0ce901,// 319 PAY 289 

    0x89f2f523,// 320 PAY 290 

    0xbe0521f5,// 321 PAY 291 

    0xaf28c5b3,// 322 PAY 292 

    0x3541a454,// 323 PAY 293 

    0xb3f0a4a0,// 324 PAY 294 

    0xa892c32f,// 325 PAY 295 

    0x7add54ff,// 326 PAY 296 

    0xd48f4833,// 327 PAY 297 

    0x2e5e309e,// 328 PAY 298 

    0x3bab1ddd,// 329 PAY 299 

    0x2c213f80,// 330 PAY 300 

    0x199b2655,// 331 PAY 301 

    0x15f5a912,// 332 PAY 302 

    0xc0c7689e,// 333 PAY 303 

    0xba46dfa4,// 334 PAY 304 

    0xa2e735b7,// 335 PAY 305 

    0x0b2cdbb2,// 336 PAY 306 

    0x969f020f,// 337 PAY 307 

    0xf14b60ae,// 338 PAY 308 

    0x5949dcc8,// 339 PAY 309 

    0x1ff3ae6d,// 340 PAY 310 

    0xbd3f2958,// 341 PAY 311 

    0x01221238,// 342 PAY 312 

    0x952af91b,// 343 PAY 313 

    0x114a7eb9,// 344 PAY 314 

    0x859cb1c4,// 345 PAY 315 

    0x4185dc14,// 346 PAY 316 

    0x395fd167,// 347 PAY 317 

    0xcb1b402a,// 348 PAY 318 

    0x27ca7c73,// 349 PAY 319 

    0xf1c740e0,// 350 PAY 320 

    0xfdce2042,// 351 PAY 321 

    0xdf174394,// 352 PAY 322 

    0xa0ec4862,// 353 PAY 323 

    0x31b5fcb4,// 354 PAY 324 

    0x5bd43278,// 355 PAY 325 

    0xa6604301,// 356 PAY 326 

    0xa66b4014,// 357 PAY 327 

    0x9b28d55e,// 358 PAY 328 

    0xb509c659,// 359 PAY 329 

    0x99fec805,// 360 PAY 330 

    0xf3d3033d,// 361 PAY 331 

    0xd0a538f9,// 362 PAY 332 

    0x18eb7966,// 363 PAY 333 

    0xf53a891b,// 364 PAY 334 

    0x6b702efb,// 365 PAY 335 

    0x098168c7,// 366 PAY 336 

    0x244f9415,// 367 PAY 337 

    0x957908f5,// 368 PAY 338 

    0xf0f3513a,// 369 PAY 339 

    0x28b326c0,// 370 PAY 340 

    0xb06a6c4d,// 371 PAY 341 

    0x1170b7b3,// 372 PAY 342 

    0xd6bc2e9f,// 373 PAY 343 

    0x1d25062c,// 374 PAY 344 

    0x6d887cfa,// 375 PAY 345 

    0x084936ae,// 376 PAY 346 

    0x61a1a9c7,// 377 PAY 347 

    0x1d5ecc4f,// 378 PAY 348 

    0xbc93db76,// 379 PAY 349 

    0xd2646b08,// 380 PAY 350 

    0x726d42e1,// 381 PAY 351 

    0x56bd29ae,// 382 PAY 352 

    0xd28808b2,// 383 PAY 353 

    0x3e39abd1,// 384 PAY 354 

    0x394bd26a,// 385 PAY 355 

    0x78b792f5,// 386 PAY 356 

    0xe12253d1,// 387 PAY 357 

    0xa26b74d9,// 388 PAY 358 

    0x834e7141,// 389 PAY 359 

    0x1ce54403,// 390 PAY 360 

    0x403e622e,// 391 PAY 361 

    0x1309bf16,// 392 PAY 362 

    0x58b21a08,// 393 PAY 363 

    0x1580300d,// 394 PAY 364 

    0x6188b9e2,// 395 PAY 365 

    0x4d28521c,// 396 PAY 366 

    0xe1cd1831,// 397 PAY 367 

    0x9f9c76a0,// 398 PAY 368 

    0xce4a3006,// 399 PAY 369 

    0xcca2f26e,// 400 PAY 370 

    0xbde4f8e9,// 401 PAY 371 

    0xd5650e3f,// 402 PAY 372 

    0xd5ddfe95,// 403 PAY 373 

    0xd7c6f557,// 404 PAY 374 

    0xac95eeab,// 405 PAY 375 

    0xef10aa9f,// 406 PAY 376 

    0x1a6a4d0e,// 407 PAY 377 

    0xbf9a2122,// 408 PAY 378 

    0x75be2bc6,// 409 PAY 379 

    0x02a1e3c1,// 410 PAY 380 

    0xedb95832,// 411 PAY 381 

    0xe3d11c41,// 412 PAY 382 

    0x9dc4417b,// 413 PAY 383 

    0x36e09e91,// 414 PAY 384 

    0x18806608,// 415 PAY 385 

    0x479f0bb8,// 416 PAY 386 

    0xdd2a57c0,// 417 PAY 387 

    0x97c2ff13,// 418 PAY 388 

    0x67f77681,// 419 PAY 389 

    0xf907ce34,// 420 PAY 390 

    0x2827087e,// 421 PAY 391 

    0x23c4c63a,// 422 PAY 392 

    0x969b7f6f,// 423 PAY 393 

    0xbaad6bab,// 424 PAY 394 

    0x7bc195fd,// 425 PAY 395 

    0xcc0d8839,// 426 PAY 396 

    0xd8a7926f,// 427 PAY 397 

    0xe04cd566,// 428 PAY 398 

    0x01ab0e11,// 429 PAY 399 

    0x4077e961,// 430 PAY 400 

    0xd67aeaff,// 431 PAY 401 

    0xce4e534b,// 432 PAY 402 

    0x1d80d9c1,// 433 PAY 403 

    0x826c27c0,// 434 PAY 404 

    0x5e976a6f,// 435 PAY 405 

    0x33d59c33,// 436 PAY 406 

    0xd5f7a0e7,// 437 PAY 407 

    0x52a62da4,// 438 PAY 408 

    0xdd64e019,// 439 PAY 409 

    0x7f705095,// 440 PAY 410 

    0x60544f0c,// 441 PAY 411 

    0xe1bda549,// 442 PAY 412 

    0xfcc4a050,// 443 PAY 413 

    0xaad7c57a,// 444 PAY 414 

    0x275c100d,// 445 PAY 415 

    0x58c4d9f1,// 446 PAY 416 

    0x7d53d8eb,// 447 PAY 417 

    0xaf035cc7,// 448 PAY 418 

    0xb719b94e,// 449 PAY 419 

    0x92774db3,// 450 PAY 420 

    0x18fdc0a6,// 451 PAY 421 

    0x1f20e49b,// 452 PAY 422 

    0x958d8c38,// 453 PAY 423 

    0xb7857671,// 454 PAY 424 

    0x9f403402,// 455 PAY 425 

    0xf104b5e7,// 456 PAY 426 

    0xcf4f944b,// 457 PAY 427 

    0xfeb1e426,// 458 PAY 428 

    0x1750aa9b,// 459 PAY 429 

    0x84ae022f,// 460 PAY 430 

    0x87d04569,// 461 PAY 431 

    0x77b0fd77,// 462 PAY 432 

    0xab7a7156,// 463 PAY 433 

    0x74e8f297,// 464 PAY 434 

    0xcd846526,// 465 PAY 435 

    0xcbc071e2,// 466 PAY 436 

    0xf18a5b0c,// 467 PAY 437 

    0x581b8116,// 468 PAY 438 

    0x9a511ff0,// 469 PAY 439 

    0x822e00a3,// 470 PAY 440 

    0xd4f244ab,// 471 PAY 441 

    0xb8c7dceb,// 472 PAY 442 

    0xc9af26ab,// 473 PAY 443 

    0x6b3a0910,// 474 PAY 444 

    0xfff07428,// 475 PAY 445 

    0x6b888bea,// 476 PAY 446 

    0x0963970b,// 477 PAY 447 

    0x7625c51e,// 478 PAY 448 

    0x22a1faba,// 479 PAY 449 

    0x6d9f93d5,// 480 PAY 450 

    0x103fd05b,// 481 PAY 451 

    0x43f70739,// 482 PAY 452 

    0x99a3e1b9,// 483 PAY 453 

    0x65b572a0,// 484 PAY 454 

    0xbe3ddb86,// 485 PAY 455 

    0x886fcb76,// 486 PAY 456 

    0x7f67145e,// 487 PAY 457 

    0xfabefd80,// 488 PAY 458 

    0x6240d382,// 489 PAY 459 

    0xaec060e9,// 490 PAY 460 

    0x242b16a2,// 491 PAY 461 

    0xca9945e9,// 492 PAY 462 

    0xd042b5f3,// 493 PAY 463 

    0xdfd3b3e5,// 494 PAY 464 

    0x8e8894b7,// 495 PAY 465 

    0xd2eb2937,// 496 PAY 466 

    0xf30db6ae,// 497 PAY 467 

    0x60fef4f9,// 498 PAY 468 

    0xca6f34ec,// 499 PAY 469 

    0x46874fa1,// 500 PAY 470 

    0x411e50a1,// 501 PAY 471 

    0x122187f5,// 502 PAY 472 

    0x6cffb351,// 503 PAY 473 

    0x9d95350b,// 504 PAY 474 

    0x20f6634c,// 505 PAY 475 

    0x9e71f3e9,// 506 PAY 476 

    0x20706c5a,// 507 PAY 477 

    0x8ae925f8,// 508 PAY 478 

    0x469d1d49,// 509 PAY 479 

    0x8039921b,// 510 PAY 480 

    0x1dd73725,// 511 PAY 481 

    0x9e6564c0,// 512 PAY 482 

    0xc588cc3a,// 513 PAY 483 

    0xca694a44,// 514 PAY 484 

    0xa8ae8df3,// 515 PAY 485 

    0x0cfd390f,// 516 PAY 486 

    0xb84b9d3b,// 517 PAY 487 

    0x38a440e0,// 518 PAY 488 

    0xf1c8e1d5,// 519 PAY 489 

    0xcd688a79,// 520 PAY 490 

    0x9752956f,// 521 PAY 491 

    0x974ac115,// 522 PAY 492 

    0xbd5ac2f5,// 523 PAY 493 

    0x1a706688,// 524 PAY 494 

    0x4643e5d4,// 525 PAY 495 

    0xc883b4d2,// 526 PAY 496 

    0x074cc212,// 527 PAY 497 

    0x36f982e2,// 528 PAY 498 

    0xd6647f5e,// 529 PAY 499 

    0x1f9c6cca,// 530 PAY 500 

    0x6e7799fb,// 531 PAY 501 

    0x1dcef89f,// 532 PAY 502 

    0x5dd78891,// 533 PAY 503 

    0x40dcefa0,// 534 PAY 504 

    0x7f388d76,// 535 PAY 505 

    0x228c11b7,// 536 PAY 506 

/// STA is 1 words. 

/// STA num_pkts       : 83 

/// STA pkt_idx        : 146 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x20 

    0x02492053 // 537 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 80 (0x50) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_sha1_pkt6_tmpl[] = {
    0xb8010050,// 1 CCH   1 

/// ECH cache_idx      : 0x0a 

/// ECH pdu_tag        : 0x00 

    0x000a0000,// 2 ECH   1 

/// SCX is 19 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound !save_icv insert_icv !check_icv !sctx_iv  

/// SCX exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : SHA1 

/// SCX aes_size        : NORMAL_RC4INIT_AES128 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x3 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 40 

    0x00000013,// 3 SCX   1 

    0x806448e9,// 4 SCX   2 

    0x00002342,// 5 SCX   3 

    0xd1c8ac66,// 6 SCX   4 

    0xa979ed35,// 7 SCX   5 

    0xf50fb0ac,// 8 SCX   6 

    0x20c5a458,// 9 SCX   7 

    0x37301214,// 10 SCX   8 

    0x99bf3fc8,// 11 SCX   9 

    0x05615006,// 12 SCX  10 

    0x16f66a60,// 13 SCX  11 

    0x1b4a4a2d,// 14 SCX  12 

    0x5cd40f54,// 15 SCX  13 

    0x4ad193e9,// 16 SCX  14 

    0x76d38c7b,// 17 SCX  15 

    0x82ea713d,// 18 SCX  16 

    0xb1e27426,// 19 SCX  17 

    0xa4983056,// 20 SCX  18 

    0xc0347b9d,// 21 SCX  19 

/// BFD is 3 words. 

/// BFD tot_len        : 317 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 52 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 52 

/// BFD lencrypto      : 16 

/// BFD ofstcrypto     : 24 

/// BFD (ofst+len)cry  : 40 

/// BFD ofstiv         : 4 

/// BFD ofsticv        : 64 

    0x00000034,// 22 BFD   1 

    0x00180010,// 23 BFD   2 

    0x00400004,// 24 BFD   3 

/// MFM is 2 words. 

/// MFM vldnibs        : 7 

    0x07004ca1,// 25 MFM   1 

    0xc7b00000,// 26 MFM   2 

/// BDA is 81 words. 

/// BDA size     is 317 (0x13d) 

/// BDA id       is 0x4456 

    0x013d4456,// 27 BDA   1 

/// PAY Generic Data size   : 317 byte(s) 

/// PAD Buffer Data Pad size   : 3 byte(s) 

    0x558f5839,// 28 PAY   1 

    0xd60e96e6,// 29 PAY   2 

    0xf013c9ad,// 30 PAY   3 

    0x41302c10,// 31 PAY   4 

    0xedc5c112,// 32 PAY   5 

    0x5f0a810b,// 33 PAY   6 

    0x8be1a8ee,// 34 PAY   7 

    0x291ea1df,// 35 PAY   8 

    0x94825924,// 36 PAY   9 

    0xbb7cd7a2,// 37 PAY  10 

    0x001d26ea,// 38 PAY  11 

    0x03b931d1,// 39 PAY  12 

    0xf29e94ee,// 40 PAY  13 

    0xff8e4cce,// 41 PAY  14 

    0x2ba9cca7,// 42 PAY  15 

    0xb8d139ac,// 43 PAY  16 

    0xe7addaa8,// 44 PAY  17 

    0x61422f85,// 45 PAY  18 

    0x88dd7363,// 46 PAY  19 

    0x4125ea8c,// 47 PAY  20 

    0x836eca2e,// 48 PAY  21 

    0xc021df7d,// 49 PAY  22 

    0x8e2f39cb,// 50 PAY  23 

    0x04f2176c,// 51 PAY  24 

    0x2eee9128,// 52 PAY  25 

    0x8d2a805a,// 53 PAY  26 

    0xf8d3e0ab,// 54 PAY  27 

    0x30459aba,// 55 PAY  28 

    0xb7ab1541,// 56 PAY  29 

    0x172519d5,// 57 PAY  30 

    0x1e81c3ee,// 58 PAY  31 

    0xa0a4a5ee,// 59 PAY  32 

    0xb0fad917,// 60 PAY  33 

    0x5722ef5d,// 61 PAY  34 

    0x7979c0a4,// 62 PAY  35 

    0x9e3bc31d,// 63 PAY  36 

    0xd90a8f75,// 64 PAY  37 

    0xb43a9113,// 65 PAY  38 

    0x87c6dd19,// 66 PAY  39 

    0x61658089,// 67 PAY  40 

    0x1f91c27b,// 68 PAY  41 

    0xe1484be6,// 69 PAY  42 

    0xcd7f1afb,// 70 PAY  43 

    0x867d2f5f,// 71 PAY  44 

    0x1906f6a8,// 72 PAY  45 

    0x5682ae7f,// 73 PAY  46 

    0xecd0b98d,// 74 PAY  47 

    0xfd0db859,// 75 PAY  48 

    0xa1d15e61,// 76 PAY  49 

    0xdc5ad313,// 77 PAY  50 

    0xb45b44e2,// 78 PAY  51 

    0x7be6698e,// 79 PAY  52 

    0x99e2eb9c,// 80 PAY  53 

    0x28a6c679,// 81 PAY  54 

    0x6000ceb5,// 82 PAY  55 

    0x1b2a4369,// 83 PAY  56 

    0x590df091,// 84 PAY  57 

    0x80c76e2c,// 85 PAY  58 

    0x74aa2f4c,// 86 PAY  59 

    0x8f2fe166,// 87 PAY  60 

    0x630f591e,// 88 PAY  61 

    0xea35289d,// 89 PAY  62 

    0x4a016e6d,// 90 PAY  63 

    0x27f68a58,// 91 PAY  64 

    0x41781969,// 92 PAY  65 

    0x0323f2c6,// 93 PAY  66 

    0x759fe614,// 94 PAY  67 

    0x37533c0c,// 95 PAY  68 

    0x0a2f38dd,// 96 PAY  69 

    0x2a46c13b,// 97 PAY  70 

    0x4b76081e,// 98 PAY  71 

    0x6094712d,// 99 PAY  72 

    0x99189e3c,// 100 PAY  73 

    0x4e332a39,// 101 PAY  74 

    0x7e8abe05,// 102 PAY  75 

    0x741ce4ca,// 103 PAY  76 

    0x2a3c7452,// 104 PAY  77 

    0xa6a0783d,// 105 PAY  78 

    0xd5d57584,// 106 PAY  79 

    0x51000000,// 107 PAY  80 

/// STA is 1 words. 

/// STA num_pkts       : 34 

/// STA pkt_idx        : 231 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xdf 

    0x039cdf22 // 108 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 88 (0x58) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_sha1_pkt7_tmpl[] = {
    0xb8010058,// 1 CCH   1 

/// ECH cache_idx      : 0x0a 

/// ECH pdu_tag        : 0x00 

    0x000a0000,// 2 ECH   1 

/// SCX is 21 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound save_icv insert_icv check_icv sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : SHA1 

/// SCX aes_size        : RC4UPDT_AES192 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x4 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 8 

/// SCX authctx_size    : 40 

    0x08000015,// 3 SCX   1 

    0x806548c1,// 4 SCX   2 

    0x00007482,// 5 SCX   3 

    0x273c2e70,// 6 SCX   4 

    0x6369ee70,// 7 SCX   5 

    0x99cdf4f6,// 8 SCX   6 

    0x2df7a84d,// 9 SCX   7 

    0xcf82eaa3,// 10 SCX   8 

    0x7947d0b1,// 11 SCX   9 

    0x31b47416,// 12 SCX  10 

    0x811a677b,// 13 SCX  11 

    0x44f29955,// 14 SCX  12 

    0x7af4d8b2,// 15 SCX  13 

    0x33b65972,// 16 SCX  14 

    0xcf62274c,// 17 SCX  15 

    0xf14c5868,// 18 SCX  16 

    0x0721c026,// 19 SCX  17 

    0x7ff2de37,// 20 SCX  18 

    0xde17526d,// 21 SCX  19 

    0x2f80ba29,// 22 SCX  20 

    0x0c947f92,// 23 SCX  21 

/// BFD is 3 words. 

/// BFD tot_len        : 1019 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 686 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 686 

/// BFD lencrypto      : 152 

/// BFD ofstcrypto     : 288 

/// BFD (ofst+len)cry  : 440 

/// BFD ofstiv         : 56 

/// BFD ofsticv        : 944 

    0x000002ae,// 24 BFD   1 

    0x01200098,// 25 BFD   2 

    0x03b00038,// 26 BFD   3 

/// MFM is 16 words. 

/// MFM vldnibs        : 7c 

    0x7c009b7f,// 27 MFM   1 

    0x3f48ac19,// 28 MFM   2 

    0x5121e4cb,// 29 MFM   3 

    0x57182fa2,// 30 MFM   4 

    0xf9ac29a4,// 31 MFM   5 

    0x47090d6d,// 32 MFM   6 

    0x3d0758d3,// 33 MFM   7 

    0x04215a1b,// 34 MFM   8 

    0x28ef5c06,// 35 MFM   9 

    0x71280f72,// 36 MFM  10 

    0xedde0a9b,// 37 MFM  11 

    0x5bd98dff,// 38 MFM  12 

    0x0cf638a9,// 39 MFM  13 

    0x9c4b8960,// 40 MFM  14 

    0xabcefab1,// 41 MFM  15 

    0xfd861f1d,// 42 MFM  16 

/// BDA is 256 words. 

/// BDA size     is 1019 (0x3fb) 

/// BDA id       is 0xd61 

    0x03fb0d61,// 43 BDA   1 

/// PAY Generic Data size   : 1019 byte(s) 

/// PAD Buffer Data Pad size   : 1 byte(s) 

    0x2c7f7a9f,// 44 PAY   1 

    0xf8798061,// 45 PAY   2 

    0x42d783db,// 46 PAY   3 

    0x8171576e,// 47 PAY   4 

    0x2423ca39,// 48 PAY   5 

    0x910e9f79,// 49 PAY   6 

    0x960acfd4,// 50 PAY   7 

    0x99ba4681,// 51 PAY   8 

    0xeef62ea6,// 52 PAY   9 

    0xccc6f040,// 53 PAY  10 

    0xe078e32d,// 54 PAY  11 

    0xcb285c3a,// 55 PAY  12 

    0x4f360876,// 56 PAY  13 

    0x5e658a7c,// 57 PAY  14 

    0x48a3dbef,// 58 PAY  15 

    0xacfb1914,// 59 PAY  16 

    0xd2b9861d,// 60 PAY  17 

    0x40c4e0bd,// 61 PAY  18 

    0x66d086f0,// 62 PAY  19 

    0x94d2db5d,// 63 PAY  20 

    0x05711aa5,// 64 PAY  21 

    0x8cc85540,// 65 PAY  22 

    0xe6500b6a,// 66 PAY  23 

    0x056bafdf,// 67 PAY  24 

    0x5f9cc538,// 68 PAY  25 

    0x064a442e,// 69 PAY  26 

    0x3232eae9,// 70 PAY  27 

    0xca61caa7,// 71 PAY  28 

    0x67233c7b,// 72 PAY  29 

    0x7d59d1b3,// 73 PAY  30 

    0x6257c98d,// 74 PAY  31 

    0x377a3efd,// 75 PAY  32 

    0xd95d9033,// 76 PAY  33 

    0x73249773,// 77 PAY  34 

    0x05e5f33d,// 78 PAY  35 

    0x44e229de,// 79 PAY  36 

    0x0821aac3,// 80 PAY  37 

    0x76b2fac0,// 81 PAY  38 

    0x23dd47f1,// 82 PAY  39 

    0x092d0954,// 83 PAY  40 

    0x0c6fef7a,// 84 PAY  41 

    0x76c0f1db,// 85 PAY  42 

    0xca7e3a89,// 86 PAY  43 

    0x1d83541e,// 87 PAY  44 

    0x8b70e3e4,// 88 PAY  45 

    0x099b5ff1,// 89 PAY  46 

    0x11ff6891,// 90 PAY  47 

    0x9bfc9214,// 91 PAY  48 

    0xdb5fe1b7,// 92 PAY  49 

    0x31034e5b,// 93 PAY  50 

    0x41de562d,// 94 PAY  51 

    0xc48a73e7,// 95 PAY  52 

    0xdb8c4716,// 96 PAY  53 

    0x9efc1aa1,// 97 PAY  54 

    0xa92c8a1f,// 98 PAY  55 

    0xdc7704be,// 99 PAY  56 

    0xf344bff8,// 100 PAY  57 

    0xebaa9218,// 101 PAY  58 

    0x14ab847e,// 102 PAY  59 

    0x90971ced,// 103 PAY  60 

    0x09d208e9,// 104 PAY  61 

    0x89f44d39,// 105 PAY  62 

    0xdbf19e8d,// 106 PAY  63 

    0x82a3bcce,// 107 PAY  64 

    0x120aed7b,// 108 PAY  65 

    0xd1da7731,// 109 PAY  66 

    0x3ae2376b,// 110 PAY  67 

    0x4427f42c,// 111 PAY  68 

    0x9289cde1,// 112 PAY  69 

    0xcad5976a,// 113 PAY  70 

    0xe1bc01e9,// 114 PAY  71 

    0x4a16994d,// 115 PAY  72 

    0x5624165b,// 116 PAY  73 

    0xd463c43c,// 117 PAY  74 

    0xb8af1a32,// 118 PAY  75 

    0xea9cea6e,// 119 PAY  76 

    0x8e6ebfd3,// 120 PAY  77 

    0xe0789bbe,// 121 PAY  78 

    0x095c52da,// 122 PAY  79 

    0xf8d347bc,// 123 PAY  80 

    0x950a782a,// 124 PAY  81 

    0x7f4cf892,// 125 PAY  82 

    0x0555f1ff,// 126 PAY  83 

    0xf3d0998f,// 127 PAY  84 

    0x40dab334,// 128 PAY  85 

    0x39968fd4,// 129 PAY  86 

    0xcf052841,// 130 PAY  87 

    0x464cef00,// 131 PAY  88 

    0x350ca06a,// 132 PAY  89 

    0xc97b440a,// 133 PAY  90 

    0x23f986db,// 134 PAY  91 

    0x4fd03fc2,// 135 PAY  92 

    0x2588fa73,// 136 PAY  93 

    0xbfd6dfd9,// 137 PAY  94 

    0xafdbf4a5,// 138 PAY  95 

    0xd8037f1e,// 139 PAY  96 

    0xd50f8227,// 140 PAY  97 

    0x265ed70d,// 141 PAY  98 

    0xe20c7bac,// 142 PAY  99 

    0xf6046268,// 143 PAY 100 

    0x2444ba1c,// 144 PAY 101 

    0x7a042774,// 145 PAY 102 

    0xfb41d1af,// 146 PAY 103 

    0xcfff6777,// 147 PAY 104 

    0xe8edd4e0,// 148 PAY 105 

    0x3f86264f,// 149 PAY 106 

    0x9aebdc1c,// 150 PAY 107 

    0xd4b39b34,// 151 PAY 108 

    0x051fe2a7,// 152 PAY 109 

    0x3a34e879,// 153 PAY 110 

    0x27618d7d,// 154 PAY 111 

    0xf06c4c64,// 155 PAY 112 

    0x96b65831,// 156 PAY 113 

    0xb3c80b2d,// 157 PAY 114 

    0x97e3226c,// 158 PAY 115 

    0x770c6869,// 159 PAY 116 

    0x75662386,// 160 PAY 117 

    0x39ebaed7,// 161 PAY 118 

    0x105f929b,// 162 PAY 119 

    0xdb4b1811,// 163 PAY 120 

    0x0d2d8667,// 164 PAY 121 

    0xad4d3acf,// 165 PAY 122 

    0x27039173,// 166 PAY 123 

    0x2b424eee,// 167 PAY 124 

    0xd2405cb2,// 168 PAY 125 

    0x4df92045,// 169 PAY 126 

    0x15a6b774,// 170 PAY 127 

    0x2825361e,// 171 PAY 128 

    0xef21837d,// 172 PAY 129 

    0xea220ba4,// 173 PAY 130 

    0x98a56757,// 174 PAY 131 

    0xca2d8f45,// 175 PAY 132 

    0xaca0d8b6,// 176 PAY 133 

    0x9fe4dd46,// 177 PAY 134 

    0x9fd455db,// 178 PAY 135 

    0xfe1a08ce,// 179 PAY 136 

    0x26837694,// 180 PAY 137 

    0x81d97e19,// 181 PAY 138 

    0x918f548a,// 182 PAY 139 

    0xd5481e0d,// 183 PAY 140 

    0xbc6726df,// 184 PAY 141 

    0x13a6341b,// 185 PAY 142 

    0x60fec6b5,// 186 PAY 143 

    0xa064fc35,// 187 PAY 144 

    0x5ec29957,// 188 PAY 145 

    0xb733b88d,// 189 PAY 146 

    0x9a7e8280,// 190 PAY 147 

    0x6e1a5dde,// 191 PAY 148 

    0x5bac4870,// 192 PAY 149 

    0x867048ba,// 193 PAY 150 

    0x437dfdd4,// 194 PAY 151 

    0x03c90d27,// 195 PAY 152 

    0x3e89f59d,// 196 PAY 153 

    0x36b1f214,// 197 PAY 154 

    0x01ea3293,// 198 PAY 155 

    0x2325f93c,// 199 PAY 156 

    0x23aba90f,// 200 PAY 157 

    0x168df48c,// 201 PAY 158 

    0x9b3a279d,// 202 PAY 159 

    0x15d8bc76,// 203 PAY 160 

    0xf0d5eace,// 204 PAY 161 

    0x1e56040d,// 205 PAY 162 

    0xdec7e267,// 206 PAY 163 

    0xf6281c07,// 207 PAY 164 

    0x3739a820,// 208 PAY 165 

    0x5c56e4ef,// 209 PAY 166 

    0x63ec946f,// 210 PAY 167 

    0xd392dc91,// 211 PAY 168 

    0x89009070,// 212 PAY 169 

    0x85ed17b0,// 213 PAY 170 

    0x73ceab55,// 214 PAY 171 

    0x8ee07cff,// 215 PAY 172 

    0xeb1a971b,// 216 PAY 173 

    0x55ac654b,// 217 PAY 174 

    0x74a90072,// 218 PAY 175 

    0xfd231e42,// 219 PAY 176 

    0xf4c8d280,// 220 PAY 177 

    0xb32f987d,// 221 PAY 178 

    0xea680c5e,// 222 PAY 179 

    0x26460583,// 223 PAY 180 

    0x176bb53c,// 224 PAY 181 

    0x818bb77b,// 225 PAY 182 

    0x360e3138,// 226 PAY 183 

    0x18095884,// 227 PAY 184 

    0xfd235b3e,// 228 PAY 185 

    0x2c9cde9b,// 229 PAY 186 

    0x2a2e2eb3,// 230 PAY 187 

    0xc7294421,// 231 PAY 188 

    0x130f7947,// 232 PAY 189 

    0x8f6fc691,// 233 PAY 190 

    0x2c0ddd8e,// 234 PAY 191 

    0x017960a6,// 235 PAY 192 

    0x75b23f87,// 236 PAY 193 

    0x63efbead,// 237 PAY 194 

    0xa4111f6a,// 238 PAY 195 

    0x63048c58,// 239 PAY 196 

    0x246a8061,// 240 PAY 197 

    0x3329669e,// 241 PAY 198 

    0x833939a3,// 242 PAY 199 

    0x364738f1,// 243 PAY 200 

    0xd305bfb2,// 244 PAY 201 

    0x1be52755,// 245 PAY 202 

    0xeab155d2,// 246 PAY 203 

    0xd4090b26,// 247 PAY 204 

    0x92240d75,// 248 PAY 205 

    0x87aa63f8,// 249 PAY 206 

    0xe2bf9fb4,// 250 PAY 207 

    0x63c29f54,// 251 PAY 208 

    0x654c96f7,// 252 PAY 209 

    0x449ac839,// 253 PAY 210 

    0x634c2195,// 254 PAY 211 

    0x0f1bb796,// 255 PAY 212 

    0x12a48fac,// 256 PAY 213 

    0xd446f50d,// 257 PAY 214 

    0x145cc428,// 258 PAY 215 

    0xa65a66fb,// 259 PAY 216 

    0xe0842f32,// 260 PAY 217 

    0x94ab320f,// 261 PAY 218 

    0xeeaeac5c,// 262 PAY 219 

    0xf4b51f69,// 263 PAY 220 

    0x3847bb99,// 264 PAY 221 

    0xd884d33b,// 265 PAY 222 

    0x3f38dbe5,// 266 PAY 223 

    0xf9f758ca,// 267 PAY 224 

    0xd5e69317,// 268 PAY 225 

    0x9b408939,// 269 PAY 226 

    0xa137088a,// 270 PAY 227 

    0xad6886f4,// 271 PAY 228 

    0xfcb7dbf3,// 272 PAY 229 

    0xaa539ce4,// 273 PAY 230 

    0xb4e5c319,// 274 PAY 231 

    0x7f8b4b15,// 275 PAY 232 

    0x8730ea8b,// 276 PAY 233 

    0x143e0c3e,// 277 PAY 234 

    0x944077cd,// 278 PAY 235 

    0x1c9ca3dc,// 279 PAY 236 

    0xa1600f43,// 280 PAY 237 

    0xfc6c3829,// 281 PAY 238 

    0x56c9208a,// 282 PAY 239 

    0x69f467fd,// 283 PAY 240 

    0xf53daf8b,// 284 PAY 241 

    0xfc39668c,// 285 PAY 242 

    0x99e796b2,// 286 PAY 243 

    0xd5d83ed9,// 287 PAY 244 

    0x1fd2d42f,// 288 PAY 245 

    0x83799589,// 289 PAY 246 

    0xfbd64c09,// 290 PAY 247 

    0xbbbfa2eb,// 291 PAY 248 

    0xd3ab0817,// 292 PAY 249 

    0x0dc590fb,// 293 PAY 250 

    0x79d16e68,// 294 PAY 251 

    0x97e365d1,// 295 PAY 252 

    0xd71a67f7,// 296 PAY 253 

    0x05739977,// 297 PAY 254 

    0xcc301d00,// 298 PAY 255 

/// STA is 1 words. 

/// STA num_pkts       : 140 

/// STA pkt_idx        : 203 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xee 

    0x032dee8c // 299 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 80 (0x50) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_sha1_pkt8_tmpl[] = {
    0xb8010050,// 1 CCH   1 

/// ECH cache_idx      : 0x02 

/// ECH pdu_tag        : 0x00 

    0x00020000,// 2 ECH   1 

/// SCX is 19 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound !save_icv insert_icv !check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : SHA1 

/// SCX aes_size        : NORMAL_RC4INIT_AES128 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x1 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 40 

    0x00000013,// 3 SCX   1 

    0x8060483a,// 4 SCX   2 

    0x00002100,// 5 SCX   3 

    0xa8d0d58d,// 6 SCX   4 

    0x4a01745b,// 7 SCX   5 

    0x345c8fec,// 8 SCX   6 

    0x857e1f7a,// 9 SCX   7 

    0x318e1fa8,// 10 SCX   8 

    0x53915b9d,// 11 SCX   9 

    0xfa6d0990,// 12 SCX  10 

    0xb32ee7eb,// 13 SCX  11 

    0x86faca93,// 14 SCX  12 

    0x0daf0f12,// 15 SCX  13 

    0x679785df,// 16 SCX  14 

    0x816625f8,// 17 SCX  15 

    0x4af2456d,// 18 SCX  16 

    0x58203dca,// 19 SCX  17 

    0x1d667960,// 20 SCX  18 

    0x1bd385cb,// 21 SCX  19 

/// BFD is 3 words. 

/// BFD tot_len        : 1120 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 428 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 428 

/// BFD lencrypto      : 32 

/// BFD ofstcrypto     : 200 

/// BFD (ofst+len)cry  : 232 

/// BFD ofstiv         : 84 

/// BFD ofsticv        : 484 

    0x000001ac,// 22 BFD   1 

    0x00c80020,// 23 BFD   2 

    0x01e40054,// 24 BFD   3 

/// MFM is 6 words. 

/// MFM vldnibs        : 26 

    0x26001338,// 25 MFM   1 

    0x57c098ef,// 26 MFM   2 

    0x50a44595,// 27 MFM   3 

    0x8f50fbde,// 28 MFM   4 

    0xbd3fb6af,// 29 MFM   5 

    0xe3000000,// 30 MFM   6 

/// BDA is 281 words. 

/// BDA size     is 1120 (0x460) 

/// BDA id       is 0x5dfa 

    0x04605dfa,// 31 BDA   1 

/// PAY Generic Data size   : 1120 byte(s) 

/// PAD Buffer Data Pad size   : 0 byte(s) 

    0x9cd900ed,// 32 PAY   1 

    0x29288a5f,// 33 PAY   2 

    0x64bda180,// 34 PAY   3 

    0xe996ed50,// 35 PAY   4 

    0xdd9ed543,// 36 PAY   5 

    0xf08c778d,// 37 PAY   6 

    0xd8dd67ea,// 38 PAY   7 

    0x7ea887f6,// 39 PAY   8 

    0x191f55f9,// 40 PAY   9 

    0xa9518ef4,// 41 PAY  10 

    0xc3cb978c,// 42 PAY  11 

    0x95c47680,// 43 PAY  12 

    0xa309130e,// 44 PAY  13 

    0xc7972f83,// 45 PAY  14 

    0xd5abfad6,// 46 PAY  15 

    0x6b1c837f,// 47 PAY  16 

    0xe9e79b17,// 48 PAY  17 

    0xa9975c98,// 49 PAY  18 

    0x1422218f,// 50 PAY  19 

    0x2ac304e4,// 51 PAY  20 

    0x0beee17a,// 52 PAY  21 

    0x05e4ff9d,// 53 PAY  22 

    0x49c0d20c,// 54 PAY  23 

    0xa8e2cac3,// 55 PAY  24 

    0x5fa1cca8,// 56 PAY  25 

    0xa2cc7d67,// 57 PAY  26 

    0x69299eb8,// 58 PAY  27 

    0x0778a559,// 59 PAY  28 

    0x7ca6ef2b,// 60 PAY  29 

    0x5ac06dce,// 61 PAY  30 

    0xd989b21f,// 62 PAY  31 

    0x43d4bf59,// 63 PAY  32 

    0x93adb471,// 64 PAY  33 

    0x45d9092b,// 65 PAY  34 

    0x51c14524,// 66 PAY  35 

    0xa987f025,// 67 PAY  36 

    0xf09a295b,// 68 PAY  37 

    0xd5904c8c,// 69 PAY  38 

    0xcd8d6854,// 70 PAY  39 

    0xeed87893,// 71 PAY  40 

    0x177dd54c,// 72 PAY  41 

    0xef02b7ba,// 73 PAY  42 

    0x9f8e3f6e,// 74 PAY  43 

    0x31d63649,// 75 PAY  44 

    0x216b7ef0,// 76 PAY  45 

    0x263d24e4,// 77 PAY  46 

    0xec05dc83,// 78 PAY  47 

    0xde932c64,// 79 PAY  48 

    0x2bcdef9e,// 80 PAY  49 

    0xa399ca56,// 81 PAY  50 

    0x985af57f,// 82 PAY  51 

    0x87796b41,// 83 PAY  52 

    0xdbb50acc,// 84 PAY  53 

    0xd6683cf8,// 85 PAY  54 

    0x68abcb55,// 86 PAY  55 

    0x1e665ad5,// 87 PAY  56 

    0x8d58bb24,// 88 PAY  57 

    0x3179e1a7,// 89 PAY  58 

    0x0b943e17,// 90 PAY  59 

    0x246f73f6,// 91 PAY  60 

    0x11133f2c,// 92 PAY  61 

    0x0874a8b6,// 93 PAY  62 

    0xccac69d0,// 94 PAY  63 

    0x97749535,// 95 PAY  64 

    0xa97eb3cb,// 96 PAY  65 

    0xe1e3add5,// 97 PAY  66 

    0x9e3cb55c,// 98 PAY  67 

    0x2421d8e7,// 99 PAY  68 

    0x9391fa3a,// 100 PAY  69 

    0x5d3bd7c3,// 101 PAY  70 

    0xc5443a49,// 102 PAY  71 

    0x1263c0c5,// 103 PAY  72 

    0xfbd2749b,// 104 PAY  73 

    0x55af85b8,// 105 PAY  74 

    0x2d4ad433,// 106 PAY  75 

    0xd1a0adae,// 107 PAY  76 

    0x45ceb9c9,// 108 PAY  77 

    0xb821beb4,// 109 PAY  78 

    0x50f10546,// 110 PAY  79 

    0x81feec6e,// 111 PAY  80 

    0xe0f2b3f9,// 112 PAY  81 

    0xe3ebf110,// 113 PAY  82 

    0xe6a604a2,// 114 PAY  83 

    0xa60d81bb,// 115 PAY  84 

    0x6ea3d224,// 116 PAY  85 

    0x08987351,// 117 PAY  86 

    0x469cac3a,// 118 PAY  87 

    0x6b80a72f,// 119 PAY  88 

    0x43b8d7f1,// 120 PAY  89 

    0xed8e611b,// 121 PAY  90 

    0x319d892b,// 122 PAY  91 

    0x7fe13f72,// 123 PAY  92 

    0x73a9a4a7,// 124 PAY  93 

    0x5d686f0b,// 125 PAY  94 

    0x9c9b427b,// 126 PAY  95 

    0x8a43b761,// 127 PAY  96 

    0xd7c6ade1,// 128 PAY  97 

    0x3024cd7b,// 129 PAY  98 

    0xfb789cb3,// 130 PAY  99 

    0x816e9241,// 131 PAY 100 

    0xd96de90a,// 132 PAY 101 

    0xd5eda847,// 133 PAY 102 

    0x0b672234,// 134 PAY 103 

    0x35e5357e,// 135 PAY 104 

    0x409c05ef,// 136 PAY 105 

    0x5f9fb076,// 137 PAY 106 

    0x551dfdb5,// 138 PAY 107 

    0x7a5f0588,// 139 PAY 108 

    0x795f3792,// 140 PAY 109 

    0x1da7dcc3,// 141 PAY 110 

    0xf4ef661c,// 142 PAY 111 

    0x74718e52,// 143 PAY 112 

    0x5acbf42f,// 144 PAY 113 

    0x6c3fbe02,// 145 PAY 114 

    0x651c2a63,// 146 PAY 115 

    0x298b4e80,// 147 PAY 116 

    0x44642c96,// 148 PAY 117 

    0xa087395e,// 149 PAY 118 

    0xb5f60fb5,// 150 PAY 119 

    0xc3769258,// 151 PAY 120 

    0x412873ed,// 152 PAY 121 

    0xac660ff9,// 153 PAY 122 

    0x0fa58aed,// 154 PAY 123 

    0x0ce06bb3,// 155 PAY 124 

    0x6dd59e69,// 156 PAY 125 

    0x5d74d1f9,// 157 PAY 126 

    0xb7dc17b5,// 158 PAY 127 

    0x2a310324,// 159 PAY 128 

    0x2c95da97,// 160 PAY 129 

    0x7633ad71,// 161 PAY 130 

    0x1088b62a,// 162 PAY 131 

    0x1701987d,// 163 PAY 132 

    0xc8d675e4,// 164 PAY 133 

    0xc107d5e3,// 165 PAY 134 

    0x76aaec28,// 166 PAY 135 

    0xf53752f0,// 167 PAY 136 

    0xb369bc8d,// 168 PAY 137 

    0xb67ebdd5,// 169 PAY 138 

    0x978c814f,// 170 PAY 139 

    0x7ef7d659,// 171 PAY 140 

    0xb9beed46,// 172 PAY 141 

    0xed0b704e,// 173 PAY 142 

    0xc9a5c8f6,// 174 PAY 143 

    0x9d24c91b,// 175 PAY 144 

    0xd808fb30,// 176 PAY 145 

    0x9191ed39,// 177 PAY 146 

    0x0c59c732,// 178 PAY 147 

    0xcc27042b,// 179 PAY 148 

    0x4288e616,// 180 PAY 149 

    0x6e13d5af,// 181 PAY 150 

    0x35ba4b49,// 182 PAY 151 

    0x63526a55,// 183 PAY 152 

    0x188e9dab,// 184 PAY 153 

    0x287082dd,// 185 PAY 154 

    0xe083c07b,// 186 PAY 155 

    0x70ffee1d,// 187 PAY 156 

    0x2586d6d1,// 188 PAY 157 

    0x2fd39fcb,// 189 PAY 158 

    0x201b05a4,// 190 PAY 159 

    0x5ae5855b,// 191 PAY 160 

    0xa40c3fd8,// 192 PAY 161 

    0x4dac5e9a,// 193 PAY 162 

    0x9f37cbe9,// 194 PAY 163 

    0x8fa86edb,// 195 PAY 164 

    0x60c44509,// 196 PAY 165 

    0xb44a92ae,// 197 PAY 166 

    0x32e1270a,// 198 PAY 167 

    0x08e80f58,// 199 PAY 168 

    0xfd30bf9d,// 200 PAY 169 

    0xb3f1cef3,// 201 PAY 170 

    0xd422f4d1,// 202 PAY 171 

    0xaea78ed5,// 203 PAY 172 

    0xe0fcb014,// 204 PAY 173 

    0x3efc9819,// 205 PAY 174 

    0xd8543b2d,// 206 PAY 175 

    0x8d181661,// 207 PAY 176 

    0x20d974cb,// 208 PAY 177 

    0x27b71c5a,// 209 PAY 178 

    0x565cc1d4,// 210 PAY 179 

    0x2ad53fba,// 211 PAY 180 

    0x8dadb7ea,// 212 PAY 181 

    0xe7068d1d,// 213 PAY 182 

    0x971f3a51,// 214 PAY 183 

    0x14e43006,// 215 PAY 184 

    0xba7b3bec,// 216 PAY 185 

    0x11f639d4,// 217 PAY 186 

    0xf830b1cd,// 218 PAY 187 

    0xace3614b,// 219 PAY 188 

    0x00a6d06b,// 220 PAY 189 

    0x9940d019,// 221 PAY 190 

    0x372964d6,// 222 PAY 191 

    0x5777e5ca,// 223 PAY 192 

    0xede07175,// 224 PAY 193 

    0x19239282,// 225 PAY 194 

    0x7cd81607,// 226 PAY 195 

    0x5e53d6f8,// 227 PAY 196 

    0x3dfd2a8a,// 228 PAY 197 

    0xe527ed12,// 229 PAY 198 

    0x9f95339c,// 230 PAY 199 

    0x852ea5a4,// 231 PAY 200 

    0x7ef01a3c,// 232 PAY 201 

    0x00557f91,// 233 PAY 202 

    0x184295a6,// 234 PAY 203 

    0xd5895e79,// 235 PAY 204 

    0xfcea90ce,// 236 PAY 205 

    0x7b171a39,// 237 PAY 206 

    0x3ace4f19,// 238 PAY 207 

    0x98efe520,// 239 PAY 208 

    0x3c9d1e0e,// 240 PAY 209 

    0x6100b714,// 241 PAY 210 

    0x87553313,// 242 PAY 211 

    0x14e79af4,// 243 PAY 212 

    0x6a1f3d90,// 244 PAY 213 

    0x241a003c,// 245 PAY 214 

    0x4ccee3d0,// 246 PAY 215 

    0xbad9e974,// 247 PAY 216 

    0x24ad06e7,// 248 PAY 217 

    0x74dc1cb9,// 249 PAY 218 

    0x56f38c98,// 250 PAY 219 

    0x68b8d1bf,// 251 PAY 220 

    0xcb2d444f,// 252 PAY 221 

    0x570b13d7,// 253 PAY 222 

    0x001db932,// 254 PAY 223 

    0x04dc1dcf,// 255 PAY 224 

    0xa922e3f6,// 256 PAY 225 

    0x0285dd48,// 257 PAY 226 

    0xf486452e,// 258 PAY 227 

    0xa71b77ee,// 259 PAY 228 

    0xebb7bb5b,// 260 PAY 229 

    0x867ce605,// 261 PAY 230 

    0x5b0fe70c,// 262 PAY 231 

    0x4b108a77,// 263 PAY 232 

    0x0b68def0,// 264 PAY 233 

    0xbc1278d8,// 265 PAY 234 

    0x98e158b0,// 266 PAY 235 

    0x509883d8,// 267 PAY 236 

    0x8cadad07,// 268 PAY 237 

    0xdd635db6,// 269 PAY 238 

    0x4b4333b6,// 270 PAY 239 

    0x90ff372d,// 271 PAY 240 

    0xd3f3ce2e,// 272 PAY 241 

    0x428f9e36,// 273 PAY 242 

    0xd12a0b4f,// 274 PAY 243 

    0xf12fd24b,// 275 PAY 244 

    0x584b9236,// 276 PAY 245 

    0xe1171f03,// 277 PAY 246 

    0x768bba28,// 278 PAY 247 

    0x0e948bc3,// 279 PAY 248 

    0xc8ebd928,// 280 PAY 249 

    0x1226fe84,// 281 PAY 250 

    0x34955c8c,// 282 PAY 251 

    0xc68d59d5,// 283 PAY 252 

    0x061d85ba,// 284 PAY 253 

    0xef0d44d3,// 285 PAY 254 

    0x9af038a8,// 286 PAY 255 

    0x085a45ea,// 287 PAY 256 

    0x171dc8c3,// 288 PAY 257 

    0x916999e2,// 289 PAY 258 

    0x664cd32d,// 290 PAY 259 

    0xa7289383,// 291 PAY 260 

    0xc27250ca,// 292 PAY 261 

    0x89706aea,// 293 PAY 262 

    0x8f1bac50,// 294 PAY 263 

    0xe156304f,// 295 PAY 264 

    0xf06956f1,// 296 PAY 265 

    0x2e15d70d,// 297 PAY 266 

    0x1dbb8aea,// 298 PAY 267 

    0x5566037f,// 299 PAY 268 

    0xaeabc387,// 300 PAY 269 

    0x22414bd5,// 301 PAY 270 

    0x74d59170,// 302 PAY 271 

    0xc07f333b,// 303 PAY 272 

    0x9da70497,// 304 PAY 273 

    0xb5248bca,// 305 PAY 274 

    0x3df17f2a,// 306 PAY 275 

    0xa056291f,// 307 PAY 276 

    0xb6cea918,// 308 PAY 277 

    0x7093d495,// 309 PAY 278 

    0x6d4d8409,// 310 PAY 279 

    0xe367ca62,// 311 PAY 280 

/// STA is 1 words. 

/// STA num_pkts       : 239 

/// STA pkt_idx        : 63 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x1c 

    0x00fc1cef // 312 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 80 (0x50) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_sha1_pkt9_tmpl[] = {
    0xb8010050,// 1 CCH   1 

/// ECH cache_idx      : 0x00 

/// ECH pdu_tag        : 0x00 

    0x00000000,// 2 ECH   1 

/// SCX is 19 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound save_icv !insert_icv check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : SHA1 

/// SCX aes_size        : RC4UPDT_AES192 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x2 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 40 

    0x00000013,// 3 SCX   1 

    0x806148c1,// 4 SCX   2 

    0x00005200,// 5 SCX   3 

    0xf68d753c,// 6 SCX   4 

    0xd196ea7b,// 7 SCX   5 

    0x56d4bdf3,// 8 SCX   6 

    0x6283e544,// 9 SCX   7 

    0x9e04d1f7,// 10 SCX   8 

    0x1e710a88,// 11 SCX   9 

    0xac42c045,// 12 SCX  10 

    0x540f99da,// 13 SCX  11 

    0xf9c2f7a5,// 14 SCX  12 

    0x57bda1da,// 15 SCX  13 

    0x1ae74129,// 16 SCX  14 

    0xd9a8992d,// 17 SCX  15 

    0xff0de7a0,// 18 SCX  16 

    0x39d5cc2c,// 19 SCX  17 

    0x6e303ef6,// 20 SCX  18 

    0x85c0a1d0,// 21 SCX  19 

/// BFD is 3 words. 

/// BFD tot_len        : 144 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 76 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 76 

/// BFD lencrypto      : 16 

/// BFD ofstcrypto     : 60 

/// BFD (ofst+len)cry  : 76 

/// BFD ofstiv         : 48 

/// BFD ofsticv        : 124 

    0x0000004c,// 22 BFD   1 

    0x003c0010,// 23 BFD   2 

    0x007c0030,// 24 BFD   3 

/// MFM is 1 words. 

/// MFM vldnibs        : 1 

    0x0100e000,// 25 MFM   1 

/// BDA is 37 words. 

/// BDA size     is 144 (0x90) 

/// BDA id       is 0xc580 

    0x0090c580,// 26 BDA   1 

/// PAY Generic Data size   : 144 byte(s) 

/// PAD Buffer Data Pad size   : 0 byte(s) 

    0x654b1bde,// 27 PAY   1 

    0xc4cef84d,// 28 PAY   2 

    0x13b2d1b7,// 29 PAY   3 

    0x03fd1f04,// 30 PAY   4 

    0x9cf71d85,// 31 PAY   5 

    0x3102b2ba,// 32 PAY   6 

    0xa2eab23a,// 33 PAY   7 

    0x5cc5071f,// 34 PAY   8 

    0xae13f401,// 35 PAY   9 

    0x672a6420,// 36 PAY  10 

    0x2ca93146,// 37 PAY  11 

    0xeb59fcf5,// 38 PAY  12 

    0x99c14911,// 39 PAY  13 

    0x2a472931,// 40 PAY  14 

    0x07cce5a5,// 41 PAY  15 

    0xaefdf5cf,// 42 PAY  16 

    0x2d380deb,// 43 PAY  17 

    0x9d994596,// 44 PAY  18 

    0x6c227091,// 45 PAY  19 

    0xbf62f425,// 46 PAY  20 

    0x5bd96823,// 47 PAY  21 

    0xf2e5ab45,// 48 PAY  22 

    0xf09c2ac7,// 49 PAY  23 

    0x083fd084,// 50 PAY  24 

    0x27774f88,// 51 PAY  25 

    0xa491c271,// 52 PAY  26 

    0xe7711103,// 53 PAY  27 

    0x7456aaa9,// 54 PAY  28 

    0xac4d04ed,// 55 PAY  29 

    0x4198a83f,// 56 PAY  30 

    0x204f2cc5,// 57 PAY  31 

    0x61b85a71,// 58 PAY  32 

    0xb67ef902,// 59 PAY  33 

    0x18e63571,// 60 PAY  34 

    0xb5eba53e,// 61 PAY  35 

    0x318567de,// 62 PAY  36 

/// STA is 1 words. 

/// STA num_pkts       : 73 

/// STA pkt_idx        : 76 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x71 

    0x01317149 // 63 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 88 (0x58) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_sha1_pkt10_tmpl[] = {
    0xb8010058,// 1 CCH   1 

/// ECH cache_idx      : 0x0b 

/// ECH pdu_tag        : 0x00 

    0x000b0000,// 2 ECH   1 

/// SCX is 21 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound save_icv insert_icv check_icv sctx_iv  

/// SCX exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : SHA1 

/// SCX aes_size        : NORMAL_RC4INIT_AES128 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x1 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 8 

/// SCX authctx_size    : 40 

    0x08000015,// 3 SCX   1 

    0x806448f6,// 4 SCX   2 

    0x000071c2,// 5 SCX   3 

    0x1b55cca9,// 6 SCX   4 

    0xd2d89c70,// 7 SCX   5 

    0x9938a993,// 8 SCX   6 

    0xfa1aa68d,// 9 SCX   7 

    0x32dddf2b,// 10 SCX   8 

    0xd4e7b295,// 11 SCX   9 

    0x31642154,// 12 SCX  10 

    0x9243a835,// 13 SCX  11 

    0xc4e3f7f3,// 14 SCX  12 

    0xe004c7fb,// 15 SCX  13 

    0x634d5c30,// 16 SCX  14 

    0x4e64af56,// 17 SCX  15 

    0x675ecefd,// 18 SCX  16 

    0xfa57ae1e,// 19 SCX  17 

    0xfa2a4675,// 20 SCX  18 

    0xc906a33d,// 21 SCX  19 

    0xf1193292,// 22 SCX  20 

    0x9f1295b6,// 23 SCX  21 

/// BFD is 3 words. 

/// BFD tot_len        : 584 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 515 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 515 

/// BFD lencrypto      : 248 

/// BFD ofstcrypto     : 112 

/// BFD (ofst+len)cry  : 360 

/// BFD ofstiv         : 12 

/// BFD ofsticv        : 524 

    0x00000203,// 24 BFD   1 

    0x007000f8,// 25 BFD   2 

    0x020c000c,// 26 BFD   3 

/// MFM is 10 words. 

/// MFM vldnibs        : 46 

    0x4600de65,// 27 MFM   1 

    0x822314cc,// 28 MFM   2 

    0x1efb2607,// 29 MFM   3 

    0x4025eaa8,// 30 MFM   4 

    0x0cf1f31f,// 31 MFM   5 

    0x26e93256,// 32 MFM   6 

    0x590f0e91,// 33 MFM   7 

    0x0130ade8,// 34 MFM   8 

    0xdca88e48,// 35 MFM   9 

    0xfa000000,// 36 MFM  10 

/// BDA is 147 words. 

/// BDA size     is 584 (0x248) 

/// BDA id       is 0xdf39 

    0x0248df39,// 37 BDA   1 

/// PAY Generic Data size   : 584 byte(s) 

/// PAD Buffer Data Pad size   : 0 byte(s) 

    0xd5eb2821,// 38 PAY   1 

    0x17e443eb,// 39 PAY   2 

    0x3474dbb2,// 40 PAY   3 

    0xcdb58b8f,// 41 PAY   4 

    0x96612f20,// 42 PAY   5 

    0xfbe3aabb,// 43 PAY   6 

    0x332ac90a,// 44 PAY   7 

    0xa49b37f9,// 45 PAY   8 

    0xdafab1e5,// 46 PAY   9 

    0x5db4cc9e,// 47 PAY  10 

    0x600a70dd,// 48 PAY  11 

    0x2a6bd1d2,// 49 PAY  12 

    0xd7f14ec6,// 50 PAY  13 

    0x7c34f5aa,// 51 PAY  14 

    0x166dbc64,// 52 PAY  15 

    0x0524dda4,// 53 PAY  16 

    0x7b144cab,// 54 PAY  17 

    0x4b809ba2,// 55 PAY  18 

    0xda8e78f5,// 56 PAY  19 

    0x60e23ed0,// 57 PAY  20 

    0xafa32971,// 58 PAY  21 

    0xea0bcb6f,// 59 PAY  22 

    0xa1716039,// 60 PAY  23 

    0xf7fe3fec,// 61 PAY  24 

    0x32211ac9,// 62 PAY  25 

    0x22d32135,// 63 PAY  26 

    0x3bba678a,// 64 PAY  27 

    0x26c74a34,// 65 PAY  28 

    0x7125e0d0,// 66 PAY  29 

    0x8a710ae3,// 67 PAY  30 

    0x66189cb1,// 68 PAY  31 

    0xb4997ed9,// 69 PAY  32 

    0x82525fea,// 70 PAY  33 

    0x37af1387,// 71 PAY  34 

    0x5f97d0c9,// 72 PAY  35 

    0x6cc728e0,// 73 PAY  36 

    0xe7239cec,// 74 PAY  37 

    0x2c5eefc3,// 75 PAY  38 

    0x2a2cad56,// 76 PAY  39 

    0x06419767,// 77 PAY  40 

    0xd5c6955b,// 78 PAY  41 

    0x616c0611,// 79 PAY  42 

    0xdc584079,// 80 PAY  43 

    0x08f4286e,// 81 PAY  44 

    0xed02d0d5,// 82 PAY  45 

    0x6107bf55,// 83 PAY  46 

    0x022883b6,// 84 PAY  47 

    0xfabe8651,// 85 PAY  48 

    0xbd1a5e8b,// 86 PAY  49 

    0xa3077e53,// 87 PAY  50 

    0x93f33c07,// 88 PAY  51 

    0x1af4d856,// 89 PAY  52 

    0xaa340f8c,// 90 PAY  53 

    0x3fd253f8,// 91 PAY  54 

    0x45458838,// 92 PAY  55 

    0xdc69474b,// 93 PAY  56 

    0xaad21d02,// 94 PAY  57 

    0x6252cb69,// 95 PAY  58 

    0x87a53ac8,// 96 PAY  59 

    0x56c1b1dc,// 97 PAY  60 

    0x729b5a78,// 98 PAY  61 

    0xee169c25,// 99 PAY  62 

    0xa08e606f,// 100 PAY  63 

    0xd91262e3,// 101 PAY  64 

    0xea42aa34,// 102 PAY  65 

    0xcd77582a,// 103 PAY  66 

    0xfba6fc1d,// 104 PAY  67 

    0xb4e2164f,// 105 PAY  68 

    0xed5b0141,// 106 PAY  69 

    0xd6f97877,// 107 PAY  70 

    0x72484bc3,// 108 PAY  71 

    0x8b6ceb37,// 109 PAY  72 

    0x75422fb6,// 110 PAY  73 

    0x72e4405e,// 111 PAY  74 

    0x676834bc,// 112 PAY  75 

    0xe0ab96e9,// 113 PAY  76 

    0x711e8dc1,// 114 PAY  77 

    0x66b89640,// 115 PAY  78 

    0xe22a18c9,// 116 PAY  79 

    0x0a76e09f,// 117 PAY  80 

    0xc5b6d227,// 118 PAY  81 

    0x5919eaaa,// 119 PAY  82 

    0x8812811a,// 120 PAY  83 

    0x2670cf74,// 121 PAY  84 

    0xd51dd6f3,// 122 PAY  85 

    0x45b7e6d4,// 123 PAY  86 

    0xa9d0be7e,// 124 PAY  87 

    0x9cf5707d,// 125 PAY  88 

    0x8f25f4e9,// 126 PAY  89 

    0x7503cb6f,// 127 PAY  90 

    0x619a1166,// 128 PAY  91 

    0x59d4b083,// 129 PAY  92 

    0x52a59c21,// 130 PAY  93 

    0xa1e8e64e,// 131 PAY  94 

    0xa3de5cf8,// 132 PAY  95 

    0x1f08e3ec,// 133 PAY  96 

    0xd99a2b89,// 134 PAY  97 

    0x2bf19a21,// 135 PAY  98 

    0xa7b85955,// 136 PAY  99 

    0x115a5dc1,// 137 PAY 100 

    0x9dbdc44a,// 138 PAY 101 

    0xbe641b48,// 139 PAY 102 

    0x98112f10,// 140 PAY 103 

    0xb0101577,// 141 PAY 104 

    0xaba8044c,// 142 PAY 105 

    0x01b3a9cc,// 143 PAY 106 

    0xa7197c4e,// 144 PAY 107 

    0xcc672b16,// 145 PAY 108 

    0xdd72f6c3,// 146 PAY 109 

    0x66dba2ce,// 147 PAY 110 

    0xa08746c0,// 148 PAY 111 

    0xd5097d59,// 149 PAY 112 

    0x4ae5ccf1,// 150 PAY 113 

    0x64baa585,// 151 PAY 114 

    0xfc693ffa,// 152 PAY 115 

    0x98741b8e,// 153 PAY 116 

    0xdadb4ebe,// 154 PAY 117 

    0x56a92c2d,// 155 PAY 118 

    0xb9622ab1,// 156 PAY 119 

    0x61727264,// 157 PAY 120 

    0x79856e6d,// 158 PAY 121 

    0x23c2529e,// 159 PAY 122 

    0x65095323,// 160 PAY 123 

    0xe0dad87f,// 161 PAY 124 

    0x61f3d557,// 162 PAY 125 

    0x21e9b0ff,// 163 PAY 126 

    0xc9b90567,// 164 PAY 127 

    0x7a8ccca9,// 165 PAY 128 

    0x2c6a75e8,// 166 PAY 129 

    0x3a465b44,// 167 PAY 130 

    0x915dc9ce,// 168 PAY 131 

    0xe72219ac,// 169 PAY 132 

    0x24071ca9,// 170 PAY 133 

    0x3bd23028,// 171 PAY 134 

    0xa96c3647,// 172 PAY 135 

    0x6fd5d0ec,// 173 PAY 136 

    0x20ee49bf,// 174 PAY 137 

    0xa47606d3,// 175 PAY 138 

    0x03ad9d1d,// 176 PAY 139 

    0x82305815,// 177 PAY 140 

    0xd9812ae2,// 178 PAY 141 

    0x1209e81b,// 179 PAY 142 

    0x157f400e,// 180 PAY 143 

    0xeec2b593,// 181 PAY 144 

    0x03f66141,// 182 PAY 145 

    0x4ac2809e,// 183 PAY 146 

/// STA is 1 words. 

/// STA num_pkts       : 44 

/// STA pkt_idx        : 214 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xe8 

    0x0359e82c // 184 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 80 (0x50) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_sha1_pkt11_tmpl[] = {
    0xb8010050,// 1 CCH   1 

/// ECH cache_idx      : 0x01 

/// ECH pdu_tag        : 0x00 

    0x00010000,// 2 ECH   1 

/// SCX is 19 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound save_icv insert_icv check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : SHA1 

/// SCX aes_size        : AES256 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x2 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 40 

    0x08000013,// 3 SCX   1 

    0x8062483e,// 4 SCX   2 

    0x00007200,// 5 SCX   3 

    0xe69a9842,// 6 SCX   4 

    0x5e03a171,// 7 SCX   5 

    0x0df3fa30,// 8 SCX   6 

    0x0b787088,// 9 SCX   7 

    0xf5abc2ff,// 10 SCX   8 

    0x54134657,// 11 SCX   9 

    0x4d4b1114,// 12 SCX  10 

    0x862562e5,// 13 SCX  11 

    0x15ae2cc8,// 14 SCX  12 

    0x0e4b2bf0,// 15 SCX  13 

    0xd709eb2e,// 16 SCX  14 

    0x5a7d4491,// 17 SCX  15 

    0x7a0036e0,// 18 SCX  16 

    0x7b1d2471,// 19 SCX  17 

    0xbb30e99c,// 20 SCX  18 

    0x544203d8,// 21 SCX  19 

/// BFD is 3 words. 

/// BFD tot_len        : 421 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 25 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 25 

/// BFD lencrypto      : 16 

/// BFD ofstcrypto     : 8 

/// BFD (ofst+len)cry  : 24 

/// BFD ofstiv         : 0 

/// BFD ofsticv        : 272 

    0x00000019,// 22 BFD   1 

    0x00080010,// 23 BFD   2 

    0x01100000,// 24 BFD   3 

/// MFM is 1 words. 

/// MFM vldnibs        : 1 

    0x0100a000,// 25 MFM   1 

/// BDA is 107 words. 

/// BDA size     is 421 (0x1a5) 

/// BDA id       is 0x906 

    0x01a50906,// 26 BDA   1 

/// PAY Generic Data size   : 421 byte(s) 

/// PAD Buffer Data Pad size   : 3 byte(s) 

    0x90c9d778,// 27 PAY   1 

    0xe4671329,// 28 PAY   2 

    0x71547ba3,// 29 PAY   3 

    0xa2f94018,// 30 PAY   4 

    0x3b629608,// 31 PAY   5 

    0x127c4bf9,// 32 PAY   6 

    0x661c2bab,// 33 PAY   7 

    0xafb8dff1,// 34 PAY   8 

    0x332895dc,// 35 PAY   9 

    0x9726416f,// 36 PAY  10 

    0xc34caf98,// 37 PAY  11 

    0x30fc2457,// 38 PAY  12 

    0x73f5b9f6,// 39 PAY  13 

    0x80f880f9,// 40 PAY  14 

    0x25e046a2,// 41 PAY  15 

    0xf5ccfaa0,// 42 PAY  16 

    0x424b7dd1,// 43 PAY  17 

    0x3c722eb3,// 44 PAY  18 

    0x7079862e,// 45 PAY  19 

    0xa01628eb,// 46 PAY  20 

    0x4a8c7623,// 47 PAY  21 

    0xe6bc295e,// 48 PAY  22 

    0x27ecd949,// 49 PAY  23 

    0x4b38f536,// 50 PAY  24 

    0x7d73541c,// 51 PAY  25 

    0x2edfb427,// 52 PAY  26 

    0x2e70c987,// 53 PAY  27 

    0x595251f8,// 54 PAY  28 

    0xb17a80f4,// 55 PAY  29 

    0xe993f175,// 56 PAY  30 

    0xf7aff672,// 57 PAY  31 

    0xc7789db4,// 58 PAY  32 

    0x517a8b03,// 59 PAY  33 

    0x2fc4aacd,// 60 PAY  34 

    0x443208c9,// 61 PAY  35 

    0x0f87e496,// 62 PAY  36 

    0xf449908a,// 63 PAY  37 

    0xce884495,// 64 PAY  38 

    0x366face1,// 65 PAY  39 

    0x6d579359,// 66 PAY  40 

    0x6542bf5d,// 67 PAY  41 

    0x1a0419a0,// 68 PAY  42 

    0x207a3c75,// 69 PAY  43 

    0xb6c56c4f,// 70 PAY  44 

    0x3570ddec,// 71 PAY  45 

    0x9f2c537a,// 72 PAY  46 

    0x689aa935,// 73 PAY  47 

    0xa8904cd9,// 74 PAY  48 

    0x76a5a665,// 75 PAY  49 

    0x2ee98b7c,// 76 PAY  50 

    0x5bd74f0f,// 77 PAY  51 

    0x712a3905,// 78 PAY  52 

    0xb79cc5f7,// 79 PAY  53 

    0xbbe2c5d3,// 80 PAY  54 

    0xb0b65a85,// 81 PAY  55 

    0x4b18c715,// 82 PAY  56 

    0x15cfe6d5,// 83 PAY  57 

    0x4fab5863,// 84 PAY  58 

    0x6978f16b,// 85 PAY  59 

    0x9c9077d6,// 86 PAY  60 

    0x5ff414ee,// 87 PAY  61 

    0xa08bf3f9,// 88 PAY  62 

    0x4f0beb38,// 89 PAY  63 

    0x978763dd,// 90 PAY  64 

    0x3c3524c4,// 91 PAY  65 

    0xf6b2fcad,// 92 PAY  66 

    0xaf29e387,// 93 PAY  67 

    0xdec87324,// 94 PAY  68 

    0x8cdb5c28,// 95 PAY  69 

    0x2ce4de45,// 96 PAY  70 

    0x1b881778,// 97 PAY  71 

    0x17f0d0cb,// 98 PAY  72 

    0xbdc1ae8b,// 99 PAY  73 

    0xb19c7c32,// 100 PAY  74 

    0x7b71f1d4,// 101 PAY  75 

    0x29842eed,// 102 PAY  76 

    0x65811a47,// 103 PAY  77 

    0x4ee4fabc,// 104 PAY  78 

    0xadde1832,// 105 PAY  79 

    0x20829980,// 106 PAY  80 

    0x999c63fc,// 107 PAY  81 

    0xdc99bc02,// 108 PAY  82 

    0xfc5757aa,// 109 PAY  83 

    0x0b8bdf6e,// 110 PAY  84 

    0x15d8d2f9,// 111 PAY  85 

    0xe15a1479,// 112 PAY  86 

    0xe7aa90ae,// 113 PAY  87 

    0x08ee9461,// 114 PAY  88 

    0x98873b21,// 115 PAY  89 

    0x48a03d94,// 116 PAY  90 

    0x598310a9,// 117 PAY  91 

    0x4ef7b002,// 118 PAY  92 

    0x3d88ff20,// 119 PAY  93 

    0x342ff87f,// 120 PAY  94 

    0x4a1a247d,// 121 PAY  95 

    0xf0b09c86,// 122 PAY  96 

    0x92ce69bf,// 123 PAY  97 

    0x0a40a108,// 124 PAY  98 

    0x3d0b2343,// 125 PAY  99 

    0xd59d0621,// 126 PAY 100 

    0xfb4f6faf,// 127 PAY 101 

    0x4e10f570,// 128 PAY 102 

    0x91110629,// 129 PAY 103 

    0xf2543b8c,// 130 PAY 104 

    0x7f8b8209,// 131 PAY 105 

    0x62000000,// 132 PAY 106 

/// STA is 1 words. 

/// STA num_pkts       : 10 

/// STA pkt_idx        : 216 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x7c 

    0x03607c0a // 133 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 80 (0x50) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_sha1_pkt12_tmpl[] = {
    0xb8010050,// 1 CCH   1 

/// ECH cache_idx      : 0x0a 

/// ECH pdu_tag        : 0x00 

    0x000a0000,// 2 ECH   1 

/// SCX is 19 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound !save_icv insert_icv check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : SHA1 

/// SCX aes_size        : NORMAL_RC4INIT_AES128 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x1 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 40 

    0x00000013,// 3 SCX   1 

    0x806048b2,// 4 SCX   2 

    0x00003100,// 5 SCX   3 

    0x81fb5b3b,// 6 SCX   4 

    0xc20a0b5b,// 7 SCX   5 

    0xb02459b2,// 8 SCX   6 

    0xf9de0733,// 9 SCX   7 

    0x024147cf,// 10 SCX   8 

    0x40c18299,// 11 SCX   9 

    0xacaba97e,// 12 SCX  10 

    0x7437eda9,// 13 SCX  11 

    0x43b9df14,// 14 SCX  12 

    0x491a0a9e,// 15 SCX  13 

    0xd9f5115c,// 16 SCX  14 

    0xcf33bc24,// 17 SCX  15 

    0x72157152,// 18 SCX  16 

    0x982c3c1c,// 19 SCX  17 

    0x4d04c966,// 20 SCX  18 

    0x7fa4efcb,// 21 SCX  19 

/// BFD is 3 words. 

/// BFD tot_len        : 1481 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 24 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 24 

/// BFD lencrypto      : 8 

/// BFD ofstcrypto     : 12 

/// BFD (ofst+len)cry  : 20 

/// BFD ofstiv         : 0 

/// BFD ofsticv        : 412 

    0x00000018,// 22 BFD   1 

    0x000c0008,// 23 BFD   2 

    0x019c0000,// 24 BFD   3 

/// MFM is 1 words. 

/// MFM vldnibs        : 3 

    0x03001640,// 25 MFM   1 

/// BDA is 372 words. 

/// BDA size     is 1481 (0x5c9) 

/// BDA id       is 0x79ee 

    0x05c979ee,// 26 BDA   1 

/// PAY Generic Data size   : 1481 byte(s) 

/// PAD Buffer Data Pad size   : 3 byte(s) 

    0x99ecd7e4,// 27 PAY   1 

    0x5172d006,// 28 PAY   2 

    0x19acfad4,// 29 PAY   3 

    0x36a9aeaa,// 30 PAY   4 

    0xa6b3be51,// 31 PAY   5 

    0xb384106c,// 32 PAY   6 

    0x3a5ec74e,// 33 PAY   7 

    0x84598d52,// 34 PAY   8 

    0xd17085b9,// 35 PAY   9 

    0x6ad9d9c3,// 36 PAY  10 

    0x602f30bb,// 37 PAY  11 

    0x0afda75a,// 38 PAY  12 

    0x10ca7048,// 39 PAY  13 

    0x882ea1e3,// 40 PAY  14 

    0xaf75f43d,// 41 PAY  15 

    0x5ec1855e,// 42 PAY  16 

    0x81f94cdf,// 43 PAY  17 

    0x224b9c51,// 44 PAY  18 

    0x7b3fd896,// 45 PAY  19 

    0xa0f859ea,// 46 PAY  20 

    0x09a5f6f0,// 47 PAY  21 

    0xd70a86c0,// 48 PAY  22 

    0x97881d36,// 49 PAY  23 

    0x2962bfe1,// 50 PAY  24 

    0x8611f5d9,// 51 PAY  25 

    0xe0296378,// 52 PAY  26 

    0x459f5c9a,// 53 PAY  27 

    0x913f6173,// 54 PAY  28 

    0x6d812b58,// 55 PAY  29 

    0x09062425,// 56 PAY  30 

    0xeed78987,// 57 PAY  31 

    0x2ab65813,// 58 PAY  32 

    0x7ffdb1d0,// 59 PAY  33 

    0x03a7b380,// 60 PAY  34 

    0xa91cb202,// 61 PAY  35 

    0x20bf39b0,// 62 PAY  36 

    0x3a64aa58,// 63 PAY  37 

    0x9a88c6a7,// 64 PAY  38 

    0xe2f44729,// 65 PAY  39 

    0x679db8bf,// 66 PAY  40 

    0x43286cc9,// 67 PAY  41 

    0x7e959271,// 68 PAY  42 

    0x119c95ea,// 69 PAY  43 

    0xa2035c2e,// 70 PAY  44 

    0x29a60a51,// 71 PAY  45 

    0xc19574eb,// 72 PAY  46 

    0x3c4e208a,// 73 PAY  47 

    0xdde1ba63,// 74 PAY  48 

    0xb0db2859,// 75 PAY  49 

    0xb924ba32,// 76 PAY  50 

    0x923135d3,// 77 PAY  51 

    0x48de564d,// 78 PAY  52 

    0xb057a259,// 79 PAY  53 

    0x0888c9e4,// 80 PAY  54 

    0xd201a88a,// 81 PAY  55 

    0x219cb509,// 82 PAY  56 

    0x45165732,// 83 PAY  57 

    0x11fac70d,// 84 PAY  58 

    0x6640c108,// 85 PAY  59 

    0x424c6667,// 86 PAY  60 

    0x6195b203,// 87 PAY  61 

    0x7bbbc86f,// 88 PAY  62 

    0x96dbbfca,// 89 PAY  63 

    0x5b71e02d,// 90 PAY  64 

    0x8cddfd58,// 91 PAY  65 

    0x8c8a9cb7,// 92 PAY  66 

    0x6b6be30c,// 93 PAY  67 

    0x32d72bb4,// 94 PAY  68 

    0x0f057e75,// 95 PAY  69 

    0xe3300a72,// 96 PAY  70 

    0x189351ba,// 97 PAY  71 

    0x6eaa3cd1,// 98 PAY  72 

    0xaf8dfa2f,// 99 PAY  73 

    0xa0d04a9a,// 100 PAY  74 

    0xbc7e37dc,// 101 PAY  75 

    0xe4669d59,// 102 PAY  76 

    0x6c67b314,// 103 PAY  77 

    0xd9036999,// 104 PAY  78 

    0x765fb775,// 105 PAY  79 

    0xfe36cd53,// 106 PAY  80 

    0x602067ff,// 107 PAY  81 

    0x5b9ca6bb,// 108 PAY  82 

    0xda34c1e1,// 109 PAY  83 

    0x488519f2,// 110 PAY  84 

    0x9324ce9d,// 111 PAY  85 

    0x55d70463,// 112 PAY  86 

    0x1560ac8c,// 113 PAY  87 

    0x6a246241,// 114 PAY  88 

    0xbc2a0be0,// 115 PAY  89 

    0x61d516c4,// 116 PAY  90 

    0xca721d56,// 117 PAY  91 

    0x38cc4ec9,// 118 PAY  92 

    0x462dbc41,// 119 PAY  93 

    0xe2523f45,// 120 PAY  94 

    0xb515377f,// 121 PAY  95 

    0x1222576a,// 122 PAY  96 

    0x6a2cfdfb,// 123 PAY  97 

    0x40de1567,// 124 PAY  98 

    0x790c7592,// 125 PAY  99 

    0x0b28dbde,// 126 PAY 100 

    0x331fdde7,// 127 PAY 101 

    0x8f6c9f39,// 128 PAY 102 

    0xaa699adc,// 129 PAY 103 

    0xe4c98c9a,// 130 PAY 104 

    0x703357f2,// 131 PAY 105 

    0x206910de,// 132 PAY 106 

    0xb86151f8,// 133 PAY 107 

    0xfa8c377d,// 134 PAY 108 

    0xa9e08b15,// 135 PAY 109 

    0x948fc4a7,// 136 PAY 110 

    0x5584ce30,// 137 PAY 111 

    0x1c559e4e,// 138 PAY 112 

    0x434305e1,// 139 PAY 113 

    0xefdc0bb3,// 140 PAY 114 

    0xafded7cb,// 141 PAY 115 

    0x01f1116e,// 142 PAY 116 

    0x963cda0e,// 143 PAY 117 

    0xf758e163,// 144 PAY 118 

    0xe7e78135,// 145 PAY 119 

    0xdd80ab21,// 146 PAY 120 

    0x9028b462,// 147 PAY 121 

    0x26d6061d,// 148 PAY 122 

    0xce89a675,// 149 PAY 123 

    0xebb72fd4,// 150 PAY 124 

    0xe882eaec,// 151 PAY 125 

    0xf66d936d,// 152 PAY 126 

    0xc6dc7c83,// 153 PAY 127 

    0xb48292dc,// 154 PAY 128 

    0xa69f9d19,// 155 PAY 129 

    0x902df374,// 156 PAY 130 

    0x0af53e2d,// 157 PAY 131 

    0x3c4bd0c0,// 158 PAY 132 

    0xedd707a2,// 159 PAY 133 

    0x90d5beba,// 160 PAY 134 

    0xae21b402,// 161 PAY 135 

    0x50c8f1c6,// 162 PAY 136 

    0x357440fa,// 163 PAY 137 

    0xf6e7e66d,// 164 PAY 138 

    0x6e985181,// 165 PAY 139 

    0x8ab5e98e,// 166 PAY 140 

    0xe1ea2e25,// 167 PAY 141 

    0x05be7cf2,// 168 PAY 142 

    0x42b30650,// 169 PAY 143 

    0x3ae064cf,// 170 PAY 144 

    0xd2324851,// 171 PAY 145 

    0x7bbb71f9,// 172 PAY 146 

    0x2ea21afa,// 173 PAY 147 

    0x333bae1b,// 174 PAY 148 

    0x048fbb2e,// 175 PAY 149 

    0x05c42db8,// 176 PAY 150 

    0x0574fae3,// 177 PAY 151 

    0xf99a8923,// 178 PAY 152 

    0x64df8473,// 179 PAY 153 

    0xbf09069a,// 180 PAY 154 

    0x54aa474f,// 181 PAY 155 

    0x20ef967f,// 182 PAY 156 

    0x29c2e38a,// 183 PAY 157 

    0xb4472921,// 184 PAY 158 

    0x60606780,// 185 PAY 159 

    0xb14c2d2d,// 186 PAY 160 

    0x366db535,// 187 PAY 161 

    0x70f9900f,// 188 PAY 162 

    0x37aa43da,// 189 PAY 163 

    0x70aa2df9,// 190 PAY 164 

    0x5bdca226,// 191 PAY 165 

    0x1e8854bf,// 192 PAY 166 

    0xa20c1528,// 193 PAY 167 

    0x5bbdd7e9,// 194 PAY 168 

    0x767f7e2d,// 195 PAY 169 

    0x403161ce,// 196 PAY 170 

    0x1d652c27,// 197 PAY 171 

    0x73a97385,// 198 PAY 172 

    0x065efc32,// 199 PAY 173 

    0x3a68a19b,// 200 PAY 174 

    0x5ef196c9,// 201 PAY 175 

    0xdea1a479,// 202 PAY 176 

    0x1d8cadd1,// 203 PAY 177 

    0x535bef0c,// 204 PAY 178 

    0xf2f81722,// 205 PAY 179 

    0xb98eafbb,// 206 PAY 180 

    0x5e3384a9,// 207 PAY 181 

    0xb5999e61,// 208 PAY 182 

    0x3fc6c910,// 209 PAY 183 

    0x6f1a4b2a,// 210 PAY 184 

    0x21dee880,// 211 PAY 185 

    0xe04f3182,// 212 PAY 186 

    0x082bb1d5,// 213 PAY 187 

    0x6124fbd1,// 214 PAY 188 

    0xd3dd71ef,// 215 PAY 189 

    0xf672830b,// 216 PAY 190 

    0xca626fc6,// 217 PAY 191 

    0x26c3ffb8,// 218 PAY 192 

    0xa0e81871,// 219 PAY 193 

    0x2a15493e,// 220 PAY 194 

    0xf91c89df,// 221 PAY 195 

    0x42ed27b1,// 222 PAY 196 

    0x4441021b,// 223 PAY 197 

    0x028b679b,// 224 PAY 198 

    0x15fe7e60,// 225 PAY 199 

    0x9a5a4f1a,// 226 PAY 200 

    0x680f15e8,// 227 PAY 201 

    0xfaa2b0d9,// 228 PAY 202 

    0x7702e1dc,// 229 PAY 203 

    0x9d083c9e,// 230 PAY 204 

    0xd1062996,// 231 PAY 205 

    0x04260173,// 232 PAY 206 

    0x3e5e23e5,// 233 PAY 207 

    0x249b391e,// 234 PAY 208 

    0xade7a289,// 235 PAY 209 

    0xec203d52,// 236 PAY 210 

    0xe060e60e,// 237 PAY 211 

    0x6545834d,// 238 PAY 212 

    0xb967dc81,// 239 PAY 213 

    0x106875a1,// 240 PAY 214 

    0x41121130,// 241 PAY 215 

    0x3d848761,// 242 PAY 216 

    0x0325030a,// 243 PAY 217 

    0x8d328852,// 244 PAY 218 

    0xc39f8698,// 245 PAY 219 

    0xe6ba262b,// 246 PAY 220 

    0x4f8acd9c,// 247 PAY 221 

    0x22e525e0,// 248 PAY 222 

    0xbe139c13,// 249 PAY 223 

    0xded9a2bc,// 250 PAY 224 

    0x8f30d70d,// 251 PAY 225 

    0x86251fa3,// 252 PAY 226 

    0xe70b1a67,// 253 PAY 227 

    0xf926310c,// 254 PAY 228 

    0x979c09f9,// 255 PAY 229 

    0xb299e4ce,// 256 PAY 230 

    0x7f6dd4e5,// 257 PAY 231 

    0x7816a78c,// 258 PAY 232 

    0x34e448d9,// 259 PAY 233 

    0x1e78ec09,// 260 PAY 234 

    0x92cdc170,// 261 PAY 235 

    0xcb31d710,// 262 PAY 236 

    0xabcaae94,// 263 PAY 237 

    0x50e579c9,// 264 PAY 238 

    0x95ac45ed,// 265 PAY 239 

    0xf4cfc829,// 266 PAY 240 

    0x8f0dd078,// 267 PAY 241 

    0xf952f66b,// 268 PAY 242 

    0x2f979716,// 269 PAY 243 

    0x57ede1be,// 270 PAY 244 

    0xe98dddeb,// 271 PAY 245 

    0x3839e909,// 272 PAY 246 

    0x424da693,// 273 PAY 247 

    0x75761a74,// 274 PAY 248 

    0x2ce21b63,// 275 PAY 249 

    0x584d07d6,// 276 PAY 250 

    0xecc31ad0,// 277 PAY 251 

    0xe828c046,// 278 PAY 252 

    0xa839ad5c,// 279 PAY 253 

    0x63ad6e04,// 280 PAY 254 

    0x98f4dc68,// 281 PAY 255 

    0xdb064e6f,// 282 PAY 256 

    0x81f72289,// 283 PAY 257 

    0xd39a62e5,// 284 PAY 258 

    0x9c0321ef,// 285 PAY 259 

    0xdf46666d,// 286 PAY 260 

    0xaa9936c7,// 287 PAY 261 

    0x4db0d8be,// 288 PAY 262 

    0x80a8cb4c,// 289 PAY 263 

    0x1c9eb5d1,// 290 PAY 264 

    0x41eb56de,// 291 PAY 265 

    0xa8461152,// 292 PAY 266 

    0xc64ef84c,// 293 PAY 267 

    0xe48c5a7a,// 294 PAY 268 

    0xbf22bd88,// 295 PAY 269 

    0x31308a6d,// 296 PAY 270 

    0x4cac5c75,// 297 PAY 271 

    0xbce0b39d,// 298 PAY 272 

    0xa91453f9,// 299 PAY 273 

    0x502a72fc,// 300 PAY 274 

    0x0cecf0b7,// 301 PAY 275 

    0xf4e057bd,// 302 PAY 276 

    0xa40449ca,// 303 PAY 277 

    0xf248080c,// 304 PAY 278 

    0x76f6d704,// 305 PAY 279 

    0x771d18e9,// 306 PAY 280 

    0x7603bdbc,// 307 PAY 281 

    0x14e92e1d,// 308 PAY 282 

    0x33bdd99d,// 309 PAY 283 

    0x5f3a8446,// 310 PAY 284 

    0x6ec7739a,// 311 PAY 285 

    0x4cf19acc,// 312 PAY 286 

    0x5fad7607,// 313 PAY 287 

    0x1ddf0ed2,// 314 PAY 288 

    0xc5a7b582,// 315 PAY 289 

    0x882fc93d,// 316 PAY 290 

    0x8bfd35e4,// 317 PAY 291 

    0x048b99f1,// 318 PAY 292 

    0x56fe59ed,// 319 PAY 293 

    0x701facd5,// 320 PAY 294 

    0xd308c352,// 321 PAY 295 

    0xd5d0ec7b,// 322 PAY 296 

    0x28cbeb69,// 323 PAY 297 

    0x938487f0,// 324 PAY 298 

    0x8884b145,// 325 PAY 299 

    0x3dc125b4,// 326 PAY 300 

    0x9613381b,// 327 PAY 301 

    0x74b6d836,// 328 PAY 302 

    0xb8210636,// 329 PAY 303 

    0xebe518fd,// 330 PAY 304 

    0x95b7c368,// 331 PAY 305 

    0x8ac47307,// 332 PAY 306 

    0x7f55c822,// 333 PAY 307 

    0x4672ace3,// 334 PAY 308 

    0xadb76717,// 335 PAY 309 

    0x64201278,// 336 PAY 310 

    0x0302a96c,// 337 PAY 311 

    0x27197dcb,// 338 PAY 312 

    0x06cc7103,// 339 PAY 313 

    0x9b8d0c2e,// 340 PAY 314 

    0xdbb13955,// 341 PAY 315 

    0xdf1b16f4,// 342 PAY 316 

    0xe577afe6,// 343 PAY 317 

    0xbd4160f1,// 344 PAY 318 

    0x29957c64,// 345 PAY 319 

    0x5fd989e5,// 346 PAY 320 

    0xe43b4d9d,// 347 PAY 321 

    0xc0672cb7,// 348 PAY 322 

    0x0083d814,// 349 PAY 323 

    0xfd3e0ec6,// 350 PAY 324 

    0x2343c0c8,// 351 PAY 325 

    0xeb019f36,// 352 PAY 326 

    0x7c1406b4,// 353 PAY 327 

    0xfa27fb70,// 354 PAY 328 

    0xd9266c6d,// 355 PAY 329 

    0x1e4b20c7,// 356 PAY 330 

    0xdc03b762,// 357 PAY 331 

    0x82d2a6e3,// 358 PAY 332 

    0x86de51fe,// 359 PAY 333 

    0x008ab658,// 360 PAY 334 

    0x313bf032,// 361 PAY 335 

    0xc6c451f9,// 362 PAY 336 

    0x8c7b5b38,// 363 PAY 337 

    0xb541b0e0,// 364 PAY 338 

    0xe6a41674,// 365 PAY 339 

    0x7b4b5810,// 366 PAY 340 

    0x98c3091a,// 367 PAY 341 

    0x7dbb2120,// 368 PAY 342 

    0x62862bfc,// 369 PAY 343 

    0xb13090f6,// 370 PAY 344 

    0xb16b7d25,// 371 PAY 345 

    0x32ad952f,// 372 PAY 346 

    0xb801f05f,// 373 PAY 347 

    0x27a3e203,// 374 PAY 348 

    0xa3cc3af0,// 375 PAY 349 

    0x54503d34,// 376 PAY 350 

    0x97d388cf,// 377 PAY 351 

    0x91437f59,// 378 PAY 352 

    0xaa97e3ca,// 379 PAY 353 

    0xf8a7393f,// 380 PAY 354 

    0x66b2ddef,// 381 PAY 355 

    0xea428aae,// 382 PAY 356 

    0x8f926fca,// 383 PAY 357 

    0x552f323f,// 384 PAY 358 

    0x639550ad,// 385 PAY 359 

    0x7c67c046,// 386 PAY 360 

    0xdabddd42,// 387 PAY 361 

    0x371c0a5f,// 388 PAY 362 

    0xccedc26e,// 389 PAY 363 

    0x9cc2cfd8,// 390 PAY 364 

    0x0174fafe,// 391 PAY 365 

    0x318a211e,// 392 PAY 366 

    0xdc033817,// 393 PAY 367 

    0x54708f3a,// 394 PAY 368 

    0xe7c9dc5b,// 395 PAY 369 

    0x17876f16,// 396 PAY 370 

    0x54000000,// 397 PAY 371 

/// STA is 1 words. 

/// STA num_pkts       : 116 

/// STA pkt_idx        : 70 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xcf 

    0x0119cf74 // 398 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 80 (0x50) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_sha1_pkt13_tmpl[] = {
    0xb8010050,// 1 CCH   1 

/// ECH cache_idx      : 0x05 

/// ECH pdu_tag        : 0x00 

    0x00050000,// 2 ECH   1 

/// SCX is 19 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound save_icv insert_icv !check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : SHA1 

/// SCX aes_size        : AES256 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x5 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 40 

    0x08000013,// 3 SCX   1 

    0x806248b7,// 4 SCX   2 

    0x00006500,// 5 SCX   3 

    0x87881312,// 6 SCX   4 

    0x234475c6,// 7 SCX   5 

    0x91e6de42,// 8 SCX   6 

    0x645d57b7,// 9 SCX   7 

    0xb4b092d3,// 10 SCX   8 

    0xa5757684,// 11 SCX   9 

    0xbe89e9fb,// 12 SCX  10 

    0xae9ecf92,// 13 SCX  11 

    0x719c5dc9,// 14 SCX  12 

    0xaec511ee,// 15 SCX  13 

    0xc2a853d3,// 16 SCX  14 

    0x41a566b6,// 17 SCX  15 

    0xf4411b1d,// 18 SCX  16 

    0xbffbd64a,// 19 SCX  17 

    0x0791dccf,// 20 SCX  18 

    0x12d1d619,// 21 SCX  19 

/// BFD is 3 words. 

/// BFD tot_len        : 1128 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 578 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 578 

/// BFD lencrypto      : 40 

/// BFD ofstcrypto     : 416 

/// BFD (ofst+len)cry  : 456 

/// BFD ofstiv         : 180 

/// BFD ofsticv        : 752 

    0x00000242,// 22 BFD   1 

    0x01a00028,// 23 BFD   2 

    0x02f000b4,// 24 BFD   3 

/// MFM is 8 words. 

/// MFM vldnibs        : 35 

    0x35001faf,// 25 MFM   1 

    0x31da1d3b,// 26 MFM   2 

    0x2350eeea,// 27 MFM   3 

    0x1f788498,// 28 MFM   4 

    0xc84ece22,// 29 MFM   5 

    0x1d8a0268,// 30 MFM   6 

    0xb1ae113c,// 31 MFM   7 

    0x10000000,// 32 MFM   8 

/// BDA is 283 words. 

/// BDA size     is 1128 (0x468) 

/// BDA id       is 0x91a 

    0x0468091a,// 33 BDA   1 

/// PAY Generic Data size   : 1128 byte(s) 

/// PAD Buffer Data Pad size   : 0 byte(s) 

    0xe89f9cd3,// 34 PAY   1 

    0x49908891,// 35 PAY   2 

    0x03fb2584,// 36 PAY   3 

    0x20d5b349,// 37 PAY   4 

    0xfbde5fab,// 38 PAY   5 

    0x55ddfd20,// 39 PAY   6 

    0x8945cff6,// 40 PAY   7 

    0x242b1d85,// 41 PAY   8 

    0x669971a4,// 42 PAY   9 

    0x2a1eeb1b,// 43 PAY  10 

    0x1843cf3d,// 44 PAY  11 

    0x05e0adbb,// 45 PAY  12 

    0x6e441854,// 46 PAY  13 

    0x8285792d,// 47 PAY  14 

    0xfe922c31,// 48 PAY  15 

    0x86ebc963,// 49 PAY  16 

    0x04cf465f,// 50 PAY  17 

    0xce9f5a02,// 51 PAY  18 

    0xe7fd9226,// 52 PAY  19 

    0x0ad9ee69,// 53 PAY  20 

    0x9f598e83,// 54 PAY  21 

    0x9c4e66cb,// 55 PAY  22 

    0xef26feed,// 56 PAY  23 

    0xaf32caad,// 57 PAY  24 

    0x0241030f,// 58 PAY  25 

    0x9e1d59e8,// 59 PAY  26 

    0xf20c7c3b,// 60 PAY  27 

    0xa806c465,// 61 PAY  28 

    0x1a388640,// 62 PAY  29 

    0x495a3f0b,// 63 PAY  30 

    0xa1b2946e,// 64 PAY  31 

    0x6e84db7b,// 65 PAY  32 

    0xaed7c922,// 66 PAY  33 

    0x47cf11e9,// 67 PAY  34 

    0x23493f5f,// 68 PAY  35 

    0x69f419c8,// 69 PAY  36 

    0x2749a187,// 70 PAY  37 

    0x5a4347b7,// 71 PAY  38 

    0xddd65d6a,// 72 PAY  39 

    0x9210d460,// 73 PAY  40 

    0xdb11088f,// 74 PAY  41 

    0x831386f0,// 75 PAY  42 

    0x183f69e6,// 76 PAY  43 

    0x881ed6e4,// 77 PAY  44 

    0x6b653f56,// 78 PAY  45 

    0x1a6f8111,// 79 PAY  46 

    0x125dd0df,// 80 PAY  47 

    0xe674ea8a,// 81 PAY  48 

    0x9d5ed9d1,// 82 PAY  49 

    0xf270bf60,// 83 PAY  50 

    0xf86c1f88,// 84 PAY  51 

    0x432d994d,// 85 PAY  52 

    0xcd245632,// 86 PAY  53 

    0xae973ffb,// 87 PAY  54 

    0xae3976ab,// 88 PAY  55 

    0xd98802ba,// 89 PAY  56 

    0xbb966db4,// 90 PAY  57 

    0xf92e7a1a,// 91 PAY  58 

    0x9f35701c,// 92 PAY  59 

    0xc3b81626,// 93 PAY  60 

    0x6de4c956,// 94 PAY  61 

    0xbd73a86a,// 95 PAY  62 

    0x76eeda10,// 96 PAY  63 

    0x409a76e6,// 97 PAY  64 

    0x2370c406,// 98 PAY  65 

    0x2cf06569,// 99 PAY  66 

    0xd676e733,// 100 PAY  67 

    0x2d09d7db,// 101 PAY  68 

    0x58c6219e,// 102 PAY  69 

    0xce48921e,// 103 PAY  70 

    0x388c8ed7,// 104 PAY  71 

    0x6937189f,// 105 PAY  72 

    0xba92e108,// 106 PAY  73 

    0xb70ebf58,// 107 PAY  74 

    0xe262d00a,// 108 PAY  75 

    0x16ae0651,// 109 PAY  76 

    0x2bb4ab74,// 110 PAY  77 

    0xa45d3698,// 111 PAY  78 

    0x0afd1aa7,// 112 PAY  79 

    0x36c9b4a9,// 113 PAY  80 

    0xc15fc2a1,// 114 PAY  81 

    0xea161c2e,// 115 PAY  82 

    0x96d2ab0b,// 116 PAY  83 

    0x42d3e3e0,// 117 PAY  84 

    0xdf1c891a,// 118 PAY  85 

    0x50666fca,// 119 PAY  86 

    0xb69eb97e,// 120 PAY  87 

    0xc427b202,// 121 PAY  88 

    0xd55436a5,// 122 PAY  89 

    0xc044a2e6,// 123 PAY  90 

    0x6bc0e24f,// 124 PAY  91 

    0x05ae00a3,// 125 PAY  92 

    0xd069cd2a,// 126 PAY  93 

    0x9c65f476,// 127 PAY  94 

    0xfd03cb96,// 128 PAY  95 

    0x898c8fd6,// 129 PAY  96 

    0xe5094fe9,// 130 PAY  97 

    0x0c25ba47,// 131 PAY  98 

    0xcb2c94b5,// 132 PAY  99 

    0x7de7927c,// 133 PAY 100 

    0xa9aa21a2,// 134 PAY 101 

    0x6014dbac,// 135 PAY 102 

    0x31351246,// 136 PAY 103 

    0x304b649a,// 137 PAY 104 

    0x51b2dfe1,// 138 PAY 105 

    0xc0e962ba,// 139 PAY 106 

    0xca95a95f,// 140 PAY 107 

    0xb79afc31,// 141 PAY 108 

    0xe8e66e02,// 142 PAY 109 

    0x92eeee96,// 143 PAY 110 

    0xac5de5e9,// 144 PAY 111 

    0xbc92120d,// 145 PAY 112 

    0xaa4a1042,// 146 PAY 113 

    0x90ceb5cb,// 147 PAY 114 

    0xe6046115,// 148 PAY 115 

    0xf0c0aba8,// 149 PAY 116 

    0xfbfc4bbd,// 150 PAY 117 

    0xbf031c15,// 151 PAY 118 

    0x7fa1f758,// 152 PAY 119 

    0x3e8bf106,// 153 PAY 120 

    0x706fc565,// 154 PAY 121 

    0xb245b6b0,// 155 PAY 122 

    0xbaced57e,// 156 PAY 123 

    0xb03e5da3,// 157 PAY 124 

    0xf27233f1,// 158 PAY 125 

    0xd1688303,// 159 PAY 126 

    0xd5a4e6e5,// 160 PAY 127 

    0x917fb94a,// 161 PAY 128 

    0xdf4e978b,// 162 PAY 129 

    0x6b32b2c5,// 163 PAY 130 

    0xb0970987,// 164 PAY 131 

    0xeaa832c5,// 165 PAY 132 

    0x7f0c69e3,// 166 PAY 133 

    0x9c320b42,// 167 PAY 134 

    0x60d5f5b2,// 168 PAY 135 

    0x0b67f975,// 169 PAY 136 

    0xe267efaf,// 170 PAY 137 

    0x19c44204,// 171 PAY 138 

    0xfebaa6ef,// 172 PAY 139 

    0x9defc1cb,// 173 PAY 140 

    0x52550f1a,// 174 PAY 141 

    0x92ca8566,// 175 PAY 142 

    0xaef3b83a,// 176 PAY 143 

    0xa7ae5e07,// 177 PAY 144 

    0x0f8428d6,// 178 PAY 145 

    0x8c4d2304,// 179 PAY 146 

    0x125529a0,// 180 PAY 147 

    0x2c228b74,// 181 PAY 148 

    0xa640a0f1,// 182 PAY 149 

    0x29ad4d16,// 183 PAY 150 

    0xdec9ad19,// 184 PAY 151 

    0xe6a43e37,// 185 PAY 152 

    0xb4a14e11,// 186 PAY 153 

    0x95ad3741,// 187 PAY 154 

    0x15189841,// 188 PAY 155 

    0x4a043e15,// 189 PAY 156 

    0x40b47261,// 190 PAY 157 

    0x9a241410,// 191 PAY 158 

    0x91598154,// 192 PAY 159 

    0xc2f0fb97,// 193 PAY 160 

    0xdbc6b6ee,// 194 PAY 161 

    0xf314e5c6,// 195 PAY 162 

    0x7fdea901,// 196 PAY 163 

    0x849bcc52,// 197 PAY 164 

    0x277cc372,// 198 PAY 165 

    0x88639561,// 199 PAY 166 

    0x138f9796,// 200 PAY 167 

    0x650ba079,// 201 PAY 168 

    0xefe11bd4,// 202 PAY 169 

    0xdc614875,// 203 PAY 170 

    0xd6b56d32,// 204 PAY 171 

    0x1d000eb3,// 205 PAY 172 

    0xaf92b4d6,// 206 PAY 173 

    0x6bc5497a,// 207 PAY 174 

    0xb719666d,// 208 PAY 175 

    0x19ef9618,// 209 PAY 176 

    0xec8aea68,// 210 PAY 177 

    0x70f3c731,// 211 PAY 178 

    0x33984ab4,// 212 PAY 179 

    0x14154dc8,// 213 PAY 180 

    0xa0b9f4ff,// 214 PAY 181 

    0xca68d849,// 215 PAY 182 

    0xaa31dd0c,// 216 PAY 183 

    0x4dfa42d7,// 217 PAY 184 

    0x09761b22,// 218 PAY 185 

    0x236c828f,// 219 PAY 186 

    0x1526a848,// 220 PAY 187 

    0xa22d9e15,// 221 PAY 188 

    0x4d6e3159,// 222 PAY 189 

    0x1216fbc6,// 223 PAY 190 

    0xfeb09913,// 224 PAY 191 

    0x87777a2b,// 225 PAY 192 

    0x794ca4cf,// 226 PAY 193 

    0x6402dbd0,// 227 PAY 194 

    0x741ea35e,// 228 PAY 195 

    0x79be86da,// 229 PAY 196 

    0x6aec87a7,// 230 PAY 197 

    0x94c56ad0,// 231 PAY 198 

    0x75e4b2ac,// 232 PAY 199 

    0x27cc49f8,// 233 PAY 200 

    0x7ab86750,// 234 PAY 201 

    0xc37d063d,// 235 PAY 202 

    0x54f3355a,// 236 PAY 203 

    0x81f5c57d,// 237 PAY 204 

    0xf737a763,// 238 PAY 205 

    0x6f429854,// 239 PAY 206 

    0x9480c4ee,// 240 PAY 207 

    0x2539bd4c,// 241 PAY 208 

    0x6b49d37c,// 242 PAY 209 

    0x01b34ad6,// 243 PAY 210 

    0x50e0495d,// 244 PAY 211 

    0x61bc1bb1,// 245 PAY 212 

    0xb14c0e1c,// 246 PAY 213 

    0x669b1dbc,// 247 PAY 214 

    0xc804c4cb,// 248 PAY 215 

    0xc3d10b07,// 249 PAY 216 

    0x9f2f6a0f,// 250 PAY 217 

    0x65d2457e,// 251 PAY 218 

    0x5141d781,// 252 PAY 219 

    0xf8b31267,// 253 PAY 220 

    0x1f0cc512,// 254 PAY 221 

    0x6366b112,// 255 PAY 222 

    0xacd4bf6f,// 256 PAY 223 

    0x63945765,// 257 PAY 224 

    0x7d769c64,// 258 PAY 225 

    0x5b6d9f47,// 259 PAY 226 

    0x50bdf654,// 260 PAY 227 

    0xecc2da01,// 261 PAY 228 

    0x1410db3b,// 262 PAY 229 

    0x94845df4,// 263 PAY 230 

    0xc7c82e44,// 264 PAY 231 

    0xc82d6312,// 265 PAY 232 

    0xbc367860,// 266 PAY 233 

    0xf97e9676,// 267 PAY 234 

    0xbf0ba480,// 268 PAY 235 

    0x9959aec6,// 269 PAY 236 

    0x81d4dbc7,// 270 PAY 237 

    0x35e61e31,// 271 PAY 238 

    0xccd584a5,// 272 PAY 239 

    0xc7b88e5a,// 273 PAY 240 

    0xa468eabc,// 274 PAY 241 

    0x2241c371,// 275 PAY 242 

    0x1d42d93d,// 276 PAY 243 

    0x88babd01,// 277 PAY 244 

    0xaf02c04d,// 278 PAY 245 

    0x5c96f279,// 279 PAY 246 

    0x93801ffb,// 280 PAY 247 

    0x707741c9,// 281 PAY 248 

    0x174fcaca,// 282 PAY 249 

    0x7e2fef27,// 283 PAY 250 

    0xcae18e65,// 284 PAY 251 

    0xd7310d0c,// 285 PAY 252 

    0x431b3c11,// 286 PAY 253 

    0x54fc0548,// 287 PAY 254 

    0x68df36d8,// 288 PAY 255 

    0x75aaa62a,// 289 PAY 256 

    0xd2aea238,// 290 PAY 257 

    0x6e5c111b,// 291 PAY 258 

    0x1e7b728a,// 292 PAY 259 

    0xf1055e4a,// 293 PAY 260 

    0xf454fa0f,// 294 PAY 261 

    0xde3c771c,// 295 PAY 262 

    0x67663e9d,// 296 PAY 263 

    0x2494046e,// 297 PAY 264 

    0x6068a1eb,// 298 PAY 265 

    0xbe1988f5,// 299 PAY 266 

    0xf109946a,// 300 PAY 267 

    0x8684ee85,// 301 PAY 268 

    0x255bd29e,// 302 PAY 269 

    0x5596b77f,// 303 PAY 270 

    0x0c8aa184,// 304 PAY 271 

    0x7acec6a3,// 305 PAY 272 

    0x2d6ece8b,// 306 PAY 273 

    0x8e35abd8,// 307 PAY 274 

    0x4e47a77f,// 308 PAY 275 

    0x4f1f5635,// 309 PAY 276 

    0x02eba323,// 310 PAY 277 

    0xf219ee99,// 311 PAY 278 

    0xc1166bb3,// 312 PAY 279 

    0x7c7efcec,// 313 PAY 280 

    0xc5d9acd0,// 314 PAY 281 

    0x721a1587,// 315 PAY 282 

/// STA is 1 words. 

/// STA num_pkts       : 168 

/// STA pkt_idx        : 182 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x3e 

    0x02d93ea8 // 316 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 88 (0x58) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_sha1_pkt14_tmpl[] = {
    0xb8010058,// 1 CCH   1 

/// ECH cache_idx      : 0x05 

/// ECH pdu_tag        : 0x00 

    0x00050000,// 2 ECH   1 

/// SCX is 21 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound !save_icv insert_icv !check_icv sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : SHA1 

/// SCX aes_size        : NORMAL_RC4INIT_AES128 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x4 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 8 

/// SCX authctx_size    : 40 

    0x08000015,// 3 SCX   1 

    0x80644874,// 4 SCX   2 

    0x00002482,// 5 SCX   3 

    0x5eb4a0d2,// 6 SCX   4 

    0x5aa6df11,// 7 SCX   5 

    0xae8f0351,// 8 SCX   6 

    0xc925b30c,// 9 SCX   7 

    0x5d5cbec3,// 10 SCX   8 

    0x30b2a671,// 11 SCX   9 

    0xed2a7fe1,// 12 SCX  10 

    0xcdb31492,// 13 SCX  11 

    0x66d84def,// 14 SCX  12 

    0xee77e426,// 15 SCX  13 

    0x25128ef4,// 16 SCX  14 

    0x05dfc472,// 17 SCX  15 

    0xf5de98e2,// 18 SCX  16 

    0xb79bf513,// 19 SCX  17 

    0x00c7ea2c,// 20 SCX  18 

    0x436f657e,// 21 SCX  19 

    0xb6044499,// 22 SCX  20 

    0x320e304c,// 23 SCX  21 

/// BFD is 3 words. 

/// BFD tot_len        : 1212 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 501 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 501 

/// BFD lencrypto      : 104 

/// BFD ofstcrypto     : 76 

/// BFD (ofst+len)cry  : 180 

/// BFD ofstiv         : 32 

/// BFD ofsticv        : 708 

    0x000001f5,// 24 BFD   1 

    0x004c0068,// 25 BFD   2 

    0x02c40020,// 26 BFD   3 

/// MFM is 14 words. 

/// MFM vldnibs        : 68 

    0x6800f553,// 27 MFM   1 

    0xbe5bd261,// 28 MFM   2 

    0x2861fa65,// 29 MFM   3 

    0x57f2a30c,// 30 MFM   4 

    0x2bf6e029,// 31 MFM   5 

    0x419ded98,// 32 MFM   6 

    0xb843f053,// 33 MFM   7 

    0x7423849e,// 34 MFM   8 

    0x113b6d38,// 35 MFM   9 

    0x258df931,// 36 MFM  10 

    0xe85b558f,// 37 MFM  11 

    0x42cc4769,// 38 MFM  12 

    0x411235dd,// 39 MFM  13 

    0xbadc0000,// 40 MFM  14 

/// BDA is 304 words. 

/// BDA size     is 1212 (0x4bc) 

/// BDA id       is 0x241b 

    0x04bc241b,// 41 BDA   1 

/// PAY Generic Data size   : 1212 byte(s) 

/// PAD Buffer Data Pad size   : 0 byte(s) 

    0x235f1c0e,// 42 PAY   1 

    0x754f6a7a,// 43 PAY   2 

    0xc7f15c1b,// 44 PAY   3 

    0x6edf4676,// 45 PAY   4 

    0xb35c17e6,// 46 PAY   5 

    0x85573caa,// 47 PAY   6 

    0xdf90feca,// 48 PAY   7 

    0x4f4e61e2,// 49 PAY   8 

    0xf92cd996,// 50 PAY   9 

    0x8cc4d616,// 51 PAY  10 

    0x5c03e85e,// 52 PAY  11 

    0x1c241b12,// 53 PAY  12 

    0x8abe65e7,// 54 PAY  13 

    0xba07ac54,// 55 PAY  14 

    0x791b4cc7,// 56 PAY  15 

    0x18b8968d,// 57 PAY  16 

    0x2837e5b2,// 58 PAY  17 

    0xefcfcfc9,// 59 PAY  18 

    0x2cbdac60,// 60 PAY  19 

    0x4ffc6721,// 61 PAY  20 

    0xccaabd69,// 62 PAY  21 

    0x57a5301d,// 63 PAY  22 

    0xfb3e7de7,// 64 PAY  23 

    0x0bb098cf,// 65 PAY  24 

    0x78cb779a,// 66 PAY  25 

    0xdfd8a45d,// 67 PAY  26 

    0x2f3d9e65,// 68 PAY  27 

    0x4adba174,// 69 PAY  28 

    0x03825c6b,// 70 PAY  29 

    0xdcb8c7a5,// 71 PAY  30 

    0x8f3ae41c,// 72 PAY  31 

    0x25bf3d54,// 73 PAY  32 

    0x4592b1fa,// 74 PAY  33 

    0x6ded34eb,// 75 PAY  34 

    0x9573688f,// 76 PAY  35 

    0xbe53d9f4,// 77 PAY  36 

    0x77ebd04a,// 78 PAY  37 

    0xe03bbf02,// 79 PAY  38 

    0x397a757d,// 80 PAY  39 

    0x530e852a,// 81 PAY  40 

    0x752a7199,// 82 PAY  41 

    0x1ccc04d5,// 83 PAY  42 

    0x12ca2cf7,// 84 PAY  43 

    0xede27f01,// 85 PAY  44 

    0x91add3a5,// 86 PAY  45 

    0xdbf31818,// 87 PAY  46 

    0x87eb25d5,// 88 PAY  47 

    0x14177f2c,// 89 PAY  48 

    0x9d78d72a,// 90 PAY  49 

    0x16758209,// 91 PAY  50 

    0x20fb7f38,// 92 PAY  51 

    0xfa8d59bb,// 93 PAY  52 

    0x5c8493b5,// 94 PAY  53 

    0xd46d5c88,// 95 PAY  54 

    0xaf5e555a,// 96 PAY  55 

    0xca86661c,// 97 PAY  56 

    0xe86d33d3,// 98 PAY  57 

    0x271ba221,// 99 PAY  58 

    0xe79df9b8,// 100 PAY  59 

    0xf25f6440,// 101 PAY  60 

    0xb4df1dba,// 102 PAY  61 

    0xb2fad567,// 103 PAY  62 

    0xec02f6fb,// 104 PAY  63 

    0x6dda3129,// 105 PAY  64 

    0x1b6061cf,// 106 PAY  65 

    0x660fdb70,// 107 PAY  66 

    0x418c303b,// 108 PAY  67 

    0x3b4cfac8,// 109 PAY  68 

    0x17ae50c7,// 110 PAY  69 

    0x3ff68bc1,// 111 PAY  70 

    0x824ec9d7,// 112 PAY  71 

    0x8aec5759,// 113 PAY  72 

    0x12fbdcee,// 114 PAY  73 

    0x1bf2e6f4,// 115 PAY  74 

    0x52d10c85,// 116 PAY  75 

    0x914ff2f4,// 117 PAY  76 

    0x6bb6ffca,// 118 PAY  77 

    0x3b02c817,// 119 PAY  78 

    0x9d332140,// 120 PAY  79 

    0xbc747569,// 121 PAY  80 

    0x39b2d6fb,// 122 PAY  81 

    0x346fc51d,// 123 PAY  82 

    0x9dc3b75a,// 124 PAY  83 

    0x276947e1,// 125 PAY  84 

    0x2f0469cd,// 126 PAY  85 

    0xb142b058,// 127 PAY  86 

    0x2450bd08,// 128 PAY  87 

    0x2dc4f0db,// 129 PAY  88 

    0x61169dd7,// 130 PAY  89 

    0x0d821471,// 131 PAY  90 

    0x093e50e6,// 132 PAY  91 

    0xd4682654,// 133 PAY  92 

    0x4547ce4a,// 134 PAY  93 

    0xebcdcecf,// 135 PAY  94 

    0xb5fc5f7e,// 136 PAY  95 

    0x78963d3c,// 137 PAY  96 

    0x098fab99,// 138 PAY  97 

    0xa04fbf21,// 139 PAY  98 

    0x5bf31364,// 140 PAY  99 

    0x8f435821,// 141 PAY 100 

    0xdfa4793f,// 142 PAY 101 

    0xf61a7f09,// 143 PAY 102 

    0x1c03e4f6,// 144 PAY 103 

    0xb599477e,// 145 PAY 104 

    0xcf29435b,// 146 PAY 105 

    0x75308fbd,// 147 PAY 106 

    0x93d5d9c6,// 148 PAY 107 

    0x93ce4c22,// 149 PAY 108 

    0x50d1a321,// 150 PAY 109 

    0x5cd62e20,// 151 PAY 110 

    0x3fb0e010,// 152 PAY 111 

    0xd44d5660,// 153 PAY 112 

    0x0b65a50e,// 154 PAY 113 

    0xf18eee89,// 155 PAY 114 

    0x7bf6a8d1,// 156 PAY 115 

    0xb72c475c,// 157 PAY 116 

    0xbd95bcba,// 158 PAY 117 

    0xc4a43ea5,// 159 PAY 118 

    0xb39e4020,// 160 PAY 119 

    0xb7501fb5,// 161 PAY 120 

    0x5fd7487a,// 162 PAY 121 

    0x17b832b0,// 163 PAY 122 

    0xf0bff337,// 164 PAY 123 

    0xae3c0afc,// 165 PAY 124 

    0x5acb2e62,// 166 PAY 125 

    0x3b85bf79,// 167 PAY 126 

    0xca7d6247,// 168 PAY 127 

    0x97b17ea1,// 169 PAY 128 

    0x01384790,// 170 PAY 129 

    0xb6856625,// 171 PAY 130 

    0x1dbe84bb,// 172 PAY 131 

    0x52150125,// 173 PAY 132 

    0x4209d7b4,// 174 PAY 133 

    0x81ee7dcc,// 175 PAY 134 

    0xa6c4f273,// 176 PAY 135 

    0xc77860cc,// 177 PAY 136 

    0xccf6ab7f,// 178 PAY 137 

    0x30b95baf,// 179 PAY 138 

    0xf7a18233,// 180 PAY 139 

    0xe5eb967c,// 181 PAY 140 

    0x13d8ec05,// 182 PAY 141 

    0xa60ea7da,// 183 PAY 142 

    0xccf557c9,// 184 PAY 143 

    0x71e42a70,// 185 PAY 144 

    0x092fbd5a,// 186 PAY 145 

    0x378c3e41,// 187 PAY 146 

    0x7f4264d8,// 188 PAY 147 

    0x04742938,// 189 PAY 148 

    0x06fba2c9,// 190 PAY 149 

    0x8a737e43,// 191 PAY 150 

    0xf41260a3,// 192 PAY 151 

    0xf9307efd,// 193 PAY 152 

    0x2943ec34,// 194 PAY 153 

    0x0e78d7f3,// 195 PAY 154 

    0x79c5e851,// 196 PAY 155 

    0xe58937b4,// 197 PAY 156 

    0x6807daa7,// 198 PAY 157 

    0xa46b3bad,// 199 PAY 158 

    0x12e26ccb,// 200 PAY 159 

    0x90248e97,// 201 PAY 160 

    0x414d597c,// 202 PAY 161 

    0x605e1d55,// 203 PAY 162 

    0xbf116639,// 204 PAY 163 

    0x2cc72228,// 205 PAY 164 

    0x93d899b6,// 206 PAY 165 

    0xfa206c3d,// 207 PAY 166 

    0xd1b20526,// 208 PAY 167 

    0xa67dd28a,// 209 PAY 168 

    0x36360958,// 210 PAY 169 

    0x1cec8c28,// 211 PAY 170 

    0x2624f7ea,// 212 PAY 171 

    0xf6e7eba3,// 213 PAY 172 

    0xfbfa9050,// 214 PAY 173 

    0x5f5aacaa,// 215 PAY 174 

    0x4f9896bb,// 216 PAY 175 

    0x4f8dda95,// 217 PAY 176 

    0xa95f1888,// 218 PAY 177 

    0xa433b33b,// 219 PAY 178 

    0xecf51d39,// 220 PAY 179 

    0x480326ea,// 221 PAY 180 

    0x78281b8d,// 222 PAY 181 

    0xbc50fb86,// 223 PAY 182 

    0x8aaf421d,// 224 PAY 183 

    0x46926b28,// 225 PAY 184 

    0x998aa1cc,// 226 PAY 185 

    0x8a850d75,// 227 PAY 186 

    0xa3b33c34,// 228 PAY 187 

    0x370c3810,// 229 PAY 188 

    0x07d2d75e,// 230 PAY 189 

    0x208c029d,// 231 PAY 190 

    0x535bfc1d,// 232 PAY 191 

    0x32e921d9,// 233 PAY 192 

    0xe332717a,// 234 PAY 193 

    0xc1141b55,// 235 PAY 194 

    0x281aad8b,// 236 PAY 195 

    0x8ef9288e,// 237 PAY 196 

    0xad79b18f,// 238 PAY 197 

    0x3723da7d,// 239 PAY 198 

    0xc15b2add,// 240 PAY 199 

    0x465fd7d1,// 241 PAY 200 

    0x77c56280,// 242 PAY 201 

    0x795d2c07,// 243 PAY 202 

    0x48e00627,// 244 PAY 203 

    0x334e679d,// 245 PAY 204 

    0x1c40c5fc,// 246 PAY 205 

    0x9647e728,// 247 PAY 206 

    0x256c2824,// 248 PAY 207 

    0x2b5c04b7,// 249 PAY 208 

    0x8c30b24d,// 250 PAY 209 

    0x7b0e4206,// 251 PAY 210 

    0xe1588dc7,// 252 PAY 211 

    0x3a274438,// 253 PAY 212 

    0x8810f2ae,// 254 PAY 213 

    0x418c6bcf,// 255 PAY 214 

    0xcb4cc53a,// 256 PAY 215 

    0x9f6e8743,// 257 PAY 216 

    0x852f536e,// 258 PAY 217 

    0x856d8cb0,// 259 PAY 218 

    0x9fadd4dd,// 260 PAY 219 

    0x7dadb272,// 261 PAY 220 

    0x9433ecb5,// 262 PAY 221 

    0x9e2f8097,// 263 PAY 222 

    0x187eeb25,// 264 PAY 223 

    0x9d77825f,// 265 PAY 224 

    0x4b2f787c,// 266 PAY 225 

    0x9f9459e2,// 267 PAY 226 

    0xb32441eb,// 268 PAY 227 

    0xc6bdc080,// 269 PAY 228 

    0x6333b17c,// 270 PAY 229 

    0x482afefe,// 271 PAY 230 

    0x960f6604,// 272 PAY 231 

    0xfb96a0dd,// 273 PAY 232 

    0xbb9ffb8b,// 274 PAY 233 

    0x982a3bc2,// 275 PAY 234 

    0xf5cca740,// 276 PAY 235 

    0x8144bfe3,// 277 PAY 236 

    0x25347edb,// 278 PAY 237 

    0x2b17a5db,// 279 PAY 238 

    0xae6bcb48,// 280 PAY 239 

    0x21ec4e90,// 281 PAY 240 

    0x51edbc61,// 282 PAY 241 

    0x643ead67,// 283 PAY 242 

    0xd23f62b4,// 284 PAY 243 

    0xff714e6d,// 285 PAY 244 

    0x406be718,// 286 PAY 245 

    0xec279611,// 287 PAY 246 

    0x0211af75,// 288 PAY 247 

    0x776ad587,// 289 PAY 248 

    0x9adc7029,// 290 PAY 249 

    0xec0cbde5,// 291 PAY 250 

    0xd9b18a6f,// 292 PAY 251 

    0xf39f748a,// 293 PAY 252 

    0x21d9469a,// 294 PAY 253 

    0x80465486,// 295 PAY 254 

    0x8bfdd97d,// 296 PAY 255 

    0x42706e30,// 297 PAY 256 

    0xaa3a1170,// 298 PAY 257 

    0x2b87ee19,// 299 PAY 258 

    0x1397e1e1,// 300 PAY 259 

    0x25f8c2c3,// 301 PAY 260 

    0x39efbce4,// 302 PAY 261 

    0x4a287a35,// 303 PAY 262 

    0xd22e61ec,// 304 PAY 263 

    0xb449ad9d,// 305 PAY 264 

    0xb764c542,// 306 PAY 265 

    0x3dc51f12,// 307 PAY 266 

    0xb31864a9,// 308 PAY 267 

    0x090c9da8,// 309 PAY 268 

    0x69070010,// 310 PAY 269 

    0x90116b8c,// 311 PAY 270 

    0x54df863a,// 312 PAY 271 

    0xa147441e,// 313 PAY 272 

    0x564b9e14,// 314 PAY 273 

    0x4012f6ad,// 315 PAY 274 

    0x3ff03110,// 316 PAY 275 

    0xb6df8afa,// 317 PAY 276 

    0xb6988cb0,// 318 PAY 277 

    0xf48a97aa,// 319 PAY 278 

    0x908c816b,// 320 PAY 279 

    0x31809010,// 321 PAY 280 

    0x27b3aef6,// 322 PAY 281 

    0xf8224840,// 323 PAY 282 

    0x8bfdd505,// 324 PAY 283 

    0xc1d5feb8,// 325 PAY 284 

    0x2dd6397d,// 326 PAY 285 

    0xd9b21b87,// 327 PAY 286 

    0xb6054050,// 328 PAY 287 

    0xf8752de8,// 329 PAY 288 

    0xf0cbad42,// 330 PAY 289 

    0x84027f3b,// 331 PAY 290 

    0x8f6e08d1,// 332 PAY 291 

    0xb3786410,// 333 PAY 292 

    0x43b7b11d,// 334 PAY 293 

    0xb2205b50,// 335 PAY 294 

    0x6db5f779,// 336 PAY 295 

    0x1c71d7ac,// 337 PAY 296 

    0x73a605ad,// 338 PAY 297 

    0x211e7326,// 339 PAY 298 

    0xe7bd45ba,// 340 PAY 299 

    0x519b2e70,// 341 PAY 300 

    0x81f36a3d,// 342 PAY 301 

    0x0813c465,// 343 PAY 302 

    0xff7bf94f,// 344 PAY 303 

/// STA is 1 words. 

/// STA num_pkts       : 132 

/// STA pkt_idx        : 124 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x26 

    0x01f12684 // 345 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 80 (0x50) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc !incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_sha1_pkt15_tmpl[] = {
    0xa8010050,// 1 CCH   1 

/// ECH cache_idx      : 0x06 

/// ECH pdu_tag        : 0x00 

    0x00060000,// 2 ECH   1 

/// SCX is 19 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound !save_icv insert_icv check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : SHA1 

/// SCX aes_size        : AES256 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x1 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 40 

    0x00000013,// 3 SCX   1 

    0x806248cc,// 4 SCX   2 

    0x00003100,// 5 SCX   3 

    0xadd4a2a9,// 6 SCX   4 

    0xf384d6b2,// 7 SCX   5 

    0x4c3120ea,// 8 SCX   6 

    0x6ae61ec3,// 9 SCX   7 

    0x7248417e,// 10 SCX   8 

    0x79a78b39,// 11 SCX   9 

    0xfcc04107,// 12 SCX  10 

    0x72b9fdd9,// 13 SCX  11 

    0x836e0a31,// 14 SCX  12 

    0x5934f1df,// 15 SCX  13 

    0x4946de93,// 16 SCX  14 

    0x21c7dcc1,// 17 SCX  15 

    0x4e5ed2c9,// 18 SCX  16 

    0x712ca605,// 19 SCX  17 

    0xc621e1f9,// 20 SCX  18 

    0x5d79217b,// 21 SCX  19 

/// BFD is 3 words. 

/// BFD tot_len        : 194 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 31 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 31 

/// BFD lencrypto      : 8 

/// BFD ofstcrypto     : 20 

/// BFD (ofst+len)cry  : 28 

/// BFD ofstiv         : 8 

/// BFD ofsticv        : 172 

    0x0000001f,// 22 BFD   1 

    0x00140008,// 23 BFD   2 

    0x00ac0008,// 24 BFD   3 

/// BDA is 50 words. 

/// BDA size     is 194 (0xc2) 

/// BDA id       is 0xa24 

    0x00c20a24,// 25 BDA   1 

/// PAY Generic Data size   : 194 byte(s) 

/// PAD Buffer Data Pad size   : 2 byte(s) 

    0x436db5cb,// 26 PAY   1 

    0x3cea67e6,// 27 PAY   2 

    0x0c4e3d93,// 28 PAY   3 

    0x96510e8e,// 29 PAY   4 

    0x46ff83a1,// 30 PAY   5 

    0x34e5d99c,// 31 PAY   6 

    0xc0577750,// 32 PAY   7 

    0x883de9f3,// 33 PAY   8 

    0xcfc11ba8,// 34 PAY   9 

    0xf031c5f8,// 35 PAY  10 

    0xf6ce2774,// 36 PAY  11 

    0x8d78b1cb,// 37 PAY  12 

    0x3b3befd1,// 38 PAY  13 

    0x6e93b9dd,// 39 PAY  14 

    0x327a5b4c,// 40 PAY  15 

    0xa43f3a97,// 41 PAY  16 

    0x1a1caa8f,// 42 PAY  17 

    0xa8682e9c,// 43 PAY  18 

    0x890552f8,// 44 PAY  19 

    0x73260d03,// 45 PAY  20 

    0x54f979a0,// 46 PAY  21 

    0x90b0dbaf,// 47 PAY  22 

    0xda810f0c,// 48 PAY  23 

    0x23511260,// 49 PAY  24 

    0x55a7424f,// 50 PAY  25 

    0x5e6c73b3,// 51 PAY  26 

    0x384cef42,// 52 PAY  27 

    0x2d63d83e,// 53 PAY  28 

    0x5f5212a3,// 54 PAY  29 

    0x7b306669,// 55 PAY  30 

    0x6ab0af8d,// 56 PAY  31 

    0xd456c3c0,// 57 PAY  32 

    0x2fad6279,// 58 PAY  33 

    0x7a374d22,// 59 PAY  34 

    0x06978533,// 60 PAY  35 

    0xcb3255bb,// 61 PAY  36 

    0xdca531f4,// 62 PAY  37 

    0xb3ff11d0,// 63 PAY  38 

    0xafa281e6,// 64 PAY  39 

    0x95b68e4e,// 65 PAY  40 

    0xa7322a7d,// 66 PAY  41 

    0x2fb90315,// 67 PAY  42 

    0x32492be3,// 68 PAY  43 

    0xff8085fa,// 69 PAY  44 

    0x42e37ff2,// 70 PAY  45 

    0xa896ef3c,// 71 PAY  46 

    0x2eda34e0,// 72 PAY  47 

    0x80c57db2,// 73 PAY  48 

    0x73a60000,// 74 PAY  49 

/// STA is 1 words. 

/// STA num_pkts       : 92 

/// STA pkt_idx        : 100 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xde 

    0x0191de5c // 75 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 80 (0x50) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_sha1_pkt16_tmpl[] = {
    0xb8010050,// 1 CCH   1 

/// ECH cache_idx      : 0x09 

/// ECH pdu_tag        : 0x00 

    0x00090000,// 2 ECH   1 

/// SCX is 19 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound !save_icv insert_icv check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : SHA1 

/// SCX aes_size        : NORMAL_RC4INIT_AES128 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x5 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 40 

    0x08000013,// 3 SCX   1 

    0x80604838,// 4 SCX   2 

    0x00003500,// 5 SCX   3 

    0x3301f00c,// 6 SCX   4 

    0x8cb7fcb0,// 7 SCX   5 

    0xe46fd4fa,// 8 SCX   6 

    0x27cd181b,// 9 SCX   7 

    0xcb8f32aa,// 10 SCX   8 

    0xcabb1b0f,// 11 SCX   9 

    0x32811373,// 12 SCX  10 

    0x2230f135,// 13 SCX  11 

    0x12316fba,// 14 SCX  12 

    0xc1bb2219,// 15 SCX  13 

    0x902ccf70,// 16 SCX  14 

    0xdb4cbed8,// 17 SCX  15 

    0x1808313f,// 18 SCX  16 

    0x284c7275,// 19 SCX  17 

    0x8e532434,// 20 SCX  18 

    0x930f4c2a,// 21 SCX  19 

/// BFD is 3 words. 

/// BFD tot_len        : 324 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 266 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 266 

/// BFD lencrypto      : 32 

/// BFD ofstcrypto     : 176 

/// BFD (ofst+len)cry  : 208 

/// BFD ofstiv         : 160 

/// BFD ofsticv        : 268 

    0x0000010a,// 22 BFD   1 

    0x00b00020,// 23 BFD   2 

    0x010c00a0,// 24 BFD   3 

/// MFM is 2 words. 

/// MFM vldnibs        : c 

    0x0c00e0e7,// 25 MFM   1 

    0xbbbd2c92,// 26 MFM   2 

/// BDA is 82 words. 

/// BDA size     is 324 (0x144) 

/// BDA id       is 0x8a3d 

    0x01448a3d,// 27 BDA   1 

/// PAY Generic Data size   : 324 byte(s) 

/// PAD Buffer Data Pad size   : 0 byte(s) 

    0x4097a599,// 28 PAY   1 

    0x04da4b99,// 29 PAY   2 

    0x0ac20c76,// 30 PAY   3 

    0x4b0d03f0,// 31 PAY   4 

    0xbde167a0,// 32 PAY   5 

    0xd6ec2b0e,// 33 PAY   6 

    0x57c379a1,// 34 PAY   7 

    0x7a3bacbe,// 35 PAY   8 

    0x897eaa7a,// 36 PAY   9 

    0xdeaa1025,// 37 PAY  10 

    0x62f95478,// 38 PAY  11 

    0xdc6bcd9c,// 39 PAY  12 

    0xcd21adb1,// 40 PAY  13 

    0x936c93a5,// 41 PAY  14 

    0x65166f71,// 42 PAY  15 

    0x24ecd272,// 43 PAY  16 

    0xc4e09331,// 44 PAY  17 

    0x08d6880d,// 45 PAY  18 

    0x1dc4105c,// 46 PAY  19 

    0x9b277432,// 47 PAY  20 

    0xc2c30a8b,// 48 PAY  21 

    0x789ced9b,// 49 PAY  22 

    0x951446d2,// 50 PAY  23 

    0xa99560c5,// 51 PAY  24 

    0xc1b16564,// 52 PAY  25 

    0x696585fc,// 53 PAY  26 

    0x3a5a3dfe,// 54 PAY  27 

    0x46bd60cd,// 55 PAY  28 

    0x8c1a8a0c,// 56 PAY  29 

    0xfbe1a72d,// 57 PAY  30 

    0xa2416c85,// 58 PAY  31 

    0x142e932e,// 59 PAY  32 

    0xe9cb5ed8,// 60 PAY  33 

    0xa0b38cce,// 61 PAY  34 

    0x61beb0a7,// 62 PAY  35 

    0x0441b0f5,// 63 PAY  36 

    0x3654ff7b,// 64 PAY  37 

    0xee950e53,// 65 PAY  38 

    0x13f503b5,// 66 PAY  39 

    0x57dacba0,// 67 PAY  40 

    0x6c4a4c4e,// 68 PAY  41 

    0x0b35a841,// 69 PAY  42 

    0xbdde5084,// 70 PAY  43 

    0x242fab69,// 71 PAY  44 

    0x89ac490b,// 72 PAY  45 

    0xcf71a21d,// 73 PAY  46 

    0xdabe2c8e,// 74 PAY  47 

    0x7a9f498a,// 75 PAY  48 

    0xf215ac00,// 76 PAY  49 

    0x06cf8d42,// 77 PAY  50 

    0x6ccb8139,// 78 PAY  51 

    0x1ee45d03,// 79 PAY  52 

    0xdac9c854,// 80 PAY  53 

    0x18585741,// 81 PAY  54 

    0xb194b9c7,// 82 PAY  55 

    0x42bb6c25,// 83 PAY  56 

    0x53aff12e,// 84 PAY  57 

    0x292ae46f,// 85 PAY  58 

    0x42a0ff06,// 86 PAY  59 

    0xdf434399,// 87 PAY  60 

    0x4bdd1314,// 88 PAY  61 

    0x827ba9e4,// 89 PAY  62 

    0x9873a51d,// 90 PAY  63 

    0xbba3e8a7,// 91 PAY  64 

    0xb8a062be,// 92 PAY  65 

    0x025381da,// 93 PAY  66 

    0x819ec04b,// 94 PAY  67 

    0x439dd13b,// 95 PAY  68 

    0x07035edc,// 96 PAY  69 

    0x6de77a96,// 97 PAY  70 

    0x94c57a92,// 98 PAY  71 

    0x72a37c92,// 99 PAY  72 

    0xaffa00f9,// 100 PAY  73 

    0xb6126c66,// 101 PAY  74 

    0x30187af8,// 102 PAY  75 

    0xd8cb6e5a,// 103 PAY  76 

    0xd39403e8,// 104 PAY  77 

    0x4b4b6912,// 105 PAY  78 

    0x1e84c385,// 106 PAY  79 

    0xf6ad0277,// 107 PAY  80 

    0xeeb4ddd5,// 108 PAY  81 

/// STA is 1 words. 

/// STA num_pkts       : 124 

/// STA pkt_idx        : 247 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xc5 

    0x03dcc57c // 109 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 80 (0x50) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_sha1_pkt17_tmpl[] = {
    0xb8010050,// 1 CCH   1 

/// ECH cache_idx      : 0x0f 

/// ECH pdu_tag        : 0x00 

    0x000f0000,// 2 ECH   1 

/// SCX is 19 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound !save_icv insert_icv !check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : SHA1 

/// SCX aes_size        : NORMAL_RC4INIT_AES128 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x5 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 40 

    0x08000013,// 3 SCX   1 

    0x8060487b,// 4 SCX   2 

    0x00002500,// 5 SCX   3 

    0x57dedb2b,// 6 SCX   4 

    0x8f54cafa,// 7 SCX   5 

    0xab1c2ea3,// 8 SCX   6 

    0x7f603a58,// 9 SCX   7 

    0xc9761f97,// 10 SCX   8 

    0x80a3ce17,// 11 SCX   9 

    0xab8ac270,// 12 SCX  10 

    0xcdadfd9c,// 13 SCX  11 

    0x0cf6c986,// 14 SCX  12 

    0x7d7f7bb2,// 15 SCX  13 

    0xdf902895,// 16 SCX  14 

    0x74eef36a,// 17 SCX  15 

    0x8a618577,// 18 SCX  16 

    0xe8845328,// 19 SCX  17 

    0x13036b74,// 20 SCX  18 

    0x56719ae1,// 21 SCX  19 

/// BFD is 3 words. 

/// BFD tot_len        : 1922 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 883 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 883 

/// BFD lencrypto      : 8 

/// BFD ofstcrypto     : 464 

/// BFD (ofst+len)cry  : 472 

/// BFD ofstiv         : 96 

/// BFD ofsticv        : 1360 

    0x00000373,// 22 BFD   1 

    0x01d00008,// 23 BFD   2 

    0x05500060,// 24 BFD   3 

/// MFM is 16 words. 

/// MFM vldnibs        : 7c 

    0x7c008595,// 25 MFM   1 

    0x8f0de884,// 26 MFM   2 

    0x26532ce8,// 27 MFM   3 

    0x6cea436a,// 28 MFM   4 

    0xb468c1ac,// 29 MFM   5 

    0xd371673d,// 30 MFM   6 

    0xdf8375f8,// 31 MFM   7 

    0x533987f2,// 32 MFM   8 

    0xa5be95df,// 33 MFM   9 

    0xc6a3a5f7,// 34 MFM  10 

    0xd78c2066,// 35 MFM  11 

    0x2c5e870d,// 36 MFM  12 

    0x96a275a2,// 37 MFM  13 

    0xe520f845,// 38 MFM  14 

    0xbb1274c1,// 39 MFM  15 

    0x01651677,// 40 MFM  16 

/// BDA is 482 words. 

/// BDA size     is 1922 (0x782) 

/// BDA id       is 0xc3ba 

    0x0782c3ba,// 41 BDA   1 

/// PAY Generic Data size   : 1922 byte(s) 

/// PAD Buffer Data Pad size   : 2 byte(s) 

    0x8bba353c,// 42 PAY   1 

    0x3e7dec84,// 43 PAY   2 

    0x010b0da9,// 44 PAY   3 

    0xc8088058,// 45 PAY   4 

    0x25a81c0b,// 46 PAY   5 

    0xbda826c4,// 47 PAY   6 

    0x4e7c21cc,// 48 PAY   7 

    0x73f3d61d,// 49 PAY   8 

    0xe739ae09,// 50 PAY   9 

    0x7791aabb,// 51 PAY  10 

    0xd9fc40dd,// 52 PAY  11 

    0x69a4dbc9,// 53 PAY  12 

    0x88fffb9e,// 54 PAY  13 

    0x6d8d5609,// 55 PAY  14 

    0xfd308f38,// 56 PAY  15 

    0x10b1911e,// 57 PAY  16 

    0xc8c294d6,// 58 PAY  17 

    0xc4bbb7e5,// 59 PAY  18 

    0xd967c849,// 60 PAY  19 

    0x88e750e4,// 61 PAY  20 

    0xadbd7f91,// 62 PAY  21 

    0x7efd05dd,// 63 PAY  22 

    0x866efb02,// 64 PAY  23 

    0x12391a15,// 65 PAY  24 

    0xf55eb464,// 66 PAY  25 

    0x317e0f29,// 67 PAY  26 

    0xf25d5037,// 68 PAY  27 

    0x71a833b6,// 69 PAY  28 

    0x1648e696,// 70 PAY  29 

    0xcb9949a1,// 71 PAY  30 

    0xe8f83439,// 72 PAY  31 

    0xa06cc068,// 73 PAY  32 

    0x3b0c095c,// 74 PAY  33 

    0x6cc70313,// 75 PAY  34 

    0xacab14c6,// 76 PAY  35 

    0xfd51b6bf,// 77 PAY  36 

    0x08754a4b,// 78 PAY  37 

    0xd4615f45,// 79 PAY  38 

    0x998ecf25,// 80 PAY  39 

    0xc8d8fd59,// 81 PAY  40 

    0xab0fb83b,// 82 PAY  41 

    0x4e8ac1c6,// 83 PAY  42 

    0x96fee4d9,// 84 PAY  43 

    0x7d8fc21e,// 85 PAY  44 

    0x22627f0e,// 86 PAY  45 

    0xcd90384b,// 87 PAY  46 

    0xb5b66c99,// 88 PAY  47 

    0x4c1061f8,// 89 PAY  48 

    0xb068a0ee,// 90 PAY  49 

    0x08fef841,// 91 PAY  50 

    0xfaf8a575,// 92 PAY  51 

    0xb813de9c,// 93 PAY  52 

    0xb3618e06,// 94 PAY  53 

    0xcb05bda7,// 95 PAY  54 

    0xf48e760e,// 96 PAY  55 

    0xe389c79a,// 97 PAY  56 

    0x8d53bbf1,// 98 PAY  57 

    0x94f471eb,// 99 PAY  58 

    0x9653551d,// 100 PAY  59 

    0x33dec2b6,// 101 PAY  60 

    0xd6c2dfef,// 102 PAY  61 

    0xd826ef6a,// 103 PAY  62 

    0x2249f93c,// 104 PAY  63 

    0x8cfdef87,// 105 PAY  64 

    0x896a9652,// 106 PAY  65 

    0x1116aa46,// 107 PAY  66 

    0x4020cbc9,// 108 PAY  67 

    0x9687cbb1,// 109 PAY  68 

    0x9958aabe,// 110 PAY  69 

    0xadad8167,// 111 PAY  70 

    0xd71e9aa8,// 112 PAY  71 

    0x93518a69,// 113 PAY  72 

    0xf494939c,// 114 PAY  73 

    0x0237e022,// 115 PAY  74 

    0xedd14f98,// 116 PAY  75 

    0x85c08de7,// 117 PAY  76 

    0xe4e59b7d,// 118 PAY  77 

    0xe3925297,// 119 PAY  78 

    0xaa0a91cd,// 120 PAY  79 

    0x9128a168,// 121 PAY  80 

    0xe6abc90f,// 122 PAY  81 

    0x86a6052c,// 123 PAY  82 

    0xb47342aa,// 124 PAY  83 

    0xe3b106b0,// 125 PAY  84 

    0x7671395b,// 126 PAY  85 

    0xe0d0d9c7,// 127 PAY  86 

    0x67edc5af,// 128 PAY  87 

    0x405d83cf,// 129 PAY  88 

    0x9d3942a0,// 130 PAY  89 

    0x5258282a,// 131 PAY  90 

    0x51732f05,// 132 PAY  91 

    0xe363d5d8,// 133 PAY  92 

    0xb826efa5,// 134 PAY  93 

    0xb3a95439,// 135 PAY  94 

    0x881fa2a4,// 136 PAY  95 

    0xa04d2df1,// 137 PAY  96 

    0x5a8dc412,// 138 PAY  97 

    0xaded396b,// 139 PAY  98 

    0x1834a98b,// 140 PAY  99 

    0x898391a9,// 141 PAY 100 

    0x0c6531de,// 142 PAY 101 

    0xef7dd1d8,// 143 PAY 102 

    0x387276fa,// 144 PAY 103 

    0x618f2c95,// 145 PAY 104 

    0xbb84c89a,// 146 PAY 105 

    0xa69f8a61,// 147 PAY 106 

    0x714e2fef,// 148 PAY 107 

    0xcd719bf0,// 149 PAY 108 

    0xf538704d,// 150 PAY 109 

    0x9448a395,// 151 PAY 110 

    0x88e06ce4,// 152 PAY 111 

    0x1ade376a,// 153 PAY 112 

    0x5df95e5d,// 154 PAY 113 

    0x94bd1ce2,// 155 PAY 114 

    0x7201d5a3,// 156 PAY 115 

    0x97f496fc,// 157 PAY 116 

    0x3024e243,// 158 PAY 117 

    0x5fa14738,// 159 PAY 118 

    0x8976c38e,// 160 PAY 119 

    0xee16a877,// 161 PAY 120 

    0xd95d774f,// 162 PAY 121 

    0x793ebd99,// 163 PAY 122 

    0x0600857e,// 164 PAY 123 

    0xe90c9640,// 165 PAY 124 

    0x0d723895,// 166 PAY 125 

    0x160f5cee,// 167 PAY 126 

    0xd0a3599d,// 168 PAY 127 

    0x7351462a,// 169 PAY 128 

    0x76b7e299,// 170 PAY 129 

    0x13c5dd27,// 171 PAY 130 

    0x8eb11bf7,// 172 PAY 131 

    0xc9ce8933,// 173 PAY 132 

    0x2337fb2b,// 174 PAY 133 

    0x62896df6,// 175 PAY 134 

    0x7d91e9ad,// 176 PAY 135 

    0x4dadf760,// 177 PAY 136 

    0xc0724ac2,// 178 PAY 137 

    0x2d102bb6,// 179 PAY 138 

    0xdb46a07f,// 180 PAY 139 

    0x1eaa06f1,// 181 PAY 140 

    0x91692df1,// 182 PAY 141 

    0xf7eab869,// 183 PAY 142 

    0xc3b20574,// 184 PAY 143 

    0xe19bf4c4,// 185 PAY 144 

    0xc15da5c3,// 186 PAY 145 

    0x24b7f79d,// 187 PAY 146 

    0xf1d5ab72,// 188 PAY 147 

    0x016d8988,// 189 PAY 148 

    0x6373c78b,// 190 PAY 149 

    0xe41ad8a2,// 191 PAY 150 

    0x50c570a1,// 192 PAY 151 

    0x9c557c3e,// 193 PAY 152 

    0x9082c806,// 194 PAY 153 

    0xbf25879f,// 195 PAY 154 

    0x5bd1cbb8,// 196 PAY 155 

    0xcbf8bee0,// 197 PAY 156 

    0xb3e2b971,// 198 PAY 157 

    0x10d38568,// 199 PAY 158 

    0x3dc947ba,// 200 PAY 159 

    0x536fc5d0,// 201 PAY 160 

    0x1ce7201e,// 202 PAY 161 

    0xe1cf9e0d,// 203 PAY 162 

    0x4a30d65c,// 204 PAY 163 

    0x4d199c2f,// 205 PAY 164 

    0x4c623984,// 206 PAY 165 

    0xaba96ccc,// 207 PAY 166 

    0xd8c6ac42,// 208 PAY 167 

    0x6f825c19,// 209 PAY 168 

    0xa0ef5588,// 210 PAY 169 

    0x1f324b30,// 211 PAY 170 

    0x3e48bae0,// 212 PAY 171 

    0x524fbfb5,// 213 PAY 172 

    0x4870fe17,// 214 PAY 173 

    0x039ebc44,// 215 PAY 174 

    0x7d9908db,// 216 PAY 175 

    0x73d0b925,// 217 PAY 176 

    0x80236510,// 218 PAY 177 

    0xf808c71a,// 219 PAY 178 

    0x4c02e872,// 220 PAY 179 

    0x3eb71bb0,// 221 PAY 180 

    0x8d970c7a,// 222 PAY 181 

    0x60411262,// 223 PAY 182 

    0x009d0204,// 224 PAY 183 

    0xb019451f,// 225 PAY 184 

    0x6d51377e,// 226 PAY 185 

    0xda649e2f,// 227 PAY 186 

    0x88d2e594,// 228 PAY 187 

    0x53eefeb0,// 229 PAY 188 

    0xe7ef110f,// 230 PAY 189 

    0x8b09a8b7,// 231 PAY 190 

    0xbb1611f6,// 232 PAY 191 

    0x3352a938,// 233 PAY 192 

    0x3954c5ef,// 234 PAY 193 

    0x4ffeb2ae,// 235 PAY 194 

    0x982779ed,// 236 PAY 195 

    0x176b023a,// 237 PAY 196 

    0x5f24552b,// 238 PAY 197 

    0x9543135b,// 239 PAY 198 

    0x47a29bf5,// 240 PAY 199 

    0x629ab7b5,// 241 PAY 200 

    0x05960861,// 242 PAY 201 

    0xce5fd20f,// 243 PAY 202 

    0x2d67bc6c,// 244 PAY 203 

    0x998308e9,// 245 PAY 204 

    0x4ae3ec89,// 246 PAY 205 

    0x7e2e0e42,// 247 PAY 206 

    0x74189848,// 248 PAY 207 

    0xcb6e2041,// 249 PAY 208 

    0xb816ae5e,// 250 PAY 209 

    0x9fad92d0,// 251 PAY 210 

    0x5c92bd67,// 252 PAY 211 

    0x1b192721,// 253 PAY 212 

    0xeb93652f,// 254 PAY 213 

    0xc104bcb7,// 255 PAY 214 

    0xe9c9975e,// 256 PAY 215 

    0x2481f8a0,// 257 PAY 216 

    0xb110d244,// 258 PAY 217 

    0x9843be5e,// 259 PAY 218 

    0x405eb80d,// 260 PAY 219 

    0x5385c5b9,// 261 PAY 220 

    0xbd466b20,// 262 PAY 221 

    0x510af210,// 263 PAY 222 

    0x26467813,// 264 PAY 223 

    0x00735a92,// 265 PAY 224 

    0x905b7edd,// 266 PAY 225 

    0x514c0e54,// 267 PAY 226 

    0x1810e595,// 268 PAY 227 

    0x1059845a,// 269 PAY 228 

    0x3b8f2324,// 270 PAY 229 

    0xae6d7ab3,// 271 PAY 230 

    0xce58e1ce,// 272 PAY 231 

    0xf568761e,// 273 PAY 232 

    0x672b4eec,// 274 PAY 233 

    0x92426fcc,// 275 PAY 234 

    0x4cbee6b7,// 276 PAY 235 

    0x8a91aa14,// 277 PAY 236 

    0x8805bd1c,// 278 PAY 237 

    0x21527953,// 279 PAY 238 

    0x0c2edbd8,// 280 PAY 239 

    0x40d41120,// 281 PAY 240 

    0x95b186ba,// 282 PAY 241 

    0x7a8de434,// 283 PAY 242 

    0xd2ac05de,// 284 PAY 243 

    0x5efebf5d,// 285 PAY 244 

    0x29e49c37,// 286 PAY 245 

    0xf80db2be,// 287 PAY 246 

    0xb0f02b15,// 288 PAY 247 

    0x0e483d02,// 289 PAY 248 

    0x2be58b6d,// 290 PAY 249 

    0xa05165ad,// 291 PAY 250 

    0xdac5bd2f,// 292 PAY 251 

    0x3fc95823,// 293 PAY 252 

    0x4240fbf0,// 294 PAY 253 

    0x75428b2a,// 295 PAY 254 

    0xd535f1e3,// 296 PAY 255 

    0x7216c36f,// 297 PAY 256 

    0xf7f8b7b1,// 298 PAY 257 

    0x7df709b3,// 299 PAY 258 

    0x20115765,// 300 PAY 259 

    0xcfcb6f49,// 301 PAY 260 

    0x5cf1216e,// 302 PAY 261 

    0xd2758d44,// 303 PAY 262 

    0xe51ed5d1,// 304 PAY 263 

    0x6cd98e4d,// 305 PAY 264 

    0x501dd550,// 306 PAY 265 

    0x827ae6b9,// 307 PAY 266 

    0xefaa9668,// 308 PAY 267 

    0x5ecafdf3,// 309 PAY 268 

    0xa3f44401,// 310 PAY 269 

    0x056e5e45,// 311 PAY 270 

    0x4022a876,// 312 PAY 271 

    0xe540b7ed,// 313 PAY 272 

    0x19ee1847,// 314 PAY 273 

    0x035825ca,// 315 PAY 274 

    0xeb990693,// 316 PAY 275 

    0x4ef4b8fa,// 317 PAY 276 

    0xdebb2777,// 318 PAY 277 

    0x9292866d,// 319 PAY 278 

    0x989681c0,// 320 PAY 279 

    0x3aa509da,// 321 PAY 280 

    0x4a78b342,// 322 PAY 281 

    0x7d9cc6e5,// 323 PAY 282 

    0xa3c27430,// 324 PAY 283 

    0x61ac4ea4,// 325 PAY 284 

    0x92cb7651,// 326 PAY 285 

    0x5bf12b80,// 327 PAY 286 

    0x22d22570,// 328 PAY 287 

    0x34b2422a,// 329 PAY 288 

    0xc67973c3,// 330 PAY 289 

    0x19ab06b0,// 331 PAY 290 

    0x56c5bfd1,// 332 PAY 291 

    0xf2174b83,// 333 PAY 292 

    0xca9b3f8d,// 334 PAY 293 

    0x53ae881a,// 335 PAY 294 

    0x5d53d10c,// 336 PAY 295 

    0x08ce71ef,// 337 PAY 296 

    0x1af107f9,// 338 PAY 297 

    0xdbe8af62,// 339 PAY 298 

    0x24dedc23,// 340 PAY 299 

    0xa71fb770,// 341 PAY 300 

    0x7bc2331d,// 342 PAY 301 

    0x27ec7195,// 343 PAY 302 

    0x9409b735,// 344 PAY 303 

    0xaabc677e,// 345 PAY 304 

    0x2e935f5d,// 346 PAY 305 

    0x0d6bbe7d,// 347 PAY 306 

    0x157c7963,// 348 PAY 307 

    0x85998556,// 349 PAY 308 

    0xdfcbd999,// 350 PAY 309 

    0x826210d0,// 351 PAY 310 

    0xa3d4157a,// 352 PAY 311 

    0x6342c8b8,// 353 PAY 312 

    0x1c36bb31,// 354 PAY 313 

    0xa9c25808,// 355 PAY 314 

    0xd80a5297,// 356 PAY 315 

    0x39a07a24,// 357 PAY 316 

    0x475204d4,// 358 PAY 317 

    0x80a55511,// 359 PAY 318 

    0x3da530ed,// 360 PAY 319 

    0x947e23b7,// 361 PAY 320 

    0x9a99620c,// 362 PAY 321 

    0x5a032b5b,// 363 PAY 322 

    0xaab447c3,// 364 PAY 323 

    0x6590db73,// 365 PAY 324 

    0x113177b1,// 366 PAY 325 

    0x0416fbbf,// 367 PAY 326 

    0x9fc6d080,// 368 PAY 327 

    0x8cf3aa55,// 369 PAY 328 

    0x50015a02,// 370 PAY 329 

    0x6e279afd,// 371 PAY 330 

    0x78296460,// 372 PAY 331 

    0x0b206262,// 373 PAY 332 

    0x029f3c06,// 374 PAY 333 

    0x06e129eb,// 375 PAY 334 

    0x2d207292,// 376 PAY 335 

    0xe06a89ce,// 377 PAY 336 

    0x8e3b857d,// 378 PAY 337 

    0xf85e0d58,// 379 PAY 338 

    0x669a7df2,// 380 PAY 339 

    0xbfcef3fa,// 381 PAY 340 

    0x3fbdf699,// 382 PAY 341 

    0xa400c99a,// 383 PAY 342 

    0x70707ac9,// 384 PAY 343 

    0x6e008258,// 385 PAY 344 

    0xa32f6c4c,// 386 PAY 345 

    0xcbb4bef5,// 387 PAY 346 

    0xbe755f54,// 388 PAY 347 

    0x95d3c9e7,// 389 PAY 348 

    0xb6e5f174,// 390 PAY 349 

    0x10ff2a66,// 391 PAY 350 

    0x5850868a,// 392 PAY 351 

    0x2201fda4,// 393 PAY 352 

    0x1e4e08de,// 394 PAY 353 

    0x0e036c1b,// 395 PAY 354 

    0xaf41dd44,// 396 PAY 355 

    0xd23c67a8,// 397 PAY 356 

    0xc9502521,// 398 PAY 357 

    0xc79168bf,// 399 PAY 358 

    0x1c3cf261,// 400 PAY 359 

    0x441361b4,// 401 PAY 360 

    0x927c80dc,// 402 PAY 361 

    0x3580110f,// 403 PAY 362 

    0x868331da,// 404 PAY 363 

    0x77ee9ab2,// 405 PAY 364 

    0x19e3d98e,// 406 PAY 365 

    0xa79b13e3,// 407 PAY 366 

    0x66d5c596,// 408 PAY 367 

    0x3aaffcb3,// 409 PAY 368 

    0x1b4f7274,// 410 PAY 369 

    0xb7a0dbfe,// 411 PAY 370 

    0x69f30d07,// 412 PAY 371 

    0x93ce4a92,// 413 PAY 372 

    0xf5def4ba,// 414 PAY 373 

    0x4827109e,// 415 PAY 374 

    0xad961191,// 416 PAY 375 

    0xe4c71d0b,// 417 PAY 376 

    0x70a1ef42,// 418 PAY 377 

    0x06dc5fba,// 419 PAY 378 

    0x0ee1ecb8,// 420 PAY 379 

    0xa7ae1663,// 421 PAY 380 

    0xb533959d,// 422 PAY 381 

    0x47a0020f,// 423 PAY 382 

    0xce43ccfa,// 424 PAY 383 

    0xd2433472,// 425 PAY 384 

    0xf9ae1193,// 426 PAY 385 

    0xbcf45d65,// 427 PAY 386 

    0x25f0254d,// 428 PAY 387 

    0x3a1b1bdb,// 429 PAY 388 

    0x8fbb7dcd,// 430 PAY 389 

    0xe2cb8b1c,// 431 PAY 390 

    0x72cada00,// 432 PAY 391 

    0xe207ef5c,// 433 PAY 392 

    0xf690f819,// 434 PAY 393 

    0xb5d4217f,// 435 PAY 394 

    0x8f2749d2,// 436 PAY 395 

    0xa6ffc83b,// 437 PAY 396 

    0x2f9235bc,// 438 PAY 397 

    0xb58f5e11,// 439 PAY 398 

    0x7217f52b,// 440 PAY 399 

    0xb811ed76,// 441 PAY 400 

    0xb3f4f713,// 442 PAY 401 

    0x8d47ec36,// 443 PAY 402 

    0x8332cfb6,// 444 PAY 403 

    0xcd391cf2,// 445 PAY 404 

    0xd476971a,// 446 PAY 405 

    0x681e209e,// 447 PAY 406 

    0x7e7ce548,// 448 PAY 407 

    0x16fb2b7c,// 449 PAY 408 

    0x8ca37551,// 450 PAY 409 

    0x5b15d678,// 451 PAY 410 

    0x8929c7c3,// 452 PAY 411 

    0xc436f324,// 453 PAY 412 

    0x1fb195a6,// 454 PAY 413 

    0x9561e13b,// 455 PAY 414 

    0x129a5d3d,// 456 PAY 415 

    0x41897ec2,// 457 PAY 416 

    0x98d32395,// 458 PAY 417 

    0xf0521c9f,// 459 PAY 418 

    0x1ba54330,// 460 PAY 419 

    0x091cb417,// 461 PAY 420 

    0xf21294cf,// 462 PAY 421 

    0xa75efe93,// 463 PAY 422 

    0x1f1db6a9,// 464 PAY 423 

    0x844e346c,// 465 PAY 424 

    0x6f11c2d5,// 466 PAY 425 

    0x0b8f97b1,// 467 PAY 426 

    0xacaa12a8,// 468 PAY 427 

    0x37d22d51,// 469 PAY 428 

    0x48fa9b7c,// 470 PAY 429 

    0x69d304c3,// 471 PAY 430 

    0x8b927e26,// 472 PAY 431 

    0x74ac7dec,// 473 PAY 432 

    0xebd012b8,// 474 PAY 433 

    0x13ffe71a,// 475 PAY 434 

    0xacfddace,// 476 PAY 435 

    0x2528fe4e,// 477 PAY 436 

    0xc64828ef,// 478 PAY 437 

    0xbd93894d,// 479 PAY 438 

    0x47158067,// 480 PAY 439 

    0x0c8a3d35,// 481 PAY 440 

    0x9da1505c,// 482 PAY 441 

    0x2303e8f1,// 483 PAY 442 

    0x5ec1f636,// 484 PAY 443 

    0x16db887c,// 485 PAY 444 

    0xa7c6ea0b,// 486 PAY 445 

    0x99e84dfc,// 487 PAY 446 

    0x9e10daa0,// 488 PAY 447 

    0x6570f990,// 489 PAY 448 

    0xb1f97f28,// 490 PAY 449 

    0xa01f9d16,// 491 PAY 450 

    0x42a5742b,// 492 PAY 451 

    0xdd03139d,// 493 PAY 452 

    0x793d89f7,// 494 PAY 453 

    0x47c90fcf,// 495 PAY 454 

    0x5dc7367d,// 496 PAY 455 

    0x465f17f0,// 497 PAY 456 

    0x044bc444,// 498 PAY 457 

    0xf68cb8c8,// 499 PAY 458 

    0xc32cce52,// 500 PAY 459 

    0xa4815027,// 501 PAY 460 

    0x3edc1fcb,// 502 PAY 461 

    0xad8f5e8f,// 503 PAY 462 

    0xf0a63567,// 504 PAY 463 

    0xba288c68,// 505 PAY 464 

    0x88e44a6a,// 506 PAY 465 

    0xd06eed2c,// 507 PAY 466 

    0x566d7683,// 508 PAY 467 

    0x4dec8985,// 509 PAY 468 

    0xf9c9afe5,// 510 PAY 469 

    0xba334357,// 511 PAY 470 

    0xb0a0f709,// 512 PAY 471 

    0xda7b6898,// 513 PAY 472 

    0xe65ccdb4,// 514 PAY 473 

    0xaf0657fc,// 515 PAY 474 

    0xda92ebf2,// 516 PAY 475 

    0x19725407,// 517 PAY 476 

    0xcb0612df,// 518 PAY 477 

    0x2c8ba4fe,// 519 PAY 478 

    0xc5b510d2,// 520 PAY 479 

    0xc3a79d56,// 521 PAY 480 

    0x44ef0000,// 522 PAY 481 

/// STA is 1 words. 

/// STA num_pkts       : 137 

/// STA pkt_idx        : 109 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xc0 

    0x01b5c089 // 523 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 80 (0x50) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_sha1_pkt18_tmpl[] = {
    0xb8010050,// 1 CCH   1 

/// ECH cache_idx      : 0x05 

/// ECH pdu_tag        : 0x00 

    0x00050000,// 2 ECH   1 

/// SCX is 19 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound save_icv !insert_icv !check_icv !sctx_iv  

/// SCX exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : SHA1 

/// SCX aes_size        : NORMAL_RC4INIT_AES128 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x1 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 40 

    0x00000013,// 3 SCX   1 

    0x806448a9,// 4 SCX   2 

    0x00004142,// 5 SCX   3 

    0x8f55a53f,// 6 SCX   4 

    0xc4055260,// 7 SCX   5 

    0x58b9576b,// 8 SCX   6 

    0xea162c95,// 9 SCX   7 

    0x91444c1e,// 10 SCX   8 

    0x9714ac4b,// 11 SCX   9 

    0xaaad240f,// 12 SCX  10 

    0xe748f3dc,// 13 SCX  11 

    0x2f42ecac,// 14 SCX  12 

    0x4066986b,// 15 SCX  13 

    0x197cdf7a,// 16 SCX  14 

    0xc966ccf5,// 17 SCX  15 

    0xa721ceab,// 18 SCX  16 

    0x838e5753,// 19 SCX  17 

    0x75ab82f9,// 20 SCX  18 

    0x7955350a,// 21 SCX  19 

/// BFD is 3 words. 

/// BFD tot_len        : 1207 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 841 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 841 

/// BFD lencrypto      : 240 

/// BFD ofstcrypto     : 592 

/// BFD (ofst+len)cry  : 832 

/// BFD ofstiv         : 320 

/// BFD ofsticv        : 872 

    0x00000349,// 22 BFD   1 

    0x025000f0,// 23 BFD   2 

    0x03680140,// 24 BFD   3 

/// MFM is 2 words. 

/// MFM vldnibs        : 6 

    0x0600738e,// 25 MFM   1 

    0xf3000000,// 26 MFM   2 

/// BDA is 303 words. 

/// BDA size     is 1207 (0x4b7) 

/// BDA id       is 0xdbea 

    0x04b7dbea,// 27 BDA   1 

/// PAY Generic Data size   : 1207 byte(s) 

/// PAD Buffer Data Pad size   : 1 byte(s) 

    0xdb09bb79,// 28 PAY   1 

    0x2b7f0b58,// 29 PAY   2 

    0xec9e9b07,// 30 PAY   3 

    0xe58ae5de,// 31 PAY   4 

    0xadfd22dc,// 32 PAY   5 

    0xe73b86f3,// 33 PAY   6 

    0x8b405f69,// 34 PAY   7 

    0x6a32ee9d,// 35 PAY   8 

    0xa763704d,// 36 PAY   9 

    0x65bcbbe7,// 37 PAY  10 

    0x7cde02a7,// 38 PAY  11 

    0x555f8ff9,// 39 PAY  12 

    0xfae6c43a,// 40 PAY  13 

    0xbad1ada1,// 41 PAY  14 

    0xa306655e,// 42 PAY  15 

    0x3c1767c3,// 43 PAY  16 

    0xcbe5643c,// 44 PAY  17 

    0xb4432836,// 45 PAY  18 

    0xbf0fde2d,// 46 PAY  19 

    0xd6b67e81,// 47 PAY  20 

    0xa38aef23,// 48 PAY  21 

    0x1bc89327,// 49 PAY  22 

    0xcdba0158,// 50 PAY  23 

    0x8a6e224f,// 51 PAY  24 

    0x91c11ca3,// 52 PAY  25 

    0x0d2fc465,// 53 PAY  26 

    0xd55abae0,// 54 PAY  27 

    0xf239849d,// 55 PAY  28 

    0x138bf6c9,// 56 PAY  29 

    0xf872b3eb,// 57 PAY  30 

    0xfaf92b6c,// 58 PAY  31 

    0x61e483fb,// 59 PAY  32 

    0x21b7aad2,// 60 PAY  33 

    0xf5f7ce0c,// 61 PAY  34 

    0xdab48014,// 62 PAY  35 

    0x880a4016,// 63 PAY  36 

    0x2e5f8979,// 64 PAY  37 

    0x8ecfb2cb,// 65 PAY  38 

    0x18754ff7,// 66 PAY  39 

    0x98522089,// 67 PAY  40 

    0xf769e9c0,// 68 PAY  41 

    0x623efbbd,// 69 PAY  42 

    0xe03d41cf,// 70 PAY  43 

    0x3a3dc714,// 71 PAY  44 

    0xf9569fa2,// 72 PAY  45 

    0x7b4db31e,// 73 PAY  46 

    0xad972af9,// 74 PAY  47 

    0xd1afc5d8,// 75 PAY  48 

    0xf8aed718,// 76 PAY  49 

    0x28cacd53,// 77 PAY  50 

    0x329e7dfe,// 78 PAY  51 

    0x2f535442,// 79 PAY  52 

    0x0cf69ec5,// 80 PAY  53 

    0x52004cf4,// 81 PAY  54 

    0x7ced60fc,// 82 PAY  55 

    0x9e4d6f1c,// 83 PAY  56 

    0x90d564a0,// 84 PAY  57 

    0x1c1297c7,// 85 PAY  58 

    0xff3af8ba,// 86 PAY  59 

    0xc3ecf2bb,// 87 PAY  60 

    0x37d29bd3,// 88 PAY  61 

    0xae7bf82b,// 89 PAY  62 

    0xb1c68acb,// 90 PAY  63 

    0x2ab7f9fb,// 91 PAY  64 

    0x2a02c1db,// 92 PAY  65 

    0xc3c1a17a,// 93 PAY  66 

    0xaa02cf69,// 94 PAY  67 

    0xc0d0cbf6,// 95 PAY  68 

    0x5108a395,// 96 PAY  69 

    0x164fa5ef,// 97 PAY  70 

    0x399a0548,// 98 PAY  71 

    0xfcd8ccb6,// 99 PAY  72 

    0x6e8f9430,// 100 PAY  73 

    0x434aa55e,// 101 PAY  74 

    0x9e4adc92,// 102 PAY  75 

    0xfeb4c01a,// 103 PAY  76 

    0x9004a6f9,// 104 PAY  77 

    0xf1d32517,// 105 PAY  78 

    0xa22db90a,// 106 PAY  79 

    0x7386a2c2,// 107 PAY  80 

    0x540209f6,// 108 PAY  81 

    0xca307a0e,// 109 PAY  82 

    0x90a0e602,// 110 PAY  83 

    0x7b61aa98,// 111 PAY  84 

    0xf6c96265,// 112 PAY  85 

    0x226f7a3b,// 113 PAY  86 

    0xb39a0c5b,// 114 PAY  87 

    0x7840392c,// 115 PAY  88 

    0xe534e546,// 116 PAY  89 

    0xad479c54,// 117 PAY  90 

    0x75543414,// 118 PAY  91 

    0x255b50eb,// 119 PAY  92 

    0x6eef5235,// 120 PAY  93 

    0x0008ab4d,// 121 PAY  94 

    0x18142cd6,// 122 PAY  95 

    0x7286198e,// 123 PAY  96 

    0x619ee447,// 124 PAY  97 

    0xa0b7d70b,// 125 PAY  98 

    0x8573b2e6,// 126 PAY  99 

    0xae125311,// 127 PAY 100 

    0xd38b2887,// 128 PAY 101 

    0x0e03f605,// 129 PAY 102 

    0x29f0e3b7,// 130 PAY 103 

    0xb13ece3c,// 131 PAY 104 

    0x66e4bee1,// 132 PAY 105 

    0x0b142e46,// 133 PAY 106 

    0xd837529c,// 134 PAY 107 

    0x4f050dd6,// 135 PAY 108 

    0xe31735e3,// 136 PAY 109 

    0xe210eb5f,// 137 PAY 110 

    0x63eb5e48,// 138 PAY 111 

    0x32241a93,// 139 PAY 112 

    0x91fb269a,// 140 PAY 113 

    0xb6f13b3c,// 141 PAY 114 

    0xa4fc483e,// 142 PAY 115 

    0x17bc71b6,// 143 PAY 116 

    0xaae1460a,// 144 PAY 117 

    0x7eaa1d97,// 145 PAY 118 

    0x9273ec58,// 146 PAY 119 

    0xac19a89c,// 147 PAY 120 

    0x0e6b4e1e,// 148 PAY 121 

    0x5039d399,// 149 PAY 122 

    0x73e208f3,// 150 PAY 123 

    0x12968318,// 151 PAY 124 

    0x8c6f88de,// 152 PAY 125 

    0xd0d9018e,// 153 PAY 126 

    0xe9e5bbd3,// 154 PAY 127 

    0xd0840aaf,// 155 PAY 128 

    0x9c4b00e6,// 156 PAY 129 

    0x2ea681a5,// 157 PAY 130 

    0x424d69bd,// 158 PAY 131 

    0x88e3e303,// 159 PAY 132 

    0x4e7a9b06,// 160 PAY 133 

    0xf517bb2a,// 161 PAY 134 

    0x0920a8b5,// 162 PAY 135 

    0xeb6b0353,// 163 PAY 136 

    0xb2b36be1,// 164 PAY 137 

    0x1c35cd81,// 165 PAY 138 

    0xab94274c,// 166 PAY 139 

    0xfbe5f14e,// 167 PAY 140 

    0xf5bbbcba,// 168 PAY 141 

    0x6dbd64bc,// 169 PAY 142 

    0xcb1e2e31,// 170 PAY 143 

    0x38a03466,// 171 PAY 144 

    0x44d2d089,// 172 PAY 145 

    0x65447379,// 173 PAY 146 

    0xcbd30d15,// 174 PAY 147 

    0xe32c8cff,// 175 PAY 148 

    0x69ba74a7,// 176 PAY 149 

    0x59a37e8b,// 177 PAY 150 

    0x1f1706e9,// 178 PAY 151 

    0xaa2b6096,// 179 PAY 152 

    0xdeb8830d,// 180 PAY 153 

    0x5dc5a9ba,// 181 PAY 154 

    0x82f62845,// 182 PAY 155 

    0xb73c0e0d,// 183 PAY 156 

    0xdb49321a,// 184 PAY 157 

    0x9ead61f5,// 185 PAY 158 

    0xe3a4b944,// 186 PAY 159 

    0xbad8fea8,// 187 PAY 160 

    0xc2a996b5,// 188 PAY 161 

    0x9b1d88a6,// 189 PAY 162 

    0xc39a69d9,// 190 PAY 163 

    0x782e3142,// 191 PAY 164 

    0x3013f3e7,// 192 PAY 165 

    0x33bf452a,// 193 PAY 166 

    0xdec107fe,// 194 PAY 167 

    0x5968171a,// 195 PAY 168 

    0x18939507,// 196 PAY 169 

    0xb2177083,// 197 PAY 170 

    0xa2ff7473,// 198 PAY 171 

    0xae60b232,// 199 PAY 172 

    0x113e44fa,// 200 PAY 173 

    0x7c3b9cb9,// 201 PAY 174 

    0xbdd322a6,// 202 PAY 175 

    0x3043eaa6,// 203 PAY 176 

    0xb4a7529e,// 204 PAY 177 

    0x0ba1d8df,// 205 PAY 178 

    0xf2c3b7ff,// 206 PAY 179 

    0xe16654c7,// 207 PAY 180 

    0x5f98156e,// 208 PAY 181 

    0x7c5e2e26,// 209 PAY 182 

    0x49973153,// 210 PAY 183 

    0x0f84a7d7,// 211 PAY 184 

    0xc32928a2,// 212 PAY 185 

    0xa8a24b47,// 213 PAY 186 

    0x5969e6ce,// 214 PAY 187 

    0xa7b8f6f3,// 215 PAY 188 

    0x4c6c213c,// 216 PAY 189 

    0xa8764155,// 217 PAY 190 

    0xe2308d9f,// 218 PAY 191 

    0x694d56fa,// 219 PAY 192 

    0x48fbb83c,// 220 PAY 193 

    0xfa8d6e54,// 221 PAY 194 

    0x5419a86f,// 222 PAY 195 

    0x1dcabb14,// 223 PAY 196 

    0xd84e4e2d,// 224 PAY 197 

    0x1cda94cb,// 225 PAY 198 

    0x17e0a35c,// 226 PAY 199 

    0x28b6bc6b,// 227 PAY 200 

    0xed236ba4,// 228 PAY 201 

    0x6f1815ff,// 229 PAY 202 

    0x355c9fc8,// 230 PAY 203 

    0x4b688e8c,// 231 PAY 204 

    0x2d7fe880,// 232 PAY 205 

    0x08f9f570,// 233 PAY 206 

    0x79e775fa,// 234 PAY 207 

    0x6ac301e2,// 235 PAY 208 

    0xbaac16cc,// 236 PAY 209 

    0x85d225d4,// 237 PAY 210 

    0x9ba18dd5,// 238 PAY 211 

    0x00a44a1f,// 239 PAY 212 

    0xc7b7622f,// 240 PAY 213 

    0xe4664418,// 241 PAY 214 

    0x8b817dc9,// 242 PAY 215 

    0x66db06c6,// 243 PAY 216 

    0x00e5d2a3,// 244 PAY 217 

    0x2dc3e9ae,// 245 PAY 218 

    0x662d8b85,// 246 PAY 219 

    0xc4e7f974,// 247 PAY 220 

    0xa67a4644,// 248 PAY 221 

    0x664bd416,// 249 PAY 222 

    0x0a328de8,// 250 PAY 223 

    0x52d85121,// 251 PAY 224 

    0xca2df507,// 252 PAY 225 

    0x3992adab,// 253 PAY 226 

    0xf4542260,// 254 PAY 227 

    0x272d7a38,// 255 PAY 228 

    0xc680dcf5,// 256 PAY 229 

    0x0bbb8714,// 257 PAY 230 

    0xde4e2da7,// 258 PAY 231 

    0x545acf03,// 259 PAY 232 

    0xb5678a06,// 260 PAY 233 

    0x49082682,// 261 PAY 234 

    0x7270164c,// 262 PAY 235 

    0x02981a5e,// 263 PAY 236 

    0x5b594f66,// 264 PAY 237 

    0xf5d7ea51,// 265 PAY 238 

    0x65a38f4f,// 266 PAY 239 

    0x97426613,// 267 PAY 240 

    0x36428f2c,// 268 PAY 241 

    0xd64f23b7,// 269 PAY 242 

    0xdd30084e,// 270 PAY 243 

    0x7add85c8,// 271 PAY 244 

    0x6afb6e7e,// 272 PAY 245 

    0xc8bb52c2,// 273 PAY 246 

    0xe43ef0c3,// 274 PAY 247 

    0x38d83f03,// 275 PAY 248 

    0x52229996,// 276 PAY 249 

    0xc470b571,// 277 PAY 250 

    0xa4dcd2cf,// 278 PAY 251 

    0x0ed51a59,// 279 PAY 252 

    0x01bbf8bc,// 280 PAY 253 

    0x507f0cd6,// 281 PAY 254 

    0xbb5e85a3,// 282 PAY 255 

    0x5b032dd1,// 283 PAY 256 

    0xfd259909,// 284 PAY 257 

    0x61a0b487,// 285 PAY 258 

    0x81a3e888,// 286 PAY 259 

    0x5ef8289d,// 287 PAY 260 

    0xec9650b5,// 288 PAY 261 

    0x38e7a72f,// 289 PAY 262 

    0xd0fadb15,// 290 PAY 263 

    0x2ebe694d,// 291 PAY 264 

    0x871d188d,// 292 PAY 265 

    0xd99a9914,// 293 PAY 266 

    0xe1117ef4,// 294 PAY 267 

    0x96233b9c,// 295 PAY 268 

    0x3cae317e,// 296 PAY 269 

    0xef3dc9c9,// 297 PAY 270 

    0x2ba0d83c,// 298 PAY 271 

    0x48e908c7,// 299 PAY 272 

    0xc34d8842,// 300 PAY 273 

    0x5eeba3a0,// 301 PAY 274 

    0x772a4e54,// 302 PAY 275 

    0x925fbf28,// 303 PAY 276 

    0xba544482,// 304 PAY 277 

    0x2409e174,// 305 PAY 278 

    0x55442991,// 306 PAY 279 

    0x8919575c,// 307 PAY 280 

    0xa7a8bc1d,// 308 PAY 281 

    0xd443f896,// 309 PAY 282 

    0xc51073ee,// 310 PAY 283 

    0x4c78bb2f,// 311 PAY 284 

    0x3cbebc2e,// 312 PAY 285 

    0x5acc046a,// 313 PAY 286 

    0xe178e63a,// 314 PAY 287 

    0x3df664e1,// 315 PAY 288 

    0x3d0c59d8,// 316 PAY 289 

    0xb2018e0c,// 317 PAY 290 

    0xfde799db,// 318 PAY 291 

    0xbe7d217a,// 319 PAY 292 

    0x203619da,// 320 PAY 293 

    0x86d627eb,// 321 PAY 294 

    0x9efd8101,// 322 PAY 295 

    0x3a66a1e4,// 323 PAY 296 

    0x6499efac,// 324 PAY 297 

    0x222d569d,// 325 PAY 298 

    0xf40cbce1,// 326 PAY 299 

    0x86b2b863,// 327 PAY 300 

    0xc0e84a59,// 328 PAY 301 

    0x12af9d00,// 329 PAY 302 

/// STA is 1 words. 

/// STA num_pkts       : 212 

/// STA pkt_idx        : 86 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xe6 

    0x0158e6d4 // 330 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 80 (0x50) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_sha1_pkt19_tmpl[] = {
    0xb8010050,// 1 CCH   1 

/// ECH cache_idx      : 0x02 

/// ECH pdu_tag        : 0x00 

    0x00020000,// 2 ECH   1 

/// SCX is 19 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound save_icv insert_icv !check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : SHA1 

/// SCX aes_size        : RC4UPDT_AES192 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x5 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 40 

    0x08000013,// 3 SCX   1 

    0x806148c6,// 4 SCX   2 

    0x00006500,// 5 SCX   3 

    0x9cb6831d,// 6 SCX   4 

    0x6e0fd957,// 7 SCX   5 

    0x63f87a7a,// 8 SCX   6 

    0xde25b1f1,// 9 SCX   7 

    0xc3c11b00,// 10 SCX   8 

    0x405a2968,// 11 SCX   9 

    0xa0d348d9,// 12 SCX  10 

    0xb51ad2e3,// 13 SCX  11 

    0xb44b5f3c,// 14 SCX  12 

    0xb2ee353a,// 15 SCX  13 

    0x362887b9,// 16 SCX  14 

    0x63115f5c,// 17 SCX  15 

    0x4a2aa6bc,// 18 SCX  16 

    0x1d97cdb9,// 19 SCX  17 

    0xc96f89c6,// 20 SCX  18 

    0x41d8f021,// 21 SCX  19 

/// BFD is 3 words. 

/// BFD tot_len        : 551 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 283 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 283 

/// BFD lencrypto      : 96 

/// BFD ofstcrypto     : 176 

/// BFD (ofst+len)cry  : 272 

/// BFD ofstiv         : 60 

/// BFD ofsticv        : 328 

    0x0000011b,// 22 BFD   1 

    0x00b00060,// 23 BFD   2 

    0x0148003c,// 24 BFD   3 

/// MFM is 4 words. 

/// MFM vldnibs        : 16 

    0x16009668,// 25 MFM   1 

    0x334ba2be,// 26 MFM   2 

    0x690d8e22,// 27 MFM   3 

    0xa5000000,// 28 MFM   4 

/// BDA is 139 words. 

/// BDA size     is 551 (0x227) 

/// BDA id       is 0x426c 

    0x0227426c,// 29 BDA   1 

/// PAY Generic Data size   : 551 byte(s) 

/// PAD Buffer Data Pad size   : 1 byte(s) 

    0xffc26e1a,// 30 PAY   1 

    0x0d426658,// 31 PAY   2 

    0xa17a2be6,// 32 PAY   3 

    0x84d98c9a,// 33 PAY   4 

    0xa7b72b50,// 34 PAY   5 

    0x25fa4781,// 35 PAY   6 

    0xb09dc61a,// 36 PAY   7 

    0xd82d7fc9,// 37 PAY   8 

    0xfce28fe1,// 38 PAY   9 

    0x5ef6f9a7,// 39 PAY  10 

    0x0e5f1dc8,// 40 PAY  11 

    0xe566116c,// 41 PAY  12 

    0x35ba864d,// 42 PAY  13 

    0x4265553d,// 43 PAY  14 

    0xee1173d0,// 44 PAY  15 

    0x7e44b9da,// 45 PAY  16 

    0xe3672f72,// 46 PAY  17 

    0xa02c399f,// 47 PAY  18 

    0xd95b4ebd,// 48 PAY  19 

    0x203c754b,// 49 PAY  20 

    0x79e5f3d2,// 50 PAY  21 

    0x7e93a981,// 51 PAY  22 

    0x832c4be2,// 52 PAY  23 

    0xba0e4f38,// 53 PAY  24 

    0x0f6eaaca,// 54 PAY  25 

    0xdfdec57d,// 55 PAY  26 

    0x6aecfd2f,// 56 PAY  27 

    0x7e4a4712,// 57 PAY  28 

    0xd823f988,// 58 PAY  29 

    0x0b6f3c03,// 59 PAY  30 

    0x13aaabe1,// 60 PAY  31 

    0xb49c9a67,// 61 PAY  32 

    0x659b6ea0,// 62 PAY  33 

    0x8e082c71,// 63 PAY  34 

    0x3cb6ca28,// 64 PAY  35 

    0x59adc412,// 65 PAY  36 

    0x32832c88,// 66 PAY  37 

    0x8464d3da,// 67 PAY  38 

    0xdcb1f6c0,// 68 PAY  39 

    0xe4fc130b,// 69 PAY  40 

    0xb385dd1c,// 70 PAY  41 

    0xf7728119,// 71 PAY  42 

    0x96b53c8f,// 72 PAY  43 

    0x85f32c30,// 73 PAY  44 

    0x6452f07f,// 74 PAY  45 

    0x55dc4ae3,// 75 PAY  46 

    0xe1274f43,// 76 PAY  47 

    0x15ff0af7,// 77 PAY  48 

    0x18c2a3b1,// 78 PAY  49 

    0x90d6eef9,// 79 PAY  50 

    0xd8a120fa,// 80 PAY  51 

    0xc2a2680c,// 81 PAY  52 

    0xcc612ef2,// 82 PAY  53 

    0x167ce402,// 83 PAY  54 

    0x92620b51,// 84 PAY  55 

    0xe352fc6d,// 85 PAY  56 

    0x6eec390d,// 86 PAY  57 

    0xcda43712,// 87 PAY  58 

    0x1a66e59d,// 88 PAY  59 

    0x023c10ed,// 89 PAY  60 

    0x8dd74158,// 90 PAY  61 

    0x08afb978,// 91 PAY  62 

    0x21655cff,// 92 PAY  63 

    0x793eb28a,// 93 PAY  64 

    0x1b0cd83e,// 94 PAY  65 

    0xf0fde180,// 95 PAY  66 

    0xe5b77992,// 96 PAY  67 

    0xc7934f9c,// 97 PAY  68 

    0xb1494c58,// 98 PAY  69 

    0xd427a3b7,// 99 PAY  70 

    0x4359cef6,// 100 PAY  71 

    0x3d8deacb,// 101 PAY  72 

    0xf75dfad7,// 102 PAY  73 

    0x99c2dfb7,// 103 PAY  74 

    0xdee07c65,// 104 PAY  75 

    0xc7c80cd6,// 105 PAY  76 

    0xe713ae3a,// 106 PAY  77 

    0xd528c2c7,// 107 PAY  78 

    0x28eee043,// 108 PAY  79 

    0x286501c1,// 109 PAY  80 

    0xcec45cb2,// 110 PAY  81 

    0x1f37587b,// 111 PAY  82 

    0xfceb0d28,// 112 PAY  83 

    0x2a6d4008,// 113 PAY  84 

    0xed082501,// 114 PAY  85 

    0x9a708757,// 115 PAY  86 

    0xf32aeba1,// 116 PAY  87 

    0x835cc724,// 117 PAY  88 

    0x3f471c2a,// 118 PAY  89 

    0x3719d82f,// 119 PAY  90 

    0x903d5f1b,// 120 PAY  91 

    0x927f0b19,// 121 PAY  92 

    0x5224917d,// 122 PAY  93 

    0xb843d3e2,// 123 PAY  94 

    0x09286a23,// 124 PAY  95 

    0x431f95f9,// 125 PAY  96 

    0xd8a4e08f,// 126 PAY  97 

    0xe36d9df7,// 127 PAY  98 

    0x446f72c9,// 128 PAY  99 

    0xfe2731d0,// 129 PAY 100 

    0x23ae23b2,// 130 PAY 101 

    0xa11d9284,// 131 PAY 102 

    0x6f0e84f3,// 132 PAY 103 

    0xe6e47cb1,// 133 PAY 104 

    0x3b6f5ef6,// 134 PAY 105 

    0x34408367,// 135 PAY 106 

    0x55ca0810,// 136 PAY 107 

    0xb2312f2e,// 137 PAY 108 

    0x6fa8aed4,// 138 PAY 109 

    0x27529af8,// 139 PAY 110 

    0x3e0f0e69,// 140 PAY 111 

    0xd29a2465,// 141 PAY 112 

    0x5cbdd730,// 142 PAY 113 

    0x95ee6948,// 143 PAY 114 

    0xa392a7ca,// 144 PAY 115 

    0xbaac6564,// 145 PAY 116 

    0xc343b8fa,// 146 PAY 117 

    0xcf29760d,// 147 PAY 118 

    0x4ee041e5,// 148 PAY 119 

    0x9ffbe18d,// 149 PAY 120 

    0x750442e7,// 150 PAY 121 

    0xc65a76ec,// 151 PAY 122 

    0x71bcc36e,// 152 PAY 123 

    0xbef965ca,// 153 PAY 124 

    0xf6d8f5c3,// 154 PAY 125 

    0x625f2515,// 155 PAY 126 

    0xc8c488e9,// 156 PAY 127 

    0x0b662b8a,// 157 PAY 128 

    0xb4dfca3c,// 158 PAY 129 

    0xec96183f,// 159 PAY 130 

    0x6f0af78f,// 160 PAY 131 

    0xec12becc,// 161 PAY 132 

    0xc8bb0b40,// 162 PAY 133 

    0x4ce64d2b,// 163 PAY 134 

    0x037e1225,// 164 PAY 135 

    0x4ab6f646,// 165 PAY 136 

    0xea25e6ad,// 166 PAY 137 

    0x64eb5500,// 167 PAY 138 

/// STA is 1 words. 

/// STA num_pkts       : 27 

/// STA pkt_idx        : 179 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x3c 

    0x02cc3c1b // 168 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 80 (0x50) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_sha1_pkt20_tmpl[] = {
    0xb8010050,// 1 CCH   1 

/// ECH cache_idx      : 0x07 

/// ECH pdu_tag        : 0x00 

    0x00070000,// 2 ECH   1 

/// SCX is 19 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound save_icv !insert_icv !check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : SHA1 

/// SCX aes_size        : NORMAL_RC4INIT_AES128 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x4 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 40 

    0x08000013,// 3 SCX   1 

    0x806048a8,// 4 SCX   2 

    0x00004400,// 5 SCX   3 

    0x01724b61,// 6 SCX   4 

    0xe56ec4ed,// 7 SCX   5 

    0x591f1d2f,// 8 SCX   6 

    0x16ea72c9,// 9 SCX   7 

    0x41a3360e,// 10 SCX   8 

    0x5e50088e,// 11 SCX   9 

    0x0f43e3fd,// 12 SCX  10 

    0x26f421c8,// 13 SCX  11 

    0x958191e8,// 14 SCX  12 

    0xee3f2dde,// 15 SCX  13 

    0xf0c56df4,// 16 SCX  14 

    0x60d0ddf4,// 17 SCX  15 

    0x6c1ba9d5,// 18 SCX  16 

    0xd265a4a3,// 19 SCX  17 

    0x24d3dd7d,// 20 SCX  18 

    0x71a9f5fc,// 21 SCX  19 

/// BFD is 3 words. 

/// BFD tot_len        : 620 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 496 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 496 

/// BFD lencrypto      : 32 

/// BFD ofstcrypto     : 460 

/// BFD (ofst+len)cry  : 492 

/// BFD ofstiv         : 112 

/// BFD ofsticv        : 588 

    0x000001f0,// 22 BFD   1 

    0x01cc0020,// 23 BFD   2 

    0x024c0070,// 24 BFD   3 

/// MFM is 16 words. 

/// MFM vldnibs        : 76 

    0x7600be97,// 25 MFM   1 

    0x455e0422,// 26 MFM   2 

    0x44a7cbc6,// 27 MFM   3 

    0x3e26f29d,// 28 MFM   4 

    0x3c717981,// 29 MFM   5 

    0xdbd60254,// 30 MFM   6 

    0xe0471496,// 31 MFM   7 

    0x4d068f54,// 32 MFM   8 

    0x5fd5d83f,// 33 MFM   9 

    0x78ae763b,// 34 MFM  10 

    0x30e9285f,// 35 MFM  11 

    0xf8b1c585,// 36 MFM  12 

    0x34b2435b,// 37 MFM  13 

    0x2d183293,// 38 MFM  14 

    0x7a062381,// 39 MFM  15 

    0xf4000000,// 40 MFM  16 

/// BDA is 156 words. 

/// BDA size     is 620 (0x26c) 

/// BDA id       is 0x1692 

    0x026c1692,// 41 BDA   1 

/// PAY Generic Data size   : 620 byte(s) 

/// PAD Buffer Data Pad size   : 0 byte(s) 

    0x74e9fb19,// 42 PAY   1 

    0x216ce32a,// 43 PAY   2 

    0x59280c87,// 44 PAY   3 

    0xa4d5b50c,// 45 PAY   4 

    0x8602db43,// 46 PAY   5 

    0xf7a5b9b1,// 47 PAY   6 

    0x7268164b,// 48 PAY   7 

    0x8a50203f,// 49 PAY   8 

    0xf75de2d8,// 50 PAY   9 

    0xc8372649,// 51 PAY  10 

    0xdda4c283,// 52 PAY  11 

    0xe27fcf28,// 53 PAY  12 

    0x00dd1a92,// 54 PAY  13 

    0xddf78b0a,// 55 PAY  14 

    0x944ca458,// 56 PAY  15 

    0x3db4cef6,// 57 PAY  16 

    0x1331b786,// 58 PAY  17 

    0xfe966e9c,// 59 PAY  18 

    0xfc09a0b0,// 60 PAY  19 

    0x5c4aa83d,// 61 PAY  20 

    0x6ef679f0,// 62 PAY  21 

    0xff747ed8,// 63 PAY  22 

    0x86d34b09,// 64 PAY  23 

    0x9906ac97,// 65 PAY  24 

    0x9a250401,// 66 PAY  25 

    0x8419ca5f,// 67 PAY  26 

    0x0313be60,// 68 PAY  27 

    0xfa39ed46,// 69 PAY  28 

    0x8654f0d4,// 70 PAY  29 

    0x1ccf1a27,// 71 PAY  30 

    0x5fc545da,// 72 PAY  31 

    0xac701665,// 73 PAY  32 

    0x43429d52,// 74 PAY  33 

    0x7ab93a84,// 75 PAY  34 

    0x1f867a6a,// 76 PAY  35 

    0xce82e971,// 77 PAY  36 

    0xc97049c2,// 78 PAY  37 

    0x308aa1de,// 79 PAY  38 

    0xf2a769f7,// 80 PAY  39 

    0x68e05089,// 81 PAY  40 

    0xb08e1307,// 82 PAY  41 

    0x897d61f0,// 83 PAY  42 

    0xd9058209,// 84 PAY  43 

    0xa8959c48,// 85 PAY  44 

    0xe6dcbef4,// 86 PAY  45 

    0xbd2a4bec,// 87 PAY  46 

    0x882cbf33,// 88 PAY  47 

    0x0711d793,// 89 PAY  48 

    0xa2938634,// 90 PAY  49 

    0x944943d3,// 91 PAY  50 

    0xeb792dec,// 92 PAY  51 

    0x64e6118f,// 93 PAY  52 

    0xd856e76c,// 94 PAY  53 

    0x0f280e62,// 95 PAY  54 

    0xe04de893,// 96 PAY  55 

    0x8b89711d,// 97 PAY  56 

    0x9738743e,// 98 PAY  57 

    0x678ff8d1,// 99 PAY  58 

    0x02c596c3,// 100 PAY  59 

    0x4a82edf5,// 101 PAY  60 

    0x18cbb3d7,// 102 PAY  61 

    0xd0105883,// 103 PAY  62 

    0xf958c837,// 104 PAY  63 

    0x8599b64b,// 105 PAY  64 

    0x3dd9f037,// 106 PAY  65 

    0xa5719c68,// 107 PAY  66 

    0xf29a39bb,// 108 PAY  67 

    0xf1a8ce61,// 109 PAY  68 

    0xcfe5a9b4,// 110 PAY  69 

    0x0cfffac5,// 111 PAY  70 

    0xe5f26910,// 112 PAY  71 

    0xed55c2c1,// 113 PAY  72 

    0x9be8249b,// 114 PAY  73 

    0x45cf8ace,// 115 PAY  74 

    0x98d0b335,// 116 PAY  75 

    0xa39f858b,// 117 PAY  76 

    0x11e32e68,// 118 PAY  77 

    0x0f7a61d9,// 119 PAY  78 

    0x520a00ba,// 120 PAY  79 

    0x51bdf617,// 121 PAY  80 

    0xe73c1ba7,// 122 PAY  81 

    0x40235b22,// 123 PAY  82 

    0xa1eb5183,// 124 PAY  83 

    0xe98b8f56,// 125 PAY  84 

    0x86db59bc,// 126 PAY  85 

    0xc42a688d,// 127 PAY  86 

    0x52e03012,// 128 PAY  87 

    0x599bad64,// 129 PAY  88 

    0x884aca85,// 130 PAY  89 

    0xf6a28373,// 131 PAY  90 

    0x40125293,// 132 PAY  91 

    0x13099cb8,// 133 PAY  92 

    0xe00dc833,// 134 PAY  93 

    0x0a9d4138,// 135 PAY  94 

    0x1a135831,// 136 PAY  95 

    0xe3a22e86,// 137 PAY  96 

    0x779920b7,// 138 PAY  97 

    0xa9157d04,// 139 PAY  98 

    0x66f50141,// 140 PAY  99 

    0xc46b52b3,// 141 PAY 100 

    0xc909c740,// 142 PAY 101 

    0x48ac4a2b,// 143 PAY 102 

    0x06f7fc59,// 144 PAY 103 

    0x663460bf,// 145 PAY 104 

    0xd96d9738,// 146 PAY 105 

    0x25c1b219,// 147 PAY 106 

    0x7a6b4c07,// 148 PAY 107 

    0xed6160ac,// 149 PAY 108 

    0x72048e41,// 150 PAY 109 

    0x4ad589a2,// 151 PAY 110 

    0x9eea4cfc,// 152 PAY 111 

    0x098f459e,// 153 PAY 112 

    0x3445af5d,// 154 PAY 113 

    0x9944043d,// 155 PAY 114 

    0xe07f07e1,// 156 PAY 115 

    0x05c50034,// 157 PAY 116 

    0xc9d5e6bf,// 158 PAY 117 

    0xacafd31d,// 159 PAY 118 

    0x7192b9e1,// 160 PAY 119 

    0x8f453645,// 161 PAY 120 

    0xbf100c19,// 162 PAY 121 

    0xf769e4d5,// 163 PAY 122 

    0xcada2388,// 164 PAY 123 

    0x2a82ba1c,// 165 PAY 124 

    0x2c50b503,// 166 PAY 125 

    0xb13766bb,// 167 PAY 126 

    0x7486521a,// 168 PAY 127 

    0x8884a061,// 169 PAY 128 

    0x1a7d5c70,// 170 PAY 129 

    0x60f5f9e0,// 171 PAY 130 

    0x5076fa5c,// 172 PAY 131 

    0x19ee123f,// 173 PAY 132 

    0xe2ff59f3,// 174 PAY 133 

    0x4ff17e40,// 175 PAY 134 

    0x8c9e2ea7,// 176 PAY 135 

    0xd03290e0,// 177 PAY 136 

    0x959904dc,// 178 PAY 137 

    0x99d8304f,// 179 PAY 138 

    0x681c9fcb,// 180 PAY 139 

    0xe92e8f4f,// 181 PAY 140 

    0x0dd5636d,// 182 PAY 141 

    0xdf99e13e,// 183 PAY 142 

    0x59ff730c,// 184 PAY 143 

    0x666ca776,// 185 PAY 144 

    0xb7009497,// 186 PAY 145 

    0x0b5b0b12,// 187 PAY 146 

    0x376b0fd7,// 188 PAY 147 

    0x8f2775f9,// 189 PAY 148 

    0x755e2df0,// 190 PAY 149 

    0x0f700f2e,// 191 PAY 150 

    0x3889187b,// 192 PAY 151 

    0xbe4bec55,// 193 PAY 152 

    0x653bf2a6,// 194 PAY 153 

    0x5bd02184,// 195 PAY 154 

    0x44fb5f4b,// 196 PAY 155 

/// STA is 1 words. 

/// STA num_pkts       : 230 

/// STA pkt_idx        : 23 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x5b 

    0x005c5be6 // 197 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 80 (0x50) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_sha1_pkt21_tmpl[] = {
    0xb8010050,// 1 CCH   1 

/// ECH cache_idx      : 0x02 

/// ECH pdu_tag        : 0x00 

    0x00020000,// 2 ECH   1 

/// SCX is 19 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound !save_icv insert_icv check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : SHA1 

/// SCX aes_size        : RC4UPDT_AES192 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x2 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 40 

    0x08000013,// 3 SCX   1 

    0x80614811,// 4 SCX   2 

    0x00003200,// 5 SCX   3 

    0xc42ead8d,// 6 SCX   4 

    0x110325c5,// 7 SCX   5 

    0xe8486e02,// 8 SCX   6 

    0x43386d37,// 9 SCX   7 

    0x041a0fa7,// 10 SCX   8 

    0x2df25cf6,// 11 SCX   9 

    0x99eb2d26,// 12 SCX  10 

    0x870706bd,// 13 SCX  11 

    0x6d64b319,// 14 SCX  12 

    0xe891e593,// 15 SCX  13 

    0x8d091ccb,// 16 SCX  14 

    0x367be055,// 17 SCX  15 

    0x472f7716,// 18 SCX  16 

    0x31caad2a,// 19 SCX  17 

    0xbec0ddbf,// 20 SCX  18 

    0x094d4e67,// 21 SCX  19 

/// BFD is 3 words. 

/// BFD tot_len        : 353 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 325 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 325 

/// BFD lencrypto      : 144 

/// BFD ofstcrypto     : 104 

/// BFD (ofst+len)cry  : 248 

/// BFD ofstiv         : 88 

/// BFD ofsticv        : 328 

    0x00000145,// 22 BFD   1 

    0x00680090,// 23 BFD   2 

    0x01480058,// 24 BFD   3 

/// MFM is 1 words. 

/// MFM vldnibs        : 4 

    0x04009a78,// 25 MFM   1 

/// BDA is 90 words. 

/// BDA size     is 353 (0x161) 

/// BDA id       is 0xb7c2 

    0x0161b7c2,// 26 BDA   1 

/// PAY Generic Data size   : 353 byte(s) 

/// PAD Buffer Data Pad size   : 3 byte(s) 

    0xb6591da0,// 27 PAY   1 

    0x922ef262,// 28 PAY   2 

    0x75e9f0ac,// 29 PAY   3 

    0xca6f0a1c,// 30 PAY   4 

    0x4f6ea0d3,// 31 PAY   5 

    0xdee66eda,// 32 PAY   6 

    0x49f9b79e,// 33 PAY   7 

    0xebae19bf,// 34 PAY   8 

    0x8fcb7ec2,// 35 PAY   9 

    0x439d9722,// 36 PAY  10 

    0x37e58514,// 37 PAY  11 

    0x5c73e96d,// 38 PAY  12 

    0x8b98e4c8,// 39 PAY  13 

    0x5e9502eb,// 40 PAY  14 

    0x8511c5e5,// 41 PAY  15 

    0xb2cda944,// 42 PAY  16 

    0x19eb87cc,// 43 PAY  17 

    0xb4735207,// 44 PAY  18 

    0xa40142a3,// 45 PAY  19 

    0xf112ae01,// 46 PAY  20 

    0xbb762c9a,// 47 PAY  21 

    0x20d6ed75,// 48 PAY  22 

    0x6fe95012,// 49 PAY  23 

    0xd7c788ab,// 50 PAY  24 

    0x2f4cd4ca,// 51 PAY  25 

    0x070796f5,// 52 PAY  26 

    0x15fc2dba,// 53 PAY  27 

    0x1bb54bca,// 54 PAY  28 

    0xd1d93912,// 55 PAY  29 

    0xd12d25be,// 56 PAY  30 

    0xc696a3c1,// 57 PAY  31 

    0xa8afdc1e,// 58 PAY  32 

    0xb959bdf3,// 59 PAY  33 

    0x8e0a9c2e,// 60 PAY  34 

    0x102025ce,// 61 PAY  35 

    0xbcac79e2,// 62 PAY  36 

    0x3d4e6468,// 63 PAY  37 

    0x3adfae21,// 64 PAY  38 

    0xd5bb15a7,// 65 PAY  39 

    0x10f2ace0,// 66 PAY  40 

    0x2d825e62,// 67 PAY  41 

    0xd4e0c608,// 68 PAY  42 

    0xb94ee4ef,// 69 PAY  43 

    0xbc972e82,// 70 PAY  44 

    0x35bf596a,// 71 PAY  45 

    0x151c497e,// 72 PAY  46 

    0x7339c461,// 73 PAY  47 

    0x253333f8,// 74 PAY  48 

    0xf86fc65d,// 75 PAY  49 

    0x57ff3f4f,// 76 PAY  50 

    0xe05493c3,// 77 PAY  51 

    0xa981b7ff,// 78 PAY  52 

    0xbdab2a9e,// 79 PAY  53 

    0x46a934fe,// 80 PAY  54 

    0xc6d2f393,// 81 PAY  55 

    0x995ad86f,// 82 PAY  56 

    0xe7198a2e,// 83 PAY  57 

    0x3015e4b4,// 84 PAY  58 

    0xf98f2049,// 85 PAY  59 

    0x79ce3413,// 86 PAY  60 

    0x719dd30d,// 87 PAY  61 

    0x4426b5ad,// 88 PAY  62 

    0x9d192e92,// 89 PAY  63 

    0xcae0d908,// 90 PAY  64 

    0xddca430a,// 91 PAY  65 

    0xc730d333,// 92 PAY  66 

    0x24448528,// 93 PAY  67 

    0x2262f405,// 94 PAY  68 

    0x1d723e08,// 95 PAY  69 

    0x72c4faf0,// 96 PAY  70 

    0xd49f6772,// 97 PAY  71 

    0x6062eca4,// 98 PAY  72 

    0x82a847ae,// 99 PAY  73 

    0xf03ad882,// 100 PAY  74 

    0xa59e5f5f,// 101 PAY  75 

    0x9c8b95f3,// 102 PAY  76 

    0xd1a1fce8,// 103 PAY  77 

    0x08a8934f,// 104 PAY  78 

    0x6e0ddea2,// 105 PAY  79 

    0x230065f5,// 106 PAY  80 

    0xf8d8411f,// 107 PAY  81 

    0xbe28d514,// 108 PAY  82 

    0x0c63deea,// 109 PAY  83 

    0x86700835,// 110 PAY  84 

    0x73dc6712,// 111 PAY  85 

    0x531b2e1a,// 112 PAY  86 

    0xb091e342,// 113 PAY  87 

    0xe03aba8c,// 114 PAY  88 

    0x37000000,// 115 PAY  89 

/// STA is 1 words. 

/// STA num_pkts       : 133 

/// STA pkt_idx        : 59 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x14 

    0x00ec1485 // 116 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 80 (0x50) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_sha1_pkt22_tmpl[] = {
    0xb8010050,// 1 CCH   1 

/// ECH cache_idx      : 0x05 

/// ECH pdu_tag        : 0x00 

    0x00050000,// 2 ECH   1 

/// SCX is 19 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound !save_icv insert_icv !check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : SHA1 

/// SCX aes_size        : NORMAL_RC4INIT_AES128 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x1 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 40 

    0x00000013,// 3 SCX   1 

    0x806048e0,// 4 SCX   2 

    0x00002100,// 5 SCX   3 

    0x6d5a45ec,// 6 SCX   4 

    0x5fa2a5af,// 7 SCX   5 

    0x314d2249,// 8 SCX   6 

    0xd7876329,// 9 SCX   7 

    0x8fd8d8dc,// 10 SCX   8 

    0x7a5b27f1,// 11 SCX   9 

    0x780c70bf,// 12 SCX  10 

    0xbfd845de,// 13 SCX  11 

    0x8e14724f,// 14 SCX  12 

    0xc48fa869,// 15 SCX  13 

    0x05b43ece,// 16 SCX  14 

    0x31aecf29,// 17 SCX  15 

    0xce5aff05,// 18 SCX  16 

    0xf7b5d5f4,// 19 SCX  17 

    0x86512881,// 20 SCX  18 

    0x0fb0d28c,// 21 SCX  19 

/// BFD is 3 words. 

/// BFD tot_len        : 192 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 38 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 38 

/// BFD lencrypto      : 8 

/// BFD ofstcrypto     : 24 

/// BFD (ofst+len)cry  : 32 

/// BFD ofstiv         : 12 

/// BFD ofsticv        : 48 

    0x00000026,// 22 BFD   1 

    0x00180008,// 23 BFD   2 

    0x0030000c,// 24 BFD   3 

/// MFM is 2 words. 

/// MFM vldnibs        : 7 

    0x07003580,// 25 MFM   1 

    0x32200000,// 26 MFM   2 

/// BDA is 49 words. 

/// BDA size     is 192 (0xc0) 

/// BDA id       is 0x393e 

    0x00c0393e,// 27 BDA   1 

/// PAY Generic Data size   : 192 byte(s) 

/// PAD Buffer Data Pad size   : 0 byte(s) 

    0x418c52d4,// 28 PAY   1 

    0xd60898d1,// 29 PAY   2 

    0x8182a67c,// 30 PAY   3 

    0x6c78a494,// 31 PAY   4 

    0x65bf36ff,// 32 PAY   5 

    0x48aefdfd,// 33 PAY   6 

    0x1c2d7680,// 34 PAY   7 

    0x32434a16,// 35 PAY   8 

    0xbcff692e,// 36 PAY   9 

    0x268788ab,// 37 PAY  10 

    0xeed82f2f,// 38 PAY  11 

    0x1a551e4d,// 39 PAY  12 

    0x2b9e5d64,// 40 PAY  13 

    0xd0d11b3d,// 41 PAY  14 

    0xc5c57d96,// 42 PAY  15 

    0x080e3c74,// 43 PAY  16 

    0xcbc46fbb,// 44 PAY  17 

    0x485385e8,// 45 PAY  18 

    0x1a8f3bd2,// 46 PAY  19 

    0x2fe9f5ce,// 47 PAY  20 

    0xaa7cbf16,// 48 PAY  21 

    0x32efcc51,// 49 PAY  22 

    0x864b274b,// 50 PAY  23 

    0xbb4b808c,// 51 PAY  24 

    0xee77e78c,// 52 PAY  25 

    0xc016f331,// 53 PAY  26 

    0xccacaeac,// 54 PAY  27 

    0x38845d1e,// 55 PAY  28 

    0x50e608a7,// 56 PAY  29 

    0x5daef07b,// 57 PAY  30 

    0xc79b7880,// 58 PAY  31 

    0x83601c74,// 59 PAY  32 

    0xb8394a90,// 60 PAY  33 

    0xe440ed5a,// 61 PAY  34 

    0x8772bc53,// 62 PAY  35 

    0x6dbf306a,// 63 PAY  36 

    0xa08a3160,// 64 PAY  37 

    0x0f5bc0bd,// 65 PAY  38 

    0x69882ecf,// 66 PAY  39 

    0x8bc8930a,// 67 PAY  40 

    0x62e73e7c,// 68 PAY  41 

    0x51462a73,// 69 PAY  42 

    0xab0cf552,// 70 PAY  43 

    0x2a6ecfb9,// 71 PAY  44 

    0x12f556be,// 72 PAY  45 

    0xac222cb3,// 73 PAY  46 

    0x69ff1604,// 74 PAY  47 

    0xf1a7e87b,// 75 PAY  48 

/// STA is 1 words. 

/// STA num_pkts       : 76 

/// STA pkt_idx        : 88 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x80 

    0x0160804c // 76 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 80 (0x50) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_sha1_pkt23_tmpl[] = {
    0xb8010050,// 1 CCH   1 

/// ECH cache_idx      : 0x06 

/// ECH pdu_tag        : 0x00 

    0x00060000,// 2 ECH   1 

/// SCX is 19 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound save_icv insert_icv check_icv !sctx_iv  

/// SCX exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : SHA1 

/// SCX aes_size        : AES256 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x4 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 40 

    0x08000013,// 3 SCX   1 

    0x80664813,// 4 SCX   2 

    0x00007442,// 5 SCX   3 

    0xfa41ade5,// 6 SCX   4 

    0x3cb26810,// 7 SCX   5 

    0x57040bf5,// 8 SCX   6 

    0xd9d40c3c,// 9 SCX   7 

    0x73f33a3f,// 10 SCX   8 

    0x7a185994,// 11 SCX   9 

    0x5a01e625,// 12 SCX  10 

    0xd74fa3f1,// 13 SCX  11 

    0x164af3ea,// 14 SCX  12 

    0xc5db3cbe,// 15 SCX  13 

    0xe6c07138,// 16 SCX  14 

    0x44385137,// 17 SCX  15 

    0xf938bfb7,// 18 SCX  16 

    0xe2732213,// 19 SCX  17 

    0x4e6bc2f9,// 20 SCX  18 

    0x7996f29e,// 21 SCX  19 

/// BFD is 3 words. 

/// BFD tot_len        : 303 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 243 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 243 

/// BFD lencrypto      : 16 

/// BFD ofstcrypto     : 224 

/// BFD (ofst+len)cry  : 240 

/// BFD ofstiv         : 120 

/// BFD ofsticv        : 276 

    0x000000f3,// 22 BFD   1 

    0x00e00010,// 23 BFD   2 

    0x01140078,// 24 BFD   3 

/// MFM is 6 words. 

/// MFM vldnibs        : 2b 

    0x2b006307,// 25 MFM   1 

    0x16abfbfc,// 26 MFM   2 

    0x6b53f60a,// 27 MFM   3 

    0xd70a1c5d,// 28 MFM   4 

    0xed233f89,// 29 MFM   5 

    0xbef41000,// 30 MFM   6 

/// BDA is 77 words. 

/// BDA size     is 303 (0x12f) 

/// BDA id       is 0x6a15 

    0x012f6a15,// 31 BDA   1 

/// PAY Generic Data size   : 303 byte(s) 

/// PAD Buffer Data Pad size   : 1 byte(s) 

    0x3220ea17,// 32 PAY   1 

    0xc62717e4,// 33 PAY   2 

    0x4ff878ef,// 34 PAY   3 

    0x1275b11e,// 35 PAY   4 

    0x5025efaa,// 36 PAY   5 

    0xa37cf9ea,// 37 PAY   6 

    0x90ec4c6b,// 38 PAY   7 

    0x9632c572,// 39 PAY   8 

    0x4688546d,// 40 PAY   9 

    0xb111a0af,// 41 PAY  10 

    0xb09e15ad,// 42 PAY  11 

    0xcc38780d,// 43 PAY  12 

    0xa3055a3c,// 44 PAY  13 

    0xa71a0ee8,// 45 PAY  14 

    0x10b71338,// 46 PAY  15 

    0x6a26bb3c,// 47 PAY  16 

    0x0ece6c90,// 48 PAY  17 

    0x91a6f263,// 49 PAY  18 

    0x6138212f,// 50 PAY  19 

    0xe91aa4fd,// 51 PAY  20 

    0xf663fc5e,// 52 PAY  21 

    0x5f1d545d,// 53 PAY  22 

    0x2c06d337,// 54 PAY  23 

    0xa22f2e38,// 55 PAY  24 

    0x4b1e101a,// 56 PAY  25 

    0xa229aaf6,// 57 PAY  26 

    0x29065055,// 58 PAY  27 

    0x67fe1cab,// 59 PAY  28 

    0x1e73b8a8,// 60 PAY  29 

    0x83c3b379,// 61 PAY  30 

    0xccc88bbc,// 62 PAY  31 

    0x568c14a5,// 63 PAY  32 

    0x92b11151,// 64 PAY  33 

    0xc4f5ec86,// 65 PAY  34 

    0xd0a4e31a,// 66 PAY  35 

    0x2eaae476,// 67 PAY  36 

    0x9455f01d,// 68 PAY  37 

    0x083aa7f3,// 69 PAY  38 

    0xe069e128,// 70 PAY  39 

    0x4f5ea006,// 71 PAY  40 

    0x1f864fcf,// 72 PAY  41 

    0x60dd4069,// 73 PAY  42 

    0x6bc771ce,// 74 PAY  43 

    0x182c8a14,// 75 PAY  44 

    0xd1dacb79,// 76 PAY  45 

    0xb2c6f969,// 77 PAY  46 

    0x5bbcda09,// 78 PAY  47 

    0x2272382f,// 79 PAY  48 

    0x6db758a8,// 80 PAY  49 

    0x3c6d6141,// 81 PAY  50 

    0xf5eb9c13,// 82 PAY  51 

    0x071824cd,// 83 PAY  52 

    0xbae54ebf,// 84 PAY  53 

    0x7281b5e2,// 85 PAY  54 

    0x274792ed,// 86 PAY  55 

    0xc4b5c19a,// 87 PAY  56 

    0x426ee419,// 88 PAY  57 

    0xdbf74f90,// 89 PAY  58 

    0x25f5ec55,// 90 PAY  59 

    0x4bcaea5e,// 91 PAY  60 

    0xa90b0e84,// 92 PAY  61 

    0x1e51db66,// 93 PAY  62 

    0x476adf27,// 94 PAY  63 

    0x86df435f,// 95 PAY  64 

    0x719c2938,// 96 PAY  65 

    0xf58f4d66,// 97 PAY  66 

    0x03c22949,// 98 PAY  67 

    0x3f2b6ec3,// 99 PAY  68 

    0x258ab9ab,// 100 PAY  69 

    0xf0ecc059,// 101 PAY  70 

    0x2cb8b312,// 102 PAY  71 

    0xd3a07c32,// 103 PAY  72 

    0x84708cbd,// 104 PAY  73 

    0xcb0a9b73,// 105 PAY  74 

    0xbbd157ce,// 106 PAY  75 

    0xee80c600,// 107 PAY  76 

/// STA is 1 words. 

/// STA num_pkts       : 23 

/// STA pkt_idx        : 246 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xd8 

    0x03d9d817 // 108 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 80 (0x50) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_sha1_pkt24_tmpl[] = {
    0xb8010050,// 1 CCH   1 

/// ECH cache_idx      : 0x0f 

/// ECH pdu_tag        : 0x00 

    0x000f0000,// 2 ECH   1 

/// SCX is 19 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound !save_icv insert_icv check_icv !sctx_iv  

/// SCX exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : SHA1 

/// SCX aes_size        : NORMAL_RC4INIT_AES128 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x2 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 40 

    0x00000013,// 3 SCX   1 

    0x8064487f,// 4 SCX   2 

    0x00003242,// 5 SCX   3 

    0xf96ee650,// 6 SCX   4 

    0x17a5bc0c,// 7 SCX   5 

    0x8951a09b,// 8 SCX   6 

    0x5ba07c7d,// 9 SCX   7 

    0x20dfab72,// 10 SCX   8 

    0x9544d9a2,// 11 SCX   9 

    0xc93d4646,// 12 SCX  10 

    0x1a0a9196,// 13 SCX  11 

    0x5bc7b0f9,// 14 SCX  12 

    0x36a76641,// 15 SCX  13 

    0xd292107c,// 16 SCX  14 

    0x0429ed27,// 17 SCX  15 

    0xb7da6edf,// 18 SCX  16 

    0xbe953436,// 19 SCX  17 

    0x291b7201,// 20 SCX  18 

    0xd009c5c5,// 21 SCX  19 

/// BFD is 3 words. 

/// BFD tot_len        : 391 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 126 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 126 

/// BFD lencrypto      : 32 

/// BFD ofstcrypto     : 92 

/// BFD (ofst+len)cry  : 124 

/// BFD ofstiv         : 40 

/// BFD ofsticv        : 132 

    0x0000007e,// 22 BFD   1 

    0x005c0020,// 23 BFD   2 

    0x00840028,// 24 BFD   3 

/// MFM is 3 words. 

/// MFM vldnibs        : 10 

    0x1000213e,// 25 MFM   1 

    0x4cc7fe11,// 26 MFM   2 

    0xfc730000,// 27 MFM   3 

/// BDA is 99 words. 

/// BDA size     is 391 (0x187) 

/// BDA id       is 0x2a9b 

    0x01872a9b,// 28 BDA   1 

/// PAY Generic Data size   : 391 byte(s) 

/// PAD Buffer Data Pad size   : 1 byte(s) 

    0xf69b4fbf,// 29 PAY   1 

    0xb6688db8,// 30 PAY   2 

    0x14f73122,// 31 PAY   3 

    0xcce95ba7,// 32 PAY   4 

    0xd9a321b9,// 33 PAY   5 

    0x9f877cf3,// 34 PAY   6 

    0xf8edbee8,// 35 PAY   7 

    0x228b5303,// 36 PAY   8 

    0xaa81c0fe,// 37 PAY   9 

    0xb368922d,// 38 PAY  10 

    0xd8a4bd86,// 39 PAY  11 

    0xe794d5b7,// 40 PAY  12 

    0xb8a813bc,// 41 PAY  13 

    0xef1780b5,// 42 PAY  14 

    0xe900886a,// 43 PAY  15 

    0x212d31b5,// 44 PAY  16 

    0x1011eb65,// 45 PAY  17 

    0x46a1debd,// 46 PAY  18 

    0x9cc20f91,// 47 PAY  19 

    0x759c5ea9,// 48 PAY  20 

    0xe83ccddd,// 49 PAY  21 

    0xc52915cc,// 50 PAY  22 

    0x9308ec13,// 51 PAY  23 

    0xdd17e11c,// 52 PAY  24 

    0x88633a42,// 53 PAY  25 

    0xf7ab1cc6,// 54 PAY  26 

    0xd8a56ac6,// 55 PAY  27 

    0x1fac6e4b,// 56 PAY  28 

    0x2b00e17d,// 57 PAY  29 

    0x0eca8257,// 58 PAY  30 

    0x9ac78a1f,// 59 PAY  31 

    0x51a3fd28,// 60 PAY  32 

    0x773b5f28,// 61 PAY  33 

    0xbfa16fb5,// 62 PAY  34 

    0x7de8e794,// 63 PAY  35 

    0xf5641777,// 64 PAY  36 

    0x6950d00b,// 65 PAY  37 

    0x9849d94c,// 66 PAY  38 

    0x3b7f963a,// 67 PAY  39 

    0x3224a363,// 68 PAY  40 

    0xc0f48359,// 69 PAY  41 

    0x80b4bfdb,// 70 PAY  42 

    0x0a6e2271,// 71 PAY  43 

    0xfbab37ab,// 72 PAY  44 

    0x8c802f4a,// 73 PAY  45 

    0x11b79297,// 74 PAY  46 

    0x57f11283,// 75 PAY  47 

    0x927c9ec7,// 76 PAY  48 

    0x9676c564,// 77 PAY  49 

    0x2db76391,// 78 PAY  50 

    0x85518125,// 79 PAY  51 

    0xdf92d815,// 80 PAY  52 

    0xeed87add,// 81 PAY  53 

    0x9ee247aa,// 82 PAY  54 

    0x6194ac5d,// 83 PAY  55 

    0x0be4d40d,// 84 PAY  56 

    0x3f53e24a,// 85 PAY  57 

    0x569e418e,// 86 PAY  58 

    0x493c0ab6,// 87 PAY  59 

    0xf72cdf5a,// 88 PAY  60 

    0x11c8e4e0,// 89 PAY  61 

    0xab53388a,// 90 PAY  62 

    0x42782ccf,// 91 PAY  63 

    0x769938ad,// 92 PAY  64 

    0x4102fcdd,// 93 PAY  65 

    0x290a874f,// 94 PAY  66 

    0x6d467ab9,// 95 PAY  67 

    0x4b28ced0,// 96 PAY  68 

    0x73f36f27,// 97 PAY  69 

    0xb6f4a54a,// 98 PAY  70 

    0x17ae2873,// 99 PAY  71 

    0x50ed9195,// 100 PAY  72 

    0xa2a92a23,// 101 PAY  73 

    0x54fb0c56,// 102 PAY  74 

    0xe25caed2,// 103 PAY  75 

    0x9bc7cd02,// 104 PAY  76 

    0x6b8c3eeb,// 105 PAY  77 

    0x79110be1,// 106 PAY  78 

    0x222029fa,// 107 PAY  79 

    0x3f47cce2,// 108 PAY  80 

    0x66c4e230,// 109 PAY  81 

    0x017205be,// 110 PAY  82 

    0xc1142bcc,// 111 PAY  83 

    0x387594d5,// 112 PAY  84 

    0xf33b09d0,// 113 PAY  85 

    0x14439f2a,// 114 PAY  86 

    0x561cffc4,// 115 PAY  87 

    0x52ed032a,// 116 PAY  88 

    0x82cb44d3,// 117 PAY  89 

    0xba4342fc,// 118 PAY  90 

    0x8b33c303,// 119 PAY  91 

    0x66a0fb09,// 120 PAY  92 

    0xf0ed431d,// 121 PAY  93 

    0x8963a3dd,// 122 PAY  94 

    0xb62310e8,// 123 PAY  95 

    0xb99d53eb,// 124 PAY  96 

    0x6e904060,// 125 PAY  97 

    0x314c6b00,// 126 PAY  98 

/// STA is 1 words. 

/// STA num_pkts       : 151 

/// STA pkt_idx        : 156 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x3c 

    0x02703c97 // 127 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 80 (0x50) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_sha1_pkt25_tmpl[] = {
    0xb8010050,// 1 CCH   1 

/// ECH cache_idx      : 0x07 

/// ECH pdu_tag        : 0x00 

    0x00070000,// 2 ECH   1 

/// SCX is 19 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound save_icv !insert_icv !check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : SHA1 

/// SCX aes_size        : NORMAL_RC4INIT_AES128 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x4 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 40 

    0x08000013,// 3 SCX   1 

    0x80604846,// 4 SCX   2 

    0x00004400,// 5 SCX   3 

    0xb14f48ac,// 6 SCX   4 

    0x16453001,// 7 SCX   5 

    0x04e83d2d,// 8 SCX   6 

    0x60a4c345,// 9 SCX   7 

    0x755211c8,// 10 SCX   8 

    0xd42ec6cb,// 11 SCX   9 

    0xbed1b9d1,// 12 SCX  10 

    0x668e2582,// 13 SCX  11 

    0x4765a242,// 14 SCX  12 

    0xca4286f0,// 15 SCX  13 

    0xc9b352f3,// 16 SCX  14 

    0xf9349f5b,// 17 SCX  15 

    0x4adb349c,// 18 SCX  16 

    0x1da351c2,// 19 SCX  17 

    0x8eff7111,// 20 SCX  18 

    0xcb4b1008,// 21 SCX  19 

/// BFD is 3 words. 

/// BFD tot_len        : 604 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 369 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 369 

/// BFD lencrypto      : 224 

/// BFD ofstcrypto     : 40 

/// BFD (ofst+len)cry  : 264 

/// BFD ofstiv         : 24 

/// BFD ofsticv        : 448 

    0x00000171,// 22 BFD   1 

    0x002800e0,// 23 BFD   2 

    0x01c00018,// 24 BFD   3 

/// MFM is 10 words. 

/// MFM vldnibs        : 45 

    0x4500efea,// 25 MFM   1 

    0xb109e467,// 26 MFM   2 

    0x343edc51,// 27 MFM   3 

    0x38870c35,// 28 MFM   4 

    0xf00c538d,// 29 MFM   5 

    0x95a879ed,// 30 MFM   6 

    0x2de3a96a,// 31 MFM   7 

    0xd72b80d6,// 32 MFM   8 

    0x4bdb429c,// 33 MFM   9 

    0x70000000,// 34 MFM  10 

/// BDA is 152 words. 

/// BDA size     is 604 (0x25c) 

/// BDA id       is 0xdca0 

    0x025cdca0,// 35 BDA   1 

/// PAY Generic Data size   : 604 byte(s) 

/// PAD Buffer Data Pad size   : 0 byte(s) 

    0x765a2763,// 36 PAY   1 

    0xcb98b105,// 37 PAY   2 

    0x11c77263,// 38 PAY   3 

    0xc9719261,// 39 PAY   4 

    0x84f4e884,// 40 PAY   5 

    0x2a5498e7,// 41 PAY   6 

    0xd032c78d,// 42 PAY   7 

    0x6ea3728a,// 43 PAY   8 

    0xbd4cda88,// 44 PAY   9 

    0xb3016017,// 45 PAY  10 

    0x2cae85c0,// 46 PAY  11 

    0x70b07bab,// 47 PAY  12 

    0xf0acf167,// 48 PAY  13 

    0xa9066357,// 49 PAY  14 

    0xe0eefedd,// 50 PAY  15 

    0x0de18055,// 51 PAY  16 

    0x647d78ab,// 52 PAY  17 

    0x6b234b03,// 53 PAY  18 

    0xdbdbb1c6,// 54 PAY  19 

    0x5e1dea7f,// 55 PAY  20 

    0xbc2a6405,// 56 PAY  21 

    0x26e74c80,// 57 PAY  22 

    0xac2bc047,// 58 PAY  23 

    0xa96fb405,// 59 PAY  24 

    0xc5d5a734,// 60 PAY  25 

    0x748d59ed,// 61 PAY  26 

    0x3f0f2f59,// 62 PAY  27 

    0x21574e9f,// 63 PAY  28 

    0xf88eacc4,// 64 PAY  29 

    0x666da979,// 65 PAY  30 

    0x90912436,// 66 PAY  31 

    0x42b35186,// 67 PAY  32 

    0xa5baab85,// 68 PAY  33 

    0xf129a281,// 69 PAY  34 

    0xe1048417,// 70 PAY  35 

    0x14fa86ac,// 71 PAY  36 

    0x05cfbefc,// 72 PAY  37 

    0x1be146a0,// 73 PAY  38 

    0xf90b6bd6,// 74 PAY  39 

    0xf5851960,// 75 PAY  40 

    0xa1ae1b3e,// 76 PAY  41 

    0xc9fa8b48,// 77 PAY  42 

    0xfe8348db,// 78 PAY  43 

    0x5de54bcb,// 79 PAY  44 

    0xf30b2816,// 80 PAY  45 

    0x3c79116a,// 81 PAY  46 

    0x55bd6835,// 82 PAY  47 

    0xbe48d894,// 83 PAY  48 

    0xadfcc04a,// 84 PAY  49 

    0xfcfdbc4c,// 85 PAY  50 

    0xec3dfe12,// 86 PAY  51 

    0x79a8461e,// 87 PAY  52 

    0x3b47fad6,// 88 PAY  53 

    0xd1cb46f6,// 89 PAY  54 

    0x981194ee,// 90 PAY  55 

    0xdb49c6d0,// 91 PAY  56 

    0xef11f56b,// 92 PAY  57 

    0x66450a1f,// 93 PAY  58 

    0x47f0d51c,// 94 PAY  59 

    0x17621770,// 95 PAY  60 

    0x1bd4b8f0,// 96 PAY  61 

    0x86172afc,// 97 PAY  62 

    0x141f01de,// 98 PAY  63 

    0xf5df6990,// 99 PAY  64 

    0x5b6dc2af,// 100 PAY  65 

    0x5fe31e3c,// 101 PAY  66 

    0xff4c8ce3,// 102 PAY  67 

    0xf5df04c0,// 103 PAY  68 

    0x87673677,// 104 PAY  69 

    0xa8c7f57f,// 105 PAY  70 

    0x39b4fc49,// 106 PAY  71 

    0x00161428,// 107 PAY  72 

    0x07039c71,// 108 PAY  73 

    0xc744839c,// 109 PAY  74 

    0x2dd59421,// 110 PAY  75 

    0x4bc00bfd,// 111 PAY  76 

    0xc14134f6,// 112 PAY  77 

    0x4a1f7048,// 113 PAY  78 

    0xe85a3c99,// 114 PAY  79 

    0xf2fc8d6d,// 115 PAY  80 

    0xea05f237,// 116 PAY  81 

    0x719e9572,// 117 PAY  82 

    0xb3c7db66,// 118 PAY  83 

    0x2fbfe980,// 119 PAY  84 

    0x42a44acd,// 120 PAY  85 

    0x94a89e98,// 121 PAY  86 

    0xf2b97b76,// 122 PAY  87 

    0x2bcdad43,// 123 PAY  88 

    0xe7426bc3,// 124 PAY  89 

    0x772e2bf2,// 125 PAY  90 

    0x0e12d841,// 126 PAY  91 

    0xa4690f12,// 127 PAY  92 

    0xc13d83b1,// 128 PAY  93 

    0xb096ef02,// 129 PAY  94 

    0xfb0484a4,// 130 PAY  95 

    0xe8782b14,// 131 PAY  96 

    0x118614a3,// 132 PAY  97 

    0xdd2f89ad,// 133 PAY  98 

    0x8eba930e,// 134 PAY  99 

    0x961a92c5,// 135 PAY 100 

    0x4f42578e,// 136 PAY 101 

    0xe017005f,// 137 PAY 102 

    0x3628699a,// 138 PAY 103 

    0xd368c698,// 139 PAY 104 

    0x3a788571,// 140 PAY 105 

    0xdca892d9,// 141 PAY 106 

    0x828c97ea,// 142 PAY 107 

    0xad75441f,// 143 PAY 108 

    0x454afe68,// 144 PAY 109 

    0xe8062bc3,// 145 PAY 110 

    0x7eb9044d,// 146 PAY 111 

    0x274ef03f,// 147 PAY 112 

    0xd9cfa326,// 148 PAY 113 

    0xcb687c89,// 149 PAY 114 

    0xc38574dd,// 150 PAY 115 

    0x34986b99,// 151 PAY 116 

    0x88df44da,// 152 PAY 117 

    0x4ceb72ff,// 153 PAY 118 

    0x0f844d6f,// 154 PAY 119 

    0xbb66b6e2,// 155 PAY 120 

    0xd5503bb1,// 156 PAY 121 

    0xf6c5319a,// 157 PAY 122 

    0x497ea22b,// 158 PAY 123 

    0x1e3b796e,// 159 PAY 124 

    0x6a2178f5,// 160 PAY 125 

    0xe7d8f259,// 161 PAY 126 

    0x0dde3f60,// 162 PAY 127 

    0x5c3012ba,// 163 PAY 128 

    0x37e8541d,// 164 PAY 129 

    0x8dea4678,// 165 PAY 130 

    0x12ebbb46,// 166 PAY 131 

    0xd039803c,// 167 PAY 132 

    0x48a51c46,// 168 PAY 133 

    0x752e4697,// 169 PAY 134 

    0x52ecde21,// 170 PAY 135 

    0x673ee5d3,// 171 PAY 136 

    0xd8208bca,// 172 PAY 137 

    0x935752a3,// 173 PAY 138 

    0xd9fbc3d9,// 174 PAY 139 

    0x6503f912,// 175 PAY 140 

    0x092a9d4b,// 176 PAY 141 

    0x676331c9,// 177 PAY 142 

    0x138e1c0a,// 178 PAY 143 

    0xbf680b03,// 179 PAY 144 

    0xcfb58f5c,// 180 PAY 145 

    0xaa489033,// 181 PAY 146 

    0x01d56012,// 182 PAY 147 

    0x5dd16939,// 183 PAY 148 

    0xa28495b6,// 184 PAY 149 

    0x4862083b,// 185 PAY 150 

    0x13fe2db5,// 186 PAY 151 

/// STA is 1 words. 

/// STA num_pkts       : 145 

/// STA pkt_idx        : 230 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x4d 

    0x03994d91 // 187 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 80 (0x50) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_sha1_pkt26_tmpl[] = {
    0xb8010050,// 1 CCH   1 

/// ECH cache_idx      : 0x00 

/// ECH pdu_tag        : 0x00 

    0x00000000,// 2 ECH   1 

/// SCX is 19 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound !save_icv !insert_icv check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : SHA1 

/// SCX aes_size        : RC4UPDT_AES192 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x5 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 40 

    0x08000013,// 3 SCX   1 

    0x8061480c,// 4 SCX   2 

    0x00001500,// 5 SCX   3 

    0x07c4248e,// 6 SCX   4 

    0xabacf235,// 7 SCX   5 

    0xf37f50c0,// 8 SCX   6 

    0xb3d5e538,// 9 SCX   7 

    0xbd79e6a2,// 10 SCX   8 

    0x5f8216ec,// 11 SCX   9 

    0x9804c1dc,// 12 SCX  10 

    0xeeb8b8fc,// 13 SCX  11 

    0x389fa894,// 14 SCX  12 

    0xcac2e3a6,// 15 SCX  13 

    0x2b5bdc6c,// 16 SCX  14 

    0x58c3e3e7,// 17 SCX  15 

    0xd8af0d02,// 18 SCX  16 

    0x5131b7f5,// 19 SCX  17 

    0x9655671e,// 20 SCX  18 

    0x3cf3df34,// 21 SCX  19 

/// BFD is 3 words. 

/// BFD tot_len        : 1175 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 729 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 729 

/// BFD lencrypto      : 112 

/// BFD ofstcrypto     : 160 

/// BFD (ofst+len)cry  : 272 

/// BFD ofstiv         : 116 

/// BFD ofsticv        : 948 

    0x000002d9,// 22 BFD   1 

    0x00a00070,// 23 BFD   2 

    0x03b40074,// 24 BFD   3 

/// MFM is 14 words. 

/// MFM vldnibs        : 67 

    0x670039ec,// 25 MFM   1 

    0x31f21406,// 26 MFM   2 

    0x63b5d948,// 27 MFM   3 

    0xfe12c277,// 28 MFM   4 

    0x1f6a4164,// 29 MFM   5 

    0x97530d81,// 30 MFM   6 

    0xb34c3f7c,// 31 MFM   7 

    0x9f7036d2,// 32 MFM   8 

    0xc058332e,// 33 MFM   9 

    0xd8e1cc05,// 34 MFM  10 

    0x377e38a9,// 35 MFM  11 

    0xb90dfceb,// 36 MFM  12 

    0x57b3fcdd,// 37 MFM  13 

    0xb7c00000,// 38 MFM  14 

/// BDA is 295 words. 

/// BDA size     is 1175 (0x497) 

/// BDA id       is 0x9ed4 

    0x04979ed4,// 39 BDA   1 

/// PAY Generic Data size   : 1175 byte(s) 

/// PAD Buffer Data Pad size   : 1 byte(s) 

    0x7cb399fd,// 40 PAY   1 

    0xdd277b25,// 41 PAY   2 

    0xd4fedf62,// 42 PAY   3 

    0x4dac0c91,// 43 PAY   4 

    0x5eb1bec0,// 44 PAY   5 

    0x76c38205,// 45 PAY   6 

    0x50b03b5a,// 46 PAY   7 

    0x879d3a22,// 47 PAY   8 

    0xf55619d2,// 48 PAY   9 

    0x2312b2f4,// 49 PAY  10 

    0x8b773bd2,// 50 PAY  11 

    0xabc23b37,// 51 PAY  12 

    0x7597fd38,// 52 PAY  13 

    0x303fcaaf,// 53 PAY  14 

    0xd3e39c74,// 54 PAY  15 

    0x5a973d9b,// 55 PAY  16 

    0xb8333ebe,// 56 PAY  17 

    0x0e5045dd,// 57 PAY  18 

    0x9ce92bce,// 58 PAY  19 

    0x43b78583,// 59 PAY  20 

    0x2073b36c,// 60 PAY  21 

    0x1a903987,// 61 PAY  22 

    0x178f52ba,// 62 PAY  23 

    0x194ba172,// 63 PAY  24 

    0xe49d419a,// 64 PAY  25 

    0x5ec6dae5,// 65 PAY  26 

    0xac24fcf1,// 66 PAY  27 

    0xd4084c25,// 67 PAY  28 

    0xe426b64d,// 68 PAY  29 

    0xe8bd03c6,// 69 PAY  30 

    0x926d1a6d,// 70 PAY  31 

    0x1e705504,// 71 PAY  32 

    0xaebaf796,// 72 PAY  33 

    0x033e66af,// 73 PAY  34 

    0xf93d5d41,// 74 PAY  35 

    0x75f0a1ca,// 75 PAY  36 

    0x223e8d31,// 76 PAY  37 

    0x3219aba0,// 77 PAY  38 

    0x4f3bc1f7,// 78 PAY  39 

    0x3fb9ddf7,// 79 PAY  40 

    0x54f8a7ba,// 80 PAY  41 

    0xd4a247da,// 81 PAY  42 

    0x1772f3ce,// 82 PAY  43 

    0xb89e6b08,// 83 PAY  44 

    0x62d60fe6,// 84 PAY  45 

    0x2be9230f,// 85 PAY  46 

    0x1321a916,// 86 PAY  47 

    0xb2f46cf5,// 87 PAY  48 

    0xa4ba074a,// 88 PAY  49 

    0x0a0b26ae,// 89 PAY  50 

    0x0d7a41f0,// 90 PAY  51 

    0x8c8d1001,// 91 PAY  52 

    0xf92da472,// 92 PAY  53 

    0xd12fb350,// 93 PAY  54 

    0x27f9047c,// 94 PAY  55 

    0x6b371c24,// 95 PAY  56 

    0xd2a3236c,// 96 PAY  57 

    0x7b1727ee,// 97 PAY  58 

    0x953864e2,// 98 PAY  59 

    0x854dae31,// 99 PAY  60 

    0x9a0f2623,// 100 PAY  61 

    0x962535e7,// 101 PAY  62 

    0x0b3cdba8,// 102 PAY  63 

    0x5884fab4,// 103 PAY  64 

    0xc7754881,// 104 PAY  65 

    0x664d90e6,// 105 PAY  66 

    0xb83f081f,// 106 PAY  67 

    0x4a41bd7d,// 107 PAY  68 

    0xd3041eea,// 108 PAY  69 

    0xe98d7c8f,// 109 PAY  70 

    0x98c6508a,// 110 PAY  71 

    0x87ed0d25,// 111 PAY  72 

    0xde9c2b61,// 112 PAY  73 

    0x5b91427d,// 113 PAY  74 

    0x7454f58e,// 114 PAY  75 

    0xe83150cd,// 115 PAY  76 

    0x73239ebf,// 116 PAY  77 

    0x7dc45047,// 117 PAY  78 

    0xd80201f1,// 118 PAY  79 

    0x9f1f81e5,// 119 PAY  80 

    0x6e63d969,// 120 PAY  81 

    0x74fa6165,// 121 PAY  82 

    0x63485d9c,// 122 PAY  83 

    0xbfdbd37c,// 123 PAY  84 

    0xac7634e0,// 124 PAY  85 

    0x2fde3a7d,// 125 PAY  86 

    0xa24c4338,// 126 PAY  87 

    0xc1d29bfa,// 127 PAY  88 

    0x92c803c1,// 128 PAY  89 

    0xa5dac28e,// 129 PAY  90 

    0xfcc84ce2,// 130 PAY  91 

    0x8298b189,// 131 PAY  92 

    0x5530d0ba,// 132 PAY  93 

    0xa1eff4ae,// 133 PAY  94 

    0x3012f6b8,// 134 PAY  95 

    0x71d61f74,// 135 PAY  96 

    0x87cd10bd,// 136 PAY  97 

    0x8a43669a,// 137 PAY  98 

    0xb548279f,// 138 PAY  99 

    0x0a8bee17,// 139 PAY 100 

    0xfe389be7,// 140 PAY 101 

    0x7501a92e,// 141 PAY 102 

    0xbc46b148,// 142 PAY 103 

    0x892657bc,// 143 PAY 104 

    0x8f3183c0,// 144 PAY 105 

    0x1c4c7f2d,// 145 PAY 106 

    0xa2abfd45,// 146 PAY 107 

    0xbe950715,// 147 PAY 108 

    0x062cbbf5,// 148 PAY 109 

    0x87f0fa8d,// 149 PAY 110 

    0x167ab394,// 150 PAY 111 

    0xc14b481a,// 151 PAY 112 

    0x6ef857cf,// 152 PAY 113 

    0x3ac294ec,// 153 PAY 114 

    0x96d44e59,// 154 PAY 115 

    0xd9a7499c,// 155 PAY 116 

    0x7d3d4825,// 156 PAY 117 

    0x92ca0eb6,// 157 PAY 118 

    0x00234111,// 158 PAY 119 

    0xc2b7f24d,// 159 PAY 120 

    0xe7b67a63,// 160 PAY 121 

    0xf01663c4,// 161 PAY 122 

    0xb991564f,// 162 PAY 123 

    0x3d1ba290,// 163 PAY 124 

    0xe430d0a7,// 164 PAY 125 

    0xea9e6441,// 165 PAY 126 

    0x3b272914,// 166 PAY 127 

    0x89cbd0ac,// 167 PAY 128 

    0x6881a57a,// 168 PAY 129 

    0xc4472840,// 169 PAY 130 

    0x2dea35ca,// 170 PAY 131 

    0x7cf80498,// 171 PAY 132 

    0xa020d081,// 172 PAY 133 

    0x8cdb55db,// 173 PAY 134 

    0x7f27398c,// 174 PAY 135 

    0x2c91a3ca,// 175 PAY 136 

    0x28639a9e,// 176 PAY 137 

    0x9f804aca,// 177 PAY 138 

    0x14bd2a01,// 178 PAY 139 

    0x823f41a0,// 179 PAY 140 

    0xbfae014d,// 180 PAY 141 

    0xff26fb48,// 181 PAY 142 

    0x63b2e221,// 182 PAY 143 

    0xc924a421,// 183 PAY 144 

    0x3302888b,// 184 PAY 145 

    0xb4a971ba,// 185 PAY 146 

    0x6e1ff127,// 186 PAY 147 

    0x290be738,// 187 PAY 148 

    0xe98c1512,// 188 PAY 149 

    0xca68609f,// 189 PAY 150 

    0x2a1ffc28,// 190 PAY 151 

    0xaf3462da,// 191 PAY 152 

    0x8c0ac601,// 192 PAY 153 

    0x64cece64,// 193 PAY 154 

    0x611691f1,// 194 PAY 155 

    0x78be3a7d,// 195 PAY 156 

    0x3c3244b6,// 196 PAY 157 

    0xb4cbb768,// 197 PAY 158 

    0xc34838ac,// 198 PAY 159 

    0x63e28c9d,// 199 PAY 160 

    0xcff1a796,// 200 PAY 161 

    0x2d163e39,// 201 PAY 162 

    0x3059b99d,// 202 PAY 163 

    0x6f3375cf,// 203 PAY 164 

    0xba57a608,// 204 PAY 165 

    0xf27c1bee,// 205 PAY 166 

    0x829178b0,// 206 PAY 167 

    0x7281af6b,// 207 PAY 168 

    0x6b5b3bee,// 208 PAY 169 

    0x230c65a8,// 209 PAY 170 

    0x71224a56,// 210 PAY 171 

    0xe43facbe,// 211 PAY 172 

    0x09cdbb6d,// 212 PAY 173 

    0x2b39b0e4,// 213 PAY 174 

    0x9c815b64,// 214 PAY 175 

    0xbf857892,// 215 PAY 176 

    0x919ce6f0,// 216 PAY 177 

    0xa183ed0a,// 217 PAY 178 

    0x7f4ef415,// 218 PAY 179 

    0xb869f6b9,// 219 PAY 180 

    0xda82bff0,// 220 PAY 181 

    0xa3ae439f,// 221 PAY 182 

    0xddc9021c,// 222 PAY 183 

    0x7bdb7f81,// 223 PAY 184 

    0xb2069e7a,// 224 PAY 185 

    0x3f1663ad,// 225 PAY 186 

    0x22b17a79,// 226 PAY 187 

    0xbd595ae6,// 227 PAY 188 

    0x3d5c91d3,// 228 PAY 189 

    0x969cdaa1,// 229 PAY 190 

    0xb9db2eae,// 230 PAY 191 

    0xe9458902,// 231 PAY 192 

    0x67adfda7,// 232 PAY 193 

    0xb6996274,// 233 PAY 194 

    0xc78801b5,// 234 PAY 195 

    0xbea988ae,// 235 PAY 196 

    0x46f60c03,// 236 PAY 197 

    0x68fe2e76,// 237 PAY 198 

    0x5513f889,// 238 PAY 199 

    0x42a9e3f6,// 239 PAY 200 

    0x9f61285d,// 240 PAY 201 

    0xe8fddb92,// 241 PAY 202 

    0x92bfb559,// 242 PAY 203 

    0x555316f0,// 243 PAY 204 

    0x52e6de94,// 244 PAY 205 

    0x873c8019,// 245 PAY 206 

    0x8412dd19,// 246 PAY 207 

    0xbc1bf365,// 247 PAY 208 

    0xb24377a2,// 248 PAY 209 

    0xd01bdac4,// 249 PAY 210 

    0x52422f78,// 250 PAY 211 

    0x8b870aa7,// 251 PAY 212 

    0x17acfd8d,// 252 PAY 213 

    0xf0847a37,// 253 PAY 214 

    0xf245be2d,// 254 PAY 215 

    0x781cac1f,// 255 PAY 216 

    0x319507b9,// 256 PAY 217 

    0x99a4adc4,// 257 PAY 218 

    0xe849a308,// 258 PAY 219 

    0x073cc81b,// 259 PAY 220 

    0xedf7bd87,// 260 PAY 221 

    0x083e9c84,// 261 PAY 222 

    0xf8d9e0a0,// 262 PAY 223 

    0x2a097f9c,// 263 PAY 224 

    0x162f2fa7,// 264 PAY 225 

    0x99bb6d8a,// 265 PAY 226 

    0xe374ab75,// 266 PAY 227 

    0xecb96f38,// 267 PAY 228 

    0x82d39eda,// 268 PAY 229 

    0x1d705210,// 269 PAY 230 

    0x6fca323d,// 270 PAY 231 

    0x60fd275f,// 271 PAY 232 

    0xfed5dc3c,// 272 PAY 233 

    0x0fe7a062,// 273 PAY 234 

    0x4f9cdc4a,// 274 PAY 235 

    0x6be3f988,// 275 PAY 236 

    0x0c51297e,// 276 PAY 237 

    0x053b7fc7,// 277 PAY 238 

    0x65129bd2,// 278 PAY 239 

    0x2bffcaa0,// 279 PAY 240 

    0xefb4ec75,// 280 PAY 241 

    0x5a1bce8c,// 281 PAY 242 

    0xe07c498b,// 282 PAY 243 

    0x73127dbd,// 283 PAY 244 

    0x3a8b0ed7,// 284 PAY 245 

    0x61a9ab09,// 285 PAY 246 

    0x02835ab2,// 286 PAY 247 

    0x27d11b13,// 287 PAY 248 

    0xa8603a69,// 288 PAY 249 

    0x84e7291a,// 289 PAY 250 

    0x756e7275,// 290 PAY 251 

    0xd6912bd2,// 291 PAY 252 

    0x6a3c9a71,// 292 PAY 253 

    0xeac7beaa,// 293 PAY 254 

    0x36782f0d,// 294 PAY 255 

    0x23d55869,// 295 PAY 256 

    0x57f122c7,// 296 PAY 257 

    0x400d6973,// 297 PAY 258 

    0xd23671fb,// 298 PAY 259 

    0xbdbd106f,// 299 PAY 260 

    0xe0cb787c,// 300 PAY 261 

    0xc07b2283,// 301 PAY 262 

    0xaeb5e645,// 302 PAY 263 

    0x1fe76012,// 303 PAY 264 

    0xcf177c19,// 304 PAY 265 

    0xa13fb766,// 305 PAY 266 

    0x6c6cc4f0,// 306 PAY 267 

    0xd0a55442,// 307 PAY 268 

    0x8bafa729,// 308 PAY 269 

    0xc16f1c5d,// 309 PAY 270 

    0x937706bc,// 310 PAY 271 

    0x87977526,// 311 PAY 272 

    0x6e14aff0,// 312 PAY 273 

    0x9b4c40f9,// 313 PAY 274 

    0x45853ce2,// 314 PAY 275 

    0x258519bf,// 315 PAY 276 

    0xca556c95,// 316 PAY 277 

    0x4449649a,// 317 PAY 278 

    0x944986aa,// 318 PAY 279 

    0xc172cedf,// 319 PAY 280 

    0xb271f66b,// 320 PAY 281 

    0x995f5118,// 321 PAY 282 

    0x1f441d44,// 322 PAY 283 

    0xeb9e9112,// 323 PAY 284 

    0xb233a7f2,// 324 PAY 285 

    0x17b53ea8,// 325 PAY 286 

    0xaa866110,// 326 PAY 287 

    0x28f734ea,// 327 PAY 288 

    0x5db38a8c,// 328 PAY 289 

    0xb526fe7c,// 329 PAY 290 

    0x683eeac0,// 330 PAY 291 

    0x3d295065,// 331 PAY 292 

    0xe877d41c,// 332 PAY 293 

    0xa5a22e00,// 333 PAY 294 

/// STA is 1 words. 

/// STA num_pkts       : 14 

/// STA pkt_idx        : 249 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xc8 

    0x03e4c80e // 334 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 88 (0x58) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_sha1_pkt27_tmpl[] = {
    0xb8010058,// 1 CCH   1 

/// ECH cache_idx      : 0x06 

/// ECH pdu_tag        : 0x00 

    0x00060000,// 2 ECH   1 

/// SCX is 21 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound !save_icv insert_icv check_icv sctx_iv  

/// SCX exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : SHA1 

/// SCX aes_size        : RC4UPDT_AES192 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x4 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 8 

/// SCX authctx_size    : 40 

    0x08000015,// 3 SCX   1 

    0x806548b1,// 4 SCX   2 

    0x000034c2,// 5 SCX   3 

    0x864581f7,// 6 SCX   4 

    0x4f04043e,// 7 SCX   5 

    0xc0667ed4,// 8 SCX   6 

    0x68d66dea,// 9 SCX   7 

    0x048b29d5,// 10 SCX   8 

    0xa588b8a2,// 11 SCX   9 

    0xd318be3b,// 12 SCX  10 

    0xa8139da5,// 13 SCX  11 

    0x39f4431d,// 14 SCX  12 

    0x3663c1bd,// 15 SCX  13 

    0xbafd7ce6,// 16 SCX  14 

    0x33400fe7,// 17 SCX  15 

    0xa948f2af,// 18 SCX  16 

    0xe2c0d4bd,// 19 SCX  17 

    0x87a426f2,// 20 SCX  18 

    0x23bc689e,// 21 SCX  19 

    0x681cda68,// 22 SCX  20 

    0x0f4dcef0,// 23 SCX  21 

/// BFD is 3 words. 

/// BFD tot_len        : 1851 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 1533 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 1533 

/// BFD lencrypto      : 136 

/// BFD ofstcrypto     : 1380 

/// BFD (ofst+len)cry  : 1516 

/// BFD ofstiv         : 424 

/// BFD ofsticv        : 1772 

    0x000005fd,// 24 BFD   1 

    0x05640088,// 25 BFD   2 

    0x06ec01a8,// 26 BFD   3 

/// MFM is 4 words. 

/// MFM vldnibs        : 18 

    0x180021be,// 27 MFM   1 

    0x724cc6cb,// 28 MFM   2 

    0x873ee439,// 29 MFM   3 

    0x4d6e0000,// 30 MFM   4 

/// BDA is 464 words. 

/// BDA size     is 1851 (0x73b) 

/// BDA id       is 0x601b 

    0x073b601b,// 31 BDA   1 

/// PAY Generic Data size   : 1851 byte(s) 

/// PAD Buffer Data Pad size   : 1 byte(s) 

    0x4caf6171,// 32 PAY   1 

    0xc3cada88,// 33 PAY   2 

    0xafd8b4bc,// 34 PAY   3 

    0x38ffa337,// 35 PAY   4 

    0x6b6c87a5,// 36 PAY   5 

    0xe5c1f9fc,// 37 PAY   6 

    0x2e25df86,// 38 PAY   7 

    0x59646d30,// 39 PAY   8 

    0xda1ace77,// 40 PAY   9 

    0xfde0f0d6,// 41 PAY  10 

    0xe6b01292,// 42 PAY  11 

    0xc050b042,// 43 PAY  12 

    0x8779d0cc,// 44 PAY  13 

    0xfe1d4807,// 45 PAY  14 

    0xeb6190e0,// 46 PAY  15 

    0x821607f8,// 47 PAY  16 

    0x44d3d106,// 48 PAY  17 

    0xe54c6deb,// 49 PAY  18 

    0xe50335c2,// 50 PAY  19 

    0x96c0a8e5,// 51 PAY  20 

    0xb5def83b,// 52 PAY  21 

    0xed1c69fe,// 53 PAY  22 

    0x30934be7,// 54 PAY  23 

    0xc8f67965,// 55 PAY  24 

    0x1cda1053,// 56 PAY  25 

    0x2075724f,// 57 PAY  26 

    0x2802ba31,// 58 PAY  27 

    0x3f13b03e,// 59 PAY  28 

    0x59584817,// 60 PAY  29 

    0x0beb7dbf,// 61 PAY  30 

    0x5ecadbb4,// 62 PAY  31 

    0x65071c52,// 63 PAY  32 

    0x2b83d669,// 64 PAY  33 

    0xa215162e,// 65 PAY  34 

    0x55e822d9,// 66 PAY  35 

    0x44b1b620,// 67 PAY  36 

    0xecffa843,// 68 PAY  37 

    0xeff6f4ef,// 69 PAY  38 

    0x3b794e8d,// 70 PAY  39 

    0x497945e1,// 71 PAY  40 

    0x0fab4181,// 72 PAY  41 

    0xc60cc56a,// 73 PAY  42 

    0x9cb36323,// 74 PAY  43 

    0xcecc69c4,// 75 PAY  44 

    0x23b6d830,// 76 PAY  45 

    0xed457ba4,// 77 PAY  46 

    0x0c6b1db0,// 78 PAY  47 

    0xf0976b90,// 79 PAY  48 

    0xf32369c3,// 80 PAY  49 

    0xdd19ecf4,// 81 PAY  50 

    0x4a9e5f82,// 82 PAY  51 

    0xb94bc9ee,// 83 PAY  52 

    0xfa711bab,// 84 PAY  53 

    0x12637d67,// 85 PAY  54 

    0xdf6782b2,// 86 PAY  55 

    0x4704f523,// 87 PAY  56 

    0x87145ff7,// 88 PAY  57 

    0xbbad2053,// 89 PAY  58 

    0x4e9006ba,// 90 PAY  59 

    0x086eb00c,// 91 PAY  60 

    0xb5556976,// 92 PAY  61 

    0xc4de6018,// 93 PAY  62 

    0x92f32f7f,// 94 PAY  63 

    0x4fa946ad,// 95 PAY  64 

    0xee3f2ce2,// 96 PAY  65 

    0x7de045c7,// 97 PAY  66 

    0x38292758,// 98 PAY  67 

    0xaca509bf,// 99 PAY  68 

    0x2f489dec,// 100 PAY  69 

    0x4e0d167e,// 101 PAY  70 

    0x1c4e32a9,// 102 PAY  71 

    0xf6c0b554,// 103 PAY  72 

    0x515cb24b,// 104 PAY  73 

    0xaa8d00b8,// 105 PAY  74 

    0x37300051,// 106 PAY  75 

    0x921f7e30,// 107 PAY  76 

    0x1edaa9a4,// 108 PAY  77 

    0xe67ed09d,// 109 PAY  78 

    0x512a2f27,// 110 PAY  79 

    0xd69d7eca,// 111 PAY  80 

    0x9ff59006,// 112 PAY  81 

    0x214e632d,// 113 PAY  82 

    0xcbd5eec8,// 114 PAY  83 

    0xcc6a2ab7,// 115 PAY  84 

    0xbfe8024f,// 116 PAY  85 

    0x36d580a2,// 117 PAY  86 

    0xbdaa35a5,// 118 PAY  87 

    0x04eed0f2,// 119 PAY  88 

    0x920c726b,// 120 PAY  89 

    0x97e3da8c,// 121 PAY  90 

    0xb67451bd,// 122 PAY  91 

    0x11eab909,// 123 PAY  92 

    0x1977885c,// 124 PAY  93 

    0x449632c8,// 125 PAY  94 

    0x6b91d573,// 126 PAY  95 

    0xae6ae94b,// 127 PAY  96 

    0x19d117ac,// 128 PAY  97 

    0x5a948075,// 129 PAY  98 

    0x893b2971,// 130 PAY  99 

    0x37fca9c9,// 131 PAY 100 

    0x402de510,// 132 PAY 101 

    0x14d60337,// 133 PAY 102 

    0x123c8cd5,// 134 PAY 103 

    0x4c59f9be,// 135 PAY 104 

    0xcbce21b2,// 136 PAY 105 

    0xc5250e3f,// 137 PAY 106 

    0x2e4d9978,// 138 PAY 107 

    0x16e514f4,// 139 PAY 108 

    0x4c7ea33c,// 140 PAY 109 

    0xc9810fe4,// 141 PAY 110 

    0x34a574fb,// 142 PAY 111 

    0x302d5692,// 143 PAY 112 

    0xba7fb3a1,// 144 PAY 113 

    0xe4738503,// 145 PAY 114 

    0xa6d4a551,// 146 PAY 115 

    0x2c8bccb0,// 147 PAY 116 

    0x8a6b7041,// 148 PAY 117 

    0x7804d68e,// 149 PAY 118 

    0x1a17824d,// 150 PAY 119 

    0x41f650ad,// 151 PAY 120 

    0x211852b9,// 152 PAY 121 

    0xc0e05082,// 153 PAY 122 

    0x6db89269,// 154 PAY 123 

    0xd2f13e02,// 155 PAY 124 

    0x7911c321,// 156 PAY 125 

    0x3061cdfd,// 157 PAY 126 

    0x4d096a15,// 158 PAY 127 

    0x83258d45,// 159 PAY 128 

    0xe141bf2b,// 160 PAY 129 

    0x58f54027,// 161 PAY 130 

    0x3ba6a050,// 162 PAY 131 

    0x3724d0be,// 163 PAY 132 

    0x8a6d9380,// 164 PAY 133 

    0xa69d79e0,// 165 PAY 134 

    0x6ff9fdec,// 166 PAY 135 

    0xf31502e2,// 167 PAY 136 

    0xd22cda81,// 168 PAY 137 

    0x168baf74,// 169 PAY 138 

    0x0cd847cd,// 170 PAY 139 

    0xf4e87489,// 171 PAY 140 

    0x263463db,// 172 PAY 141 

    0x564a4e66,// 173 PAY 142 

    0xa45457a7,// 174 PAY 143 

    0xb388b6c2,// 175 PAY 144 

    0x32a7741f,// 176 PAY 145 

    0xe96dda63,// 177 PAY 146 

    0xec0bc9f2,// 178 PAY 147 

    0x15849baf,// 179 PAY 148 

    0xe017f489,// 180 PAY 149 

    0x9e2cd1bf,// 181 PAY 150 

    0x4e54e292,// 182 PAY 151 

    0xb454f764,// 183 PAY 152 

    0x79d3467e,// 184 PAY 153 

    0x69db21c5,// 185 PAY 154 

    0x0530b022,// 186 PAY 155 

    0x7ab299ef,// 187 PAY 156 

    0xea54ad31,// 188 PAY 157 

    0xa0470d7a,// 189 PAY 158 

    0x0655ceb8,// 190 PAY 159 

    0x14fe1749,// 191 PAY 160 

    0x97648580,// 192 PAY 161 

    0xf57f2cd4,// 193 PAY 162 

    0x7bc2ceb9,// 194 PAY 163 

    0xe1ccb177,// 195 PAY 164 

    0xf4e999b9,// 196 PAY 165 

    0x69c15926,// 197 PAY 166 

    0x66ecaf25,// 198 PAY 167 

    0x4e666fea,// 199 PAY 168 

    0x3b19348e,// 200 PAY 169 

    0xaa15e9f3,// 201 PAY 170 

    0x9a6c45eb,// 202 PAY 171 

    0xa9eaa008,// 203 PAY 172 

    0x6b8f848f,// 204 PAY 173 

    0x525ee4f3,// 205 PAY 174 

    0x8976e934,// 206 PAY 175 

    0xc3b1c1f0,// 207 PAY 176 

    0xa623d261,// 208 PAY 177 

    0xdfaffdbe,// 209 PAY 178 

    0x5c566f38,// 210 PAY 179 

    0xfb253181,// 211 PAY 180 

    0x4ecc12d4,// 212 PAY 181 

    0xcdd4abc5,// 213 PAY 182 

    0x0dc0dbd6,// 214 PAY 183 

    0x0896647e,// 215 PAY 184 

    0x86f9caaf,// 216 PAY 185 

    0x09d3d721,// 217 PAY 186 

    0xf60047f0,// 218 PAY 187 

    0xdb8d5bf3,// 219 PAY 188 

    0x4261605d,// 220 PAY 189 

    0x3c83d69a,// 221 PAY 190 

    0xbca4fe8f,// 222 PAY 191 

    0xd006ce1c,// 223 PAY 192 

    0x53f02c0d,// 224 PAY 193 

    0x65d864f4,// 225 PAY 194 

    0xf6ff76e4,// 226 PAY 195 

    0xabd769aa,// 227 PAY 196 

    0x8592bba8,// 228 PAY 197 

    0x6bca728b,// 229 PAY 198 

    0x8153856f,// 230 PAY 199 

    0xfbc075fd,// 231 PAY 200 

    0xc0d2eac4,// 232 PAY 201 

    0xd98178e1,// 233 PAY 202 

    0x17f71a62,// 234 PAY 203 

    0xd134f851,// 235 PAY 204 

    0xcc6ea311,// 236 PAY 205 

    0xd9c1ca12,// 237 PAY 206 

    0xb9e9f8b1,// 238 PAY 207 

    0xa1822f3c,// 239 PAY 208 

    0x6f6165d5,// 240 PAY 209 

    0x21c763df,// 241 PAY 210 

    0x63057320,// 242 PAY 211 

    0x3d8c66cf,// 243 PAY 212 

    0xa3cba1ff,// 244 PAY 213 

    0xaf0158d0,// 245 PAY 214 

    0x904a29d5,// 246 PAY 215 

    0x512c9d4a,// 247 PAY 216 

    0x1da12df3,// 248 PAY 217 

    0xe02fa5b4,// 249 PAY 218 

    0xd278ae22,// 250 PAY 219 

    0x1deaa853,// 251 PAY 220 

    0xb9923bb4,// 252 PAY 221 

    0xef1b1313,// 253 PAY 222 

    0xaa85c938,// 254 PAY 223 

    0x93c5dc27,// 255 PAY 224 

    0x5fb32893,// 256 PAY 225 

    0x28101560,// 257 PAY 226 

    0xe0970638,// 258 PAY 227 

    0x35e553a5,// 259 PAY 228 

    0x0ae66f2c,// 260 PAY 229 

    0xbf432d1b,// 261 PAY 230 

    0x8b6822bf,// 262 PAY 231 

    0x0521286d,// 263 PAY 232 

    0x4777e933,// 264 PAY 233 

    0xd0858db6,// 265 PAY 234 

    0xe8f37f63,// 266 PAY 235 

    0xc8e56613,// 267 PAY 236 

    0x33e4976b,// 268 PAY 237 

    0xfccaf747,// 269 PAY 238 

    0xdba64db8,// 270 PAY 239 

    0x2f1166b3,// 271 PAY 240 

    0xe49ccdc5,// 272 PAY 241 

    0x8fba5a12,// 273 PAY 242 

    0xf1c618bf,// 274 PAY 243 

    0x1bcc36cc,// 275 PAY 244 

    0x3dbf72bc,// 276 PAY 245 

    0x7752ed55,// 277 PAY 246 

    0xc08e1ab1,// 278 PAY 247 

    0x053688dd,// 279 PAY 248 

    0x13b61792,// 280 PAY 249 

    0x832607c9,// 281 PAY 250 

    0x8055db37,// 282 PAY 251 

    0xf6c59957,// 283 PAY 252 

    0x473c698a,// 284 PAY 253 

    0x25d20a0a,// 285 PAY 254 

    0x5a6fd67a,// 286 PAY 255 

    0x34824930,// 287 PAY 256 

    0xa45557f5,// 288 PAY 257 

    0xaa190428,// 289 PAY 258 

    0xad735a3b,// 290 PAY 259 

    0xa3671d47,// 291 PAY 260 

    0xa225254f,// 292 PAY 261 

    0x7be260a6,// 293 PAY 262 

    0x75a70932,// 294 PAY 263 

    0x4314e949,// 295 PAY 264 

    0x0bddcd86,// 296 PAY 265 

    0xf4ad681e,// 297 PAY 266 

    0xc2d0adfa,// 298 PAY 267 

    0x142f2d20,// 299 PAY 268 

    0xb928cfae,// 300 PAY 269 

    0x69b35a4a,// 301 PAY 270 

    0x74795b0c,// 302 PAY 271 

    0x26111565,// 303 PAY 272 

    0x8fb49b1a,// 304 PAY 273 

    0xac978841,// 305 PAY 274 

    0xc0391fb9,// 306 PAY 275 

    0x4c72967f,// 307 PAY 276 

    0x676f15c1,// 308 PAY 277 

    0xe3f04e55,// 309 PAY 278 

    0x6dd3dd83,// 310 PAY 279 

    0x148f3fe0,// 311 PAY 280 

    0x5fb63df9,// 312 PAY 281 

    0x640ad9cf,// 313 PAY 282 

    0x57071785,// 314 PAY 283 

    0xbe689f08,// 315 PAY 284 

    0x03e7a23c,// 316 PAY 285 

    0x43fbcde3,// 317 PAY 286 

    0xaf2ffd48,// 318 PAY 287 

    0x9c6e5ba1,// 319 PAY 288 

    0x748dbc91,// 320 PAY 289 

    0x6e4acd68,// 321 PAY 290 

    0x7bea989e,// 322 PAY 291 

    0x2d02650c,// 323 PAY 292 

    0x6202a46c,// 324 PAY 293 

    0x615cd7b5,// 325 PAY 294 

    0x06d6b3d1,// 326 PAY 295 

    0x56c133b6,// 327 PAY 296 

    0xb588a583,// 328 PAY 297 

    0x060d7e8d,// 329 PAY 298 

    0x5a4df92e,// 330 PAY 299 

    0xf1695c33,// 331 PAY 300 

    0x05a263ae,// 332 PAY 301 

    0x9465cbdb,// 333 PAY 302 

    0xfe1cfcba,// 334 PAY 303 

    0xf5ac324c,// 335 PAY 304 

    0xd302ab60,// 336 PAY 305 

    0x17123458,// 337 PAY 306 

    0xc3d240a8,// 338 PAY 307 

    0x4a1a7061,// 339 PAY 308 

    0x50ffcb73,// 340 PAY 309 

    0x7ce8aa82,// 341 PAY 310 

    0x4d8c3bc5,// 342 PAY 311 

    0xdf7ee746,// 343 PAY 312 

    0x47a120db,// 344 PAY 313 

    0x3d93c132,// 345 PAY 314 

    0xc81bdad2,// 346 PAY 315 

    0xdbdbb053,// 347 PAY 316 

    0x0fdc7f82,// 348 PAY 317 

    0x39d704ef,// 349 PAY 318 

    0x46383d0f,// 350 PAY 319 

    0x21f1530a,// 351 PAY 320 

    0x66459bc6,// 352 PAY 321 

    0x5612ab68,// 353 PAY 322 

    0x8283e68c,// 354 PAY 323 

    0x34f36ead,// 355 PAY 324 

    0x2c1789e9,// 356 PAY 325 

    0x79aad830,// 357 PAY 326 

    0x33591d83,// 358 PAY 327 

    0x8351b019,// 359 PAY 328 

    0xb23530a3,// 360 PAY 329 

    0x78d9bca0,// 361 PAY 330 

    0x4243546c,// 362 PAY 331 

    0x8972883e,// 363 PAY 332 

    0x5b3df9bc,// 364 PAY 333 

    0x6d3e6210,// 365 PAY 334 

    0x6b3bab66,// 366 PAY 335 

    0x8b9f316d,// 367 PAY 336 

    0xa3fdb9f9,// 368 PAY 337 

    0xc1d47029,// 369 PAY 338 

    0xaa7bc224,// 370 PAY 339 

    0xb63403f2,// 371 PAY 340 

    0x049d913e,// 372 PAY 341 

    0x19d1f3cd,// 373 PAY 342 

    0x33bba504,// 374 PAY 343 

    0x15479661,// 375 PAY 344 

    0xf2a9788e,// 376 PAY 345 

    0xfe60bfe9,// 377 PAY 346 

    0x9bedd95b,// 378 PAY 347 

    0x602c395a,// 379 PAY 348 

    0xf19edd0e,// 380 PAY 349 

    0xbc395ee2,// 381 PAY 350 

    0xee403568,// 382 PAY 351 

    0xcf11c4a2,// 383 PAY 352 

    0xbd9296cf,// 384 PAY 353 

    0x96c30d18,// 385 PAY 354 

    0x6c77d5a6,// 386 PAY 355 

    0xee240248,// 387 PAY 356 

    0x92e57947,// 388 PAY 357 

    0x837744a2,// 389 PAY 358 

    0xd42314a7,// 390 PAY 359 

    0x362599e1,// 391 PAY 360 

    0x7bafc6df,// 392 PAY 361 

    0x9f6afcaa,// 393 PAY 362 

    0x44d6ce02,// 394 PAY 363 

    0x8a31205c,// 395 PAY 364 

    0x993e44f1,// 396 PAY 365 

    0xf6da087d,// 397 PAY 366 

    0xf7f365d1,// 398 PAY 367 

    0x1f14a140,// 399 PAY 368 

    0x71a1a73d,// 400 PAY 369 

    0x0889fe8a,// 401 PAY 370 

    0xbda37f43,// 402 PAY 371 

    0x90712fab,// 403 PAY 372 

    0x4648cbc1,// 404 PAY 373 

    0xcd83e415,// 405 PAY 374 

    0xf5406236,// 406 PAY 375 

    0xfdbfcefe,// 407 PAY 376 

    0x4b1f7c14,// 408 PAY 377 

    0xfd92da19,// 409 PAY 378 

    0x292ec1d9,// 410 PAY 379 

    0x7dc6b32b,// 411 PAY 380 

    0xc0d7bffb,// 412 PAY 381 

    0x657218f9,// 413 PAY 382 

    0x93871f40,// 414 PAY 383 

    0x5168e597,// 415 PAY 384 

    0xe41617e0,// 416 PAY 385 

    0x5e06d650,// 417 PAY 386 

    0x3b19ad1f,// 418 PAY 387 

    0x0ec98945,// 419 PAY 388 

    0x058cd2f4,// 420 PAY 389 

    0xe1185fc4,// 421 PAY 390 

    0xae5eff08,// 422 PAY 391 

    0x0d5c1161,// 423 PAY 392 

    0x61f60748,// 424 PAY 393 

    0x17e38c71,// 425 PAY 394 

    0x9d566960,// 426 PAY 395 

    0xeb33b759,// 427 PAY 396 

    0x230c9c26,// 428 PAY 397 

    0x17860fdf,// 429 PAY 398 

    0xf05d10af,// 430 PAY 399 

    0xb54a32de,// 431 PAY 400 

    0x29b20064,// 432 PAY 401 

    0xbaf386bb,// 433 PAY 402 

    0x4ddecd82,// 434 PAY 403 

    0x2c3a2a47,// 435 PAY 404 

    0xc8b2c2fd,// 436 PAY 405 

    0xe6ba0565,// 437 PAY 406 

    0xac8446cf,// 438 PAY 407 

    0x89eb076d,// 439 PAY 408 

    0x6b3946d9,// 440 PAY 409 

    0x19219609,// 441 PAY 410 

    0xf4c9d20c,// 442 PAY 411 

    0xc088649a,// 443 PAY 412 

    0x40435fa7,// 444 PAY 413 

    0x4ed7b402,// 445 PAY 414 

    0x45ac1743,// 446 PAY 415 

    0xec83ac49,// 447 PAY 416 

    0xb8d962b5,// 448 PAY 417 

    0x2e938de4,// 449 PAY 418 

    0x2e45d95a,// 450 PAY 419 

    0x9e5e4cb8,// 451 PAY 420 

    0x142ffc58,// 452 PAY 421 

    0x5fb562fb,// 453 PAY 422 

    0xca88101b,// 454 PAY 423 

    0xc2d52696,// 455 PAY 424 

    0x96dbfd0c,// 456 PAY 425 

    0xaa88a8ac,// 457 PAY 426 

    0xdfd7b06c,// 458 PAY 427 

    0x61857ca2,// 459 PAY 428 

    0x3b6f3075,// 460 PAY 429 

    0x0e55d807,// 461 PAY 430 

    0x95c718a6,// 462 PAY 431 

    0x460fa4b9,// 463 PAY 432 

    0x19857c42,// 464 PAY 433 

    0xe3c066fe,// 465 PAY 434 

    0x1a69dbd1,// 466 PAY 435 

    0x394d0cb2,// 467 PAY 436 

    0x2efe1e0f,// 468 PAY 437 

    0xb5919241,// 469 PAY 438 

    0x1a39f560,// 470 PAY 439 

    0x0b3bacbd,// 471 PAY 440 

    0xa712dc03,// 472 PAY 441 

    0x3bbf798d,// 473 PAY 442 

    0x720e7390,// 474 PAY 443 

    0x51b0794a,// 475 PAY 444 

    0x0c559daa,// 476 PAY 445 

    0x02e33e18,// 477 PAY 446 

    0x821bd3d2,// 478 PAY 447 

    0xd6f4c04e,// 479 PAY 448 

    0xded6c881,// 480 PAY 449 

    0xa54c4d3a,// 481 PAY 450 

    0x5329b09e,// 482 PAY 451 

    0x40879146,// 483 PAY 452 

    0xf81498ce,// 484 PAY 453 

    0x15539ee5,// 485 PAY 454 

    0xd0a4ce70,// 486 PAY 455 

    0x12cdb171,// 487 PAY 456 

    0x47741f9a,// 488 PAY 457 

    0xa39799f3,// 489 PAY 458 

    0xdee3fe30,// 490 PAY 459 

    0xeebdf926,// 491 PAY 460 

    0x8b7c9366,// 492 PAY 461 

    0xaa2cff96,// 493 PAY 462 

    0x27cbb200,// 494 PAY 463 

/// STA is 1 words. 

/// STA num_pkts       : 214 

/// STA pkt_idx        : 254 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xc1 

    0x03f8c1d6 // 495 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 80 (0x50) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_sha1_pkt28_tmpl[] = {
    0xb8010050,// 1 CCH   1 

/// ECH cache_idx      : 0x0a 

/// ECH pdu_tag        : 0x00 

    0x000a0000,// 2 ECH   1 

/// SCX is 19 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound !save_icv insert_icv check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : SHA1 

/// SCX aes_size        : NORMAL_RC4INIT_AES128 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x5 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 40 

    0x08000013,// 3 SCX   1 

    0x8060487b,// 4 SCX   2 

    0x00003500,// 5 SCX   3 

    0x1d902c6f,// 6 SCX   4 

    0x9cdec43f,// 7 SCX   5 

    0xca4df573,// 8 SCX   6 

    0xd12d8c0d,// 9 SCX   7 

    0xa1626e82,// 10 SCX   8 

    0x28806b29,// 11 SCX   9 

    0xe6009d69,// 12 SCX  10 

    0x2efd22ce,// 13 SCX  11 

    0x46ed1c19,// 14 SCX  12 

    0x38150954,// 15 SCX  13 

    0x6a1d731e,// 16 SCX  14 

    0x1a4e5cab,// 17 SCX  15 

    0x186b0353,// 18 SCX  16 

    0x4e7acf2b,// 19 SCX  17 

    0xaf3de64a,// 20 SCX  18 

    0x8e2aa9a1,// 21 SCX  19 

/// BFD is 3 words. 

/// BFD tot_len        : 939 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 528 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 528 

/// BFD lencrypto      : 104 

/// BFD ofstcrypto     : 176 

/// BFD (ofst+len)cry  : 280 

/// BFD ofstiv         : 156 

/// BFD ofsticv        : 776 

    0x00000210,// 22 BFD   1 

    0x00b00068,// 23 BFD   2 

    0x0308009c,// 24 BFD   3 

/// MFM is 14 words. 

/// MFM vldnibs        : 65 

    0x65003515,// 25 MFM   1 

    0xc43ff8fb,// 26 MFM   2 

    0x4d59f594,// 27 MFM   3 

    0x7e228e4c,// 28 MFM   4 

    0x30e0c3d5,// 29 MFM   5 

    0xb36870e2,// 30 MFM   6 

    0x0f03ed5c,// 31 MFM   7 

    0x235a1147,// 32 MFM   8 

    0xc8a4779b,// 33 MFM   9 

    0x0e9657cf,// 34 MFM  10 

    0xed4fd1fe,// 35 MFM  11 

    0x0b19b2df,// 36 MFM  12 

    0xbaf0c343,// 37 MFM  13 

    0xe0000000,// 38 MFM  14 

/// BDA is 236 words. 

/// BDA size     is 939 (0x3ab) 

/// BDA id       is 0x24a3 

    0x03ab24a3,// 39 BDA   1 

/// PAY Generic Data size   : 939 byte(s) 

/// PAD Buffer Data Pad size   : 1 byte(s) 

    0x435d4eb7,// 40 PAY   1 

    0x5d6187d7,// 41 PAY   2 

    0xcef32f24,// 42 PAY   3 

    0x21b92d69,// 43 PAY   4 

    0x1689c3ab,// 44 PAY   5 

    0xa1880128,// 45 PAY   6 

    0x14a9cd40,// 46 PAY   7 

    0xb3c0dcf2,// 47 PAY   8 

    0x2df363f1,// 48 PAY   9 

    0x0488adb2,// 49 PAY  10 

    0x0bc1aab0,// 50 PAY  11 

    0xd05aee5a,// 51 PAY  12 

    0x834f2f2c,// 52 PAY  13 

    0xa4165cff,// 53 PAY  14 

    0x6b4354b3,// 54 PAY  15 

    0x63dbbfb0,// 55 PAY  16 

    0xdce2ceeb,// 56 PAY  17 

    0x891d8688,// 57 PAY  18 

    0x47964b55,// 58 PAY  19 

    0xe699f686,// 59 PAY  20 

    0x3aa4e8d0,// 60 PAY  21 

    0x54d6ac9b,// 61 PAY  22 

    0x46a27b8e,// 62 PAY  23 

    0x8d22bddb,// 63 PAY  24 

    0x1e684bfa,// 64 PAY  25 

    0xea1aa16e,// 65 PAY  26 

    0xfb5b18c6,// 66 PAY  27 

    0x2f8187b1,// 67 PAY  28 

    0x69283ede,// 68 PAY  29 

    0xa18f387c,// 69 PAY  30 

    0x54ee1d3d,// 70 PAY  31 

    0xeb6f4991,// 71 PAY  32 

    0x3bf9c7d7,// 72 PAY  33 

    0x1943a052,// 73 PAY  34 

    0x36997cef,// 74 PAY  35 

    0xb4cbb786,// 75 PAY  36 

    0x75a6fe10,// 76 PAY  37 

    0x0e721fe4,// 77 PAY  38 

    0x82b4fc8a,// 78 PAY  39 

    0x7aefb87f,// 79 PAY  40 

    0xcea9b92d,// 80 PAY  41 

    0x0a576bbd,// 81 PAY  42 

    0xdd229c63,// 82 PAY  43 

    0x1aef47c6,// 83 PAY  44 

    0xbedc6ed2,// 84 PAY  45 

    0x6c1a7e83,// 85 PAY  46 

    0xc762e2bd,// 86 PAY  47 

    0x564f2dfd,// 87 PAY  48 

    0xb95c32b0,// 88 PAY  49 

    0xc9be0049,// 89 PAY  50 

    0x530dfeb0,// 90 PAY  51 

    0xa831e3f0,// 91 PAY  52 

    0xeced121f,// 92 PAY  53 

    0x2a82b5a7,// 93 PAY  54 

    0xab52f527,// 94 PAY  55 

    0x21d07906,// 95 PAY  56 

    0x683f773b,// 96 PAY  57 

    0xa726aa4a,// 97 PAY  58 

    0xd0dbee29,// 98 PAY  59 

    0x432454cf,// 99 PAY  60 

    0x2d9653cc,// 100 PAY  61 

    0x94f065be,// 101 PAY  62 

    0xccfb1bbf,// 102 PAY  63 

    0x222289a7,// 103 PAY  64 

    0x42c84b04,// 104 PAY  65 

    0xc748f718,// 105 PAY  66 

    0x0a9928d1,// 106 PAY  67 

    0x3b8e02b3,// 107 PAY  68 

    0x49e1b6f1,// 108 PAY  69 

    0x51c83c42,// 109 PAY  70 

    0x3fb796f6,// 110 PAY  71 

    0x7542fcfa,// 111 PAY  72 

    0xc9db8412,// 112 PAY  73 

    0x4032158c,// 113 PAY  74 

    0xeb1388a7,// 114 PAY  75 

    0xb01db4e8,// 115 PAY  76 

    0x9ffae8b0,// 116 PAY  77 

    0x5372d6a4,// 117 PAY  78 

    0x947a8882,// 118 PAY  79 

    0x11d4f001,// 119 PAY  80 

    0xffb03bb1,// 120 PAY  81 

    0x5bfcdca0,// 121 PAY  82 

    0x0dec100f,// 122 PAY  83 

    0x07a8d1ab,// 123 PAY  84 

    0x2ada92d6,// 124 PAY  85 

    0xa3dc94fa,// 125 PAY  86 

    0x65c28623,// 126 PAY  87 

    0x086f05fe,// 127 PAY  88 

    0x6f30693c,// 128 PAY  89 

    0x3c693a05,// 129 PAY  90 

    0x4784a031,// 130 PAY  91 

    0x074d06b5,// 131 PAY  92 

    0x684b753d,// 132 PAY  93 

    0xa122739e,// 133 PAY  94 

    0xd9e0ec03,// 134 PAY  95 

    0x0bfa87d8,// 135 PAY  96 

    0x032d8d57,// 136 PAY  97 

    0xfa19181a,// 137 PAY  98 

    0xad5a5694,// 138 PAY  99 

    0x5b13338d,// 139 PAY 100 

    0xd4820527,// 140 PAY 101 

    0xe7fc1f28,// 141 PAY 102 

    0xd8344056,// 142 PAY 103 

    0x5f1ca1ec,// 143 PAY 104 

    0xc970b740,// 144 PAY 105 

    0x51b67783,// 145 PAY 106 

    0x14ccd8c5,// 146 PAY 107 

    0xeb6f6a0f,// 147 PAY 108 

    0xf07c96ad,// 148 PAY 109 

    0xfc5516cc,// 149 PAY 110 

    0x4e41da19,// 150 PAY 111 

    0x6b48cbd0,// 151 PAY 112 

    0x8775aa0f,// 152 PAY 113 

    0x402a6344,// 153 PAY 114 

    0x91633104,// 154 PAY 115 

    0x1f05206b,// 155 PAY 116 

    0xffce900f,// 156 PAY 117 

    0x7011a5ec,// 157 PAY 118 

    0xfa84239f,// 158 PAY 119 

    0x258aa528,// 159 PAY 120 

    0x1cbf179b,// 160 PAY 121 

    0xa3f553bc,// 161 PAY 122 

    0x06931961,// 162 PAY 123 

    0x955b5a6a,// 163 PAY 124 

    0x92dddffa,// 164 PAY 125 

    0x1589cbae,// 165 PAY 126 

    0x124ae5e0,// 166 PAY 127 

    0xb8618b53,// 167 PAY 128 

    0x11744156,// 168 PAY 129 

    0xb0ddc85f,// 169 PAY 130 

    0x3865ad7d,// 170 PAY 131 

    0xa0d06cea,// 171 PAY 132 

    0xd315f0bc,// 172 PAY 133 

    0xdc841d26,// 173 PAY 134 

    0xacda4f39,// 174 PAY 135 

    0x4bd7a08c,// 175 PAY 136 

    0x8dbe705e,// 176 PAY 137 

    0x018770e9,// 177 PAY 138 

    0x182a4aca,// 178 PAY 139 

    0x7250b344,// 179 PAY 140 

    0x41250cd3,// 180 PAY 141 

    0xc15dfd5f,// 181 PAY 142 

    0xa097f093,// 182 PAY 143 

    0xed43cc1c,// 183 PAY 144 

    0xcc5d942e,// 184 PAY 145 

    0xc5f41572,// 185 PAY 146 

    0x3d2198de,// 186 PAY 147 

    0x1c915083,// 187 PAY 148 

    0xcbf64d70,// 188 PAY 149 

    0x72ff52ae,// 189 PAY 150 

    0xf836a079,// 190 PAY 151 

    0xba1ae169,// 191 PAY 152 

    0xbecff53a,// 192 PAY 153 

    0x1c0ac0a9,// 193 PAY 154 

    0x99893560,// 194 PAY 155 

    0x8f00dbbc,// 195 PAY 156 

    0xd8b78fd6,// 196 PAY 157 

    0x4f1d54cf,// 197 PAY 158 

    0xfc505140,// 198 PAY 159 

    0xa5e207c0,// 199 PAY 160 

    0xb4458c08,// 200 PAY 161 

    0x611fdc72,// 201 PAY 162 

    0x948bed07,// 202 PAY 163 

    0x23376166,// 203 PAY 164 

    0x350b8d19,// 204 PAY 165 

    0xc61606d7,// 205 PAY 166 

    0x2eb0de28,// 206 PAY 167 

    0x50fada5d,// 207 PAY 168 

    0x349cbacc,// 208 PAY 169 

    0x9f9f6be0,// 209 PAY 170 

    0x15e97f22,// 210 PAY 171 

    0xc12daaab,// 211 PAY 172 

    0x9ad98026,// 212 PAY 173 

    0x42dde8db,// 213 PAY 174 

    0x0f459c16,// 214 PAY 175 

    0xd0949fed,// 215 PAY 176 

    0xe1a76db7,// 216 PAY 177 

    0xff653226,// 217 PAY 178 

    0x24b5e876,// 218 PAY 179 

    0xefd4fb1f,// 219 PAY 180 

    0x359db28f,// 220 PAY 181 

    0x1b50e11d,// 221 PAY 182 

    0xd446c5ef,// 222 PAY 183 

    0x59c5563e,// 223 PAY 184 

    0xebbe29f1,// 224 PAY 185 

    0xb783fd52,// 225 PAY 186 

    0x3575ae0d,// 226 PAY 187 

    0xd0ea5cfd,// 227 PAY 188 

    0xc99a3700,// 228 PAY 189 

    0x963b6299,// 229 PAY 190 

    0x713762a0,// 230 PAY 191 

    0x06340789,// 231 PAY 192 

    0x11336408,// 232 PAY 193 

    0x6386b9fb,// 233 PAY 194 

    0x2e7591d9,// 234 PAY 195 

    0x877efee6,// 235 PAY 196 

    0x1f4f0dba,// 236 PAY 197 

    0x1796aa4c,// 237 PAY 198 

    0x67046227,// 238 PAY 199 

    0xf877a13c,// 239 PAY 200 

    0xbccedc51,// 240 PAY 201 

    0xf9a3ff78,// 241 PAY 202 

    0x3d7f746c,// 242 PAY 203 

    0x4d201146,// 243 PAY 204 

    0x696f0ac4,// 244 PAY 205 

    0x2713dc44,// 245 PAY 206 

    0x7f65d29e,// 246 PAY 207 

    0xb80b7bfa,// 247 PAY 208 

    0x9f5fc719,// 248 PAY 209 

    0x5e9885c2,// 249 PAY 210 

    0x2de9b3b3,// 250 PAY 211 

    0x9c6805f3,// 251 PAY 212 

    0x8fffbeee,// 252 PAY 213 

    0x53baa216,// 253 PAY 214 

    0xc3e49e4c,// 254 PAY 215 

    0x31b1e416,// 255 PAY 216 

    0x47e4215c,// 256 PAY 217 

    0xed6fe4ff,// 257 PAY 218 

    0xc8ebe382,// 258 PAY 219 

    0x00bbc057,// 259 PAY 220 

    0x7aa2bb4a,// 260 PAY 221 

    0x2808cd06,// 261 PAY 222 

    0xafcb3514,// 262 PAY 223 

    0xa0bb5bb3,// 263 PAY 224 

    0xba0fc9c5,// 264 PAY 225 

    0xe9046977,// 265 PAY 226 

    0xa756e8d4,// 266 PAY 227 

    0x8b61b408,// 267 PAY 228 

    0x29650b01,// 268 PAY 229 

    0x1084c18d,// 269 PAY 230 

    0x73b55de8,// 270 PAY 231 

    0x6c1d0a50,// 271 PAY 232 

    0x8f99d2d8,// 272 PAY 233 

    0x1c644da9,// 273 PAY 234 

    0x64ab0900,// 274 PAY 235 

/// STA is 1 words. 

/// STA num_pkts       : 128 

/// STA pkt_idx        : 122 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xe5 

    0x01e8e580 // 275 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 88 (0x58) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_sha1_pkt29_tmpl[] = {
    0xb8010058,// 1 CCH   1 

/// ECH cache_idx      : 0x02 

/// ECH pdu_tag        : 0x00 

    0x00020000,// 2 ECH   1 

/// SCX is 21 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound save_icv insert_icv !check_icv sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : SHA1 

/// SCX aes_size        : AES256 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x2 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 8 

/// SCX authctx_size    : 40 

    0x08000015,// 3 SCX   1 

    0x80664802,// 4 SCX   2 

    0x00006282,// 5 SCX   3 

    0xe2ae96fe,// 6 SCX   4 

    0x07e24212,// 7 SCX   5 

    0x5f9b8e2e,// 8 SCX   6 

    0x33569262,// 9 SCX   7 

    0xe66fc8c8,// 10 SCX   8 

    0xcaf8e88b,// 11 SCX   9 

    0x7fa6cc30,// 12 SCX  10 

    0xa951ec99,// 13 SCX  11 

    0x55f2d818,// 14 SCX  12 

    0xd4826d8d,// 15 SCX  13 

    0x1bd3bfba,// 16 SCX  14 

    0xf725afdf,// 17 SCX  15 

    0x73ed1d77,// 18 SCX  16 

    0x08230f0b,// 19 SCX  17 

    0xc50e0cd3,// 20 SCX  18 

    0x94e2ccc2,// 21 SCX  19 

    0x63e7647f,// 22 SCX  20 

    0xbea95b62,// 23 SCX  21 

/// BFD is 3 words. 

/// BFD tot_len        : 1415 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 936 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 936 

/// BFD lencrypto      : 80 

/// BFD ofstcrypto     : 732 

/// BFD (ofst+len)cry  : 812 

/// BFD ofstiv         : 696 

/// BFD ofsticv        : 1368 

    0x000003a8,// 24 BFD   1 

    0x02dc0050,// 25 BFD   2 

    0x055802b8,// 26 BFD   3 

/// MFM is 16 words. 

/// MFM vldnibs        : 7c 

    0x7c005f96,// 27 MFM   1 

    0xa9b1b728,// 28 MFM   2 

    0x8844bdff,// 29 MFM   3 

    0x44671082,// 30 MFM   4 

    0x249ae728,// 31 MFM   5 

    0xca4d89c1,// 32 MFM   6 

    0xaf03fa12,// 33 MFM   7 

    0x45f48033,// 34 MFM   8 

    0x0ee1bd5c,// 35 MFM   9 

    0x4c8fc6ad,// 36 MFM  10 

    0x9aa03e31,// 37 MFM  11 

    0xf1e95a62,// 38 MFM  12 

    0x36ad094d,// 39 MFM  13 

    0x59ff4072,// 40 MFM  14 

    0x2eb7b2af,// 41 MFM  15 

    0x56e3c02d,// 42 MFM  16 

/// BDA is 355 words. 

/// BDA size     is 1415 (0x587) 

/// BDA id       is 0x31c5 

    0x058731c5,// 43 BDA   1 

/// PAY Generic Data size   : 1415 byte(s) 

/// PAD Buffer Data Pad size   : 1 byte(s) 

    0x7f7cac8b,// 44 PAY   1 

    0x9c72253c,// 45 PAY   2 

    0xe1c5b1b3,// 46 PAY   3 

    0x3eeca832,// 47 PAY   4 

    0xd9b6052a,// 48 PAY   5 

    0x686709a7,// 49 PAY   6 

    0xd3608b6f,// 50 PAY   7 

    0xfffbb6f0,// 51 PAY   8 

    0x6571bc8d,// 52 PAY   9 

    0x5e357df0,// 53 PAY  10 

    0x759a57f4,// 54 PAY  11 

    0x1d18a297,// 55 PAY  12 

    0xf3aea47f,// 56 PAY  13 

    0xabaf006d,// 57 PAY  14 

    0x0d4f1c68,// 58 PAY  15 

    0x6e60d984,// 59 PAY  16 

    0xdf4139b4,// 60 PAY  17 

    0x215f0c2a,// 61 PAY  18 

    0x3f128837,// 62 PAY  19 

    0xd7bf3830,// 63 PAY  20 

    0x918ac106,// 64 PAY  21 

    0x23e41595,// 65 PAY  22 

    0xd65601fb,// 66 PAY  23 

    0x21c2743c,// 67 PAY  24 

    0x91372caf,// 68 PAY  25 

    0x3d58574f,// 69 PAY  26 

    0xeb6f9d15,// 70 PAY  27 

    0xae5c513f,// 71 PAY  28 

    0x069edebe,// 72 PAY  29 

    0x20601538,// 73 PAY  30 

    0xea7a2f70,// 74 PAY  31 

    0xdd96bf5e,// 75 PAY  32 

    0xf67eb667,// 76 PAY  33 

    0x3c3a1daa,// 77 PAY  34 

    0xaf859d40,// 78 PAY  35 

    0x4f00dd1f,// 79 PAY  36 

    0xd1d0e712,// 80 PAY  37 

    0x4535aea6,// 81 PAY  38 

    0xd49111ce,// 82 PAY  39 

    0x00cfdb89,// 83 PAY  40 

    0x93a27741,// 84 PAY  41 

    0xd82d2464,// 85 PAY  42 

    0xba3b5c1c,// 86 PAY  43 

    0x1b35fcf0,// 87 PAY  44 

    0x3554f991,// 88 PAY  45 

    0x1c337275,// 89 PAY  46 

    0x609b12c4,// 90 PAY  47 

    0x5394dabe,// 91 PAY  48 

    0x5a77bb68,// 92 PAY  49 

    0xe1b125e8,// 93 PAY  50 

    0xca2ff296,// 94 PAY  51 

    0x9c984c61,// 95 PAY  52 

    0x7e896a54,// 96 PAY  53 

    0x53dd02d0,// 97 PAY  54 

    0x7eadb562,// 98 PAY  55 

    0x8fbd92e2,// 99 PAY  56 

    0x334ce669,// 100 PAY  57 

    0xb0f45eb0,// 101 PAY  58 

    0x23ec22ba,// 102 PAY  59 

    0xaac8a4b2,// 103 PAY  60 

    0x4bf1fa9b,// 104 PAY  61 

    0x07bbecb4,// 105 PAY  62 

    0xe71d5e67,// 106 PAY  63 

    0x7f9ae1a8,// 107 PAY  64 

    0xaaf1663d,// 108 PAY  65 

    0x7334742e,// 109 PAY  66 

    0x896a27c5,// 110 PAY  67 

    0x961ff471,// 111 PAY  68 

    0xeb172cb5,// 112 PAY  69 

    0x464e7ab1,// 113 PAY  70 

    0x46254c0b,// 114 PAY  71 

    0xe7167be1,// 115 PAY  72 

    0xca492531,// 116 PAY  73 

    0x09985603,// 117 PAY  74 

    0x7fc0507b,// 118 PAY  75 

    0x0c3de502,// 119 PAY  76 

    0x84fc822c,// 120 PAY  77 

    0xec87d0c0,// 121 PAY  78 

    0xa81cff77,// 122 PAY  79 

    0xbff8fa17,// 123 PAY  80 

    0xc5a9c3f0,// 124 PAY  81 

    0x8efc5f5d,// 125 PAY  82 

    0x630f2c00,// 126 PAY  83 

    0x1bf8afac,// 127 PAY  84 

    0x37e72f5e,// 128 PAY  85 

    0x5c92f060,// 129 PAY  86 

    0xc262ce29,// 130 PAY  87 

    0x9c856ade,// 131 PAY  88 

    0x751b00d7,// 132 PAY  89 

    0x81fa0c2d,// 133 PAY  90 

    0x2252387d,// 134 PAY  91 

    0x96953931,// 135 PAY  92 

    0x1f077641,// 136 PAY  93 

    0xcca1c566,// 137 PAY  94 

    0xb1f3b200,// 138 PAY  95 

    0x035f6c3f,// 139 PAY  96 

    0x40ae7d8e,// 140 PAY  97 

    0x5a288352,// 141 PAY  98 

    0xa72a687e,// 142 PAY  99 

    0x0448c21d,// 143 PAY 100 

    0xbb6f5487,// 144 PAY 101 

    0xb8f252df,// 145 PAY 102 

    0x74ccb5f0,// 146 PAY 103 

    0x1aece0ce,// 147 PAY 104 

    0x910edfea,// 148 PAY 105 

    0x7189e639,// 149 PAY 106 

    0xfd8e718a,// 150 PAY 107 

    0x68b29105,// 151 PAY 108 

    0x1f4be6b8,// 152 PAY 109 

    0x6e510058,// 153 PAY 110 

    0xee5a9d7f,// 154 PAY 111 

    0x5b3c13e7,// 155 PAY 112 

    0xac4ae5d3,// 156 PAY 113 

    0x0e998aa2,// 157 PAY 114 

    0x8bc26b4c,// 158 PAY 115 

    0x89273a69,// 159 PAY 116 

    0x7d779966,// 160 PAY 117 

    0xccb59f31,// 161 PAY 118 

    0x2f8fee43,// 162 PAY 119 

    0xe1416717,// 163 PAY 120 

    0x4c593f9f,// 164 PAY 121 

    0x6388fd72,// 165 PAY 122 

    0x51882379,// 166 PAY 123 

    0xb31a8e39,// 167 PAY 124 

    0x210a39dd,// 168 PAY 125 

    0x567df4b3,// 169 PAY 126 

    0xa723a060,// 170 PAY 127 

    0x682bae00,// 171 PAY 128 

    0x104eac15,// 172 PAY 129 

    0xb7fe6b27,// 173 PAY 130 

    0x017cfb34,// 174 PAY 131 

    0x4e1b6328,// 175 PAY 132 

    0x7f0ccc04,// 176 PAY 133 

    0x88daa6e3,// 177 PAY 134 

    0x6d59f5e7,// 178 PAY 135 

    0xf9e8d79d,// 179 PAY 136 

    0x0431fff6,// 180 PAY 137 

    0xeb883f40,// 181 PAY 138 

    0x5d090735,// 182 PAY 139 

    0xfa8d49d8,// 183 PAY 140 

    0x74672930,// 184 PAY 141 

    0xd8d99a54,// 185 PAY 142 

    0xba66c8fc,// 186 PAY 143 

    0x5a4767a0,// 187 PAY 144 

    0x6b2451bf,// 188 PAY 145 

    0x583abf34,// 189 PAY 146 

    0x5b27f07e,// 190 PAY 147 

    0x4a348499,// 191 PAY 148 

    0x8a76c64b,// 192 PAY 149 

    0xc848e899,// 193 PAY 150 

    0x1442dba6,// 194 PAY 151 

    0xbf383f4e,// 195 PAY 152 

    0x1805d380,// 196 PAY 153 

    0x35d3f012,// 197 PAY 154 

    0x542c818b,// 198 PAY 155 

    0xa1be5ed3,// 199 PAY 156 

    0x8dd7769b,// 200 PAY 157 

    0x762f676e,// 201 PAY 158 

    0x6c3a8867,// 202 PAY 159 

    0xc7cab5b6,// 203 PAY 160 

    0xfd387165,// 204 PAY 161 

    0x78814fb2,// 205 PAY 162 

    0x0a3ad9a0,// 206 PAY 163 

    0x5389794b,// 207 PAY 164 

    0xcae715cf,// 208 PAY 165 

    0x4206ffa9,// 209 PAY 166 

    0x650f4d0b,// 210 PAY 167 

    0xe14807b6,// 211 PAY 168 

    0x99add00c,// 212 PAY 169 

    0x1370f00d,// 213 PAY 170 

    0x657406f6,// 214 PAY 171 

    0x6d4d56d3,// 215 PAY 172 

    0x811d15b7,// 216 PAY 173 

    0x0bf9e5c9,// 217 PAY 174 

    0x4f762f39,// 218 PAY 175 

    0x47253758,// 219 PAY 176 

    0x10b2379d,// 220 PAY 177 

    0x2dc83fff,// 221 PAY 178 

    0x7239345e,// 222 PAY 179 

    0xd0a9f877,// 223 PAY 180 

    0x432a992a,// 224 PAY 181 

    0x9cd6a7dd,// 225 PAY 182 

    0xd5395ff3,// 226 PAY 183 

    0x587d3dfc,// 227 PAY 184 

    0xbb7ebf5a,// 228 PAY 185 

    0x99398fdc,// 229 PAY 186 

    0x96070489,// 230 PAY 187 

    0x03300d11,// 231 PAY 188 

    0x7eab355d,// 232 PAY 189 

    0xbfd1ec68,// 233 PAY 190 

    0xb085c05c,// 234 PAY 191 

    0x2f7bc447,// 235 PAY 192 

    0x62c6c8c5,// 236 PAY 193 

    0x329fd9f4,// 237 PAY 194 

    0x8dd5a361,// 238 PAY 195 

    0x85668f75,// 239 PAY 196 

    0x72c2f1b5,// 240 PAY 197 

    0xf6086b9e,// 241 PAY 198 

    0x31f5f98e,// 242 PAY 199 

    0x08b9b797,// 243 PAY 200 

    0xac301384,// 244 PAY 201 

    0xf658e35c,// 245 PAY 202 

    0x8a1d015e,// 246 PAY 203 

    0x18ff95e0,// 247 PAY 204 

    0xf9c12193,// 248 PAY 205 

    0xa6513a8c,// 249 PAY 206 

    0x8c215bfb,// 250 PAY 207 

    0xdee9106d,// 251 PAY 208 

    0x5122db8f,// 252 PAY 209 

    0x41a38880,// 253 PAY 210 

    0x96c2c08c,// 254 PAY 211 

    0x9a130361,// 255 PAY 212 

    0x70da903f,// 256 PAY 213 

    0x9f78cf48,// 257 PAY 214 

    0x6865e75a,// 258 PAY 215 

    0xdb27ddc7,// 259 PAY 216 

    0x9cf18611,// 260 PAY 217 

    0xcdfb8bad,// 261 PAY 218 

    0x661dd859,// 262 PAY 219 

    0x36fc3421,// 263 PAY 220 

    0xcaba4698,// 264 PAY 221 

    0x4d4d32f4,// 265 PAY 222 

    0xe58cee2c,// 266 PAY 223 

    0xa1245d21,// 267 PAY 224 

    0x12a6db22,// 268 PAY 225 

    0xd3515355,// 269 PAY 226 

    0xc565a8a6,// 270 PAY 227 

    0x83790d20,// 271 PAY 228 

    0xaa784fbe,// 272 PAY 229 

    0x4e042d6e,// 273 PAY 230 

    0x39826af5,// 274 PAY 231 

    0x9c3d85f1,// 275 PAY 232 

    0x1e4f9265,// 276 PAY 233 

    0x987f8158,// 277 PAY 234 

    0x1ed46684,// 278 PAY 235 

    0x22aff49e,// 279 PAY 236 

    0xf77b90d7,// 280 PAY 237 

    0x031968d9,// 281 PAY 238 

    0x311edd04,// 282 PAY 239 

    0x2e7a4a40,// 283 PAY 240 

    0x463ecece,// 284 PAY 241 

    0xf41032da,// 285 PAY 242 

    0x1635ecf2,// 286 PAY 243 

    0x4b889296,// 287 PAY 244 

    0x9d23944f,// 288 PAY 245 

    0x42805ddd,// 289 PAY 246 

    0x02cbce32,// 290 PAY 247 

    0x3b4de8c5,// 291 PAY 248 

    0xbfe15359,// 292 PAY 249 

    0x677f5319,// 293 PAY 250 

    0x71272ff8,// 294 PAY 251 

    0x88b2d154,// 295 PAY 252 

    0x9f0130bc,// 296 PAY 253 

    0x7bcc7d06,// 297 PAY 254 

    0xee1434b5,// 298 PAY 255 

    0x12cd0abd,// 299 PAY 256 

    0x4975fcc2,// 300 PAY 257 

    0xb9ab1582,// 301 PAY 258 

    0x1e90225b,// 302 PAY 259 

    0x1f400f70,// 303 PAY 260 

    0xc6893a07,// 304 PAY 261 

    0x3f314454,// 305 PAY 262 

    0xca4045fc,// 306 PAY 263 

    0xd56674c9,// 307 PAY 264 

    0xa789b3a3,// 308 PAY 265 

    0x7f4f3d1c,// 309 PAY 266 

    0x9e10bb0d,// 310 PAY 267 

    0x70ac7c14,// 311 PAY 268 

    0x8efef134,// 312 PAY 269 

    0x2ab19480,// 313 PAY 270 

    0x954eed78,// 314 PAY 271 

    0xed8a0244,// 315 PAY 272 

    0xa30a2e68,// 316 PAY 273 

    0xf5c8b771,// 317 PAY 274 

    0xf6f0cec2,// 318 PAY 275 

    0xd3ef512b,// 319 PAY 276 

    0xa69f547d,// 320 PAY 277 

    0x0ffd8b4e,// 321 PAY 278 

    0x6d782326,// 322 PAY 279 

    0x10d34c02,// 323 PAY 280 

    0x601f684c,// 324 PAY 281 

    0xa8fdeba7,// 325 PAY 282 

    0x7d82fc7a,// 326 PAY 283 

    0x20d08fb4,// 327 PAY 284 

    0x2925892c,// 328 PAY 285 

    0x6e9e13a4,// 329 PAY 286 

    0x549ab820,// 330 PAY 287 

    0x63c6fec9,// 331 PAY 288 

    0x43707279,// 332 PAY 289 

    0xbf7a3c55,// 333 PAY 290 

    0x30696545,// 334 PAY 291 

    0xdc215c81,// 335 PAY 292 

    0x61ed6494,// 336 PAY 293 

    0x4e062b47,// 337 PAY 294 

    0x0b6d1f5f,// 338 PAY 295 

    0x657715d3,// 339 PAY 296 

    0xa2373b06,// 340 PAY 297 

    0xb183ef53,// 341 PAY 298 

    0x3c4e5545,// 342 PAY 299 

    0xbe2f2fd7,// 343 PAY 300 

    0xcd0f28ba,// 344 PAY 301 

    0x0ede6b6a,// 345 PAY 302 

    0x10fbddb8,// 346 PAY 303 

    0xc9391b86,// 347 PAY 304 

    0x97d6d358,// 348 PAY 305 

    0xe25449d8,// 349 PAY 306 

    0x1dff35db,// 350 PAY 307 

    0xcef21b91,// 351 PAY 308 

    0xcb502799,// 352 PAY 309 

    0xeb09a772,// 353 PAY 310 

    0xd28bdac0,// 354 PAY 311 

    0x1b35a946,// 355 PAY 312 

    0x6b5fb813,// 356 PAY 313 

    0x40233fd3,// 357 PAY 314 

    0x69f71886,// 358 PAY 315 

    0x54d8a8bd,// 359 PAY 316 

    0x8fab434e,// 360 PAY 317 

    0x0bb355be,// 361 PAY 318 

    0xa09dd0bb,// 362 PAY 319 

    0x30458666,// 363 PAY 320 

    0x489f19c4,// 364 PAY 321 

    0x24f656f0,// 365 PAY 322 

    0xcf3bc443,// 366 PAY 323 

    0x6067a823,// 367 PAY 324 

    0x9ba9a018,// 368 PAY 325 

    0x4fb7c7ca,// 369 PAY 326 

    0xfa2806f6,// 370 PAY 327 

    0x51463dbd,// 371 PAY 328 

    0x266a290a,// 372 PAY 329 

    0xdad4e60a,// 373 PAY 330 

    0x708604a3,// 374 PAY 331 

    0x88d84a7f,// 375 PAY 332 

    0x3e5ac9a9,// 376 PAY 333 

    0x235e3d9f,// 377 PAY 334 

    0x6447663f,// 378 PAY 335 

    0xc2f87018,// 379 PAY 336 

    0xb28e39b2,// 380 PAY 337 

    0x4085fe54,// 381 PAY 338 

    0xab9ec9c1,// 382 PAY 339 

    0xe42fcfa7,// 383 PAY 340 

    0xf5f78ff4,// 384 PAY 341 

    0xf68a204f,// 385 PAY 342 

    0x76d5045b,// 386 PAY 343 

    0xa8c939c0,// 387 PAY 344 

    0xbc59fd91,// 388 PAY 345 

    0x94732e91,// 389 PAY 346 

    0x8d2312d4,// 390 PAY 347 

    0x071d254d,// 391 PAY 348 

    0xa1f5165f,// 392 PAY 349 

    0xda0fff3d,// 393 PAY 350 

    0x148ca7b7,// 394 PAY 351 

    0xaf6243ea,// 395 PAY 352 

    0x359f05e6,// 396 PAY 353 

    0xa7107000,// 397 PAY 354 

/// STA is 1 words. 

/// STA num_pkts       : 28 

/// STA pkt_idx        : 43 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x6e 

    0x00ac6e1c // 398 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 80 (0x50) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_sha1_pkt30_tmpl[] = {
    0xb8010050,// 1 CCH   1 

/// ECH cache_idx      : 0x03 

/// ECH pdu_tag        : 0x00 

    0x00030000,// 2 ECH   1 

/// SCX is 19 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound save_icv !insert_icv check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : SHA1 

/// SCX aes_size        : AES256 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x1 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 40 

    0x08000013,// 3 SCX   1 

    0x8062483e,// 4 SCX   2 

    0x00005100,// 5 SCX   3 

    0xe554c192,// 6 SCX   4 

    0x2e36029a,// 7 SCX   5 

    0xbbc07892,// 8 SCX   6 

    0x9dbd9995,// 9 SCX   7 

    0x2ed286ca,// 10 SCX   8 

    0xa68a93ea,// 11 SCX   9 

    0x350037b3,// 12 SCX  10 

    0xc000b8ed,// 13 SCX  11 

    0x434c09d6,// 14 SCX  12 

    0x1b3818ec,// 15 SCX  13 

    0xfa0a6498,// 16 SCX  14 

    0xac76feac,// 17 SCX  15 

    0x336c033d,// 18 SCX  16 

    0x6ade1c84,// 19 SCX  17 

    0x1e1a6e47,// 20 SCX  18 

    0x99e6b271,// 21 SCX  19 

/// BFD is 3 words. 

/// BFD tot_len        : 571 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 215 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 215 

/// BFD lencrypto      : 16 

/// BFD ofstcrypto     : 88 

/// BFD (ofst+len)cry  : 104 

/// BFD ofstiv         : 32 

/// BFD ofsticv        : 480 

    0x000000d7,// 22 BFD   1 

    0x00580010,// 23 BFD   2 

    0x01e00020,// 24 BFD   3 

/// MFM is 2 words. 

/// MFM vldnibs        : b 

    0x0b003569,// 25 MFM   1 

    0x7580e390,// 26 MFM   2 

/// BDA is 144 words. 

/// BDA size     is 571 (0x23b) 

/// BDA id       is 0x15c 

    0x023b015c,// 27 BDA   1 

/// PAY Generic Data size   : 571 byte(s) 

/// PAD Buffer Data Pad size   : 1 byte(s) 

    0x23a654b7,// 28 PAY   1 

    0x4fe1fa57,// 29 PAY   2 

    0x10f97228,// 30 PAY   3 

    0x5060b8c1,// 31 PAY   4 

    0xf9cd9e16,// 32 PAY   5 

    0xfc114b16,// 33 PAY   6 

    0x4f942479,// 34 PAY   7 

    0x85c76346,// 35 PAY   8 

    0xbe21d250,// 36 PAY   9 

    0x50db7306,// 37 PAY  10 

    0xcf614709,// 38 PAY  11 

    0x84998627,// 39 PAY  12 

    0xb9e0834b,// 40 PAY  13 

    0xc76509be,// 41 PAY  14 

    0x5a9b0d1c,// 42 PAY  15 

    0x369eaaa4,// 43 PAY  16 

    0xdaf6790e,// 44 PAY  17 

    0xac445c77,// 45 PAY  18 

    0xb6ba6810,// 46 PAY  19 

    0xd3926b07,// 47 PAY  20 

    0x302b3d81,// 48 PAY  21 

    0x298184ed,// 49 PAY  22 

    0x8087c576,// 50 PAY  23 

    0xa0b484f9,// 51 PAY  24 

    0x113e61d6,// 52 PAY  25 

    0xaebc0165,// 53 PAY  26 

    0x1fdd3c9e,// 54 PAY  27 

    0xcc6b88c0,// 55 PAY  28 

    0x861ccab4,// 56 PAY  29 

    0x1d00b8ce,// 57 PAY  30 

    0x4d537828,// 58 PAY  31 

    0x474d3dba,// 59 PAY  32 

    0x2055ede8,// 60 PAY  33 

    0xd8757278,// 61 PAY  34 

    0xc9b23765,// 62 PAY  35 

    0x8e870fff,// 63 PAY  36 

    0x4c38ec13,// 64 PAY  37 

    0x9d72af98,// 65 PAY  38 

    0x788bfe87,// 66 PAY  39 

    0xe10df9a8,// 67 PAY  40 

    0xd1cbc666,// 68 PAY  41 

    0xa220a256,// 69 PAY  42 

    0x77a240ff,// 70 PAY  43 

    0x3646d7cf,// 71 PAY  44 

    0x0d916670,// 72 PAY  45 

    0x7caea41e,// 73 PAY  46 

    0x8c0253c1,// 74 PAY  47 

    0xbde8eba9,// 75 PAY  48 

    0x6ea54282,// 76 PAY  49 

    0x31719bcd,// 77 PAY  50 

    0x030d0fe7,// 78 PAY  51 

    0x95b0c7a6,// 79 PAY  52 

    0x07578966,// 80 PAY  53 

    0xbeb8ae47,// 81 PAY  54 

    0xbcb5efca,// 82 PAY  55 

    0xf348c518,// 83 PAY  56 

    0x6eab1f9c,// 84 PAY  57 

    0x912e8066,// 85 PAY  58 

    0x246597cf,// 86 PAY  59 

    0xef244605,// 87 PAY  60 

    0x4baf4282,// 88 PAY  61 

    0xffcebe5f,// 89 PAY  62 

    0x89a2662a,// 90 PAY  63 

    0x70f066d9,// 91 PAY  64 

    0xbcd42656,// 92 PAY  65 

    0x95f76f9d,// 93 PAY  66 

    0x6b51a52f,// 94 PAY  67 

    0x8436f1f7,// 95 PAY  68 

    0xc5c1183a,// 96 PAY  69 

    0x88f334c0,// 97 PAY  70 

    0x6997b0b8,// 98 PAY  71 

    0x44737bba,// 99 PAY  72 

    0x54da4072,// 100 PAY  73 

    0x09cdf752,// 101 PAY  74 

    0x2a1da16d,// 102 PAY  75 

    0xcefe4e10,// 103 PAY  76 

    0x3d0ef6ee,// 104 PAY  77 

    0x836d983d,// 105 PAY  78 

    0xf71394d6,// 106 PAY  79 

    0xbb97319b,// 107 PAY  80 

    0x3401ec65,// 108 PAY  81 

    0x2c83f2a3,// 109 PAY  82 

    0xae86afc0,// 110 PAY  83 

    0x494f58cb,// 111 PAY  84 

    0x4e46ae3d,// 112 PAY  85 

    0x2bcb5b61,// 113 PAY  86 

    0xddfb7e91,// 114 PAY  87 

    0x4a8750fc,// 115 PAY  88 

    0x1b0927ab,// 116 PAY  89 

    0x413d05a5,// 117 PAY  90 

    0x692d7c13,// 118 PAY  91 

    0x28421a61,// 119 PAY  92 

    0x03f60817,// 120 PAY  93 

    0x55a094fa,// 121 PAY  94 

    0xc159a35d,// 122 PAY  95 

    0x1f468196,// 123 PAY  96 

    0xec7a55d5,// 124 PAY  97 

    0x9b4236b3,// 125 PAY  98 

    0x4cb94f02,// 126 PAY  99 

    0x22aebf68,// 127 PAY 100 

    0xdddbec70,// 128 PAY 101 

    0x957eeb0b,// 129 PAY 102 

    0xcd980a45,// 130 PAY 103 

    0x6b90d376,// 131 PAY 104 

    0xcb425232,// 132 PAY 105 

    0xab523b04,// 133 PAY 106 

    0x38ef2afb,// 134 PAY 107 

    0xa6c89718,// 135 PAY 108 

    0x5f8d49c6,// 136 PAY 109 

    0x4091aeaf,// 137 PAY 110 

    0x969a6c93,// 138 PAY 111 

    0x094ae59c,// 139 PAY 112 

    0x01fa44b0,// 140 PAY 113 

    0x6e065ef2,// 141 PAY 114 

    0x40b4dd19,// 142 PAY 115 

    0x03398b74,// 143 PAY 116 

    0x95eee99f,// 144 PAY 117 

    0xd93f9154,// 145 PAY 118 

    0x44b281ac,// 146 PAY 119 

    0x3bf552a6,// 147 PAY 120 

    0x33e40825,// 148 PAY 121 

    0x1799ef59,// 149 PAY 122 

    0x84d9b2b7,// 150 PAY 123 

    0xb33dca79,// 151 PAY 124 

    0x01106e4d,// 152 PAY 125 

    0x6b1c91d8,// 153 PAY 126 

    0xb6d2cb0d,// 154 PAY 127 

    0x05f6a94c,// 155 PAY 128 

    0x36301011,// 156 PAY 129 

    0x3fa25cd4,// 157 PAY 130 

    0xd1d9995a,// 158 PAY 131 

    0x383265cf,// 159 PAY 132 

    0xb745cb6a,// 160 PAY 133 

    0xbc4781e9,// 161 PAY 134 

    0xc4da061f,// 162 PAY 135 

    0x769c7142,// 163 PAY 136 

    0x0422d762,// 164 PAY 137 

    0x7ba5fa5c,// 165 PAY 138 

    0xb9024a7f,// 166 PAY 139 

    0x0b78f4c8,// 167 PAY 140 

    0x1fe4af63,// 168 PAY 141 

    0x3b81dbf0,// 169 PAY 142 

    0xf6043600,// 170 PAY 143 

/// STA is 1 words. 

/// STA num_pkts       : 6 

/// STA pkt_idx        : 105 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x53 

    0x01a55306 // 171 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 88 (0x58) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_sha1_pkt31_tmpl[] = {
    0xb8010058,// 1 CCH   1 

/// ECH cache_idx      : 0x0e 

/// ECH pdu_tag        : 0x00 

    0x000e0000,// 2 ECH   1 

/// SCX is 21 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound save_icv insert_icv !check_icv sctx_iv  

/// SCX exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : SHA1 

/// SCX aes_size        : RC4UPDT_AES192 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x1 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 8 

/// SCX authctx_size    : 40 

    0x00000015,// 3 SCX   1 

    0x80654870,// 4 SCX   2 

    0x000061c2,// 5 SCX   3 

    0x22980b94,// 6 SCX   4 

    0x1e72eadb,// 7 SCX   5 

    0xec6c6536,// 8 SCX   6 

    0x749ab9b9,// 9 SCX   7 

    0xfbeeefff,// 10 SCX   8 

    0x71b8f0c6,// 11 SCX   9 

    0x5d61c124,// 12 SCX  10 

    0xfbf23f22,// 13 SCX  11 

    0xb3e87b63,// 14 SCX  12 

    0x7d3ce26d,// 15 SCX  13 

    0xba60962c,// 16 SCX  14 

    0x407e0e3f,// 17 SCX  15 

    0x79e46655,// 18 SCX  16 

    0xd8fcccbe,// 19 SCX  17 

    0x8bc460ab,// 20 SCX  18 

    0xe6781985,// 21 SCX  19 

    0xa27b4bf0,// 22 SCX  20 

    0x2f913d52,// 23 SCX  21 

/// BFD is 3 words. 

/// BFD tot_len        : 1175 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 701 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 701 

/// BFD lencrypto      : 200 

/// BFD ofstcrypto     : 184 

/// BFD (ofst+len)cry  : 384 

/// BFD ofstiv         : 40 

/// BFD ofsticv        : 1152 

    0x000002bd,// 24 BFD   1 

    0x00b800c8,// 25 BFD   2 

    0x04800028,// 26 BFD   3 

/// MFM is 4 words. 

/// MFM vldnibs        : 18 

    0x18008efc,// 27 MFM   1 

    0x91c20bf8,// 28 MFM   2 

    0x3cae7dd4,// 29 MFM   3 

    0x633f0000,// 30 MFM   4 

/// BDA is 295 words. 

/// BDA size     is 1175 (0x497) 

/// BDA id       is 0x2b67 

    0x04972b67,// 31 BDA   1 

/// PAY Generic Data size   : 1175 byte(s) 

/// PAD Buffer Data Pad size   : 1 byte(s) 

    0xc0b9698d,// 32 PAY   1 

    0x91d3fe47,// 33 PAY   2 

    0x9dbccc99,// 34 PAY   3 

    0x345bc19a,// 35 PAY   4 

    0xefe25556,// 36 PAY   5 

    0x5aac0377,// 37 PAY   6 

    0xa4df94f1,// 38 PAY   7 

    0x99a50150,// 39 PAY   8 

    0xb93b7c4a,// 40 PAY   9 

    0xf8d430c7,// 41 PAY  10 

    0xbed7b2ab,// 42 PAY  11 

    0x513089ca,// 43 PAY  12 

    0xa542a31f,// 44 PAY  13 

    0xda2e6a87,// 45 PAY  14 

    0x85024d40,// 46 PAY  15 

    0x6644c0e3,// 47 PAY  16 

    0x71a348b0,// 48 PAY  17 

    0x9b329b00,// 49 PAY  18 

    0x979b37d6,// 50 PAY  19 

    0xb4ec20e9,// 51 PAY  20 

    0xd46a738d,// 52 PAY  21 

    0x1dac5041,// 53 PAY  22 

    0x61e7ed33,// 54 PAY  23 

    0x5f53265b,// 55 PAY  24 

    0x64ae5326,// 56 PAY  25 

    0xd1556110,// 57 PAY  26 

    0x60e74c10,// 58 PAY  27 

    0x0facacdf,// 59 PAY  28 

    0xa7b61a02,// 60 PAY  29 

    0x140df53f,// 61 PAY  30 

    0x55ba32ed,// 62 PAY  31 

    0x1b911dd9,// 63 PAY  32 

    0xd2c7bb7b,// 64 PAY  33 

    0x12793d36,// 65 PAY  34 

    0x04937993,// 66 PAY  35 

    0xee940935,// 67 PAY  36 

    0xd487b034,// 68 PAY  37 

    0xf804c2a2,// 69 PAY  38 

    0xa5fbddc1,// 70 PAY  39 

    0xa177e7ea,// 71 PAY  40 

    0xaeeec320,// 72 PAY  41 

    0xb804c3e2,// 73 PAY  42 

    0x7fef1071,// 74 PAY  43 

    0x7a2d41e4,// 75 PAY  44 

    0xfc0d21d3,// 76 PAY  45 

    0x0afed52f,// 77 PAY  46 

    0x6f1c59c9,// 78 PAY  47 

    0x1a357d7b,// 79 PAY  48 

    0x64144faa,// 80 PAY  49 

    0xbdf61db7,// 81 PAY  50 

    0x94f3652c,// 82 PAY  51 

    0x95500623,// 83 PAY  52 

    0xbc306e73,// 84 PAY  53 

    0xaa97c450,// 85 PAY  54 

    0x6314242c,// 86 PAY  55 

    0x76cd2aa9,// 87 PAY  56 

    0x19cce71c,// 88 PAY  57 

    0xf391c163,// 89 PAY  58 

    0x03da314a,// 90 PAY  59 

    0xec71a818,// 91 PAY  60 

    0x23764151,// 92 PAY  61 

    0x8149374e,// 93 PAY  62 

    0x4e8054e1,// 94 PAY  63 

    0x34a3e911,// 95 PAY  64 

    0x13c494a0,// 96 PAY  65 

    0x0a6b95b6,// 97 PAY  66 

    0x11f4bee8,// 98 PAY  67 

    0x829da9e3,// 99 PAY  68 

    0xb647d56d,// 100 PAY  69 

    0x324ba8a7,// 101 PAY  70 

    0xb9acaa0a,// 102 PAY  71 

    0x3c51e681,// 103 PAY  72 

    0xf710303c,// 104 PAY  73 

    0x15828fe6,// 105 PAY  74 

    0x6b49dc95,// 106 PAY  75 

    0x35265b7b,// 107 PAY  76 

    0xc5bf1cb5,// 108 PAY  77 

    0xb7b1a297,// 109 PAY  78 

    0x674228a5,// 110 PAY  79 

    0x0c6aef92,// 111 PAY  80 

    0xabd7f14f,// 112 PAY  81 

    0x98ec7589,// 113 PAY  82 

    0x24a671e2,// 114 PAY  83 

    0x0d897310,// 115 PAY  84 

    0xa1495814,// 116 PAY  85 

    0x876fe921,// 117 PAY  86 

    0xd0aa1127,// 118 PAY  87 

    0x04b4db16,// 119 PAY  88 

    0x180365be,// 120 PAY  89 

    0x8c155589,// 121 PAY  90 

    0x1056a967,// 122 PAY  91 

    0x3a665c0f,// 123 PAY  92 

    0x178b3cec,// 124 PAY  93 

    0x7d6a3430,// 125 PAY  94 

    0x9c2793b7,// 126 PAY  95 

    0x9324f262,// 127 PAY  96 

    0xee55d621,// 128 PAY  97 

    0xc9fc6bf4,// 129 PAY  98 

    0x6f6fa126,// 130 PAY  99 

    0xbfeff0a7,// 131 PAY 100 

    0xfe9811a7,// 132 PAY 101 

    0xb63fcb22,// 133 PAY 102 

    0x389fbdaa,// 134 PAY 103 

    0xf5d6e886,// 135 PAY 104 

    0xc30b05a3,// 136 PAY 105 

    0x4e5ab0e9,// 137 PAY 106 

    0x9f54d24d,// 138 PAY 107 

    0x38fae6c1,// 139 PAY 108 

    0x67cb9d76,// 140 PAY 109 

    0xc78e5169,// 141 PAY 110 

    0x88f74f7e,// 142 PAY 111 

    0xcbcd211b,// 143 PAY 112 

    0xe02c5729,// 144 PAY 113 

    0xd7572720,// 145 PAY 114 

    0xd785241e,// 146 PAY 115 

    0x3617f120,// 147 PAY 116 

    0x7f931991,// 148 PAY 117 

    0x0facf5eb,// 149 PAY 118 

    0x08ec273d,// 150 PAY 119 

    0x39f0574a,// 151 PAY 120 

    0xaed03c4a,// 152 PAY 121 

    0x386218fd,// 153 PAY 122 

    0x7da04401,// 154 PAY 123 

    0xdb25b1f1,// 155 PAY 124 

    0xefb689a9,// 156 PAY 125 

    0xdb5e3fb7,// 157 PAY 126 

    0xc15d08c7,// 158 PAY 127 

    0x8dd20ce4,// 159 PAY 128 

    0x1ba21329,// 160 PAY 129 

    0x613b247a,// 161 PAY 130 

    0x3f45b009,// 162 PAY 131 

    0xd7f20566,// 163 PAY 132 

    0x54e4b6ff,// 164 PAY 133 

    0x038ef826,// 165 PAY 134 

    0xf0735369,// 166 PAY 135 

    0x176eb81a,// 167 PAY 136 

    0x81bcf51d,// 168 PAY 137 

    0x09dd71e2,// 169 PAY 138 

    0x3ca34708,// 170 PAY 139 

    0x9ed60315,// 171 PAY 140 

    0xf9ddaa4e,// 172 PAY 141 

    0xe8548d3a,// 173 PAY 142 

    0x1d33acfe,// 174 PAY 143 

    0xe9ce01b5,// 175 PAY 144 

    0xb84189e5,// 176 PAY 145 

    0x85391d98,// 177 PAY 146 

    0x6cece17d,// 178 PAY 147 

    0x761939b0,// 179 PAY 148 

    0x40ad74dc,// 180 PAY 149 

    0x2933a88e,// 181 PAY 150 

    0x774deb6d,// 182 PAY 151 

    0x469e8370,// 183 PAY 152 

    0x34ef951d,// 184 PAY 153 

    0xb558b748,// 185 PAY 154 

    0x3f5f046a,// 186 PAY 155 

    0xbba2bb1a,// 187 PAY 156 

    0x4c2001d1,// 188 PAY 157 

    0xdb328285,// 189 PAY 158 

    0xc5d73b1f,// 190 PAY 159 

    0x4cf240fe,// 191 PAY 160 

    0x26b90fa9,// 192 PAY 161 

    0x52113337,// 193 PAY 162 

    0x8c03c598,// 194 PAY 163 

    0x531101c1,// 195 PAY 164 

    0xf2031bc5,// 196 PAY 165 

    0x869a3902,// 197 PAY 166 

    0xe8e1de58,// 198 PAY 167 

    0xe18f674b,// 199 PAY 168 

    0xc1ad7739,// 200 PAY 169 

    0x279812a1,// 201 PAY 170 

    0xba281bd6,// 202 PAY 171 

    0xbfa371c2,// 203 PAY 172 

    0x0d5c1b53,// 204 PAY 173 

    0xa5f5c98f,// 205 PAY 174 

    0x5e47e5a3,// 206 PAY 175 

    0x5761f8be,// 207 PAY 176 

    0x6a5e50bc,// 208 PAY 177 

    0xe4ef8b50,// 209 PAY 178 

    0x9a01d152,// 210 PAY 179 

    0x88a615f1,// 211 PAY 180 

    0xe268227f,// 212 PAY 181 

    0x64394bf4,// 213 PAY 182 

    0x99d194d8,// 214 PAY 183 

    0x058533bc,// 215 PAY 184 

    0x1c4228b3,// 216 PAY 185 

    0xcf098f46,// 217 PAY 186 

    0x5ea49c24,// 218 PAY 187 

    0x33b2283c,// 219 PAY 188 

    0xffbae27a,// 220 PAY 189 

    0xd7884843,// 221 PAY 190 

    0x469a0c97,// 222 PAY 191 

    0xe396a31e,// 223 PAY 192 

    0x494df5a0,// 224 PAY 193 

    0xf7659839,// 225 PAY 194 

    0x1833c568,// 226 PAY 195 

    0x82f93d36,// 227 PAY 196 

    0x1e500d7d,// 228 PAY 197 

    0xa1774794,// 229 PAY 198 

    0x8f1d65df,// 230 PAY 199 

    0x07c590f6,// 231 PAY 200 

    0x9fbc1004,// 232 PAY 201 

    0xc121c18e,// 233 PAY 202 

    0xf45e503c,// 234 PAY 203 

    0x0cd326cf,// 235 PAY 204 

    0x12a3f678,// 236 PAY 205 

    0x906e7296,// 237 PAY 206 

    0x568588b1,// 238 PAY 207 

    0x506016bc,// 239 PAY 208 

    0xab794ef5,// 240 PAY 209 

    0xcc97b91a,// 241 PAY 210 

    0xea3a10b4,// 242 PAY 211 

    0xf4e2dae3,// 243 PAY 212 

    0x16d39aab,// 244 PAY 213 

    0x33497a03,// 245 PAY 214 

    0xf84cdfb4,// 246 PAY 215 

    0xf759353f,// 247 PAY 216 

    0x968d5c3e,// 248 PAY 217 

    0xcf3fae3a,// 249 PAY 218 

    0x35edc071,// 250 PAY 219 

    0x0765cf38,// 251 PAY 220 

    0xc31e3ab5,// 252 PAY 221 

    0xdbc23bf4,// 253 PAY 222 

    0x10423526,// 254 PAY 223 

    0x53b461cd,// 255 PAY 224 

    0xdfe41662,// 256 PAY 225 

    0xa8e2b450,// 257 PAY 226 

    0xef102264,// 258 PAY 227 

    0x1b2247b8,// 259 PAY 228 

    0x94706fe5,// 260 PAY 229 

    0x264f406c,// 261 PAY 230 

    0xb73f9318,// 262 PAY 231 

    0xf16acd04,// 263 PAY 232 

    0x8bff9605,// 264 PAY 233 

    0x93cdf187,// 265 PAY 234 

    0x6408039b,// 266 PAY 235 

    0xfba46069,// 267 PAY 236 

    0x6ffb8c23,// 268 PAY 237 

    0xe2cf1ff5,// 269 PAY 238 

    0xd0e8f5fa,// 270 PAY 239 

    0xef3f52a5,// 271 PAY 240 

    0x010de071,// 272 PAY 241 

    0xb426ac9d,// 273 PAY 242 

    0x773f44ab,// 274 PAY 243 

    0x53eb5b6f,// 275 PAY 244 

    0x10039187,// 276 PAY 245 

    0x99afe9d7,// 277 PAY 246 

    0x83cf8cd1,// 278 PAY 247 

    0x2ff4c20b,// 279 PAY 248 

    0x1b46ce4b,// 280 PAY 249 

    0x55b193ba,// 281 PAY 250 

    0xc5b62717,// 282 PAY 251 

    0xf74749e5,// 283 PAY 252 

    0x63d25e51,// 284 PAY 253 

    0x5cb7916a,// 285 PAY 254 

    0x014b36a6,// 286 PAY 255 

    0xde041fd8,// 287 PAY 256 

    0x6445d734,// 288 PAY 257 

    0x905de24b,// 289 PAY 258 

    0xe87f9af9,// 290 PAY 259 

    0x54bdab44,// 291 PAY 260 

    0xe5ee39e7,// 292 PAY 261 

    0xcf709848,// 293 PAY 262 

    0x4b01555b,// 294 PAY 263 

    0xfac353e3,// 295 PAY 264 

    0xf2d089fa,// 296 PAY 265 

    0x40aeb3b4,// 297 PAY 266 

    0x6c8016e8,// 298 PAY 267 

    0xc04b74ec,// 299 PAY 268 

    0x6712bcac,// 300 PAY 269 

    0x989278e3,// 301 PAY 270 

    0x93da1293,// 302 PAY 271 

    0x94b9573c,// 303 PAY 272 

    0x138ebc7d,// 304 PAY 273 

    0xf61b4bce,// 305 PAY 274 

    0x853c23cf,// 306 PAY 275 

    0x6affcc29,// 307 PAY 276 

    0xb8cbdab4,// 308 PAY 277 

    0x08ab97c3,// 309 PAY 278 

    0x15ee197b,// 310 PAY 279 

    0x554b3358,// 311 PAY 280 

    0x091164ef,// 312 PAY 281 

    0x0953d51e,// 313 PAY 282 

    0x154732e6,// 314 PAY 283 

    0xbab957a5,// 315 PAY 284 

    0x3b02de3b,// 316 PAY 285 

    0xb34a1b6a,// 317 PAY 286 

    0x9fd800b5,// 318 PAY 287 

    0xca315db8,// 319 PAY 288 

    0x9471004e,// 320 PAY 289 

    0x2c0d6593,// 321 PAY 290 

    0x79c92fcc,// 322 PAY 291 

    0xe736dcf7,// 323 PAY 292 

    0x13033f50,// 324 PAY 293 

    0x32e5ba00,// 325 PAY 294 

/// STA is 1 words. 

/// STA num_pkts       : 179 

/// STA pkt_idx        : 154 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xb8 

    0x0269b8b3 // 326 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 88 (0x58) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_sha1_pkt32_tmpl[] = {
    0xb8010058,// 1 CCH   1 

/// ECH cache_idx      : 0x0a 

/// ECH pdu_tag        : 0x00 

    0x000a0000,// 2 ECH   1 

/// SCX is 21 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound save_icv !insert_icv !check_icv sctx_iv  

/// SCX exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : SHA1 

/// SCX aes_size        : RC4UPDT_AES192 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x3 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 8 

/// SCX authctx_size    : 40 

    0x08000015,// 3 SCX   1 

    0x806548f5,// 4 SCX   2 

    0x000043c2,// 5 SCX   3 

    0x07bd12f1,// 6 SCX   4 

    0x641af403,// 7 SCX   5 

    0xe9c10c4e,// 8 SCX   6 

    0x786fc2e2,// 9 SCX   7 

    0xccf6c305,// 10 SCX   8 

    0x4c510960,// 11 SCX   9 

    0xe02b8e01,// 12 SCX  10 

    0xeb57f924,// 13 SCX  11 

    0xdf531721,// 14 SCX  12 

    0xf31f4f65,// 15 SCX  13 

    0x9c9ae3c2,// 16 SCX  14 

    0x63d0ae65,// 17 SCX  15 

    0xe301e4b5,// 18 SCX  16 

    0x257520e6,// 19 SCX  17 

    0x9004011e,// 20 SCX  18 

    0xb29d66a3,// 21 SCX  19 

    0x3d584de7,// 22 SCX  20 

    0x7cbea924,// 23 SCX  21 

/// BFD is 3 words. 

/// BFD tot_len        : 1717 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 415 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 415 

/// BFD lencrypto      : 16 

/// BFD ofstcrypto     : 396 

/// BFD (ofst+len)cry  : 412 

/// BFD ofstiv         : 184 

/// BFD ofsticv        : 512 

    0x0000019f,// 24 BFD   1 

    0x018c0010,// 25 BFD   2 

    0x020000b8,// 26 BFD   3 

/// MFM is 8 words. 

/// MFM vldnibs        : 39 

    0x390088ca,// 27 MFM   1 

    0x890d2f48,// 28 MFM   2 

    0x9118b1dc,// 29 MFM   3 

    0x959bbfcb,// 30 MFM   4 

    0x598e9573,// 31 MFM   5 

    0x2070536e,// 32 MFM   6 

    0x6afbd012,// 33 MFM   7 

    0x4f962000,// 34 MFM   8 

/// BDA is 431 words. 

/// BDA size     is 1717 (0x6b5) 

/// BDA id       is 0x1659 

    0x06b51659,// 35 BDA   1 

/// PAY Generic Data size   : 1717 byte(s) 

/// PAD Buffer Data Pad size   : 3 byte(s) 

    0xcb708fb6,// 36 PAY   1 

    0xcc3f97cd,// 37 PAY   2 

    0x87769167,// 38 PAY   3 

    0x6797b0a7,// 39 PAY   4 

    0xb15b5efd,// 40 PAY   5 

    0x490eabe7,// 41 PAY   6 

    0xbdf0e28f,// 42 PAY   7 

    0x93482352,// 43 PAY   8 

    0x87aed7bd,// 44 PAY   9 

    0x47ab4638,// 45 PAY  10 

    0xceb01282,// 46 PAY  11 

    0x78b4e3f9,// 47 PAY  12 

    0x048d4678,// 48 PAY  13 

    0x9858ae62,// 49 PAY  14 

    0xf628e0c4,// 50 PAY  15 

    0xda653e77,// 51 PAY  16 

    0x7ad419c0,// 52 PAY  17 

    0xf9450080,// 53 PAY  18 

    0xa70f76de,// 54 PAY  19 

    0x0814d024,// 55 PAY  20 

    0x77ce2440,// 56 PAY  21 

    0x4dd80348,// 57 PAY  22 

    0xb3615fce,// 58 PAY  23 

    0xa812ed65,// 59 PAY  24 

    0x708cd149,// 60 PAY  25 

    0xcd205567,// 61 PAY  26 

    0x9bcf9443,// 62 PAY  27 

    0xb042395b,// 63 PAY  28 

    0xe7b72cff,// 64 PAY  29 

    0x4347b12f,// 65 PAY  30 

    0x44131d62,// 66 PAY  31 

    0x391b023c,// 67 PAY  32 

    0x884b452d,// 68 PAY  33 

    0x0a640e09,// 69 PAY  34 

    0x985f0fbd,// 70 PAY  35 

    0x6c0343dc,// 71 PAY  36 

    0x6a9d170e,// 72 PAY  37 

    0xa0bb88d3,// 73 PAY  38 

    0x566a0bfb,// 74 PAY  39 

    0x1eb398eb,// 75 PAY  40 

    0x758be03f,// 76 PAY  41 

    0xaa3ecec4,// 77 PAY  42 

    0x3488bc9e,// 78 PAY  43 

    0x8de0e85b,// 79 PAY  44 

    0xbfb71c72,// 80 PAY  45 

    0xb4121330,// 81 PAY  46 

    0x40c47c66,// 82 PAY  47 

    0xf6427592,// 83 PAY  48 

    0x8b35b8fa,// 84 PAY  49 

    0x3d426d15,// 85 PAY  50 

    0xc4e46513,// 86 PAY  51 

    0x6da3342e,// 87 PAY  52 

    0x0380c97c,// 88 PAY  53 

    0x56ec9841,// 89 PAY  54 

    0x24357a77,// 90 PAY  55 

    0xc47722ca,// 91 PAY  56 

    0x98f8731d,// 92 PAY  57 

    0x080eb503,// 93 PAY  58 

    0xfd55f456,// 94 PAY  59 

    0x3b6c5a76,// 95 PAY  60 

    0x59c1a2fc,// 96 PAY  61 

    0xa8f90ffd,// 97 PAY  62 

    0xe924390c,// 98 PAY  63 

    0x755edd8d,// 99 PAY  64 

    0x0946f8fd,// 100 PAY  65 

    0xf42586e1,// 101 PAY  66 

    0x276e9621,// 102 PAY  67 

    0xc6e37a62,// 103 PAY  68 

    0xdc66a414,// 104 PAY  69 

    0x0d0e1348,// 105 PAY  70 

    0xe101b6fc,// 106 PAY  71 

    0xe2d0b0fc,// 107 PAY  72 

    0xfc29ef1a,// 108 PAY  73 

    0xa3218286,// 109 PAY  74 

    0xc34c76af,// 110 PAY  75 

    0x81674056,// 111 PAY  76 

    0xf1f83950,// 112 PAY  77 

    0xe8490a03,// 113 PAY  78 

    0xec7f089c,// 114 PAY  79 

    0xaba41b29,// 115 PAY  80 

    0x4921e315,// 116 PAY  81 

    0xa4851790,// 117 PAY  82 

    0x527337cc,// 118 PAY  83 

    0x4da83836,// 119 PAY  84 

    0xf389b714,// 120 PAY  85 

    0x670044e7,// 121 PAY  86 

    0xafc85df1,// 122 PAY  87 

    0x6b6f1566,// 123 PAY  88 

    0xe1560309,// 124 PAY  89 

    0xf79ef567,// 125 PAY  90 

    0xcefddcee,// 126 PAY  91 

    0x7c8c3189,// 127 PAY  92 

    0xfef402fa,// 128 PAY  93 

    0xf92b91a6,// 129 PAY  94 

    0xd60010df,// 130 PAY  95 

    0xed4e230c,// 131 PAY  96 

    0xdee30f98,// 132 PAY  97 

    0x86d49486,// 133 PAY  98 

    0xbdcae232,// 134 PAY  99 

    0x4862d287,// 135 PAY 100 

    0x9dedf6fc,// 136 PAY 101 

    0x94e1bc10,// 137 PAY 102 

    0x6c03ba77,// 138 PAY 103 

    0xe1802f07,// 139 PAY 104 

    0x496bc812,// 140 PAY 105 

    0x148de4dd,// 141 PAY 106 

    0xbf7e795b,// 142 PAY 107 

    0xa4d2753a,// 143 PAY 108 

    0x2ca5c862,// 144 PAY 109 

    0xb71c8fb0,// 145 PAY 110 

    0xf614558a,// 146 PAY 111 

    0xaf9a73c4,// 147 PAY 112 

    0x1ff36370,// 148 PAY 113 

    0xfe7de949,// 149 PAY 114 

    0xef967870,// 150 PAY 115 

    0x5d8293e5,// 151 PAY 116 

    0xdaa4d0ed,// 152 PAY 117 

    0xa3ede4ed,// 153 PAY 118 

    0x34d6ce94,// 154 PAY 119 

    0xc0445f55,// 155 PAY 120 

    0x67db0668,// 156 PAY 121 

    0xf1624832,// 157 PAY 122 

    0x501c5058,// 158 PAY 123 

    0x39c5f79c,// 159 PAY 124 

    0x1109e017,// 160 PAY 125 

    0x5a1ec6ee,// 161 PAY 126 

    0x369d95ad,// 162 PAY 127 

    0x2d49be40,// 163 PAY 128 

    0xc98d976c,// 164 PAY 129 

    0x5c9a076d,// 165 PAY 130 

    0x48d2f598,// 166 PAY 131 

    0x04ff5791,// 167 PAY 132 

    0xdb54db4a,// 168 PAY 133 

    0x84683829,// 169 PAY 134 

    0xc2bf8539,// 170 PAY 135 

    0x76a056e7,// 171 PAY 136 

    0xa46686dc,// 172 PAY 137 

    0x4fdf6530,// 173 PAY 138 

    0x669d73ff,// 174 PAY 139 

    0x6d8611c2,// 175 PAY 140 

    0xe0202df8,// 176 PAY 141 

    0xedb83a2a,// 177 PAY 142 

    0xab2ed3ab,// 178 PAY 143 

    0x356bfc49,// 179 PAY 144 

    0xe3e71992,// 180 PAY 145 

    0xfa4b0aee,// 181 PAY 146 

    0x296b43a0,// 182 PAY 147 

    0x3ed82008,// 183 PAY 148 

    0xad64e42f,// 184 PAY 149 

    0xde826f67,// 185 PAY 150 

    0x89feeb58,// 186 PAY 151 

    0x82ec627a,// 187 PAY 152 

    0x03af211c,// 188 PAY 153 

    0x0d992ce1,// 189 PAY 154 

    0xe3a903f2,// 190 PAY 155 

    0xcd9ce720,// 191 PAY 156 

    0x5e642533,// 192 PAY 157 

    0x6ac930dc,// 193 PAY 158 

    0x372c5833,// 194 PAY 159 

    0xe5f7e2c4,// 195 PAY 160 

    0x78e662f3,// 196 PAY 161 

    0xb20ac4bb,// 197 PAY 162 

    0x28b671d0,// 198 PAY 163 

    0x9764febd,// 199 PAY 164 

    0xab4e3a7e,// 200 PAY 165 

    0xbe2309a4,// 201 PAY 166 

    0x9319950d,// 202 PAY 167 

    0x9067a976,// 203 PAY 168 

    0xe332ed3f,// 204 PAY 169 

    0x00925daa,// 205 PAY 170 

    0x3500e2d8,// 206 PAY 171 

    0x4d4b4bb4,// 207 PAY 172 

    0x7bca1e2e,// 208 PAY 173 

    0xf81317f1,// 209 PAY 174 

    0x228a9dc0,// 210 PAY 175 

    0x2f2e290f,// 211 PAY 176 

    0x0c3f0465,// 212 PAY 177 

    0x9c816185,// 213 PAY 178 

    0x76ef3291,// 214 PAY 179 

    0xcb524dcc,// 215 PAY 180 

    0x58a94e24,// 216 PAY 181 

    0xcbf6cf59,// 217 PAY 182 

    0x2e44ebf8,// 218 PAY 183 

    0x2ed209ea,// 219 PAY 184 

    0x49eb1917,// 220 PAY 185 

    0x7841a5a4,// 221 PAY 186 

    0x5bedfcb2,// 222 PAY 187 

    0x2db7683e,// 223 PAY 188 

    0xf59a2dd8,// 224 PAY 189 

    0xaf37d5a5,// 225 PAY 190 

    0x2d0ce308,// 226 PAY 191 

    0x527a9320,// 227 PAY 192 

    0x73b8c864,// 228 PAY 193 

    0x4f9464e0,// 229 PAY 194 

    0xf27c60ff,// 230 PAY 195 

    0xf7b85b63,// 231 PAY 196 

    0x352dd401,// 232 PAY 197 

    0x614a17b3,// 233 PAY 198 

    0xd4bfdfe5,// 234 PAY 199 

    0x6fc92e8e,// 235 PAY 200 

    0xda538c7d,// 236 PAY 201 

    0x1425cd9e,// 237 PAY 202 

    0x69e8f6cb,// 238 PAY 203 

    0x7bbc0d8e,// 239 PAY 204 

    0x8c378b8b,// 240 PAY 205 

    0x671aa0cb,// 241 PAY 206 

    0x33880aff,// 242 PAY 207 

    0x4327f49d,// 243 PAY 208 

    0x3df71093,// 244 PAY 209 

    0x54f1c138,// 245 PAY 210 

    0x2bf61121,// 246 PAY 211 

    0xdc8b2b6a,// 247 PAY 212 

    0x73bc093e,// 248 PAY 213 

    0xae9d0693,// 249 PAY 214 

    0x16af64c4,// 250 PAY 215 

    0xe18e1af4,// 251 PAY 216 

    0x9aea380b,// 252 PAY 217 

    0x9868d705,// 253 PAY 218 

    0xa9a0d7e3,// 254 PAY 219 

    0xe1fb86d8,// 255 PAY 220 

    0x343454a0,// 256 PAY 221 

    0x00e4363b,// 257 PAY 222 

    0x3bdf14ed,// 258 PAY 223 

    0x05ead44b,// 259 PAY 224 

    0x027c2938,// 260 PAY 225 

    0xee210b2e,// 261 PAY 226 

    0x91cd5ff4,// 262 PAY 227 

    0x3b74e469,// 263 PAY 228 

    0x6d8afd4f,// 264 PAY 229 

    0x4f6e5f43,// 265 PAY 230 

    0x96cbc1ef,// 266 PAY 231 

    0x24f16789,// 267 PAY 232 

    0x91652e65,// 268 PAY 233 

    0xceb360a4,// 269 PAY 234 

    0xa0770ee5,// 270 PAY 235 

    0x0403f0d4,// 271 PAY 236 

    0x558315c4,// 272 PAY 237 

    0x583d3d6e,// 273 PAY 238 

    0xf38285ab,// 274 PAY 239 

    0x2722b3b2,// 275 PAY 240 

    0x9022eaac,// 276 PAY 241 

    0xebedbd1a,// 277 PAY 242 

    0xa7c2c18b,// 278 PAY 243 

    0x4b55ee4c,// 279 PAY 244 

    0xfb872784,// 280 PAY 245 

    0xda03cbe5,// 281 PAY 246 

    0x82856583,// 282 PAY 247 

    0x1a78503b,// 283 PAY 248 

    0x47a2a654,// 284 PAY 249 

    0x766f965f,// 285 PAY 250 

    0xd7898c7e,// 286 PAY 251 

    0xf58e245a,// 287 PAY 252 

    0x2f1ed373,// 288 PAY 253 

    0x86f35c3d,// 289 PAY 254 

    0xfcb22a49,// 290 PAY 255 

    0x86d72692,// 291 PAY 256 

    0xeafc60db,// 292 PAY 257 

    0xafe7f4d6,// 293 PAY 258 

    0x9c806667,// 294 PAY 259 

    0x215cd579,// 295 PAY 260 

    0x8d6f58bc,// 296 PAY 261 

    0x4724512c,// 297 PAY 262 

    0x4a8bd6c8,// 298 PAY 263 

    0xd07247e1,// 299 PAY 264 

    0xd4acf821,// 300 PAY 265 

    0xc3bf11ba,// 301 PAY 266 

    0x6ad629d3,// 302 PAY 267 

    0xbc3d305c,// 303 PAY 268 

    0x98829e69,// 304 PAY 269 

    0xd4762a42,// 305 PAY 270 

    0x2184da8f,// 306 PAY 271 

    0x1a3eb327,// 307 PAY 272 

    0x22c68361,// 308 PAY 273 

    0xf0170121,// 309 PAY 274 

    0x00ba7401,// 310 PAY 275 

    0xf7ebfd3e,// 311 PAY 276 

    0x2f12af7e,// 312 PAY 277 

    0x04882835,// 313 PAY 278 

    0xb7935d08,// 314 PAY 279 

    0xb82bacb4,// 315 PAY 280 

    0x9bb4d163,// 316 PAY 281 

    0x79dfb8fd,// 317 PAY 282 

    0x55d600c9,// 318 PAY 283 

    0xd995cf71,// 319 PAY 284 

    0xd317307c,// 320 PAY 285 

    0x848e1d3b,// 321 PAY 286 

    0x598bc1a5,// 322 PAY 287 

    0x7d737d01,// 323 PAY 288 

    0x302fe7cc,// 324 PAY 289 

    0x121e3b87,// 325 PAY 290 

    0x09184172,// 326 PAY 291 

    0x42d89f5a,// 327 PAY 292 

    0x288f0ca4,// 328 PAY 293 

    0x7fdff556,// 329 PAY 294 

    0x639dbe1b,// 330 PAY 295 

    0x3571583c,// 331 PAY 296 

    0xe07c3a96,// 332 PAY 297 

    0xe297f4b9,// 333 PAY 298 

    0x820cfd3e,// 334 PAY 299 

    0x01059d53,// 335 PAY 300 

    0x361fdc67,// 336 PAY 301 

    0xcb1a5fb0,// 337 PAY 302 

    0x5a5d6709,// 338 PAY 303 

    0x405e9c78,// 339 PAY 304 

    0x1929046b,// 340 PAY 305 

    0x24762d47,// 341 PAY 306 

    0x7ce8c9e9,// 342 PAY 307 

    0xdc6b6ffb,// 343 PAY 308 

    0xe18a6fba,// 344 PAY 309 

    0xad6b8018,// 345 PAY 310 

    0x5b715b71,// 346 PAY 311 

    0x807f3089,// 347 PAY 312 

    0xc42d3ee3,// 348 PAY 313 

    0xfb553a7a,// 349 PAY 314 

    0xca9c59bc,// 350 PAY 315 

    0x13885e0d,// 351 PAY 316 

    0xc7c51533,// 352 PAY 317 

    0x0f15015a,// 353 PAY 318 

    0x8f8dfc0b,// 354 PAY 319 

    0xfa3aed2f,// 355 PAY 320 

    0x3112277d,// 356 PAY 321 

    0x596f70c1,// 357 PAY 322 

    0x10326c58,// 358 PAY 323 

    0x9c933db4,// 359 PAY 324 

    0x1eb0a115,// 360 PAY 325 

    0xa508477a,// 361 PAY 326 

    0x6d776fb9,// 362 PAY 327 

    0x712836c4,// 363 PAY 328 

    0x03ab5d77,// 364 PAY 329 

    0x310bbe49,// 365 PAY 330 

    0x257e3bf8,// 366 PAY 331 

    0x0a5bc5f5,// 367 PAY 332 

    0xa8c9678a,// 368 PAY 333 

    0xfcfd89a4,// 369 PAY 334 

    0x728d0738,// 370 PAY 335 

    0x3d57f376,// 371 PAY 336 

    0x5946c3be,// 372 PAY 337 

    0xb51b4fc9,// 373 PAY 338 

    0x98ac4917,// 374 PAY 339 

    0x2903b967,// 375 PAY 340 

    0xdd3da8a7,// 376 PAY 341 

    0x54296891,// 377 PAY 342 

    0xaff94688,// 378 PAY 343 

    0xb0ae5696,// 379 PAY 344 

    0xddaef993,// 380 PAY 345 

    0x78d248b9,// 381 PAY 346 

    0x1992a810,// 382 PAY 347 

    0xb366b5b4,// 383 PAY 348 

    0x325802e5,// 384 PAY 349 

    0x348fa571,// 385 PAY 350 

    0x0ed7d0b0,// 386 PAY 351 

    0x7ee6244e,// 387 PAY 352 

    0x46caf135,// 388 PAY 353 

    0x452fdbae,// 389 PAY 354 

    0x2bc2dcff,// 390 PAY 355 

    0x4a493acb,// 391 PAY 356 

    0x4678bbf7,// 392 PAY 357 

    0x4e25fd57,// 393 PAY 358 

    0x7b66335d,// 394 PAY 359 

    0x405d3ff4,// 395 PAY 360 

    0x7d5bb931,// 396 PAY 361 

    0x52ef9a76,// 397 PAY 362 

    0x8181b40b,// 398 PAY 363 

    0xff287703,// 399 PAY 364 

    0x478903c7,// 400 PAY 365 

    0x5d15cf24,// 401 PAY 366 

    0xbad10cd5,// 402 PAY 367 

    0xd0ab45b8,// 403 PAY 368 

    0xab37ff49,// 404 PAY 369 

    0xbd7ed0b0,// 405 PAY 370 

    0xf8e68554,// 406 PAY 371 

    0x099f9165,// 407 PAY 372 

    0xada0d06b,// 408 PAY 373 

    0x15146088,// 409 PAY 374 

    0x05966173,// 410 PAY 375 

    0x3560d1ae,// 411 PAY 376 

    0x67dc6ff0,// 412 PAY 377 

    0x7c56a6c0,// 413 PAY 378 

    0x8fc5a114,// 414 PAY 379 

    0x17515eb7,// 415 PAY 380 

    0xfeec1beb,// 416 PAY 381 

    0xbf299699,// 417 PAY 382 

    0xc9ea6a31,// 418 PAY 383 

    0x88399cc3,// 419 PAY 384 

    0x8d12dcba,// 420 PAY 385 

    0x485b9102,// 421 PAY 386 

    0x59d4a077,// 422 PAY 387 

    0xeebae2cb,// 423 PAY 388 

    0x7b63162b,// 424 PAY 389 

    0xeac27ead,// 425 PAY 390 

    0x5d5ef659,// 426 PAY 391 

    0xdc9588d3,// 427 PAY 392 

    0x20658942,// 428 PAY 393 

    0xa5ee238b,// 429 PAY 394 

    0x2f54233d,// 430 PAY 395 

    0x00d0d763,// 431 PAY 396 

    0xbfcf39b9,// 432 PAY 397 

    0xd40d860b,// 433 PAY 398 

    0x97dbe337,// 434 PAY 399 

    0x75585dd4,// 435 PAY 400 

    0x65d2925f,// 436 PAY 401 

    0xe82a1205,// 437 PAY 402 

    0x7ece700f,// 438 PAY 403 

    0x8ef99c19,// 439 PAY 404 

    0x7ff91348,// 440 PAY 405 

    0xcdc15188,// 441 PAY 406 

    0xd01b9e8a,// 442 PAY 407 

    0x853f9ee2,// 443 PAY 408 

    0x78d1adc2,// 444 PAY 409 

    0xa7b8b4b8,// 445 PAY 410 

    0x2d2b829e,// 446 PAY 411 

    0x4b56e197,// 447 PAY 412 

    0x84101720,// 448 PAY 413 

    0x81fe67ea,// 449 PAY 414 

    0xc125a5d1,// 450 PAY 415 

    0x02170a79,// 451 PAY 416 

    0x5630957c,// 452 PAY 417 

    0xd41db11f,// 453 PAY 418 

    0x62e5e3d2,// 454 PAY 419 

    0x72644d32,// 455 PAY 420 

    0x32000dbd,// 456 PAY 421 

    0x30db2b89,// 457 PAY 422 

    0xdbb70e89,// 458 PAY 423 

    0x50aa89d5,// 459 PAY 424 

    0x64a8c93c,// 460 PAY 425 

    0x01cc3b5f,// 461 PAY 426 

    0x271e3a6a,// 462 PAY 427 

    0x11cca92c,// 463 PAY 428 

    0xd1fddc23,// 464 PAY 429 

    0x26000000,// 465 PAY 430 

/// STA is 1 words. 

/// STA num_pkts       : 75 

/// STA pkt_idx        : 68 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x28 

    0x0111284b // 466 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 80 (0x50) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_sha1_pkt33_tmpl[] = {
    0xb8010050,// 1 CCH   1 

/// ECH cache_idx      : 0x06 

/// ECH pdu_tag        : 0x00 

    0x00060000,// 2 ECH   1 

/// SCX is 19 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound !save_icv !insert_icv check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : SHA1 

/// SCX aes_size        : RC4UPDT_AES192 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x5 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 40 

    0x08000013,// 3 SCX   1 

    0x8061485f,// 4 SCX   2 

    0x00001500,// 5 SCX   3 

    0x4db8129a,// 6 SCX   4 

    0x61c4bca0,// 7 SCX   5 

    0x956c95b8,// 8 SCX   6 

    0xc27a4c66,// 9 SCX   7 

    0x510b4293,// 10 SCX   8 

    0x961eb6f1,// 11 SCX   9 

    0xc6f89957,// 12 SCX  10 

    0x03105da5,// 13 SCX  11 

    0x3fdbc817,// 14 SCX  12 

    0xa67abd27,// 15 SCX  13 

    0x7dead477,// 16 SCX  14 

    0xbd714fce,// 17 SCX  15 

    0xb39b2a4c,// 18 SCX  16 

    0xeb23ed19,// 19 SCX  17 

    0xf112447b,// 20 SCX  18 

    0x1dbe92b7,// 21 SCX  19 

/// BFD is 3 words. 

/// BFD tot_len        : 974 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 924 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 924 

/// BFD lencrypto      : 56 

/// BFD ofstcrypto     : 544 

/// BFD (ofst+len)cry  : 600 

/// BFD ofstiv         : 400 

/// BFD ofsticv        : 924 

    0x0000039c,// 22 BFD   1 

    0x02200038,// 23 BFD   2 

    0x039c0190,// 24 BFD   3 

/// MFM is 11 words. 

/// MFM vldnibs        : 4e 

    0x4e00058f,// 25 MFM   1 

    0xe6fb000c,// 26 MFM   2 

    0x4766ac60,// 27 MFM   3 

    0x577e112c,// 28 MFM   4 

    0x832cd83e,// 29 MFM   5 

    0xfcbe2bc2,// 30 MFM   6 

    0x43a179da,// 31 MFM   7 

    0x57e70efd,// 32 MFM   8 

    0x23eb48e6,// 33 MFM   9 

    0x1557dc52,// 34 MFM  10 

    0xb9000000,// 35 MFM  11 

/// BDA is 245 words. 

/// BDA size     is 974 (0x3ce) 

/// BDA id       is 0x8db2 

    0x03ce8db2,// 36 BDA   1 

/// PAY Generic Data size   : 974 byte(s) 

/// PAD Buffer Data Pad size   : 2 byte(s) 

    0x4f940b6a,// 37 PAY   1 

    0x2abd848e,// 38 PAY   2 

    0xe653f38a,// 39 PAY   3 

    0xca30e849,// 40 PAY   4 

    0xef2541a4,// 41 PAY   5 

    0x35d3b16b,// 42 PAY   6 

    0x02e66a51,// 43 PAY   7 

    0x2d115028,// 44 PAY   8 

    0x0ab24a8b,// 45 PAY   9 

    0xd0552c9c,// 46 PAY  10 

    0xea0c15b8,// 47 PAY  11 

    0x79744112,// 48 PAY  12 

    0xbb70dad1,// 49 PAY  13 

    0xb98169dd,// 50 PAY  14 

    0x629734f4,// 51 PAY  15 

    0x4ac0b885,// 52 PAY  16 

    0xde89f7e2,// 53 PAY  17 

    0xb814edc8,// 54 PAY  18 

    0x8d4786ec,// 55 PAY  19 

    0x3fd2d8bb,// 56 PAY  20 

    0x14da1c82,// 57 PAY  21 

    0xbc3d16de,// 58 PAY  22 

    0xb6d177ae,// 59 PAY  23 

    0x7447db56,// 60 PAY  24 

    0xc50ee470,// 61 PAY  25 

    0xbc4cf9a3,// 62 PAY  26 

    0x64a8e39c,// 63 PAY  27 

    0x34ea3348,// 64 PAY  28 

    0x5f7ecd35,// 65 PAY  29 

    0xb6a6aaf1,// 66 PAY  30 

    0x9105c6fb,// 67 PAY  31 

    0xa157bb6c,// 68 PAY  32 

    0xe09a33be,// 69 PAY  33 

    0x40dd219c,// 70 PAY  34 

    0x97236308,// 71 PAY  35 

    0xd809e585,// 72 PAY  36 

    0x4b81f895,// 73 PAY  37 

    0xc446cf58,// 74 PAY  38 

    0xc231a844,// 75 PAY  39 

    0x0e467be6,// 76 PAY  40 

    0x44e0c4e5,// 77 PAY  41 

    0xf9725de6,// 78 PAY  42 

    0xcd570a68,// 79 PAY  43 

    0x0450c727,// 80 PAY  44 

    0xeddf55ed,// 81 PAY  45 

    0xc35bc22a,// 82 PAY  46 

    0xa246a7c7,// 83 PAY  47 

    0xb89fc750,// 84 PAY  48 

    0xe0afac88,// 85 PAY  49 

    0xd53bd6e7,// 86 PAY  50 

    0x3fa6a171,// 87 PAY  51 

    0xc9698728,// 88 PAY  52 

    0x118cdd88,// 89 PAY  53 

    0x92f878d8,// 90 PAY  54 

    0x51777b08,// 91 PAY  55 

    0x08471989,// 92 PAY  56 

    0x6e5bda65,// 93 PAY  57 

    0x2b30fd72,// 94 PAY  58 

    0xcbfc0343,// 95 PAY  59 

    0x1cde6eaf,// 96 PAY  60 

    0xe33b914c,// 97 PAY  61 

    0x6ca3ffe7,// 98 PAY  62 

    0xc3fa74bf,// 99 PAY  63 

    0x169a28d1,// 100 PAY  64 

    0x13d8f724,// 101 PAY  65 

    0x094e701c,// 102 PAY  66 

    0x1b895a33,// 103 PAY  67 

    0x0fca1359,// 104 PAY  68 

    0x052e391d,// 105 PAY  69 

    0x179ed43e,// 106 PAY  70 

    0x1090fe5a,// 107 PAY  71 

    0x8e90916b,// 108 PAY  72 

    0x5b27607a,// 109 PAY  73 

    0x1342b550,// 110 PAY  74 

    0xc8131276,// 111 PAY  75 

    0xf6915c70,// 112 PAY  76 

    0x00de7160,// 113 PAY  77 

    0x93956c64,// 114 PAY  78 

    0x867b5bb6,// 115 PAY  79 

    0x228dc8c8,// 116 PAY  80 

    0x67622ca1,// 117 PAY  81 

    0x48557a72,// 118 PAY  82 

    0x2ff4ad73,// 119 PAY  83 

    0xe42fbcc4,// 120 PAY  84 

    0x7455cdf1,// 121 PAY  85 

    0x8a40d3f6,// 122 PAY  86 

    0x21839277,// 123 PAY  87 

    0x5984e342,// 124 PAY  88 

    0x36bbb44a,// 125 PAY  89 

    0x59347117,// 126 PAY  90 

    0x301984e4,// 127 PAY  91 

    0x6f875000,// 128 PAY  92 

    0xfe1f794b,// 129 PAY  93 

    0xa69d9d8b,// 130 PAY  94 

    0x4f8f5b10,// 131 PAY  95 

    0x8b2e186a,// 132 PAY  96 

    0xe61f12a9,// 133 PAY  97 

    0xc891a330,// 134 PAY  98 

    0x4bf1b890,// 135 PAY  99 

    0x593b4576,// 136 PAY 100 

    0xf216c60b,// 137 PAY 101 

    0xb5d7d9db,// 138 PAY 102 

    0x3d56cf73,// 139 PAY 103 

    0xbe060561,// 140 PAY 104 

    0x875d37b2,// 141 PAY 105 

    0xbaaa2093,// 142 PAY 106 

    0xdac61be8,// 143 PAY 107 

    0x651ffc1f,// 144 PAY 108 

    0xfd3c5b34,// 145 PAY 109 

    0x902dd27c,// 146 PAY 110 

    0x4575a5a6,// 147 PAY 111 

    0x9a3548a0,// 148 PAY 112 

    0x9f4d6e6f,// 149 PAY 113 

    0x1b1bb5bf,// 150 PAY 114 

    0xacbeafa6,// 151 PAY 115 

    0x3d08bedd,// 152 PAY 116 

    0xd1329c5a,// 153 PAY 117 

    0x65802473,// 154 PAY 118 

    0xf568490a,// 155 PAY 119 

    0x6dcfd04e,// 156 PAY 120 

    0xac19b859,// 157 PAY 121 

    0x904f6d80,// 158 PAY 122 

    0x8980e288,// 159 PAY 123 

    0xdeda0b3f,// 160 PAY 124 

    0x9da08166,// 161 PAY 125 

    0xe540ce50,// 162 PAY 126 

    0xacb0c98a,// 163 PAY 127 

    0x92fc86fe,// 164 PAY 128 

    0x576c5ae1,// 165 PAY 129 

    0x72ca6392,// 166 PAY 130 

    0x82a2bdd6,// 167 PAY 131 

    0x199787d9,// 168 PAY 132 

    0x493dedde,// 169 PAY 133 

    0x6002da19,// 170 PAY 134 

    0x474cf468,// 171 PAY 135 

    0x656bc8c8,// 172 PAY 136 

    0x276268c2,// 173 PAY 137 

    0xb51e0694,// 174 PAY 138 

    0x22c66d1d,// 175 PAY 139 

    0xd44040f9,// 176 PAY 140 

    0xffd4661f,// 177 PAY 141 

    0x766cc833,// 178 PAY 142 

    0xe6ca62f0,// 179 PAY 143 

    0xed1f4fe4,// 180 PAY 144 

    0x12d4c646,// 181 PAY 145 

    0x77945672,// 182 PAY 146 

    0x11a80dd1,// 183 PAY 147 

    0x95207c87,// 184 PAY 148 

    0x1be5609e,// 185 PAY 149 

    0xa763ea34,// 186 PAY 150 

    0x0a1c3096,// 187 PAY 151 

    0xb2ab531f,// 188 PAY 152 

    0xbcdf44cf,// 189 PAY 153 

    0x542f388f,// 190 PAY 154 

    0x4d041037,// 191 PAY 155 

    0xa2a3466b,// 192 PAY 156 

    0xa3c2ef23,// 193 PAY 157 

    0xb37ef63f,// 194 PAY 158 

    0x4fca7635,// 195 PAY 159 

    0xa31c2a59,// 196 PAY 160 

    0xb6774f57,// 197 PAY 161 

    0x3ebe6dd4,// 198 PAY 162 

    0xa53368d5,// 199 PAY 163 

    0xecd2830e,// 200 PAY 164 

    0xa1d38c7d,// 201 PAY 165 

    0xf4b163e1,// 202 PAY 166 

    0xc45dcfe7,// 203 PAY 167 

    0x0ac6e791,// 204 PAY 168 

    0x839d075f,// 205 PAY 169 

    0x81d2a178,// 206 PAY 170 

    0x3e7f316c,// 207 PAY 171 

    0x658c0ec4,// 208 PAY 172 

    0x06c6cd1a,// 209 PAY 173 

    0x91b47f6b,// 210 PAY 174 

    0x78b8ebf3,// 211 PAY 175 

    0xd7aa7686,// 212 PAY 176 

    0xf91cb518,// 213 PAY 177 

    0xe789455a,// 214 PAY 178 

    0xf88aa746,// 215 PAY 179 

    0xd6725d68,// 216 PAY 180 

    0x0e978116,// 217 PAY 181 

    0xd2277f33,// 218 PAY 182 

    0xce8ab423,// 219 PAY 183 

    0x682f7b30,// 220 PAY 184 

    0x14de08fc,// 221 PAY 185 

    0x9f244cd3,// 222 PAY 186 

    0xb5354c4f,// 223 PAY 187 

    0x127a5aff,// 224 PAY 188 

    0x0f2eb3b4,// 225 PAY 189 

    0x5eac89c3,// 226 PAY 190 

    0x11ee2607,// 227 PAY 191 

    0xec4d1710,// 228 PAY 192 

    0x1c40cab3,// 229 PAY 193 

    0xb6b91cdb,// 230 PAY 194 

    0x5a98e7d4,// 231 PAY 195 

    0xe5c62fe9,// 232 PAY 196 

    0x1b5591d2,// 233 PAY 197 

    0x5bdff056,// 234 PAY 198 

    0x4ce9660d,// 235 PAY 199 

    0x0e82381b,// 236 PAY 200 

    0x3ac0cf02,// 237 PAY 201 

    0x3707ec3a,// 238 PAY 202 

    0x74445feb,// 239 PAY 203 

    0x55e2a0eb,// 240 PAY 204 

    0x1ddbd3cc,// 241 PAY 205 

    0xf2037385,// 242 PAY 206 

    0xed934ee0,// 243 PAY 207 

    0xdc6991a2,// 244 PAY 208 

    0xca006cc4,// 245 PAY 209 

    0xe8832d4f,// 246 PAY 210 

    0xa6f4748c,// 247 PAY 211 

    0xea69d6dc,// 248 PAY 212 

    0x2b653b48,// 249 PAY 213 

    0x624bf70f,// 250 PAY 214 

    0x13c924db,// 251 PAY 215 

    0xdbdc0c25,// 252 PAY 216 

    0xe62a55cb,// 253 PAY 217 

    0xcc03a7b7,// 254 PAY 218 

    0x8e50e9d0,// 255 PAY 219 

    0xbe1a0279,// 256 PAY 220 

    0x911d917b,// 257 PAY 221 

    0x5fcf3f74,// 258 PAY 222 

    0x1cc1fc9f,// 259 PAY 223 

    0xc50eafe0,// 260 PAY 224 

    0xb03a9c11,// 261 PAY 225 

    0xf81e4170,// 262 PAY 226 

    0xb3da49db,// 263 PAY 227 

    0x9a28ce0f,// 264 PAY 228 

    0x61c68353,// 265 PAY 229 

    0xd0b85f6b,// 266 PAY 230 

    0x87fb5545,// 267 PAY 231 

    0xcca09990,// 268 PAY 232 

    0x00665fd9,// 269 PAY 233 

    0x4056e1d9,// 270 PAY 234 

    0xd3660188,// 271 PAY 235 

    0x845df91c,// 272 PAY 236 

    0x27ca305c,// 273 PAY 237 

    0xd413ece9,// 274 PAY 238 

    0x213ba55c,// 275 PAY 239 

    0x2af6b27d,// 276 PAY 240 

    0x73dc82a7,// 277 PAY 241 

    0x65d1300e,// 278 PAY 242 

    0xd7bcc133,// 279 PAY 243 

    0xe1c10000,// 280 PAY 244 

/// STA is 1 words. 

/// STA num_pkts       : 55 

/// STA pkt_idx        : 141 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xb2 

    0x0234b237 // 281 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 80 (0x50) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_sha1_pkt34_tmpl[] = {
    0xb8010050,// 1 CCH   1 

/// ECH cache_idx      : 0x0e 

/// ECH pdu_tag        : 0x00 

    0x000e0000,// 2 ECH   1 

/// SCX is 19 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound save_icv insert_icv !check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : SHA1 

/// SCX aes_size        : AES256 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x3 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 40 

    0x00000013,// 3 SCX   1 

    0x8062484a,// 4 SCX   2 

    0x00006300,// 5 SCX   3 

    0xfa634ba9,// 6 SCX   4 

    0xdb5fd7e6,// 7 SCX   5 

    0x5624d51b,// 8 SCX   6 

    0xdd23dbed,// 9 SCX   7 

    0x44913200,// 10 SCX   8 

    0xe32f1946,// 11 SCX   9 

    0x79a82a58,// 12 SCX  10 

    0x1d0957b9,// 13 SCX  11 

    0x250df77e,// 14 SCX  12 

    0xdafc1e2c,// 15 SCX  13 

    0xa91a681a,// 16 SCX  14 

    0x354c1267,// 17 SCX  15 

    0x45138a3c,// 18 SCX  16 

    0x62f524d8,// 19 SCX  17 

    0xdcbe5e26,// 20 SCX  18 

    0xb2532cf4,// 21 SCX  19 

/// BFD is 3 words. 

/// BFD tot_len        : 1601 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 1485 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 1485 

/// BFD lencrypto      : 856 

/// BFD ofstcrypto     : 176 

/// BFD (ofst+len)cry  : 1032 

/// BFD ofstiv         : 156 

/// BFD ofsticv        : 1580 

    0x000005cd,// 22 BFD   1 

    0x00b00358,// 23 BFD   2 

    0x062c009c,// 24 BFD   3 

/// MFM is 16 words. 

/// MFM vldnibs        : 7c 

    0x7c007871,// 25 MFM   1 

    0x625f7a56,// 26 MFM   2 

    0x154f2943,// 27 MFM   3 

    0x864708a4,// 28 MFM   4 

    0x38c8db42,// 29 MFM   5 

    0x469e74fa,// 30 MFM   6 

    0x8f48d0ad,// 31 MFM   7 

    0x9fe93282,// 32 MFM   8 

    0xf8285024,// 33 MFM   9 

    0xb35efa8f,// 34 MFM  10 

    0x90b09705,// 35 MFM  11 

    0x5e6f6524,// 36 MFM  12 

    0xb0b1c923,// 37 MFM  13 

    0x0f1b3941,// 38 MFM  14 

    0x12406f0f,// 39 MFM  15 

    0xbcde2e35,// 40 MFM  16 

/// BDA is 402 words. 

/// BDA size     is 1601 (0x641) 

/// BDA id       is 0xaed0 

    0x0641aed0,// 41 BDA   1 

/// PAY Generic Data size   : 1601 byte(s) 

/// PAD Buffer Data Pad size   : 3 byte(s) 

    0xa7e41548,// 42 PAY   1 

    0x0f0080ba,// 43 PAY   2 

    0x7dc32ee4,// 44 PAY   3 

    0x358d2acb,// 45 PAY   4 

    0x395692b5,// 46 PAY   5 

    0xd9827350,// 47 PAY   6 

    0x5a0aa4bf,// 48 PAY   7 

    0x83873264,// 49 PAY   8 

    0xf7eb1eec,// 50 PAY   9 

    0xf2cdb23c,// 51 PAY  10 

    0x37c2992c,// 52 PAY  11 

    0x0352037d,// 53 PAY  12 

    0x2825a077,// 54 PAY  13 

    0x76a028d1,// 55 PAY  14 

    0x551f8239,// 56 PAY  15 

    0x9d982f34,// 57 PAY  16 

    0x2aba992a,// 58 PAY  17 

    0x9e051cfe,// 59 PAY  18 

    0xc0c87811,// 60 PAY  19 

    0x3b49727d,// 61 PAY  20 

    0x3be1785f,// 62 PAY  21 

    0xa472e933,// 63 PAY  22 

    0x68bb7fa5,// 64 PAY  23 

    0xf03f21ce,// 65 PAY  24 

    0x41a9a3dc,// 66 PAY  25 

    0xab506eb6,// 67 PAY  26 

    0x4aa7aa0d,// 68 PAY  27 

    0xd8eab594,// 69 PAY  28 

    0xbc9160f5,// 70 PAY  29 

    0x67fa8fac,// 71 PAY  30 

    0xe61eea09,// 72 PAY  31 

    0x7b7bbc15,// 73 PAY  32 

    0x73d64f9a,// 74 PAY  33 

    0x75191bb2,// 75 PAY  34 

    0x91fd0bfb,// 76 PAY  35 

    0x7b17f556,// 77 PAY  36 

    0xc9c77013,// 78 PAY  37 

    0xbdb6ffa4,// 79 PAY  38 

    0x6ccc5889,// 80 PAY  39 

    0xd232d7ec,// 81 PAY  40 

    0x71dc7b16,// 82 PAY  41 

    0x6f979eb0,// 83 PAY  42 

    0xea6910db,// 84 PAY  43 

    0x74d2f3e2,// 85 PAY  44 

    0xc0b38d5a,// 86 PAY  45 

    0xfae8269b,// 87 PAY  46 

    0x5065c9f8,// 88 PAY  47 

    0xc577f604,// 89 PAY  48 

    0x5dc5cdcb,// 90 PAY  49 

    0x097e16c8,// 91 PAY  50 

    0x64a94a4e,// 92 PAY  51 

    0xba1e224e,// 93 PAY  52 

    0xfc045b66,// 94 PAY  53 

    0x5c5b535d,// 95 PAY  54 

    0x2187ec46,// 96 PAY  55 

    0xc5b374c8,// 97 PAY  56 

    0x55a20904,// 98 PAY  57 

    0x87dd4440,// 99 PAY  58 

    0x8c97273f,// 100 PAY  59 

    0x8daadc10,// 101 PAY  60 

    0x8c0bdf00,// 102 PAY  61 

    0x527afa55,// 103 PAY  62 

    0x6174c770,// 104 PAY  63 

    0x9b1eb55c,// 105 PAY  64 

    0xa4c73a7e,// 106 PAY  65 

    0xf21f82d3,// 107 PAY  66 

    0xeaa13c63,// 108 PAY  67 

    0x18d4a1db,// 109 PAY  68 

    0x95054936,// 110 PAY  69 

    0xbc0a88b0,// 111 PAY  70 

    0xe29c5ed2,// 112 PAY  71 

    0x5eca28db,// 113 PAY  72 

    0x3c09935b,// 114 PAY  73 

    0x0bc89c1c,// 115 PAY  74 

    0x326f7322,// 116 PAY  75 

    0x21fe8241,// 117 PAY  76 

    0x1d69afba,// 118 PAY  77 

    0x72efded8,// 119 PAY  78 

    0x77a3d48d,// 120 PAY  79 

    0x55efe4d4,// 121 PAY  80 

    0xf52f5289,// 122 PAY  81 

    0xa03fdef4,// 123 PAY  82 

    0x510811e3,// 124 PAY  83 

    0x6252ae19,// 125 PAY  84 

    0xf310dfff,// 126 PAY  85 

    0x1c42f7eb,// 127 PAY  86 

    0xf262cdfb,// 128 PAY  87 

    0x4c9f8566,// 129 PAY  88 

    0xb13fa688,// 130 PAY  89 

    0x24845d32,// 131 PAY  90 

    0x136f5094,// 132 PAY  91 

    0xcdfcd154,// 133 PAY  92 

    0x972e151d,// 134 PAY  93 

    0x4ea722d7,// 135 PAY  94 

    0x9f197aed,// 136 PAY  95 

    0x01a9bce3,// 137 PAY  96 

    0x9ac4750e,// 138 PAY  97 

    0x774dd9e7,// 139 PAY  98 

    0x7f415a2e,// 140 PAY  99 

    0x557567ff,// 141 PAY 100 

    0x9ffb79bd,// 142 PAY 101 

    0xe7aa5d92,// 143 PAY 102 

    0x419423c9,// 144 PAY 103 

    0x6f500e0a,// 145 PAY 104 

    0xffa01410,// 146 PAY 105 

    0x85aa24dd,// 147 PAY 106 

    0x69a76821,// 148 PAY 107 

    0x18b74bf6,// 149 PAY 108 

    0x79621f26,// 150 PAY 109 

    0x1a85c5e1,// 151 PAY 110 

    0xe9c89f63,// 152 PAY 111 

    0xd724e5d6,// 153 PAY 112 

    0xcd6189d2,// 154 PAY 113 

    0x59ee9db5,// 155 PAY 114 

    0xe2326c71,// 156 PAY 115 

    0x816d3255,// 157 PAY 116 

    0x63a8ee23,// 158 PAY 117 

    0xffa5f482,// 159 PAY 118 

    0xdcb37d28,// 160 PAY 119 

    0xee4c615d,// 161 PAY 120 

    0xb400fbb7,// 162 PAY 121 

    0x485336cf,// 163 PAY 122 

    0x9dbc7250,// 164 PAY 123 

    0x0b29be68,// 165 PAY 124 

    0x2cf53ce1,// 166 PAY 125 

    0x58bdf8e8,// 167 PAY 126 

    0xa48c9000,// 168 PAY 127 

    0xa47113c2,// 169 PAY 128 

    0x2e557001,// 170 PAY 129 

    0x25371916,// 171 PAY 130 

    0x0f226ec0,// 172 PAY 131 

    0x7565f794,// 173 PAY 132 

    0x5d9204e2,// 174 PAY 133 

    0x5782b634,// 175 PAY 134 

    0x33cb8da3,// 176 PAY 135 

    0x0f7c5571,// 177 PAY 136 

    0x7c2fb549,// 178 PAY 137 

    0x4482220b,// 179 PAY 138 

    0xba052e89,// 180 PAY 139 

    0x9aaae304,// 181 PAY 140 

    0x7c048400,// 182 PAY 141 

    0x1ac8b70a,// 183 PAY 142 

    0x657d9d70,// 184 PAY 143 

    0x48b2ff81,// 185 PAY 144 

    0x4db7821b,// 186 PAY 145 

    0x344669e1,// 187 PAY 146 

    0x1b851d1b,// 188 PAY 147 

    0xf706f5c7,// 189 PAY 148 

    0x45a8c961,// 190 PAY 149 

    0xbe3cbbcd,// 191 PAY 150 

    0x5bd276a5,// 192 PAY 151 

    0xcfc4e4dd,// 193 PAY 152 

    0xc292f43b,// 194 PAY 153 

    0xa335be7e,// 195 PAY 154 

    0xf9d4718c,// 196 PAY 155 

    0xf6ef95f3,// 197 PAY 156 

    0x2f904b82,// 198 PAY 157 

    0x6aefb310,// 199 PAY 158 

    0xa7fa546f,// 200 PAY 159 

    0xf6be7210,// 201 PAY 160 

    0x60371082,// 202 PAY 161 

    0x1c91647c,// 203 PAY 162 

    0x3450aed9,// 204 PAY 163 

    0x5799830c,// 205 PAY 164 

    0xa758ec97,// 206 PAY 165 

    0x4a6102a4,// 207 PAY 166 

    0x7413c0b2,// 208 PAY 167 

    0x60dbda01,// 209 PAY 168 

    0x3765a4d9,// 210 PAY 169 

    0x37de5b13,// 211 PAY 170 

    0x3cc89ce6,// 212 PAY 171 

    0xdd7d7b46,// 213 PAY 172 

    0xa9d8f977,// 214 PAY 173 

    0x9edaccc8,// 215 PAY 174 

    0xcdd01808,// 216 PAY 175 

    0x6eaa5d1a,// 217 PAY 176 

    0xb6b11b90,// 218 PAY 177 

    0x6dbfb0ec,// 219 PAY 178 

    0xe7449607,// 220 PAY 179 

    0xf5667f7f,// 221 PAY 180 

    0x7bb1e4c3,// 222 PAY 181 

    0xd266b8b3,// 223 PAY 182 

    0x1bf4a516,// 224 PAY 183 

    0xb611b0d2,// 225 PAY 184 

    0x28280d64,// 226 PAY 185 

    0x6d8d450f,// 227 PAY 186 

    0xf3c19f6c,// 228 PAY 187 

    0x3000b113,// 229 PAY 188 

    0x678946fb,// 230 PAY 189 

    0xc7ddf6d1,// 231 PAY 190 

    0x80e71945,// 232 PAY 191 

    0x5cf319c7,// 233 PAY 192 

    0xe02e4907,// 234 PAY 193 

    0x7491e876,// 235 PAY 194 

    0x8a88a9b4,// 236 PAY 195 

    0x3888eff9,// 237 PAY 196 

    0x250664c0,// 238 PAY 197 

    0x8a5f232a,// 239 PAY 198 

    0x9a233629,// 240 PAY 199 

    0x5de5b69b,// 241 PAY 200 

    0x04d49b55,// 242 PAY 201 

    0xae19850a,// 243 PAY 202 

    0x33c0f54c,// 244 PAY 203 

    0xb29bf49c,// 245 PAY 204 

    0x8be7a1fb,// 246 PAY 205 

    0x8dfa17bb,// 247 PAY 206 

    0xecabc993,// 248 PAY 207 

    0x3a415bb1,// 249 PAY 208 

    0xdf8b8e99,// 250 PAY 209 

    0xb557165c,// 251 PAY 210 

    0x6ab6a1f3,// 252 PAY 211 

    0xf0535603,// 253 PAY 212 

    0xe909d597,// 254 PAY 213 

    0xce6f7569,// 255 PAY 214 

    0x6682d590,// 256 PAY 215 

    0x43793180,// 257 PAY 216 

    0x822bc57d,// 258 PAY 217 

    0x6352e4d3,// 259 PAY 218 

    0x855b3a17,// 260 PAY 219 

    0x5f561f02,// 261 PAY 220 

    0x89ab7c36,// 262 PAY 221 

    0x355bb07b,// 263 PAY 222 

    0xdcb89791,// 264 PAY 223 

    0x23e9b062,// 265 PAY 224 

    0x8023dd2f,// 266 PAY 225 

    0x2e262846,// 267 PAY 226 

    0x67afa9df,// 268 PAY 227 

    0x28f6cd71,// 269 PAY 228 

    0x7a00d029,// 270 PAY 229 

    0xedd604c3,// 271 PAY 230 

    0x5e970adf,// 272 PAY 231 

    0x29fd9ccf,// 273 PAY 232 

    0x3a545865,// 274 PAY 233 

    0x70f966ba,// 275 PAY 234 

    0xd14ee9ab,// 276 PAY 235 

    0x4c9515a6,// 277 PAY 236 

    0xd35156f8,// 278 PAY 237 

    0x6c2d49ab,// 279 PAY 238 

    0x4e8c9219,// 280 PAY 239 

    0x64eae8d7,// 281 PAY 240 

    0xd5e55e0e,// 282 PAY 241 

    0xc1079e54,// 283 PAY 242 

    0xbf6cefb9,// 284 PAY 243 

    0xb680e372,// 285 PAY 244 

    0x629f2a19,// 286 PAY 245 

    0x1a49c4d2,// 287 PAY 246 

    0x586f5763,// 288 PAY 247 

    0x2babf0bc,// 289 PAY 248 

    0xe5e210c2,// 290 PAY 249 

    0x092bbe70,// 291 PAY 250 

    0x668de93b,// 292 PAY 251 

    0xada90407,// 293 PAY 252 

    0xdddd5861,// 294 PAY 253 

    0x80ed7137,// 295 PAY 254 

    0xe7a50cb2,// 296 PAY 255 

    0xfea8cf9d,// 297 PAY 256 

    0x1b0e3d0d,// 298 PAY 257 

    0x816e4ce8,// 299 PAY 258 

    0x8b40e11d,// 300 PAY 259 

    0x65da9e53,// 301 PAY 260 

    0x06fa45d2,// 302 PAY 261 

    0x0c01d937,// 303 PAY 262 

    0xb70c49a6,// 304 PAY 263 

    0xbaf927b7,// 305 PAY 264 

    0x4b0b157e,// 306 PAY 265 

    0xd7f06a10,// 307 PAY 266 

    0x4b4a9bd0,// 308 PAY 267 

    0x2545aeb3,// 309 PAY 268 

    0x71498839,// 310 PAY 269 

    0xf0e5c9df,// 311 PAY 270 

    0xe92a5965,// 312 PAY 271 

    0x4af32a96,// 313 PAY 272 

    0x74f2f203,// 314 PAY 273 

    0x93647cb4,// 315 PAY 274 

    0x52374408,// 316 PAY 275 

    0x3183d534,// 317 PAY 276 

    0xe423a493,// 318 PAY 277 

    0x3a3f1fcc,// 319 PAY 278 

    0x402871b7,// 320 PAY 279 

    0xb9c88a3f,// 321 PAY 280 

    0x614c1484,// 322 PAY 281 

    0x08fcb9db,// 323 PAY 282 

    0x600bb3d3,// 324 PAY 283 

    0xc8bd16e4,// 325 PAY 284 

    0x6be464d6,// 326 PAY 285 

    0xea03d276,// 327 PAY 286 

    0xb0ef486d,// 328 PAY 287 

    0xdcc8e21d,// 329 PAY 288 

    0x2461fe30,// 330 PAY 289 

    0xa97d17fa,// 331 PAY 290 

    0xc16effa9,// 332 PAY 291 

    0x0527ff33,// 333 PAY 292 

    0xb7f05911,// 334 PAY 293 

    0xca82ad1e,// 335 PAY 294 

    0xecf4b30f,// 336 PAY 295 

    0x86f1557f,// 337 PAY 296 

    0x72a8619a,// 338 PAY 297 

    0x27e3f5da,// 339 PAY 298 

    0xe6e14e4d,// 340 PAY 299 

    0x8508dae4,// 341 PAY 300 

    0xed2a7a1c,// 342 PAY 301 

    0xf55ec87f,// 343 PAY 302 

    0xb2b25811,// 344 PAY 303 

    0xae51e9d0,// 345 PAY 304 

    0x00799602,// 346 PAY 305 

    0xa7a5b9c8,// 347 PAY 306 

    0x8e420739,// 348 PAY 307 

    0x08bbc7c4,// 349 PAY 308 

    0xca33d641,// 350 PAY 309 

    0x5d693347,// 351 PAY 310 

    0xf9f655b0,// 352 PAY 311 

    0x7bf9704b,// 353 PAY 312 

    0x1cc1188f,// 354 PAY 313 

    0x9d7488c6,// 355 PAY 314 

    0x885a5071,// 356 PAY 315 

    0xa0fc0d4f,// 357 PAY 316 

    0x15552445,// 358 PAY 317 

    0x6ceff593,// 359 PAY 318 

    0x9cf0c3af,// 360 PAY 319 

    0x30c985c9,// 361 PAY 320 

    0x5eb642de,// 362 PAY 321 

    0x25188492,// 363 PAY 322 

    0x845f61c3,// 364 PAY 323 

    0x5ca7207c,// 365 PAY 324 

    0x9ca7e81e,// 366 PAY 325 

    0x34917a4e,// 367 PAY 326 

    0x77a3b762,// 368 PAY 327 

    0xee227809,// 369 PAY 328 

    0x6b8a69ca,// 370 PAY 329 

    0xa4e8f9b2,// 371 PAY 330 

    0x418186d5,// 372 PAY 331 

    0x79b2f12c,// 373 PAY 332 

    0x31851f12,// 374 PAY 333 

    0xd00c6623,// 375 PAY 334 

    0x319a977e,// 376 PAY 335 

    0x432b03be,// 377 PAY 336 

    0x6043777a,// 378 PAY 337 

    0xb510d73f,// 379 PAY 338 

    0x74d11c00,// 380 PAY 339 

    0x97964cd5,// 381 PAY 340 

    0x9da03fe8,// 382 PAY 341 

    0xe4bfa627,// 383 PAY 342 

    0xb9257901,// 384 PAY 343 

    0x8b1ea506,// 385 PAY 344 

    0x916f8fda,// 386 PAY 345 

    0x537b4228,// 387 PAY 346 

    0x82941333,// 388 PAY 347 

    0x061b83b0,// 389 PAY 348 

    0xe6282a41,// 390 PAY 349 

    0xd0fc2855,// 391 PAY 350 

    0xea3aff46,// 392 PAY 351 

    0x9b070124,// 393 PAY 352 

    0x3b4370be,// 394 PAY 353 

    0x811ff64d,// 395 PAY 354 

    0x1d8a956a,// 396 PAY 355 

    0x662ad993,// 397 PAY 356 

    0xdd55eb56,// 398 PAY 357 

    0x0107d520,// 399 PAY 358 

    0x995800e4,// 400 PAY 359 

    0xb601fe98,// 401 PAY 360 

    0x175199a4,// 402 PAY 361 

    0xf209a461,// 403 PAY 362 

    0x4e847c22,// 404 PAY 363 

    0x94b9e2b2,// 405 PAY 364 

    0x50dfd18f,// 406 PAY 365 

    0xe2cd49c6,// 407 PAY 366 

    0x3c4a909c,// 408 PAY 367 

    0x5a89d799,// 409 PAY 368 

    0x4b7622a6,// 410 PAY 369 

    0x3bac38d9,// 411 PAY 370 

    0xde9334a9,// 412 PAY 371 

    0x04c0c320,// 413 PAY 372 

    0x03ba2472,// 414 PAY 373 

    0xe452b2c7,// 415 PAY 374 

    0xed71cd37,// 416 PAY 375 

    0x38017a48,// 417 PAY 376 

    0x8c39eb37,// 418 PAY 377 

    0xc75334ab,// 419 PAY 378 

    0x2f28d248,// 420 PAY 379 

    0xfb48fbe5,// 421 PAY 380 

    0xe5563282,// 422 PAY 381 

    0xd23804f6,// 423 PAY 382 

    0xd9f5584d,// 424 PAY 383 

    0x02e0c81d,// 425 PAY 384 

    0x469fd1c4,// 426 PAY 385 

    0x72208c13,// 427 PAY 386 

    0x2278cab0,// 428 PAY 387 

    0x5166ac2a,// 429 PAY 388 

    0xe0ecc17b,// 430 PAY 389 

    0xf7ae33a2,// 431 PAY 390 

    0xcf8326dc,// 432 PAY 391 

    0xd7e26124,// 433 PAY 392 

    0x2c2df0a3,// 434 PAY 393 

    0xc66e4657,// 435 PAY 394 

    0x7e2f0c2f,// 436 PAY 395 

    0x7ddc903d,// 437 PAY 396 

    0xd0e107e4,// 438 PAY 397 

    0xdc2dc9a3,// 439 PAY 398 

    0xf8c98512,// 440 PAY 399 

    0xfb4d902a,// 441 PAY 400 

    0xde000000,// 442 PAY 401 

/// STA is 1 words. 

/// STA num_pkts       : 84 

/// STA pkt_idx        : 173 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x3d 

    0x02b53d54 // 443 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 80 (0x50) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_sha1_pkt35_tmpl[] = {
    0xb8010050,// 1 CCH   1 

/// ECH cache_idx      : 0x05 

/// ECH pdu_tag        : 0x00 

    0x00050000,// 2 ECH   1 

/// SCX is 19 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound !save_icv insert_icv !check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : SHA1 

/// SCX aes_size        : RC4UPDT_AES192 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x3 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 40 

    0x00000013,// 3 SCX   1 

    0x80614840,// 4 SCX   2 

    0x00002300,// 5 SCX   3 

    0x5fcc81fa,// 6 SCX   4 

    0x91a45d98,// 7 SCX   5 

    0x082e871b,// 8 SCX   6 

    0xa55d3466,// 9 SCX   7 

    0xe38ac5eb,// 10 SCX   8 

    0x98231ae1,// 11 SCX   9 

    0x1ad532d9,// 12 SCX  10 

    0x0fff690d,// 13 SCX  11 

    0x8abb4718,// 14 SCX  12 

    0x1913554e,// 15 SCX  13 

    0xe8e32fd7,// 16 SCX  14 

    0x91b64d07,// 17 SCX  15 

    0x0d8b5ce2,// 18 SCX  16 

    0x381f44d7,// 19 SCX  17 

    0xebb111de,// 20 SCX  18 

    0xccf843a0,// 21 SCX  19 

/// BFD is 3 words. 

/// BFD tot_len        : 1365 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 1279 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 1279 

/// BFD lencrypto      : 176 

/// BFD ofstcrypto     : 812 

/// BFD (ofst+len)cry  : 988 

/// BFD ofstiv         : 280 

/// BFD ofsticv        : 1312 

    0x000004ff,// 22 BFD   1 

    0x032c00b0,// 23 BFD   2 

    0x05200118,// 24 BFD   3 

/// MFM is 16 words. 

/// MFM vldnibs        : 7c 

    0x7c005326,// 25 MFM   1 

    0x45bc16ae,// 26 MFM   2 

    0x2d7a1c62,// 27 MFM   3 

    0xfae01724,// 28 MFM   4 

    0xaece30f3,// 29 MFM   5 

    0x67dbf359,// 30 MFM   6 

    0x34eb4210,// 31 MFM   7 

    0xcd14b00d,// 32 MFM   8 

    0x45b82bba,// 33 MFM   9 

    0x56292131,// 34 MFM  10 

    0xef5b0f15,// 35 MFM  11 

    0x8254ee86,// 36 MFM  12 

    0x010b019d,// 37 MFM  13 

    0xab5ce5b9,// 38 MFM  14 

    0x97c476ae,// 39 MFM  15 

    0xcd151a72,// 40 MFM  16 

/// BDA is 343 words. 

/// BDA size     is 1365 (0x555) 

/// BDA id       is 0x41dc 

    0x055541dc,// 41 BDA   1 

/// PAY Generic Data size   : 1365 byte(s) 

/// PAD Buffer Data Pad size   : 3 byte(s) 

    0xfde5c171,// 42 PAY   1 

    0xd44ca933,// 43 PAY   2 

    0xe6bb8a72,// 44 PAY   3 

    0x9d13346c,// 45 PAY   4 

    0x4916733b,// 46 PAY   5 

    0x6afd9439,// 47 PAY   6 

    0xc4778cb8,// 48 PAY   7 

    0x8a146238,// 49 PAY   8 

    0x7114c0da,// 50 PAY   9 

    0xbab72ef3,// 51 PAY  10 

    0x7a24ae7d,// 52 PAY  11 

    0xe600382e,// 53 PAY  12 

    0x346c475d,// 54 PAY  13 

    0xbead2674,// 55 PAY  14 

    0x48864f6e,// 56 PAY  15 

    0x644938f5,// 57 PAY  16 

    0x1d8951f9,// 58 PAY  17 

    0xd908c362,// 59 PAY  18 

    0x684d96ec,// 60 PAY  19 

    0x72a7fd8e,// 61 PAY  20 

    0x5438e0c1,// 62 PAY  21 

    0xc7a00af3,// 63 PAY  22 

    0xa72254fe,// 64 PAY  23 

    0xbf722670,// 65 PAY  24 

    0x6653d29d,// 66 PAY  25 

    0x783b228e,// 67 PAY  26 

    0x73dcccc8,// 68 PAY  27 

    0xc59c3b3c,// 69 PAY  28 

    0xd3d0214d,// 70 PAY  29 

    0xb1119947,// 71 PAY  30 

    0x235bd3b5,// 72 PAY  31 

    0xd63ec8b2,// 73 PAY  32 

    0x69cbe16c,// 74 PAY  33 

    0xda4aa076,// 75 PAY  34 

    0x23cd4682,// 76 PAY  35 

    0xfc14721f,// 77 PAY  36 

    0x5561bbfb,// 78 PAY  37 

    0x88298c97,// 79 PAY  38 

    0xe7c2bb8a,// 80 PAY  39 

    0x0bb0986a,// 81 PAY  40 

    0x58422145,// 82 PAY  41 

    0xf24433c3,// 83 PAY  42 

    0x581bcce3,// 84 PAY  43 

    0xd5efa748,// 85 PAY  44 

    0x49b323ed,// 86 PAY  45 

    0x998d4ed4,// 87 PAY  46 

    0x36fab34c,// 88 PAY  47 

    0xd74e9e2b,// 89 PAY  48 

    0xbebbe2c0,// 90 PAY  49 

    0x0ec59874,// 91 PAY  50 

    0xaab40aec,// 92 PAY  51 

    0xcb066015,// 93 PAY  52 

    0x5340b008,// 94 PAY  53 

    0xaa840ff3,// 95 PAY  54 

    0x9005647e,// 96 PAY  55 

    0xa48e2ab2,// 97 PAY  56 

    0x9e6d795f,// 98 PAY  57 

    0x624b5e26,// 99 PAY  58 

    0xdf82b516,// 100 PAY  59 

    0xfed52b87,// 101 PAY  60 

    0xd3a8f927,// 102 PAY  61 

    0x924ac432,// 103 PAY  62 

    0x52cac760,// 104 PAY  63 

    0x4f82a6db,// 105 PAY  64 

    0xdb9f370d,// 106 PAY  65 

    0xe8bf071c,// 107 PAY  66 

    0xd033f76e,// 108 PAY  67 

    0x2b7f7442,// 109 PAY  68 

    0x1f0e30aa,// 110 PAY  69 

    0x13542bb5,// 111 PAY  70 

    0x3f1f874a,// 112 PAY  71 

    0xcc98089c,// 113 PAY  72 

    0xaf8ae6f4,// 114 PAY  73 

    0x242b3ad3,// 115 PAY  74 

    0x8f8fd074,// 116 PAY  75 

    0x3991a4b6,// 117 PAY  76 

    0xb546490b,// 118 PAY  77 

    0x9b6710e2,// 119 PAY  78 

    0xd12b1203,// 120 PAY  79 

    0xa7eecf63,// 121 PAY  80 

    0x3afac131,// 122 PAY  81 

    0x1a03e452,// 123 PAY  82 

    0xa4631156,// 124 PAY  83 

    0x1b3f3aa7,// 125 PAY  84 

    0x7ec09be4,// 126 PAY  85 

    0x1d4e7799,// 127 PAY  86 

    0x2a8ecde9,// 128 PAY  87 

    0x1160be04,// 129 PAY  88 

    0xb1e2bd31,// 130 PAY  89 

    0xa01c87e2,// 131 PAY  90 

    0x78cfa6e3,// 132 PAY  91 

    0xb97bc8bc,// 133 PAY  92 

    0x720e038c,// 134 PAY  93 

    0xc99294ca,// 135 PAY  94 

    0x67254191,// 136 PAY  95 

    0x6489babc,// 137 PAY  96 

    0x9620e662,// 138 PAY  97 

    0xbffd79d9,// 139 PAY  98 

    0xab8628c2,// 140 PAY  99 

    0x5220916b,// 141 PAY 100 

    0xf9fe2743,// 142 PAY 101 

    0x692ad1dd,// 143 PAY 102 

    0x1f6178d1,// 144 PAY 103 

    0x1f0b6d47,// 145 PAY 104 

    0x9f312e92,// 146 PAY 105 

    0xf3901249,// 147 PAY 106 

    0x22baf82b,// 148 PAY 107 

    0x70bfb14f,// 149 PAY 108 

    0x64c3eaf0,// 150 PAY 109 

    0x932e3998,// 151 PAY 110 

    0x75d876fe,// 152 PAY 111 

    0xabce4c79,// 153 PAY 112 

    0xbd6f503e,// 154 PAY 113 

    0x4d564b7b,// 155 PAY 114 

    0x240baa53,// 156 PAY 115 

    0xceadad08,// 157 PAY 116 

    0x183b01fe,// 158 PAY 117 

    0xeb1d0192,// 159 PAY 118 

    0xb5a10c6f,// 160 PAY 119 

    0x493a67d0,// 161 PAY 120 

    0x5f65b62b,// 162 PAY 121 

    0x43debf57,// 163 PAY 122 

    0x389e5285,// 164 PAY 123 

    0xc573eb35,// 165 PAY 124 

    0x0d33d5ae,// 166 PAY 125 

    0x7162d489,// 167 PAY 126 

    0xebe873bb,// 168 PAY 127 

    0x5b8d84ba,// 169 PAY 128 

    0x27e72bea,// 170 PAY 129 

    0xb2fd3fe1,// 171 PAY 130 

    0xa663ffab,// 172 PAY 131 

    0x63c9fbca,// 173 PAY 132 

    0x154d248e,// 174 PAY 133 

    0xeca9319d,// 175 PAY 134 

    0xf326b6b3,// 176 PAY 135 

    0x59defe6e,// 177 PAY 136 

    0x9f0fc344,// 178 PAY 137 

    0xc4efcb1f,// 179 PAY 138 

    0x1737d976,// 180 PAY 139 

    0xaebf1bd3,// 181 PAY 140 

    0x3524fb2e,// 182 PAY 141 

    0x1cc42099,// 183 PAY 142 

    0x3c734213,// 184 PAY 143 

    0x64e5c4cb,// 185 PAY 144 

    0xe25d448a,// 186 PAY 145 

    0x3fea48a3,// 187 PAY 146 

    0x47ee5f75,// 188 PAY 147 

    0x57859dc0,// 189 PAY 148 

    0x153c3701,// 190 PAY 149 

    0xe0a75ee1,// 191 PAY 150 

    0x44fec166,// 192 PAY 151 

    0x6f8c97e0,// 193 PAY 152 

    0xcb41f179,// 194 PAY 153 

    0xf331a3f8,// 195 PAY 154 

    0x4781ac6f,// 196 PAY 155 

    0x55f66936,// 197 PAY 156 

    0xb5c9f11a,// 198 PAY 157 

    0x37e476ff,// 199 PAY 158 

    0x765de2fd,// 200 PAY 159 

    0x1d9200cf,// 201 PAY 160 

    0xd4470cdc,// 202 PAY 161 

    0x1a96cd4e,// 203 PAY 162 

    0x848b0dba,// 204 PAY 163 

    0x159dab3a,// 205 PAY 164 

    0x5810fd2c,// 206 PAY 165 

    0x0db1af08,// 207 PAY 166 

    0x6eb5ac9d,// 208 PAY 167 

    0x08338e52,// 209 PAY 168 

    0x29c8a957,// 210 PAY 169 

    0x15c70bb7,// 211 PAY 170 

    0x2e6137a0,// 212 PAY 171 

    0xe5f1d76e,// 213 PAY 172 

    0x3f3ff384,// 214 PAY 173 

    0xd1c4282a,// 215 PAY 174 

    0x86fa97a6,// 216 PAY 175 

    0x6ec9e4d5,// 217 PAY 176 

    0x2fcde2c7,// 218 PAY 177 

    0xd63825ae,// 219 PAY 178 

    0xe144d865,// 220 PAY 179 

    0x3ccaaffb,// 221 PAY 180 

    0x516d22e8,// 222 PAY 181 

    0x089937a6,// 223 PAY 182 

    0x538f2595,// 224 PAY 183 

    0x08e4fb63,// 225 PAY 184 

    0x51bf9e05,// 226 PAY 185 

    0xda0f56a1,// 227 PAY 186 

    0xea519ecc,// 228 PAY 187 

    0x087906ad,// 229 PAY 188 

    0xea3d12bc,// 230 PAY 189 

    0x70ca5888,// 231 PAY 190 

    0x6d36bd46,// 232 PAY 191 

    0x6cea6842,// 233 PAY 192 

    0xc823abb3,// 234 PAY 193 

    0x7c83710f,// 235 PAY 194 

    0x02de8f91,// 236 PAY 195 

    0xb8ae1f23,// 237 PAY 196 

    0x918cb028,// 238 PAY 197 

    0xb8cbcfac,// 239 PAY 198 

    0xa3590257,// 240 PAY 199 

    0x7d1c2004,// 241 PAY 200 

    0x325a35d6,// 242 PAY 201 

    0x7c2de067,// 243 PAY 202 

    0xfe963efe,// 244 PAY 203 

    0x23479386,// 245 PAY 204 

    0x6ce8919a,// 246 PAY 205 

    0xcaf087b5,// 247 PAY 206 

    0x32d5bc10,// 248 PAY 207 

    0x9ab998fa,// 249 PAY 208 

    0x6f4cbd46,// 250 PAY 209 

    0x13a479a0,// 251 PAY 210 

    0x41c5a61a,// 252 PAY 211 

    0x0ddb871e,// 253 PAY 212 

    0xb74e6b1a,// 254 PAY 213 

    0x146eaf58,// 255 PAY 214 

    0x59030d1c,// 256 PAY 215 

    0x439f85ee,// 257 PAY 216 

    0x96847a3e,// 258 PAY 217 

    0x0f48c707,// 259 PAY 218 

    0xf4f48e94,// 260 PAY 219 

    0x20a3179e,// 261 PAY 220 

    0x6b5bce0d,// 262 PAY 221 

    0xa3098578,// 263 PAY 222 

    0xfd07928a,// 264 PAY 223 

    0xea078c1e,// 265 PAY 224 

    0xc019c0e5,// 266 PAY 225 

    0x7b0f36f7,// 267 PAY 226 

    0x7316b2eb,// 268 PAY 227 

    0xa6d688ae,// 269 PAY 228 

    0x64869ac6,// 270 PAY 229 

    0x4e7e0a9b,// 271 PAY 230 

    0xbc83dbec,// 272 PAY 231 

    0x1b397f12,// 273 PAY 232 

    0x4787e21f,// 274 PAY 233 

    0x0acce884,// 275 PAY 234 

    0x7374209c,// 276 PAY 235 

    0xaab64962,// 277 PAY 236 

    0x439cf77b,// 278 PAY 237 

    0x682b3756,// 279 PAY 238 

    0xbd537044,// 280 PAY 239 

    0x6b76ad92,// 281 PAY 240 

    0xa6aa1c44,// 282 PAY 241 

    0xdccf0350,// 283 PAY 242 

    0xc2ee16fa,// 284 PAY 243 

    0x491c6516,// 285 PAY 244 

    0xd9837124,// 286 PAY 245 

    0x2b6d4d8f,// 287 PAY 246 

    0x66b17d92,// 288 PAY 247 

    0xb40e5c6c,// 289 PAY 248 

    0x8b314a14,// 290 PAY 249 

    0x922c00f3,// 291 PAY 250 

    0x8a16a96f,// 292 PAY 251 

    0xbfed4183,// 293 PAY 252 

    0x951211d0,// 294 PAY 253 

    0x795bb441,// 295 PAY 254 

    0xdbbd3cd1,// 296 PAY 255 

    0x838c4be5,// 297 PAY 256 

    0x055da33c,// 298 PAY 257 

    0x7f220c7b,// 299 PAY 258 

    0x9feab058,// 300 PAY 259 

    0x7a448178,// 301 PAY 260 

    0xa3ddb1f7,// 302 PAY 261 

    0xcc953e51,// 303 PAY 262 

    0xe5b8813f,// 304 PAY 263 

    0xe83069ad,// 305 PAY 264 

    0x6c32ac74,// 306 PAY 265 

    0xfe659c8d,// 307 PAY 266 

    0x071fb86f,// 308 PAY 267 

    0xf75bed8d,// 309 PAY 268 

    0xf39c869d,// 310 PAY 269 

    0x153a2bce,// 311 PAY 270 

    0xa4b9bf26,// 312 PAY 271 

    0x2c72d362,// 313 PAY 272 

    0x6f38acc4,// 314 PAY 273 

    0xcce02ceb,// 315 PAY 274 

    0x22b4c356,// 316 PAY 275 

    0xcae1bfa3,// 317 PAY 276 

    0x10312665,// 318 PAY 277 

    0xaccfd1cf,// 319 PAY 278 

    0x40868523,// 320 PAY 279 

    0x1a2dae3d,// 321 PAY 280 

    0xd39dcda8,// 322 PAY 281 

    0x4fbdc83a,// 323 PAY 282 

    0x9074a77d,// 324 PAY 283 

    0xc269c51a,// 325 PAY 284 

    0xe4cbed97,// 326 PAY 285 

    0x432ef1ad,// 327 PAY 286 

    0x4dbecd01,// 328 PAY 287 

    0xc95b15d2,// 329 PAY 288 

    0x8c437606,// 330 PAY 289 

    0xaaad52e2,// 331 PAY 290 

    0x8a68fecd,// 332 PAY 291 

    0x51bebe1a,// 333 PAY 292 

    0xee75c0ce,// 334 PAY 293 

    0xf3e26442,// 335 PAY 294 

    0x7c46eed0,// 336 PAY 295 

    0x9566db09,// 337 PAY 296 

    0xf6563858,// 338 PAY 297 

    0x51d22f9f,// 339 PAY 298 

    0x618a4ac3,// 340 PAY 299 

    0x237665ad,// 341 PAY 300 

    0xed9fbfd3,// 342 PAY 301 

    0xaa84a84f,// 343 PAY 302 

    0x3648fc19,// 344 PAY 303 

    0x5c90411d,// 345 PAY 304 

    0x1406526b,// 346 PAY 305 

    0xc26462a4,// 347 PAY 306 

    0x881b5048,// 348 PAY 307 

    0x83613b26,// 349 PAY 308 

    0x800d5718,// 350 PAY 309 

    0x763dce69,// 351 PAY 310 

    0x4ed185b5,// 352 PAY 311 

    0x4e61ecfc,// 353 PAY 312 

    0xf2a0b9ef,// 354 PAY 313 

    0x5acbaee0,// 355 PAY 314 

    0xb76345bf,// 356 PAY 315 

    0x0bc7d42e,// 357 PAY 316 

    0x9bfe687f,// 358 PAY 317 

    0xbac78eea,// 359 PAY 318 

    0xe278a498,// 360 PAY 319 

    0x537e1523,// 361 PAY 320 

    0x870e4947,// 362 PAY 321 

    0xed26e2da,// 363 PAY 322 

    0x49730cfe,// 364 PAY 323 

    0x45c0ff75,// 365 PAY 324 

    0x6fda5188,// 366 PAY 325 

    0xb8ce1d16,// 367 PAY 326 

    0xcfbd4c58,// 368 PAY 327 

    0x579e2371,// 369 PAY 328 

    0x29b0d2a0,// 370 PAY 329 

    0xf7e37b13,// 371 PAY 330 

    0xdf16d6d9,// 372 PAY 331 

    0xd46969d4,// 373 PAY 332 

    0x3474b4a2,// 374 PAY 333 

    0x6982c76e,// 375 PAY 334 

    0x4da85e77,// 376 PAY 335 

    0x6fef04a4,// 377 PAY 336 

    0x958a7716,// 378 PAY 337 

    0x3f2e0614,// 379 PAY 338 

    0xefc31558,// 380 PAY 339 

    0xbe96babb,// 381 PAY 340 

    0x575b007c,// 382 PAY 341 

    0xdd000000,// 383 PAY 342 

/// STA is 1 words. 

/// STA num_pkts       : 214 

/// STA pkt_idx        : 7 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xfa 

    0x001cfad6 // 384 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 80 (0x50) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_sha1_pkt36_tmpl[] = {
    0xb8010050,// 1 CCH   1 

/// ECH cache_idx      : 0x03 

/// ECH pdu_tag        : 0x00 

    0x00030000,// 2 ECH   1 

/// SCX is 19 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound save_icv !insert_icv check_icv !sctx_iv  

/// SCX exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : SHA1 

/// SCX aes_size        : RC4UPDT_AES192 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x3 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 40 

    0x08000013,// 3 SCX   1 

    0x80654879,// 4 SCX   2 

    0x00005342,// 5 SCX   3 

    0x87405254,// 6 SCX   4 

    0x7a867b94,// 7 SCX   5 

    0x923d8a6f,// 8 SCX   6 

    0xee387601,// 9 SCX   7 

    0xe1ed32d5,// 10 SCX   8 

    0xa9ace4b5,// 11 SCX   9 

    0x361b7de5,// 12 SCX  10 

    0xe8d441b7,// 13 SCX  11 

    0x7082cb31,// 14 SCX  12 

    0xe7956b93,// 15 SCX  13 

    0xd3ef644e,// 16 SCX  14 

    0x8481f719,// 17 SCX  15 

    0xadfa66d7,// 18 SCX  16 

    0x4b6797c5,// 19 SCX  17 

    0x0238487a,// 20 SCX  18 

    0x3e0acbfc,// 21 SCX  19 

/// BFD is 3 words. 

/// BFD tot_len        : 1065 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 527 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 527 

/// BFD lencrypto      : 120 

/// BFD ofstcrypto     : 52 

/// BFD (ofst+len)cry  : 172 

/// BFD ofstiv         : 44 

/// BFD ofsticv        : 996 

    0x0000020f,// 22 BFD   1 

    0x00340078,// 23 BFD   2 

    0x03e4002c,// 24 BFD   3 

/// MFM is 15 words. 

/// MFM vldnibs        : 71 

    0x71006081,// 25 MFM   1 

    0x1f75f3ef,// 26 MFM   2 

    0x535cd429,// 27 MFM   3 

    0x317cc1f5,// 28 MFM   4 

    0x0a3106f8,// 29 MFM   5 

    0xaf2bc953,// 30 MFM   6 

    0xf3bf4113,// 31 MFM   7 

    0xd66b62bf,// 32 MFM   8 

    0x3edf822d,// 33 MFM   9 

    0xbfad7670,// 34 MFM  10 

    0x31bdf36e,// 35 MFM  11 

    0x7c21d4f4,// 36 MFM  12 

    0x87f0decc,// 37 MFM  13 

    0x953f18e5,// 38 MFM  14 

    0x287a7000,// 39 MFM  15 

/// BDA is 268 words. 

/// BDA size     is 1065 (0x429) 

/// BDA id       is 0xda48 

    0x0429da48,// 40 BDA   1 

/// PAY Generic Data size   : 1065 byte(s) 

/// PAD Buffer Data Pad size   : 3 byte(s) 

    0xe548d3b6,// 41 PAY   1 

    0xa2d438e0,// 42 PAY   2 

    0x4b5cc796,// 43 PAY   3 

    0x87cea418,// 44 PAY   4 

    0x4eff9eb5,// 45 PAY   5 

    0xe58791ac,// 46 PAY   6 

    0x5f05b81d,// 47 PAY   7 

    0x173a6c82,// 48 PAY   8 

    0x54f64565,// 49 PAY   9 

    0xc293c25d,// 50 PAY  10 

    0x7c314b3f,// 51 PAY  11 

    0x437bea6b,// 52 PAY  12 

    0x0bbcc469,// 53 PAY  13 

    0xb77fc8f5,// 54 PAY  14 

    0x6981fa90,// 55 PAY  15 

    0xf5fff248,// 56 PAY  16 

    0x0f37cd4f,// 57 PAY  17 

    0xc73a9d0a,// 58 PAY  18 

    0xdde6518c,// 59 PAY  19 

    0xbcc5d848,// 60 PAY  20 

    0x074f1b82,// 61 PAY  21 

    0xfdde6019,// 62 PAY  22 

    0xd1f47209,// 63 PAY  23 

    0x76b9c11b,// 64 PAY  24 

    0x9e703a97,// 65 PAY  25 

    0x1eaf67ee,// 66 PAY  26 

    0xe287b0fa,// 67 PAY  27 

    0x1eb7c64f,// 68 PAY  28 

    0xdd5ce230,// 69 PAY  29 

    0xee6019e1,// 70 PAY  30 

    0x50fa70f3,// 71 PAY  31 

    0x440da749,// 72 PAY  32 

    0x6d4b53c6,// 73 PAY  33 

    0x5b85e9b4,// 74 PAY  34 

    0x924fa0b8,// 75 PAY  35 

    0x9bb75675,// 76 PAY  36 

    0xeb889683,// 77 PAY  37 

    0x2d9cdcfa,// 78 PAY  38 

    0xf99bd009,// 79 PAY  39 

    0x6f372ba6,// 80 PAY  40 

    0xf5bf3a3c,// 81 PAY  41 

    0x2cda064e,// 82 PAY  42 

    0x04675d4f,// 83 PAY  43 

    0xb11ad5cb,// 84 PAY  44 

    0xb4b16c7e,// 85 PAY  45 

    0x95cc4e2c,// 86 PAY  46 

    0x2c60cf80,// 87 PAY  47 

    0x22445a81,// 88 PAY  48 

    0x7dbfb0ee,// 89 PAY  49 

    0x223fcf53,// 90 PAY  50 

    0x851b00aa,// 91 PAY  51 

    0xa4e66d33,// 92 PAY  52 

    0x2eb69f53,// 93 PAY  53 

    0xcb6f8817,// 94 PAY  54 

    0x581c1330,// 95 PAY  55 

    0x9474c778,// 96 PAY  56 

    0xe06b47d7,// 97 PAY  57 

    0x1c26b797,// 98 PAY  58 

    0xce4f32c7,// 99 PAY  59 

    0x5569c16e,// 100 PAY  60 

    0xac66ccd8,// 101 PAY  61 

    0x25e6cb43,// 102 PAY  62 

    0x5f09f622,// 103 PAY  63 

    0xe23356a0,// 104 PAY  64 

    0xf6cb9db2,// 105 PAY  65 

    0x5123f992,// 106 PAY  66 

    0x5efd03ce,// 107 PAY  67 

    0xb4607222,// 108 PAY  68 

    0x5b915b65,// 109 PAY  69 

    0x68ebaca3,// 110 PAY  70 

    0x4ae7efae,// 111 PAY  71 

    0x466ac891,// 112 PAY  72 

    0x0981550a,// 113 PAY  73 

    0x97d28bfb,// 114 PAY  74 

    0x5421b0ba,// 115 PAY  75 

    0x9a985b00,// 116 PAY  76 

    0x92b6f676,// 117 PAY  77 

    0x7d201e87,// 118 PAY  78 

    0x68d94a9c,// 119 PAY  79 

    0x6a482faf,// 120 PAY  80 

    0xe7a04a31,// 121 PAY  81 

    0x7f60d6ac,// 122 PAY  82 

    0x7e58a854,// 123 PAY  83 

    0xf47e6927,// 124 PAY  84 

    0x55850a40,// 125 PAY  85 

    0xf911e6b2,// 126 PAY  86 

    0x7ceda1f2,// 127 PAY  87 

    0x83df8bad,// 128 PAY  88 

    0xe09eaeac,// 129 PAY  89 

    0x14fcc4b9,// 130 PAY  90 

    0xdb5d68ed,// 131 PAY  91 

    0x457270a5,// 132 PAY  92 

    0x289543cc,// 133 PAY  93 

    0xf0d68512,// 134 PAY  94 

    0xf8d70f96,// 135 PAY  95 

    0xcc0f7d53,// 136 PAY  96 

    0x4c42c4e0,// 137 PAY  97 

    0x68709158,// 138 PAY  98 

    0xa7faaa6f,// 139 PAY  99 

    0xe3e11682,// 140 PAY 100 

    0x6ce6f122,// 141 PAY 101 

    0x5fe448df,// 142 PAY 102 

    0x2ed558f0,// 143 PAY 103 

    0x1c582ac9,// 144 PAY 104 

    0x9b26337d,// 145 PAY 105 

    0x7ca6877c,// 146 PAY 106 

    0xeb519d8a,// 147 PAY 107 

    0xa98a6dcd,// 148 PAY 108 

    0x44546879,// 149 PAY 109 

    0x2b853595,// 150 PAY 110 

    0x62363c2d,// 151 PAY 111 

    0x662997dc,// 152 PAY 112 

    0x5d04c0bb,// 153 PAY 113 

    0xd15e1838,// 154 PAY 114 

    0xac2c6067,// 155 PAY 115 

    0xc860719a,// 156 PAY 116 

    0x94436586,// 157 PAY 117 

    0xe11eab69,// 158 PAY 118 

    0xa1736c83,// 159 PAY 119 

    0x6f543f8e,// 160 PAY 120 

    0xfe3b06b7,// 161 PAY 121 

    0x2753ccc9,// 162 PAY 122 

    0x1ed6260b,// 163 PAY 123 

    0xf3a059dd,// 164 PAY 124 

    0xbc51a405,// 165 PAY 125 

    0x316affc2,// 166 PAY 126 

    0x2d777d49,// 167 PAY 127 

    0x20219c21,// 168 PAY 128 

    0x8e48a16e,// 169 PAY 129 

    0xb8a1f739,// 170 PAY 130 

    0x63cfd480,// 171 PAY 131 

    0x2afdb21b,// 172 PAY 132 

    0x52770be1,// 173 PAY 133 

    0x55fe5403,// 174 PAY 134 

    0xf790fda9,// 175 PAY 135 

    0xc74d3b2d,// 176 PAY 136 

    0x5c6f829a,// 177 PAY 137 

    0x64eb4c61,// 178 PAY 138 

    0x1d0f38b5,// 179 PAY 139 

    0x7ab0523c,// 180 PAY 140 

    0xd4143530,// 181 PAY 141 

    0x42f8899a,// 182 PAY 142 

    0x78b56e89,// 183 PAY 143 

    0xb139b0c1,// 184 PAY 144 

    0x70f1eb90,// 185 PAY 145 

    0x9956d31b,// 186 PAY 146 

    0x20e48e35,// 187 PAY 147 

    0xbb65d496,// 188 PAY 148 

    0x2f855c44,// 189 PAY 149 

    0x30f9e957,// 190 PAY 150 

    0x64c70319,// 191 PAY 151 

    0x9d309894,// 192 PAY 152 

    0x793fcd17,// 193 PAY 153 

    0x479b7857,// 194 PAY 154 

    0x9e6454e4,// 195 PAY 155 

    0x4bd08c98,// 196 PAY 156 

    0xee3d5558,// 197 PAY 157 

    0xc5e7058a,// 198 PAY 158 

    0x59d8425e,// 199 PAY 159 

    0x314ef0f5,// 200 PAY 160 

    0xd8655f73,// 201 PAY 161 

    0x7a91b4e6,// 202 PAY 162 

    0x1158b5f6,// 203 PAY 163 

    0x9f4ad3f3,// 204 PAY 164 

    0x0592ad47,// 205 PAY 165 

    0x2540efee,// 206 PAY 166 

    0xbcb17a77,// 207 PAY 167 

    0x70fcc651,// 208 PAY 168 

    0x0946df42,// 209 PAY 169 

    0xb828a4d5,// 210 PAY 170 

    0xa94cc6b6,// 211 PAY 171 

    0xb5f2eaaa,// 212 PAY 172 

    0xeea47f98,// 213 PAY 173 

    0x1864447c,// 214 PAY 174 

    0x6c52202a,// 215 PAY 175 

    0xfa9774f1,// 216 PAY 176 

    0x306c6a6e,// 217 PAY 177 

    0x1d5c23c6,// 218 PAY 178 

    0x1b979186,// 219 PAY 179 

    0xf6af1ef0,// 220 PAY 180 

    0xfd839aa4,// 221 PAY 181 

    0xaf8c03b0,// 222 PAY 182 

    0xd66e3f74,// 223 PAY 183 

    0x59d96b20,// 224 PAY 184 

    0x8c815dae,// 225 PAY 185 

    0xb652bd56,// 226 PAY 186 

    0xace4fb2c,// 227 PAY 187 

    0xaf92bdab,// 228 PAY 188 

    0x92949cd8,// 229 PAY 189 

    0xffe5b3d6,// 230 PAY 190 

    0xc81fdba3,// 231 PAY 191 

    0xa72fef16,// 232 PAY 192 

    0x301a2011,// 233 PAY 193 

    0xdf157854,// 234 PAY 194 

    0x72f7c331,// 235 PAY 195 

    0xc220ff8a,// 236 PAY 196 

    0xc0f9d67e,// 237 PAY 197 

    0xd572ce5f,// 238 PAY 198 

    0x8b22933d,// 239 PAY 199 

    0x8c930082,// 240 PAY 200 

    0xbcaa9a51,// 241 PAY 201 

    0x31859a70,// 242 PAY 202 

    0x6eaf6b87,// 243 PAY 203 

    0x73ab0652,// 244 PAY 204 

    0xce0eb0ba,// 245 PAY 205 

    0x5b3f81fb,// 246 PAY 206 

    0x5b3d3c77,// 247 PAY 207 

    0xbe206c8a,// 248 PAY 208 

    0x9392fe18,// 249 PAY 209 

    0xbdd66538,// 250 PAY 210 

    0xb3a50421,// 251 PAY 211 

    0xadb34218,// 252 PAY 212 

    0x82947629,// 253 PAY 213 

    0xa2a58b03,// 254 PAY 214 

    0x9f86a174,// 255 PAY 215 

    0xff7e249d,// 256 PAY 216 

    0x5bca5076,// 257 PAY 217 

    0x8acc21ce,// 258 PAY 218 

    0xe246c692,// 259 PAY 219 

    0x3cb04808,// 260 PAY 220 

    0xb27b474e,// 261 PAY 221 

    0xd10e2c71,// 262 PAY 222 

    0x2b963a6f,// 263 PAY 223 

    0xbeb985e1,// 264 PAY 224 

    0x667b76ca,// 265 PAY 225 

    0x952a090c,// 266 PAY 226 

    0x88b44bcc,// 267 PAY 227 

    0x6a705571,// 268 PAY 228 

    0x0b2b27df,// 269 PAY 229 

    0xcacfad69,// 270 PAY 230 

    0xda9fb245,// 271 PAY 231 

    0x14fa8cd8,// 272 PAY 232 

    0x39927342,// 273 PAY 233 

    0x0f054867,// 274 PAY 234 

    0x79b9e119,// 275 PAY 235 

    0x4cd66fd6,// 276 PAY 236 

    0x11839461,// 277 PAY 237 

    0xe480b3c4,// 278 PAY 238 

    0x2f792723,// 279 PAY 239 

    0x9f478d4d,// 280 PAY 240 

    0x24770dff,// 281 PAY 241 

    0xeb37641b,// 282 PAY 242 

    0xca0326e9,// 283 PAY 243 

    0x096113ca,// 284 PAY 244 

    0x046aa317,// 285 PAY 245 

    0x16714986,// 286 PAY 246 

    0x9eb79df3,// 287 PAY 247 

    0x351a163a,// 288 PAY 248 

    0x4fca6f16,// 289 PAY 249 

    0xc9a2a8d6,// 290 PAY 250 

    0xe38131d5,// 291 PAY 251 

    0x44757c47,// 292 PAY 252 

    0x7c8736a0,// 293 PAY 253 

    0x2122c969,// 294 PAY 254 

    0xe46132fd,// 295 PAY 255 

    0xa9f7b8b4,// 296 PAY 256 

    0xfffb6202,// 297 PAY 257 

    0x5b81096d,// 298 PAY 258 

    0x5e9aae75,// 299 PAY 259 

    0x904cfefb,// 300 PAY 260 

    0x4a85e84f,// 301 PAY 261 

    0xd90c31af,// 302 PAY 262 

    0x7d59eca0,// 303 PAY 263 

    0x1af9bb89,// 304 PAY 264 

    0xa4901c73,// 305 PAY 265 

    0x59838242,// 306 PAY 266 

    0xe9000000,// 307 PAY 267 

/// STA is 1 words. 

/// STA num_pkts       : 178 

/// STA pkt_idx        : 254 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x32 

    0x03f932b2 // 308 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 80 (0x50) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_sha1_pkt37_tmpl[] = {
    0xb8010050,// 1 CCH   1 

/// ECH cache_idx      : 0x0b 

/// ECH pdu_tag        : 0x00 

    0x000b0000,// 2 ECH   1 

/// SCX is 19 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound save_icv !insert_icv !check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : SHA1 

/// SCX aes_size        : RC4UPDT_AES192 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x1 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 40 

    0x08000013,// 3 SCX   1 

    0x806148cd,// 4 SCX   2 

    0x00004100,// 5 SCX   3 

    0x1ca850d0,// 6 SCX   4 

    0xe74abff4,// 7 SCX   5 

    0x4ac3b173,// 8 SCX   6 

    0xadd0b928,// 9 SCX   7 

    0x1d629380,// 10 SCX   8 

    0x015e08e6,// 11 SCX   9 

    0x75f8749c,// 12 SCX  10 

    0xccc60f11,// 13 SCX  11 

    0x09d59da7,// 14 SCX  12 

    0xca85e5b3,// 15 SCX  13 

    0xf8367c96,// 16 SCX  14 

    0xe04e6973,// 17 SCX  15 

    0xb00cf875,// 18 SCX  16 

    0x15093b5b,// 19 SCX  17 

    0xfac28223,// 20 SCX  18 

    0x1963de71,// 21 SCX  19 

/// BFD is 3 words. 

/// BFD tot_len        : 1075 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 804 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 804 

/// BFD lencrypto      : 512 

/// BFD ofstcrypto     : 132 

/// BFD (ofst+len)cry  : 644 

/// BFD ofstiv         : 0 

/// BFD ofsticv        : 968 

    0x00000324,// 22 BFD   1 

    0x00840200,// 23 BFD   2 

    0x03c80000,// 24 BFD   3 

/// MFM is 16 words. 

/// MFM vldnibs        : 7c 

    0x7c00d2a9,// 25 MFM   1 

    0xbc24e2f9,// 26 MFM   2 

    0x4bd95447,// 27 MFM   3 

    0xb54561b2,// 28 MFM   4 

    0xb9bb29f2,// 29 MFM   5 

    0xfc8c7ec3,// 30 MFM   6 

    0x9e76797e,// 31 MFM   7 

    0x77c09f58,// 32 MFM   8 

    0xb7112e03,// 33 MFM   9 

    0x76340d10,// 34 MFM  10 

    0x753c7f70,// 35 MFM  11 

    0x6e8c9530,// 36 MFM  12 

    0x3af8573e,// 37 MFM  13 

    0xb9639b52,// 38 MFM  14 

    0xfe927cc7,// 39 MFM  15 

    0xe5035e9a,// 40 MFM  16 

/// BDA is 270 words. 

/// BDA size     is 1075 (0x433) 

/// BDA id       is 0x1608 

    0x04331608,// 41 BDA   1 

/// PAY Generic Data size   : 1075 byte(s) 

/// PAD Buffer Data Pad size   : 1 byte(s) 

    0xf97f79c3,// 42 PAY   1 

    0x9adb5ce6,// 43 PAY   2 

    0xf8462229,// 44 PAY   3 

    0xb824a34d,// 45 PAY   4 

    0xab448bdd,// 46 PAY   5 

    0x32e64083,// 47 PAY   6 

    0x171a8ce5,// 48 PAY   7 

    0x424639fc,// 49 PAY   8 

    0x40774957,// 50 PAY   9 

    0xfd955496,// 51 PAY  10 

    0x0afe9c20,// 52 PAY  11 

    0x0f7a00f0,// 53 PAY  12 

    0x48681c0e,// 54 PAY  13 

    0xe7c8a83e,// 55 PAY  14 

    0xfb9ded83,// 56 PAY  15 

    0x22d98b60,// 57 PAY  16 

    0x1365282e,// 58 PAY  17 

    0x85d99589,// 59 PAY  18 

    0x278a2977,// 60 PAY  19 

    0x01eccc25,// 61 PAY  20 

    0xc0e4bc7a,// 62 PAY  21 

    0xb40d8273,// 63 PAY  22 

    0xa98ea55f,// 64 PAY  23 

    0x6ee49f9d,// 65 PAY  24 

    0x35636fc4,// 66 PAY  25 

    0xc70211eb,// 67 PAY  26 

    0x9d7bfe7b,// 68 PAY  27 

    0x8d90e5ba,// 69 PAY  28 

    0x815f1e49,// 70 PAY  29 

    0x063319b7,// 71 PAY  30 

    0xb733d6c4,// 72 PAY  31 

    0x33488da1,// 73 PAY  32 

    0xa1a917d5,// 74 PAY  33 

    0xe1274fa6,// 75 PAY  34 

    0xf176825f,// 76 PAY  35 

    0x827c587f,// 77 PAY  36 

    0x8749e9c2,// 78 PAY  37 

    0x83ebf577,// 79 PAY  38 

    0x6a1bc6a1,// 80 PAY  39 

    0x4be7513a,// 81 PAY  40 

    0xb3b3b9f9,// 82 PAY  41 

    0x7aeb0b49,// 83 PAY  42 

    0xc13a1cf6,// 84 PAY  43 

    0x82437814,// 85 PAY  44 

    0x10be58a2,// 86 PAY  45 

    0xea8c4b64,// 87 PAY  46 

    0xf7e87bae,// 88 PAY  47 

    0x0d76e4c5,// 89 PAY  48 

    0xb1b5aaf6,// 90 PAY  49 

    0x9fabecfb,// 91 PAY  50 

    0xba4477f5,// 92 PAY  51 

    0x6597e51d,// 93 PAY  52 

    0xa46f6b85,// 94 PAY  53 

    0xfe56a6e0,// 95 PAY  54 

    0x13254b97,// 96 PAY  55 

    0x2c713d40,// 97 PAY  56 

    0xa6739ab5,// 98 PAY  57 

    0x811cdd2d,// 99 PAY  58 

    0xb748c837,// 100 PAY  59 

    0xfde7303b,// 101 PAY  60 

    0x767f2d40,// 102 PAY  61 

    0xb260e39f,// 103 PAY  62 

    0x691117a7,// 104 PAY  63 

    0x471d36ea,// 105 PAY  64 

    0xaf6c68e7,// 106 PAY  65 

    0x006b0e51,// 107 PAY  66 

    0x1f6c5550,// 108 PAY  67 

    0x9cf0572c,// 109 PAY  68 

    0x210464e0,// 110 PAY  69 

    0xe2f28040,// 111 PAY  70 

    0x0f85c3a4,// 112 PAY  71 

    0x6f00c67a,// 113 PAY  72 

    0x1e8fdd62,// 114 PAY  73 

    0x466eca3b,// 115 PAY  74 

    0x915833b0,// 116 PAY  75 

    0xa8561c83,// 117 PAY  76 

    0x42b2897f,// 118 PAY  77 

    0xbc36c533,// 119 PAY  78 

    0x08610df2,// 120 PAY  79 

    0xd1138038,// 121 PAY  80 

    0x50834ed8,// 122 PAY  81 

    0xa7bb0f0a,// 123 PAY  82 

    0xf82e3596,// 124 PAY  83 

    0x32121ebd,// 125 PAY  84 

    0x5fbf266d,// 126 PAY  85 

    0x103db33f,// 127 PAY  86 

    0x95b55424,// 128 PAY  87 

    0x46efc59c,// 129 PAY  88 

    0x79ac6174,// 130 PAY  89 

    0xa066f622,// 131 PAY  90 

    0x7f47568d,// 132 PAY  91 

    0x96b11dcb,// 133 PAY  92 

    0x25492664,// 134 PAY  93 

    0xad2edc3a,// 135 PAY  94 

    0x1915a231,// 136 PAY  95 

    0xd1ed319a,// 137 PAY  96 

    0x557cf123,// 138 PAY  97 

    0xc149e824,// 139 PAY  98 

    0x5dc8b1b9,// 140 PAY  99 

    0xcc1422fa,// 141 PAY 100 

    0xb37097dd,// 142 PAY 101 

    0xdcff971c,// 143 PAY 102 

    0x96fe0e17,// 144 PAY 103 

    0x25ca13b0,// 145 PAY 104 

    0xda818d17,// 146 PAY 105 

    0xdd801041,// 147 PAY 106 

    0x541015dc,// 148 PAY 107 

    0xa6b9f655,// 149 PAY 108 

    0xdbfef8f9,// 150 PAY 109 

    0x79131755,// 151 PAY 110 

    0x9a6ff260,// 152 PAY 111 

    0x474459a9,// 153 PAY 112 

    0x549cc11f,// 154 PAY 113 

    0x79016380,// 155 PAY 114 

    0xe72cbc7d,// 156 PAY 115 

    0xf28db314,// 157 PAY 116 

    0x79d00b4e,// 158 PAY 117 

    0x1ab6bea1,// 159 PAY 118 

    0x641452a8,// 160 PAY 119 

    0xf11a02e2,// 161 PAY 120 

    0xd6ae7878,// 162 PAY 121 

    0xd73abccb,// 163 PAY 122 

    0xf5ee8254,// 164 PAY 123 

    0x85e438f8,// 165 PAY 124 

    0x9550ae5a,// 166 PAY 125 

    0xb6ca8ed6,// 167 PAY 126 

    0x80934d83,// 168 PAY 127 

    0xa4bfd021,// 169 PAY 128 

    0x41299a3e,// 170 PAY 129 

    0x5ca77287,// 171 PAY 130 

    0xfd877ba4,// 172 PAY 131 

    0x82f2d263,// 173 PAY 132 

    0x697c2c94,// 174 PAY 133 

    0x73b9013d,// 175 PAY 134 

    0x65833c6f,// 176 PAY 135 

    0xc726e92b,// 177 PAY 136 

    0xf4b422c7,// 178 PAY 137 

    0x83aa9e02,// 179 PAY 138 

    0xde5206b8,// 180 PAY 139 

    0x125bf6a3,// 181 PAY 140 

    0x847e4b2a,// 182 PAY 141 

    0x77746796,// 183 PAY 142 

    0xf9a5f1bf,// 184 PAY 143 

    0xf81f7cf6,// 185 PAY 144 

    0xf98448d5,// 186 PAY 145 

    0x53514921,// 187 PAY 146 

    0x430bb036,// 188 PAY 147 

    0x1d899fcc,// 189 PAY 148 

    0xa42ac217,// 190 PAY 149 

    0x2ecc090a,// 191 PAY 150 

    0xba9f04ba,// 192 PAY 151 

    0x13064b99,// 193 PAY 152 

    0xd19ae793,// 194 PAY 153 

    0x2b6b9962,// 195 PAY 154 

    0x5915d85d,// 196 PAY 155 

    0x3a71e210,// 197 PAY 156 

    0xe6706177,// 198 PAY 157 

    0x51160e0e,// 199 PAY 158 

    0x1deb3f28,// 200 PAY 159 

    0x695ae30b,// 201 PAY 160 

    0x87ed9187,// 202 PAY 161 

    0x88587bd5,// 203 PAY 162 

    0x19e896a4,// 204 PAY 163 

    0x638ea73e,// 205 PAY 164 

    0x523fd6a2,// 206 PAY 165 

    0x5693c05e,// 207 PAY 166 

    0x97527c78,// 208 PAY 167 

    0xe2aa1bca,// 209 PAY 168 

    0xb758217e,// 210 PAY 169 

    0x07a93dd2,// 211 PAY 170 

    0xee6fbff8,// 212 PAY 171 

    0x1f72e0a8,// 213 PAY 172 

    0x8e752f25,// 214 PAY 173 

    0xde4a22b3,// 215 PAY 174 

    0xa3822471,// 216 PAY 175 

    0x8599a777,// 217 PAY 176 

    0x0fafd115,// 218 PAY 177 

    0xd3cba904,// 219 PAY 178 

    0xbe359855,// 220 PAY 179 

    0xed6c0661,// 221 PAY 180 

    0xa6a77bd4,// 222 PAY 181 

    0xdce8a201,// 223 PAY 182 

    0x69d01330,// 224 PAY 183 

    0x9a303913,// 225 PAY 184 

    0xf62cf56b,// 226 PAY 185 

    0x694ef12e,// 227 PAY 186 

    0x94b632b0,// 228 PAY 187 

    0x9a2e78c6,// 229 PAY 188 

    0xe5243f58,// 230 PAY 189 

    0x1f9cec72,// 231 PAY 190 

    0xe28cf8bc,// 232 PAY 191 

    0x3531e3a3,// 233 PAY 192 

    0x841a06ce,// 234 PAY 193 

    0x355f7a04,// 235 PAY 194 

    0x58503669,// 236 PAY 195 

    0x4339800f,// 237 PAY 196 

    0x6f2ff798,// 238 PAY 197 

    0xff57cd1a,// 239 PAY 198 

    0x4351297e,// 240 PAY 199 

    0xfff22ef6,// 241 PAY 200 

    0x0640c918,// 242 PAY 201 

    0x60c11565,// 243 PAY 202 

    0xc894a7bd,// 244 PAY 203 

    0x0feb8a76,// 245 PAY 204 

    0x84d49e0e,// 246 PAY 205 

    0x127fe61a,// 247 PAY 206 

    0x7230b18f,// 248 PAY 207 

    0xb6deda93,// 249 PAY 208 

    0x7df72b6f,// 250 PAY 209 

    0x6b90a3ba,// 251 PAY 210 

    0xd6632d47,// 252 PAY 211 

    0x51b7360c,// 253 PAY 212 

    0x1b7b87fd,// 254 PAY 213 

    0xce8b0801,// 255 PAY 214 

    0x57dafd24,// 256 PAY 215 

    0xcc714fc9,// 257 PAY 216 

    0x6d64cd8a,// 258 PAY 217 

    0xe9eb607a,// 259 PAY 218 

    0x178864ca,// 260 PAY 219 

    0x2411ac8a,// 261 PAY 220 

    0xe76eb78c,// 262 PAY 221 

    0x5f4653de,// 263 PAY 222 

    0xcba7b8db,// 264 PAY 223 

    0x40026596,// 265 PAY 224 

    0x1ea054b1,// 266 PAY 225 

    0xab37a807,// 267 PAY 226 

    0xf2565de4,// 268 PAY 227 

    0x9e6b04f7,// 269 PAY 228 

    0x8c51ba18,// 270 PAY 229 

    0xef07ae36,// 271 PAY 230 

    0x931b1b47,// 272 PAY 231 

    0x780ad61f,// 273 PAY 232 

    0x3ca8e81e,// 274 PAY 233 

    0xd896b109,// 275 PAY 234 

    0x31f2e7d3,// 276 PAY 235 

    0xf1d907b3,// 277 PAY 236 

    0x81a2ae42,// 278 PAY 237 

    0x7716c74b,// 279 PAY 238 

    0xceddc49b,// 280 PAY 239 

    0xfdb80a10,// 281 PAY 240 

    0x689d2314,// 282 PAY 241 

    0x4e3b0266,// 283 PAY 242 

    0x9a118039,// 284 PAY 243 

    0xe5897583,// 285 PAY 244 

    0xd7ead58a,// 286 PAY 245 

    0x2f73cf1b,// 287 PAY 246 

    0xa7ef5d49,// 288 PAY 247 

    0x6f72662c,// 289 PAY 248 

    0x558ad1ec,// 290 PAY 249 

    0x00d6382e,// 291 PAY 250 

    0x5b410d82,// 292 PAY 251 

    0x9ddd1a4d,// 293 PAY 252 

    0x4a8f62dc,// 294 PAY 253 

    0xf987801c,// 295 PAY 254 

    0x29789fcd,// 296 PAY 255 

    0x0e9f6a7a,// 297 PAY 256 

    0x4c7717cb,// 298 PAY 257 

    0x6f7e7ff3,// 299 PAY 258 

    0x888f4f55,// 300 PAY 259 

    0x4faecb12,// 301 PAY 260 

    0x8705d013,// 302 PAY 261 

    0xba3adeda,// 303 PAY 262 

    0x232b3ed1,// 304 PAY 263 

    0xd6f63614,// 305 PAY 264 

    0xb433cb1d,// 306 PAY 265 

    0x9a984133,// 307 PAY 266 

    0x1ef7204b,// 308 PAY 267 

    0x3819bb95,// 309 PAY 268 

    0x3dfb1800,// 310 PAY 269 

/// STA is 1 words. 

/// STA num_pkts       : 164 

/// STA pkt_idx        : 88 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xbe 

    0x0161bea4 // 311 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 88 (0x58) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc !incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_sha1_pkt38_tmpl[] = {
    0xa8010058,// 1 CCH   1 

/// ECH cache_idx      : 0x06 

/// ECH pdu_tag        : 0x00 

    0x00060000,// 2 ECH   1 

/// SCX is 21 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound !save_icv insert_icv !check_icv sctx_iv  

/// SCX exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : SHA1 

/// SCX aes_size        : NORMAL_RC4INIT_AES128 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x5 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 8 

/// SCX authctx_size    : 40 

    0x00000015,// 3 SCX   1 

    0x8064480c,// 4 SCX   2 

    0x000025c2,// 5 SCX   3 

    0x6f4a946a,// 6 SCX   4 

    0xcb60c496,// 7 SCX   5 

    0x1b3e5ed9,// 8 SCX   6 

    0x02d6bf71,// 9 SCX   7 

    0x2b1c463d,// 10 SCX   8 

    0x38598d95,// 11 SCX   9 

    0xd9df876d,// 12 SCX  10 

    0xe8537f3e,// 13 SCX  11 

    0x195d0fb5,// 14 SCX  12 

    0x681ff0ad,// 15 SCX  13 

    0xc9cdbd01,// 16 SCX  14 

    0x0e909342,// 17 SCX  15 

    0x3fc2572f,// 18 SCX  16 

    0xf4ed84bf,// 19 SCX  17 

    0x6a304b12,// 20 SCX  18 

    0xb1b029d5,// 21 SCX  19 

    0x36fae823,// 22 SCX  20 

    0xa4f8fff3,// 23 SCX  21 

/// BFD is 3 words. 

/// BFD tot_len        : 1274 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 850 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 850 

/// BFD lencrypto      : 128 

/// BFD ofstcrypto     : 412 

/// BFD (ofst+len)cry  : 540 

/// BFD ofstiv         : 20 

/// BFD ofsticv        : 1060 

    0x00000352,// 24 BFD   1 

    0x019c0080,// 25 BFD   2 

    0x04240014,// 26 BFD   3 

/// BDA is 320 words. 

/// BDA size     is 1274 (0x4fa) 

/// BDA id       is 0x1528 

    0x04fa1528,// 27 BDA   1 

/// PAY Generic Data size   : 1274 byte(s) 

/// PAD Buffer Data Pad size   : 2 byte(s) 

    0x1aa90ea7,// 28 PAY   1 

    0x338743c6,// 29 PAY   2 

    0xa7fa6f1f,// 30 PAY   3 

    0x7e0aeb65,// 31 PAY   4 

    0x1f4ac56b,// 32 PAY   5 

    0x0d3f93f7,// 33 PAY   6 

    0x90f4111a,// 34 PAY   7 

    0x45c3d4ed,// 35 PAY   8 

    0x745e3e69,// 36 PAY   9 

    0x4ed9beae,// 37 PAY  10 

    0x92141ba4,// 38 PAY  11 

    0xd4c32577,// 39 PAY  12 

    0xb561e3c3,// 40 PAY  13 

    0x71b1e631,// 41 PAY  14 

    0x6af3086c,// 42 PAY  15 

    0x08a8a073,// 43 PAY  16 

    0xbbd37a0c,// 44 PAY  17 

    0x477a45dd,// 45 PAY  18 

    0x784d0dba,// 46 PAY  19 

    0x7e5a5585,// 47 PAY  20 

    0xdea1888a,// 48 PAY  21 

    0x1f5ef799,// 49 PAY  22 

    0xc25d8032,// 50 PAY  23 

    0x4c4890b6,// 51 PAY  24 

    0x433015cf,// 52 PAY  25 

    0xa00e1514,// 53 PAY  26 

    0xeb1953a4,// 54 PAY  27 

    0x2c4d764c,// 55 PAY  28 

    0xe2a4d49b,// 56 PAY  29 

    0x4cd1aead,// 57 PAY  30 

    0x2c6dc081,// 58 PAY  31 

    0x614f1755,// 59 PAY  32 

    0x8ee608f2,// 60 PAY  33 

    0x29a0653c,// 61 PAY  34 

    0x93a8f463,// 62 PAY  35 

    0xcaea84e6,// 63 PAY  36 

    0xa6093972,// 64 PAY  37 

    0x4439f146,// 65 PAY  38 

    0xd94ba73e,// 66 PAY  39 

    0x12526217,// 67 PAY  40 

    0x1bad5456,// 68 PAY  41 

    0x6017124f,// 69 PAY  42 

    0x7f1327e0,// 70 PAY  43 

    0x8f9896d9,// 71 PAY  44 

    0xdeaa6193,// 72 PAY  45 

    0x33b2254f,// 73 PAY  46 

    0x6bacd1b3,// 74 PAY  47 

    0x4a2bbdf5,// 75 PAY  48 

    0xbf880d81,// 76 PAY  49 

    0x81d765ec,// 77 PAY  50 

    0xb3b7deb8,// 78 PAY  51 

    0x499907c9,// 79 PAY  52 

    0x6e28b621,// 80 PAY  53 

    0x9b31b02d,// 81 PAY  54 

    0x596cb5e8,// 82 PAY  55 

    0x25ca388b,// 83 PAY  56 

    0xba47902b,// 84 PAY  57 

    0xeacfe727,// 85 PAY  58 

    0xcc33ea7b,// 86 PAY  59 

    0x8f71d4ac,// 87 PAY  60 

    0x42e97985,// 88 PAY  61 

    0xdc5db8ea,// 89 PAY  62 

    0xc91e7d0d,// 90 PAY  63 

    0x54159c12,// 91 PAY  64 

    0x0cb784b8,// 92 PAY  65 

    0x5d2122f3,// 93 PAY  66 

    0xfa4659b4,// 94 PAY  67 

    0xe3473d6f,// 95 PAY  68 

    0x4ffb20f0,// 96 PAY  69 

    0x6b0e4d99,// 97 PAY  70 

    0x1ca390a7,// 98 PAY  71 

    0x9a97f3ea,// 99 PAY  72 

    0x2a36db1c,// 100 PAY  73 

    0x60908c8b,// 101 PAY  74 

    0x25f87166,// 102 PAY  75 

    0xe13c7c7e,// 103 PAY  76 

    0x06c6f672,// 104 PAY  77 

    0xf10e165b,// 105 PAY  78 

    0xc8eef476,// 106 PAY  79 

    0x29a7f778,// 107 PAY  80 

    0x65c83940,// 108 PAY  81 

    0x29f20f29,// 109 PAY  82 

    0xa4666d2f,// 110 PAY  83 

    0x60c4e426,// 111 PAY  84 

    0xfd0bca75,// 112 PAY  85 

    0x0a5e3cc9,// 113 PAY  86 

    0x59bd49de,// 114 PAY  87 

    0xc68cba13,// 115 PAY  88 

    0x848c41b7,// 116 PAY  89 

    0x26fa0409,// 117 PAY  90 

    0x29aea08d,// 118 PAY  91 

    0xeb2bc07e,// 119 PAY  92 

    0x93a83450,// 120 PAY  93 

    0xf2dd7880,// 121 PAY  94 

    0x17f19fee,// 122 PAY  95 

    0x7539ecbd,// 123 PAY  96 

    0x91d663be,// 124 PAY  97 

    0x04b1a6e3,// 125 PAY  98 

    0xf01bb22f,// 126 PAY  99 

    0x5e1a6ba1,// 127 PAY 100 

    0xe2772779,// 128 PAY 101 

    0x5492056c,// 129 PAY 102 

    0xc0093abb,// 130 PAY 103 

    0xe1b86153,// 131 PAY 104 

    0x6e60f00b,// 132 PAY 105 

    0xd8eea650,// 133 PAY 106 

    0xd311e8fe,// 134 PAY 107 

    0x1c432f75,// 135 PAY 108 

    0x89b0978f,// 136 PAY 109 

    0x3d926c23,// 137 PAY 110 

    0x60d31824,// 138 PAY 111 

    0x11a337d8,// 139 PAY 112 

    0xfba4fbc5,// 140 PAY 113 

    0xb2a4a36b,// 141 PAY 114 

    0x27567cea,// 142 PAY 115 

    0xc8e4952d,// 143 PAY 116 

    0x058eb300,// 144 PAY 117 

    0x8744c2af,// 145 PAY 118 

    0x221ed434,// 146 PAY 119 

    0x07e3b40f,// 147 PAY 120 

    0x71ef169b,// 148 PAY 121 

    0xd48b9134,// 149 PAY 122 

    0x6f14db7d,// 150 PAY 123 

    0x0215ad46,// 151 PAY 124 

    0x7e90eeff,// 152 PAY 125 

    0x6239ea5d,// 153 PAY 126 

    0xfbd78f32,// 154 PAY 127 

    0x54a4036a,// 155 PAY 128 

    0x1db4a16c,// 156 PAY 129 

    0x6e3bb230,// 157 PAY 130 

    0x6339be3a,// 158 PAY 131 

    0xba33f454,// 159 PAY 132 

    0xa0bc481b,// 160 PAY 133 

    0x81b13cd6,// 161 PAY 134 

    0x9fa4bbb4,// 162 PAY 135 

    0x23242fc1,// 163 PAY 136 

    0xbcd72c38,// 164 PAY 137 

    0x745d9e80,// 165 PAY 138 

    0xfdc64884,// 166 PAY 139 

    0x17df21fc,// 167 PAY 140 

    0x07279ed9,// 168 PAY 141 

    0x1713e878,// 169 PAY 142 

    0xe6cacdc0,// 170 PAY 143 

    0xfaebbefb,// 171 PAY 144 

    0xc5b8e089,// 172 PAY 145 

    0x136ae343,// 173 PAY 146 

    0x4dd055ea,// 174 PAY 147 

    0x99b5d323,// 175 PAY 148 

    0x0ad611ea,// 176 PAY 149 

    0x53093ed7,// 177 PAY 150 

    0x43d41734,// 178 PAY 151 

    0xc8a5f6fe,// 179 PAY 152 

    0xc531d12b,// 180 PAY 153 

    0xd1c66cef,// 181 PAY 154 

    0x9a1bd474,// 182 PAY 155 

    0xc3e167ce,// 183 PAY 156 

    0x6565d131,// 184 PAY 157 

    0xf7bc01a5,// 185 PAY 158 

    0x31187c66,// 186 PAY 159 

    0x67ff70ae,// 187 PAY 160 

    0x48053762,// 188 PAY 161 

    0x9d1f1b4b,// 189 PAY 162 

    0x11648bd3,// 190 PAY 163 

    0xdaec3509,// 191 PAY 164 

    0xeffa229a,// 192 PAY 165 

    0xe0f85e02,// 193 PAY 166 

    0x9a873a80,// 194 PAY 167 

    0xbe1ad08b,// 195 PAY 168 

    0xa248e14c,// 196 PAY 169 

    0x62929a25,// 197 PAY 170 

    0x10a4ad31,// 198 PAY 171 

    0xb7b1e57d,// 199 PAY 172 

    0x65e72f4b,// 200 PAY 173 

    0xcd178e6f,// 201 PAY 174 

    0x4866ed53,// 202 PAY 175 

    0x5c4dc581,// 203 PAY 176 

    0xdbbcd713,// 204 PAY 177 

    0x8db0ca34,// 205 PAY 178 

    0xe8183f1c,// 206 PAY 179 

    0x1b9a4c3d,// 207 PAY 180 

    0x5f9f617a,// 208 PAY 181 

    0x3e58f76a,// 209 PAY 182 

    0x9b41120e,// 210 PAY 183 

    0x7dd90482,// 211 PAY 184 

    0xbd861bf6,// 212 PAY 185 

    0xeba995a7,// 213 PAY 186 

    0xeb782870,// 214 PAY 187 

    0x8cc61ff2,// 215 PAY 188 

    0x451b823e,// 216 PAY 189 

    0x4fca352e,// 217 PAY 190 

    0x5e70d48b,// 218 PAY 191 

    0xb3655ddb,// 219 PAY 192 

    0x3528bf4e,// 220 PAY 193 

    0xf9ca4e98,// 221 PAY 194 

    0x0e936047,// 222 PAY 195 

    0x2d7135f4,// 223 PAY 196 

    0x5f67073b,// 224 PAY 197 

    0x7ad946de,// 225 PAY 198 

    0x3075fc39,// 226 PAY 199 

    0x636fd6f8,// 227 PAY 200 

    0xc295581e,// 228 PAY 201 

    0x690ba5cc,// 229 PAY 202 

    0x484d9936,// 230 PAY 203 

    0x08b1bad3,// 231 PAY 204 

    0x653680c4,// 232 PAY 205 

    0xfb00d800,// 233 PAY 206 

    0xed547b9d,// 234 PAY 207 

    0x9a6e6ffe,// 235 PAY 208 

    0x96de8fc1,// 236 PAY 209 

    0x68cb3078,// 237 PAY 210 

    0x47d2d94a,// 238 PAY 211 

    0x95fa56f5,// 239 PAY 212 

    0xd636a19f,// 240 PAY 213 

    0xa6b8b32e,// 241 PAY 214 

    0x72b2e884,// 242 PAY 215 

    0xc42893fc,// 243 PAY 216 

    0x9890dfa9,// 244 PAY 217 

    0xbdc6d211,// 245 PAY 218 

    0x1f32ac05,// 246 PAY 219 

    0xdea20b1d,// 247 PAY 220 

    0xab934723,// 248 PAY 221 

    0x4eadda82,// 249 PAY 222 

    0xf59337de,// 250 PAY 223 

    0xd1c1927c,// 251 PAY 224 

    0x1338d7a3,// 252 PAY 225 

    0xf0c60543,// 253 PAY 226 

    0x7b78b6c5,// 254 PAY 227 

    0x8b7f860d,// 255 PAY 228 

    0xed6940d2,// 256 PAY 229 

    0xb131508b,// 257 PAY 230 

    0x08e36f18,// 258 PAY 231 

    0xea478520,// 259 PAY 232 

    0xbc6b1b68,// 260 PAY 233 

    0xf4b9c6a3,// 261 PAY 234 

    0x31d34cae,// 262 PAY 235 

    0x72b2f31d,// 263 PAY 236 

    0xeede18be,// 264 PAY 237 

    0xdabf5d63,// 265 PAY 238 

    0xf4d8a26c,// 266 PAY 239 

    0xea224630,// 267 PAY 240 

    0xbdb9bc71,// 268 PAY 241 

    0xc18b2841,// 269 PAY 242 

    0x07907135,// 270 PAY 243 

    0x70969afc,// 271 PAY 244 

    0x991dca7d,// 272 PAY 245 

    0xf7c5204b,// 273 PAY 246 

    0x46285632,// 274 PAY 247 

    0xaf1c8fbc,// 275 PAY 248 

    0xf6e36aea,// 276 PAY 249 

    0x933b6b8e,// 277 PAY 250 

    0xb6279588,// 278 PAY 251 

    0x77b7ca9c,// 279 PAY 252 

    0x97630cc3,// 280 PAY 253 

    0xe8d467bb,// 281 PAY 254 

    0x4ad639a5,// 282 PAY 255 

    0xf0a5f2f9,// 283 PAY 256 

    0x09f7d15f,// 284 PAY 257 

    0x70727d44,// 285 PAY 258 

    0xf0fb2b9e,// 286 PAY 259 

    0x55bb9b2d,// 287 PAY 260 

    0x455ae800,// 288 PAY 261 

    0x8b0785d2,// 289 PAY 262 

    0xb316452d,// 290 PAY 263 

    0x8fd8e67b,// 291 PAY 264 

    0xb937314b,// 292 PAY 265 

    0x641813bb,// 293 PAY 266 

    0xf6707c34,// 294 PAY 267 

    0x1b04d4e7,// 295 PAY 268 

    0x13c40c75,// 296 PAY 269 

    0xa9caa3d2,// 297 PAY 270 

    0x313cccb3,// 298 PAY 271 

    0x6276688a,// 299 PAY 272 

    0xfaa7eca1,// 300 PAY 273 

    0x6c73b127,// 301 PAY 274 

    0xaf380472,// 302 PAY 275 

    0x44e4c80e,// 303 PAY 276 

    0xd933986a,// 304 PAY 277 

    0xb5363692,// 305 PAY 278 

    0xd5af74a5,// 306 PAY 279 

    0x729c7a20,// 307 PAY 280 

    0xf898eaa1,// 308 PAY 281 

    0x500262cb,// 309 PAY 282 

    0x53e409b3,// 310 PAY 283 

    0x69036323,// 311 PAY 284 

    0x739eeaef,// 312 PAY 285 

    0x2c12006d,// 313 PAY 286 

    0x53493742,// 314 PAY 287 

    0xf807882d,// 315 PAY 288 

    0x12584588,// 316 PAY 289 

    0x20e9d4c5,// 317 PAY 290 

    0x5f5a5778,// 318 PAY 291 

    0xea7b0656,// 319 PAY 292 

    0x72425b72,// 320 PAY 293 

    0x88fe5da5,// 321 PAY 294 

    0x9ebf81c5,// 322 PAY 295 

    0xb92cdd14,// 323 PAY 296 

    0xd92e0d50,// 324 PAY 297 

    0xd84338e6,// 325 PAY 298 

    0xe05b7716,// 326 PAY 299 

    0x14611fbf,// 327 PAY 300 

    0x377e8714,// 328 PAY 301 

    0x2a0547a4,// 329 PAY 302 

    0x5b864313,// 330 PAY 303 

    0x7340e51a,// 331 PAY 304 

    0xefec5f83,// 332 PAY 305 

    0x9a5cddd3,// 333 PAY 306 

    0x6955d44b,// 334 PAY 307 

    0x14886abd,// 335 PAY 308 

    0x973b4d19,// 336 PAY 309 

    0x04f127d2,// 337 PAY 310 

    0x06462731,// 338 PAY 311 

    0xe1c5045a,// 339 PAY 312 

    0xe9cf1198,// 340 PAY 313 

    0xef62403f,// 341 PAY 314 

    0x0d250073,// 342 PAY 315 

    0x9233f1e7,// 343 PAY 316 

    0xea27869f,// 344 PAY 317 

    0x278b9d6c,// 345 PAY 318 

    0x2b080000,// 346 PAY 319 

/// STA is 1 words. 

/// STA num_pkts       : 229 

/// STA pkt_idx        : 76 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x4f 

    0x01314fe5 // 347 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 80 (0x50) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_sha1_pkt39_tmpl[] = {
    0xb8010050,// 1 CCH   1 

/// ECH cache_idx      : 0x05 

/// ECH pdu_tag        : 0x00 

    0x00050000,// 2 ECH   1 

/// SCX is 19 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound !save_icv !insert_icv !check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : SHA1 

/// SCX aes_size        : AES256 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x2 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 40 

    0x00000013,// 3 SCX   1 

    0x806248fb,// 4 SCX   2 

    0x00000200,// 5 SCX   3 

    0x125c18ad,// 6 SCX   4 

    0x26662ec4,// 7 SCX   5 

    0xefcf565f,// 8 SCX   6 

    0xbd6715fc,// 9 SCX   7 

    0xc80ad480,// 10 SCX   8 

    0xf6b7913b,// 11 SCX   9 

    0xcc84e040,// 12 SCX  10 

    0x09708e39,// 13 SCX  11 

    0xf613e8bf,// 14 SCX  12 

    0x4120d69e,// 15 SCX  13 

    0xd0749611,// 16 SCX  14 

    0xfa122952,// 17 SCX  15 

    0xe6fbcc99,// 18 SCX  16 

    0xbda1ddde,// 19 SCX  17 

    0x02585e88,// 20 SCX  18 

    0x603add16,// 21 SCX  19 

/// BFD is 3 words. 

/// BFD tot_len        : 1088 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 201 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 201 

/// BFD lencrypto      : 56 

/// BFD ofstcrypto     : 24 

/// BFD (ofst+len)cry  : 80 

/// BFD ofstiv         : 4 

/// BFD ofsticv        : 424 

    0x000000c9,// 22 BFD   1 

    0x00180038,// 23 BFD   2 

    0x01a80004,// 24 BFD   3 

/// MFM is 2 words. 

/// MFM vldnibs        : 7 

    0x0700cc2f,// 25 MFM   1 

    0xa5100000,// 26 MFM   2 

/// BDA is 273 words. 

/// BDA size     is 1088 (0x440) 

/// BDA id       is 0xc25c 

    0x0440c25c,// 27 BDA   1 

/// PAY Generic Data size   : 1088 byte(s) 

/// PAD Buffer Data Pad size   : 0 byte(s) 

    0xce8e30fd,// 28 PAY   1 

    0x8788640d,// 29 PAY   2 

    0x05e3db2d,// 30 PAY   3 

    0x701fec94,// 31 PAY   4 

    0xe48ce3cf,// 32 PAY   5 

    0xa226e36c,// 33 PAY   6 

    0x7baac043,// 34 PAY   7 

    0x59accf59,// 35 PAY   8 

    0xc5ac8344,// 36 PAY   9 

    0x41355f42,// 37 PAY  10 

    0x63f1dbe4,// 38 PAY  11 

    0x18953831,// 39 PAY  12 

    0x5ede6cd6,// 40 PAY  13 

    0xf8266c5f,// 41 PAY  14 

    0xe80096f9,// 42 PAY  15 

    0x94711882,// 43 PAY  16 

    0x9d1a2196,// 44 PAY  17 

    0x24f2140c,// 45 PAY  18 

    0x3fa74dbb,// 46 PAY  19 

    0x03756841,// 47 PAY  20 

    0x9e2b3227,// 48 PAY  21 

    0xd8aa92f7,// 49 PAY  22 

    0x0ff28964,// 50 PAY  23 

    0xc4183f8e,// 51 PAY  24 

    0x89324211,// 52 PAY  25 

    0xf516c6fd,// 53 PAY  26 

    0xe3a63e79,// 54 PAY  27 

    0x1c6ad627,// 55 PAY  28 

    0x24ae076d,// 56 PAY  29 

    0x3787dc18,// 57 PAY  30 

    0xdce3c0f1,// 58 PAY  31 

    0xfec22848,// 59 PAY  32 

    0x0a31070a,// 60 PAY  33 

    0x74499f2e,// 61 PAY  34 

    0xfb13018b,// 62 PAY  35 

    0x7a9bbf2f,// 63 PAY  36 

    0x2d4240e4,// 64 PAY  37 

    0xa6d2ee05,// 65 PAY  38 

    0xfd1ee60d,// 66 PAY  39 

    0x538644b8,// 67 PAY  40 

    0x7038174a,// 68 PAY  41 

    0xc1e2646b,// 69 PAY  42 

    0xb304a839,// 70 PAY  43 

    0x0ea0b66f,// 71 PAY  44 

    0x97e5ea44,// 72 PAY  45 

    0xa70c637a,// 73 PAY  46 

    0x84ba43a6,// 74 PAY  47 

    0x44902244,// 75 PAY  48 

    0x589bdaee,// 76 PAY  49 

    0x930bbb70,// 77 PAY  50 

    0x8072a95b,// 78 PAY  51 

    0xa3afc9de,// 79 PAY  52 

    0xd6514271,// 80 PAY  53 

    0xf221a7de,// 81 PAY  54 

    0x81687160,// 82 PAY  55 

    0x72cb4114,// 83 PAY  56 

    0x987f684e,// 84 PAY  57 

    0xc04cb931,// 85 PAY  58 

    0x84ac85ea,// 86 PAY  59 

    0xfe1e5d75,// 87 PAY  60 

    0xe41779e2,// 88 PAY  61 

    0xd91cadfd,// 89 PAY  62 

    0xea8aedaf,// 90 PAY  63 

    0x95848443,// 91 PAY  64 

    0xe033f000,// 92 PAY  65 

    0x245ddc5e,// 93 PAY  66 

    0xc11ad693,// 94 PAY  67 

    0x18ae9e74,// 95 PAY  68 

    0xb65b6630,// 96 PAY  69 

    0xa6303c33,// 97 PAY  70 

    0x4fb30223,// 98 PAY  71 

    0x716cb9db,// 99 PAY  72 

    0x00f9c60d,// 100 PAY  73 

    0x24477884,// 101 PAY  74 

    0x79795985,// 102 PAY  75 

    0x43651d40,// 103 PAY  76 

    0x226636b0,// 104 PAY  77 

    0x57ba228b,// 105 PAY  78 

    0x9efcfa7a,// 106 PAY  79 

    0x7af24d39,// 107 PAY  80 

    0x17005205,// 108 PAY  81 

    0xdc9e1997,// 109 PAY  82 

    0x92e1777e,// 110 PAY  83 

    0x2a6d0b8a,// 111 PAY  84 

    0x6b71ecaa,// 112 PAY  85 

    0x29ac46e8,// 113 PAY  86 

    0x27047a3e,// 114 PAY  87 

    0x7f99e736,// 115 PAY  88 

    0xa9616135,// 116 PAY  89 

    0x6204fbba,// 117 PAY  90 

    0x9f5ccebe,// 118 PAY  91 

    0x95adb53e,// 119 PAY  92 

    0x57b1c0c4,// 120 PAY  93 

    0xa3d2ffef,// 121 PAY  94 

    0x571c1f4d,// 122 PAY  95 

    0x85583b30,// 123 PAY  96 

    0xc0e99ca3,// 124 PAY  97 

    0x42057e59,// 125 PAY  98 

    0x58ededd7,// 126 PAY  99 

    0x22957bc5,// 127 PAY 100 

    0x97820abe,// 128 PAY 101 

    0xcede5b96,// 129 PAY 102 

    0x2dbafdb7,// 130 PAY 103 

    0xa06269eb,// 131 PAY 104 

    0xb80635c9,// 132 PAY 105 

    0x0093ca3e,// 133 PAY 106 

    0x93f30182,// 134 PAY 107 

    0x73c24530,// 135 PAY 108 

    0x2988c856,// 136 PAY 109 

    0x95a7268f,// 137 PAY 110 

    0x9cf46516,// 138 PAY 111 

    0xaa454b09,// 139 PAY 112 

    0x2b04713a,// 140 PAY 113 

    0xe8f8d8b1,// 141 PAY 114 

    0x5ff06451,// 142 PAY 115 

    0x1f90e37a,// 143 PAY 116 

    0x23e24c8c,// 144 PAY 117 

    0x0526b25b,// 145 PAY 118 

    0x1b362e36,// 146 PAY 119 

    0x8e354cbd,// 147 PAY 120 

    0x1c304966,// 148 PAY 121 

    0x814ab5c3,// 149 PAY 122 

    0x984f5c05,// 150 PAY 123 

    0x895af581,// 151 PAY 124 

    0x6f305c23,// 152 PAY 125 

    0x3c97328a,// 153 PAY 126 

    0xba752bbb,// 154 PAY 127 

    0xb66704a3,// 155 PAY 128 

    0x379391a9,// 156 PAY 129 

    0xb728a7af,// 157 PAY 130 

    0xb07a50ca,// 158 PAY 131 

    0x47c0d8b2,// 159 PAY 132 

    0x434f409e,// 160 PAY 133 

    0xe1e2498d,// 161 PAY 134 

    0x0d13824c,// 162 PAY 135 

    0xf0caea73,// 163 PAY 136 

    0xbf80155f,// 164 PAY 137 

    0xced016a0,// 165 PAY 138 

    0xcfe68243,// 166 PAY 139 

    0xfc514022,// 167 PAY 140 

    0xfd2b573c,// 168 PAY 141 

    0xedfdcb5d,// 169 PAY 142 

    0xdbd1785b,// 170 PAY 143 

    0x0ed59dd0,// 171 PAY 144 

    0xac68e836,// 172 PAY 145 

    0xfbd44d1a,// 173 PAY 146 

    0x0bdb9f2d,// 174 PAY 147 

    0xcff88b93,// 175 PAY 148 

    0x35367470,// 176 PAY 149 

    0xcc6762e7,// 177 PAY 150 

    0x7802dc5e,// 178 PAY 151 

    0x58324763,// 179 PAY 152 

    0x67aad802,// 180 PAY 153 

    0xcbc408bf,// 181 PAY 154 

    0x93f4ab9f,// 182 PAY 155 

    0x5bd62108,// 183 PAY 156 

    0xc7af81a9,// 184 PAY 157 

    0x5649ff7b,// 185 PAY 158 

    0xdcb1c79c,// 186 PAY 159 

    0x64ebd7c3,// 187 PAY 160 

    0x93e628db,// 188 PAY 161 

    0x3a6a777f,// 189 PAY 162 

    0xad5a995b,// 190 PAY 163 

    0xcf491002,// 191 PAY 164 

    0x12188a41,// 192 PAY 165 

    0x979504cf,// 193 PAY 166 

    0x6c62150b,// 194 PAY 167 

    0xf2f14ea5,// 195 PAY 168 

    0x2386f876,// 196 PAY 169 

    0xe793e1d5,// 197 PAY 170 

    0xd29ac9d6,// 198 PAY 171 

    0x78940742,// 199 PAY 172 

    0x7658a9ea,// 200 PAY 173 

    0x0d90ca01,// 201 PAY 174 

    0x4eba12b1,// 202 PAY 175 

    0x5e2a201f,// 203 PAY 176 

    0x5fece313,// 204 PAY 177 

    0x4bae7213,// 205 PAY 178 

    0x0bf83cc9,// 206 PAY 179 

    0x24b47626,// 207 PAY 180 

    0x51010cfe,// 208 PAY 181 

    0x5d03651a,// 209 PAY 182 

    0x62550629,// 210 PAY 183 

    0xde606b05,// 211 PAY 184 

    0x3c2093c2,// 212 PAY 185 

    0xc8463157,// 213 PAY 186 

    0xee89522d,// 214 PAY 187 

    0x2598b379,// 215 PAY 188 

    0x9ec3980b,// 216 PAY 189 

    0xe56c96f9,// 217 PAY 190 

    0xf44a80a9,// 218 PAY 191 

    0x2b715775,// 219 PAY 192 

    0xe5e0cef6,// 220 PAY 193 

    0x1f3c4ddf,// 221 PAY 194 

    0x05dfd04a,// 222 PAY 195 

    0x4101ea59,// 223 PAY 196 

    0xf074cbdd,// 224 PAY 197 

    0xdeb6e271,// 225 PAY 198 

    0x4d198e3e,// 226 PAY 199 

    0xfa407236,// 227 PAY 200 

    0x529d6d74,// 228 PAY 201 

    0xdb252087,// 229 PAY 202 

    0xdcb5cbd8,// 230 PAY 203 

    0x7c153031,// 231 PAY 204 

    0x147349d7,// 232 PAY 205 

    0x23ceddcc,// 233 PAY 206 

    0x1723391b,// 234 PAY 207 

    0x5636b2bd,// 235 PAY 208 

    0xee3f2d7f,// 236 PAY 209 

    0xbc9dae8c,// 237 PAY 210 

    0x8fa18b35,// 238 PAY 211 

    0x38836ee0,// 239 PAY 212 

    0xdc024b7f,// 240 PAY 213 

    0x16e52d8f,// 241 PAY 214 

    0x014c609e,// 242 PAY 215 

    0x3e79f1a7,// 243 PAY 216 

    0x405c193b,// 244 PAY 217 

    0x8f5f64bd,// 245 PAY 218 

    0x5ca0e509,// 246 PAY 219 

    0x38e2cfc5,// 247 PAY 220 

    0xb8e5d895,// 248 PAY 221 

    0x93172ed3,// 249 PAY 222 

    0x6dc37cfa,// 250 PAY 223 

    0x32f360ad,// 251 PAY 224 

    0xc777598e,// 252 PAY 225 

    0xb1a3af49,// 253 PAY 226 

    0xa61e0411,// 254 PAY 227 

    0x93e71138,// 255 PAY 228 

    0x5dd04d69,// 256 PAY 229 

    0x21b3a0e6,// 257 PAY 230 

    0x8ddc799e,// 258 PAY 231 

    0x7c8f2fd7,// 259 PAY 232 

    0x5c973442,// 260 PAY 233 

    0x53c645a9,// 261 PAY 234 

    0xf4ae8d66,// 262 PAY 235 

    0x9b85ac03,// 263 PAY 236 

    0x2eac4482,// 264 PAY 237 

    0x366b6dfd,// 265 PAY 238 

    0x82c6be39,// 266 PAY 239 

    0xfdd88c5b,// 267 PAY 240 

    0xeff27ce1,// 268 PAY 241 

    0x4dc57b3b,// 269 PAY 242 

    0x8f59289e,// 270 PAY 243 

    0x9d7e6a5b,// 271 PAY 244 

    0xf21e5fcf,// 272 PAY 245 

    0xf832a7af,// 273 PAY 246 

    0x6f3af6be,// 274 PAY 247 

    0x05844566,// 275 PAY 248 

    0x16a20867,// 276 PAY 249 

    0x44cb7eea,// 277 PAY 250 

    0xb15339e3,// 278 PAY 251 

    0x2d65d046,// 279 PAY 252 

    0xcbcda7fe,// 280 PAY 253 

    0xd31748f8,// 281 PAY 254 

    0x101e10bc,// 282 PAY 255 

    0x5bb3d345,// 283 PAY 256 

    0x3575ae9e,// 284 PAY 257 

    0x03c1562d,// 285 PAY 258 

    0x155b85ce,// 286 PAY 259 

    0x75039f2e,// 287 PAY 260 

    0x65a9f42d,// 288 PAY 261 

    0x5c158b60,// 289 PAY 262 

    0x2445a7cd,// 290 PAY 263 

    0x698322c9,// 291 PAY 264 

    0x988b1276,// 292 PAY 265 

    0x58763878,// 293 PAY 266 

    0x4a3689de,// 294 PAY 267 

    0x0dfa889f,// 295 PAY 268 

    0xafe28271,// 296 PAY 269 

    0x88fb3675,// 297 PAY 270 

    0xcb2f57f2,// 298 PAY 271 

    0xaf323cc0,// 299 PAY 272 

/// STA is 1 words. 

/// STA num_pkts       : 208 

/// STA pkt_idx        : 48 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x5f 

    0x00c05fd0 // 300 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 88 (0x58) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_sha1_pkt40_tmpl[] = {
    0xb8010058,// 1 CCH   1 

/// ECH cache_idx      : 0x04 

/// ECH pdu_tag        : 0x00 

    0x00040000,// 2 ECH   1 

/// SCX is 21 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound save_icv insert_icv !check_icv sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : SHA1 

/// SCX aes_size        : AES256 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x5 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 8 

/// SCX authctx_size    : 40 

    0x00000015,// 3 SCX   1 

    0x80664891,// 4 SCX   2 

    0x00006582,// 5 SCX   3 

    0x6c1942fe,// 6 SCX   4 

    0x3d5afafd,// 7 SCX   5 

    0x0de06fd6,// 8 SCX   6 

    0x17e57864,// 9 SCX   7 

    0xa22e0653,// 10 SCX   8 

    0x51bcc426,// 11 SCX   9 

    0x850cc560,// 12 SCX  10 

    0x2060f867,// 13 SCX  11 

    0x4db3c84d,// 14 SCX  12 

    0xf6eff365,// 15 SCX  13 

    0x42034bc5,// 16 SCX  14 

    0x36292485,// 17 SCX  15 

    0x80b60d15,// 18 SCX  16 

    0xf4bc0576,// 19 SCX  17 

    0x80f1b551,// 20 SCX  18 

    0x36c1972c,// 21 SCX  19 

    0x8453c348,// 22 SCX  20 

    0x25ca5954,// 23 SCX  21 

/// BFD is 3 words. 

/// BFD tot_len        : 1749 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 220 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 220 

/// BFD lencrypto      : 40 

/// BFD ofstcrypto     : 164 

/// BFD (ofst+len)cry  : 204 

/// BFD ofstiv         : 128 

/// BFD ofsticv        : 1000 

    0x000000dc,// 24 BFD   1 

    0x00a40028,// 25 BFD   2 

    0x03e80080,// 26 BFD   3 

/// MFM is 3 words. 

/// MFM vldnibs        : 11 

    0x110031e5,// 27 MFM   1 

    0x24d44bfa,// 28 MFM   2 

    0xb0a0f000,// 29 MFM   3 

/// BDA is 439 words. 

/// BDA size     is 1749 (0x6d5) 

/// BDA id       is 0xd94d 

    0x06d5d94d,// 30 BDA   1 

/// PAY Generic Data size   : 1749 byte(s) 

/// PAD Buffer Data Pad size   : 3 byte(s) 

    0xa1a0d39a,// 31 PAY   1 

    0xdf3b5fbb,// 32 PAY   2 

    0xf3d31c45,// 33 PAY   3 

    0x440b236e,// 34 PAY   4 

    0xd4ddeaea,// 35 PAY   5 

    0x3362f0fb,// 36 PAY   6 

    0xff5296a8,// 37 PAY   7 

    0x9b9cb418,// 38 PAY   8 

    0xf0c41481,// 39 PAY   9 

    0x632f105c,// 40 PAY  10 

    0x27660b7c,// 41 PAY  11 

    0x07016435,// 42 PAY  12 

    0x659c9413,// 43 PAY  13 

    0xd5dc99ac,// 44 PAY  14 

    0x87b582ef,// 45 PAY  15 

    0x6eac083e,// 46 PAY  16 

    0x08ed721e,// 47 PAY  17 

    0x13aad280,// 48 PAY  18 

    0xa9a90c1b,// 49 PAY  19 

    0x9636e107,// 50 PAY  20 

    0xb3ac74e8,// 51 PAY  21 

    0xcc3c971f,// 52 PAY  22 

    0x6273bb0f,// 53 PAY  23 

    0xf2c368fe,// 54 PAY  24 

    0x1a89aaca,// 55 PAY  25 

    0xc6818263,// 56 PAY  26 

    0xecc77023,// 57 PAY  27 

    0x4f8d1513,// 58 PAY  28 

    0x6c37b995,// 59 PAY  29 

    0xffd3f8f7,// 60 PAY  30 

    0x64261ade,// 61 PAY  31 

    0x06f88684,// 62 PAY  32 

    0x9671e650,// 63 PAY  33 

    0x466c1bd1,// 64 PAY  34 

    0x5cd74da1,// 65 PAY  35 

    0x5c3d4812,// 66 PAY  36 

    0xba276a01,// 67 PAY  37 

    0x594f6767,// 68 PAY  38 

    0x51065e26,// 69 PAY  39 

    0xdad8260b,// 70 PAY  40 

    0x8789bd94,// 71 PAY  41 

    0x8df2f33b,// 72 PAY  42 

    0x903d6317,// 73 PAY  43 

    0x150fcf56,// 74 PAY  44 

    0x0b7fe4e8,// 75 PAY  45 

    0xed17cccf,// 76 PAY  46 

    0xbb6b1728,// 77 PAY  47 

    0x4297ed33,// 78 PAY  48 

    0xae8e66de,// 79 PAY  49 

    0x70ec743a,// 80 PAY  50 

    0xcdcae8a7,// 81 PAY  51 

    0x6656b7e8,// 82 PAY  52 

    0xf246838d,// 83 PAY  53 

    0x6dc17766,// 84 PAY  54 

    0xd1de366c,// 85 PAY  55 

    0x3274d6a1,// 86 PAY  56 

    0x0111fc4b,// 87 PAY  57 

    0x16aec896,// 88 PAY  58 

    0x872ae94e,// 89 PAY  59 

    0x411144fb,// 90 PAY  60 

    0x49d90fb5,// 91 PAY  61 

    0xa840374c,// 92 PAY  62 

    0x84023912,// 93 PAY  63 

    0xbce07566,// 94 PAY  64 

    0xb35ed309,// 95 PAY  65 

    0x7b5a4425,// 96 PAY  66 

    0x24116836,// 97 PAY  67 

    0xaed2dbed,// 98 PAY  68 

    0xbd428593,// 99 PAY  69 

    0x3c7c1662,// 100 PAY  70 

    0xf03c8b1b,// 101 PAY  71 

    0x4095545f,// 102 PAY  72 

    0x228480aa,// 103 PAY  73 

    0x38fd219b,// 104 PAY  74 

    0xbd05bc3d,// 105 PAY  75 

    0x82c5e040,// 106 PAY  76 

    0x1621260e,// 107 PAY  77 

    0x1f728828,// 108 PAY  78 

    0xe6573a5d,// 109 PAY  79 

    0x9405fab9,// 110 PAY  80 

    0x2df5416d,// 111 PAY  81 

    0xcb9684dc,// 112 PAY  82 

    0xfb4b452f,// 113 PAY  83 

    0x3747adec,// 114 PAY  84 

    0x8c12d3e1,// 115 PAY  85 

    0x804e27fe,// 116 PAY  86 

    0xa89c2a3f,// 117 PAY  87 

    0x82216652,// 118 PAY  88 

    0x65ec1b3d,// 119 PAY  89 

    0x84409e2e,// 120 PAY  90 

    0x81c4924d,// 121 PAY  91 

    0x396d10b6,// 122 PAY  92 

    0xbec37060,// 123 PAY  93 

    0x337d6106,// 124 PAY  94 

    0xe77e13c4,// 125 PAY  95 

    0x8f6a8632,// 126 PAY  96 

    0x7c672ac7,// 127 PAY  97 

    0x03a2fe34,// 128 PAY  98 

    0x88f407aa,// 129 PAY  99 

    0x95c1dbfa,// 130 PAY 100 

    0x38adc0c3,// 131 PAY 101 

    0x15a862de,// 132 PAY 102 

    0x1d822b27,// 133 PAY 103 

    0xdb92d09a,// 134 PAY 104 

    0x8fb7cdc9,// 135 PAY 105 

    0xc6b95886,// 136 PAY 106 

    0xa45e226b,// 137 PAY 107 

    0xc8344dc8,// 138 PAY 108 

    0x15fd3d44,// 139 PAY 109 

    0xa25cd729,// 140 PAY 110 

    0x4c91a5d4,// 141 PAY 111 

    0x162bfc53,// 142 PAY 112 

    0xb7195fb5,// 143 PAY 113 

    0x1e615fd2,// 144 PAY 114 

    0xdf75e63a,// 145 PAY 115 

    0xcf600311,// 146 PAY 116 

    0x4939952c,// 147 PAY 117 

    0xd21b6562,// 148 PAY 118 

    0x3fe04938,// 149 PAY 119 

    0x7c8b2e10,// 150 PAY 120 

    0xf56049e6,// 151 PAY 121 

    0x18681429,// 152 PAY 122 

    0x6a24ffc4,// 153 PAY 123 

    0x49402b73,// 154 PAY 124 

    0xc55340ed,// 155 PAY 125 

    0x6f0ee34b,// 156 PAY 126 

    0x4d29891d,// 157 PAY 127 

    0x4a05e8d2,// 158 PAY 128 

    0x5b03e169,// 159 PAY 129 

    0x3faf8268,// 160 PAY 130 

    0x8edf7b72,// 161 PAY 131 

    0x0add7ce8,// 162 PAY 132 

    0x00ee213a,// 163 PAY 133 

    0xb19435a6,// 164 PAY 134 

    0x9f285900,// 165 PAY 135 

    0x6e247e3b,// 166 PAY 136 

    0x917cea02,// 167 PAY 137 

    0x22158e89,// 168 PAY 138 

    0xf82a52e8,// 169 PAY 139 

    0xa053fd07,// 170 PAY 140 

    0x2c16a15d,// 171 PAY 141 

    0x56af1582,// 172 PAY 142 

    0x1e5e319e,// 173 PAY 143 

    0xf7a70bf5,// 174 PAY 144 

    0x09ac55bc,// 175 PAY 145 

    0xdc2e4719,// 176 PAY 146 

    0xe839f09d,// 177 PAY 147 

    0x1ef204d2,// 178 PAY 148 

    0x19283c36,// 179 PAY 149 

    0x59456232,// 180 PAY 150 

    0xe17291d6,// 181 PAY 151 

    0x2f78c5d1,// 182 PAY 152 

    0x41b98066,// 183 PAY 153 

    0xcab2abd9,// 184 PAY 154 

    0xfae650da,// 185 PAY 155 

    0x460d6fae,// 186 PAY 156 

    0x8fb27665,// 187 PAY 157 

    0xe16c691e,// 188 PAY 158 

    0x42b923d1,// 189 PAY 159 

    0x1334d8ee,// 190 PAY 160 

    0xff41d971,// 191 PAY 161 

    0xf186da92,// 192 PAY 162 

    0x94d02db7,// 193 PAY 163 

    0x01c2a5e2,// 194 PAY 164 

    0xb3eb0d06,// 195 PAY 165 

    0x907c6b82,// 196 PAY 166 

    0x302d8e3c,// 197 PAY 167 

    0x4fab634c,// 198 PAY 168 

    0x7417d926,// 199 PAY 169 

    0x5850fa97,// 200 PAY 170 

    0xa84cd941,// 201 PAY 171 

    0x15d20d4a,// 202 PAY 172 

    0x8fd5c403,// 203 PAY 173 

    0xf1d4613f,// 204 PAY 174 

    0xe0087423,// 205 PAY 175 

    0xf810ee02,// 206 PAY 176 

    0x772939f2,// 207 PAY 177 

    0x8163a0d2,// 208 PAY 178 

    0x81652d26,// 209 PAY 179 

    0xcaee5646,// 210 PAY 180 

    0x47be7c7e,// 211 PAY 181 

    0x48d8999f,// 212 PAY 182 

    0xfe818ef1,// 213 PAY 183 

    0xad547585,// 214 PAY 184 

    0x792f282e,// 215 PAY 185 

    0x6578aa78,// 216 PAY 186 

    0x0dc5aeb7,// 217 PAY 187 

    0x3e9be63c,// 218 PAY 188 

    0x2c7ea285,// 219 PAY 189 

    0x2921754c,// 220 PAY 190 

    0x0de51da9,// 221 PAY 191 

    0x96d186ab,// 222 PAY 192 

    0x372122ef,// 223 PAY 193 

    0xd8a7138d,// 224 PAY 194 

    0x5adb3ced,// 225 PAY 195 

    0x60631de8,// 226 PAY 196 

    0xab2eb553,// 227 PAY 197 

    0xf279bd76,// 228 PAY 198 

    0x33504d6d,// 229 PAY 199 

    0xb0be4346,// 230 PAY 200 

    0x8ce3a10c,// 231 PAY 201 

    0x20627e41,// 232 PAY 202 

    0x3d3dfafc,// 233 PAY 203 

    0xe2e5e078,// 234 PAY 204 

    0xb13086cf,// 235 PAY 205 

    0xf4181e5c,// 236 PAY 206 

    0x0bb03415,// 237 PAY 207 

    0x3ca351e5,// 238 PAY 208 

    0x7f88b19a,// 239 PAY 209 

    0x8de6052c,// 240 PAY 210 

    0xe4f7eb5b,// 241 PAY 211 

    0xd20c2eb0,// 242 PAY 212 

    0xd75b3587,// 243 PAY 213 

    0x82703560,// 244 PAY 214 

    0x200d6718,// 245 PAY 215 

    0x9dba77e3,// 246 PAY 216 

    0x073364b6,// 247 PAY 217 

    0x70e29b47,// 248 PAY 218 

    0x15d7a164,// 249 PAY 219 

    0xc562eedb,// 250 PAY 220 

    0x864df969,// 251 PAY 221 

    0x95f71e28,// 252 PAY 222 

    0xee0cf7e9,// 253 PAY 223 

    0x720378e7,// 254 PAY 224 

    0x41f744cf,// 255 PAY 225 

    0x38d564f1,// 256 PAY 226 

    0x5b936703,// 257 PAY 227 

    0x3ca80102,// 258 PAY 228 

    0x4bc96d5c,// 259 PAY 229 

    0x7a9c372d,// 260 PAY 230 

    0x55fb4093,// 261 PAY 231 

    0xd42c3b62,// 262 PAY 232 

    0x0881d9da,// 263 PAY 233 

    0xe2377808,// 264 PAY 234 

    0x3d47faf4,// 265 PAY 235 

    0x3117d48c,// 266 PAY 236 

    0xc597308e,// 267 PAY 237 

    0xd6e7cfdb,// 268 PAY 238 

    0x8918c7c7,// 269 PAY 239 

    0x120b01db,// 270 PAY 240 

    0x2ce2c17c,// 271 PAY 241 

    0x57a491e6,// 272 PAY 242 

    0xb1892cd6,// 273 PAY 243 

    0xfaba168a,// 274 PAY 244 

    0x8b8d07f4,// 275 PAY 245 

    0x4baee747,// 276 PAY 246 

    0xb3374396,// 277 PAY 247 

    0x22831def,// 278 PAY 248 

    0x61d23fe6,// 279 PAY 249 

    0xa63587bf,// 280 PAY 250 

    0x3a465acf,// 281 PAY 251 

    0x59746416,// 282 PAY 252 

    0xc8c3688a,// 283 PAY 253 

    0xcc4e61ac,// 284 PAY 254 

    0x6e6597f8,// 285 PAY 255 

    0xed21bd54,// 286 PAY 256 

    0x02124b0b,// 287 PAY 257 

    0xebf9b76a,// 288 PAY 258 

    0x4108a406,// 289 PAY 259 

    0xe7a17c8b,// 290 PAY 260 

    0x66b2ad5c,// 291 PAY 261 

    0x6a99344f,// 292 PAY 262 

    0x0da6272d,// 293 PAY 263 

    0x927650bd,// 294 PAY 264 

    0xb23acc49,// 295 PAY 265 

    0x7cd366d8,// 296 PAY 266 

    0xc2ea0663,// 297 PAY 267 

    0x894e4b23,// 298 PAY 268 

    0x4c5d2ea1,// 299 PAY 269 

    0xe6304b89,// 300 PAY 270 

    0x7d49bc5e,// 301 PAY 271 

    0x99e37faa,// 302 PAY 272 

    0x8d298dae,// 303 PAY 273 

    0x579db8db,// 304 PAY 274 

    0xc952ff30,// 305 PAY 275 

    0x7b1815c9,// 306 PAY 276 

    0x2b417153,// 307 PAY 277 

    0x35bf4e12,// 308 PAY 278 

    0x834bfdbc,// 309 PAY 279 

    0x8980ffe0,// 310 PAY 280 

    0xe7730495,// 311 PAY 281 

    0x8c225d06,// 312 PAY 282 

    0xea9dbdb1,// 313 PAY 283 

    0xd69144ee,// 314 PAY 284 

    0x5c30c961,// 315 PAY 285 

    0xdfe8443b,// 316 PAY 286 

    0xed948116,// 317 PAY 287 

    0x99de74c2,// 318 PAY 288 

    0xd048c9df,// 319 PAY 289 

    0xd89f6b58,// 320 PAY 290 

    0x43d050e4,// 321 PAY 291 

    0xbaead4f9,// 322 PAY 292 

    0x73edb75c,// 323 PAY 293 

    0xc0fe658c,// 324 PAY 294 

    0x61a2da90,// 325 PAY 295 

    0xe5eb4fe6,// 326 PAY 296 

    0x4b16a411,// 327 PAY 297 

    0x72537c5d,// 328 PAY 298 

    0x2d25577f,// 329 PAY 299 

    0x964d2f45,// 330 PAY 300 

    0xde378ea7,// 331 PAY 301 

    0x9a659aec,// 332 PAY 302 

    0x3562cd57,// 333 PAY 303 

    0x6da7dada,// 334 PAY 304 

    0xafbdd953,// 335 PAY 305 

    0x176c0036,// 336 PAY 306 

    0xdb83461f,// 337 PAY 307 

    0xaf8aebd3,// 338 PAY 308 

    0x9db41d75,// 339 PAY 309 

    0x8b22feb7,// 340 PAY 310 

    0xb835cfb5,// 341 PAY 311 

    0xd02e02a3,// 342 PAY 312 

    0x79399ff7,// 343 PAY 313 

    0x6cb7f79c,// 344 PAY 314 

    0x05151d00,// 345 PAY 315 

    0xf61d7487,// 346 PAY 316 

    0x89b47fb1,// 347 PAY 317 

    0x79c165ee,// 348 PAY 318 

    0x722c3a19,// 349 PAY 319 

    0xc4c39f36,// 350 PAY 320 

    0xe6283d77,// 351 PAY 321 

    0xb79a6d64,// 352 PAY 322 

    0x6302d900,// 353 PAY 323 

    0x2b562d07,// 354 PAY 324 

    0xa60b9cb7,// 355 PAY 325 

    0xcfbae2f6,// 356 PAY 326 

    0xbe1e5eb0,// 357 PAY 327 

    0x7d34b6a1,// 358 PAY 328 

    0xac62ac86,// 359 PAY 329 

    0xfdc6b6ed,// 360 PAY 330 

    0x34a50751,// 361 PAY 331 

    0xffc84142,// 362 PAY 332 

    0xf3a3a25d,// 363 PAY 333 

    0x6af41280,// 364 PAY 334 

    0xf123b94d,// 365 PAY 335 

    0x5f16358d,// 366 PAY 336 

    0xc374cc3a,// 367 PAY 337 

    0x7742988c,// 368 PAY 338 

    0xa436d3e2,// 369 PAY 339 

    0x7f9a8cd1,// 370 PAY 340 

    0xa3e71d26,// 371 PAY 341 

    0xcf510959,// 372 PAY 342 

    0x1d7de66e,// 373 PAY 343 

    0x6eabdf20,// 374 PAY 344 

    0x617b8999,// 375 PAY 345 

    0xf4a0e716,// 376 PAY 346 

    0xe873b93e,// 377 PAY 347 

    0x9f68163a,// 378 PAY 348 

    0x4b732b33,// 379 PAY 349 

    0x73314e63,// 380 PAY 350 

    0x1c0a704c,// 381 PAY 351 

    0xc3d4b94b,// 382 PAY 352 

    0x3ce58310,// 383 PAY 353 

    0xd1fc0e46,// 384 PAY 354 

    0xb0f5e0c1,// 385 PAY 355 

    0x042e7697,// 386 PAY 356 

    0xa9d63a49,// 387 PAY 357 

    0x5ba8fd77,// 388 PAY 358 

    0x0f3f7802,// 389 PAY 359 

    0x014a8387,// 390 PAY 360 

    0xf9b7d264,// 391 PAY 361 

    0x6bf453fa,// 392 PAY 362 

    0xe483d6de,// 393 PAY 363 

    0x1d00c1ea,// 394 PAY 364 

    0x8fd1f6fc,// 395 PAY 365 

    0x070852b7,// 396 PAY 366 

    0x56e10e5a,// 397 PAY 367 

    0x04268f81,// 398 PAY 368 

    0x9964c537,// 399 PAY 369 

    0x4a08cffc,// 400 PAY 370 

    0xa99a9fc3,// 401 PAY 371 

    0x2d793b24,// 402 PAY 372 

    0xcc4e0838,// 403 PAY 373 

    0xacfc823c,// 404 PAY 374 

    0xf85c8b99,// 405 PAY 375 

    0xc5c35769,// 406 PAY 376 

    0xfd49b5c9,// 407 PAY 377 

    0xa15161ed,// 408 PAY 378 

    0x60056d3d,// 409 PAY 379 

    0x2378f733,// 410 PAY 380 

    0x4b542ee2,// 411 PAY 381 

    0x26f81d2a,// 412 PAY 382 

    0x95778f69,// 413 PAY 383 

    0x1ace4d7d,// 414 PAY 384 

    0x780527be,// 415 PAY 385 

    0x79f979c4,// 416 PAY 386 

    0xc2c52ec6,// 417 PAY 387 

    0xe8b61cde,// 418 PAY 388 

    0x37f5daaf,// 419 PAY 389 

    0xc9efd3c5,// 420 PAY 390 

    0xdf0b4a6a,// 421 PAY 391 

    0x888dcd57,// 422 PAY 392 

    0x314a70b9,// 423 PAY 393 

    0x59f31e4b,// 424 PAY 394 

    0xad0cd829,// 425 PAY 395 

    0xb02a8a7a,// 426 PAY 396 

    0xc08633b1,// 427 PAY 397 

    0xd71bb318,// 428 PAY 398 

    0x47b7abf7,// 429 PAY 399 

    0xaee9cfe7,// 430 PAY 400 

    0x0581f751,// 431 PAY 401 

    0xd818bf56,// 432 PAY 402 

    0xf80f1026,// 433 PAY 403 

    0xeece9120,// 434 PAY 404 

    0xb82882db,// 435 PAY 405 

    0xf58f62c9,// 436 PAY 406 

    0x9140e1af,// 437 PAY 407 

    0x8612cd52,// 438 PAY 408 

    0x88e3db43,// 439 PAY 409 

    0x2e756e30,// 440 PAY 410 

    0x69ccc25f,// 441 PAY 411 

    0x65bc1f8e,// 442 PAY 412 

    0xc92b0462,// 443 PAY 413 

    0x6274fbba,// 444 PAY 414 

    0x5516ed4c,// 445 PAY 415 

    0x942479c1,// 446 PAY 416 

    0x80242847,// 447 PAY 417 

    0x1987d9a5,// 448 PAY 418 

    0x91a1051e,// 449 PAY 419 

    0x60b2802c,// 450 PAY 420 

    0xc445625d,// 451 PAY 421 

    0x9df1a89c,// 452 PAY 422 

    0xcfae6e2e,// 453 PAY 423 

    0x20963696,// 454 PAY 424 

    0xccb8f6e2,// 455 PAY 425 

    0x81d8696c,// 456 PAY 426 

    0x6ed1170e,// 457 PAY 427 

    0x6edc168c,// 458 PAY 428 

    0x2ebd92d5,// 459 PAY 429 

    0x1f5818c4,// 460 PAY 430 

    0x452bc949,// 461 PAY 431 

    0xc671e06a,// 462 PAY 432 

    0xba6f1b12,// 463 PAY 433 

    0xefe8d96f,// 464 PAY 434 

    0x5ce336f5,// 465 PAY 435 

    0x27c7a565,// 466 PAY 436 

    0x12b0f558,// 467 PAY 437 

    0xfa000000,// 468 PAY 438 

/// STA is 1 words. 

/// STA num_pkts       : 120 

/// STA pkt_idx        : 243 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xdb 

    0x03ccdb78 // 469 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 80 (0x50) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_sha1_pkt41_tmpl[] = {
    0xb8010050,// 1 CCH   1 

/// ECH cache_idx      : 0x00 

/// ECH pdu_tag        : 0x00 

    0x00000000,// 2 ECH   1 

/// SCX is 19 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound !save_icv !insert_icv check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : SHA1 

/// SCX aes_size        : RC4UPDT_AES192 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x4 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 40 

    0x08000013,// 3 SCX   1 

    0x8061482a,// 4 SCX   2 

    0x00001400,// 5 SCX   3 

    0x62f7e0f3,// 6 SCX   4 

    0x16bd42ff,// 7 SCX   5 

    0x0c1b8de0,// 8 SCX   6 

    0xb75f6d98,// 9 SCX   7 

    0x8904d794,// 10 SCX   8 

    0x6dabb87b,// 11 SCX   9 

    0xb91c7e68,// 12 SCX  10 

    0x9eefb014,// 13 SCX  11 

    0x8c86e82e,// 14 SCX  12 

    0xb2d5b01b,// 15 SCX  13 

    0x4b8d0706,// 16 SCX  14 

    0xafbb46d9,// 17 SCX  15 

    0x2ae3ff27,// 18 SCX  16 

    0x0a80948d,// 19 SCX  17 

    0x2cd594fe,// 20 SCX  18 

    0x03ff6b17,// 21 SCX  19 

/// BFD is 3 words. 

/// BFD tot_len        : 1925 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 1326 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 1326 

/// BFD lencrypto      : 8 

/// BFD ofstcrypto     : 1088 

/// BFD (ofst+len)cry  : 1096 

/// BFD ofstiv         : 172 

/// BFD ofsticv        : 1392 

    0x0000052e,// 22 BFD   1 

    0x04400008,// 23 BFD   2 

    0x057000ac,// 24 BFD   3 

/// MFM is 16 words. 

/// MFM vldnibs        : 7c 

    0x7c00e14f,// 25 MFM   1 

    0x12ae6e14,// 26 MFM   2 

    0x39e52552,// 27 MFM   3 

    0xb049220e,// 28 MFM   4 

    0xcfdf4d79,// 29 MFM   5 

    0x00c1454c,// 30 MFM   6 

    0x99d1257f,// 31 MFM   7 

    0x1d6ddc08,// 32 MFM   8 

    0xe49e8272,// 33 MFM   9 

    0xda5d4a84,// 34 MFM  10 

    0xe22ea065,// 35 MFM  11 

    0x550b975e,// 36 MFM  12 

    0x753cb36f,// 37 MFM  13 

    0x4e373112,// 38 MFM  14 

    0x4e1026ae,// 39 MFM  15 

    0x4c7cd303,// 40 MFM  16 

/// BDA is 483 words. 

/// BDA size     is 1925 (0x785) 

/// BDA id       is 0x4f88 

    0x07854f88,// 41 BDA   1 

/// PAY Generic Data size   : 1925 byte(s) 

/// PAD Buffer Data Pad size   : 3 byte(s) 

    0x1d212ce8,// 42 PAY   1 

    0x136a18f8,// 43 PAY   2 

    0x55412ab5,// 44 PAY   3 

    0x6dba33e9,// 45 PAY   4 

    0x8c0e5828,// 46 PAY   5 

    0x696cda8c,// 47 PAY   6 

    0x7a308565,// 48 PAY   7 

    0xadd22981,// 49 PAY   8 

    0x6c1cdecb,// 50 PAY   9 

    0x925e3f81,// 51 PAY  10 

    0xc21d340b,// 52 PAY  11 

    0x656dee13,// 53 PAY  12 

    0xc9d8015b,// 54 PAY  13 

    0x72a47536,// 55 PAY  14 

    0x837006bd,// 56 PAY  15 

    0x144204ad,// 57 PAY  16 

    0x5142ef21,// 58 PAY  17 

    0x12705207,// 59 PAY  18 

    0xaa2837ed,// 60 PAY  19 

    0x3e1d4b5c,// 61 PAY  20 

    0xf2b9870b,// 62 PAY  21 

    0x2af24a3c,// 63 PAY  22 

    0x9a559acd,// 64 PAY  23 

    0x9659df7c,// 65 PAY  24 

    0x9829c20c,// 66 PAY  25 

    0x84fa34a9,// 67 PAY  26 

    0x4eb88b19,// 68 PAY  27 

    0xd8b259b4,// 69 PAY  28 

    0x54c89cc8,// 70 PAY  29 

    0x2386f637,// 71 PAY  30 

    0xc6b2a4fb,// 72 PAY  31 

    0x851212e9,// 73 PAY  32 

    0xe44ccaf0,// 74 PAY  33 

    0x2f198a87,// 75 PAY  34 

    0x54b0302c,// 76 PAY  35 

    0x32c52d7e,// 77 PAY  36 

    0x9efe868d,// 78 PAY  37 

    0x5c01c603,// 79 PAY  38 

    0x1c902749,// 80 PAY  39 

    0xfed5a404,// 81 PAY  40 

    0x911c2596,// 82 PAY  41 

    0xd519f9c3,// 83 PAY  42 

    0x7ba74924,// 84 PAY  43 

    0x30f1e850,// 85 PAY  44 

    0x75aa4df9,// 86 PAY  45 

    0xd25ae7db,// 87 PAY  46 

    0xb4d22dc3,// 88 PAY  47 

    0x3677d077,// 89 PAY  48 

    0x8dc77e7b,// 90 PAY  49 

    0xa7486688,// 91 PAY  50 

    0x860444be,// 92 PAY  51 

    0xba7c1566,// 93 PAY  52 

    0xb69572c3,// 94 PAY  53 

    0x69c810c2,// 95 PAY  54 

    0x67d718ad,// 96 PAY  55 

    0xea9c8842,// 97 PAY  56 

    0x09305bdc,// 98 PAY  57 

    0x912c0c86,// 99 PAY  58 

    0x63da0242,// 100 PAY  59 

    0x7f8ba8ae,// 101 PAY  60 

    0x45989fd7,// 102 PAY  61 

    0x7510dc33,// 103 PAY  62 

    0xd7480b7c,// 104 PAY  63 

    0xd491ddbd,// 105 PAY  64 

    0x3201349f,// 106 PAY  65 

    0x76d1a4bf,// 107 PAY  66 

    0x0f548645,// 108 PAY  67 

    0x0c883311,// 109 PAY  68 

    0x35ee092f,// 110 PAY  69 

    0x0aaac08b,// 111 PAY  70 

    0x19f3e4ea,// 112 PAY  71 

    0x32c3df05,// 113 PAY  72 

    0x97ac9332,// 114 PAY  73 

    0xfa239f68,// 115 PAY  74 

    0x2c1612e6,// 116 PAY  75 

    0xbd2a83ee,// 117 PAY  76 

    0xeb7f013d,// 118 PAY  77 

    0x6ceeed07,// 119 PAY  78 

    0x7720286f,// 120 PAY  79 

    0xd9d1373d,// 121 PAY  80 

    0x3e180550,// 122 PAY  81 

    0x7c46dee1,// 123 PAY  82 

    0xeb01e524,// 124 PAY  83 

    0x699eb9ed,// 125 PAY  84 

    0x988aecff,// 126 PAY  85 

    0xe644ba38,// 127 PAY  86 

    0x2615674a,// 128 PAY  87 

    0x20b834b7,// 129 PAY  88 

    0xe0ba4a42,// 130 PAY  89 

    0x38ac80f7,// 131 PAY  90 

    0xaad433ec,// 132 PAY  91 

    0x42f22469,// 133 PAY  92 

    0x53fa42dc,// 134 PAY  93 

    0x9453bd45,// 135 PAY  94 

    0x93ba2eaf,// 136 PAY  95 

    0xb682994f,// 137 PAY  96 

    0x83b068fc,// 138 PAY  97 

    0xa5b41e51,// 139 PAY  98 

    0xdd887d15,// 140 PAY  99 

    0x8fff3e3c,// 141 PAY 100 

    0x66b4b4e8,// 142 PAY 101 

    0x9601e50a,// 143 PAY 102 

    0x873a56b5,// 144 PAY 103 

    0x166882a9,// 145 PAY 104 

    0x49b9cf85,// 146 PAY 105 

    0xcf6e8483,// 147 PAY 106 

    0xa78cf770,// 148 PAY 107 

    0x05ce8945,// 149 PAY 108 

    0x374135a6,// 150 PAY 109 

    0x212d4188,// 151 PAY 110 

    0xae535310,// 152 PAY 111 

    0x9139688b,// 153 PAY 112 

    0x60deb26d,// 154 PAY 113 

    0x5207d979,// 155 PAY 114 

    0xcbe0877f,// 156 PAY 115 

    0xfa18289a,// 157 PAY 116 

    0xa95daa48,// 158 PAY 117 

    0x9736457b,// 159 PAY 118 

    0xd8825f9e,// 160 PAY 119 

    0x83eec0fb,// 161 PAY 120 

    0xfe3f5614,// 162 PAY 121 

    0xcc74c195,// 163 PAY 122 

    0x45652dc6,// 164 PAY 123 

    0x93a9f905,// 165 PAY 124 

    0x7d40df5b,// 166 PAY 125 

    0xda808b23,// 167 PAY 126 

    0x2273a7e0,// 168 PAY 127 

    0x88d822b9,// 169 PAY 128 

    0x239390b1,// 170 PAY 129 

    0x18fefc81,// 171 PAY 130 

    0x13de9a55,// 172 PAY 131 

    0x7a81d459,// 173 PAY 132 

    0x1149d76b,// 174 PAY 133 

    0x35a114ff,// 175 PAY 134 

    0xb0f38ded,// 176 PAY 135 

    0x738843df,// 177 PAY 136 

    0x54c5a28a,// 178 PAY 137 

    0x87875e19,// 179 PAY 138 

    0x1b76b5e4,// 180 PAY 139 

    0x62b3e66d,// 181 PAY 140 

    0xdd28ae24,// 182 PAY 141 

    0x89a1a736,// 183 PAY 142 

    0x6bd5d0ab,// 184 PAY 143 

    0x396e83c1,// 185 PAY 144 

    0x24599351,// 186 PAY 145 

    0x4a9553f4,// 187 PAY 146 

    0x41c44bbb,// 188 PAY 147 

    0xab3442c1,// 189 PAY 148 

    0x45c1eb52,// 190 PAY 149 

    0x9e1773ad,// 191 PAY 150 

    0x364ba428,// 192 PAY 151 

    0x7dd9ff0b,// 193 PAY 152 

    0x1a86d6ed,// 194 PAY 153 

    0xc392c523,// 195 PAY 154 

    0xfa0702c7,// 196 PAY 155 

    0xd024a2e9,// 197 PAY 156 

    0x8ab63404,// 198 PAY 157 

    0xc55eed8c,// 199 PAY 158 

    0x3379043b,// 200 PAY 159 

    0xf6898a2d,// 201 PAY 160 

    0x9ed2ab52,// 202 PAY 161 

    0xc9333576,// 203 PAY 162 

    0xfef73de6,// 204 PAY 163 

    0x3b26c890,// 205 PAY 164 

    0x76384d47,// 206 PAY 165 

    0x370aea8c,// 207 PAY 166 

    0x6ef3dd23,// 208 PAY 167 

    0x7b07cc9e,// 209 PAY 168 

    0x318dd2e0,// 210 PAY 169 

    0x0c736d7d,// 211 PAY 170 

    0x18ba78ef,// 212 PAY 171 

    0x0c89e6a9,// 213 PAY 172 

    0x3253742d,// 214 PAY 173 

    0xc0d7163e,// 215 PAY 174 

    0x9cd98513,// 216 PAY 175 

    0x8daa11c5,// 217 PAY 176 

    0xa6c91ff9,// 218 PAY 177 

    0x47bae2cb,// 219 PAY 178 

    0x008f9ac3,// 220 PAY 179 

    0xcbd3cf96,// 221 PAY 180 

    0xff4e5cde,// 222 PAY 181 

    0x7d9ea041,// 223 PAY 182 

    0x242fce91,// 224 PAY 183 

    0xdeb6f7a0,// 225 PAY 184 

    0x75df8bfc,// 226 PAY 185 

    0x4dc50974,// 227 PAY 186 

    0x3f8b9ca1,// 228 PAY 187 

    0xf7af07c9,// 229 PAY 188 

    0x5f32941a,// 230 PAY 189 

    0x742c52f2,// 231 PAY 190 

    0xc5058c71,// 232 PAY 191 

    0x75137d11,// 233 PAY 192 

    0x4fd50419,// 234 PAY 193 

    0x39951bb5,// 235 PAY 194 

    0x8c9ccfbe,// 236 PAY 195 

    0xb79ea3a7,// 237 PAY 196 

    0x77c737d1,// 238 PAY 197 

    0xd3c5f5ac,// 239 PAY 198 

    0x4b3a7fc9,// 240 PAY 199 

    0x549ec002,// 241 PAY 200 

    0x8a41318c,// 242 PAY 201 

    0xaebdf331,// 243 PAY 202 

    0x94def807,// 244 PAY 203 

    0x0721ba9e,// 245 PAY 204 

    0x9fb9340e,// 246 PAY 205 

    0x1c88eefb,// 247 PAY 206 

    0x03506de9,// 248 PAY 207 

    0x555d99df,// 249 PAY 208 

    0xf2895a65,// 250 PAY 209 

    0xe1888162,// 251 PAY 210 

    0x4a9dd23d,// 252 PAY 211 

    0x4dd07f27,// 253 PAY 212 

    0xa0653eb6,// 254 PAY 213 

    0x3a8f5e47,// 255 PAY 214 

    0xe6ff8b65,// 256 PAY 215 

    0x75ae4394,// 257 PAY 216 

    0x28a8dc3f,// 258 PAY 217 

    0x413cb02a,// 259 PAY 218 

    0xa103a87d,// 260 PAY 219 

    0x40ea7f66,// 261 PAY 220 

    0x5465e492,// 262 PAY 221 

    0x2c2c009c,// 263 PAY 222 

    0xdd3a3c6d,// 264 PAY 223 

    0x14bd49bf,// 265 PAY 224 

    0x5e78cc53,// 266 PAY 225 

    0xe25fe4d9,// 267 PAY 226 

    0xc1cfef25,// 268 PAY 227 

    0x6d9f981a,// 269 PAY 228 

    0xf0b0c391,// 270 PAY 229 

    0x04bea3c7,// 271 PAY 230 

    0x05db4639,// 272 PAY 231 

    0xa7d18ea8,// 273 PAY 232 

    0x355f642f,// 274 PAY 233 

    0x54bc070c,// 275 PAY 234 

    0x33abeac3,// 276 PAY 235 

    0x1928742c,// 277 PAY 236 

    0x1f250075,// 278 PAY 237 

    0x466aef84,// 279 PAY 238 

    0x21cc5837,// 280 PAY 239 

    0x074b8fd3,// 281 PAY 240 

    0x47a6f847,// 282 PAY 241 

    0x658e24ff,// 283 PAY 242 

    0x00b73a02,// 284 PAY 243 

    0x4f7339da,// 285 PAY 244 

    0xc282454f,// 286 PAY 245 

    0xb5b1d5a7,// 287 PAY 246 

    0xa97bdb48,// 288 PAY 247 

    0x81022b25,// 289 PAY 248 

    0x7695094d,// 290 PAY 249 

    0xbb3f1111,// 291 PAY 250 

    0x11deb69b,// 292 PAY 251 

    0xb39f2c20,// 293 PAY 252 

    0x0f0bc34b,// 294 PAY 253 

    0x42e1db70,// 295 PAY 254 

    0x7342202f,// 296 PAY 255 

    0xe9e2e623,// 297 PAY 256 

    0x9ba84898,// 298 PAY 257 

    0x0e12dff5,// 299 PAY 258 

    0xb057ac34,// 300 PAY 259 

    0x5cedd0c5,// 301 PAY 260 

    0xd626a9ab,// 302 PAY 261 

    0xb0ec7aaf,// 303 PAY 262 

    0xfd0178ff,// 304 PAY 263 

    0x7fed9abe,// 305 PAY 264 

    0x8881f4e2,// 306 PAY 265 

    0x125dd891,// 307 PAY 266 

    0xf4ded56a,// 308 PAY 267 

    0x81740df4,// 309 PAY 268 

    0xbb4db4d6,// 310 PAY 269 

    0xa385fed4,// 311 PAY 270 

    0x3e675858,// 312 PAY 271 

    0x70964f82,// 313 PAY 272 

    0x9baaa4fa,// 314 PAY 273 

    0xd89b6e70,// 315 PAY 274 

    0xb0aafa82,// 316 PAY 275 

    0x2306a089,// 317 PAY 276 

    0x06e28c83,// 318 PAY 277 

    0x25df08ee,// 319 PAY 278 

    0xb7567483,// 320 PAY 279 

    0xe8030736,// 321 PAY 280 

    0xacefcc21,// 322 PAY 281 

    0x35bb7d3f,// 323 PAY 282 

    0x31ffb37f,// 324 PAY 283 

    0x9211f1c8,// 325 PAY 284 

    0x8eebe800,// 326 PAY 285 

    0xf012b291,// 327 PAY 286 

    0xde346867,// 328 PAY 287 

    0x34d783b8,// 329 PAY 288 

    0xcc2598f9,// 330 PAY 289 

    0x51492d77,// 331 PAY 290 

    0x5dee3cde,// 332 PAY 291 

    0x4ba59959,// 333 PAY 292 

    0xd9fec1b7,// 334 PAY 293 

    0x11e62e02,// 335 PAY 294 

    0xd65401be,// 336 PAY 295 

    0x395debbb,// 337 PAY 296 

    0xf3c28506,// 338 PAY 297 

    0xa3f53cfd,// 339 PAY 298 

    0xd87e5108,// 340 PAY 299 

    0x91a104d2,// 341 PAY 300 

    0x962397ec,// 342 PAY 301 

    0x115fd364,// 343 PAY 302 

    0x9ae54fb7,// 344 PAY 303 

    0xa42928f4,// 345 PAY 304 

    0xd97a09a4,// 346 PAY 305 

    0x3eb5ac60,// 347 PAY 306 

    0x9d6c31e3,// 348 PAY 307 

    0x7f161f86,// 349 PAY 308 

    0x829d0cc2,// 350 PAY 309 

    0x1463e50d,// 351 PAY 310 

    0x48a52503,// 352 PAY 311 

    0xd36e313d,// 353 PAY 312 

    0x7d5b485e,// 354 PAY 313 

    0x1ae1f560,// 355 PAY 314 

    0xab64cedd,// 356 PAY 315 

    0x1ca22df9,// 357 PAY 316 

    0x702a90c8,// 358 PAY 317 

    0xf06dc312,// 359 PAY 318 

    0x828d1597,// 360 PAY 319 

    0xec152120,// 361 PAY 320 

    0x13ba4eb2,// 362 PAY 321 

    0xdea27076,// 363 PAY 322 

    0x74e0ce3b,// 364 PAY 323 

    0x5cf10940,// 365 PAY 324 

    0x0d9cf96d,// 366 PAY 325 

    0x329dbd1d,// 367 PAY 326 

    0xc68b692d,// 368 PAY 327 

    0x9f996da9,// 369 PAY 328 

    0x7b0efda4,// 370 PAY 329 

    0x8acae8a0,// 371 PAY 330 

    0x59a27f3d,// 372 PAY 331 

    0x92219201,// 373 PAY 332 

    0x6f3d20ef,// 374 PAY 333 

    0x65a9e7fa,// 375 PAY 334 

    0xf5fc617c,// 376 PAY 335 

    0xb3350b9b,// 377 PAY 336 

    0xaa6b7810,// 378 PAY 337 

    0x76192791,// 379 PAY 338 

    0x1ee851f8,// 380 PAY 339 

    0xf823a98e,// 381 PAY 340 

    0x5aee0612,// 382 PAY 341 

    0x1f9d45e0,// 383 PAY 342 

    0x1e5c3a7c,// 384 PAY 343 

    0xac9824cc,// 385 PAY 344 

    0x67c87c53,// 386 PAY 345 

    0x579db729,// 387 PAY 346 

    0xf9a7c765,// 388 PAY 347 

    0x0f2364d5,// 389 PAY 348 

    0x7c78651a,// 390 PAY 349 

    0xe77b9e63,// 391 PAY 350 

    0x812bd9c2,// 392 PAY 351 

    0xd38ea969,// 393 PAY 352 

    0x3ceb969d,// 394 PAY 353 

    0xef02810c,// 395 PAY 354 

    0x71bdfd7e,// 396 PAY 355 

    0x6d8b6e33,// 397 PAY 356 

    0xe05ed2a5,// 398 PAY 357 

    0x827ab894,// 399 PAY 358 

    0x3cb7d623,// 400 PAY 359 

    0xc82381f7,// 401 PAY 360 

    0xaeaa006f,// 402 PAY 361 

    0xcb2aca73,// 403 PAY 362 

    0xb8d14525,// 404 PAY 363 

    0x8ad85d02,// 405 PAY 364 

    0x42c4d918,// 406 PAY 365 

    0x0b63e2ac,// 407 PAY 366 

    0x5c9f74f8,// 408 PAY 367 

    0x3b9acbd5,// 409 PAY 368 

    0x205777cb,// 410 PAY 369 

    0x2dfc0a1d,// 411 PAY 370 

    0xabde0330,// 412 PAY 371 

    0x328ab928,// 413 PAY 372 

    0x330d048f,// 414 PAY 373 

    0x83f9a90f,// 415 PAY 374 

    0xc1350113,// 416 PAY 375 

    0x9ee00463,// 417 PAY 376 

    0xbede3308,// 418 PAY 377 

    0xd0a200cb,// 419 PAY 378 

    0x7bb7c2c1,// 420 PAY 379 

    0xd32570a5,// 421 PAY 380 

    0x6cdf35a2,// 422 PAY 381 

    0x64853ed7,// 423 PAY 382 

    0x0dd2a883,// 424 PAY 383 

    0x0d1160fc,// 425 PAY 384 

    0x214ce74a,// 426 PAY 385 

    0x7ac2ba26,// 427 PAY 386 

    0xbaff9629,// 428 PAY 387 

    0xdcb9eb94,// 429 PAY 388 

    0x3f2b719f,// 430 PAY 389 

    0x3e71063d,// 431 PAY 390 

    0xf3fedc69,// 432 PAY 391 

    0x20adbd09,// 433 PAY 392 

    0x6e5d1837,// 434 PAY 393 

    0xbda24d5c,// 435 PAY 394 

    0x0771450c,// 436 PAY 395 

    0x0c15ad50,// 437 PAY 396 

    0xdb61e30b,// 438 PAY 397 

    0x17392aae,// 439 PAY 398 

    0x2ab0080c,// 440 PAY 399 

    0xd3c050cc,// 441 PAY 400 

    0xd98cf59b,// 442 PAY 401 

    0xcfc9a6a2,// 443 PAY 402 

    0x9821f72e,// 444 PAY 403 

    0x28e31241,// 445 PAY 404 

    0x1e9b67f6,// 446 PAY 405 

    0x30796ff2,// 447 PAY 406 

    0xee0c338a,// 448 PAY 407 

    0x9c542b96,// 449 PAY 408 

    0x75c2f449,// 450 PAY 409 

    0xcf150b61,// 451 PAY 410 

    0xd3744b9c,// 452 PAY 411 

    0xd0df6404,// 453 PAY 412 

    0x2c24d5be,// 454 PAY 413 

    0x6c186706,// 455 PAY 414 

    0x9072cdb8,// 456 PAY 415 

    0x902a7a9a,// 457 PAY 416 

    0x32de6dc0,// 458 PAY 417 

    0x204d2cb3,// 459 PAY 418 

    0x31a6111a,// 460 PAY 419 

    0x02cba000,// 461 PAY 420 

    0x773cea93,// 462 PAY 421 

    0x7fb6dbff,// 463 PAY 422 

    0xe4e185d4,// 464 PAY 423 

    0x9d203b7b,// 465 PAY 424 

    0xe657c800,// 466 PAY 425 

    0xa3055343,// 467 PAY 426 

    0x717fbdeb,// 468 PAY 427 

    0xf321761c,// 469 PAY 428 

    0x34640b2b,// 470 PAY 429 

    0x96263ffa,// 471 PAY 430 

    0x9ddd91ca,// 472 PAY 431 

    0x9822762e,// 473 PAY 432 

    0x0cb6965b,// 474 PAY 433 

    0xfdc34d63,// 475 PAY 434 

    0xd4a50227,// 476 PAY 435 

    0xd28d91f0,// 477 PAY 436 

    0xce9758ed,// 478 PAY 437 

    0xf9a9049b,// 479 PAY 438 

    0x54f10eb3,// 480 PAY 439 

    0x11258a24,// 481 PAY 440 

    0xf401aca2,// 482 PAY 441 

    0x7a91864d,// 483 PAY 442 

    0x1aba83ae,// 484 PAY 443 

    0xe26fc71b,// 485 PAY 444 

    0xaf42e99a,// 486 PAY 445 

    0x96472673,// 487 PAY 446 

    0x6abb2e51,// 488 PAY 447 

    0x08da13aa,// 489 PAY 448 

    0xac6fce0a,// 490 PAY 449 

    0x3e2886eb,// 491 PAY 450 

    0x6882da17,// 492 PAY 451 

    0xf748beb3,// 493 PAY 452 

    0xcd5eea60,// 494 PAY 453 

    0x33365521,// 495 PAY 454 

    0xf5015dd4,// 496 PAY 455 

    0x0a0eea7d,// 497 PAY 456 

    0xc67fa394,// 498 PAY 457 

    0x9dde551d,// 499 PAY 458 

    0x52739c5c,// 500 PAY 459 

    0xa47df26e,// 501 PAY 460 

    0xf274ffa8,// 502 PAY 461 

    0x964331d8,// 503 PAY 462 

    0x9a7dbc09,// 504 PAY 463 

    0xa0c28fa9,// 505 PAY 464 

    0x8142e8f7,// 506 PAY 465 

    0x3d43cb69,// 507 PAY 466 

    0xb4c0b742,// 508 PAY 467 

    0x1b2eb5fe,// 509 PAY 468 

    0x59565907,// 510 PAY 469 

    0x170a7ef4,// 511 PAY 470 

    0x24e01dfc,// 512 PAY 471 

    0x8d13d4e9,// 513 PAY 472 

    0xf7c73947,// 514 PAY 473 

    0x64ed7c8f,// 515 PAY 474 

    0x6a0996a4,// 516 PAY 475 

    0xcd11f3b0,// 517 PAY 476 

    0xf02a6720,// 518 PAY 477 

    0xed6f3ce0,// 519 PAY 478 

    0x26beaca9,// 520 PAY 479 

    0x72aa3bce,// 521 PAY 480 

    0x0200c54c,// 522 PAY 481 

    0x9c000000,// 523 PAY 482 

/// STA is 1 words. 

/// STA num_pkts       : 154 

/// STA pkt_idx        : 101 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x4a 

    0x01954a9a // 524 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 80 (0x50) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_sha1_pkt42_tmpl[] = {
    0xb8010050,// 1 CCH   1 

/// ECH cache_idx      : 0x02 

/// ECH pdu_tag        : 0x00 

    0x00020000,// 2 ECH   1 

/// SCX is 19 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound save_icv !insert_icv !check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : SHA1 

/// SCX aes_size        : NORMAL_RC4INIT_AES128 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x3 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 40 

    0x08000013,// 3 SCX   1 

    0x80604883,// 4 SCX   2 

    0x00004300,// 5 SCX   3 

    0xf719b0a0,// 6 SCX   4 

    0x31990205,// 7 SCX   5 

    0x92bdb2a9,// 8 SCX   6 

    0x3670d362,// 9 SCX   7 

    0xf5f788ed,// 10 SCX   8 

    0x045635f5,// 11 SCX   9 

    0x14726a21,// 12 SCX  10 

    0x94a07a91,// 13 SCX  11 

    0x9779a1e5,// 14 SCX  12 

    0x3e5f64cb,// 15 SCX  13 

    0xcdeacdc5,// 16 SCX  14 

    0xc7431e89,// 17 SCX  15 

    0xd9abb869,// 18 SCX  16 

    0x4b924788,// 19 SCX  17 

    0x1009641d,// 20 SCX  18 

    0x22be8efe,// 21 SCX  19 

/// BFD is 3 words. 

/// BFD tot_len        : 1730 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 1374 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 1374 

/// BFD lencrypto      : 144 

/// BFD ofstcrypto     : 708 

/// BFD (ofst+len)cry  : 852 

/// BFD ofstiv         : 348 

/// BFD ofsticv        : 1596 

    0x0000055e,// 22 BFD   1 

    0x02c40090,// 23 BFD   2 

    0x063c015c,// 24 BFD   3 

/// MFM is 16 words. 

/// MFM vldnibs        : 7c 

    0x7c00746c,// 25 MFM   1 

    0x01480e7e,// 26 MFM   2 

    0x4dbfedc2,// 27 MFM   3 

    0x7204b24c,// 28 MFM   4 

    0x5d77e21a,// 29 MFM   5 

    0x448d6514,// 30 MFM   6 

    0x0ccc434b,// 31 MFM   7 

    0xe412eff5,// 32 MFM   8 

    0x8662e688,// 33 MFM   9 

    0x0ec3d8b7,// 34 MFM  10 

    0xef5d0a4c,// 35 MFM  11 

    0x8f0a59db,// 36 MFM  12 

    0xe9bf80c4,// 37 MFM  13 

    0x1efd42e1,// 38 MFM  14 

    0xd349988f,// 39 MFM  15 

    0x0aa58787,// 40 MFM  16 

/// BDA is 434 words. 

/// BDA size     is 1730 (0x6c2) 

/// BDA id       is 0x80ec 

    0x06c280ec,// 41 BDA   1 

/// PAY Generic Data size   : 1730 byte(s) 

/// PAD Buffer Data Pad size   : 2 byte(s) 

    0xb39983fe,// 42 PAY   1 

    0xafb6f4b7,// 43 PAY   2 

    0x224df8b2,// 44 PAY   3 

    0xa016041a,// 45 PAY   4 

    0xbae8eb8e,// 46 PAY   5 

    0x6f4512c5,// 47 PAY   6 

    0x76693b02,// 48 PAY   7 

    0x8468a200,// 49 PAY   8 

    0x733a41e6,// 50 PAY   9 

    0x12a0b459,// 51 PAY  10 

    0x2bfa143f,// 52 PAY  11 

    0x312c6ab0,// 53 PAY  12 

    0x81942601,// 54 PAY  13 

    0x551127d8,// 55 PAY  14 

    0x8252b2a8,// 56 PAY  15 

    0x9c2afdf3,// 57 PAY  16 

    0x27ae9e7e,// 58 PAY  17 

    0x65454d4c,// 59 PAY  18 

    0x46849e18,// 60 PAY  19 

    0xa4619881,// 61 PAY  20 

    0xb771b759,// 62 PAY  21 

    0x16668b94,// 63 PAY  22 

    0x79421149,// 64 PAY  23 

    0x4af2f6dd,// 65 PAY  24 

    0xed6dc68d,// 66 PAY  25 

    0xdaad4a8e,// 67 PAY  26 

    0xa7155030,// 68 PAY  27 

    0x1331bd54,// 69 PAY  28 

    0x31392f80,// 70 PAY  29 

    0xb2e19aac,// 71 PAY  30 

    0xe18deef5,// 72 PAY  31 

    0x5d9475d1,// 73 PAY  32 

    0xe7b5c7d0,// 74 PAY  33 

    0xd7a0f0c5,// 75 PAY  34 

    0x67278727,// 76 PAY  35 

    0xaebde2f2,// 77 PAY  36 

    0x24ee943e,// 78 PAY  37 

    0xe8b04842,// 79 PAY  38 

    0x6518525e,// 80 PAY  39 

    0xdd75bb16,// 81 PAY  40 

    0x22b050fb,// 82 PAY  41 

    0x4563c637,// 83 PAY  42 

    0x0eaa38db,// 84 PAY  43 

    0x7c2fc9a5,// 85 PAY  44 

    0x479248b2,// 86 PAY  45 

    0x44ebd4fb,// 87 PAY  46 

    0x9f183e45,// 88 PAY  47 

    0xbb07d7bb,// 89 PAY  48 

    0x457979b7,// 90 PAY  49 

    0x5839fd17,// 91 PAY  50 

    0x9a732749,// 92 PAY  51 

    0x8d22a911,// 93 PAY  52 

    0xafc31664,// 94 PAY  53 

    0xf5fe3f73,// 95 PAY  54 

    0x57e44ec2,// 96 PAY  55 

    0x27d28d87,// 97 PAY  56 

    0x9d98f73d,// 98 PAY  57 

    0x029a425c,// 99 PAY  58 

    0x04eaff92,// 100 PAY  59 

    0x80271b41,// 101 PAY  60 

    0xcfa26788,// 102 PAY  61 

    0x380466c2,// 103 PAY  62 

    0x2e263846,// 104 PAY  63 

    0x16b4abec,// 105 PAY  64 

    0xdd5af7b0,// 106 PAY  65 

    0x3e9e7bf6,// 107 PAY  66 

    0xba409470,// 108 PAY  67 

    0x92eafa63,// 109 PAY  68 

    0xd79767e6,// 110 PAY  69 

    0x57bff995,// 111 PAY  70 

    0x415bad44,// 112 PAY  71 

    0x93099960,// 113 PAY  72 

    0xc8e62af1,// 114 PAY  73 

    0xfb2ed1cb,// 115 PAY  74 

    0xc33e525a,// 116 PAY  75 

    0x2109f6b6,// 117 PAY  76 

    0x290f4808,// 118 PAY  77 

    0x6218adcc,// 119 PAY  78 

    0x27e0b7a7,// 120 PAY  79 

    0xedee4215,// 121 PAY  80 

    0xb7de7378,// 122 PAY  81 

    0xba9c5c98,// 123 PAY  82 

    0x9dcb2f10,// 124 PAY  83 

    0x4c5d7fa1,// 125 PAY  84 

    0x32e5c0ba,// 126 PAY  85 

    0x0188ce33,// 127 PAY  86 

    0x98ce0783,// 128 PAY  87 

    0xc6344793,// 129 PAY  88 

    0x2cf2482f,// 130 PAY  89 

    0x550b7b47,// 131 PAY  90 

    0x780c7f51,// 132 PAY  91 

    0xe1f4729b,// 133 PAY  92 

    0x2633d187,// 134 PAY  93 

    0xb5d4f57a,// 135 PAY  94 

    0x189d745d,// 136 PAY  95 

    0x27403ded,// 137 PAY  96 

    0x46234feb,// 138 PAY  97 

    0x9fcb4ad9,// 139 PAY  98 

    0x3ae09a15,// 140 PAY  99 

    0x9b02c89c,// 141 PAY 100 

    0xf3f7b9c6,// 142 PAY 101 

    0xfef43b61,// 143 PAY 102 

    0x3f3f5b77,// 144 PAY 103 

    0x2a549129,// 145 PAY 104 

    0x78751911,// 146 PAY 105 

    0xdf8459c4,// 147 PAY 106 

    0x42d45e47,// 148 PAY 107 

    0xd6490753,// 149 PAY 108 

    0x84a81923,// 150 PAY 109 

    0x4baaf836,// 151 PAY 110 

    0x13f292f3,// 152 PAY 111 

    0x451e7f79,// 153 PAY 112 

    0xd2099929,// 154 PAY 113 

    0x350e9266,// 155 PAY 114 

    0x537e1bc3,// 156 PAY 115 

    0x32378e1d,// 157 PAY 116 

    0x01dac972,// 158 PAY 117 

    0xce7e449d,// 159 PAY 118 

    0x4d3dee7d,// 160 PAY 119 

    0x3023673e,// 161 PAY 120 

    0x5e6674b0,// 162 PAY 121 

    0x1187d712,// 163 PAY 122 

    0x8cf07e65,// 164 PAY 123 

    0x2ee64a83,// 165 PAY 124 

    0xa48ed5fa,// 166 PAY 125 

    0x584cf17c,// 167 PAY 126 

    0x3e5a436f,// 168 PAY 127 

    0x03beadd2,// 169 PAY 128 

    0x4fb74703,// 170 PAY 129 

    0xcc089168,// 171 PAY 130 

    0x4bedf1bb,// 172 PAY 131 

    0x333a7eac,// 173 PAY 132 

    0x0f63ff0e,// 174 PAY 133 

    0x0abe9eec,// 175 PAY 134 

    0x80af7b8d,// 176 PAY 135 

    0x9555257e,// 177 PAY 136 

    0x24cc89af,// 178 PAY 137 

    0xb42c102d,// 179 PAY 138 

    0xde2a4114,// 180 PAY 139 

    0xe3324b57,// 181 PAY 140 

    0x66242fb7,// 182 PAY 141 

    0xc0506af2,// 183 PAY 142 

    0x8db95b4f,// 184 PAY 143 

    0x0c3b0b81,// 185 PAY 144 

    0x718838d0,// 186 PAY 145 

    0xd8df5735,// 187 PAY 146 

    0x60b6cb42,// 188 PAY 147 

    0x2060a0e8,// 189 PAY 148 

    0xbcc28a99,// 190 PAY 149 

    0xf6ad33d9,// 191 PAY 150 

    0x97d9c481,// 192 PAY 151 

    0x042c6698,// 193 PAY 152 

    0xe8509602,// 194 PAY 153 

    0x06079396,// 195 PAY 154 

    0xa620e790,// 196 PAY 155 

    0xde9b5637,// 197 PAY 156 

    0xb6325983,// 198 PAY 157 

    0x082c1eb6,// 199 PAY 158 

    0x2e30e5f1,// 200 PAY 159 

    0xc179f7af,// 201 PAY 160 

    0x0a39ae18,// 202 PAY 161 

    0x1fb87e59,// 203 PAY 162 

    0xd28387f1,// 204 PAY 163 

    0xce621a74,// 205 PAY 164 

    0xcd16355f,// 206 PAY 165 

    0x9cf5d1be,// 207 PAY 166 

    0x7b8f3320,// 208 PAY 167 

    0xfe8ec272,// 209 PAY 168 

    0x45d9d8aa,// 210 PAY 169 

    0x0ebaa0d0,// 211 PAY 170 

    0xd195ee1f,// 212 PAY 171 

    0xa3bc7a8a,// 213 PAY 172 

    0xa1db15df,// 214 PAY 173 

    0x5880fac9,// 215 PAY 174 

    0x94dc6ea9,// 216 PAY 175 

    0x038f8cee,// 217 PAY 176 

    0xab39071a,// 218 PAY 177 

    0x66e83eb6,// 219 PAY 178 

    0x30d8d67f,// 220 PAY 179 

    0xedd45b9b,// 221 PAY 180 

    0x8a697442,// 222 PAY 181 

    0x829d65aa,// 223 PAY 182 

    0x01513021,// 224 PAY 183 

    0x00559ef8,// 225 PAY 184 

    0xe9977d1e,// 226 PAY 185 

    0x5caa8d70,// 227 PAY 186 

    0x970d9414,// 228 PAY 187 

    0x8c317813,// 229 PAY 188 

    0xfb5d6cf4,// 230 PAY 189 

    0xe880880d,// 231 PAY 190 

    0x51edd855,// 232 PAY 191 

    0x3119a4dd,// 233 PAY 192 

    0x02909dfe,// 234 PAY 193 

    0xa81951b6,// 235 PAY 194 

    0xecfbd2f3,// 236 PAY 195 

    0x779d7eb9,// 237 PAY 196 

    0xb2221470,// 238 PAY 197 

    0x03cb2815,// 239 PAY 198 

    0x74d553c3,// 240 PAY 199 

    0xda703462,// 241 PAY 200 

    0xef197030,// 242 PAY 201 

    0x3c178714,// 243 PAY 202 

    0xe6e53572,// 244 PAY 203 

    0x74225479,// 245 PAY 204 

    0x2af80a9d,// 246 PAY 205 

    0x400609a3,// 247 PAY 206 

    0x00bdc40a,// 248 PAY 207 

    0x071bdea2,// 249 PAY 208 

    0x40be1194,// 250 PAY 209 

    0x3c3b8952,// 251 PAY 210 

    0x7f9fc465,// 252 PAY 211 

    0xfb8b6adc,// 253 PAY 212 

    0xba5bc70e,// 254 PAY 213 

    0x1388cbef,// 255 PAY 214 

    0x1ed77fbf,// 256 PAY 215 

    0xbcdf0dae,// 257 PAY 216 

    0x2ba105d2,// 258 PAY 217 

    0xbb13183d,// 259 PAY 218 

    0x90400422,// 260 PAY 219 

    0x9b59667c,// 261 PAY 220 

    0x01789759,// 262 PAY 221 

    0x0318bd1d,// 263 PAY 222 

    0x1ce7fcec,// 264 PAY 223 

    0x4db19c9a,// 265 PAY 224 

    0xc63c42dd,// 266 PAY 225 

    0xca507922,// 267 PAY 226 

    0x2d1244a9,// 268 PAY 227 

    0xb47056be,// 269 PAY 228 

    0x7ccad4ad,// 270 PAY 229 

    0xa77f1edb,// 271 PAY 230 

    0xb7ece2ab,// 272 PAY 231 

    0x521dd754,// 273 PAY 232 

    0x61f40b6f,// 274 PAY 233 

    0x8d96cf0c,// 275 PAY 234 

    0x52d6b1b4,// 276 PAY 235 

    0x2baaacaf,// 277 PAY 236 

    0xbe952cd6,// 278 PAY 237 

    0x36578f99,// 279 PAY 238 

    0x5aa004e4,// 280 PAY 239 

    0x2d9e616e,// 281 PAY 240 

    0x8c451afe,// 282 PAY 241 

    0xba4a2b44,// 283 PAY 242 

    0xbf29008e,// 284 PAY 243 

    0x31345e39,// 285 PAY 244 

    0x63413b54,// 286 PAY 245 

    0xf0907aab,// 287 PAY 246 

    0x07bb3afc,// 288 PAY 247 

    0xed4da642,// 289 PAY 248 

    0x8b8d71c7,// 290 PAY 249 

    0x467cd067,// 291 PAY 250 

    0x0813e7fc,// 292 PAY 251 

    0xaa95d313,// 293 PAY 252 

    0xab632715,// 294 PAY 253 

    0xf1ed6ec3,// 295 PAY 254 

    0xb1d6b8f9,// 296 PAY 255 

    0xc9683171,// 297 PAY 256 

    0xb91ece3a,// 298 PAY 257 

    0xa5913669,// 299 PAY 258 

    0x41647c55,// 300 PAY 259 

    0xe7a11595,// 301 PAY 260 

    0xceb8ebd1,// 302 PAY 261 

    0xe9db8d59,// 303 PAY 262 

    0x49a5cd72,// 304 PAY 263 

    0x3b2094ef,// 305 PAY 264 

    0xf2abdf65,// 306 PAY 265 

    0xc04c8c59,// 307 PAY 266 

    0x5e6b90f9,// 308 PAY 267 

    0xedab8c0b,// 309 PAY 268 

    0xf304413c,// 310 PAY 269 

    0xb3ea35cf,// 311 PAY 270 

    0x4f59ed5a,// 312 PAY 271 

    0x9a0b754e,// 313 PAY 272 

    0x3a5fe650,// 314 PAY 273 

    0xa8309d17,// 315 PAY 274 

    0x7b23abc2,// 316 PAY 275 

    0x5c3456fe,// 317 PAY 276 

    0x445a1dec,// 318 PAY 277 

    0xf49b3946,// 319 PAY 278 

    0xf7db3bf3,// 320 PAY 279 

    0x216f6dfc,// 321 PAY 280 

    0xa6a22837,// 322 PAY 281 

    0xeb7a0c87,// 323 PAY 282 

    0xbbba57b7,// 324 PAY 283 

    0xef432e9d,// 325 PAY 284 

    0x2fbd2842,// 326 PAY 285 

    0x571dee0e,// 327 PAY 286 

    0x3fa8a6d0,// 328 PAY 287 

    0x56e47f2b,// 329 PAY 288 

    0x4d6f53f4,// 330 PAY 289 

    0xf9a6007c,// 331 PAY 290 

    0x9a71b0f0,// 332 PAY 291 

    0x5f5c9d98,// 333 PAY 292 

    0x6df09d96,// 334 PAY 293 

    0x12070a84,// 335 PAY 294 

    0x6d9e033d,// 336 PAY 295 

    0x3189d2d6,// 337 PAY 296 

    0x9113c646,// 338 PAY 297 

    0xe96321cd,// 339 PAY 298 

    0x77c506ea,// 340 PAY 299 

    0xce73bbc2,// 341 PAY 300 

    0x3db1a82d,// 342 PAY 301 

    0x19c117d2,// 343 PAY 302 

    0xfbd9cf7d,// 344 PAY 303 

    0x002c605e,// 345 PAY 304 

    0xf12e928f,// 346 PAY 305 

    0x724ecbd9,// 347 PAY 306 

    0xcc35c398,// 348 PAY 307 

    0xf028ed41,// 349 PAY 308 

    0x6b4b007b,// 350 PAY 309 

    0x657cd24e,// 351 PAY 310 

    0xb42f5542,// 352 PAY 311 

    0xfd467ff3,// 353 PAY 312 

    0x54fb0b6f,// 354 PAY 313 

    0x67871b50,// 355 PAY 314 

    0xfd03caf4,// 356 PAY 315 

    0xc545fb21,// 357 PAY 316 

    0xf5ba41b8,// 358 PAY 317 

    0x9126625c,// 359 PAY 318 

    0x43b5987d,// 360 PAY 319 

    0xb326d9bd,// 361 PAY 320 

    0x5d831dbe,// 362 PAY 321 

    0x47e47596,// 363 PAY 322 

    0x51b6a113,// 364 PAY 323 

    0xd56bcbb8,// 365 PAY 324 

    0x3c5db9c4,// 366 PAY 325 

    0xba4013bd,// 367 PAY 326 

    0xf91fc504,// 368 PAY 327 

    0xe975aea7,// 369 PAY 328 

    0x15f34258,// 370 PAY 329 

    0xfb5c59b4,// 371 PAY 330 

    0xa94ef4b5,// 372 PAY 331 

    0x7808dbb9,// 373 PAY 332 

    0xf0954f7f,// 374 PAY 333 

    0x0b1982a5,// 375 PAY 334 

    0x1e715b86,// 376 PAY 335 

    0x3b5a912a,// 377 PAY 336 

    0x36e648b8,// 378 PAY 337 

    0xf3b5aed7,// 379 PAY 338 

    0x12b21388,// 380 PAY 339 

    0x97dbada6,// 381 PAY 340 

    0x704e48c1,// 382 PAY 341 

    0x80bca4e4,// 383 PAY 342 

    0x2515e63b,// 384 PAY 343 

    0x35331d02,// 385 PAY 344 

    0xddc18d72,// 386 PAY 345 

    0x421405ae,// 387 PAY 346 

    0xeae95f10,// 388 PAY 347 

    0x6a572a1d,// 389 PAY 348 

    0xb52d4299,// 390 PAY 349 

    0x85c3e0a1,// 391 PAY 350 

    0xd7289f9f,// 392 PAY 351 

    0xf2ba5f2e,// 393 PAY 352 

    0x6b884540,// 394 PAY 353 

    0x2fa06065,// 395 PAY 354 

    0x39fdf16d,// 396 PAY 355 

    0x371090f6,// 397 PAY 356 

    0x2ca997ef,// 398 PAY 357 

    0xbb6f811a,// 399 PAY 358 

    0xc35c89cb,// 400 PAY 359 

    0xcff5c7f8,// 401 PAY 360 

    0x551b6e01,// 402 PAY 361 

    0xa54f62a4,// 403 PAY 362 

    0xdf2dc3a4,// 404 PAY 363 

    0xec7f8912,// 405 PAY 364 

    0x8321e42f,// 406 PAY 365 

    0x54cd4dfb,// 407 PAY 366 

    0xa3329e31,// 408 PAY 367 

    0xba9861d2,// 409 PAY 368 

    0xc08dd39a,// 410 PAY 369 

    0x8633ffc1,// 411 PAY 370 

    0x5ce40775,// 412 PAY 371 

    0x1763c9ce,// 413 PAY 372 

    0xefcd67c1,// 414 PAY 373 

    0xb030f967,// 415 PAY 374 

    0x1bb72190,// 416 PAY 375 

    0x461d18d4,// 417 PAY 376 

    0x8b59e0c9,// 418 PAY 377 

    0x82cf4931,// 419 PAY 378 

    0xa3af60af,// 420 PAY 379 

    0x69cf47bf,// 421 PAY 380 

    0xfd78a632,// 422 PAY 381 

    0x0646a990,// 423 PAY 382 

    0x227be8b9,// 424 PAY 383 

    0x85c8f7e8,// 425 PAY 384 

    0x83fd4b63,// 426 PAY 385 

    0x946c943e,// 427 PAY 386 

    0x375400f4,// 428 PAY 387 

    0x7218ca51,// 429 PAY 388 

    0x0daf7f68,// 430 PAY 389 

    0x42311bb8,// 431 PAY 390 

    0xe0fb23a3,// 432 PAY 391 

    0x3f8bb952,// 433 PAY 392 

    0x522ac678,// 434 PAY 393 

    0x286c9c0c,// 435 PAY 394 

    0x30da94c3,// 436 PAY 395 

    0x71708bbe,// 437 PAY 396 

    0xe2106c4b,// 438 PAY 397 

    0x54932165,// 439 PAY 398 

    0xcc800727,// 440 PAY 399 

    0xc2259316,// 441 PAY 400 

    0x639484df,// 442 PAY 401 

    0x06b2c691,// 443 PAY 402 

    0x3b82ccba,// 444 PAY 403 

    0x01751d84,// 445 PAY 404 

    0x5f98608a,// 446 PAY 405 

    0xae209e55,// 447 PAY 406 

    0x2c50f25f,// 448 PAY 407 

    0x9fa00589,// 449 PAY 408 

    0xcb7401a9,// 450 PAY 409 

    0x259a3941,// 451 PAY 410 

    0x84ab5c28,// 452 PAY 411 

    0x0cfe8364,// 453 PAY 412 

    0x7c26fd82,// 454 PAY 413 

    0xb51a9762,// 455 PAY 414 

    0x6e9fafa2,// 456 PAY 415 

    0x05824db3,// 457 PAY 416 

    0x6377ae4d,// 458 PAY 417 

    0xc38c2684,// 459 PAY 418 

    0x1db16de1,// 460 PAY 419 

    0xf3d655e6,// 461 PAY 420 

    0x9224a0a5,// 462 PAY 421 

    0x6a69c819,// 463 PAY 422 

    0xb6616399,// 464 PAY 423 

    0xb430d010,// 465 PAY 424 

    0xeedaa74a,// 466 PAY 425 

    0x8378dbe2,// 467 PAY 426 

    0xa5077bd2,// 468 PAY 427 

    0x1d4b2ad8,// 469 PAY 428 

    0x1e38d0bc,// 470 PAY 429 

    0x12a989b9,// 471 PAY 430 

    0xa868c363,// 472 PAY 431 

    0x5bb6105b,// 473 PAY 432 

    0x7dd40000,// 474 PAY 433 

/// STA is 1 words. 

/// STA num_pkts       : 45 

/// STA pkt_idx        : 54 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x8b 

    0x00d98b2d // 475 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 80 (0x50) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_sha1_pkt43_tmpl[] = {
    0xb8010050,// 1 CCH   1 

/// ECH cache_idx      : 0x08 

/// ECH pdu_tag        : 0x00 

    0x00080000,// 2 ECH   1 

/// SCX is 19 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound !save_icv insert_icv check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : SHA1 

/// SCX aes_size        : AES256 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x3 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 40 

    0x08000013,// 3 SCX   1 

    0x8062480d,// 4 SCX   2 

    0x00003300,// 5 SCX   3 

    0xa796de35,// 6 SCX   4 

    0xa5aa244d,// 7 SCX   5 

    0x66de7938,// 8 SCX   6 

    0xc3c63333,// 9 SCX   7 

    0x4538bc8a,// 10 SCX   8 

    0x78ab1325,// 11 SCX   9 

    0xb3a23583,// 12 SCX  10 

    0xa8c1d096,// 13 SCX  11 

    0x83e40d52,// 14 SCX  12 

    0x55ee068b,// 15 SCX  13 

    0xab26b0f5,// 16 SCX  14 

    0xc58219d4,// 17 SCX  15 

    0xd45a95fb,// 18 SCX  16 

    0x567ac70c,// 19 SCX  17 

    0x1f514848,// 20 SCX  18 

    0x8b4eb0f5,// 21 SCX  19 

/// BFD is 3 words. 

/// BFD tot_len        : 736 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 601 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 601 

/// BFD lencrypto      : 32 

/// BFD ofstcrypto     : 480 

/// BFD (ofst+len)cry  : 512 

/// BFD ofstiv         : 44 

/// BFD ofsticv        : 672 

    0x00000259,// 22 BFD   1 

    0x01e00020,// 23 BFD   2 

    0x02a0002c,// 24 BFD   3 

/// MFM is 7 words. 

/// MFM vldnibs        : 32 

    0x32009c96,// 25 MFM   1 

    0xccbc67de,// 26 MFM   2 

    0xd48e7f1d,// 27 MFM   3 

    0x3c594d5c,// 28 MFM   4 

    0x5048ff53,// 29 MFM   5 

    0xcc80bade,// 30 MFM   6 

    0x2c39a900,// 31 MFM   7 

/// BDA is 185 words. 

/// BDA size     is 736 (0x2e0) 

/// BDA id       is 0x6967 

    0x02e06967,// 32 BDA   1 

/// PAY Generic Data size   : 736 byte(s) 

/// PAD Buffer Data Pad size   : 0 byte(s) 

    0x134beba6,// 33 PAY   1 

    0xfbef10be,// 34 PAY   2 

    0x6792b7ce,// 35 PAY   3 

    0x457b9c67,// 36 PAY   4 

    0xb4eb98ea,// 37 PAY   5 

    0xd93ad498,// 38 PAY   6 

    0x0ed7aa63,// 39 PAY   7 

    0x378af3e3,// 40 PAY   8 

    0x246da7e8,// 41 PAY   9 

    0x60c3bf9c,// 42 PAY  10 

    0xed8fc041,// 43 PAY  11 

    0x1cb6eea2,// 44 PAY  12 

    0x8ff67d24,// 45 PAY  13 

    0xa749f975,// 46 PAY  14 

    0x7e1ab472,// 47 PAY  15 

    0x452f26a5,// 48 PAY  16 

    0x8580144f,// 49 PAY  17 

    0xa2f8fdd6,// 50 PAY  18 

    0xb4b9e9fa,// 51 PAY  19 

    0xe9f02e92,// 52 PAY  20 

    0x40ebe005,// 53 PAY  21 

    0x657fb197,// 54 PAY  22 

    0x88ad682e,// 55 PAY  23 

    0x1d5e2613,// 56 PAY  24 

    0x05b12924,// 57 PAY  25 

    0x9200e2b0,// 58 PAY  26 

    0xc90a63c8,// 59 PAY  27 

    0x573ea73b,// 60 PAY  28 

    0xea80b8f3,// 61 PAY  29 

    0x9e3f0770,// 62 PAY  30 

    0xb8639ebc,// 63 PAY  31 

    0xed92b507,// 64 PAY  32 

    0x586b7b98,// 65 PAY  33 

    0x4a84c136,// 66 PAY  34 

    0xdc5b0d49,// 67 PAY  35 

    0x2093998b,// 68 PAY  36 

    0x496b136c,// 69 PAY  37 

    0x6a364770,// 70 PAY  38 

    0x7414ec14,// 71 PAY  39 

    0x98f614ea,// 72 PAY  40 

    0x09dc3dae,// 73 PAY  41 

    0xbdd35e24,// 74 PAY  42 

    0x34f17e3b,// 75 PAY  43 

    0x06fc1dba,// 76 PAY  44 

    0x83ea8f80,// 77 PAY  45 

    0x72547452,// 78 PAY  46 

    0xc8eb1eec,// 79 PAY  47 

    0x44336a51,// 80 PAY  48 

    0xde0b6ad6,// 81 PAY  49 

    0x69d18f87,// 82 PAY  50 

    0x46c3fcd0,// 83 PAY  51 

    0xfb43da8f,// 84 PAY  52 

    0xe2cb8ceb,// 85 PAY  53 

    0x74c195e2,// 86 PAY  54 

    0x340d854a,// 87 PAY  55 

    0xc72f3ea1,// 88 PAY  56 

    0xa8d21eb7,// 89 PAY  57 

    0x7303ac0a,// 90 PAY  58 

    0x2393c376,// 91 PAY  59 

    0x6844046d,// 92 PAY  60 

    0x465ff82f,// 93 PAY  61 

    0x37ab40b2,// 94 PAY  62 

    0x7d6656ed,// 95 PAY  63 

    0xa8b298d9,// 96 PAY  64 

    0x408b6a12,// 97 PAY  65 

    0xc6f24628,// 98 PAY  66 

    0x2fc62e33,// 99 PAY  67 

    0xa192778b,// 100 PAY  68 

    0x13ebace5,// 101 PAY  69 

    0x0085284a,// 102 PAY  70 

    0x88ef0ac2,// 103 PAY  71 

    0x2bbbafce,// 104 PAY  72 

    0x83b8cc0e,// 105 PAY  73 

    0xb2a9c31a,// 106 PAY  74 

    0x2b1427c4,// 107 PAY  75 

    0x69824443,// 108 PAY  76 

    0xf9513449,// 109 PAY  77 

    0x95db6ee7,// 110 PAY  78 

    0x13f84ec2,// 111 PAY  79 

    0x48038094,// 112 PAY  80 

    0x8e5775f9,// 113 PAY  81 

    0xde4f3a2d,// 114 PAY  82 

    0xeabb3574,// 115 PAY  83 

    0xb253c34f,// 116 PAY  84 

    0xdd1fab13,// 117 PAY  85 

    0xe210b23e,// 118 PAY  86 

    0x3255a8a1,// 119 PAY  87 

    0xa0b58898,// 120 PAY  88 

    0x4394f052,// 121 PAY  89 

    0xeac0213a,// 122 PAY  90 

    0xfd3e2632,// 123 PAY  91 

    0xfad57328,// 124 PAY  92 

    0xccc01b76,// 125 PAY  93 

    0x04b53b4c,// 126 PAY  94 

    0x75f5b7b4,// 127 PAY  95 

    0xb5a56f5c,// 128 PAY  96 

    0x1ca95ea9,// 129 PAY  97 

    0x9544d2f9,// 130 PAY  98 

    0xd7f2d3b8,// 131 PAY  99 

    0x419a5927,// 132 PAY 100 

    0x98a1c40f,// 133 PAY 101 

    0x9c03a582,// 134 PAY 102 

    0x81928413,// 135 PAY 103 

    0x94d3c29e,// 136 PAY 104 

    0xa415a90c,// 137 PAY 105 

    0x2fbbf626,// 138 PAY 106 

    0x94ec9d4a,// 139 PAY 107 

    0x73140ef0,// 140 PAY 108 

    0x36388186,// 141 PAY 109 

    0x2f760b03,// 142 PAY 110 

    0xdbcd6d38,// 143 PAY 111 

    0x874249f2,// 144 PAY 112 

    0x9d0e9500,// 145 PAY 113 

    0x65ee4efb,// 146 PAY 114 

    0x8b359578,// 147 PAY 115 

    0x40c152a6,// 148 PAY 116 

    0x3392567f,// 149 PAY 117 

    0x4568d00e,// 150 PAY 118 

    0x25b3fd25,// 151 PAY 119 

    0x6bf599fb,// 152 PAY 120 

    0x358110b7,// 153 PAY 121 

    0x8e19dca1,// 154 PAY 122 

    0x36246d84,// 155 PAY 123 

    0x3609fe50,// 156 PAY 124 

    0xa7ca0cae,// 157 PAY 125 

    0xa9d87f94,// 158 PAY 126 

    0xb682fad1,// 159 PAY 127 

    0x0ed49dda,// 160 PAY 128 

    0x9dc8fcfa,// 161 PAY 129 

    0x1eceaf93,// 162 PAY 130 

    0x04b60a96,// 163 PAY 131 

    0x8abe46be,// 164 PAY 132 

    0x5c587aae,// 165 PAY 133 

    0xf73359cf,// 166 PAY 134 

    0x41b2a41b,// 167 PAY 135 

    0xa2b45ea6,// 168 PAY 136 

    0x4321a8f5,// 169 PAY 137 

    0xc15b1a06,// 170 PAY 138 

    0xf0528d15,// 171 PAY 139 

    0xb5b54bca,// 172 PAY 140 

    0xb8cb2cbf,// 173 PAY 141 

    0x9d5cacbe,// 174 PAY 142 

    0xd72e9175,// 175 PAY 143 

    0x9c1b997e,// 176 PAY 144 

    0xf5f7213d,// 177 PAY 145 

    0x8f8094de,// 178 PAY 146 

    0x13b0db4a,// 179 PAY 147 

    0x4a8a6c61,// 180 PAY 148 

    0x6fd00ed7,// 181 PAY 149 

    0xd3050f12,// 182 PAY 150 

    0xad7171f2,// 183 PAY 151 

    0x254b3c66,// 184 PAY 152 

    0x0f2e0264,// 185 PAY 153 

    0x508b5d96,// 186 PAY 154 

    0x5468db18,// 187 PAY 155 

    0xd94efff9,// 188 PAY 156 

    0xd704fe68,// 189 PAY 157 

    0xf775b442,// 190 PAY 158 

    0xb3086660,// 191 PAY 159 

    0x4f300e70,// 192 PAY 160 

    0x0b641801,// 193 PAY 161 

    0x185e4aee,// 194 PAY 162 

    0xe6d89cc8,// 195 PAY 163 

    0xa74d67cc,// 196 PAY 164 

    0x9fe2f1c9,// 197 PAY 165 

    0xe2f18e16,// 198 PAY 166 

    0x14a6c935,// 199 PAY 167 

    0xff60f44d,// 200 PAY 168 

    0xf1be876f,// 201 PAY 169 

    0xbab767dc,// 202 PAY 170 

    0x3a875e90,// 203 PAY 171 

    0xb887dbe5,// 204 PAY 172 

    0xac689cce,// 205 PAY 173 

    0xea63be28,// 206 PAY 174 

    0xc944481e,// 207 PAY 175 

    0x5b708629,// 208 PAY 176 

    0x0fdced9a,// 209 PAY 177 

    0xa7b24777,// 210 PAY 178 

    0xf35b72d7,// 211 PAY 179 

    0xf9fab108,// 212 PAY 180 

    0xe54ad67c,// 213 PAY 181 

    0x8eede568,// 214 PAY 182 

    0x87936013,// 215 PAY 183 

    0x636bf4cd,// 216 PAY 184 

/// STA is 1 words. 

/// STA num_pkts       : 133 

/// STA pkt_idx        : 232 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x79 

    0x03a07985 // 217 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 88 (0x58) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_sha1_pkt44_tmpl[] = {
    0xb8010058,// 1 CCH   1 

/// ECH cache_idx      : 0x00 

/// ECH pdu_tag        : 0x00 

    0x00000000,// 2 ECH   1 

/// SCX is 21 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound !save_icv !insert_icv check_icv sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : SHA1 

/// SCX aes_size        : AES256 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x1 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 8 

/// SCX authctx_size    : 40 

    0x00000015,// 3 SCX   1 

    0x806648dc,// 4 SCX   2 

    0x00001182,// 5 SCX   3 

    0xd83ec8f8,// 6 SCX   4 

    0xb0a5ff21,// 7 SCX   5 

    0x22ffb6af,// 8 SCX   6 

    0x72df1bbe,// 9 SCX   7 

    0x87cb9076,// 10 SCX   8 

    0xec40f5fc,// 11 SCX   9 

    0x76bee800,// 12 SCX  10 

    0x5f95b0cd,// 13 SCX  11 

    0x468a7d8e,// 14 SCX  12 

    0x3ee071c8,// 15 SCX  13 

    0x0df7e6ec,// 16 SCX  14 

    0x4112bcf2,// 17 SCX  15 

    0x01048a4c,// 18 SCX  16 

    0xbee8d199,// 19 SCX  17 

    0x88e50cce,// 20 SCX  18 

    0x573dcc32,// 21 SCX  19 

    0xeef26255,// 22 SCX  20 

    0x42b151c5,// 23 SCX  21 

/// BFD is 3 words. 

/// BFD tot_len        : 286 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 41 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 41 

/// BFD lencrypto      : 8 

/// BFD ofstcrypto     : 20 

/// BFD (ofst+len)cry  : 28 

/// BFD ofstiv         : 0 

/// BFD ofsticv        : 108 

    0x00000029,// 24 BFD   1 

    0x00140008,// 25 BFD   2 

    0x006c0000,// 26 BFD   3 

/// MFM is 2 words. 

/// MFM vldnibs        : 9 

    0x0900fb7b,// 27 MFM   1 

    0x3cd81000,// 28 MFM   2 

/// BDA is 73 words. 

/// BDA size     is 286 (0x11e) 

/// BDA id       is 0x4bfd 

    0x011e4bfd,// 29 BDA   1 

/// PAY Generic Data size   : 286 byte(s) 

/// PAD Buffer Data Pad size   : 2 byte(s) 

    0xdf429a18,// 30 PAY   1 

    0xcd6bf083,// 31 PAY   2 

    0x7d3dcf26,// 32 PAY   3 

    0x9b53df51,// 33 PAY   4 

    0x9cbcc81d,// 34 PAY   5 

    0x5569a141,// 35 PAY   6 

    0xdb985195,// 36 PAY   7 

    0x10a68ac6,// 37 PAY   8 

    0xf8090b77,// 38 PAY   9 

    0xba978724,// 39 PAY  10 

    0x9662e1d0,// 40 PAY  11 

    0x56d90733,// 41 PAY  12 

    0xebcc021f,// 42 PAY  13 

    0x1250939a,// 43 PAY  14 

    0x3c255530,// 44 PAY  15 

    0x10cf8d88,// 45 PAY  16 

    0x0bee8364,// 46 PAY  17 

    0xd7fe8cda,// 47 PAY  18 

    0x57bd2903,// 48 PAY  19 

    0x399c6861,// 49 PAY  20 

    0x6a361e52,// 50 PAY  21 

    0x74d41cd8,// 51 PAY  22 

    0xc648ff97,// 52 PAY  23 

    0x0ecf1503,// 53 PAY  24 

    0xc3e08909,// 54 PAY  25 

    0x974a18e5,// 55 PAY  26 

    0x7b6738b6,// 56 PAY  27 

    0xfc232d69,// 57 PAY  28 

    0xae25a857,// 58 PAY  29 

    0x920b5877,// 59 PAY  30 

    0xeca00803,// 60 PAY  31 

    0x4fd45ee0,// 61 PAY  32 

    0xdae201f0,// 62 PAY  33 

    0x9b598a20,// 63 PAY  34 

    0x8e243101,// 64 PAY  35 

    0x2f8dcc41,// 65 PAY  36 

    0x9c18be0a,// 66 PAY  37 

    0xd11b4fbc,// 67 PAY  38 

    0xf60d2b2a,// 68 PAY  39 

    0xd5d77d86,// 69 PAY  40 

    0x36600ddf,// 70 PAY  41 

    0x820c1c2a,// 71 PAY  42 

    0x4a5a2e2e,// 72 PAY  43 

    0x0c7eb45d,// 73 PAY  44 

    0x9a7ab530,// 74 PAY  45 

    0x75e168a8,// 75 PAY  46 

    0x77d24981,// 76 PAY  47 

    0x9a62c4a3,// 77 PAY  48 

    0xae726473,// 78 PAY  49 

    0xd0e487c4,// 79 PAY  50 

    0x1ce11a60,// 80 PAY  51 

    0x0b7efdf8,// 81 PAY  52 

    0x3f693d6c,// 82 PAY  53 

    0xd45fee45,// 83 PAY  54 

    0x96ed1ff2,// 84 PAY  55 

    0x550c1ef9,// 85 PAY  56 

    0x10817861,// 86 PAY  57 

    0x93b7c473,// 87 PAY  58 

    0x9a5681ea,// 88 PAY  59 

    0x406fca3b,// 89 PAY  60 

    0xda606442,// 90 PAY  61 

    0xf4bd82c5,// 91 PAY  62 

    0xc169d399,// 92 PAY  63 

    0xa42435d2,// 93 PAY  64 

    0xfe2ae658,// 94 PAY  65 

    0x4487fec2,// 95 PAY  66 

    0x8b8e8f84,// 96 PAY  67 

    0xec58c1ae,// 97 PAY  68 

    0x6aad5b75,// 98 PAY  69 

    0x701470f8,// 99 PAY  70 

    0xf8fc62ae,// 100 PAY  71 

    0xfdf80000,// 101 PAY  72 

/// STA is 1 words. 

/// STA num_pkts       : 13 

/// STA pkt_idx        : 80 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x9a 

    0x01419a0d // 102 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 80 (0x50) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_sha1_pkt45_tmpl[] = {
    0xb8010050,// 1 CCH   1 

/// ECH cache_idx      : 0x01 

/// ECH pdu_tag        : 0x00 

    0x00010000,// 2 ECH   1 

/// SCX is 19 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound !save_icv insert_icv check_icv !sctx_iv  

/// SCX exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : SHA1 

/// SCX aes_size        : RC4UPDT_AES192 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x4 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 40 

    0x00000013,// 3 SCX   1 

    0x806548fc,// 4 SCX   2 

    0x00003442,// 5 SCX   3 

    0x9f78582e,// 6 SCX   4 

    0x62a432b2,// 7 SCX   5 

    0x7bc68d8e,// 8 SCX   6 

    0x580fded0,// 9 SCX   7 

    0x7d6fd60f,// 10 SCX   8 

    0x77167012,// 11 SCX   9 

    0xa16fbf75,// 12 SCX  10 

    0xbdd5bdb5,// 13 SCX  11 

    0x1a297495,// 14 SCX  12 

    0x5ab5cd7b,// 15 SCX  13 

    0xb97aeecb,// 16 SCX  14 

    0x45bddfe9,// 17 SCX  15 

    0xe717416e,// 18 SCX  16 

    0x58599e30,// 19 SCX  17 

    0xd21565d4,// 20 SCX  18 

    0x384bc718,// 21 SCX  19 

/// BFD is 3 words. 

/// BFD tot_len        : 1986 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 291 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 291 

/// BFD lencrypto      : 8 

/// BFD ofstcrypto     : 244 

/// BFD (ofst+len)cry  : 252 

/// BFD ofstiv         : 148 

/// BFD ofsticv        : 1732 

    0x00000123,// 22 BFD   1 

    0x00f40008,// 23 BFD   2 

    0x06c40094,// 24 BFD   3 

/// MFM is 3 words. 

/// MFM vldnibs        : 10 

    0x1000c22c,// 25 MFM   1 

    0x40093911,// 26 MFM   2 

    0x8b9a0000,// 27 MFM   3 

/// BDA is 498 words. 

/// BDA size     is 1986 (0x7c2) 

/// BDA id       is 0xae4b 

    0x07c2ae4b,// 28 BDA   1 

/// PAY Generic Data size   : 1986 byte(s) 

/// PAD Buffer Data Pad size   : 2 byte(s) 

    0x8932ed17,// 29 PAY   1 

    0xfbb66217,// 30 PAY   2 

    0x0f202eeb,// 31 PAY   3 

    0x63a80f7c,// 32 PAY   4 

    0xcb85e53d,// 33 PAY   5 

    0x7678bb0d,// 34 PAY   6 

    0x7fe475fb,// 35 PAY   7 

    0x2de9baa8,// 36 PAY   8 

    0x4cf98e2a,// 37 PAY   9 

    0x0e482aeb,// 38 PAY  10 

    0xd23e3d47,// 39 PAY  11 

    0x6af6ddd0,// 40 PAY  12 

    0xc8c36e56,// 41 PAY  13 

    0x891f9557,// 42 PAY  14 

    0x5c721a39,// 43 PAY  15 

    0x4e4823a4,// 44 PAY  16 

    0xdb1fd5b3,// 45 PAY  17 

    0xca050c27,// 46 PAY  18 

    0xe32e6d91,// 47 PAY  19 

    0xbebb059e,// 48 PAY  20 

    0x76379627,// 49 PAY  21 

    0xaa399a9f,// 50 PAY  22 

    0xd5eb88d3,// 51 PAY  23 

    0xeacebe47,// 52 PAY  24 

    0x5f0227b3,// 53 PAY  25 

    0xc6de821e,// 54 PAY  26 

    0x51a928e7,// 55 PAY  27 

    0xb2011a30,// 56 PAY  28 

    0x43357ebf,// 57 PAY  29 

    0x4c1fd349,// 58 PAY  30 

    0x9f86a36e,// 59 PAY  31 

    0x08c696f3,// 60 PAY  32 

    0x0dfca078,// 61 PAY  33 

    0x1fe9d97c,// 62 PAY  34 

    0xafb9b852,// 63 PAY  35 

    0xea5654b5,// 64 PAY  36 

    0x2cd75c52,// 65 PAY  37 

    0x26478098,// 66 PAY  38 

    0x9cef0be5,// 67 PAY  39 

    0xc9fb8332,// 68 PAY  40 

    0x218a6575,// 69 PAY  41 

    0x1170052e,// 70 PAY  42 

    0xc9b5d832,// 71 PAY  43 

    0x21f0cab1,// 72 PAY  44 

    0x3d4974b4,// 73 PAY  45 

    0xc2462fea,// 74 PAY  46 

    0x38adbfaa,// 75 PAY  47 

    0xb0a14852,// 76 PAY  48 

    0x517f79e9,// 77 PAY  49 

    0xc17560a5,// 78 PAY  50 

    0x276903c7,// 79 PAY  51 

    0x015fe8f9,// 80 PAY  52 

    0x72c97a76,// 81 PAY  53 

    0x9451ab85,// 82 PAY  54 

    0xc362828c,// 83 PAY  55 

    0x548149e9,// 84 PAY  56 

    0x08e25c6b,// 85 PAY  57 

    0xe75308f9,// 86 PAY  58 

    0xdb1a776d,// 87 PAY  59 

    0xf91d9b82,// 88 PAY  60 

    0xf6442a51,// 89 PAY  61 

    0xecaa6ceb,// 90 PAY  62 

    0xc6a63dfd,// 91 PAY  63 

    0xb3741da0,// 92 PAY  64 

    0x2d85a7eb,// 93 PAY  65 

    0x9fc31816,// 94 PAY  66 

    0x4c29d09a,// 95 PAY  67 

    0xb380d867,// 96 PAY  68 

    0x0dc729b2,// 97 PAY  69 

    0x142cc571,// 98 PAY  70 

    0x04e452f6,// 99 PAY  71 

    0xfafdc458,// 100 PAY  72 

    0x7b883444,// 101 PAY  73 

    0xda409e8a,// 102 PAY  74 

    0x18896d17,// 103 PAY  75 

    0x2349c893,// 104 PAY  76 

    0x71c64af7,// 105 PAY  77 

    0x40d9a09d,// 106 PAY  78 

    0x7067f55b,// 107 PAY  79 

    0x827ea673,// 108 PAY  80 

    0x96d303b8,// 109 PAY  81 

    0xf68958ac,// 110 PAY  82 

    0x7447411e,// 111 PAY  83 

    0x8840c891,// 112 PAY  84 

    0xa6386835,// 113 PAY  85 

    0x2ffcb3fd,// 114 PAY  86 

    0x54120f4b,// 115 PAY  87 

    0xe509fc2d,// 116 PAY  88 

    0x704d5ff8,// 117 PAY  89 

    0x4f1d7353,// 118 PAY  90 

    0x5d3c9d92,// 119 PAY  91 

    0xca4375cf,// 120 PAY  92 

    0x9c9b6c67,// 121 PAY  93 

    0x27275e1d,// 122 PAY  94 

    0x5a061552,// 123 PAY  95 

    0x3cd9b318,// 124 PAY  96 

    0x916f1a2e,// 125 PAY  97 

    0xff32b143,// 126 PAY  98 

    0x005e3389,// 127 PAY  99 

    0x140258f8,// 128 PAY 100 

    0x561bd04a,// 129 PAY 101 

    0x5c5e5b4e,// 130 PAY 102 

    0xd4144cb3,// 131 PAY 103 

    0x81a3dadb,// 132 PAY 104 

    0x4fc1e939,// 133 PAY 105 

    0x2d33672d,// 134 PAY 106 

    0xd52ee5f7,// 135 PAY 107 

    0x48af2dd9,// 136 PAY 108 

    0x0b2ec838,// 137 PAY 109 

    0xbff69317,// 138 PAY 110 

    0xaccc2ef9,// 139 PAY 111 

    0x5bf5093b,// 140 PAY 112 

    0x247a2516,// 141 PAY 113 

    0x28f6a36d,// 142 PAY 114 

    0x3dd74b52,// 143 PAY 115 

    0x3195735e,// 144 PAY 116 

    0x52e979ff,// 145 PAY 117 

    0x89ade6b5,// 146 PAY 118 

    0xe7322f0b,// 147 PAY 119 

    0xeabe3365,// 148 PAY 120 

    0x942361be,// 149 PAY 121 

    0xd9d74a09,// 150 PAY 122 

    0x90e0770a,// 151 PAY 123 

    0xc170738f,// 152 PAY 124 

    0x34425192,// 153 PAY 125 

    0xea17db57,// 154 PAY 126 

    0x0626e7e1,// 155 PAY 127 

    0x8f134997,// 156 PAY 128 

    0xe9bdb54e,// 157 PAY 129 

    0xd83ebe98,// 158 PAY 130 

    0x77b53bc0,// 159 PAY 131 

    0x398069da,// 160 PAY 132 

    0xc4ffda70,// 161 PAY 133 

    0x052735ed,// 162 PAY 134 

    0x88514cdb,// 163 PAY 135 

    0x5f0dd220,// 164 PAY 136 

    0x030dea52,// 165 PAY 137 

    0x5b2ab3b6,// 166 PAY 138 

    0x1f258753,// 167 PAY 139 

    0x929c5648,// 168 PAY 140 

    0x2f989819,// 169 PAY 141 

    0x5ef3b2ef,// 170 PAY 142 

    0xd6b432cf,// 171 PAY 143 

    0x0272e312,// 172 PAY 144 

    0x050d337e,// 173 PAY 145 

    0xb2f17f8f,// 174 PAY 146 

    0xa5807d56,// 175 PAY 147 

    0x62fe9cd2,// 176 PAY 148 

    0x60ed242f,// 177 PAY 149 

    0xf5c54c34,// 178 PAY 150 

    0xbcb9b37f,// 179 PAY 151 

    0xbf654a86,// 180 PAY 152 

    0xc39f2b50,// 181 PAY 153 

    0xe0d09f59,// 182 PAY 154 

    0xb91cf0bb,// 183 PAY 155 

    0x98dbca10,// 184 PAY 156 

    0xc78bfb4f,// 185 PAY 157 

    0x5f5ad71a,// 186 PAY 158 

    0x630a419b,// 187 PAY 159 

    0x4365840b,// 188 PAY 160 

    0x11baf089,// 189 PAY 161 

    0xc0567bc6,// 190 PAY 162 

    0x7ff12d4d,// 191 PAY 163 

    0xeac53231,// 192 PAY 164 

    0x25f449ca,// 193 PAY 165 

    0x802ed289,// 194 PAY 166 

    0x9370ad7d,// 195 PAY 167 

    0xa62f5ad2,// 196 PAY 168 

    0xc32578ca,// 197 PAY 169 

    0x9f298d62,// 198 PAY 170 

    0x0b34820a,// 199 PAY 171 

    0xc6fffd8f,// 200 PAY 172 

    0x49ac0fe7,// 201 PAY 173 

    0x58d63510,// 202 PAY 174 

    0x143b954c,// 203 PAY 175 

    0xa9bac148,// 204 PAY 176 

    0x000f5fff,// 205 PAY 177 

    0xd5daae87,// 206 PAY 178 

    0x09c6ce6e,// 207 PAY 179 

    0xb217262e,// 208 PAY 180 

    0x1b1cd025,// 209 PAY 181 

    0x5622b3d5,// 210 PAY 182 

    0x337d63bc,// 211 PAY 183 

    0x6b50c2af,// 212 PAY 184 

    0xd419e629,// 213 PAY 185 

    0x6263d0b9,// 214 PAY 186 

    0x83a23609,// 215 PAY 187 

    0x8d6ffb11,// 216 PAY 188 

    0x7e729025,// 217 PAY 189 

    0x5aa2ee12,// 218 PAY 190 

    0xc933c617,// 219 PAY 191 

    0x369bb190,// 220 PAY 192 

    0x7c2703af,// 221 PAY 193 

    0x2c303c7a,// 222 PAY 194 

    0x05463426,// 223 PAY 195 

    0x6527ce2e,// 224 PAY 196 

    0x9df8c032,// 225 PAY 197 

    0xbe48e16a,// 226 PAY 198 

    0xb81d72e5,// 227 PAY 199 

    0x7bc43e6c,// 228 PAY 200 

    0x9dc2303d,// 229 PAY 201 

    0x5176662b,// 230 PAY 202 

    0x86f9c9d7,// 231 PAY 203 

    0x003c82ae,// 232 PAY 204 

    0xc7eb5a7d,// 233 PAY 205 

    0x10c7fcd8,// 234 PAY 206 

    0xa41b8fb0,// 235 PAY 207 

    0x2e4a1287,// 236 PAY 208 

    0x29e90ad1,// 237 PAY 209 

    0xbbcc038d,// 238 PAY 210 

    0x12cb2d44,// 239 PAY 211 

    0xc864481c,// 240 PAY 212 

    0xeb5188b4,// 241 PAY 213 

    0x6af00bda,// 242 PAY 214 

    0xc4d154fe,// 243 PAY 215 

    0x8807b156,// 244 PAY 216 

    0x52d5cb54,// 245 PAY 217 

    0x65374755,// 246 PAY 218 

    0x0286d5c3,// 247 PAY 219 

    0xf6584bdf,// 248 PAY 220 

    0xc7356b7b,// 249 PAY 221 

    0xf49db22c,// 250 PAY 222 

    0xe27eb533,// 251 PAY 223 

    0xd98ce09d,// 252 PAY 224 

    0x937e9435,// 253 PAY 225 

    0xc7e93a5e,// 254 PAY 226 

    0xe9c649a9,// 255 PAY 227 

    0xfde6c9f6,// 256 PAY 228 

    0x31a9f715,// 257 PAY 229 

    0x9bfc6e1f,// 258 PAY 230 

    0x876e22a8,// 259 PAY 231 

    0xc285cc55,// 260 PAY 232 

    0xc518850e,// 261 PAY 233 

    0x9696c5ee,// 262 PAY 234 

    0x261ee8a3,// 263 PAY 235 

    0xab7e0ea8,// 264 PAY 236 

    0x1a6f5b23,// 265 PAY 237 

    0x4c36dc07,// 266 PAY 238 

    0x8f8b8d4c,// 267 PAY 239 

    0x43f3d06a,// 268 PAY 240 

    0xa851517b,// 269 PAY 241 

    0xa95c68a1,// 270 PAY 242 

    0x11589e92,// 271 PAY 243 

    0xcf21dcf0,// 272 PAY 244 

    0x95b5e00d,// 273 PAY 245 

    0xe62d31bf,// 274 PAY 246 

    0xb95a6e3b,// 275 PAY 247 

    0xc80bc0ef,// 276 PAY 248 

    0x1de1c212,// 277 PAY 249 

    0xfef8aad9,// 278 PAY 250 

    0x846b106c,// 279 PAY 251 

    0x0ac73d3c,// 280 PAY 252 

    0x741fe1cd,// 281 PAY 253 

    0x59a56665,// 282 PAY 254 

    0xfd391d69,// 283 PAY 255 

    0x8f737cfa,// 284 PAY 256 

    0xfe0d9984,// 285 PAY 257 

    0xa7ec14bd,// 286 PAY 258 

    0xda690c89,// 287 PAY 259 

    0x7de9c5f9,// 288 PAY 260 

    0x7ef816d6,// 289 PAY 261 

    0xa05aa525,// 290 PAY 262 

    0x1d90b6f6,// 291 PAY 263 

    0x0b187bf8,// 292 PAY 264 

    0x76c50ff4,// 293 PAY 265 

    0x09f44068,// 294 PAY 266 

    0x6cf0816f,// 295 PAY 267 

    0x28fa8606,// 296 PAY 268 

    0x4804956f,// 297 PAY 269 

    0x81601974,// 298 PAY 270 

    0xa4012d10,// 299 PAY 271 

    0x729cf393,// 300 PAY 272 

    0x22beac4a,// 301 PAY 273 

    0x8e57bf3d,// 302 PAY 274 

    0x28e42e69,// 303 PAY 275 

    0x4fce94e0,// 304 PAY 276 

    0x40dcdfa0,// 305 PAY 277 

    0xd2ea775b,// 306 PAY 278 

    0x701f92ca,// 307 PAY 279 

    0xa4e84587,// 308 PAY 280 

    0x86877ca4,// 309 PAY 281 

    0xd36a2c96,// 310 PAY 282 

    0x6c6ec40b,// 311 PAY 283 

    0x66789502,// 312 PAY 284 

    0x6812dac8,// 313 PAY 285 

    0xba5d5c95,// 314 PAY 286 

    0xb48993d5,// 315 PAY 287 

    0x407aef41,// 316 PAY 288 

    0x0f120ef4,// 317 PAY 289 

    0x0cb68402,// 318 PAY 290 

    0x1fbe2750,// 319 PAY 291 

    0x46aa4770,// 320 PAY 292 

    0x8193b121,// 321 PAY 293 

    0x8d466eeb,// 322 PAY 294 

    0x429e1007,// 323 PAY 295 

    0xf54f070c,// 324 PAY 296 

    0x84063ab3,// 325 PAY 297 

    0x27b89feb,// 326 PAY 298 

    0x80e09e02,// 327 PAY 299 

    0xb7bae2c8,// 328 PAY 300 

    0x9538fe03,// 329 PAY 301 

    0x403985b3,// 330 PAY 302 

    0x9f18c9d6,// 331 PAY 303 

    0xbe776b92,// 332 PAY 304 

    0xf385b36f,// 333 PAY 305 

    0xc9d463e6,// 334 PAY 306 

    0xe51a0d6e,// 335 PAY 307 

    0xc53185b1,// 336 PAY 308 

    0xd9293a85,// 337 PAY 309 

    0x172c4934,// 338 PAY 310 

    0xa8c52631,// 339 PAY 311 

    0x795f2d44,// 340 PAY 312 

    0x9c70e353,// 341 PAY 313 

    0xe62ee3cc,// 342 PAY 314 

    0x215c084d,// 343 PAY 315 

    0xef5a529c,// 344 PAY 316 

    0x26341f69,// 345 PAY 317 

    0xa7064ac5,// 346 PAY 318 

    0x5add1c51,// 347 PAY 319 

    0x62f901b5,// 348 PAY 320 

    0xc3cf6f43,// 349 PAY 321 

    0x1c5dc191,// 350 PAY 322 

    0x00c190d7,// 351 PAY 323 

    0xbe14373e,// 352 PAY 324 

    0xf6bcdbae,// 353 PAY 325 

    0x8d61b5be,// 354 PAY 326 

    0xb0f366bf,// 355 PAY 327 

    0x9b13d069,// 356 PAY 328 

    0xffdd24f7,// 357 PAY 329 

    0xf4932785,// 358 PAY 330 

    0x19a10b7d,// 359 PAY 331 

    0xe29e3008,// 360 PAY 332 

    0xeaf02947,// 361 PAY 333 

    0xb2513659,// 362 PAY 334 

    0xade212f3,// 363 PAY 335 

    0x2cf4c418,// 364 PAY 336 

    0x8045dd9c,// 365 PAY 337 

    0x775ab106,// 366 PAY 338 

    0xea68f2be,// 367 PAY 339 

    0x1c3e7350,// 368 PAY 340 

    0xe172351b,// 369 PAY 341 

    0xd32b4452,// 370 PAY 342 

    0x39143897,// 371 PAY 343 

    0x6fe308c2,// 372 PAY 344 

    0x966f209e,// 373 PAY 345 

    0x81b877d8,// 374 PAY 346 

    0x81662162,// 375 PAY 347 

    0x39410bcb,// 376 PAY 348 

    0x92a96979,// 377 PAY 349 

    0xf10f0ac5,// 378 PAY 350 

    0x1b5ea4fc,// 379 PAY 351 

    0xabb8baf5,// 380 PAY 352 

    0xff6fa045,// 381 PAY 353 

    0x89ebb2df,// 382 PAY 354 

    0x75fb10e9,// 383 PAY 355 

    0xa13d87b1,// 384 PAY 356 

    0x74ebadcf,// 385 PAY 357 

    0x5d544525,// 386 PAY 358 

    0xfec0cfc6,// 387 PAY 359 

    0x22d8eaf1,// 388 PAY 360 

    0x35c042e2,// 389 PAY 361 

    0xd2bd4ad8,// 390 PAY 362 

    0x973053f9,// 391 PAY 363 

    0x0e8fa49d,// 392 PAY 364 

    0xaceddabe,// 393 PAY 365 

    0x62a880a8,// 394 PAY 366 

    0x5c9f276f,// 395 PAY 367 

    0x5b84878e,// 396 PAY 368 

    0x20fcf550,// 397 PAY 369 

    0xe6a4f525,// 398 PAY 370 

    0x7d67ee3c,// 399 PAY 371 

    0xb45c4555,// 400 PAY 372 

    0x6dfeeaab,// 401 PAY 373 

    0x626fe71d,// 402 PAY 374 

    0x695264cd,// 403 PAY 375 

    0x800f6f07,// 404 PAY 376 

    0x3dd926be,// 405 PAY 377 

    0xa21c1d4f,// 406 PAY 378 

    0x85f55cc9,// 407 PAY 379 

    0xc378361e,// 408 PAY 380 

    0x63037b06,// 409 PAY 381 

    0xe1b668b7,// 410 PAY 382 

    0xa622e8dd,// 411 PAY 383 

    0x98740d48,// 412 PAY 384 

    0x613f9e66,// 413 PAY 385 

    0xf60985b9,// 414 PAY 386 

    0x7fbb2480,// 415 PAY 387 

    0x578cf640,// 416 PAY 388 

    0x0d342c90,// 417 PAY 389 

    0x7c465ae5,// 418 PAY 390 

    0x90a056f9,// 419 PAY 391 

    0xd37c44ea,// 420 PAY 392 

    0xb2289614,// 421 PAY 393 

    0x6c02d2d9,// 422 PAY 394 

    0xbb7fe4b7,// 423 PAY 395 

    0xff4830a1,// 424 PAY 396 

    0xfa4368be,// 425 PAY 397 

    0x9e23f22c,// 426 PAY 398 

    0x5f31cbc2,// 427 PAY 399 

    0x3661b0e7,// 428 PAY 400 

    0x1d8b47ba,// 429 PAY 401 

    0xdd971a14,// 430 PAY 402 

    0x352b1e3f,// 431 PAY 403 

    0x706f13cc,// 432 PAY 404 

    0x83194bb1,// 433 PAY 405 

    0x24c461d8,// 434 PAY 406 

    0x6d242c4b,// 435 PAY 407 

    0x4609606c,// 436 PAY 408 

    0xef7bb755,// 437 PAY 409 

    0x5e5549d4,// 438 PAY 410 

    0x960fbc96,// 439 PAY 411 

    0xe1e80e04,// 440 PAY 412 

    0xa4afc3ad,// 441 PAY 413 

    0x571098ba,// 442 PAY 414 

    0x79f22871,// 443 PAY 415 

    0xd6ab5f61,// 444 PAY 416 

    0xe9589712,// 445 PAY 417 

    0x3220bc28,// 446 PAY 418 

    0x9ad29a7f,// 447 PAY 419 

    0x319cc133,// 448 PAY 420 

    0x4e87d9ac,// 449 PAY 421 

    0x9db1c92f,// 450 PAY 422 

    0xf2fda83c,// 451 PAY 423 

    0x68859ac3,// 452 PAY 424 

    0xbfff8e59,// 453 PAY 425 

    0x430ebf64,// 454 PAY 426 

    0x08c06d72,// 455 PAY 427 

    0xf92c0258,// 456 PAY 428 

    0xc8773c86,// 457 PAY 429 

    0xd01b08a3,// 458 PAY 430 

    0x7ea7139a,// 459 PAY 431 

    0x9a8e2cc8,// 460 PAY 432 

    0xd53fda5a,// 461 PAY 433 

    0x3bdcaed9,// 462 PAY 434 

    0x81dc47a5,// 463 PAY 435 

    0x8588c540,// 464 PAY 436 

    0xb7876d68,// 465 PAY 437 

    0x96a30568,// 466 PAY 438 

    0x6c4b2c00,// 467 PAY 439 

    0x1687d012,// 468 PAY 440 

    0x7aedffc9,// 469 PAY 441 

    0x1b7ddcbe,// 470 PAY 442 

    0xbf86778b,// 471 PAY 443 

    0xf47477e2,// 472 PAY 444 

    0x031457a0,// 473 PAY 445 

    0x682d2c2a,// 474 PAY 446 

    0x633b0d72,// 475 PAY 447 

    0x4f8a9541,// 476 PAY 448 

    0x38f993f3,// 477 PAY 449 

    0x919e1766,// 478 PAY 450 

    0x490850ad,// 479 PAY 451 

    0xe8fcbeb5,// 480 PAY 452 

    0x85016bb2,// 481 PAY 453 

    0xdd6b95f0,// 482 PAY 454 

    0xbf9844a3,// 483 PAY 455 

    0xfb4e8474,// 484 PAY 456 

    0x3fc333ac,// 485 PAY 457 

    0x4318a412,// 486 PAY 458 

    0xd80e1eeb,// 487 PAY 459 

    0x149f23d0,// 488 PAY 460 

    0x8d65f999,// 489 PAY 461 

    0xa8da2219,// 490 PAY 462 

    0xb6f95bdf,// 491 PAY 463 

    0x5f04b142,// 492 PAY 464 

    0xfc9e2c2a,// 493 PAY 465 

    0xb981bb24,// 494 PAY 466 

    0x94049ce7,// 495 PAY 467 

    0xe52ee97d,// 496 PAY 468 

    0x0d520d28,// 497 PAY 469 

    0x98b6ecb8,// 498 PAY 470 

    0xf9cd0b66,// 499 PAY 471 

    0x3c3d9691,// 500 PAY 472 

    0x4e2dd99e,// 501 PAY 473 

    0xb8646130,// 502 PAY 474 

    0xf5b9a8ac,// 503 PAY 475 

    0xd5bae249,// 504 PAY 476 

    0x4725ebdd,// 505 PAY 477 

    0x798821e7,// 506 PAY 478 

    0xc24f9d33,// 507 PAY 479 

    0xc5b57af3,// 508 PAY 480 

    0x748733fd,// 509 PAY 481 

    0xf9b47bd7,// 510 PAY 482 

    0x1a48a175,// 511 PAY 483 

    0xe1f92f33,// 512 PAY 484 

    0x61b09380,// 513 PAY 485 

    0x5458cef1,// 514 PAY 486 

    0xaefa3fe6,// 515 PAY 487 

    0xc7a5d1bc,// 516 PAY 488 

    0x3b43b4f5,// 517 PAY 489 

    0xf17bac12,// 518 PAY 490 

    0x12154555,// 519 PAY 491 

    0x25d260e8,// 520 PAY 492 

    0x663985eb,// 521 PAY 493 

    0x36fd0d18,// 522 PAY 494 

    0xe706e5a2,// 523 PAY 495 

    0x75dfa17c,// 524 PAY 496 

    0xb3e40000,// 525 PAY 497 

/// STA is 1 words. 

/// STA num_pkts       : 173 

/// STA pkt_idx        : 179 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x3f 

    0x02cd3fad // 526 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 88 (0x58) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_sha1_pkt46_tmpl[] = {
    0xb8010058,// 1 CCH   1 

/// ECH cache_idx      : 0x04 

/// ECH pdu_tag        : 0x00 

    0x00040000,// 2 ECH   1 

/// SCX is 21 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound save_icv insert_icv check_icv sctx_iv  

/// SCX exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : SHA1 

/// SCX aes_size        : AES256 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x4 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 8 

/// SCX authctx_size    : 40 

    0x00000015,// 3 SCX   1 

    0x806648c9,// 4 SCX   2 

    0x000074c2,// 5 SCX   3 

    0x164a6cc4,// 6 SCX   4 

    0xa57e338e,// 7 SCX   5 

    0x2bea1d50,// 8 SCX   6 

    0xa0c6170f,// 9 SCX   7 

    0x50a52017,// 10 SCX   8 

    0x25280611,// 11 SCX   9 

    0x302645f8,// 12 SCX  10 

    0x91ec6519,// 13 SCX  11 

    0x113ecd18,// 14 SCX  12 

    0xce9ee378,// 15 SCX  13 

    0x20ab3632,// 16 SCX  14 

    0x41b6cb11,// 17 SCX  15 

    0x3400d9b4,// 18 SCX  16 

    0x4a2435f9,// 19 SCX  17 

    0x21221ef4,// 20 SCX  18 

    0x45fce53c,// 21 SCX  19 

    0x0ddff8fa,// 22 SCX  20 

    0x9103c6f5,// 23 SCX  21 

/// BFD is 3 words. 

/// BFD tot_len        : 1794 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 1667 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 1667 

/// BFD lencrypto      : 848 

/// BFD ofstcrypto     : 12 

/// BFD (ofst+len)cry  : 860 

/// BFD ofstiv         : 0 

/// BFD ofsticv        : 1716 

    0x00000683,// 24 BFD   1 

    0x000c0350,// 25 BFD   2 

    0x06b40000,// 26 BFD   3 

/// MFM is 4 words. 

/// MFM vldnibs        : 17 

    0x17006448,// 27 MFM   1 

    0x0e2cdb8a,// 28 MFM   2 

    0x42d89e63,// 29 MFM   3 

    0xf8f00000,// 30 MFM   4 

/// BDA is 450 words. 

/// BDA size     is 1794 (0x702) 

/// BDA id       is 0x3c4b 

    0x07023c4b,// 31 BDA   1 

/// PAY Generic Data size   : 1794 byte(s) 

/// PAD Buffer Data Pad size   : 2 byte(s) 

    0xa5061868,// 32 PAY   1 

    0x74b35550,// 33 PAY   2 

    0xb7d0e6b4,// 34 PAY   3 

    0x7e3be0af,// 35 PAY   4 

    0x8ee19ec9,// 36 PAY   5 

    0xd02d28dd,// 37 PAY   6 

    0x54855a0e,// 38 PAY   7 

    0xea575108,// 39 PAY   8 

    0x64187ce0,// 40 PAY   9 

    0xef7512bb,// 41 PAY  10 

    0x0caba9f4,// 42 PAY  11 

    0x9b8a9ae5,// 43 PAY  12 

    0x8d7e4f64,// 44 PAY  13 

    0x57885d11,// 45 PAY  14 

    0x2a75e3da,// 46 PAY  15 

    0xd9a3596d,// 47 PAY  16 

    0x8fa6df35,// 48 PAY  17 

    0x3c2e8008,// 49 PAY  18 

    0xe4d71e48,// 50 PAY  19 

    0xca8088ab,// 51 PAY  20 

    0x572b9f31,// 52 PAY  21 

    0x5588ef0a,// 53 PAY  22 

    0x520c9bd5,// 54 PAY  23 

    0x6f3501f3,// 55 PAY  24 

    0x07d203da,// 56 PAY  25 

    0x20c993a4,// 57 PAY  26 

    0x2d00479f,// 58 PAY  27 

    0x6393bd34,// 59 PAY  28 

    0xeb567239,// 60 PAY  29 

    0xc99ee086,// 61 PAY  30 

    0x9aec7d03,// 62 PAY  31 

    0x560d61e2,// 63 PAY  32 

    0x0a626a36,// 64 PAY  33 

    0x9c75a55b,// 65 PAY  34 

    0xd530d36d,// 66 PAY  35 

    0x0da65d84,// 67 PAY  36 

    0x6858356d,// 68 PAY  37 

    0xb47ff217,// 69 PAY  38 

    0x3b896b57,// 70 PAY  39 

    0x01dba1e6,// 71 PAY  40 

    0xd3e6915f,// 72 PAY  41 

    0x73d1b665,// 73 PAY  42 

    0xea37cb2f,// 74 PAY  43 

    0x1b647f18,// 75 PAY  44 

    0x21094d53,// 76 PAY  45 

    0xf1865b04,// 77 PAY  46 

    0x5226066c,// 78 PAY  47 

    0x02ecc038,// 79 PAY  48 

    0x77d9f6c1,// 80 PAY  49 

    0x9828b381,// 81 PAY  50 

    0xe1c6c631,// 82 PAY  51 

    0x20bcb3c8,// 83 PAY  52 

    0x55d9f82a,// 84 PAY  53 

    0xa73c0060,// 85 PAY  54 

    0x87460e2f,// 86 PAY  55 

    0x97466941,// 87 PAY  56 

    0x3e6192f2,// 88 PAY  57 

    0x419fe49f,// 89 PAY  58 

    0xb72fd1a5,// 90 PAY  59 

    0x43588a2e,// 91 PAY  60 

    0xe3c3e32b,// 92 PAY  61 

    0xe9a750ad,// 93 PAY  62 

    0xa78ccaa5,// 94 PAY  63 

    0xfa65a019,// 95 PAY  64 

    0x1ac65a00,// 96 PAY  65 

    0x9db673b1,// 97 PAY  66 

    0x6cbf6116,// 98 PAY  67 

    0xed283ca4,// 99 PAY  68 

    0x35387618,// 100 PAY  69 

    0x88edffc8,// 101 PAY  70 

    0x7e9e619b,// 102 PAY  71 

    0x96c2a60d,// 103 PAY  72 

    0xbba7972f,// 104 PAY  73 

    0xcc35f892,// 105 PAY  74 

    0xd31f9e3d,// 106 PAY  75 

    0x24bc7d9f,// 107 PAY  76 

    0x59edb548,// 108 PAY  77 

    0xa08bfeaa,// 109 PAY  78 

    0x02d7ee67,// 110 PAY  79 

    0x5e434f90,// 111 PAY  80 

    0x6dbd4891,// 112 PAY  81 

    0x46d7dc9e,// 113 PAY  82 

    0x3f590b12,// 114 PAY  83 

    0xe5cd2fba,// 115 PAY  84 

    0xb0bf41aa,// 116 PAY  85 

    0xded27d0a,// 117 PAY  86 

    0x956663a0,// 118 PAY  87 

    0x0d82972b,// 119 PAY  88 

    0x028442a0,// 120 PAY  89 

    0xc9833a84,// 121 PAY  90 

    0x6eb71eb3,// 122 PAY  91 

    0xd5169072,// 123 PAY  92 

    0xa11692cc,// 124 PAY  93 

    0x280e0e68,// 125 PAY  94 

    0x470358b5,// 126 PAY  95 

    0xcd12f0f4,// 127 PAY  96 

    0x901b7287,// 128 PAY  97 

    0xdc776a5f,// 129 PAY  98 

    0xae5f81ba,// 130 PAY  99 

    0xc0e676a7,// 131 PAY 100 

    0x60d1f020,// 132 PAY 101 

    0x605040fd,// 133 PAY 102 

    0x26740147,// 134 PAY 103 

    0x6e6203f7,// 135 PAY 104 

    0xf27e1f56,// 136 PAY 105 

    0xcd758cca,// 137 PAY 106 

    0xb7903f94,// 138 PAY 107 

    0x3874f8ec,// 139 PAY 108 

    0x214a8c15,// 140 PAY 109 

    0xb130a31f,// 141 PAY 110 

    0x96676e7c,// 142 PAY 111 

    0x0d664420,// 143 PAY 112 

    0x5b679021,// 144 PAY 113 

    0xc65742cd,// 145 PAY 114 

    0xac889eb1,// 146 PAY 115 

    0xd22021ad,// 147 PAY 116 

    0x9498c58d,// 148 PAY 117 

    0xb60798e2,// 149 PAY 118 

    0xecdf8ed4,// 150 PAY 119 

    0xecdf63be,// 151 PAY 120 

    0xf8e2840e,// 152 PAY 121 

    0x1805515b,// 153 PAY 122 

    0xa7127537,// 154 PAY 123 

    0x74ade453,// 155 PAY 124 

    0xfeefb9a2,// 156 PAY 125 

    0x7446ee43,// 157 PAY 126 

    0xbaeb74df,// 158 PAY 127 

    0xccb0bd58,// 159 PAY 128 

    0x887d65dc,// 160 PAY 129 

    0xee009c27,// 161 PAY 130 

    0x0c43bd2d,// 162 PAY 131 

    0xab96acea,// 163 PAY 132 

    0x36efd84a,// 164 PAY 133 

    0xeeafa346,// 165 PAY 134 

    0x7743cb05,// 166 PAY 135 

    0xd2b3e43b,// 167 PAY 136 

    0xed461838,// 168 PAY 137 

    0xcc5bd6bc,// 169 PAY 138 

    0x5bc6316e,// 170 PAY 139 

    0x6e6f9a50,// 171 PAY 140 

    0xd62090e3,// 172 PAY 141 

    0x592b6f19,// 173 PAY 142 

    0xb5079d20,// 174 PAY 143 

    0x4f343c4c,// 175 PAY 144 

    0xf01a0616,// 176 PAY 145 

    0xeaa40b02,// 177 PAY 146 

    0x9526b3ae,// 178 PAY 147 

    0x365c1e10,// 179 PAY 148 

    0x9cd7510d,// 180 PAY 149 

    0x594b1423,// 181 PAY 150 

    0xf6a51cd7,// 182 PAY 151 

    0xd5dd8ca1,// 183 PAY 152 

    0x56074111,// 184 PAY 153 

    0x7c951040,// 185 PAY 154 

    0x9da38d84,// 186 PAY 155 

    0x1b0ea4e8,// 187 PAY 156 

    0x505fe5d7,// 188 PAY 157 

    0x3f817dce,// 189 PAY 158 

    0x4921924f,// 190 PAY 159 

    0x09dfd1d9,// 191 PAY 160 

    0x62bf43c3,// 192 PAY 161 

    0x41122ec3,// 193 PAY 162 

    0xc94c33e1,// 194 PAY 163 

    0x449654a9,// 195 PAY 164 

    0xab3be4f5,// 196 PAY 165 

    0x72bc55cc,// 197 PAY 166 

    0x335d8844,// 198 PAY 167 

    0x3a84b5d3,// 199 PAY 168 

    0x6c00f203,// 200 PAY 169 

    0x2156014f,// 201 PAY 170 

    0x73b4d364,// 202 PAY 171 

    0x6a75130e,// 203 PAY 172 

    0xd1a9e401,// 204 PAY 173 

    0x9ace34dd,// 205 PAY 174 

    0x12a5cf65,// 206 PAY 175 

    0x598575a9,// 207 PAY 176 

    0x3f5c0044,// 208 PAY 177 

    0x5f9dc3ce,// 209 PAY 178 

    0x1e9bd46b,// 210 PAY 179 

    0x407e7b65,// 211 PAY 180 

    0xee72e38d,// 212 PAY 181 

    0x46b4d1d4,// 213 PAY 182 

    0xdf86c496,// 214 PAY 183 

    0xc31abef6,// 215 PAY 184 

    0xc607e611,// 216 PAY 185 

    0xc1dcdd77,// 217 PAY 186 

    0x00223a77,// 218 PAY 187 

    0x785e47c3,// 219 PAY 188 

    0xd7a258ff,// 220 PAY 189 

    0x4cb07685,// 221 PAY 190 

    0x525e608b,// 222 PAY 191 

    0x8aa03fdb,// 223 PAY 192 

    0xf5605f5e,// 224 PAY 193 

    0x5b7d7ea1,// 225 PAY 194 

    0x46a394c1,// 226 PAY 195 

    0xfec9fb61,// 227 PAY 196 

    0x4ad832d4,// 228 PAY 197 

    0x906cbb6d,// 229 PAY 198 

    0x4378c093,// 230 PAY 199 

    0xd81d5a0a,// 231 PAY 200 

    0x9e198286,// 232 PAY 201 

    0xe2fa3475,// 233 PAY 202 

    0x286061e1,// 234 PAY 203 

    0x95100dfc,// 235 PAY 204 

    0x16c0ca3c,// 236 PAY 205 

    0xebfe704f,// 237 PAY 206 

    0x9fb368e1,// 238 PAY 207 

    0x0c7e7656,// 239 PAY 208 

    0x29d2cc22,// 240 PAY 209 

    0x9867b267,// 241 PAY 210 

    0xc0efdb51,// 242 PAY 211 

    0xd71f5120,// 243 PAY 212 

    0x909269b8,// 244 PAY 213 

    0x2509317c,// 245 PAY 214 

    0x58b6f520,// 246 PAY 215 

    0x5b6e5426,// 247 PAY 216 

    0x84563bbe,// 248 PAY 217 

    0xeec4576d,// 249 PAY 218 

    0xc187bec1,// 250 PAY 219 

    0xb33bfc60,// 251 PAY 220 

    0xdeb510db,// 252 PAY 221 

    0x9ceab051,// 253 PAY 222 

    0xffb4f92a,// 254 PAY 223 

    0xd2ba0ba3,// 255 PAY 224 

    0x22bcc09c,// 256 PAY 225 

    0x8efa26df,// 257 PAY 226 

    0xdb4f511c,// 258 PAY 227 

    0xa6460268,// 259 PAY 228 

    0x2a50df38,// 260 PAY 229 

    0x4225e023,// 261 PAY 230 

    0xad83c074,// 262 PAY 231 

    0xe05ae44c,// 263 PAY 232 

    0xe629ec93,// 264 PAY 233 

    0xc8c63652,// 265 PAY 234 

    0x071dc716,// 266 PAY 235 

    0x787df23d,// 267 PAY 236 

    0xc50c689e,// 268 PAY 237 

    0x6019d72f,// 269 PAY 238 

    0x5cb2a50a,// 270 PAY 239 

    0x6d26ee06,// 271 PAY 240 

    0x1c663c8c,// 272 PAY 241 

    0xa92b4d3d,// 273 PAY 242 

    0xd43e0029,// 274 PAY 243 

    0x86f7a6b1,// 275 PAY 244 

    0xaedee5f6,// 276 PAY 245 

    0xd7c2ea4f,// 277 PAY 246 

    0x5462cf72,// 278 PAY 247 

    0x396b37f9,// 279 PAY 248 

    0x360141b2,// 280 PAY 249 

    0x403fe0c4,// 281 PAY 250 

    0x6ca7152d,// 282 PAY 251 

    0xca13923f,// 283 PAY 252 

    0x5607d078,// 284 PAY 253 

    0x8c64b7c1,// 285 PAY 254 

    0xabd5260a,// 286 PAY 255 

    0x0120456e,// 287 PAY 256 

    0xa3bc4a75,// 288 PAY 257 

    0xe76c0160,// 289 PAY 258 

    0xd1efe176,// 290 PAY 259 

    0x0fd6438f,// 291 PAY 260 

    0x2e777c4f,// 292 PAY 261 

    0x0b9e07f9,// 293 PAY 262 

    0xb000a9e9,// 294 PAY 263 

    0x00d9ff0a,// 295 PAY 264 

    0xdaa0ee24,// 296 PAY 265 

    0x62bd0167,// 297 PAY 266 

    0x0ba3d808,// 298 PAY 267 

    0xddf08cc7,// 299 PAY 268 

    0x47b1d62a,// 300 PAY 269 

    0x5ad965f4,// 301 PAY 270 

    0x8e108cda,// 302 PAY 271 

    0x0f698394,// 303 PAY 272 

    0x438d167e,// 304 PAY 273 

    0x87489e14,// 305 PAY 274 

    0x3d384432,// 306 PAY 275 

    0x0874c498,// 307 PAY 276 

    0x91018040,// 308 PAY 277 

    0x7274fa27,// 309 PAY 278 

    0x5d211d34,// 310 PAY 279 

    0xadb45e3c,// 311 PAY 280 

    0x1f5a09a7,// 312 PAY 281 

    0x8aa28b2b,// 313 PAY 282 

    0x94e6782c,// 314 PAY 283 

    0xf788e19d,// 315 PAY 284 

    0xc1ffeed6,// 316 PAY 285 

    0xae231d9e,// 317 PAY 286 

    0xe1c0b43a,// 318 PAY 287 

    0xfe3f113c,// 319 PAY 288 

    0x3716afc9,// 320 PAY 289 

    0x47a5710d,// 321 PAY 290 

    0x88386462,// 322 PAY 291 

    0x7509182b,// 323 PAY 292 

    0xc904bcf7,// 324 PAY 293 

    0x789a1fca,// 325 PAY 294 

    0xa353c7e9,// 326 PAY 295 

    0x9fa14682,// 327 PAY 296 

    0xae95bddc,// 328 PAY 297 

    0x1d8359be,// 329 PAY 298 

    0x55f8bf66,// 330 PAY 299 

    0x0c888652,// 331 PAY 300 

    0x171b5278,// 332 PAY 301 

    0x64862a95,// 333 PAY 302 

    0x60faa143,// 334 PAY 303 

    0x4cdc05bf,// 335 PAY 304 

    0xae01b321,// 336 PAY 305 

    0x49068e69,// 337 PAY 306 

    0x3628e81a,// 338 PAY 307 

    0x03a2c926,// 339 PAY 308 

    0x64b0676c,// 340 PAY 309 

    0x52d28d49,// 341 PAY 310 

    0xe11566d3,// 342 PAY 311 

    0x4b27850b,// 343 PAY 312 

    0xfc932245,// 344 PAY 313 

    0x6a6fbf08,// 345 PAY 314 

    0x056ccb5c,// 346 PAY 315 

    0xe283b558,// 347 PAY 316 

    0x911d544d,// 348 PAY 317 

    0x3bc93798,// 349 PAY 318 

    0xaebd716e,// 350 PAY 319 

    0xa3e06eb7,// 351 PAY 320 

    0x1ce636e2,// 352 PAY 321 

    0xfab29c3d,// 353 PAY 322 

    0xf7c26b0f,// 354 PAY 323 

    0x0c73db84,// 355 PAY 324 

    0x82c192f0,// 356 PAY 325 

    0xe42b612b,// 357 PAY 326 

    0x41405391,// 358 PAY 327 

    0x95124e9c,// 359 PAY 328 

    0x7af29a2f,// 360 PAY 329 

    0x0cd02526,// 361 PAY 330 

    0x884f9d81,// 362 PAY 331 

    0xa66247c2,// 363 PAY 332 

    0x7c753fc5,// 364 PAY 333 

    0xd88aa250,// 365 PAY 334 

    0xa548a787,// 366 PAY 335 

    0xed201165,// 367 PAY 336 

    0x426f4f5b,// 368 PAY 337 

    0xa9a4b3ee,// 369 PAY 338 

    0x680b2e0e,// 370 PAY 339 

    0x75ac5d25,// 371 PAY 340 

    0xaa18cac4,// 372 PAY 341 

    0x1a9bff17,// 373 PAY 342 

    0xbd83192a,// 374 PAY 343 

    0xb16c8a8a,// 375 PAY 344 

    0x2ab4e640,// 376 PAY 345 

    0x3783307e,// 377 PAY 346 

    0xd9dab764,// 378 PAY 347 

    0xbdff1ec8,// 379 PAY 348 

    0x8503c738,// 380 PAY 349 

    0xc4754844,// 381 PAY 350 

    0x556e267e,// 382 PAY 351 

    0xc033c71b,// 383 PAY 352 

    0xde430792,// 384 PAY 353 

    0xe9be8d79,// 385 PAY 354 

    0x096ca117,// 386 PAY 355 

    0x713751eb,// 387 PAY 356 

    0x80462e79,// 388 PAY 357 

    0x96018a36,// 389 PAY 358 

    0x44601a0c,// 390 PAY 359 

    0x46a7865d,// 391 PAY 360 

    0x48aeca0c,// 392 PAY 361 

    0x963f33dd,// 393 PAY 362 

    0x778a5681,// 394 PAY 363 

    0x4bb0e5d7,// 395 PAY 364 

    0xd9fb9e76,// 396 PAY 365 

    0xa00d296d,// 397 PAY 366 

    0xbe70d666,// 398 PAY 367 

    0x750b339d,// 399 PAY 368 

    0x7dda0c6d,// 400 PAY 369 

    0x03882342,// 401 PAY 370 

    0xbda584fd,// 402 PAY 371 

    0xf05e5af5,// 403 PAY 372 

    0x8c5e5276,// 404 PAY 373 

    0x23c6fa3b,// 405 PAY 374 

    0xa4b31cb3,// 406 PAY 375 

    0xee1a9427,// 407 PAY 376 

    0xd11c0369,// 408 PAY 377 

    0xf18fc11b,// 409 PAY 378 

    0x13f11146,// 410 PAY 379 

    0x33837a8c,// 411 PAY 380 

    0x1ec00184,// 412 PAY 381 

    0x5b484143,// 413 PAY 382 

    0x2a8cca8e,// 414 PAY 383 

    0xe35a2b40,// 415 PAY 384 

    0x3e3dc04c,// 416 PAY 385 

    0xbad2ddf2,// 417 PAY 386 

    0xf23ac8c6,// 418 PAY 387 

    0xb509584c,// 419 PAY 388 

    0xf5a962d5,// 420 PAY 389 

    0xff31902b,// 421 PAY 390 

    0x7107725c,// 422 PAY 391 

    0x00a82cae,// 423 PAY 392 

    0xbb34ba88,// 424 PAY 393 

    0x5d71c518,// 425 PAY 394 

    0xab1e5bfd,// 426 PAY 395 

    0xa206ac37,// 427 PAY 396 

    0xa2f39e6b,// 428 PAY 397 

    0xfdaceede,// 429 PAY 398 

    0x11e19ffb,// 430 PAY 399 

    0xe0967e34,// 431 PAY 400 

    0x1510432d,// 432 PAY 401 

    0x5683b141,// 433 PAY 402 

    0x2b20eae4,// 434 PAY 403 

    0x70778d75,// 435 PAY 404 

    0x8ae6621f,// 436 PAY 405 

    0xe2720130,// 437 PAY 406 

    0xa2c69605,// 438 PAY 407 

    0x19f00d2e,// 439 PAY 408 

    0xc61d541f,// 440 PAY 409 

    0x3c45481b,// 441 PAY 410 

    0xea883ce1,// 442 PAY 411 

    0xd5e86eb1,// 443 PAY 412 

    0xdac20fc8,// 444 PAY 413 

    0xacdd0173,// 445 PAY 414 

    0xdfb4beb2,// 446 PAY 415 

    0x626e137d,// 447 PAY 416 

    0x3321aec0,// 448 PAY 417 

    0x3736c36f,// 449 PAY 418 

    0x94d938d6,// 450 PAY 419 

    0xfa8325ed,// 451 PAY 420 

    0xc17d0c71,// 452 PAY 421 

    0x472c2c5b,// 453 PAY 422 

    0x5995d3a4,// 454 PAY 423 

    0x66a94f6f,// 455 PAY 424 

    0x4f35f407,// 456 PAY 425 

    0xe4ff7488,// 457 PAY 426 

    0x5182f0f1,// 458 PAY 427 

    0x551f7262,// 459 PAY 428 

    0x3b4ca783,// 460 PAY 429 

    0x4524de9f,// 461 PAY 430 

    0xbea71986,// 462 PAY 431 

    0xd0534fdb,// 463 PAY 432 

    0x04144b4f,// 464 PAY 433 

    0xf32d5545,// 465 PAY 434 

    0xeec64133,// 466 PAY 435 

    0x56ddc34d,// 467 PAY 436 

    0xf7d23754,// 468 PAY 437 

    0x9441f2ca,// 469 PAY 438 

    0x6dd4cecf,// 470 PAY 439 

    0x9a2eb9ea,// 471 PAY 440 

    0x6a9f7baa,// 472 PAY 441 

    0x87d01f45,// 473 PAY 442 

    0x00caac82,// 474 PAY 443 

    0x5ab6e3ce,// 475 PAY 444 

    0x1d670d2d,// 476 PAY 445 

    0xe97becc0,// 477 PAY 446 

    0x3175e8f2,// 478 PAY 447 

    0x381677df,// 479 PAY 448 

    0x86e00000,// 480 PAY 449 

/// STA is 1 words. 

/// STA num_pkts       : 100 

/// STA pkt_idx        : 152 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x6f 

    0x02616f64 // 481 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 80 (0x50) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_sha1_pkt47_tmpl[] = {
    0xb8010050,// 1 CCH   1 

/// ECH cache_idx      : 0x07 

/// ECH pdu_tag        : 0x00 

    0x00070000,// 2 ECH   1 

/// SCX is 19 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound !save_icv !insert_icv !check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : SHA1 

/// SCX aes_size        : NORMAL_RC4INIT_AES128 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x2 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 40 

    0x00000013,// 3 SCX   1 

    0x8060486b,// 4 SCX   2 

    0x00000200,// 5 SCX   3 

    0xb349069b,// 6 SCX   4 

    0xd96ff58e,// 7 SCX   5 

    0x6bae1076,// 8 SCX   6 

    0xe0cd9012,// 9 SCX   7 

    0x627069f5,// 10 SCX   8 

    0x6344b4ea,// 11 SCX   9 

    0x36e60ed3,// 12 SCX  10 

    0xd16b9a80,// 13 SCX  11 

    0x4a2ed480,// 14 SCX  12 

    0xdbb5a8e6,// 15 SCX  13 

    0x79afeff3,// 16 SCX  14 

    0xc4cbd564,// 17 SCX  15 

    0x2e2cd072,// 18 SCX  16 

    0x501fa74c,// 19 SCX  17 

    0x1ec9992e,// 20 SCX  18 

    0x5b547c48,// 21 SCX  19 

/// BFD is 3 words. 

/// BFD tot_len        : 360 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 209 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 209 

/// BFD lencrypto      : 40 

/// BFD ofstcrypto     : 164 

/// BFD (ofst+len)cry  : 204 

/// BFD ofstiv         : 144 

/// BFD ofsticv        : 320 

    0x000000d1,// 22 BFD   1 

    0x00a40028,// 23 BFD   2 

    0x01400090,// 24 BFD   3 

/// MFM is 3 words. 

/// MFM vldnibs        : 14 

    0x14007315,// 25 MFM   1 

    0xba0c9180,// 26 MFM   2 

    0x84a5924b,// 27 MFM   3 

/// BDA is 91 words. 

/// BDA size     is 360 (0x168) 

/// BDA id       is 0x4ac8 

    0x01684ac8,// 28 BDA   1 

/// PAY Generic Data size   : 360 byte(s) 

/// PAD Buffer Data Pad size   : 0 byte(s) 

    0xa07199cf,// 29 PAY   1 

    0x901a4d64,// 30 PAY   2 

    0xc9ea1734,// 31 PAY   3 

    0x63a0832c,// 32 PAY   4 

    0xc2187975,// 33 PAY   5 

    0xe392c07b,// 34 PAY   6 

    0xd3f0418d,// 35 PAY   7 

    0xae496652,// 36 PAY   8 

    0x5cfa05dd,// 37 PAY   9 

    0xe32ba245,// 38 PAY  10 

    0xddfb8243,// 39 PAY  11 

    0x887a02b7,// 40 PAY  12 

    0xc1c72406,// 41 PAY  13 

    0xc00c5ec6,// 42 PAY  14 

    0x4b1476cd,// 43 PAY  15 

    0x67882ce8,// 44 PAY  16 

    0x6154599d,// 45 PAY  17 

    0x02dfa674,// 46 PAY  18 

    0x312cd35b,// 47 PAY  19 

    0xf9beca88,// 48 PAY  20 

    0xf3eb1b5f,// 49 PAY  21 

    0x3715e1d8,// 50 PAY  22 

    0xab66c5ed,// 51 PAY  23 

    0x2a6673e9,// 52 PAY  24 

    0x675c7345,// 53 PAY  25 

    0x56907fa7,// 54 PAY  26 

    0xa3e3c5a9,// 55 PAY  27 

    0x972339c2,// 56 PAY  28 

    0x7018cf58,// 57 PAY  29 

    0x33f31020,// 58 PAY  30 

    0xb38052ab,// 59 PAY  31 

    0x6e0a0369,// 60 PAY  32 

    0x3e52bb5f,// 61 PAY  33 

    0xc633dffc,// 62 PAY  34 

    0xb9866174,// 63 PAY  35 

    0x01c29afb,// 64 PAY  36 

    0xd51c1727,// 65 PAY  37 

    0xafdda941,// 66 PAY  38 

    0x4f1e14c6,// 67 PAY  39 

    0x04ab4c20,// 68 PAY  40 

    0x27d2800d,// 69 PAY  41 

    0x3695f786,// 70 PAY  42 

    0xb828182d,// 71 PAY  43 

    0xd89b137b,// 72 PAY  44 

    0x7276cf79,// 73 PAY  45 

    0x2a4c165b,// 74 PAY  46 

    0xd2a94b81,// 75 PAY  47 

    0x9248b350,// 76 PAY  48 

    0xa9811f71,// 77 PAY  49 

    0xb240490a,// 78 PAY  50 

    0x9c977fc5,// 79 PAY  51 

    0x235b5b60,// 80 PAY  52 

    0x9cea6ff0,// 81 PAY  53 

    0xd5142f3c,// 82 PAY  54 

    0x4b79fb41,// 83 PAY  55 

    0x54c94f8d,// 84 PAY  56 

    0x05795462,// 85 PAY  57 

    0x0d3c162c,// 86 PAY  58 

    0xd13d3386,// 87 PAY  59 

    0xc5452200,// 88 PAY  60 

    0xd1df9d68,// 89 PAY  61 

    0xfd9ca032,// 90 PAY  62 

    0xc8461fdd,// 91 PAY  63 

    0xe4e27c42,// 92 PAY  64 

    0x303e6e4e,// 93 PAY  65 

    0x16ab7717,// 94 PAY  66 

    0xe87c65ca,// 95 PAY  67 

    0x51282b33,// 96 PAY  68 

    0x61ddd2b6,// 97 PAY  69 

    0xd9d6a15a,// 98 PAY  70 

    0xf49c0ce2,// 99 PAY  71 

    0x085d19b7,// 100 PAY  72 

    0x44a765bb,// 101 PAY  73 

    0x24320917,// 102 PAY  74 

    0xcd970788,// 103 PAY  75 

    0x1b10903d,// 104 PAY  76 

    0x3f5fbf6d,// 105 PAY  77 

    0xfe0fcde1,// 106 PAY  78 

    0x86b723d2,// 107 PAY  79 

    0x629e1d2c,// 108 PAY  80 

    0x1c6d5080,// 109 PAY  81 

    0x110c7405,// 110 PAY  82 

    0x1ad98761,// 111 PAY  83 

    0xd56fdff1,// 112 PAY  84 

    0x655abb46,// 113 PAY  85 

    0x9f91c76c,// 114 PAY  86 

    0x97f9f765,// 115 PAY  87 

    0xa06773a6,// 116 PAY  88 

    0x5bea295d,// 117 PAY  89 

    0x0db64571,// 118 PAY  90 

/// STA is 1 words. 

/// STA num_pkts       : 35 

/// STA pkt_idx        : 128 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xac 

    0x0200ac23 // 119 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 88 (0x58) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_sha1_pkt48_tmpl[] = {
    0xb8010058,// 1 CCH   1 

/// ECH cache_idx      : 0x07 

/// ECH pdu_tag        : 0x00 

    0x00070000,// 2 ECH   1 

/// SCX is 21 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound save_icv !insert_icv check_icv sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : SHA1 

/// SCX aes_size        : NORMAL_RC4INIT_AES128 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x4 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 8 

/// SCX authctx_size    : 40 

    0x00000015,// 3 SCX   1 

    0x80644814,// 4 SCX   2 

    0x00005482,// 5 SCX   3 

    0xb15743af,// 6 SCX   4 

    0x4a858ebc,// 7 SCX   5 

    0x51def40a,// 8 SCX   6 

    0x5c4b1def,// 9 SCX   7 

    0xa6d5108e,// 10 SCX   8 

    0xf4b68ac4,// 11 SCX   9 

    0x2ea60d10,// 12 SCX  10 

    0x7afed544,// 13 SCX  11 

    0xcc5f565f,// 14 SCX  12 

    0x2f26e66c,// 15 SCX  13 

    0x29af302f,// 16 SCX  14 

    0x3073bc12,// 17 SCX  15 

    0xf38c448f,// 18 SCX  16 

    0xe0f9f081,// 19 SCX  17 

    0xbd635aa9,// 20 SCX  18 

    0x0ff8776c,// 21 SCX  19 

    0xee0c3c99,// 22 SCX  20 

    0xd6b67d1b,// 23 SCX  21 

/// BFD is 3 words. 

/// BFD tot_len        : 144 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 122 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 122 

/// BFD lencrypto      : 16 

/// BFD ofstcrypto     : 56 

/// BFD (ofst+len)cry  : 72 

/// BFD ofstiv         : 36 

/// BFD ofsticv        : 124 

    0x0000007a,// 24 BFD   1 

    0x00380010,// 25 BFD   2 

    0x007c0024,// 26 BFD   3 

/// MFM is 2 words. 

/// MFM vldnibs        : 9 

    0x0900ca3e,// 27 MFM   1 

    0x023f8000,// 28 MFM   2 

/// BDA is 37 words. 

/// BDA size     is 144 (0x90) 

/// BDA id       is 0x267c 

    0x0090267c,// 29 BDA   1 

/// PAY Generic Data size   : 144 byte(s) 

/// PAD Buffer Data Pad size   : 0 byte(s) 

    0x01c134e0,// 30 PAY   1 

    0xf7265413,// 31 PAY   2 

    0xc8a36373,// 32 PAY   3 

    0xedf89652,// 33 PAY   4 

    0x512bb7a1,// 34 PAY   5 

    0x3f8cd0ba,// 35 PAY   6 

    0x224f083f,// 36 PAY   7 

    0x1b04dff4,// 37 PAY   8 

    0x04bf4a9e,// 38 PAY   9 

    0x939f5f43,// 39 PAY  10 

    0x32213c75,// 40 PAY  11 

    0x908b1fac,// 41 PAY  12 

    0x658a86a9,// 42 PAY  13 

    0xeb14debe,// 43 PAY  14 

    0xdc966894,// 44 PAY  15 

    0x3101c720,// 45 PAY  16 

    0xe94a318c,// 46 PAY  17 

    0xeebaefa4,// 47 PAY  18 

    0x3d7b5879,// 48 PAY  19 

    0x6bb17867,// 49 PAY  20 

    0x703e7c9d,// 50 PAY  21 

    0xaa41049e,// 51 PAY  22 

    0x1416f965,// 52 PAY  23 

    0x19bac94e,// 53 PAY  24 

    0x14a4e576,// 54 PAY  25 

    0xa26509b2,// 55 PAY  26 

    0xf528ceeb,// 56 PAY  27 

    0x74914a3b,// 57 PAY  28 

    0x7b65b6d6,// 58 PAY  29 

    0xd46c7e1d,// 59 PAY  30 

    0xc3df2553,// 60 PAY  31 

    0xd88d9f23,// 61 PAY  32 

    0x37b25078,// 62 PAY  33 

    0x86a4695b,// 63 PAY  34 

    0xd12e34ea,// 64 PAY  35 

    0xde3e40d7,// 65 PAY  36 

/// STA is 1 words. 

/// STA num_pkts       : 144 

/// STA pkt_idx        : 108 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x1c 

    0x01b11c90 // 66 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 88 (0x58) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_sha1_pkt49_tmpl[] = {
    0xb8010058,// 1 CCH   1 

/// ECH cache_idx      : 0x08 

/// ECH pdu_tag        : 0x00 

    0x00080000,// 2 ECH   1 

/// SCX is 21 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound !save_icv insert_icv !check_icv sctx_iv  

/// SCX exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : SHA1 

/// SCX aes_size        : NORMAL_RC4INIT_AES128 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x4 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 8 

/// SCX authctx_size    : 40 

    0x08000015,// 3 SCX   1 

    0x806448d6,// 4 SCX   2 

    0x000024c2,// 5 SCX   3 

    0x6ff5201a,// 6 SCX   4 

    0x582f24e3,// 7 SCX   5 

    0x07de19df,// 8 SCX   6 

    0xe58ddec5,// 9 SCX   7 

    0x8101776b,// 10 SCX   8 

    0x7e0c8986,// 11 SCX   9 

    0xd991c238,// 12 SCX  10 

    0xe3406364,// 13 SCX  11 

    0xe450215c,// 14 SCX  12 

    0x2de52ffe,// 15 SCX  13 

    0xa21d2a33,// 16 SCX  14 

    0x4870b6d3,// 17 SCX  15 

    0x0067d754,// 18 SCX  16 

    0x7fbdbaaf,// 19 SCX  17 

    0x791502bf,// 20 SCX  18 

    0xd1a2b21b,// 21 SCX  19 

    0x829ae20d,// 22 SCX  20 

    0xf53ecc5c,// 23 SCX  21 

/// BFD is 3 words. 

/// BFD tot_len        : 490 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 272 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 272 

/// BFD lencrypto      : 32 

/// BFD ofstcrypto     : 48 

/// BFD (ofst+len)cry  : 80 

/// BFD ofstiv         : 4 

/// BFD ofsticv        : 356 

    0x00000110,// 24 BFD   1 

    0x00300020,// 25 BFD   2 

    0x01640004,// 26 BFD   3 

/// MFM is 7 words. 

/// MFM vldnibs        : 2d 

    0x2d00bcc1,// 27 MFM   1 

    0x52de66eb,// 28 MFM   2 

    0x20228f90,// 29 MFM   3 

    0x6983b937,// 30 MFM   4 

    0x4580ca6b,// 31 MFM   5 

    0xe0fb8003,// 32 MFM   6 

    0x10000000,// 33 MFM   7 

/// BDA is 124 words. 

/// BDA size     is 490 (0x1ea) 

/// BDA id       is 0x5630 

    0x01ea5630,// 34 BDA   1 

/// PAY Generic Data size   : 490 byte(s) 

/// PAD Buffer Data Pad size   : 2 byte(s) 

    0x25ff283d,// 35 PAY   1 

    0x53db243e,// 36 PAY   2 

    0x679f0626,// 37 PAY   3 

    0x7c4ccc3f,// 38 PAY   4 

    0xc8326ab1,// 39 PAY   5 

    0x9b209bea,// 40 PAY   6 

    0x7b7bec46,// 41 PAY   7 

    0x3d3227de,// 42 PAY   8 

    0x10ef2162,// 43 PAY   9 

    0x94d02d44,// 44 PAY  10 

    0xc85d4cc0,// 45 PAY  11 

    0xbe0e11e5,// 46 PAY  12 

    0xfd72861b,// 47 PAY  13 

    0x1ad80b14,// 48 PAY  14 

    0x51fbe947,// 49 PAY  15 

    0xd2e2e609,// 50 PAY  16 

    0x9b6e618d,// 51 PAY  17 

    0xfcdf7172,// 52 PAY  18 

    0x204b2240,// 53 PAY  19 

    0x10395846,// 54 PAY  20 

    0x669e96c6,// 55 PAY  21 

    0x2c883f79,// 56 PAY  22 

    0xfca1d23c,// 57 PAY  23 

    0x3d817cbf,// 58 PAY  24 

    0xde1c845d,// 59 PAY  25 

    0x54becce8,// 60 PAY  26 

    0xd0db5fbf,// 61 PAY  27 

    0x8e5f63e8,// 62 PAY  28 

    0x06e49eb5,// 63 PAY  29 

    0x5e2cc574,// 64 PAY  30 

    0x1310581d,// 65 PAY  31 

    0x3e3849b4,// 66 PAY  32 

    0x023af647,// 67 PAY  33 

    0xc13c0966,// 68 PAY  34 

    0x5316037a,// 69 PAY  35 

    0x93e149ad,// 70 PAY  36 

    0x74bad2f0,// 71 PAY  37 

    0x89962fe0,// 72 PAY  38 

    0xad914cf7,// 73 PAY  39 

    0x3c073bf0,// 74 PAY  40 

    0xfa9780d6,// 75 PAY  41 

    0x760bf921,// 76 PAY  42 

    0xe9fac2a4,// 77 PAY  43 

    0xe26a0447,// 78 PAY  44 

    0x1acbd9d2,// 79 PAY  45 

    0xf0cd80ae,// 80 PAY  46 

    0xa640a73a,// 81 PAY  47 

    0x80e3c7c2,// 82 PAY  48 

    0xe3c75437,// 83 PAY  49 

    0xe010eb87,// 84 PAY  50 

    0xa192e6c8,// 85 PAY  51 

    0xf8c5641d,// 86 PAY  52 

    0x2f7ec1e6,// 87 PAY  53 

    0x19cd58dd,// 88 PAY  54 

    0x436c4eca,// 89 PAY  55 

    0xc045443a,// 90 PAY  56 

    0xb87e442e,// 91 PAY  57 

    0x698b7c0d,// 92 PAY  58 

    0x295be789,// 93 PAY  59 

    0xc0b30594,// 94 PAY  60 

    0xee20af2f,// 95 PAY  61 

    0xe2de8d91,// 96 PAY  62 

    0xdfea6f91,// 97 PAY  63 

    0xd3bed7c7,// 98 PAY  64 

    0xdf438663,// 99 PAY  65 

    0x52f167b4,// 100 PAY  66 

    0x41a40bee,// 101 PAY  67 

    0xd0fa1880,// 102 PAY  68 

    0x6012a883,// 103 PAY  69 

    0x6d72b18e,// 104 PAY  70 

    0xa763a1cc,// 105 PAY  71 

    0x8c44956b,// 106 PAY  72 

    0x7b7f61cf,// 107 PAY  73 

    0xa26e55d1,// 108 PAY  74 

    0x17a670e2,// 109 PAY  75 

    0x4eb88f52,// 110 PAY  76 

    0xe7c64b51,// 111 PAY  77 

    0x578a741c,// 112 PAY  78 

    0x2743e2ab,// 113 PAY  79 

    0x2c4a1e7c,// 114 PAY  80 

    0x7bbb9756,// 115 PAY  81 

    0x36e6157e,// 116 PAY  82 

    0xf952601b,// 117 PAY  83 

    0x8b3d3d21,// 118 PAY  84 

    0x52dbb36e,// 119 PAY  85 

    0x799a15e2,// 120 PAY  86 

    0xcfa1924d,// 121 PAY  87 

    0x24bc38f4,// 122 PAY  88 

    0x21e1bda5,// 123 PAY  89 

    0x9c44afaa,// 124 PAY  90 

    0x69490af1,// 125 PAY  91 

    0x3bd7cd72,// 126 PAY  92 

    0x6ed12cc5,// 127 PAY  93 

    0x44247bd9,// 128 PAY  94 

    0xf802046f,// 129 PAY  95 

    0xb13e7f4e,// 130 PAY  96 

    0x3a04b4ff,// 131 PAY  97 

    0x1aaec2ad,// 132 PAY  98 

    0x58019a65,// 133 PAY  99 

    0x0247da2f,// 134 PAY 100 

    0x72be2f09,// 135 PAY 101 

    0x4ae88846,// 136 PAY 102 

    0x79b1add6,// 137 PAY 103 

    0x02e3d4e7,// 138 PAY 104 

    0xf2fad9c2,// 139 PAY 105 

    0x54e694fa,// 140 PAY 106 

    0x0a9718f5,// 141 PAY 107 

    0xf1fa0882,// 142 PAY 108 

    0x05e728b4,// 143 PAY 109 

    0xa5c2fa62,// 144 PAY 110 

    0x77e23a78,// 145 PAY 111 

    0x015fd9c1,// 146 PAY 112 

    0xd3fec01d,// 147 PAY 113 

    0x6561ac96,// 148 PAY 114 

    0x8bbd3b71,// 149 PAY 115 

    0x24bc3ca6,// 150 PAY 116 

    0x3b1cde94,// 151 PAY 117 

    0xa21e6cc1,// 152 PAY 118 

    0xafaa9f83,// 153 PAY 119 

    0xef848705,// 154 PAY 120 

    0x18dad722,// 155 PAY 121 

    0xeabdcb82,// 156 PAY 122 

    0xea3e0000,// 157 PAY 123 

/// STA is 1 words. 

/// STA num_pkts       : 101 

/// STA pkt_idx        : 196 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xce 

    0x0311ce65 // 158 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 80 (0x50) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_sha1_pkt50_tmpl[] = {
    0xb8010050,// 1 CCH   1 

/// ECH cache_idx      : 0x0c 

/// ECH pdu_tag        : 0x00 

    0x000c0000,// 2 ECH   1 

/// SCX is 19 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound save_icv !insert_icv check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : SHA1 

/// SCX aes_size        : AES256 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x2 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 40 

    0x08000013,// 3 SCX   1 

    0x806248d8,// 4 SCX   2 

    0x00005200,// 5 SCX   3 

    0xe49e4c23,// 6 SCX   4 

    0x80ce95d7,// 7 SCX   5 

    0x678eb8fb,// 8 SCX   6 

    0xd26ec40d,// 9 SCX   7 

    0x6fd75bb2,// 10 SCX   8 

    0x3cf4e7c7,// 11 SCX   9 

    0xd87f753d,// 12 SCX  10 

    0xd1f2cd67,// 13 SCX  11 

    0x29bd030f,// 14 SCX  12 

    0x25b1063a,// 15 SCX  13 

    0x286ce33a,// 16 SCX  14 

    0x52584560,// 17 SCX  15 

    0xa94991a7,// 18 SCX  16 

    0x88082085,// 19 SCX  17 

    0x6c2d9cd8,// 20 SCX  18 

    0xb7b46984,// 21 SCX  19 

/// BFD is 3 words. 

/// BFD tot_len        : 652 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 169 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 169 

/// BFD lencrypto      : 128 

/// BFD ofstcrypto     : 16 

/// BFD (ofst+len)cry  : 144 

/// BFD ofstiv         : 8 

/// BFD ofsticv        : 584 

    0x000000a9,// 22 BFD   1 

    0x00100080,// 23 BFD   2 

    0x02480008,// 24 BFD   3 

/// MFM is 1 words. 

/// MFM vldnibs        : 3 

    0x03009eb0,// 25 MFM   1 

/// BDA is 164 words. 

/// BDA size     is 652 (0x28c) 

/// BDA id       is 0x3ee5 

    0x028c3ee5,// 26 BDA   1 

/// PAY Generic Data size   : 652 byte(s) 

/// PAD Buffer Data Pad size   : 0 byte(s) 

    0x85200a74,// 27 PAY   1 

    0x5ccff99c,// 28 PAY   2 

    0x8dc2674f,// 29 PAY   3 

    0xf198d599,// 30 PAY   4 

    0x3b7ba2cf,// 31 PAY   5 

    0xc3358270,// 32 PAY   6 

    0x93817f37,// 33 PAY   7 

    0x542364c9,// 34 PAY   8 

    0x7b761722,// 35 PAY   9 

    0x6785051b,// 36 PAY  10 

    0x07c29b0f,// 37 PAY  11 

    0xdcb7ab30,// 38 PAY  12 

    0xeaed094b,// 39 PAY  13 

    0xed06f391,// 40 PAY  14 

    0xf925b2bd,// 41 PAY  15 

    0xbab90d7b,// 42 PAY  16 

    0x5e34efc9,// 43 PAY  17 

    0x3f04c079,// 44 PAY  18 

    0x244c9a95,// 45 PAY  19 

    0xa648b274,// 46 PAY  20 

    0xe41c6ac0,// 47 PAY  21 

    0x23451ba4,// 48 PAY  22 

    0xfc292a75,// 49 PAY  23 

    0x0479432b,// 50 PAY  24 

    0x991f54a2,// 51 PAY  25 

    0x31f60573,// 52 PAY  26 

    0xcaa51754,// 53 PAY  27 

    0x100dc35a,// 54 PAY  28 

    0x27de8ecd,// 55 PAY  29 

    0xcfdd924d,// 56 PAY  30 

    0x248ecae7,// 57 PAY  31 

    0x3a9e8c7a,// 58 PAY  32 

    0x65f6011b,// 59 PAY  33 

    0xf1028b3c,// 60 PAY  34 

    0x54bbc55d,// 61 PAY  35 

    0x93f34cd1,// 62 PAY  36 

    0xd0382aec,// 63 PAY  37 

    0xb1b8c849,// 64 PAY  38 

    0x1a079cd2,// 65 PAY  39 

    0x41cd4c3f,// 66 PAY  40 

    0xd1b9b46b,// 67 PAY  41 

    0x119dd9cc,// 68 PAY  42 

    0x987f7da7,// 69 PAY  43 

    0x0dcb1ba2,// 70 PAY  44 

    0xec9d09a0,// 71 PAY  45 

    0x13f9542a,// 72 PAY  46 

    0xbb8a2142,// 73 PAY  47 

    0x41fd4869,// 74 PAY  48 

    0x3cd80b50,// 75 PAY  49 

    0x4da2d21b,// 76 PAY  50 

    0x4ec0d0d5,// 77 PAY  51 

    0x0ae0ac18,// 78 PAY  52 

    0x3eba54c0,// 79 PAY  53 

    0x14fc3c6b,// 80 PAY  54 

    0x374a13fd,// 81 PAY  55 

    0x6b329a38,// 82 PAY  56 

    0x635c095a,// 83 PAY  57 

    0x7532017b,// 84 PAY  58 

    0x595d3b46,// 85 PAY  59 

    0x91ea619a,// 86 PAY  60 

    0x283b2d84,// 87 PAY  61 

    0x9fd4c7e0,// 88 PAY  62 

    0x1521d102,// 89 PAY  63 

    0x39d93160,// 90 PAY  64 

    0x419a0297,// 91 PAY  65 

    0xddecb87b,// 92 PAY  66 

    0xa18340a1,// 93 PAY  67 

    0x465c27ad,// 94 PAY  68 

    0x28df2ab2,// 95 PAY  69 

    0x7ecca408,// 96 PAY  70 

    0x956f428c,// 97 PAY  71 

    0xd883479e,// 98 PAY  72 

    0x71753589,// 99 PAY  73 

    0x9e3d3776,// 100 PAY  74 

    0x8a0e7cb0,// 101 PAY  75 

    0xe53b12cc,// 102 PAY  76 

    0x6ff5e1bb,// 103 PAY  77 

    0xd635bd88,// 104 PAY  78 

    0xde364f54,// 105 PAY  79 

    0xd585270d,// 106 PAY  80 

    0x4dc70fb2,// 107 PAY  81 

    0x95dd266e,// 108 PAY  82 

    0xf1abb4ee,// 109 PAY  83 

    0xd800caad,// 110 PAY  84 

    0xb61a45be,// 111 PAY  85 

    0x522599a7,// 112 PAY  86 

    0x3398196e,// 113 PAY  87 

    0xd03afd7f,// 114 PAY  88 

    0x23b6589a,// 115 PAY  89 

    0x9b376c43,// 116 PAY  90 

    0x0a784306,// 117 PAY  91 

    0x1ea97b73,// 118 PAY  92 

    0x9cb29699,// 119 PAY  93 

    0x2abb6500,// 120 PAY  94 

    0x2627ef20,// 121 PAY  95 

    0x39f97703,// 122 PAY  96 

    0xfbee7fcf,// 123 PAY  97 

    0xa321978d,// 124 PAY  98 

    0x82224399,// 125 PAY  99 

    0xd6776453,// 126 PAY 100 

    0x9cf96546,// 127 PAY 101 

    0x34cb3f38,// 128 PAY 102 

    0xce2595c8,// 129 PAY 103 

    0x77a55970,// 130 PAY 104 

    0x3ce9f722,// 131 PAY 105 

    0x668fbab2,// 132 PAY 106 

    0x3149e77a,// 133 PAY 107 

    0x46d4c4c1,// 134 PAY 108 

    0x34415e85,// 135 PAY 109 

    0x064805df,// 136 PAY 110 

    0x9b12b109,// 137 PAY 111 

    0x823c33de,// 138 PAY 112 

    0xf5864af8,// 139 PAY 113 

    0xf8e4a4fa,// 140 PAY 114 

    0xbcc1a968,// 141 PAY 115 

    0x949c8b8f,// 142 PAY 116 

    0x84438a6b,// 143 PAY 117 

    0x4933a95d,// 144 PAY 118 

    0x84f735ab,// 145 PAY 119 

    0xfb52e4ed,// 146 PAY 120 

    0x1f03ecb9,// 147 PAY 121 

    0xdad4ce1d,// 148 PAY 122 

    0xb557f6ff,// 149 PAY 123 

    0xf7d3dbf8,// 150 PAY 124 

    0xdc80c6c7,// 151 PAY 125 

    0x883fe9e5,// 152 PAY 126 

    0xea181420,// 153 PAY 127 

    0x5f280d6e,// 154 PAY 128 

    0x806c29f4,// 155 PAY 129 

    0xd6716c97,// 156 PAY 130 

    0xd8b9c904,// 157 PAY 131 

    0x3cfdb2c6,// 158 PAY 132 

    0x3235d882,// 159 PAY 133 

    0xf1fb4399,// 160 PAY 134 

    0x54377589,// 161 PAY 135 

    0xfb0a0c29,// 162 PAY 136 

    0x9c47a9a9,// 163 PAY 137 

    0x88015daa,// 164 PAY 138 

    0xa5653269,// 165 PAY 139 

    0x121fc04b,// 166 PAY 140 

    0x6afc289e,// 167 PAY 141 

    0x327390fd,// 168 PAY 142 

    0x715ecb16,// 169 PAY 143 

    0x247d789c,// 170 PAY 144 

    0xb76915d8,// 171 PAY 145 

    0x3b0939d9,// 172 PAY 146 

    0x4eb33d45,// 173 PAY 147 

    0x983f21e8,// 174 PAY 148 

    0xc49fef2d,// 175 PAY 149 

    0x6b358a94,// 176 PAY 150 

    0xf163f3c4,// 177 PAY 151 

    0xf1b71cfa,// 178 PAY 152 

    0x812f1c7c,// 179 PAY 153 

    0xaafbd9c6,// 180 PAY 154 

    0x0e22c53d,// 181 PAY 155 

    0x552635a1,// 182 PAY 156 

    0x2ebd98d6,// 183 PAY 157 

    0xa0dc7c26,// 184 PAY 158 

    0xad3af7a3,// 185 PAY 159 

    0x1d398ab0,// 186 PAY 160 

    0x7f0aa8d3,// 187 PAY 161 

    0x8cb2d444,// 188 PAY 162 

    0x56e61478,// 189 PAY 163 

/// STA is 1 words. 

/// STA num_pkts       : 196 

/// STA pkt_idx        : 51 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x52 

    0x00cc52c4 // 190 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 80 (0x50) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_sha1_pkt51_tmpl[] = {
    0xb8010050,// 1 CCH   1 

/// ECH cache_idx      : 0x0d 

/// ECH pdu_tag        : 0x00 

    0x000d0000,// 2 ECH   1 

/// SCX is 19 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound save_icv insert_icv !check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : SHA1 

/// SCX aes_size        : RC4UPDT_AES192 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x1 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 40 

    0x00000013,// 3 SCX   1 

    0x806148a8,// 4 SCX   2 

    0x00006100,// 5 SCX   3 

    0x38799bfb,// 6 SCX   4 

    0x3653cf33,// 7 SCX   5 

    0x09d0dcac,// 8 SCX   6 

    0x2efc2db1,// 9 SCX   7 

    0xef0adf8e,// 10 SCX   8 

    0x5a00ed55,// 11 SCX   9 

    0x6acd71d5,// 12 SCX  10 

    0xf2969c7f,// 13 SCX  11 

    0xafadf116,// 14 SCX  12 

    0xdfd37314,// 15 SCX  13 

    0xdf60c655,// 16 SCX  14 

    0xff63bab3,// 17 SCX  15 

    0xc782c6ab,// 18 SCX  16 

    0x9ad1b9ab,// 19 SCX  17 

    0xa7007224,// 20 SCX  18 

    0x94871416,// 21 SCX  19 

/// BFD is 3 words. 

/// BFD tot_len        : 1634 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 1486 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 1486 

/// BFD lencrypto      : 304 

/// BFD ofstcrypto     : 1132 

/// BFD (ofst+len)cry  : 1436 

/// BFD ofstiv         : 928 

/// BFD ofsticv        : 1536 

    0x000005ce,// 22 BFD   1 

    0x046c0130,// 23 BFD   2 

    0x060003a0,// 24 BFD   3 

/// MFM is 5 words. 

/// MFM vldnibs        : 21 

    0x21008a5c,// 25 MFM   1 

    0x206c13f2,// 26 MFM   2 

    0xcc7b04d4,// 27 MFM   3 

    0x850abb65,// 28 MFM   4 

    0x68d60000,// 29 MFM   5 

/// BDA is 410 words. 

/// BDA size     is 1634 (0x662) 

/// BDA id       is 0x30ad 

    0x066230ad,// 30 BDA   1 

/// PAY Generic Data size   : 1634 byte(s) 

/// PAD Buffer Data Pad size   : 2 byte(s) 

    0x9ff1b4e4,// 31 PAY   1 

    0x91a170a4,// 32 PAY   2 

    0x84d6a1bf,// 33 PAY   3 

    0xb8e9f1ef,// 34 PAY   4 

    0xe45ed7e9,// 35 PAY   5 

    0x6606e51c,// 36 PAY   6 

    0x2bcb8077,// 37 PAY   7 

    0x299da68b,// 38 PAY   8 

    0x955f2865,// 39 PAY   9 

    0x9bca2174,// 40 PAY  10 

    0x0af9fc62,// 41 PAY  11 

    0x4df3cbb9,// 42 PAY  12 

    0xf4e3cdbb,// 43 PAY  13 

    0xdbb2c801,// 44 PAY  14 

    0x66c7a905,// 45 PAY  15 

    0xfc38196e,// 46 PAY  16 

    0xe26c606c,// 47 PAY  17 

    0x0fe29136,// 48 PAY  18 

    0xd618ced3,// 49 PAY  19 

    0x0cb319be,// 50 PAY  20 

    0xabe9b485,// 51 PAY  21 

    0x9725638b,// 52 PAY  22 

    0x8176ba21,// 53 PAY  23 

    0xbb0df0ea,// 54 PAY  24 

    0x14152942,// 55 PAY  25 

    0xf7284a3e,// 56 PAY  26 

    0xbcf7fde0,// 57 PAY  27 

    0x0bcbe230,// 58 PAY  28 

    0x2aea4b46,// 59 PAY  29 

    0x68000bc1,// 60 PAY  30 

    0xbbdad3a0,// 61 PAY  31 

    0x1763a417,// 62 PAY  32 

    0xcb745f45,// 63 PAY  33 

    0x99fefeca,// 64 PAY  34 

    0x472bc00d,// 65 PAY  35 

    0xf09fd49a,// 66 PAY  36 

    0x20e16cba,// 67 PAY  37 

    0x5b95e138,// 68 PAY  38 

    0xbb873353,// 69 PAY  39 

    0x11f61307,// 70 PAY  40 

    0x23b45e18,// 71 PAY  41 

    0x14788db2,// 72 PAY  42 

    0xec8525b0,// 73 PAY  43 

    0x759549c2,// 74 PAY  44 

    0xf6a0d84e,// 75 PAY  45 

    0x083d3e26,// 76 PAY  46 

    0x91916075,// 77 PAY  47 

    0x0811d253,// 78 PAY  48 

    0xb9c83f74,// 79 PAY  49 

    0x2b1718e3,// 80 PAY  50 

    0x8bef8332,// 81 PAY  51 

    0x87fe1f68,// 82 PAY  52 

    0x1270bf99,// 83 PAY  53 

    0x4d5a1afc,// 84 PAY  54 

    0x258e2548,// 85 PAY  55 

    0xba298a63,// 86 PAY  56 

    0x374049a5,// 87 PAY  57 

    0x29e83c38,// 88 PAY  58 

    0x1b1d055f,// 89 PAY  59 

    0xe36c0d8f,// 90 PAY  60 

    0x8691fb0b,// 91 PAY  61 

    0x392e2a13,// 92 PAY  62 

    0x6b45a1ec,// 93 PAY  63 

    0x65e1a6f5,// 94 PAY  64 

    0x87bce457,// 95 PAY  65 

    0x215e5690,// 96 PAY  66 

    0xe577a67d,// 97 PAY  67 

    0x53e58b9e,// 98 PAY  68 

    0x44ea3841,// 99 PAY  69 

    0x63ab41d3,// 100 PAY  70 

    0x9507feb1,// 101 PAY  71 

    0x67b5451e,// 102 PAY  72 

    0xb7822f08,// 103 PAY  73 

    0x61328662,// 104 PAY  74 

    0xdbb3e298,// 105 PAY  75 

    0x95f31b5b,// 106 PAY  76 

    0xff0f6a32,// 107 PAY  77 

    0x37822ef6,// 108 PAY  78 

    0xad8234f9,// 109 PAY  79 

    0x390c0e2e,// 110 PAY  80 

    0x5929c70b,// 111 PAY  81 

    0x132c2615,// 112 PAY  82 

    0xfa597657,// 113 PAY  83 

    0x52610ad2,// 114 PAY  84 

    0xcd57feb7,// 115 PAY  85 

    0x38e330e3,// 116 PAY  86 

    0xf1c510b0,// 117 PAY  87 

    0x9b8c5369,// 118 PAY  88 

    0x89f0c242,// 119 PAY  89 

    0xed284195,// 120 PAY  90 

    0x13d7258f,// 121 PAY  91 

    0x079ebb70,// 122 PAY  92 

    0xc18484e3,// 123 PAY  93 

    0xa4f221cc,// 124 PAY  94 

    0x7b35fddf,// 125 PAY  95 

    0xa4be44f2,// 126 PAY  96 

    0xe2ef8bd0,// 127 PAY  97 

    0x1a7da59f,// 128 PAY  98 

    0x86305527,// 129 PAY  99 

    0x974d79e3,// 130 PAY 100 

    0x9d03baad,// 131 PAY 101 

    0xd084243e,// 132 PAY 102 

    0xb7423594,// 133 PAY 103 

    0x931db9eb,// 134 PAY 104 

    0xe1fb9c51,// 135 PAY 105 

    0x564a334f,// 136 PAY 106 

    0x1e8f109a,// 137 PAY 107 

    0xdb67292c,// 138 PAY 108 

    0x1855a04d,// 139 PAY 109 

    0xd16a2fc0,// 140 PAY 110 

    0xcf4c0164,// 141 PAY 111 

    0x02f9522d,// 142 PAY 112 

    0x3406262b,// 143 PAY 113 

    0xe55ce91d,// 144 PAY 114 

    0x5fc87167,// 145 PAY 115 

    0x26291a35,// 146 PAY 116 

    0xd575dbf2,// 147 PAY 117 

    0x1c329e9e,// 148 PAY 118 

    0xef0a6497,// 149 PAY 119 

    0xad4b69a1,// 150 PAY 120 

    0xb98fadf5,// 151 PAY 121 

    0xdf7cbf5d,// 152 PAY 122 

    0xb329b88a,// 153 PAY 123 

    0x747a86b8,// 154 PAY 124 

    0x9bec9c8a,// 155 PAY 125 

    0x8bb98cc1,// 156 PAY 126 

    0x25cfff29,// 157 PAY 127 

    0x4a81367a,// 158 PAY 128 

    0xcdc0888b,// 159 PAY 129 

    0x9661e915,// 160 PAY 130 

    0x6417a240,// 161 PAY 131 

    0xd0cd7c81,// 162 PAY 132 

    0x89e0fbb1,// 163 PAY 133 

    0x899ef9a5,// 164 PAY 134 

    0x932e72e7,// 165 PAY 135 

    0x752aff25,// 166 PAY 136 

    0xc40b05a6,// 167 PAY 137 

    0x3ea3911b,// 168 PAY 138 

    0x3c79a093,// 169 PAY 139 

    0x2e372586,// 170 PAY 140 

    0x85bf7037,// 171 PAY 141 

    0x31ebad29,// 172 PAY 142 

    0x36c00d84,// 173 PAY 143 

    0xb0093cc8,// 174 PAY 144 

    0xb1bc3711,// 175 PAY 145 

    0x0f6eab4d,// 176 PAY 146 

    0x41288859,// 177 PAY 147 

    0x75b42f1c,// 178 PAY 148 

    0xdee0171a,// 179 PAY 149 

    0x5dcb442b,// 180 PAY 150 

    0xd76c9c49,// 181 PAY 151 

    0x5bdf760b,// 182 PAY 152 

    0x149227ae,// 183 PAY 153 

    0x77aa3688,// 184 PAY 154 

    0x2c013112,// 185 PAY 155 

    0x6a121ca7,// 186 PAY 156 

    0x0b694e63,// 187 PAY 157 

    0x01bca2f6,// 188 PAY 158 

    0xf9a14f2e,// 189 PAY 159 

    0x0ab08b1b,// 190 PAY 160 

    0x641bb801,// 191 PAY 161 

    0xfbc37ab3,// 192 PAY 162 

    0x3d3c7176,// 193 PAY 163 

    0x6d7078ce,// 194 PAY 164 

    0x209f7214,// 195 PAY 165 

    0x7a4422d1,// 196 PAY 166 

    0xb39622c2,// 197 PAY 167 

    0x9977427d,// 198 PAY 168 

    0xeaeaea4f,// 199 PAY 169 

    0xbdcad0f2,// 200 PAY 170 

    0x4f8dd25f,// 201 PAY 171 

    0x573eda24,// 202 PAY 172 

    0xc41e4533,// 203 PAY 173 

    0x43fdd143,// 204 PAY 174 

    0x21607274,// 205 PAY 175 

    0x73ffa202,// 206 PAY 176 

    0xf778f539,// 207 PAY 177 

    0x668b0812,// 208 PAY 178 

    0x9c82de42,// 209 PAY 179 

    0x9d2373d9,// 210 PAY 180 

    0xb2a84d30,// 211 PAY 181 

    0xd3147d3b,// 212 PAY 182 

    0x4fbba408,// 213 PAY 183 

    0xdf8703d4,// 214 PAY 184 

    0x1f69ffe8,// 215 PAY 185 

    0x51f8f963,// 216 PAY 186 

    0x24a3a610,// 217 PAY 187 

    0xf4a04bd3,// 218 PAY 188 

    0x62e9323e,// 219 PAY 189 

    0x701a4c2e,// 220 PAY 190 

    0x054279bd,// 221 PAY 191 

    0xe66965fe,// 222 PAY 192 

    0x189f9210,// 223 PAY 193 

    0x374f3ed3,// 224 PAY 194 

    0x7c0295e8,// 225 PAY 195 

    0xcde467b2,// 226 PAY 196 

    0xf16f0b5c,// 227 PAY 197 

    0x472bbd75,// 228 PAY 198 

    0xdab4191f,// 229 PAY 199 

    0x6be4db4c,// 230 PAY 200 

    0x4d435ece,// 231 PAY 201 

    0x797b2acf,// 232 PAY 202 

    0x0835b640,// 233 PAY 203 

    0x8b4db065,// 234 PAY 204 

    0x476bc0ca,// 235 PAY 205 

    0x9617d4b2,// 236 PAY 206 

    0xfdf48997,// 237 PAY 207 

    0x4b4e709f,// 238 PAY 208 

    0x9871f6e5,// 239 PAY 209 

    0x30fcf22b,// 240 PAY 210 

    0x6d3af871,// 241 PAY 211 

    0x615d533e,// 242 PAY 212 

    0xbddce53d,// 243 PAY 213 

    0xb1272f98,// 244 PAY 214 

    0x0e882ace,// 245 PAY 215 

    0x3e0a55bb,// 246 PAY 216 

    0xb8c9abe7,// 247 PAY 217 

    0x53984a44,// 248 PAY 218 

    0xcaae511c,// 249 PAY 219 

    0xe02ffd27,// 250 PAY 220 

    0x6402d35c,// 251 PAY 221 

    0x7602f64c,// 252 PAY 222 

    0xac57a976,// 253 PAY 223 

    0xe956d8ce,// 254 PAY 224 

    0xbe5135e6,// 255 PAY 225 

    0xbc8ad9dd,// 256 PAY 226 

    0xecfb904e,// 257 PAY 227 

    0x2771794e,// 258 PAY 228 

    0xeb03e6be,// 259 PAY 229 

    0xbc5caa2d,// 260 PAY 230 

    0xe4b81cc0,// 261 PAY 231 

    0x4315c505,// 262 PAY 232 

    0x354e844a,// 263 PAY 233 

    0xaca03bdd,// 264 PAY 234 

    0xa241af51,// 265 PAY 235 

    0xa8705c2f,// 266 PAY 236 

    0xfecc7bf6,// 267 PAY 237 

    0xfdcda17f,// 268 PAY 238 

    0xe3436005,// 269 PAY 239 

    0x6dda1b71,// 270 PAY 240 

    0x6e3c4a9b,// 271 PAY 241 

    0xf03720ea,// 272 PAY 242 

    0x01712303,// 273 PAY 243 

    0xf2040e37,// 274 PAY 244 

    0x83f20e93,// 275 PAY 245 

    0x66163d04,// 276 PAY 246 

    0xf01d41fe,// 277 PAY 247 

    0x8e08f0c4,// 278 PAY 248 

    0x119f239e,// 279 PAY 249 

    0x2323e75e,// 280 PAY 250 

    0x58fb557d,// 281 PAY 251 

    0x4b75e9a1,// 282 PAY 252 

    0x251a3c9d,// 283 PAY 253 

    0xfee95342,// 284 PAY 254 

    0xa4920104,// 285 PAY 255 

    0xb23a44ac,// 286 PAY 256 

    0x4a07e0aa,// 287 PAY 257 

    0x4f21aff1,// 288 PAY 258 

    0xf5097ef1,// 289 PAY 259 

    0xf19628c8,// 290 PAY 260 

    0x2972a625,// 291 PAY 261 

    0x4e3d8a4a,// 292 PAY 262 

    0xe460280f,// 293 PAY 263 

    0x207f4ca8,// 294 PAY 264 

    0x3b89cc29,// 295 PAY 265 

    0xb95e5d30,// 296 PAY 266 

    0x1794cb84,// 297 PAY 267 

    0xd5499857,// 298 PAY 268 

    0xc52853d1,// 299 PAY 269 

    0x31dd7d83,// 300 PAY 270 

    0xec2fb238,// 301 PAY 271 

    0x5766f302,// 302 PAY 272 

    0xe666da49,// 303 PAY 273 

    0x731dc72e,// 304 PAY 274 

    0x97864f92,// 305 PAY 275 

    0x0ad66e65,// 306 PAY 276 

    0x642591a8,// 307 PAY 277 

    0x527b1a47,// 308 PAY 278 

    0xa25d7607,// 309 PAY 279 

    0x90765585,// 310 PAY 280 

    0x5a23b650,// 311 PAY 281 

    0x730fb71e,// 312 PAY 282 

    0x8d1e96f0,// 313 PAY 283 

    0x22462049,// 314 PAY 284 

    0x7ee0e70e,// 315 PAY 285 

    0x84330b2f,// 316 PAY 286 

    0xf4278585,// 317 PAY 287 

    0xe215f061,// 318 PAY 288 

    0x92300018,// 319 PAY 289 

    0xd50c355a,// 320 PAY 290 

    0xdd65a7e2,// 321 PAY 291 

    0xf92b2efb,// 322 PAY 292 

    0x42c0778d,// 323 PAY 293 

    0xb1cfef39,// 324 PAY 294 

    0xf44062e2,// 325 PAY 295 

    0x08cab430,// 326 PAY 296 

    0xd8a38c0d,// 327 PAY 297 

    0x8e451672,// 328 PAY 298 

    0xfbe04ea2,// 329 PAY 299 

    0xb7431936,// 330 PAY 300 

    0x80e7bfe9,// 331 PAY 301 

    0x33311dfb,// 332 PAY 302 

    0xc339e15e,// 333 PAY 303 

    0xf1709b8b,// 334 PAY 304 

    0xa8cc24ff,// 335 PAY 305 

    0x3bf28ee0,// 336 PAY 306 

    0xa8ec75eb,// 337 PAY 307 

    0x1a418ab6,// 338 PAY 308 

    0x411dd8e6,// 339 PAY 309 

    0xd0435f10,// 340 PAY 310 

    0x9a0c5439,// 341 PAY 311 

    0x2b6bfc99,// 342 PAY 312 

    0x048dba8b,// 343 PAY 313 

    0x5c395228,// 344 PAY 314 

    0x125c8fe6,// 345 PAY 315 

    0x54f323e3,// 346 PAY 316 

    0x389877d5,// 347 PAY 317 

    0x34eaaf52,// 348 PAY 318 

    0x546b9ec2,// 349 PAY 319 

    0xe3873a90,// 350 PAY 320 

    0xc774a0de,// 351 PAY 321 

    0x5620ab2a,// 352 PAY 322 

    0xe4ca767c,// 353 PAY 323 

    0xd6ddd160,// 354 PAY 324 

    0x0a07b25c,// 355 PAY 325 

    0xeeb57104,// 356 PAY 326 

    0xa808ed37,// 357 PAY 327 

    0xd6f3888e,// 358 PAY 328 

    0x13ade69c,// 359 PAY 329 

    0xd7de2b6b,// 360 PAY 330 

    0x5b934b32,// 361 PAY 331 

    0xd1338762,// 362 PAY 332 

    0x1d07ffbe,// 363 PAY 333 

    0x7778825d,// 364 PAY 334 

    0x60008d11,// 365 PAY 335 

    0xbee05004,// 366 PAY 336 

    0xa59747e9,// 367 PAY 337 

    0x7356c074,// 368 PAY 338 

    0xd49c41b7,// 369 PAY 339 

    0xe83dfb2f,// 370 PAY 340 

    0xdddeca03,// 371 PAY 341 

    0xf5f52844,// 372 PAY 342 

    0x448008d5,// 373 PAY 343 

    0x8cf1d7ef,// 374 PAY 344 

    0x1d3f72ca,// 375 PAY 345 

    0x414a4b51,// 376 PAY 346 

    0x14bba5e8,// 377 PAY 347 

    0x39e08f3f,// 378 PAY 348 

    0x26e390ba,// 379 PAY 349 

    0xa1f2d67b,// 380 PAY 350 

    0x86f68e3b,// 381 PAY 351 

    0x4bbfdf16,// 382 PAY 352 

    0xe4a7e436,// 383 PAY 353 

    0xcbb96394,// 384 PAY 354 

    0x6579f17b,// 385 PAY 355 

    0xdec8c293,// 386 PAY 356 

    0xc9c7ce53,// 387 PAY 357 

    0xa8be7b87,// 388 PAY 358 

    0x04c4ab01,// 389 PAY 359 

    0x25b9c039,// 390 PAY 360 

    0x86845ad0,// 391 PAY 361 

    0x1f43f88a,// 392 PAY 362 

    0x5ac83278,// 393 PAY 363 

    0x952ead86,// 394 PAY 364 

    0x2b075d4f,// 395 PAY 365 

    0xb6941df5,// 396 PAY 366 

    0x05487274,// 397 PAY 367 

    0x2e8f9fd3,// 398 PAY 368 

    0x0d52a73d,// 399 PAY 369 

    0xfa95a65b,// 400 PAY 370 

    0x1918d263,// 401 PAY 371 

    0x2d6b7f18,// 402 PAY 372 

    0x67ae3462,// 403 PAY 373 

    0xe0eb6054,// 404 PAY 374 

    0x83277472,// 405 PAY 375 

    0x3f007a4a,// 406 PAY 376 

    0x291b7db1,// 407 PAY 377 

    0x8e3a0d0e,// 408 PAY 378 

    0x18628c15,// 409 PAY 379 

    0xefb77cb6,// 410 PAY 380 

    0xf850f11a,// 411 PAY 381 

    0x494bb110,// 412 PAY 382 

    0x285c1b3b,// 413 PAY 383 

    0x55d23f77,// 414 PAY 384 

    0x3d2d49e2,// 415 PAY 385 

    0x4a418a05,// 416 PAY 386 

    0x1087d879,// 417 PAY 387 

    0x1fd616cc,// 418 PAY 388 

    0x051808fe,// 419 PAY 389 

    0x2cf1699a,// 420 PAY 390 

    0x955c311b,// 421 PAY 391 

    0x67283ff1,// 422 PAY 392 

    0x5c78fe92,// 423 PAY 393 

    0xebeb7074,// 424 PAY 394 

    0x80f49d80,// 425 PAY 395 

    0x370a37ae,// 426 PAY 396 

    0x2b998401,// 427 PAY 397 

    0x0c896628,// 428 PAY 398 

    0x8f7b31de,// 429 PAY 399 

    0xc5b5ab70,// 430 PAY 400 

    0x542d2029,// 431 PAY 401 

    0xd0688117,// 432 PAY 402 

    0x34f7c1fa,// 433 PAY 403 

    0xa08535ca,// 434 PAY 404 

    0x9345e1ff,// 435 PAY 405 

    0xf691a2e4,// 436 PAY 406 

    0xc78df81f,// 437 PAY 407 

    0x4477095e,// 438 PAY 408 

    0x938c0000,// 439 PAY 409 

/// STA is 1 words. 

/// STA num_pkts       : 59 

/// STA pkt_idx        : 20 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xb6 

    0x0050b63b // 440 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 88 (0x58) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_sha1_pkt52_tmpl[] = {
    0xb8010058,// 1 CCH   1 

/// ECH cache_idx      : 0x0d 

/// ECH pdu_tag        : 0x00 

    0x000d0000,// 2 ECH   1 

/// SCX is 21 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound save_icv insert_icv check_icv sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : SHA1 

/// SCX aes_size        : NORMAL_RC4INIT_AES128 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x3 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 8 

/// SCX authctx_size    : 40 

    0x08000015,// 3 SCX   1 

    0x806448db,// 4 SCX   2 

    0x00007382,// 5 SCX   3 

    0xe4be789c,// 6 SCX   4 

    0x275687e3,// 7 SCX   5 

    0x7984b9ac,// 8 SCX   6 

    0x3904a025,// 9 SCX   7 

    0xdea4e1bc,// 10 SCX   8 

    0x033cc09b,// 11 SCX   9 

    0x360d16d8,// 12 SCX  10 

    0x31a6ef26,// 13 SCX  11 

    0x6256c358,// 14 SCX  12 

    0x15aa4d4d,// 15 SCX  13 

    0xa9f562e4,// 16 SCX  14 

    0x63759e2e,// 17 SCX  15 

    0x3418d33d,// 18 SCX  16 

    0x559135ed,// 19 SCX  17 

    0x101b8e7c,// 20 SCX  18 

    0x314d435c,// 21 SCX  19 

    0x06ede13e,// 22 SCX  20 

    0xaadc61ff,// 23 SCX  21 

/// BFD is 3 words. 

/// BFD tot_len        : 1262 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 666 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 666 

/// BFD lencrypto      : 288 

/// BFD ofstcrypto     : 80 

/// BFD (ofst+len)cry  : 368 

/// BFD ofstiv         : 64 

/// BFD ofsticv        : 888 

    0x0000029a,// 24 BFD   1 

    0x00500120,// 25 BFD   2 

    0x03780040,// 26 BFD   3 

/// MFM is 15 words. 

/// MFM vldnibs        : 6e 

    0x6e009fea,// 27 MFM   1 

    0xe7a6d278,// 28 MFM   2 

    0x73dc074a,// 29 MFM   3 

    0x4adc9cbe,// 30 MFM   4 

    0x58f65501,// 31 MFM   5 

    0x31464a17,// 32 MFM   6 

    0x3da3b056,// 33 MFM   7 

    0x2fdf1f8c,// 34 MFM   8 

    0xf4443169,// 35 MFM   9 

    0x6018fc23,// 36 MFM  10 

    0x913735f4,// 37 MFM  11 

    0x962347cb,// 38 MFM  12 

    0x89464570,// 39 MFM  13 

    0xd56d15c3,// 40 MFM  14 

    0x63000000,// 41 MFM  15 

/// BDA is 317 words. 

/// BDA size     is 1262 (0x4ee) 

/// BDA id       is 0xa607 

    0x04eea607,// 42 BDA   1 

/// PAY Generic Data size   : 1262 byte(s) 

/// PAD Buffer Data Pad size   : 2 byte(s) 

    0xf8107fef,// 43 PAY   1 

    0x9a6a0ac2,// 44 PAY   2 

    0x9fe0c207,// 45 PAY   3 

    0xd7b35a65,// 46 PAY   4 

    0xfd6301df,// 47 PAY   5 

    0xc0b32da3,// 48 PAY   6 

    0x60964545,// 49 PAY   7 

    0x1948dbda,// 50 PAY   8 

    0x7b716c47,// 51 PAY   9 

    0x32a3eb97,// 52 PAY  10 

    0x7f0f46f6,// 53 PAY  11 

    0xfb6e53e7,// 54 PAY  12 

    0xeb426bc1,// 55 PAY  13 

    0xde8ae597,// 56 PAY  14 

    0x05531453,// 57 PAY  15 

    0x41f609b8,// 58 PAY  16 

    0x04cea21c,// 59 PAY  17 

    0x19068d00,// 60 PAY  18 

    0xc917ccc7,// 61 PAY  19 

    0x3d291894,// 62 PAY  20 

    0xe2fc758d,// 63 PAY  21 

    0x1e2a4100,// 64 PAY  22 

    0xd3d6a53c,// 65 PAY  23 

    0x36fb53a2,// 66 PAY  24 

    0x0d42502f,// 67 PAY  25 

    0xa0512f82,// 68 PAY  26 

    0x4feb7bb3,// 69 PAY  27 

    0x9fa90dff,// 70 PAY  28 

    0xdf51f77b,// 71 PAY  29 

    0xd41ccbea,// 72 PAY  30 

    0x5d673d80,// 73 PAY  31 

    0xd8260815,// 74 PAY  32 

    0xdddc37de,// 75 PAY  33 

    0xa55f4aef,// 76 PAY  34 

    0x72c760d2,// 77 PAY  35 

    0xaadcbc0d,// 78 PAY  36 

    0x1ef00a50,// 79 PAY  37 

    0x5d747724,// 80 PAY  38 

    0xabdb399b,// 81 PAY  39 

    0xc5cdc12d,// 82 PAY  40 

    0x57448d98,// 83 PAY  41 

    0xd5a798ef,// 84 PAY  42 

    0x1d4a7f11,// 85 PAY  43 

    0x58c2ad81,// 86 PAY  44 

    0xc9b956e1,// 87 PAY  45 

    0xcea2858a,// 88 PAY  46 

    0x7e271922,// 89 PAY  47 

    0xf0a4d925,// 90 PAY  48 

    0x9c03df37,// 91 PAY  49 

    0x030c7469,// 92 PAY  50 

    0xff00e158,// 93 PAY  51 

    0xdc188e77,// 94 PAY  52 

    0x804d757d,// 95 PAY  53 

    0xf73a3573,// 96 PAY  54 

    0xc7511031,// 97 PAY  55 

    0xc9d77c85,// 98 PAY  56 

    0xe60ba43a,// 99 PAY  57 

    0x554ad524,// 100 PAY  58 

    0x3b38177a,// 101 PAY  59 

    0x065c7ad2,// 102 PAY  60 

    0x03c0a6fa,// 103 PAY  61 

    0x15c487ef,// 104 PAY  62 

    0x69f8b3dd,// 105 PAY  63 

    0x4ef2c635,// 106 PAY  64 

    0x937ba312,// 107 PAY  65 

    0xb16714da,// 108 PAY  66 

    0xf1eb922e,// 109 PAY  67 

    0x0463b1d9,// 110 PAY  68 

    0x7bc6e038,// 111 PAY  69 

    0xb18674d9,// 112 PAY  70 

    0x18f15d9f,// 113 PAY  71 

    0xc4380869,// 114 PAY  72 

    0xbac8dcbd,// 115 PAY  73 

    0x8e901485,// 116 PAY  74 

    0x3dbf59dc,// 117 PAY  75 

    0x6c18a451,// 118 PAY  76 

    0xb3aff710,// 119 PAY  77 

    0x82cb2d66,// 120 PAY  78 

    0x2c270c8e,// 121 PAY  79 

    0xd5385eb1,// 122 PAY  80 

    0x193d6635,// 123 PAY  81 

    0x3444c136,// 124 PAY  82 

    0x5d6a318f,// 125 PAY  83 

    0xf35ebf26,// 126 PAY  84 

    0x8d838538,// 127 PAY  85 

    0x0df5cfe1,// 128 PAY  86 

    0xb637a0cb,// 129 PAY  87 

    0xc1d5e92d,// 130 PAY  88 

    0x3c343d45,// 131 PAY  89 

    0x3c1568f7,// 132 PAY  90 

    0xed2ade99,// 133 PAY  91 

    0xbca15f52,// 134 PAY  92 

    0x53781d9e,// 135 PAY  93 

    0xf59f7fe0,// 136 PAY  94 

    0x9042a27b,// 137 PAY  95 

    0xf0e0737f,// 138 PAY  96 

    0x62d6d57f,// 139 PAY  97 

    0x24c6930f,// 140 PAY  98 

    0x726c6bf4,// 141 PAY  99 

    0xc8586970,// 142 PAY 100 

    0xe1992a2c,// 143 PAY 101 

    0x6f31a3cf,// 144 PAY 102 

    0xa9f2831b,// 145 PAY 103 

    0x1c1b8a89,// 146 PAY 104 

    0xd059bf35,// 147 PAY 105 

    0x8b269a02,// 148 PAY 106 

    0xd987e778,// 149 PAY 107 

    0xaf4ae694,// 150 PAY 108 

    0x1db17da6,// 151 PAY 109 

    0xf1c4dc01,// 152 PAY 110 

    0xe581f391,// 153 PAY 111 

    0x7d5a4e26,// 154 PAY 112 

    0x5af036f5,// 155 PAY 113 

    0xede7022b,// 156 PAY 114 

    0x0297c64c,// 157 PAY 115 

    0x1c7d3e76,// 158 PAY 116 

    0x7520d912,// 159 PAY 117 

    0xdd094c07,// 160 PAY 118 

    0xfd01914e,// 161 PAY 119 

    0x6c0e65c2,// 162 PAY 120 

    0x6de7e500,// 163 PAY 121 

    0x16afdfac,// 164 PAY 122 

    0xe428d327,// 165 PAY 123 

    0x76514834,// 166 PAY 124 

    0x15dc13b1,// 167 PAY 125 

    0xba0a1b1f,// 168 PAY 126 

    0xa2b5b1e8,// 169 PAY 127 

    0x452e3a3a,// 170 PAY 128 

    0x20fa34b5,// 171 PAY 129 

    0x67be082e,// 172 PAY 130 

    0x87c530e4,// 173 PAY 131 

    0x7302ec7c,// 174 PAY 132 

    0xbc79ad67,// 175 PAY 133 

    0x7c097852,// 176 PAY 134 

    0xa608a0ca,// 177 PAY 135 

    0xf2543939,// 178 PAY 136 

    0x71e42b03,// 179 PAY 137 

    0xf6b82f2a,// 180 PAY 138 

    0x75651669,// 181 PAY 139 

    0x6dff3192,// 182 PAY 140 

    0xba146e65,// 183 PAY 141 

    0xa7bc81fa,// 184 PAY 142 

    0x999169fe,// 185 PAY 143 

    0xf86d28c9,// 186 PAY 144 

    0xb4de706a,// 187 PAY 145 

    0xbc6fe474,// 188 PAY 146 

    0xf2186d3f,// 189 PAY 147 

    0x184751af,// 190 PAY 148 

    0x87a50325,// 191 PAY 149 

    0x9396527d,// 192 PAY 150 

    0x20384bb7,// 193 PAY 151 

    0x758a955f,// 194 PAY 152 

    0x6f3a0678,// 195 PAY 153 

    0x843c0543,// 196 PAY 154 

    0xb4b4976f,// 197 PAY 155 

    0x1300db5f,// 198 PAY 156 

    0x8adea50e,// 199 PAY 157 

    0x35330ec4,// 200 PAY 158 

    0x252c05f0,// 201 PAY 159 

    0x5e7a3ae7,// 202 PAY 160 

    0x8ed78b73,// 203 PAY 161 

    0x35783b62,// 204 PAY 162 

    0x1532d9a1,// 205 PAY 163 

    0xd621620b,// 206 PAY 164 

    0x3512e33c,// 207 PAY 165 

    0xc31ec95f,// 208 PAY 166 

    0xc58e79a5,// 209 PAY 167 

    0x07d314cc,// 210 PAY 168 

    0xf0a4b6e9,// 211 PAY 169 

    0xd348ef19,// 212 PAY 170 

    0x154c4f45,// 213 PAY 171 

    0x241a08da,// 214 PAY 172 

    0x657c4707,// 215 PAY 173 

    0x7ff48c28,// 216 PAY 174 

    0xb8c1d978,// 217 PAY 175 

    0x1e313802,// 218 PAY 176 

    0x19792c7a,// 219 PAY 177 

    0xc4bf66e0,// 220 PAY 178 

    0x9a63390f,// 221 PAY 179 

    0xfc83d88d,// 222 PAY 180 

    0x7c8a6b21,// 223 PAY 181 

    0x8d0b929e,// 224 PAY 182 

    0xebcaa76c,// 225 PAY 183 

    0x1b9002f4,// 226 PAY 184 

    0xc0c2716b,// 227 PAY 185 

    0x93ed1e7d,// 228 PAY 186 

    0xfb5cece0,// 229 PAY 187 

    0xb855c227,// 230 PAY 188 

    0x1bfade2f,// 231 PAY 189 

    0x588dd5c7,// 232 PAY 190 

    0x14f43e88,// 233 PAY 191 

    0x26a87efc,// 234 PAY 192 

    0x47a768a8,// 235 PAY 193 

    0xb16b2e0b,// 236 PAY 194 

    0x85fd3bf2,// 237 PAY 195 

    0xad86df72,// 238 PAY 196 

    0xb9754d6b,// 239 PAY 197 

    0x2d39465e,// 240 PAY 198 

    0x69031601,// 241 PAY 199 

    0xe780a6fa,// 242 PAY 200 

    0xffb14adb,// 243 PAY 201 

    0x37b73ed4,// 244 PAY 202 

    0x88cdb3a5,// 245 PAY 203 

    0x1105974c,// 246 PAY 204 

    0x71b80376,// 247 PAY 205 

    0x3c2a7f0d,// 248 PAY 206 

    0x0741ff82,// 249 PAY 207 

    0x57bf746e,// 250 PAY 208 

    0x1ae91abf,// 251 PAY 209 

    0xf6d9962b,// 252 PAY 210 

    0xf4530633,// 253 PAY 211 

    0x250aae6b,// 254 PAY 212 

    0x30a43816,// 255 PAY 213 

    0x1e08d9ff,// 256 PAY 214 

    0xb4389376,// 257 PAY 215 

    0xa900c725,// 258 PAY 216 

    0xe902a5d6,// 259 PAY 217 

    0xba044446,// 260 PAY 218 

    0xad8c0ff7,// 261 PAY 219 

    0x2db40df7,// 262 PAY 220 

    0x2171e431,// 263 PAY 221 

    0x7b5fb96a,// 264 PAY 222 

    0x28ae3e62,// 265 PAY 223 

    0xa22d85c7,// 266 PAY 224 

    0xb1f034d9,// 267 PAY 225 

    0x8415e425,// 268 PAY 226 

    0x7347b2c8,// 269 PAY 227 

    0x6440c2f5,// 270 PAY 228 

    0x7ce57946,// 271 PAY 229 

    0xfbe70850,// 272 PAY 230 

    0x9ffb2cee,// 273 PAY 231 

    0xdb660e07,// 274 PAY 232 

    0x7245bd37,// 275 PAY 233 

    0x7da5a31d,// 276 PAY 234 

    0x31d9421d,// 277 PAY 235 

    0xd2adf2fd,// 278 PAY 236 

    0x2ca583e9,// 279 PAY 237 

    0xf21f34fe,// 280 PAY 238 

    0xed6db358,// 281 PAY 239 

    0xc266cfc1,// 282 PAY 240 

    0xa8c9a3ce,// 283 PAY 241 

    0xc9338271,// 284 PAY 242 

    0xf5ac9fec,// 285 PAY 243 

    0x050809b2,// 286 PAY 244 

    0x4ec47e52,// 287 PAY 245 

    0x7a1dcc48,// 288 PAY 246 

    0x23c028e6,// 289 PAY 247 

    0x04fc51d2,// 290 PAY 248 

    0xfaa03c58,// 291 PAY 249 

    0x4b068983,// 292 PAY 250 

    0xfe3b136e,// 293 PAY 251 

    0xd12556fc,// 294 PAY 252 

    0xd3e03137,// 295 PAY 253 

    0x3b658115,// 296 PAY 254 

    0x8e9d16b8,// 297 PAY 255 

    0x04e81e69,// 298 PAY 256 

    0xb0820219,// 299 PAY 257 

    0x396b4fbd,// 300 PAY 258 

    0x6baa3e73,// 301 PAY 259 

    0xafcbfac5,// 302 PAY 260 

    0x232c77f7,// 303 PAY 261 

    0x475cbc19,// 304 PAY 262 

    0xe89df8ee,// 305 PAY 263 

    0x272a6820,// 306 PAY 264 

    0x55c7e681,// 307 PAY 265 

    0x76a2f4d0,// 308 PAY 266 

    0x1bc14e5b,// 309 PAY 267 

    0xfabee65d,// 310 PAY 268 

    0x1d4fd39e,// 311 PAY 269 

    0x1228331a,// 312 PAY 270 

    0xb2cdc026,// 313 PAY 271 

    0xe07e5142,// 314 PAY 272 

    0x1361519c,// 315 PAY 273 

    0x3f572156,// 316 PAY 274 

    0x279afc36,// 317 PAY 275 

    0xc453117a,// 318 PAY 276 

    0x9f7bbdba,// 319 PAY 277 

    0xdc8ad25c,// 320 PAY 278 

    0x7d688183,// 321 PAY 279 

    0xe7660349,// 322 PAY 280 

    0x85434596,// 323 PAY 281 

    0x25c42d3c,// 324 PAY 282 

    0xa0f75c1c,// 325 PAY 283 

    0xb74e8619,// 326 PAY 284 

    0xd470183f,// 327 PAY 285 

    0x44b12bb7,// 328 PAY 286 

    0x1447508d,// 329 PAY 287 

    0x796b05eb,// 330 PAY 288 

    0x898cda80,// 331 PAY 289 

    0x18bc4030,// 332 PAY 290 

    0x69e51d20,// 333 PAY 291 

    0x4d597aea,// 334 PAY 292 

    0x32dfdff0,// 335 PAY 293 

    0x4c9c357f,// 336 PAY 294 

    0x175b8c5f,// 337 PAY 295 

    0x49c4bdec,// 338 PAY 296 

    0x73c12c22,// 339 PAY 297 

    0x87d8afd2,// 340 PAY 298 

    0x0cc37825,// 341 PAY 299 

    0xbcba6d08,// 342 PAY 300 

    0xed4815f2,// 343 PAY 301 

    0xffafc7ba,// 344 PAY 302 

    0x385d04d9,// 345 PAY 303 

    0x6c0bf8a1,// 346 PAY 304 

    0x326c1397,// 347 PAY 305 

    0xdd3ef823,// 348 PAY 306 

    0x964be5e7,// 349 PAY 307 

    0xf1ecda4e,// 350 PAY 308 

    0xf7a59f68,// 351 PAY 309 

    0x2120cd38,// 352 PAY 310 

    0xa8be8b0f,// 353 PAY 311 

    0xd7fe6476,// 354 PAY 312 

    0xc0dd664d,// 355 PAY 313 

    0x8ebcf7ab,// 356 PAY 314 

    0xeafec9d7,// 357 PAY 315 

    0xebd10000,// 358 PAY 316 

/// STA is 1 words. 

/// STA num_pkts       : 163 

/// STA pkt_idx        : 246 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x58 

    0x03d958a3 // 359 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 80 (0x50) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_sha1_pkt53_tmpl[] = {
    0xb8010050,// 1 CCH   1 

/// ECH cache_idx      : 0x04 

/// ECH pdu_tag        : 0x00 

    0x00040000,// 2 ECH   1 

/// SCX is 19 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound !save_icv !insert_icv !check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : SHA1 

/// SCX aes_size        : AES256 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x4 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 40 

    0x08000013,// 3 SCX   1 

    0x8062483a,// 4 SCX   2 

    0x00000400,// 5 SCX   3 

    0xcfc283b0,// 6 SCX   4 

    0xbbd261a5,// 7 SCX   5 

    0x994a1eb3,// 8 SCX   6 

    0xecb95f2f,// 9 SCX   7 

    0x0f9248f0,// 10 SCX   8 

    0xcfc3a4be,// 11 SCX   9 

    0xdec3bf1a,// 12 SCX  10 

    0x2ed529f4,// 13 SCX  11 

    0xe8981b41,// 14 SCX  12 

    0x83500473,// 15 SCX  13 

    0x0aff189d,// 16 SCX  14 

    0xcbfdb85d,// 17 SCX  15 

    0x89841412,// 18 SCX  16 

    0xb7d8143c,// 19 SCX  17 

    0x885f7422,// 20 SCX  18 

    0x11d44376,// 21 SCX  19 

/// BFD is 3 words. 

/// BFD tot_len        : 617 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 327 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 327 

/// BFD lencrypto      : 208 

/// BFD ofstcrypto     : 88 

/// BFD (ofst+len)cry  : 296 

/// BFD ofstiv         : 76 

/// BFD ofsticv        : 484 

    0x00000147,// 22 BFD   1 

    0x005800d0,// 23 BFD   2 

    0x01e4004c,// 24 BFD   3 

/// MFM is 10 words. 

/// MFM vldnibs        : 47 

    0x4700efbe,// 25 MFM   1 

    0x5fb8350f,// 26 MFM   2 

    0xac2602e5,// 27 MFM   3 

    0xc47c28f2,// 28 MFM   4 

    0xb98c0923,// 29 MFM   5 

    0xabcc6a6c,// 30 MFM   6 

    0x0844eeb1,// 31 MFM   7 

    0x1c48dc4e,// 32 MFM   8 

    0xdf3887a0,// 33 MFM   9 

    0x6a400000,// 34 MFM  10 

/// BDA is 156 words. 

/// BDA size     is 617 (0x269) 

/// BDA id       is 0x7e9d 

    0x02697e9d,// 35 BDA   1 

/// PAY Generic Data size   : 617 byte(s) 

/// PAD Buffer Data Pad size   : 3 byte(s) 

    0xf6aa34a8,// 36 PAY   1 

    0xef3686ed,// 37 PAY   2 

    0x33d6a2b8,// 38 PAY   3 

    0x9089857f,// 39 PAY   4 

    0xa08648ca,// 40 PAY   5 

    0xf0ef0ff8,// 41 PAY   6 

    0xb2e961a3,// 42 PAY   7 

    0xd34888e8,// 43 PAY   8 

    0x93f42729,// 44 PAY   9 

    0x65f7250e,// 45 PAY  10 

    0x08ade4aa,// 46 PAY  11 

    0xa4b3e0f0,// 47 PAY  12 

    0xcacb90f9,// 48 PAY  13 

    0x08edeaa2,// 49 PAY  14 

    0x9bd78fa9,// 50 PAY  15 

    0x927758d0,// 51 PAY  16 

    0xd116024a,// 52 PAY  17 

    0x96bb5194,// 53 PAY  18 

    0x995db6ab,// 54 PAY  19 

    0x4828aad9,// 55 PAY  20 

    0x1a2ed6df,// 56 PAY  21 

    0x1fb2e651,// 57 PAY  22 

    0xcbd6772c,// 58 PAY  23 

    0x40063d90,// 59 PAY  24 

    0xe6717bc1,// 60 PAY  25 

    0xad0894c7,// 61 PAY  26 

    0x2b19bbe9,// 62 PAY  27 

    0x7ee9ce9a,// 63 PAY  28 

    0xdd5f4300,// 64 PAY  29 

    0xd0e35b4f,// 65 PAY  30 

    0x2e8e0fe9,// 66 PAY  31 

    0x93829b60,// 67 PAY  32 

    0x17c52023,// 68 PAY  33 

    0xf98ba40b,// 69 PAY  34 

    0xbf54817d,// 70 PAY  35 

    0x925407b9,// 71 PAY  36 

    0xbef5782c,// 72 PAY  37 

    0x09ebb148,// 73 PAY  38 

    0x4e7d842d,// 74 PAY  39 

    0x18e42288,// 75 PAY  40 

    0x75ee2336,// 76 PAY  41 

    0xa42c83aa,// 77 PAY  42 

    0x76dc62b7,// 78 PAY  43 

    0x4d2ed974,// 79 PAY  44 

    0xbce373a5,// 80 PAY  45 

    0xd8f6cb3b,// 81 PAY  46 

    0x6bdf2b44,// 82 PAY  47 

    0x84df6ee8,// 83 PAY  48 

    0x2f2b62fc,// 84 PAY  49 

    0x1836f1a9,// 85 PAY  50 

    0x9168fefe,// 86 PAY  51 

    0xe7499a55,// 87 PAY  52 

    0xd8a2265f,// 88 PAY  53 

    0x48d844d9,// 89 PAY  54 

    0xfc0946e3,// 90 PAY  55 

    0x1f184321,// 91 PAY  56 

    0xae6e37aa,// 92 PAY  57 

    0xc00fb937,// 93 PAY  58 

    0x03c68fd4,// 94 PAY  59 

    0xed112eea,// 95 PAY  60 

    0x8603bd77,// 96 PAY  61 

    0xfa83eae0,// 97 PAY  62 

    0x17ca20b7,// 98 PAY  63 

    0x3a135c38,// 99 PAY  64 

    0xa292a691,// 100 PAY  65 

    0x110eebf7,// 101 PAY  66 

    0x5ab7b056,// 102 PAY  67 

    0x0a5975f3,// 103 PAY  68 

    0xd54b4f53,// 104 PAY  69 

    0xb6a1402a,// 105 PAY  70 

    0xd391df83,// 106 PAY  71 

    0xce5c83ff,// 107 PAY  72 

    0x5dc901ff,// 108 PAY  73 

    0x450c5d40,// 109 PAY  74 

    0x5a66c906,// 110 PAY  75 

    0xab7029a6,// 111 PAY  76 

    0xcdf6fb6c,// 112 PAY  77 

    0xf839d287,// 113 PAY  78 

    0x43c1f3b3,// 114 PAY  79 

    0x9c88fe14,// 115 PAY  80 

    0x8addc7fd,// 116 PAY  81 

    0x8a6d05b7,// 117 PAY  82 

    0xf7937f90,// 118 PAY  83 

    0x44353cbd,// 119 PAY  84 

    0x0063ee9b,// 120 PAY  85 

    0x77f7c902,// 121 PAY  86 

    0x691ac262,// 122 PAY  87 

    0x2059946c,// 123 PAY  88 

    0x9615c410,// 124 PAY  89 

    0x632f23eb,// 125 PAY  90 

    0xa6508cdd,// 126 PAY  91 

    0x0f2b7721,// 127 PAY  92 

    0x36d884cf,// 128 PAY  93 

    0x5474259c,// 129 PAY  94 

    0x51664c76,// 130 PAY  95 

    0x52fb6b06,// 131 PAY  96 

    0x463ea431,// 132 PAY  97 

    0x774c40e3,// 133 PAY  98 

    0xbd320673,// 134 PAY  99 

    0x1f357a9e,// 135 PAY 100 

    0x26b5d3ef,// 136 PAY 101 

    0xbdfec7a8,// 137 PAY 102 

    0x9d4c5a97,// 138 PAY 103 

    0x7a205d43,// 139 PAY 104 

    0xf4288d7e,// 140 PAY 105 

    0x3283aa2e,// 141 PAY 106 

    0x9dbf839b,// 142 PAY 107 

    0x254f1b38,// 143 PAY 108 

    0x3866425f,// 144 PAY 109 

    0x08fe9ebf,// 145 PAY 110 

    0xc1f3a6d1,// 146 PAY 111 

    0x1850248b,// 147 PAY 112 

    0xfaa05b3d,// 148 PAY 113 

    0xa33c954e,// 149 PAY 114 

    0xdebd12a5,// 150 PAY 115 

    0x30da2489,// 151 PAY 116 

    0x862e6bf6,// 152 PAY 117 

    0x13f69b24,// 153 PAY 118 

    0xdeab0636,// 154 PAY 119 

    0x1ed05ebd,// 155 PAY 120 

    0x59102003,// 156 PAY 121 

    0x3a547d1f,// 157 PAY 122 

    0x403a6910,// 158 PAY 123 

    0x39edd00c,// 159 PAY 124 

    0xaaf68a2c,// 160 PAY 125 

    0x9d1a423a,// 161 PAY 126 

    0x7d83496c,// 162 PAY 127 

    0x6412f2f3,// 163 PAY 128 

    0x8c5ec5b0,// 164 PAY 129 

    0x88fdef2b,// 165 PAY 130 

    0x8d67e242,// 166 PAY 131 

    0x0e98b4d5,// 167 PAY 132 

    0x60d1834e,// 168 PAY 133 

    0x7739e47e,// 169 PAY 134 

    0x0a989367,// 170 PAY 135 

    0xba2a950c,// 171 PAY 136 

    0xf989d254,// 172 PAY 137 

    0x2f8ed635,// 173 PAY 138 

    0xc5e8b28d,// 174 PAY 139 

    0xb2bbf205,// 175 PAY 140 

    0x7f245f69,// 176 PAY 141 

    0x19252561,// 177 PAY 142 

    0x044a6799,// 178 PAY 143 

    0x90a72c5e,// 179 PAY 144 

    0x3d6bade3,// 180 PAY 145 

    0x34ebb6e6,// 181 PAY 146 

    0xe8db5e68,// 182 PAY 147 

    0x75240e86,// 183 PAY 148 

    0x55b28510,// 184 PAY 149 

    0x3909da18,// 185 PAY 150 

    0xa66106bf,// 186 PAY 151 

    0xa9f389a2,// 187 PAY 152 

    0x2aa0b900,// 188 PAY 153 

    0x7fdeb78d,// 189 PAY 154 

    0xe7000000,// 190 PAY 155 

/// STA is 1 words. 

/// STA num_pkts       : 6 

/// STA pkt_idx        : 44 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xf8 

    0x00b1f806 // 191 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 88 (0x58) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_sha1_pkt54_tmpl[] = {
    0xb8010058,// 1 CCH   1 

/// ECH cache_idx      : 0x0e 

/// ECH pdu_tag        : 0x00 

    0x000e0000,// 2 ECH   1 

/// SCX is 21 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound save_icv insert_icv !check_icv sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : SHA1 

/// SCX aes_size        : RC4UPDT_AES192 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x3 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 8 

/// SCX authctx_size    : 40 

    0x08000015,// 3 SCX   1 

    0x8065484b,// 4 SCX   2 

    0x00006382,// 5 SCX   3 

    0xba4cb14b,// 6 SCX   4 

    0x5a4a3f9e,// 7 SCX   5 

    0xa4138bef,// 8 SCX   6 

    0xcd76ac8e,// 9 SCX   7 

    0x21cd907a,// 10 SCX   8 

    0x5f716047,// 11 SCX   9 

    0x3ae8d06b,// 12 SCX  10 

    0x1320f093,// 13 SCX  11 

    0x3ac659b9,// 14 SCX  12 

    0x5d579d71,// 15 SCX  13 

    0x1ce709a9,// 16 SCX  14 

    0xeb6bc8d2,// 17 SCX  15 

    0x598305b0,// 18 SCX  16 

    0xe27ad8b7,// 19 SCX  17 

    0xf169fcc5,// 20 SCX  18 

    0x0f06f87e,// 21 SCX  19 

    0xba6f4283,// 22 SCX  20 

    0x31d12fe2,// 23 SCX  21 

/// BFD is 3 words. 

/// BFD tot_len        : 408 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 53 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 53 

/// BFD lencrypto      : 24 

/// BFD ofstcrypto     : 28 

/// BFD (ofst+len)cry  : 52 

/// BFD ofstiv         : 0 

/// BFD ofsticv        : 240 

    0x00000035,// 24 BFD   1 

    0x001c0018,// 25 BFD   2 

    0x00f00000,// 26 BFD   3 

/// MFM is 2 words. 

/// MFM vldnibs        : c 

    0x0c004a89,// 27 MFM   1 

    0xd21c729c,// 28 MFM   2 

/// BDA is 103 words. 

/// BDA size     is 408 (0x198) 

/// BDA id       is 0x5aee 

    0x01985aee,// 29 BDA   1 

/// PAY Generic Data size   : 408 byte(s) 

/// PAD Buffer Data Pad size   : 0 byte(s) 

    0x785c4c46,// 30 PAY   1 

    0x19fbe3e0,// 31 PAY   2 

    0xfa0126c2,// 32 PAY   3 

    0xb8b3e39b,// 33 PAY   4 

    0x74090499,// 34 PAY   5 

    0x2b44c54f,// 35 PAY   6 

    0x580e0870,// 36 PAY   7 

    0x21225329,// 37 PAY   8 

    0xce7950ef,// 38 PAY   9 

    0x28b63b4e,// 39 PAY  10 

    0x0188f3a8,// 40 PAY  11 

    0xffc90bc5,// 41 PAY  12 

    0x447baf67,// 42 PAY  13 

    0x58eac9da,// 43 PAY  14 

    0x33f37558,// 44 PAY  15 

    0xd72ca5f6,// 45 PAY  16 

    0xe51376a8,// 46 PAY  17 

    0xf8cdf913,// 47 PAY  18 

    0x3e134360,// 48 PAY  19 

    0xc566105a,// 49 PAY  20 

    0x3406d6fa,// 50 PAY  21 

    0xfa4207d9,// 51 PAY  22 

    0xed92db5f,// 52 PAY  23 

    0x1dc87d3b,// 53 PAY  24 

    0x483e2650,// 54 PAY  25 

    0x1db5be4a,// 55 PAY  26 

    0x1ebbd980,// 56 PAY  27 

    0x4ff92b46,// 57 PAY  28 

    0x1d909ba3,// 58 PAY  29 

    0x253c3c17,// 59 PAY  30 

    0x59f825f4,// 60 PAY  31 

    0x828d4619,// 61 PAY  32 

    0x36c9959e,// 62 PAY  33 

    0xfe8d1594,// 63 PAY  34 

    0x9aef6a90,// 64 PAY  35 

    0xa4ab0822,// 65 PAY  36 

    0xf8c9696f,// 66 PAY  37 

    0xdef40e1d,// 67 PAY  38 

    0x40aa7293,// 68 PAY  39 

    0x5012140b,// 69 PAY  40 

    0x88664051,// 70 PAY  41 

    0xf4248802,// 71 PAY  42 

    0x81d9023e,// 72 PAY  43 

    0x990c3013,// 73 PAY  44 

    0x9d7eb2d9,// 74 PAY  45 

    0xc1257b7c,// 75 PAY  46 

    0x05928f63,// 76 PAY  47 

    0xce5c9d05,// 77 PAY  48 

    0x33b4830a,// 78 PAY  49 

    0x206650b9,// 79 PAY  50 

    0x93fc6bb8,// 80 PAY  51 

    0x93f302b9,// 81 PAY  52 

    0x658dc0a0,// 82 PAY  53 

    0xdddcba2c,// 83 PAY  54 

    0x3b40e697,// 84 PAY  55 

    0xf0b1b2c0,// 85 PAY  56 

    0x28098939,// 86 PAY  57 

    0xcb4d5685,// 87 PAY  58 

    0xf3e4f3cf,// 88 PAY  59 

    0xb174071f,// 89 PAY  60 

    0xfa131a65,// 90 PAY  61 

    0x5e278170,// 91 PAY  62 

    0x19dc2b84,// 92 PAY  63 

    0x46868b99,// 93 PAY  64 

    0xb4cc07bc,// 94 PAY  65 

    0xd8d76d2a,// 95 PAY  66 

    0xbd59a045,// 96 PAY  67 

    0x412c1380,// 97 PAY  68 

    0x5e11c0a8,// 98 PAY  69 

    0xd771f3cd,// 99 PAY  70 

    0x3ab56fd7,// 100 PAY  71 

    0x2cb29269,// 101 PAY  72 

    0x90cd4c5a,// 102 PAY  73 

    0xcbcbf620,// 103 PAY  74 

    0xfb3b4cbd,// 104 PAY  75 

    0x7f48d728,// 105 PAY  76 

    0xc5c76a5c,// 106 PAY  77 

    0xd9ad4f15,// 107 PAY  78 

    0x226fb674,// 108 PAY  79 

    0x22d0b719,// 109 PAY  80 

    0xb89a15fb,// 110 PAY  81 

    0xa93d6ca2,// 111 PAY  82 

    0x74218fc1,// 112 PAY  83 

    0x1230a7d8,// 113 PAY  84 

    0x3a7e1db1,// 114 PAY  85 

    0x7aa453d9,// 115 PAY  86 

    0x2236dace,// 116 PAY  87 

    0x76df1345,// 117 PAY  88 

    0xb20dbf5b,// 118 PAY  89 

    0x3dee02ba,// 119 PAY  90 

    0xb89e65a2,// 120 PAY  91 

    0xf7093071,// 121 PAY  92 

    0x73fb15e4,// 122 PAY  93 

    0xe068062d,// 123 PAY  94 

    0x5f19aa97,// 124 PAY  95 

    0x2d0dcf41,// 125 PAY  96 

    0xdcadfc9f,// 126 PAY  97 

    0xc33d6857,// 127 PAY  98 

    0xcfb6680e,// 128 PAY  99 

    0x9f0d29a7,// 129 PAY 100 

    0xfeb6b0af,// 130 PAY 101 

    0xfdbaf1e3,// 131 PAY 102 

/// STA is 1 words. 

/// STA num_pkts       : 33 

/// STA pkt_idx        : 109 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x19 

    0x01b41921 // 132 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 88 (0x58) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_sha1_pkt55_tmpl[] = {
    0xb8010058,// 1 CCH   1 

/// ECH cache_idx      : 0x03 

/// ECH pdu_tag        : 0x00 

    0x00030000,// 2 ECH   1 

/// SCX is 21 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound !save_icv insert_icv check_icv sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : SHA1 

/// SCX aes_size        : NORMAL_RC4INIT_AES128 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x5 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 8 

/// SCX authctx_size    : 40 

    0x08000015,// 3 SCX   1 

    0x806448b2,// 4 SCX   2 

    0x00003582,// 5 SCX   3 

    0x46b5dd68,// 6 SCX   4 

    0x3966cc0b,// 7 SCX   5 

    0x5b2535c0,// 8 SCX   6 

    0xa106ee22,// 9 SCX   7 

    0x7593644e,// 10 SCX   8 

    0xfeb0a335,// 11 SCX   9 

    0xa13e06f4,// 12 SCX  10 

    0xb276728c,// 13 SCX  11 

    0xf0915f1a,// 14 SCX  12 

    0x122e7aa6,// 15 SCX  13 

    0x55e53747,// 16 SCX  14 

    0xa860b1ce,// 17 SCX  15 

    0xedca521e,// 18 SCX  16 

    0xa8325c74,// 19 SCX  17 

    0x7206eb75,// 20 SCX  18 

    0x945f5ee2,// 21 SCX  19 

    0x4ebcd29e,// 22 SCX  20 

    0x72b65ebd,// 23 SCX  21 

/// BFD is 3 words. 

/// BFD tot_len        : 611 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 521 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 521 

/// BFD lencrypto      : 400 

/// BFD ofstcrypto     : 92 

/// BFD (ofst+len)cry  : 492 

/// BFD ofstiv         : 44 

/// BFD ofsticv        : 552 

    0x00000209,// 24 BFD   1 

    0x005c0190,// 25 BFD   2 

    0x0228002c,// 26 BFD   3 

/// MFM is 9 words. 

/// MFM vldnibs        : 42 

    0x42003b6d,// 27 MFM   1 

    0xd6d0e13d,// 28 MFM   2 

    0xeebe3a16,// 29 MFM   3 

    0x7ec2085b,// 30 MFM   4 

    0xdd37703a,// 31 MFM   5 

    0xab52fe7c,// 32 MFM   6 

    0x1dee382d,// 33 MFM   7 

    0xc79b0aea,// 34 MFM   8 

    0xdd289300,// 35 MFM   9 

/// BDA is 154 words. 

/// BDA size     is 611 (0x263) 

/// BDA id       is 0x49d1 

    0x026349d1,// 36 BDA   1 

/// PAY Generic Data size   : 611 byte(s) 

/// PAD Buffer Data Pad size   : 1 byte(s) 

    0x4e5c5313,// 37 PAY   1 

    0xb99f0b67,// 38 PAY   2 

    0x4eb6b62b,// 39 PAY   3 

    0x22ebbb32,// 40 PAY   4 

    0xf975a1b6,// 41 PAY   5 

    0x11079e3c,// 42 PAY   6 

    0x9ccee6cf,// 43 PAY   7 

    0xb1a9896e,// 44 PAY   8 

    0x89eecaa6,// 45 PAY   9 

    0x6de85ae1,// 46 PAY  10 

    0xff852da7,// 47 PAY  11 

    0x0649b26d,// 48 PAY  12 

    0x8462f12c,// 49 PAY  13 

    0x0b3bd1de,// 50 PAY  14 

    0xac023ef3,// 51 PAY  15 

    0x99a2591d,// 52 PAY  16 

    0xb88aea28,// 53 PAY  17 

    0x9adeabb0,// 54 PAY  18 

    0x1c138f8d,// 55 PAY  19 

    0xb3d718af,// 56 PAY  20 

    0x4d5331e8,// 57 PAY  21 

    0x28c5fa65,// 58 PAY  22 

    0xa372c325,// 59 PAY  23 

    0xde0cb95a,// 60 PAY  24 

    0x36483196,// 61 PAY  25 

    0xd4d1c60f,// 62 PAY  26 

    0x6fd44772,// 63 PAY  27 

    0xeafa1f8f,// 64 PAY  28 

    0x079b90a0,// 65 PAY  29 

    0x59c8d814,// 66 PAY  30 

    0x913faa10,// 67 PAY  31 

    0x0ec925e0,// 68 PAY  32 

    0x9b6eba54,// 69 PAY  33 

    0xe0a4b30a,// 70 PAY  34 

    0x96c78686,// 71 PAY  35 

    0xca47c93a,// 72 PAY  36 

    0xf3ebd1c1,// 73 PAY  37 

    0xf1d01699,// 74 PAY  38 

    0x1ee000f1,// 75 PAY  39 

    0xbfb1b6d1,// 76 PAY  40 

    0x52ded665,// 77 PAY  41 

    0x46639fff,// 78 PAY  42 

    0x03349fd8,// 79 PAY  43 

    0x8cc27087,// 80 PAY  44 

    0x245c4640,// 81 PAY  45 

    0xaafbfb08,// 82 PAY  46 

    0x73b5a54f,// 83 PAY  47 

    0xb3ec6d52,// 84 PAY  48 

    0xf8d66fd4,// 85 PAY  49 

    0xab90dc9a,// 86 PAY  50 

    0x29f3375d,// 87 PAY  51 

    0xfcba6d5e,// 88 PAY  52 

    0x4110e124,// 89 PAY  53 

    0x9519df61,// 90 PAY  54 

    0x26424cc2,// 91 PAY  55 

    0x13eb9fea,// 92 PAY  56 

    0xde1cfd9c,// 93 PAY  57 

    0x274499e6,// 94 PAY  58 

    0xf6e55079,// 95 PAY  59 

    0xd8e2bc75,// 96 PAY  60 

    0x727739c0,// 97 PAY  61 

    0x0ac8da77,// 98 PAY  62 

    0x8d9eef0f,// 99 PAY  63 

    0xe1322eac,// 100 PAY  64 

    0x5ec4b52a,// 101 PAY  65 

    0x11b110d0,// 102 PAY  66 

    0x0a5d6f84,// 103 PAY  67 

    0x153cd92e,// 104 PAY  68 

    0xbd789077,// 105 PAY  69 

    0xefd87460,// 106 PAY  70 

    0xbf7035d7,// 107 PAY  71 

    0xa58d2a97,// 108 PAY  72 

    0x35f98fe8,// 109 PAY  73 

    0x9aa002d1,// 110 PAY  74 

    0xe3a00e74,// 111 PAY  75 

    0xbe535ce9,// 112 PAY  76 

    0x10d8461a,// 113 PAY  77 

    0xa1670147,// 114 PAY  78 

    0x7f14f41e,// 115 PAY  79 

    0x3f573464,// 116 PAY  80 

    0x2adeb6e3,// 117 PAY  81 

    0x06472b96,// 118 PAY  82 

    0x9d8c0a16,// 119 PAY  83 

    0xfa253d5f,// 120 PAY  84 

    0x1fec2e63,// 121 PAY  85 

    0xd3ce3eb9,// 122 PAY  86 

    0x824b1309,// 123 PAY  87 

    0x589f848c,// 124 PAY  88 

    0x69cff732,// 125 PAY  89 

    0x5fa982a8,// 126 PAY  90 

    0xf5c1204a,// 127 PAY  91 

    0x31085a81,// 128 PAY  92 

    0xceb2424c,// 129 PAY  93 

    0x4ac9b763,// 130 PAY  94 

    0x79cf627b,// 131 PAY  95 

    0x86d2a27f,// 132 PAY  96 

    0x4f8d017a,// 133 PAY  97 

    0xba21872b,// 134 PAY  98 

    0x7839a00a,// 135 PAY  99 

    0xde567e84,// 136 PAY 100 

    0x3363d6f0,// 137 PAY 101 

    0x2e9ed928,// 138 PAY 102 

    0xc25aa26c,// 139 PAY 103 

    0x40e4af2b,// 140 PAY 104 

    0xe0c3ac71,// 141 PAY 105 

    0x361ad98c,// 142 PAY 106 

    0x22bc5a6a,// 143 PAY 107 

    0xe0340758,// 144 PAY 108 

    0x1a198d25,// 145 PAY 109 

    0x218b0e3f,// 146 PAY 110 

    0xbc8a0c04,// 147 PAY 111 

    0x462820eb,// 148 PAY 112 

    0xbbbcad5d,// 149 PAY 113 

    0x73b14247,// 150 PAY 114 

    0xb23bd7ed,// 151 PAY 115 

    0x849639cd,// 152 PAY 116 

    0x1e468b74,// 153 PAY 117 

    0x41e5c9f0,// 154 PAY 118 

    0x80f67339,// 155 PAY 119 

    0x70fbc992,// 156 PAY 120 

    0x5fe2bea9,// 157 PAY 121 

    0xbac6eb6b,// 158 PAY 122 

    0x9e1f41ce,// 159 PAY 123 

    0x2d29d60b,// 160 PAY 124 

    0xf4d5387a,// 161 PAY 125 

    0x9925b0d3,// 162 PAY 126 

    0xb1b48d5d,// 163 PAY 127 

    0x9b27fa1c,// 164 PAY 128 

    0xb0a5aa2f,// 165 PAY 129 

    0xcec35821,// 166 PAY 130 

    0x1c9c9fe9,// 167 PAY 131 

    0xc2542d7b,// 168 PAY 132 

    0xbff41a63,// 169 PAY 133 

    0xdbb464e1,// 170 PAY 134 

    0xc2e2f861,// 171 PAY 135 

    0x59c0e5d9,// 172 PAY 136 

    0xb9c1af51,// 173 PAY 137 

    0x992ea003,// 174 PAY 138 

    0x11893630,// 175 PAY 139 

    0xbbf5d294,// 176 PAY 140 

    0xc5175e7a,// 177 PAY 141 

    0xc75255a0,// 178 PAY 142 

    0x74800b7c,// 179 PAY 143 

    0x26a0e74e,// 180 PAY 144 

    0x424a2cfa,// 181 PAY 145 

    0xd088901c,// 182 PAY 146 

    0x71269859,// 183 PAY 147 

    0xff737a8d,// 184 PAY 148 

    0x397d04f8,// 185 PAY 149 

    0xa52ae0aa,// 186 PAY 150 

    0xb883ace4,// 187 PAY 151 

    0x1f25e67e,// 188 PAY 152 

    0x11b29500,// 189 PAY 153 

/// STA is 1 words. 

/// STA num_pkts       : 215 

/// STA pkt_idx        : 91 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xc4 

    0x016cc4d7 // 190 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 80 (0x50) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_sha1_pkt56_tmpl[] = {
    0xb8010050,// 1 CCH   1 

/// ECH cache_idx      : 0x0b 

/// ECH pdu_tag        : 0x00 

    0x000b0000,// 2 ECH   1 

/// SCX is 19 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound save_icv !insert_icv check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : SHA1 

/// SCX aes_size        : RC4UPDT_AES192 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x5 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 40 

    0x08000013,// 3 SCX   1 

    0x80614840,// 4 SCX   2 

    0x00005500,// 5 SCX   3 

    0x5a85be8e,// 6 SCX   4 

    0x45292c97,// 7 SCX   5 

    0x1e8d56a0,// 8 SCX   6 

    0xc58b6cab,// 9 SCX   7 

    0x56ed1601,// 10 SCX   8 

    0x96021348,// 11 SCX   9 

    0xf5e2e378,// 12 SCX  10 

    0x104a5deb,// 13 SCX  11 

    0x82896ffe,// 14 SCX  12 

    0x895283e3,// 15 SCX  13 

    0x08a7fc00,// 16 SCX  14 

    0xfb8c7af5,// 17 SCX  15 

    0x044ec348,// 18 SCX  16 

    0xc5556a7f,// 19 SCX  17 

    0x3c43ff57,// 20 SCX  18 

    0x1b5f2c44,// 21 SCX  19 

/// BFD is 3 words. 

/// BFD tot_len        : 349 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 291 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 291 

/// BFD lencrypto      : 144 

/// BFD ofstcrypto     : 120 

/// BFD (ofst+len)cry  : 264 

/// BFD ofstiv         : 112 

/// BFD ofsticv        : 300 

    0x00000123,// 22 BFD   1 

    0x00780090,// 23 BFD   2 

    0x012c0070,// 24 BFD   3 

/// MFM is 8 words. 

/// MFM vldnibs        : 39 

    0x3900858d,// 25 MFM   1 

    0xb99e7eb7,// 26 MFM   2 

    0x2611b532,// 27 MFM   3 

    0xb51600c0,// 28 MFM   4 

    0xe68b184e,// 29 MFM   5 

    0x90d1a28d,// 30 MFM   6 

    0xa1118db2,// 31 MFM   7 

    0x24dba000,// 32 MFM   8 

/// BDA is 89 words. 

/// BDA size     is 349 (0x15d) 

/// BDA id       is 0x1b7b 

    0x015d1b7b,// 33 BDA   1 

/// PAY Generic Data size   : 349 byte(s) 

/// PAD Buffer Data Pad size   : 3 byte(s) 

    0xf0a27648,// 34 PAY   1 

    0x1bdae625,// 35 PAY   2 

    0x4cc5e173,// 36 PAY   3 

    0x1fc0279f,// 37 PAY   4 

    0xbb09934b,// 38 PAY   5 

    0xbe50f83c,// 39 PAY   6 

    0x2163faa5,// 40 PAY   7 

    0x5cb87f18,// 41 PAY   8 

    0xeab902dd,// 42 PAY   9 

    0xe9f51191,// 43 PAY  10 

    0x10d2e7ae,// 44 PAY  11 

    0x1502fd18,// 45 PAY  12 

    0x9d969f8e,// 46 PAY  13 

    0x412c06b4,// 47 PAY  14 

    0xc04d9788,// 48 PAY  15 

    0x14af3a4a,// 49 PAY  16 

    0xd400542f,// 50 PAY  17 

    0x91f919d1,// 51 PAY  18 

    0x0358fd8c,// 52 PAY  19 

    0x70f07c4d,// 53 PAY  20 

    0xebc6bf7a,// 54 PAY  21 

    0x82287cfa,// 55 PAY  22 

    0x1091f923,// 56 PAY  23 

    0xd0d34b95,// 57 PAY  24 

    0xd472c184,// 58 PAY  25 

    0xd4be5368,// 59 PAY  26 

    0xd6ca9570,// 60 PAY  27 

    0xf545f4fa,// 61 PAY  28 

    0xd9b6ef45,// 62 PAY  29 

    0x2d0301d2,// 63 PAY  30 

    0x309c3f79,// 64 PAY  31 

    0x6f6c5f7f,// 65 PAY  32 

    0xe456d215,// 66 PAY  33 

    0xc41759a0,// 67 PAY  34 

    0x9bc33a9e,// 68 PAY  35 

    0x6f000ea3,// 69 PAY  36 

    0x12cfd636,// 70 PAY  37 

    0xf740fc23,// 71 PAY  38 

    0x1f23797a,// 72 PAY  39 

    0xaf502fe0,// 73 PAY  40 

    0x841c3ee5,// 74 PAY  41 

    0x796bcdd3,// 75 PAY  42 

    0x046accce,// 76 PAY  43 

    0xc3e8afca,// 77 PAY  44 

    0x16422ae4,// 78 PAY  45 

    0x5819d9b2,// 79 PAY  46 

    0xa91a4128,// 80 PAY  47 

    0xbd9e296d,// 81 PAY  48 

    0xabf5d044,// 82 PAY  49 

    0xb179fc4a,// 83 PAY  50 

    0x78feaeeb,// 84 PAY  51 

    0xaa9eb2aa,// 85 PAY  52 

    0x0d5df3ba,// 86 PAY  53 

    0x41d1da86,// 87 PAY  54 

    0x8fb611cd,// 88 PAY  55 

    0x2f6bdd67,// 89 PAY  56 

    0x948bcd40,// 90 PAY  57 

    0x601e4cf9,// 91 PAY  58 

    0x3ecd937e,// 92 PAY  59 

    0x2313ceb0,// 93 PAY  60 

    0x98fcfacd,// 94 PAY  61 

    0xba0a654c,// 95 PAY  62 

    0xcbbabf6f,// 96 PAY  63 

    0x720ce6fa,// 97 PAY  64 

    0xc7037295,// 98 PAY  65 

    0xc9f1d409,// 99 PAY  66 

    0x69bf8c5a,// 100 PAY  67 

    0xd68b1470,// 101 PAY  68 

    0x0a2e61e8,// 102 PAY  69 

    0x0d31e21a,// 103 PAY  70 

    0xa0f2f439,// 104 PAY  71 

    0xef925fb0,// 105 PAY  72 

    0xd43c541f,// 106 PAY  73 

    0xeb8f5124,// 107 PAY  74 

    0xc42a2d34,// 108 PAY  75 

    0x18d273a4,// 109 PAY  76 

    0x7595d8e0,// 110 PAY  77 

    0x81de2e50,// 111 PAY  78 

    0x655ea061,// 112 PAY  79 

    0x8af3b698,// 113 PAY  80 

    0xf626603a,// 114 PAY  81 

    0x69fdb253,// 115 PAY  82 

    0xc889ec7e,// 116 PAY  83 

    0xc1fa2b60,// 117 PAY  84 

    0x8290c69d,// 118 PAY  85 

    0x2d34f2ac,// 119 PAY  86 

    0xb57b9ea6,// 120 PAY  87 

    0xfa000000,// 121 PAY  88 

/// STA is 1 words. 

/// STA num_pkts       : 160 

/// STA pkt_idx        : 180 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xf7 

    0x02d1f7a0 // 122 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 80 (0x50) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_sha1_pkt57_tmpl[] = {
    0xb8010050,// 1 CCH   1 

/// ECH cache_idx      : 0x08 

/// ECH pdu_tag        : 0x00 

    0x00080000,// 2 ECH   1 

/// SCX is 19 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound !save_icv insert_icv !check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : SHA1 

/// SCX aes_size        : NORMAL_RC4INIT_AES128 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x4 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 40 

    0x08000013,// 3 SCX   1 

    0x80604821,// 4 SCX   2 

    0x00002400,// 5 SCX   3 

    0x12ac968c,// 6 SCX   4 

    0x39d405fd,// 7 SCX   5 

    0x79cd73d9,// 8 SCX   6 

    0xf557a38f,// 9 SCX   7 

    0xea6f08a9,// 10 SCX   8 

    0x68c189b3,// 11 SCX   9 

    0x44ee080c,// 12 SCX  10 

    0x1be25322,// 13 SCX  11 

    0x0fb0a62a,// 14 SCX  12 

    0x14e5b5fb,// 15 SCX  13 

    0xdd245d04,// 16 SCX  14 

    0x11fdf91c,// 17 SCX  15 

    0x5d6177eb,// 18 SCX  16 

    0xf269d2d2,// 19 SCX  17 

    0x6570f557,// 20 SCX  18 

    0x497a9c9d,// 21 SCX  19 

/// BFD is 3 words. 

/// BFD tot_len        : 1035 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 501 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 501 

/// BFD lencrypto      : 256 

/// BFD ofstcrypto     : 52 

/// BFD (ofst+len)cry  : 308 

/// BFD ofstiv         : 8 

/// BFD ofsticv        : 636 

    0x000001f5,// 22 BFD   1 

    0x00340100,// 23 BFD   2 

    0x027c0008,// 24 BFD   3 

/// MFM is 16 words. 

/// MFM vldnibs        : 7b 

    0x7b0043f3,// 25 MFM   1 

    0x546827c2,// 26 MFM   2 

    0x91646232,// 27 MFM   3 

    0x535cef9f,// 28 MFM   4 

    0xe1d05016,// 29 MFM   5 

    0xba3b8681,// 30 MFM   6 

    0xa1e23c79,// 31 MFM   7 

    0xec3e4a2e,// 32 MFM   8 

    0xb79bfc28,// 33 MFM   9 

    0x6cdc9302,// 34 MFM  10 

    0xfc995c92,// 35 MFM  11 

    0xc07cd8ac,// 36 MFM  12 

    0x9ea070e8,// 37 MFM  13 

    0xa362a820,// 38 MFM  14 

    0x07bdfccf,// 39 MFM  15 

    0xb4e83120,// 40 MFM  16 

/// BDA is 260 words. 

/// BDA size     is 1035 (0x40b) 

/// BDA id       is 0xf427 

    0x040bf427,// 41 BDA   1 

/// PAY Generic Data size   : 1035 byte(s) 

/// PAD Buffer Data Pad size   : 1 byte(s) 

    0x4688e65c,// 42 PAY   1 

    0xc3450fce,// 43 PAY   2 

    0xf43554cf,// 44 PAY   3 

    0x58fee916,// 45 PAY   4 

    0x4c5d7008,// 46 PAY   5 

    0xbf824a22,// 47 PAY   6 

    0x1cb9c2ed,// 48 PAY   7 

    0x0dd58a81,// 49 PAY   8 

    0x692ff012,// 50 PAY   9 

    0x513baaeb,// 51 PAY  10 

    0xf778b767,// 52 PAY  11 

    0x66a487fb,// 53 PAY  12 

    0xfb3c5564,// 54 PAY  13 

    0x4f95f6b8,// 55 PAY  14 

    0x408d531a,// 56 PAY  15 

    0x347a3847,// 57 PAY  16 

    0x5e2a5703,// 58 PAY  17 

    0xc899b9a5,// 59 PAY  18 

    0xb99e8f5b,// 60 PAY  19 

    0xd6dc666c,// 61 PAY  20 

    0x025b3d2c,// 62 PAY  21 

    0x22af2797,// 63 PAY  22 

    0x661786f4,// 64 PAY  23 

    0xca8036ca,// 65 PAY  24 

    0xa299571f,// 66 PAY  25 

    0x6cdd8cea,// 67 PAY  26 

    0x3b281688,// 68 PAY  27 

    0xe73c68f7,// 69 PAY  28 

    0x4e6d93d9,// 70 PAY  29 

    0x3d6b2126,// 71 PAY  30 

    0xae10d5e5,// 72 PAY  31 

    0x74846be8,// 73 PAY  32 

    0x3eee88a0,// 74 PAY  33 

    0x08a2d84a,// 75 PAY  34 

    0xf46a2fcb,// 76 PAY  35 

    0x9892cc4d,// 77 PAY  36 

    0x6dab91cf,// 78 PAY  37 

    0xb5f48037,// 79 PAY  38 

    0xb3c4a885,// 80 PAY  39 

    0xfaa588cb,// 81 PAY  40 

    0xc557df78,// 82 PAY  41 

    0xc0e80332,// 83 PAY  42 

    0xdf9b9cb8,// 84 PAY  43 

    0x91b6553c,// 85 PAY  44 

    0xb143bff1,// 86 PAY  45 

    0xae4f983a,// 87 PAY  46 

    0x8aaca7d6,// 88 PAY  47 

    0xb1005511,// 89 PAY  48 

    0x08542b98,// 90 PAY  49 

    0x070ef969,// 91 PAY  50 

    0x0e7e32bc,// 92 PAY  51 

    0x57871cc4,// 93 PAY  52 

    0x1e758412,// 94 PAY  53 

    0x7e51a38e,// 95 PAY  54 

    0xdac7aefb,// 96 PAY  55 

    0xdf406a05,// 97 PAY  56 

    0x5211273b,// 98 PAY  57 

    0x34e988a1,// 99 PAY  58 

    0xbc860367,// 100 PAY  59 

    0xcc8ec7b4,// 101 PAY  60 

    0x98adce72,// 102 PAY  61 

    0x135c3e0e,// 103 PAY  62 

    0xa54976e2,// 104 PAY  63 

    0x1af28cb8,// 105 PAY  64 

    0xa87f5c53,// 106 PAY  65 

    0xf598c48c,// 107 PAY  66 

    0xe4442951,// 108 PAY  67 

    0x8e02e317,// 109 PAY  68 

    0x8e1499dd,// 110 PAY  69 

    0x15e9bcdc,// 111 PAY  70 

    0x85dd9307,// 112 PAY  71 

    0x83d658c2,// 113 PAY  72 

    0x8acd099d,// 114 PAY  73 

    0xaf106fa5,// 115 PAY  74 

    0xf96995df,// 116 PAY  75 

    0x7815f999,// 117 PAY  76 

    0xc48da821,// 118 PAY  77 

    0x0ce39f1d,// 119 PAY  78 

    0xef686a2b,// 120 PAY  79 

    0xa5ee6b88,// 121 PAY  80 

    0xf7fb816c,// 122 PAY  81 

    0x36a2a7e9,// 123 PAY  82 

    0x01e15406,// 124 PAY  83 

    0xd18329a8,// 125 PAY  84 

    0x78baa1f1,// 126 PAY  85 

    0xd0fec72d,// 127 PAY  86 

    0xfcae0978,// 128 PAY  87 

    0x7d76516d,// 129 PAY  88 

    0x8d95422d,// 130 PAY  89 

    0x17f71de5,// 131 PAY  90 

    0x75224a54,// 132 PAY  91 

    0xd39bfb6a,// 133 PAY  92 

    0xee31a0b8,// 134 PAY  93 

    0x39746012,// 135 PAY  94 

    0x5f3ec2c6,// 136 PAY  95 

    0x8a7624be,// 137 PAY  96 

    0x10950b22,// 138 PAY  97 

    0xf3683204,// 139 PAY  98 

    0x9acc281c,// 140 PAY  99 

    0x4cffa542,// 141 PAY 100 

    0x10d5185a,// 142 PAY 101 

    0x63a15a44,// 143 PAY 102 

    0x6acfa303,// 144 PAY 103 

    0x447aaf36,// 145 PAY 104 

    0x77e00163,// 146 PAY 105 

    0xc21fae96,// 147 PAY 106 

    0x48064ca1,// 148 PAY 107 

    0x3552b5f7,// 149 PAY 108 

    0x0cf50f6d,// 150 PAY 109 

    0x49bdbe1b,// 151 PAY 110 

    0xeca2dd89,// 152 PAY 111 

    0x792083c6,// 153 PAY 112 

    0x10f9d7bd,// 154 PAY 113 

    0x2f085e21,// 155 PAY 114 

    0x97c8dfa9,// 156 PAY 115 

    0xc04dc484,// 157 PAY 116 

    0x598ba57f,// 158 PAY 117 

    0x7cfd587f,// 159 PAY 118 

    0x72e63ada,// 160 PAY 119 

    0xdad53187,// 161 PAY 120 

    0x86dc2f84,// 162 PAY 121 

    0x3933ff68,// 163 PAY 122 

    0xed615647,// 164 PAY 123 

    0x32b1ccf2,// 165 PAY 124 

    0x5fd65fbd,// 166 PAY 125 

    0x802124af,// 167 PAY 126 

    0x0c533cdd,// 168 PAY 127 

    0x28e89ad1,// 169 PAY 128 

    0x442adf51,// 170 PAY 129 

    0x25bb0485,// 171 PAY 130 

    0x63a06e20,// 172 PAY 131 

    0x65c63ff9,// 173 PAY 132 

    0x6cf52b34,// 174 PAY 133 

    0x34cf64d4,// 175 PAY 134 

    0x6f28985c,// 176 PAY 135 

    0x0501e96b,// 177 PAY 136 

    0xe8edfded,// 178 PAY 137 

    0x9546e2f0,// 179 PAY 138 

    0x6790097b,// 180 PAY 139 

    0xf0eb10c6,// 181 PAY 140 

    0xbd6bd919,// 182 PAY 141 

    0x2ebd1ab2,// 183 PAY 142 

    0x9a7f3aef,// 184 PAY 143 

    0xc13222f3,// 185 PAY 144 

    0xdc6969d0,// 186 PAY 145 

    0x42a963dd,// 187 PAY 146 

    0x46e1b130,// 188 PAY 147 

    0x021120f6,// 189 PAY 148 

    0x159bd2c7,// 190 PAY 149 

    0x39590e15,// 191 PAY 150 

    0x169c3c01,// 192 PAY 151 

    0x3816ec22,// 193 PAY 152 

    0xada43646,// 194 PAY 153 

    0xb0a2a1ac,// 195 PAY 154 

    0x5f19ee25,// 196 PAY 155 

    0xd734526c,// 197 PAY 156 

    0x82281f88,// 198 PAY 157 

    0xbb542a79,// 199 PAY 158 

    0x626efaa9,// 200 PAY 159 

    0x44987dda,// 201 PAY 160 

    0x92076f0c,// 202 PAY 161 

    0x84680db6,// 203 PAY 162 

    0xc3fd57f8,// 204 PAY 163 

    0x641c5ffb,// 205 PAY 164 

    0x6457cb6d,// 206 PAY 165 

    0xac559ec4,// 207 PAY 166 

    0x898bc5da,// 208 PAY 167 

    0x157dcc21,// 209 PAY 168 

    0x66fc0f19,// 210 PAY 169 

    0x9e68534e,// 211 PAY 170 

    0x1b18980a,// 212 PAY 171 

    0xadf119c1,// 213 PAY 172 

    0xaae2caa5,// 214 PAY 173 

    0xe3662e0e,// 215 PAY 174 

    0xfffb242e,// 216 PAY 175 

    0xdac8647e,// 217 PAY 176 

    0xe171afa7,// 218 PAY 177 

    0x5e36e304,// 219 PAY 178 

    0xab7bfe25,// 220 PAY 179 

    0xb9545de5,// 221 PAY 180 

    0x17065a9e,// 222 PAY 181 

    0x2d09c42e,// 223 PAY 182 

    0x3b8017c5,// 224 PAY 183 

    0x3859d2ad,// 225 PAY 184 

    0x16d7837b,// 226 PAY 185 

    0x6ff46e2d,// 227 PAY 186 

    0x8012b1c3,// 228 PAY 187 

    0x59096c9d,// 229 PAY 188 

    0x4c246aec,// 230 PAY 189 

    0x00d4dcd2,// 231 PAY 190 

    0xb55b4d52,// 232 PAY 191 

    0x562793b3,// 233 PAY 192 

    0x026eaaee,// 234 PAY 193 

    0x6deb43a7,// 235 PAY 194 

    0x1c32d04d,// 236 PAY 195 

    0x3b943567,// 237 PAY 196 

    0xb004ccaf,// 238 PAY 197 

    0x81abe610,// 239 PAY 198 

    0x85a78a49,// 240 PAY 199 

    0x097f6de5,// 241 PAY 200 

    0x574a653e,// 242 PAY 201 

    0xfe2cb8b3,// 243 PAY 202 

    0x1869fc77,// 244 PAY 203 

    0x48bab9fd,// 245 PAY 204 

    0xd1f192e2,// 246 PAY 205 

    0x655b3516,// 247 PAY 206 

    0x50668e0c,// 248 PAY 207 

    0x84a23bff,// 249 PAY 208 

    0x525c4fe8,// 250 PAY 209 

    0x453b78c3,// 251 PAY 210 

    0x167e4fe2,// 252 PAY 211 

    0x79a11386,// 253 PAY 212 

    0x5be1108f,// 254 PAY 213 

    0xae0670f6,// 255 PAY 214 

    0x68c551ea,// 256 PAY 215 

    0xd9c55738,// 257 PAY 216 

    0x9b80c2e3,// 258 PAY 217 

    0x862e41d5,// 259 PAY 218 

    0x5169cdb0,// 260 PAY 219 

    0x6b107fc4,// 261 PAY 220 

    0x1f925220,// 262 PAY 221 

    0xd11cd97c,// 263 PAY 222 

    0xe8ca495f,// 264 PAY 223 

    0x303df882,// 265 PAY 224 

    0x2b610de5,// 266 PAY 225 

    0x7df17b7a,// 267 PAY 226 

    0xb041a573,// 268 PAY 227 

    0x779eb9dc,// 269 PAY 228 

    0x42a22fbb,// 270 PAY 229 

    0x96039a79,// 271 PAY 230 

    0x91a5faa8,// 272 PAY 231 

    0xcb32a219,// 273 PAY 232 

    0x01263dc4,// 274 PAY 233 

    0xa6d65128,// 275 PAY 234 

    0xf8cbb6e5,// 276 PAY 235 

    0xad28ad41,// 277 PAY 236 

    0x8f52eace,// 278 PAY 237 

    0x4e5237e6,// 279 PAY 238 

    0xfdc1c40a,// 280 PAY 239 

    0x461655a5,// 281 PAY 240 

    0xe48fecfa,// 282 PAY 241 

    0x8187bbc5,// 283 PAY 242 

    0x02f93a08,// 284 PAY 243 

    0x82a61ee7,// 285 PAY 244 

    0x35523b3e,// 286 PAY 245 

    0x2dace7b8,// 287 PAY 246 

    0x4ad0c18e,// 288 PAY 247 

    0x1a66be71,// 289 PAY 248 

    0x88d72be6,// 290 PAY 249 

    0xe34ce137,// 291 PAY 250 

    0xb628f549,// 292 PAY 251 

    0x80440f01,// 293 PAY 252 

    0xc7b92ae6,// 294 PAY 253 

    0x64f3a7ae,// 295 PAY 254 

    0xcb6eb0ae,// 296 PAY 255 

    0x2a9dffc2,// 297 PAY 256 

    0x6cc93002,// 298 PAY 257 

    0xa9a0b015,// 299 PAY 258 

    0x8d5fb900,// 300 PAY 259 

/// STA is 1 words. 

/// STA num_pkts       : 231 

/// STA pkt_idx        : 247 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x9 

    0x03dc09e7 // 301 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 80 (0x50) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_sha1_pkt58_tmpl[] = {
    0xb8010050,// 1 CCH   1 

/// ECH cache_idx      : 0x0e 

/// ECH pdu_tag        : 0x00 

    0x000e0000,// 2 ECH   1 

/// SCX is 19 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound !save_icv insert_icv check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : SHA1 

/// SCX aes_size        : AES256 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x2 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 40 

    0x08000013,// 3 SCX   1 

    0x8062482e,// 4 SCX   2 

    0x00003200,// 5 SCX   3 

    0x07276564,// 6 SCX   4 

    0x1cca43b9,// 7 SCX   5 

    0x9d771548,// 8 SCX   6 

    0x624915df,// 9 SCX   7 

    0x92daf3cb,// 10 SCX   8 

    0xf247849c,// 11 SCX   9 

    0x2a10472d,// 12 SCX  10 

    0x61c73f49,// 13 SCX  11 

    0xf3bb1358,// 14 SCX  12 

    0x3ac0bf69,// 15 SCX  13 

    0x66adb2e5,// 16 SCX  14 

    0xc906f0d3,// 17 SCX  15 

    0xeaba56b9,// 18 SCX  16 

    0xdf3e772e,// 19 SCX  17 

    0xe5693ff0,// 20 SCX  18 

    0xc8cdc388,// 21 SCX  19 

/// BFD is 3 words. 

/// BFD tot_len        : 1537 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 1307 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 1307 

/// BFD lencrypto      : 400 

/// BFD ofstcrypto     : 788 

/// BFD (ofst+len)cry  : 1188 

/// BFD ofstiv         : 472 

/// BFD ofsticv        : 1428 

    0x0000051b,// 22 BFD   1 

    0x03140190,// 23 BFD   2 

    0x059401d8,// 24 BFD   3 

/// MFM is 13 words. 

/// MFM vldnibs        : 5e 

    0x5e00503e,// 25 MFM   1 

    0x37902129,// 26 MFM   2 

    0x109e8153,// 27 MFM   3 

    0x318e2a08,// 28 MFM   4 

    0x634ee3d3,// 29 MFM   5 

    0xdfeac5a7,// 30 MFM   6 

    0x58d333bc,// 31 MFM   7 

    0x3ec41006,// 32 MFM   8 

    0x3717ab31,// 33 MFM   9 

    0xaeef1f9c,// 34 MFM  10 

    0x0dd9d33f,// 35 MFM  11 

    0x81b049f2,// 36 MFM  12 

    0xc0000000,// 37 MFM  13 

/// BDA is 386 words. 

/// BDA size     is 1537 (0x601) 

/// BDA id       is 0x5042 

    0x06015042,// 38 BDA   1 

/// PAY Generic Data size   : 1537 byte(s) 

/// PAD Buffer Data Pad size   : 3 byte(s) 

    0x1411e8a7,// 39 PAY   1 

    0xb9d3a7ac,// 40 PAY   2 

    0x7f5a8b4a,// 41 PAY   3 

    0x610f490f,// 42 PAY   4 

    0xde88697b,// 43 PAY   5 

    0xe01434d9,// 44 PAY   6 

    0x426f708d,// 45 PAY   7 

    0x730ed8dd,// 46 PAY   8 

    0x7d9c71e9,// 47 PAY   9 

    0x8634e829,// 48 PAY  10 

    0x533676a9,// 49 PAY  11 

    0x0e75bd81,// 50 PAY  12 

    0xa7f98f0f,// 51 PAY  13 

    0x295f0909,// 52 PAY  14 

    0x47494c49,// 53 PAY  15 

    0x900d4cab,// 54 PAY  16 

    0x4de5d80a,// 55 PAY  17 

    0x98ddde5f,// 56 PAY  18 

    0xc984896d,// 57 PAY  19 

    0x15f65ba0,// 58 PAY  20 

    0x40ffcf57,// 59 PAY  21 

    0x23b1053b,// 60 PAY  22 

    0x1722ad3f,// 61 PAY  23 

    0x1c32ac62,// 62 PAY  24 

    0x7e63dacc,// 63 PAY  25 

    0x808fbb06,// 64 PAY  26 

    0x0679c151,// 65 PAY  27 

    0x1e28daca,// 66 PAY  28 

    0x2b2cf46c,// 67 PAY  29 

    0xd8237d7b,// 68 PAY  30 

    0x1a6e89b1,// 69 PAY  31 

    0xeacd7b94,// 70 PAY  32 

    0x07ed36a4,// 71 PAY  33 

    0xa001c041,// 72 PAY  34 

    0xb05bf173,// 73 PAY  35 

    0x081d6cd1,// 74 PAY  36 

    0xaec8dafb,// 75 PAY  37 

    0x25a58eac,// 76 PAY  38 

    0x9e9c3f6d,// 77 PAY  39 

    0x6875f8c4,// 78 PAY  40 

    0x761dc557,// 79 PAY  41 

    0x3e0a3e24,// 80 PAY  42 

    0xf40a4a3b,// 81 PAY  43 

    0x1da45178,// 82 PAY  44 

    0xb30c7dc9,// 83 PAY  45 

    0x74cfb848,// 84 PAY  46 

    0x850a226b,// 85 PAY  47 

    0x613a6cb1,// 86 PAY  48 

    0x496cb550,// 87 PAY  49 

    0xce8b9bb2,// 88 PAY  50 

    0x04f2b2fe,// 89 PAY  51 

    0x1b95bce9,// 90 PAY  52 

    0x21d00526,// 91 PAY  53 

    0xe159e064,// 92 PAY  54 

    0x94d338d1,// 93 PAY  55 

    0x487f80d7,// 94 PAY  56 

    0x5f6ab3c1,// 95 PAY  57 

    0xbce71629,// 96 PAY  58 

    0xbeb91018,// 97 PAY  59 

    0x29893e11,// 98 PAY  60 

    0xd6499a03,// 99 PAY  61 

    0xbd939568,// 100 PAY  62 

    0x68d878e2,// 101 PAY  63 

    0x3e0697b1,// 102 PAY  64 

    0x4ad48c95,// 103 PAY  65 

    0x61ed2166,// 104 PAY  66 

    0x88c3a732,// 105 PAY  67 

    0x2057be90,// 106 PAY  68 

    0x8ab2c2c9,// 107 PAY  69 

    0x84d9c269,// 108 PAY  70 

    0xe0769b9e,// 109 PAY  71 

    0x61fce538,// 110 PAY  72 

    0x41d80120,// 111 PAY  73 

    0x24046ac8,// 112 PAY  74 

    0x1979e7d2,// 113 PAY  75 

    0x9f14795e,// 114 PAY  76 

    0x67d05eb7,// 115 PAY  77 

    0xa000cec5,// 116 PAY  78 

    0x4cec2db5,// 117 PAY  79 

    0x983353ad,// 118 PAY  80 

    0xb8f21211,// 119 PAY  81 

    0x05bd4f01,// 120 PAY  82 

    0xb8c11307,// 121 PAY  83 

    0xbf3812dd,// 122 PAY  84 

    0x6858e07b,// 123 PAY  85 

    0x9ae298d6,// 124 PAY  86 

    0x69dd5d50,// 125 PAY  87 

    0x4ba28e2a,// 126 PAY  88 

    0x60150607,// 127 PAY  89 

    0x969e3769,// 128 PAY  90 

    0x237dccae,// 129 PAY  91 

    0x19601f5d,// 130 PAY  92 

    0xce270785,// 131 PAY  93 

    0xe1386fb8,// 132 PAY  94 

    0xf83db524,// 133 PAY  95 

    0xc4eeddc2,// 134 PAY  96 

    0x4e043b89,// 135 PAY  97 

    0x0b80c2c2,// 136 PAY  98 

    0x4c5a7fd3,// 137 PAY  99 

    0x38ffb19b,// 138 PAY 100 

    0x708be665,// 139 PAY 101 

    0x7d631158,// 140 PAY 102 

    0xa008bacf,// 141 PAY 103 

    0xc931ad6f,// 142 PAY 104 

    0x2283e803,// 143 PAY 105 

    0xf9861538,// 144 PAY 106 

    0x3164f625,// 145 PAY 107 

    0x68bd3f34,// 146 PAY 108 

    0x516f6ef9,// 147 PAY 109 

    0x1f05a1b7,// 148 PAY 110 

    0x5ebbd93d,// 149 PAY 111 

    0xb0eccdd0,// 150 PAY 112 

    0xcf9581cb,// 151 PAY 113 

    0x96bb3f6a,// 152 PAY 114 

    0xc71469bd,// 153 PAY 115 

    0x1f1950ac,// 154 PAY 116 

    0x9a0bf046,// 155 PAY 117 

    0x5b773d81,// 156 PAY 118 

    0xce01c1e3,// 157 PAY 119 

    0x317a689a,// 158 PAY 120 

    0xce55d7b3,// 159 PAY 121 

    0x1fdb304e,// 160 PAY 122 

    0xa833e68f,// 161 PAY 123 

    0x2ca75080,// 162 PAY 124 

    0xf08ff185,// 163 PAY 125 

    0x64059044,// 164 PAY 126 

    0xe685a3eb,// 165 PAY 127 

    0x78e8c918,// 166 PAY 128 

    0x12a0638a,// 167 PAY 129 

    0xd762467a,// 168 PAY 130 

    0x3218e553,// 169 PAY 131 

    0x51c88913,// 170 PAY 132 

    0xd81ca7f5,// 171 PAY 133 

    0x9af25167,// 172 PAY 134 

    0x9b6030ba,// 173 PAY 135 

    0xe111ad6e,// 174 PAY 136 

    0x2adadee9,// 175 PAY 137 

    0xeaa4ec22,// 176 PAY 138 

    0x0c532d62,// 177 PAY 139 

    0xd2014e5d,// 178 PAY 140 

    0xfc0b57a5,// 179 PAY 141 

    0x061759d0,// 180 PAY 142 

    0xdf953b18,// 181 PAY 143 

    0xe8237242,// 182 PAY 144 

    0x4e025058,// 183 PAY 145 

    0x69ace428,// 184 PAY 146 

    0xede6749a,// 185 PAY 147 

    0xf7803ad0,// 186 PAY 148 

    0x23307823,// 187 PAY 149 

    0x48c18739,// 188 PAY 150 

    0x6b093367,// 189 PAY 151 

    0x3979742f,// 190 PAY 152 

    0xe24452bd,// 191 PAY 153 

    0x9e875625,// 192 PAY 154 

    0x53169fa3,// 193 PAY 155 

    0x3173a6ee,// 194 PAY 156 

    0x3b540622,// 195 PAY 157 

    0xa4b22514,// 196 PAY 158 

    0x01ca2e3f,// 197 PAY 159 

    0x1d032f24,// 198 PAY 160 

    0xc6393708,// 199 PAY 161 

    0xcc1de6d1,// 200 PAY 162 

    0xf82d18b8,// 201 PAY 163 

    0xf69cc327,// 202 PAY 164 

    0xb403bf30,// 203 PAY 165 

    0x48863c68,// 204 PAY 166 

    0x379107d5,// 205 PAY 167 

    0x2ddbe12a,// 206 PAY 168 

    0x0ccc25a7,// 207 PAY 169 

    0xa0beb03e,// 208 PAY 170 

    0x3236d002,// 209 PAY 171 

    0x071265dc,// 210 PAY 172 

    0x1009f2b5,// 211 PAY 173 

    0xde87c467,// 212 PAY 174 

    0x506a3691,// 213 PAY 175 

    0x0bf827d4,// 214 PAY 176 

    0x3052a5d7,// 215 PAY 177 

    0x40c1b5af,// 216 PAY 178 

    0x7896b2dd,// 217 PAY 179 

    0x3808cf8b,// 218 PAY 180 

    0x572f145b,// 219 PAY 181 

    0xe0747449,// 220 PAY 182 

    0x5fff8984,// 221 PAY 183 

    0x6accb74e,// 222 PAY 184 

    0x8f91bd36,// 223 PAY 185 

    0xe9723df8,// 224 PAY 186 

    0xd16821e2,// 225 PAY 187 

    0x9edefd66,// 226 PAY 188 

    0xaa6c38e3,// 227 PAY 189 

    0x3216285b,// 228 PAY 190 

    0x2ec91ac6,// 229 PAY 191 

    0x476a68f2,// 230 PAY 192 

    0x3c084220,// 231 PAY 193 

    0x0f8ebd3b,// 232 PAY 194 

    0xca15bfa6,// 233 PAY 195 

    0xc8326a7c,// 234 PAY 196 

    0x7d67ccc2,// 235 PAY 197 

    0xfd0b4e46,// 236 PAY 198 

    0xe43751f5,// 237 PAY 199 

    0x7ed9f718,// 238 PAY 200 

    0x5eeb8169,// 239 PAY 201 

    0x89c1d5f2,// 240 PAY 202 

    0x726e48c6,// 241 PAY 203 

    0x9554c90c,// 242 PAY 204 

    0xb19db555,// 243 PAY 205 

    0x5d99af4b,// 244 PAY 206 

    0x6817ff6d,// 245 PAY 207 

    0x26a133bc,// 246 PAY 208 

    0xd20ad514,// 247 PAY 209 

    0x65f9e232,// 248 PAY 210 

    0x8a876c36,// 249 PAY 211 

    0xc9d6422e,// 250 PAY 212 

    0xa0d078cc,// 251 PAY 213 

    0x7ecfce64,// 252 PAY 214 

    0x7d069470,// 253 PAY 215 

    0x9ff6f8f7,// 254 PAY 216 

    0x87513bfd,// 255 PAY 217 

    0x0756be99,// 256 PAY 218 

    0xc71f1500,// 257 PAY 219 

    0xb57ec817,// 258 PAY 220 

    0xdf03e0de,// 259 PAY 221 

    0xff9a732a,// 260 PAY 222 

    0x0737b74e,// 261 PAY 223 

    0x776f92bb,// 262 PAY 224 

    0x236a8ea3,// 263 PAY 225 

    0x7c7c3963,// 264 PAY 226 

    0x19af4943,// 265 PAY 227 

    0xca5a998b,// 266 PAY 228 

    0x520c24ad,// 267 PAY 229 

    0xa6804145,// 268 PAY 230 

    0xfac11a63,// 269 PAY 231 

    0xd9891fc2,// 270 PAY 232 

    0xd5bc764e,// 271 PAY 233 

    0x8ecef10e,// 272 PAY 234 

    0xa7079900,// 273 PAY 235 

    0xed0ecb1c,// 274 PAY 236 

    0xe25d8589,// 275 PAY 237 

    0xbc0edc8b,// 276 PAY 238 

    0x06b0ccdf,// 277 PAY 239 

    0xac1ee84d,// 278 PAY 240 

    0x2aeafe44,// 279 PAY 241 

    0xb23a4e01,// 280 PAY 242 

    0x890623b4,// 281 PAY 243 

    0xcbaa5d62,// 282 PAY 244 

    0x382ab0df,// 283 PAY 245 

    0x00a778a7,// 284 PAY 246 

    0xd1767a4e,// 285 PAY 247 

    0xa159b943,// 286 PAY 248 

    0x3c88ad12,// 287 PAY 249 

    0xb5e5cc67,// 288 PAY 250 

    0xce647e58,// 289 PAY 251 

    0x33749b72,// 290 PAY 252 

    0xffeec438,// 291 PAY 253 

    0x406f8147,// 292 PAY 254 

    0x990f460e,// 293 PAY 255 

    0x87b8710a,// 294 PAY 256 

    0x131d6552,// 295 PAY 257 

    0x016bd121,// 296 PAY 258 

    0xab2e2636,// 297 PAY 259 

    0xf2289717,// 298 PAY 260 

    0xe4b1ad2f,// 299 PAY 261 

    0xde03940b,// 300 PAY 262 

    0x8366d1bd,// 301 PAY 263 

    0x6127c939,// 302 PAY 264 

    0xaba8bb4f,// 303 PAY 265 

    0xe010f316,// 304 PAY 266 

    0x0de83e34,// 305 PAY 267 

    0x275c0bd3,// 306 PAY 268 

    0xc032094d,// 307 PAY 269 

    0xe0c30cbd,// 308 PAY 270 

    0xf0f0900e,// 309 PAY 271 

    0xb39fe0a3,// 310 PAY 272 

    0x7503dbc3,// 311 PAY 273 

    0x04e213bb,// 312 PAY 274 

    0x30638d9d,// 313 PAY 275 

    0xb92d3654,// 314 PAY 276 

    0xd98e0856,// 315 PAY 277 

    0x37bcc829,// 316 PAY 278 

    0xf78dfab2,// 317 PAY 279 

    0xf72e0c7a,// 318 PAY 280 

    0x9742d3bc,// 319 PAY 281 

    0x62fbef90,// 320 PAY 282 

    0x12a9b4a8,// 321 PAY 283 

    0xde5c23c3,// 322 PAY 284 

    0x88b77c5f,// 323 PAY 285 

    0x7664c1cb,// 324 PAY 286 

    0x64cbc4b0,// 325 PAY 287 

    0x20e232ed,// 326 PAY 288 

    0x289a1aec,// 327 PAY 289 

    0xdfc1a462,// 328 PAY 290 

    0x80496ccd,// 329 PAY 291 

    0x0f30b764,// 330 PAY 292 

    0x01a970a3,// 331 PAY 293 

    0x3f12160a,// 332 PAY 294 

    0x669736d8,// 333 PAY 295 

    0x8af76281,// 334 PAY 296 

    0xa94ca564,// 335 PAY 297 

    0xdfc92ec6,// 336 PAY 298 

    0x552fa2bb,// 337 PAY 299 

    0x29a826a1,// 338 PAY 300 

    0x218fce20,// 339 PAY 301 

    0x43d5aa50,// 340 PAY 302 

    0x035c8a6f,// 341 PAY 303 

    0x4d6fd332,// 342 PAY 304 

    0x3e2cdb84,// 343 PAY 305 

    0x1cc7cbcc,// 344 PAY 306 

    0x90d070db,// 345 PAY 307 

    0xab11b495,// 346 PAY 308 

    0x8a726844,// 347 PAY 309 

    0xd1e36e84,// 348 PAY 310 

    0x1066c867,// 349 PAY 311 

    0x42ce24c0,// 350 PAY 312 

    0xe8a5a3ee,// 351 PAY 313 

    0x151feb9c,// 352 PAY 314 

    0x98c639b8,// 353 PAY 315 

    0xc6c77aae,// 354 PAY 316 

    0xe01503df,// 355 PAY 317 

    0xe00597fb,// 356 PAY 318 

    0x36fc855a,// 357 PAY 319 

    0x09845ae9,// 358 PAY 320 

    0x81528a47,// 359 PAY 321 

    0x7a848921,// 360 PAY 322 

    0x6ca9a76d,// 361 PAY 323 

    0x789eacdf,// 362 PAY 324 

    0x22741b2a,// 363 PAY 325 

    0xbaf1ac56,// 364 PAY 326 

    0xd4ee3554,// 365 PAY 327 

    0x31ceaf39,// 366 PAY 328 

    0xfac5f32d,// 367 PAY 329 

    0xb204a1bc,// 368 PAY 330 

    0x5312d6d3,// 369 PAY 331 

    0x06461ab5,// 370 PAY 332 

    0xc7ea5bd9,// 371 PAY 333 

    0xde1a995d,// 372 PAY 334 

    0x55c52802,// 373 PAY 335 

    0x42136e05,// 374 PAY 336 

    0x74955eb0,// 375 PAY 337 

    0x00b61469,// 376 PAY 338 

    0xb6e810ba,// 377 PAY 339 

    0x4d56e1eb,// 378 PAY 340 

    0x4ade8602,// 379 PAY 341 

    0x9695cc7d,// 380 PAY 342 

    0x47f5266b,// 381 PAY 343 

    0xf05d4354,// 382 PAY 344 

    0xadcf17ba,// 383 PAY 345 

    0xb39651b9,// 384 PAY 346 

    0x96a1e0d2,// 385 PAY 347 

    0xae14828f,// 386 PAY 348 

    0xd18df01e,// 387 PAY 349 

    0x34106858,// 388 PAY 350 

    0x6be25418,// 389 PAY 351 

    0xcd70a870,// 390 PAY 352 

    0xfe324e89,// 391 PAY 353 

    0x5eed4746,// 392 PAY 354 

    0x3a2bb202,// 393 PAY 355 

    0x9c246873,// 394 PAY 356 

    0xb0c49d6e,// 395 PAY 357 

    0xba46b70a,// 396 PAY 358 

    0x543f087c,// 397 PAY 359 

    0xb7fd8d79,// 398 PAY 360 

    0xb18e3773,// 399 PAY 361 

    0x92831117,// 400 PAY 362 

    0x388abe82,// 401 PAY 363 

    0x1562c09d,// 402 PAY 364 

    0xf7abc442,// 403 PAY 365 

    0xd9a93577,// 404 PAY 366 

    0x8a8d6caf,// 405 PAY 367 

    0xa8925dd0,// 406 PAY 368 

    0x738f1fce,// 407 PAY 369 

    0xa99eac87,// 408 PAY 370 

    0x1c32617f,// 409 PAY 371 

    0x092595fd,// 410 PAY 372 

    0xfd658d83,// 411 PAY 373 

    0xd42b4102,// 412 PAY 374 

    0x3cc2368f,// 413 PAY 375 

    0x88f7f10e,// 414 PAY 376 

    0x148636ad,// 415 PAY 377 

    0x4e133cac,// 416 PAY 378 

    0x6449e8be,// 417 PAY 379 

    0x776df8b1,// 418 PAY 380 

    0xb990f0ee,// 419 PAY 381 

    0x8a2e3dc6,// 420 PAY 382 

    0x4627b294,// 421 PAY 383 

    0x846e3a33,// 422 PAY 384 

    0x58000000,// 423 PAY 385 

/// STA is 1 words. 

/// STA num_pkts       : 207 

/// STA pkt_idx        : 160 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x1e 

    0x02811ecf // 424 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 88 (0x58) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_sha1_pkt59_tmpl[] = {
    0xb8010058,// 1 CCH   1 

/// ECH cache_idx      : 0x00 

/// ECH pdu_tag        : 0x00 

    0x00000000,// 2 ECH   1 

/// SCX is 21 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound save_icv !insert_icv !check_icv sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : SHA1 

/// SCX aes_size        : AES256 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x4 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 8 

/// SCX authctx_size    : 40 

    0x08000015,// 3 SCX   1 

    0x80664815,// 4 SCX   2 

    0x00004482,// 5 SCX   3 

    0xa5f38c8a,// 6 SCX   4 

    0xc7f305ee,// 7 SCX   5 

    0x85b63aa9,// 8 SCX   6 

    0x9b71446d,// 9 SCX   7 

    0x3b500dd5,// 10 SCX   8 

    0x26e17181,// 11 SCX   9 

    0xc7d3f4d9,// 12 SCX  10 

    0xc06785b4,// 13 SCX  11 

    0x018431e6,// 14 SCX  12 

    0x21acc6dc,// 15 SCX  13 

    0x99684b9f,// 16 SCX  14 

    0xa301e586,// 17 SCX  15 

    0xc12ded09,// 18 SCX  16 

    0x6ed0a042,// 19 SCX  17 

    0xb30b68c1,// 20 SCX  18 

    0xa4cdbcd8,// 21 SCX  19 

    0xdde56303,// 22 SCX  20 

    0xc66a6284,// 23 SCX  21 

/// BFD is 3 words. 

/// BFD tot_len        : 1995 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 349 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 349 

/// BFD lencrypto      : 144 

/// BFD ofstcrypto     : 176 

/// BFD (ofst+len)cry  : 320 

/// BFD ofstiv         : 76 

/// BFD ofsticv        : 1076 

    0x0000015d,// 24 BFD   1 

    0x00b00090,// 25 BFD   2 

    0x0434004c,// 26 BFD   3 

/// MFM is 6 words. 

/// MFM vldnibs        : 25 

    0x250019f0,// 27 MFM   1 

    0x1a28107b,// 28 MFM   2 

    0x227181c1,// 29 MFM   3 

    0xa0028818,// 30 MFM   4 

    0xa7dd537d,// 31 MFM   5 

    0x70000000,// 32 MFM   6 

/// BDA is 500 words. 

/// BDA size     is 1995 (0x7cb) 

/// BDA id       is 0x1f49 

    0x07cb1f49,// 33 BDA   1 

/// PAY Generic Data size   : 1995 byte(s) 

/// PAD Buffer Data Pad size   : 1 byte(s) 

    0x84f42182,// 34 PAY   1 

    0x984e311b,// 35 PAY   2 

    0x307a2b40,// 36 PAY   3 

    0xef04463a,// 37 PAY   4 

    0xaec9e8c2,// 38 PAY   5 

    0x69a46a31,// 39 PAY   6 

    0x2146944f,// 40 PAY   7 

    0x5e19fe81,// 41 PAY   8 

    0x9aecd090,// 42 PAY   9 

    0xda5bec25,// 43 PAY  10 

    0xa455f950,// 44 PAY  11 

    0x028ad785,// 45 PAY  12 

    0x4dc4a0d3,// 46 PAY  13 

    0x479c0166,// 47 PAY  14 

    0xb1e61040,// 48 PAY  15 

    0xb6ab88c6,// 49 PAY  16 

    0xdad6a0d2,// 50 PAY  17 

    0x9a23142a,// 51 PAY  18 

    0xa939976b,// 52 PAY  19 

    0x94931f7f,// 53 PAY  20 

    0xbd0a33e3,// 54 PAY  21 

    0x29447c54,// 55 PAY  22 

    0x082532bb,// 56 PAY  23 

    0x54a01846,// 57 PAY  24 

    0xe7e6ab66,// 58 PAY  25 

    0xef16c332,// 59 PAY  26 

    0xdca5c873,// 60 PAY  27 

    0x61848fce,// 61 PAY  28 

    0x97b8aa35,// 62 PAY  29 

    0xa01cfd7f,// 63 PAY  30 

    0xebf6524c,// 64 PAY  31 

    0x769beb58,// 65 PAY  32 

    0x543f613d,// 66 PAY  33 

    0x59f7b811,// 67 PAY  34 

    0xf53599d3,// 68 PAY  35 

    0x2fa93f2e,// 69 PAY  36 

    0x8bc2ce43,// 70 PAY  37 

    0xb0b596b1,// 71 PAY  38 

    0xe4784018,// 72 PAY  39 

    0x041dc586,// 73 PAY  40 

    0xd5d846dd,// 74 PAY  41 

    0x7ce13be8,// 75 PAY  42 

    0x8ba5fcab,// 76 PAY  43 

    0xeb345232,// 77 PAY  44 

    0xb4121e66,// 78 PAY  45 

    0xb59bb1d5,// 79 PAY  46 

    0x2014a470,// 80 PAY  47 

    0xe2f2d4c2,// 81 PAY  48 

    0x4f8e6d59,// 82 PAY  49 

    0x3b2fa225,// 83 PAY  50 

    0x3f7e2634,// 84 PAY  51 

    0xa3e681cc,// 85 PAY  52 

    0x352483ae,// 86 PAY  53 

    0x3030e1b0,// 87 PAY  54 

    0xa16b916d,// 88 PAY  55 

    0xbc9b03ec,// 89 PAY  56 

    0xd907a45a,// 90 PAY  57 

    0xe8707c6b,// 91 PAY  58 

    0xb820e937,// 92 PAY  59 

    0xec3c0b01,// 93 PAY  60 

    0xce10b696,// 94 PAY  61 

    0x9851b791,// 95 PAY  62 

    0x1bea5bc2,// 96 PAY  63 

    0xdd309a58,// 97 PAY  64 

    0x91d36737,// 98 PAY  65 

    0x5cac27b2,// 99 PAY  66 

    0x7d5fc77c,// 100 PAY  67 

    0x40a67ec1,// 101 PAY  68 

    0xc23d122a,// 102 PAY  69 

    0x4f6af92b,// 103 PAY  70 

    0x7f2e4fc2,// 104 PAY  71 

    0xc45a2c54,// 105 PAY  72 

    0x37be5a0d,// 106 PAY  73 

    0xa9f63fc0,// 107 PAY  74 

    0xc969d8a4,// 108 PAY  75 

    0xdf7b1a1d,// 109 PAY  76 

    0x37a8ebcd,// 110 PAY  77 

    0xcf904652,// 111 PAY  78 

    0xfba474c1,// 112 PAY  79 

    0xc8266fdb,// 113 PAY  80 

    0x5c13e821,// 114 PAY  81 

    0x0d7d3662,// 115 PAY  82 

    0xfa6c2331,// 116 PAY  83 

    0xcf20d58f,// 117 PAY  84 

    0x1e911418,// 118 PAY  85 

    0xd288b999,// 119 PAY  86 

    0x1659562e,// 120 PAY  87 

    0x49261d00,// 121 PAY  88 

    0xaa99fc4b,// 122 PAY  89 

    0x579cfb26,// 123 PAY  90 

    0x3012b63d,// 124 PAY  91 

    0x5c1aa200,// 125 PAY  92 

    0xecbb4ba4,// 126 PAY  93 

    0x8b16af66,// 127 PAY  94 

    0x9c768208,// 128 PAY  95 

    0x69385a05,// 129 PAY  96 

    0xf6f9b425,// 130 PAY  97 

    0x9c9bad31,// 131 PAY  98 

    0x094dcf79,// 132 PAY  99 

    0x95399beb,// 133 PAY 100 

    0xd5e52d04,// 134 PAY 101 

    0xd41b5136,// 135 PAY 102 

    0x3a0ff924,// 136 PAY 103 

    0x93ed93c6,// 137 PAY 104 

    0x2baef2c1,// 138 PAY 105 

    0xc5896098,// 139 PAY 106 

    0x35ade004,// 140 PAY 107 

    0xeca6d67b,// 141 PAY 108 

    0xed45d0ca,// 142 PAY 109 

    0xa9cecfc2,// 143 PAY 110 

    0x242854c4,// 144 PAY 111 

    0x13d80767,// 145 PAY 112 

    0x802036b3,// 146 PAY 113 

    0x72793541,// 147 PAY 114 

    0xc84e2328,// 148 PAY 115 

    0x3abb81e9,// 149 PAY 116 

    0x50bbb154,// 150 PAY 117 

    0x5b81a5b2,// 151 PAY 118 

    0x4a35edfb,// 152 PAY 119 

    0xaa33fe1a,// 153 PAY 120 

    0x7f41888c,// 154 PAY 121 

    0x1ef479fa,// 155 PAY 122 

    0xfc928479,// 156 PAY 123 

    0x17324f3b,// 157 PAY 124 

    0x604cca32,// 158 PAY 125 

    0xf0aab3b9,// 159 PAY 126 

    0xcf25f75d,// 160 PAY 127 

    0x23d7e3f0,// 161 PAY 128 

    0x9c0b1375,// 162 PAY 129 

    0x2c224a12,// 163 PAY 130 

    0x0f9d4eb3,// 164 PAY 131 

    0x252bf17d,// 165 PAY 132 

    0x190c6759,// 166 PAY 133 

    0x478bd83f,// 167 PAY 134 

    0x6554a8c2,// 168 PAY 135 

    0xc6ba4acb,// 169 PAY 136 

    0x9143b021,// 170 PAY 137 

    0x590fa7ac,// 171 PAY 138 

    0x0c61a36a,// 172 PAY 139 

    0xfd5130fc,// 173 PAY 140 

    0xe586f87b,// 174 PAY 141 

    0x61ca7f67,// 175 PAY 142 

    0xdbb84825,// 176 PAY 143 

    0xf0d6f9c1,// 177 PAY 144 

    0x5b924b95,// 178 PAY 145 

    0x5d8d83ed,// 179 PAY 146 

    0x81f292a5,// 180 PAY 147 

    0x3a85cb53,// 181 PAY 148 

    0x2586507b,// 182 PAY 149 

    0x7041fe11,// 183 PAY 150 

    0x1aef7d40,// 184 PAY 151 

    0x28b97160,// 185 PAY 152 

    0xde240dc9,// 186 PAY 153 

    0xd3f58fdd,// 187 PAY 154 

    0x8f8a138f,// 188 PAY 155 

    0xae1b0557,// 189 PAY 156 

    0x9e81b031,// 190 PAY 157 

    0xed10ae05,// 191 PAY 158 

    0x4342d808,// 192 PAY 159 

    0x7c263dd0,// 193 PAY 160 

    0x99516eb1,// 194 PAY 161 

    0xd89deb23,// 195 PAY 162 

    0x76665243,// 196 PAY 163 

    0xa90b24b8,// 197 PAY 164 

    0x2e85aac5,// 198 PAY 165 

    0xc0a7617c,// 199 PAY 166 

    0x4f2d299f,// 200 PAY 167 

    0xa37f7745,// 201 PAY 168 

    0x3255f7b3,// 202 PAY 169 

    0xf8287f72,// 203 PAY 170 

    0x9f94086a,// 204 PAY 171 

    0xdaf2e412,// 205 PAY 172 

    0x7c722e7b,// 206 PAY 173 

    0x8ad5900b,// 207 PAY 174 

    0xcfb19524,// 208 PAY 175 

    0x17d795da,// 209 PAY 176 

    0x305c6a82,// 210 PAY 177 

    0xe2ac2688,// 211 PAY 178 

    0x84c7a4f6,// 212 PAY 179 

    0x69df3ba2,// 213 PAY 180 

    0xf80868c5,// 214 PAY 181 

    0xe41a516d,// 215 PAY 182 

    0x0a7fa5bb,// 216 PAY 183 

    0x87202ed8,// 217 PAY 184 

    0xe7ab6855,// 218 PAY 185 

    0xb92b98f0,// 219 PAY 186 

    0xeea849ec,// 220 PAY 187 

    0x9df68544,// 221 PAY 188 

    0x2b732727,// 222 PAY 189 

    0xd963d294,// 223 PAY 190 

    0x083a88a0,// 224 PAY 191 

    0x24f08ef5,// 225 PAY 192 

    0x144dd8f1,// 226 PAY 193 

    0x03e26442,// 227 PAY 194 

    0xf7b65a38,// 228 PAY 195 

    0x4eb0e80e,// 229 PAY 196 

    0xc9b706da,// 230 PAY 197 

    0x3be2d5f5,// 231 PAY 198 

    0x3da5dccd,// 232 PAY 199 

    0x35195241,// 233 PAY 200 

    0x62da1d1f,// 234 PAY 201 

    0x3724dd48,// 235 PAY 202 

    0x1c0fd3a4,// 236 PAY 203 

    0x5c46cab5,// 237 PAY 204 

    0x46697159,// 238 PAY 205 

    0xf0359912,// 239 PAY 206 

    0x6524c60b,// 240 PAY 207 

    0x3eb60711,// 241 PAY 208 

    0x9e516826,// 242 PAY 209 

    0xdac58f94,// 243 PAY 210 

    0xbe1e38b2,// 244 PAY 211 

    0x18b76de8,// 245 PAY 212 

    0x8dbb9c94,// 246 PAY 213 

    0x547a089d,// 247 PAY 214 

    0x1988a21c,// 248 PAY 215 

    0x8b0a46b5,// 249 PAY 216 

    0x1503831b,// 250 PAY 217 

    0xd5da4dcd,// 251 PAY 218 

    0x7299e833,// 252 PAY 219 

    0x5c1f155f,// 253 PAY 220 

    0x47f1d81b,// 254 PAY 221 

    0x16c3e049,// 255 PAY 222 

    0xea6f0fc1,// 256 PAY 223 

    0xf4d210ad,// 257 PAY 224 

    0x12093e0c,// 258 PAY 225 

    0x1ea68033,// 259 PAY 226 

    0x9bcabe63,// 260 PAY 227 

    0xd2372910,// 261 PAY 228 

    0x36a00260,// 262 PAY 229 

    0x7235c834,// 263 PAY 230 

    0xb84427e9,// 264 PAY 231 

    0x4cc0a966,// 265 PAY 232 

    0xb28d99cc,// 266 PAY 233 

    0x57f3ce67,// 267 PAY 234 

    0xaa5fb4a9,// 268 PAY 235 

    0x7d6e10e0,// 269 PAY 236 

    0x756b7b76,// 270 PAY 237 

    0x2e47b70c,// 271 PAY 238 

    0x132e938d,// 272 PAY 239 

    0x56c45470,// 273 PAY 240 

    0x7b4b3b8e,// 274 PAY 241 

    0x71ed6372,// 275 PAY 242 

    0x1776dc5b,// 276 PAY 243 

    0xc249a57d,// 277 PAY 244 

    0x50e09cdc,// 278 PAY 245 

    0xe3e026d1,// 279 PAY 246 

    0x0e723a81,// 280 PAY 247 

    0x973e14f6,// 281 PAY 248 

    0x9174b9fc,// 282 PAY 249 

    0x0c4aa28a,// 283 PAY 250 

    0x7e99b2ec,// 284 PAY 251 

    0xfda218e7,// 285 PAY 252 

    0x656a94ae,// 286 PAY 253 

    0xb1c5f724,// 287 PAY 254 

    0xdd629250,// 288 PAY 255 

    0xb7cbfd0a,// 289 PAY 256 

    0x9d4e76b4,// 290 PAY 257 

    0xffe681f8,// 291 PAY 258 

    0x7e5931b0,// 292 PAY 259 

    0xdd90c62a,// 293 PAY 260 

    0xe5c94bbe,// 294 PAY 261 

    0xb28a88b5,// 295 PAY 262 

    0x34bfec76,// 296 PAY 263 

    0x5fec18c9,// 297 PAY 264 

    0xa205d8e7,// 298 PAY 265 

    0x07b963cb,// 299 PAY 266 

    0x4476d5ce,// 300 PAY 267 

    0xa86a0b90,// 301 PAY 268 

    0x64694549,// 302 PAY 269 

    0x119d9919,// 303 PAY 270 

    0xea109f0e,// 304 PAY 271 

    0xc85f48e3,// 305 PAY 272 

    0xfbfecd67,// 306 PAY 273 

    0x4c4c9dc0,// 307 PAY 274 

    0x4ab0789c,// 308 PAY 275 

    0xb33ee669,// 309 PAY 276 

    0x4bc33486,// 310 PAY 277 

    0xca4bd54a,// 311 PAY 278 

    0x43b19d95,// 312 PAY 279 

    0xf4ccf62c,// 313 PAY 280 

    0x2e1a0b76,// 314 PAY 281 

    0x1e964558,// 315 PAY 282 

    0xc71249f9,// 316 PAY 283 

    0xd23ec784,// 317 PAY 284 

    0x82a930ed,// 318 PAY 285 

    0xe6ba09a0,// 319 PAY 286 

    0x1f4b475b,// 320 PAY 287 

    0x0f71042e,// 321 PAY 288 

    0xbbaa06ca,// 322 PAY 289 

    0xedc48898,// 323 PAY 290 

    0x438cbc30,// 324 PAY 291 

    0x9fe81316,// 325 PAY 292 

    0x05850868,// 326 PAY 293 

    0x9656b8f0,// 327 PAY 294 

    0x45cd27ed,// 328 PAY 295 

    0x319829d8,// 329 PAY 296 

    0x5e52f244,// 330 PAY 297 

    0x6ade11e3,// 331 PAY 298 

    0xeda5eeab,// 332 PAY 299 

    0xd19163d6,// 333 PAY 300 

    0xdad582ec,// 334 PAY 301 

    0x196071e5,// 335 PAY 302 

    0x381c2509,// 336 PAY 303 

    0xfed7adc7,// 337 PAY 304 

    0x25d3f39e,// 338 PAY 305 

    0xd7538d4e,// 339 PAY 306 

    0x4004856c,// 340 PAY 307 

    0x8e9dc914,// 341 PAY 308 

    0xa76f7013,// 342 PAY 309 

    0x35780ff6,// 343 PAY 310 

    0x5093929a,// 344 PAY 311 

    0x03b3eb14,// 345 PAY 312 

    0x063e31fc,// 346 PAY 313 

    0xd4615185,// 347 PAY 314 

    0x1d12dd49,// 348 PAY 315 

    0xd5e4e8d5,// 349 PAY 316 

    0x2e5f2aa9,// 350 PAY 317 

    0xd45a46f9,// 351 PAY 318 

    0x24ecb69b,// 352 PAY 319 

    0xb809be75,// 353 PAY 320 

    0x6ad416f3,// 354 PAY 321 

    0x3fa5fc64,// 355 PAY 322 

    0x7f437d6d,// 356 PAY 323 

    0xb0e3eb0f,// 357 PAY 324 

    0x01304da1,// 358 PAY 325 

    0x852cbfc9,// 359 PAY 326 

    0xd6cf607f,// 360 PAY 327 

    0x496a85b4,// 361 PAY 328 

    0x395ce093,// 362 PAY 329 

    0x6c5057f3,// 363 PAY 330 

    0x473fe019,// 364 PAY 331 

    0xceb2fd89,// 365 PAY 332 

    0xc23600ff,// 366 PAY 333 

    0x0f105cbc,// 367 PAY 334 

    0x995889f6,// 368 PAY 335 

    0x7140433c,// 369 PAY 336 

    0x61c8c957,// 370 PAY 337 

    0x1530e6a9,// 371 PAY 338 

    0x2fd0a33a,// 372 PAY 339 

    0x3290fcf9,// 373 PAY 340 

    0x7e9fc35b,// 374 PAY 341 

    0xec096d11,// 375 PAY 342 

    0x997ea2aa,// 376 PAY 343 

    0xf1a65fc7,// 377 PAY 344 

    0xe90057a3,// 378 PAY 345 

    0x9e1fe629,// 379 PAY 346 

    0x870d63f3,// 380 PAY 347 

    0x35593eff,// 381 PAY 348 

    0x6dc31984,// 382 PAY 349 

    0xb4a7a1ae,// 383 PAY 350 

    0x0ac7f9c7,// 384 PAY 351 

    0x7b9eaf1e,// 385 PAY 352 

    0x7819e6f5,// 386 PAY 353 

    0xb17f2a01,// 387 PAY 354 

    0xa165bffc,// 388 PAY 355 

    0x4823e423,// 389 PAY 356 

    0xc42f6379,// 390 PAY 357 

    0x51d964ed,// 391 PAY 358 

    0xfa52d534,// 392 PAY 359 

    0x2673c795,// 393 PAY 360 

    0xf10c051a,// 394 PAY 361 

    0x4197dfea,// 395 PAY 362 

    0x2f3512c3,// 396 PAY 363 

    0xa629886a,// 397 PAY 364 

    0x29ac4124,// 398 PAY 365 

    0x472cb575,// 399 PAY 366 

    0x82ab8f6c,// 400 PAY 367 

    0x67008d77,// 401 PAY 368 

    0x351ed91d,// 402 PAY 369 

    0x24018caa,// 403 PAY 370 

    0x96ada729,// 404 PAY 371 

    0xda221212,// 405 PAY 372 

    0x23a3f21f,// 406 PAY 373 

    0x1a290894,// 407 PAY 374 

    0x3e93ffef,// 408 PAY 375 

    0x832354d5,// 409 PAY 376 

    0xc59aab98,// 410 PAY 377 

    0x63e8f534,// 411 PAY 378 

    0x6aaac5d7,// 412 PAY 379 

    0xf2f91458,// 413 PAY 380 

    0x8d96e7cd,// 414 PAY 381 

    0x651c62ab,// 415 PAY 382 

    0x6d512444,// 416 PAY 383 

    0xcce5979c,// 417 PAY 384 

    0x849da775,// 418 PAY 385 

    0xb95d55eb,// 419 PAY 386 

    0xec0179c9,// 420 PAY 387 

    0x64b7c874,// 421 PAY 388 

    0x858970a0,// 422 PAY 389 

    0x1c25bee2,// 423 PAY 390 

    0x341d3781,// 424 PAY 391 

    0x9548c4d8,// 425 PAY 392 

    0xc738c4f0,// 426 PAY 393 

    0x270a4077,// 427 PAY 394 

    0xa65c81c4,// 428 PAY 395 

    0x96666b17,// 429 PAY 396 

    0x7c6e0b36,// 430 PAY 397 

    0x39f837a4,// 431 PAY 398 

    0xb1439c5a,// 432 PAY 399 

    0xd97757c4,// 433 PAY 400 

    0x318b920b,// 434 PAY 401 

    0x5abad888,// 435 PAY 402 

    0x6258dd9d,// 436 PAY 403 

    0x7753a323,// 437 PAY 404 

    0xa8100013,// 438 PAY 405 

    0x14943b07,// 439 PAY 406 

    0xfcf94c16,// 440 PAY 407 

    0xa3ba9af9,// 441 PAY 408 

    0x414b01e8,// 442 PAY 409 

    0xb89c3380,// 443 PAY 410 

    0x915927c0,// 444 PAY 411 

    0x765cbb92,// 445 PAY 412 

    0x35bb8027,// 446 PAY 413 

    0x230ced20,// 447 PAY 414 

    0x2f829af4,// 448 PAY 415 

    0x97450a54,// 449 PAY 416 

    0x7460ef16,// 450 PAY 417 

    0x07b408b3,// 451 PAY 418 

    0xc2812255,// 452 PAY 419 

    0x244e192c,// 453 PAY 420 

    0x327d3910,// 454 PAY 421 

    0xf8a146d7,// 455 PAY 422 

    0xfcc0e5c4,// 456 PAY 423 

    0xfb88670b,// 457 PAY 424 

    0x36005265,// 458 PAY 425 

    0xdf9f9e91,// 459 PAY 426 

    0x5a4ab589,// 460 PAY 427 

    0xa55d340d,// 461 PAY 428 

    0x15a47640,// 462 PAY 429 

    0xe7ca6b1e,// 463 PAY 430 

    0x282eeb22,// 464 PAY 431 

    0x63984a88,// 465 PAY 432 

    0xea3dee0b,// 466 PAY 433 

    0x78f30a10,// 467 PAY 434 

    0x2052fe35,// 468 PAY 435 

    0xd828fa14,// 469 PAY 436 

    0x2d8c7629,// 470 PAY 437 

    0x39480446,// 471 PAY 438 

    0xe56b3cfb,// 472 PAY 439 

    0xca72f7d1,// 473 PAY 440 

    0xd7096e10,// 474 PAY 441 

    0x13c1055a,// 475 PAY 442 

    0xec7a285a,// 476 PAY 443 

    0x836dea3a,// 477 PAY 444 

    0x772d65eb,// 478 PAY 445 

    0x5deb013f,// 479 PAY 446 

    0x08b859b1,// 480 PAY 447 

    0xa2f484ee,// 481 PAY 448 

    0x08eba95b,// 482 PAY 449 

    0xf4cd8fd2,// 483 PAY 450 

    0xa5382fa4,// 484 PAY 451 

    0x9aef4aa7,// 485 PAY 452 

    0xbb778058,// 486 PAY 453 

    0x4b41c88c,// 487 PAY 454 

    0x4446f180,// 488 PAY 455 

    0x8ac14022,// 489 PAY 456 

    0x73486841,// 490 PAY 457 

    0x81293da1,// 491 PAY 458 

    0x8e54e2fd,// 492 PAY 459 

    0xcbfdfd77,// 493 PAY 460 

    0xfb0c97f1,// 494 PAY 461 

    0x6fce7047,// 495 PAY 462 

    0x92fef02a,// 496 PAY 463 

    0x9f527108,// 497 PAY 464 

    0xcdf6ca38,// 498 PAY 465 

    0xbd16e3bd,// 499 PAY 466 

    0x9b07e073,// 500 PAY 467 

    0x8a5d7a06,// 501 PAY 468 

    0x08f486e3,// 502 PAY 469 

    0xcae69a19,// 503 PAY 470 

    0x8333749a,// 504 PAY 471 

    0xd119567d,// 505 PAY 472 

    0xdabed7b6,// 506 PAY 473 

    0xb8e6132c,// 507 PAY 474 

    0x3b49ca34,// 508 PAY 475 

    0xb149f408,// 509 PAY 476 

    0x93b453de,// 510 PAY 477 

    0x108f3bc7,// 511 PAY 478 

    0x7048aecd,// 512 PAY 479 

    0xa5d84215,// 513 PAY 480 

    0x625d343c,// 514 PAY 481 

    0x7991fb8b,// 515 PAY 482 

    0xc66ef06c,// 516 PAY 483 

    0xc44c504c,// 517 PAY 484 

    0xaddf4a3b,// 518 PAY 485 

    0xb9c41734,// 519 PAY 486 

    0x103ec807,// 520 PAY 487 

    0x18b64eb5,// 521 PAY 488 

    0x21271b37,// 522 PAY 489 

    0x785e812d,// 523 PAY 490 

    0xd2e6b654,// 524 PAY 491 

    0xedfa2960,// 525 PAY 492 

    0x1a49a250,// 526 PAY 493 

    0x3b972f4b,// 527 PAY 494 

    0xf2f32d83,// 528 PAY 495 

    0xe8b926f5,// 529 PAY 496 

    0x18f4927c,// 530 PAY 497 

    0x259850ba,// 531 PAY 498 

    0x1a0c6600,// 532 PAY 499 

/// STA is 1 words. 

/// STA num_pkts       : 244 

/// STA pkt_idx        : 68 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x7a 

    0x01107af4 // 533 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 80 (0x50) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_sha1_pkt60_tmpl[] = {
    0xb8010050,// 1 CCH   1 

/// ECH cache_idx      : 0x0d 

/// ECH pdu_tag        : 0x00 

    0x000d0000,// 2 ECH   1 

/// SCX is 19 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound save_icv insert_icv !check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : SHA1 

/// SCX aes_size        : NORMAL_RC4INIT_AES128 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x3 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 40 

    0x00000013,// 3 SCX   1 

    0x80604869,// 4 SCX   2 

    0x00006300,// 5 SCX   3 

    0x2691ce61,// 6 SCX   4 

    0x55618799,// 7 SCX   5 

    0xf72ba21d,// 8 SCX   6 

    0x9825865e,// 9 SCX   7 

    0xdc1e2f68,// 10 SCX   8 

    0x4aa6b4b5,// 11 SCX   9 

    0x97d8b147,// 12 SCX  10 

    0xaf6c14b4,// 13 SCX  11 

    0x90241325,// 14 SCX  12 

    0x785e483b,// 15 SCX  13 

    0x7dc73305,// 16 SCX  14 

    0xa3025067,// 17 SCX  15 

    0xe3f8c393,// 18 SCX  16 

    0x562b6915,// 19 SCX  17 

    0x43398642,// 20 SCX  18 

    0x413280c1,// 21 SCX  19 

/// BFD is 3 words. 

/// BFD tot_len        : 1315 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 1267 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 1267 

/// BFD lencrypto      : 104 

/// BFD ofstcrypto     : 588 

/// BFD (ofst+len)cry  : 692 

/// BFD ofstiv         : 412 

/// BFD ofsticv        : 1272 

    0x000004f3,// 22 BFD   1 

    0x024c0068,// 23 BFD   2 

    0x04f8019c,// 24 BFD   3 

/// MFM is 16 words. 

/// MFM vldnibs        : 7c 

    0x7c004f67,// 25 MFM   1 

    0xb549c81a,// 26 MFM   2 

    0x32ac037c,// 27 MFM   3 

    0xe8a020a4,// 28 MFM   4 

    0x776d0d53,// 29 MFM   5 

    0x77a3f06b,// 30 MFM   6 

    0x8d68afc5,// 31 MFM   7 

    0x399e7d84,// 32 MFM   8 

    0xfcd002f5,// 33 MFM   9 

    0xdfb99be1,// 34 MFM  10 

    0x602c3d09,// 35 MFM  11 

    0xc13b8fae,// 36 MFM  12 

    0x9d283d05,// 37 MFM  13 

    0x308db37a,// 38 MFM  14 

    0xf6fc3941,// 39 MFM  15 

    0xd9828be7,// 40 MFM  16 

/// BDA is 330 words. 

/// BDA size     is 1315 (0x523) 

/// BDA id       is 0x6d6b 

    0x05236d6b,// 41 BDA   1 

/// PAY Generic Data size   : 1315 byte(s) 

/// PAD Buffer Data Pad size   : 1 byte(s) 

    0x936ee552,// 42 PAY   1 

    0xe357a67a,// 43 PAY   2 

    0x1a9bc172,// 44 PAY   3 

    0x434800e9,// 45 PAY   4 

    0x771cebf0,// 46 PAY   5 

    0x4681b236,// 47 PAY   6 

    0xc1b3f976,// 48 PAY   7 

    0xd7d013f2,// 49 PAY   8 

    0x251f7a10,// 50 PAY   9 

    0xdf8a5dac,// 51 PAY  10 

    0x7f5792df,// 52 PAY  11 

    0x39500ed9,// 53 PAY  12 

    0x5ce01e96,// 54 PAY  13 

    0x1db0f92b,// 55 PAY  14 

    0x7c13cfe9,// 56 PAY  15 

    0x51e51bad,// 57 PAY  16 

    0x15c4bb36,// 58 PAY  17 

    0x2fab6058,// 59 PAY  18 

    0xb178ed6f,// 60 PAY  19 

    0x2b381cf1,// 61 PAY  20 

    0x20600656,// 62 PAY  21 

    0x5f19299c,// 63 PAY  22 

    0x211359bb,// 64 PAY  23 

    0x85c0a32d,// 65 PAY  24 

    0x8899c6d1,// 66 PAY  25 

    0x620b92cb,// 67 PAY  26 

    0x1cbd340a,// 68 PAY  27 

    0x546adc7f,// 69 PAY  28 

    0x329a4865,// 70 PAY  29 

    0xf5c345bb,// 71 PAY  30 

    0xb475ecdb,// 72 PAY  31 

    0xb7c66ea0,// 73 PAY  32 

    0x0951ed51,// 74 PAY  33 

    0xabebe92b,// 75 PAY  34 

    0xa2bff095,// 76 PAY  35 

    0xd9222a84,// 77 PAY  36 

    0xa54c20b4,// 78 PAY  37 

    0xbbfd8cfb,// 79 PAY  38 

    0xb495a9c8,// 80 PAY  39 

    0x59983d14,// 81 PAY  40 

    0xabac7957,// 82 PAY  41 

    0x0164eeba,// 83 PAY  42 

    0xe1f14c1f,// 84 PAY  43 

    0x56759c4f,// 85 PAY  44 

    0x2f3073fc,// 86 PAY  45 

    0xdbea45b9,// 87 PAY  46 

    0x521a3456,// 88 PAY  47 

    0x8bc97307,// 89 PAY  48 

    0x170d012b,// 90 PAY  49 

    0x4187799d,// 91 PAY  50 

    0xf8c4f374,// 92 PAY  51 

    0x638660e2,// 93 PAY  52 

    0x390ca033,// 94 PAY  53 

    0x1e4676e5,// 95 PAY  54 

    0xc012491c,// 96 PAY  55 

    0x9ae51102,// 97 PAY  56 

    0x43124e37,// 98 PAY  57 

    0x2fab2951,// 99 PAY  58 

    0x636147a6,// 100 PAY  59 

    0x9a0bb2d8,// 101 PAY  60 

    0x028d9d3d,// 102 PAY  61 

    0xe03004e4,// 103 PAY  62 

    0x4eff9152,// 104 PAY  63 

    0xdea5f6a0,// 105 PAY  64 

    0x58c052db,// 106 PAY  65 

    0x85f73730,// 107 PAY  66 

    0x91e70aee,// 108 PAY  67 

    0x35e9b679,// 109 PAY  68 

    0x9ba375b2,// 110 PAY  69 

    0x4e31f6ea,// 111 PAY  70 

    0x66df9b6b,// 112 PAY  71 

    0x2caf273a,// 113 PAY  72 

    0x3dccdec5,// 114 PAY  73 

    0x0356f329,// 115 PAY  74 

    0x02115be5,// 116 PAY  75 

    0x559f0e14,// 117 PAY  76 

    0x093c5cb7,// 118 PAY  77 

    0x8e919e70,// 119 PAY  78 

    0x4065a5e1,// 120 PAY  79 

    0x664ec02a,// 121 PAY  80 

    0x18f67fed,// 122 PAY  81 

    0x4f460d7c,// 123 PAY  82 

    0x5cfbbdd0,// 124 PAY  83 

    0x7cbe76bc,// 125 PAY  84 

    0x01499c4c,// 126 PAY  85 

    0x8f69f184,// 127 PAY  86 

    0x6b01a865,// 128 PAY  87 

    0x64d33972,// 129 PAY  88 

    0xa3a541ca,// 130 PAY  89 

    0x9f8316ed,// 131 PAY  90 

    0x78115a31,// 132 PAY  91 

    0xbc7eb81b,// 133 PAY  92 

    0x3e1472f5,// 134 PAY  93 

    0x21e1548d,// 135 PAY  94 

    0x183a2f60,// 136 PAY  95 

    0x916a2558,// 137 PAY  96 

    0xf773c6a3,// 138 PAY  97 

    0x54c18225,// 139 PAY  98 

    0xb9df2a92,// 140 PAY  99 

    0x7ac74b09,// 141 PAY 100 

    0x3c8a9530,// 142 PAY 101 

    0xe1a09a2c,// 143 PAY 102 

    0x5b487b41,// 144 PAY 103 

    0xf86f4044,// 145 PAY 104 

    0x0d9f5b1d,// 146 PAY 105 

    0x6baa4494,// 147 PAY 106 

    0x43395dd5,// 148 PAY 107 

    0xa6a0068b,// 149 PAY 108 

    0x1dd47d66,// 150 PAY 109 

    0xbe5e5c26,// 151 PAY 110 

    0xfcd8828b,// 152 PAY 111 

    0x317986bf,// 153 PAY 112 

    0x9a0c5b24,// 154 PAY 113 

    0x226e197e,// 155 PAY 114 

    0xa66bbeb7,// 156 PAY 115 

    0x8f01ece4,// 157 PAY 116 

    0xc597c7e0,// 158 PAY 117 

    0xc67425ae,// 159 PAY 118 

    0xcb40d1c7,// 160 PAY 119 

    0x01a0aaad,// 161 PAY 120 

    0x8aa9cf53,// 162 PAY 121 

    0x765bb3ea,// 163 PAY 122 

    0xd7f775c8,// 164 PAY 123 

    0x62064aaa,// 165 PAY 124 

    0xcb161f29,// 166 PAY 125 

    0xb7bd9643,// 167 PAY 126 

    0x6e1ec725,// 168 PAY 127 

    0xcade8f37,// 169 PAY 128 

    0x2a07d33d,// 170 PAY 129 

    0x1bd8430e,// 171 PAY 130 

    0x36ca37d2,// 172 PAY 131 

    0x7b651876,// 173 PAY 132 

    0x2f6b2ba5,// 174 PAY 133 

    0xd226782a,// 175 PAY 134 

    0x269adfe8,// 176 PAY 135 

    0xfe853adf,// 177 PAY 136 

    0xaf1f9acc,// 178 PAY 137 

    0x47ddd394,// 179 PAY 138 

    0xc562e4b2,// 180 PAY 139 

    0x58dad4c6,// 181 PAY 140 

    0xbc47ef0b,// 182 PAY 141 

    0xf2133040,// 183 PAY 142 

    0xefcb526a,// 184 PAY 143 

    0x0c1c9e40,// 185 PAY 144 

    0x28a955a2,// 186 PAY 145 

    0x11b2342b,// 187 PAY 146 

    0x4cfbbd90,// 188 PAY 147 

    0x46c7549d,// 189 PAY 148 

    0x0aa6c188,// 190 PAY 149 

    0xc844f16e,// 191 PAY 150 

    0x933fd351,// 192 PAY 151 

    0x6a17ec7c,// 193 PAY 152 

    0x8761b958,// 194 PAY 153 

    0x85f3ddc3,// 195 PAY 154 

    0x0f347eb5,// 196 PAY 155 

    0x166642d3,// 197 PAY 156 

    0x30cacb4e,// 198 PAY 157 

    0x92c1af13,// 199 PAY 158 

    0xf1df6302,// 200 PAY 159 

    0xc4f468f7,// 201 PAY 160 

    0x8b39d0e4,// 202 PAY 161 

    0xf19e3995,// 203 PAY 162 

    0x3cb4a465,// 204 PAY 163 

    0xf291531b,// 205 PAY 164 

    0xe03cbf6d,// 206 PAY 165 

    0x84a03594,// 207 PAY 166 

    0x656db6ca,// 208 PAY 167 

    0x74776803,// 209 PAY 168 

    0xd70cfc21,// 210 PAY 169 

    0x1e5e8fd0,// 211 PAY 170 

    0x93e4580d,// 212 PAY 171 

    0x535e8c88,// 213 PAY 172 

    0x105c5016,// 214 PAY 173 

    0xf55e7805,// 215 PAY 174 

    0x9dc7a6ef,// 216 PAY 175 

    0x432c35b1,// 217 PAY 176 

    0x75c67209,// 218 PAY 177 

    0xe4360a5f,// 219 PAY 178 

    0x47cc1b61,// 220 PAY 179 

    0x1666fac6,// 221 PAY 180 

    0x05569415,// 222 PAY 181 

    0xba1d21ed,// 223 PAY 182 

    0xeefcc37d,// 224 PAY 183 

    0x389f7d39,// 225 PAY 184 

    0x19e234f4,// 226 PAY 185 

    0xa962f36a,// 227 PAY 186 

    0x445ee7a0,// 228 PAY 187 

    0x39a10da9,// 229 PAY 188 

    0x8e23f4e7,// 230 PAY 189 

    0xcfe7e824,// 231 PAY 190 

    0x55c6e2f2,// 232 PAY 191 

    0x423e8ec1,// 233 PAY 192 

    0x7bbf6e74,// 234 PAY 193 

    0xb7ed6b8c,// 235 PAY 194 

    0xe1cbe51d,// 236 PAY 195 

    0x276b9583,// 237 PAY 196 

    0x0597543b,// 238 PAY 197 

    0xea12b5fd,// 239 PAY 198 

    0xd8c92453,// 240 PAY 199 

    0x7e2a26c3,// 241 PAY 200 

    0x43612f0d,// 242 PAY 201 

    0x632e7c42,// 243 PAY 202 

    0x4e9a2aad,// 244 PAY 203 

    0x6c552f48,// 245 PAY 204 

    0x797e5193,// 246 PAY 205 

    0xcf7f2ba0,// 247 PAY 206 

    0x5977e86f,// 248 PAY 207 

    0x376e8876,// 249 PAY 208 

    0xe09e46af,// 250 PAY 209 

    0x98c4fb5e,// 251 PAY 210 

    0x0354d110,// 252 PAY 211 

    0xe1c65b26,// 253 PAY 212 

    0xe713a1c8,// 254 PAY 213 

    0x1203f52e,// 255 PAY 214 

    0xe4b1ae2c,// 256 PAY 215 

    0x4e711008,// 257 PAY 216 

    0xc50c828f,// 258 PAY 217 

    0xb30aa4cd,// 259 PAY 218 

    0xdb965325,// 260 PAY 219 

    0xcaa15d82,// 261 PAY 220 

    0xab293cf3,// 262 PAY 221 

    0x6f3ea023,// 263 PAY 222 

    0x211fa230,// 264 PAY 223 

    0x42d4017b,// 265 PAY 224 

    0x7914947a,// 266 PAY 225 

    0xccd9a853,// 267 PAY 226 

    0xea24bd2c,// 268 PAY 227 

    0x63bac64c,// 269 PAY 228 

    0x5b0e62a0,// 270 PAY 229 

    0xdf6f4015,// 271 PAY 230 

    0xc7e5fc65,// 272 PAY 231 

    0x9c5c6b2b,// 273 PAY 232 

    0xafa06f06,// 274 PAY 233 

    0xd8442a8a,// 275 PAY 234 

    0xc77a331c,// 276 PAY 235 

    0xaf788f29,// 277 PAY 236 

    0xbfd3b02e,// 278 PAY 237 

    0xf0a190ec,// 279 PAY 238 

    0xcd1a8a1c,// 280 PAY 239 

    0x8af9c1dd,// 281 PAY 240 

    0x7bcd5728,// 282 PAY 241 

    0x917edd2a,// 283 PAY 242 

    0xd38c90d6,// 284 PAY 243 

    0x07c04399,// 285 PAY 244 

    0x326c50dd,// 286 PAY 245 

    0xc7efe64a,// 287 PAY 246 

    0xf2322d67,// 288 PAY 247 

    0x7a82ba58,// 289 PAY 248 

    0x9eedefb7,// 290 PAY 249 

    0x3abb3b7b,// 291 PAY 250 

    0xb95ffa8a,// 292 PAY 251 

    0xb1bd4b5b,// 293 PAY 252 

    0xd25eefaf,// 294 PAY 253 

    0x384d149d,// 295 PAY 254 

    0x9443dfb6,// 296 PAY 255 

    0xa7b11124,// 297 PAY 256 

    0xdcf8c999,// 298 PAY 257 

    0x4ad3fe4f,// 299 PAY 258 

    0xdcef7e39,// 300 PAY 259 

    0xe7b392f9,// 301 PAY 260 

    0xa509cfd6,// 302 PAY 261 

    0x47f1ff67,// 303 PAY 262 

    0x96bd2c08,// 304 PAY 263 

    0x53cdd406,// 305 PAY 264 

    0xacf5e339,// 306 PAY 265 

    0x65050bc0,// 307 PAY 266 

    0xccb065fc,// 308 PAY 267 

    0x5a6715dc,// 309 PAY 268 

    0xb9bd853a,// 310 PAY 269 

    0x3a355a6b,// 311 PAY 270 

    0x73aac9d4,// 312 PAY 271 

    0xa20c86e3,// 313 PAY 272 

    0x51c63c76,// 314 PAY 273 

    0x89acffcc,// 315 PAY 274 

    0x2ab1c201,// 316 PAY 275 

    0x46bf3dc3,// 317 PAY 276 

    0xb3438797,// 318 PAY 277 

    0xa4254ede,// 319 PAY 278 

    0xed97f4c2,// 320 PAY 279 

    0x0c9f43a1,// 321 PAY 280 

    0x7154d291,// 322 PAY 281 

    0x2fe102ac,// 323 PAY 282 

    0x97d1a227,// 324 PAY 283 

    0x0511cb6f,// 325 PAY 284 

    0x63a0d0eb,// 326 PAY 285 

    0xc8ac04dd,// 327 PAY 286 

    0x2ee351c0,// 328 PAY 287 

    0x69ed2da9,// 329 PAY 288 

    0xb9803e06,// 330 PAY 289 

    0x8fb93d7f,// 331 PAY 290 

    0xf58a9f4d,// 332 PAY 291 

    0x5ca9110c,// 333 PAY 292 

    0xa208cb63,// 334 PAY 293 

    0x4bea88cf,// 335 PAY 294 

    0x0dfdc6d7,// 336 PAY 295 

    0x12c82576,// 337 PAY 296 

    0xd0ddaa9a,// 338 PAY 297 

    0xb55f02df,// 339 PAY 298 

    0xfebf99c2,// 340 PAY 299 

    0x8d730ee4,// 341 PAY 300 

    0x36979c65,// 342 PAY 301 

    0xe1c11265,// 343 PAY 302 

    0x77278512,// 344 PAY 303 

    0x2c6d8c5d,// 345 PAY 304 

    0x79352373,// 346 PAY 305 

    0x3a1b4dd6,// 347 PAY 306 

    0x176b84e8,// 348 PAY 307 

    0x6b0335fa,// 349 PAY 308 

    0xd14dde36,// 350 PAY 309 

    0x777a3f62,// 351 PAY 310 

    0x7749762f,// 352 PAY 311 

    0x6d3b34ac,// 353 PAY 312 

    0xbd237d01,// 354 PAY 313 

    0xd6b76675,// 355 PAY 314 

    0xe1ba9e00,// 356 PAY 315 

    0x23925064,// 357 PAY 316 

    0xb2db7132,// 358 PAY 317 

    0xab41647a,// 359 PAY 318 

    0xae1b9831,// 360 PAY 319 

    0xca4393cf,// 361 PAY 320 

    0xcbcaa327,// 362 PAY 321 

    0x2e8dbdf8,// 363 PAY 322 

    0x2f215715,// 364 PAY 323 

    0xbda06aa3,// 365 PAY 324 

    0xb535c375,// 366 PAY 325 

    0x2a4ce145,// 367 PAY 326 

    0x38a5d8dd,// 368 PAY 327 

    0x4e1f7385,// 369 PAY 328 

    0xc82fd000,// 370 PAY 329 

/// STA is 1 words. 

/// STA num_pkts       : 18 

/// STA pkt_idx        : 20 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xda 

    0x0051da12 // 371 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 88 (0x58) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_sha1_pkt61_tmpl[] = {
    0xb8010058,// 1 CCH   1 

/// ECH cache_idx      : 0x00 

/// ECH pdu_tag        : 0x00 

    0x00000000,// 2 ECH   1 

/// SCX is 21 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound save_icv !insert_icv check_icv sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : SHA1 

/// SCX aes_size        : AES256 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x3 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 8 

/// SCX authctx_size    : 40 

    0x08000015,// 3 SCX   1 

    0x806648b0,// 4 SCX   2 

    0x00005382,// 5 SCX   3 

    0x93662551,// 6 SCX   4 

    0x525c06f4,// 7 SCX   5 

    0xabe14617,// 8 SCX   6 

    0x6e0403ed,// 9 SCX   7 

    0x87a02cd9,// 10 SCX   8 

    0xe503bfee,// 11 SCX   9 

    0x22594197,// 12 SCX  10 

    0x1cf18f4b,// 13 SCX  11 

    0xe814dc87,// 14 SCX  12 

    0x946fcc75,// 15 SCX  13 

    0x166a856c,// 16 SCX  14 

    0x2febd0cf,// 17 SCX  15 

    0x27fd163c,// 18 SCX  16 

    0x41951f59,// 19 SCX  17 

    0xcd990e55,// 20 SCX  18 

    0x6525a099,// 21 SCX  19 

    0xbf1fb002,// 22 SCX  20 

    0x4782174a,// 23 SCX  21 

/// BFD is 3 words. 

/// BFD tot_len        : 2009 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 1825 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 1825 

/// BFD lencrypto      : 160 

/// BFD ofstcrypto     : 1180 

/// BFD (ofst+len)cry  : 1340 

/// BFD ofstiv         : 896 

/// BFD ofsticv        : 1856 

    0x00000721,// 24 BFD   1 

    0x049c00a0,// 25 BFD   2 

    0x07400380,// 26 BFD   3 

/// MFM is 16 words. 

/// MFM vldnibs        : 7c 

    0x7c00a73e,// 27 MFM   1 

    0x7f2f5286,// 28 MFM   2 

    0x57b96055,// 29 MFM   3 

    0x3199d7d0,// 30 MFM   4 

    0xa3af2f77,// 31 MFM   5 

    0xa1debbd2,// 32 MFM   6 

    0x896a382d,// 33 MFM   7 

    0x5ae89638,// 34 MFM   8 

    0x5bc12951,// 35 MFM   9 

    0x26f257b0,// 36 MFM  10 

    0xb5775d9d,// 37 MFM  11 

    0xa9826d36,// 38 MFM  12 

    0x6a2ccec3,// 39 MFM  13 

    0x5ed23acf,// 40 MFM  14 

    0xec49e793,// 41 MFM  15 

    0x4ab146bd,// 42 MFM  16 

/// BDA is 504 words. 

/// BDA size     is 2009 (0x7d9) 

/// BDA id       is 0xb58b 

    0x07d9b58b,// 43 BDA   1 

/// PAY Generic Data size   : 2009 byte(s) 

/// PAD Buffer Data Pad size   : 3 byte(s) 

    0xa865d045,// 44 PAY   1 

    0xddf5a65f,// 45 PAY   2 

    0x3cbe262d,// 46 PAY   3 

    0x47d674e6,// 47 PAY   4 

    0xb16b3d8b,// 48 PAY   5 

    0xe3306678,// 49 PAY   6 

    0x8f4636a8,// 50 PAY   7 

    0x0851b840,// 51 PAY   8 

    0xc7d263dc,// 52 PAY   9 

    0x2db72976,// 53 PAY  10 

    0x5269f198,// 54 PAY  11 

    0xb6e39aec,// 55 PAY  12 

    0xcdd1de51,// 56 PAY  13 

    0x760d3622,// 57 PAY  14 

    0x210e8adf,// 58 PAY  15 

    0x8c24a92f,// 59 PAY  16 

    0x28d4fa1b,// 60 PAY  17 

    0x6cb558c8,// 61 PAY  18 

    0x48f11cb0,// 62 PAY  19 

    0xfbef1971,// 63 PAY  20 

    0x5ad0df19,// 64 PAY  21 

    0xba9e9943,// 65 PAY  22 

    0x5ba109c4,// 66 PAY  23 

    0x06e7bf8d,// 67 PAY  24 

    0x606ceafb,// 68 PAY  25 

    0x3074dac0,// 69 PAY  26 

    0xe1aaf266,// 70 PAY  27 

    0x8a9cd25f,// 71 PAY  28 

    0x4298124d,// 72 PAY  29 

    0x7a6f1e1c,// 73 PAY  30 

    0x98f45a2c,// 74 PAY  31 

    0xce5fd3b3,// 75 PAY  32 

    0x19f5b8c5,// 76 PAY  33 

    0xa1aeff50,// 77 PAY  34 

    0x9690b9de,// 78 PAY  35 

    0x17998339,// 79 PAY  36 

    0x20680ba8,// 80 PAY  37 

    0x945cce47,// 81 PAY  38 

    0xaa8fb936,// 82 PAY  39 

    0x691774fc,// 83 PAY  40 

    0x93d479a4,// 84 PAY  41 

    0xdbc0774e,// 85 PAY  42 

    0x395a017d,// 86 PAY  43 

    0x8734bed7,// 87 PAY  44 

    0x56441aaa,// 88 PAY  45 

    0x54ac1e24,// 89 PAY  46 

    0xcb5e4df1,// 90 PAY  47 

    0xc68c10a1,// 91 PAY  48 

    0x198d72f0,// 92 PAY  49 

    0x06a015aa,// 93 PAY  50 

    0x3dd3d0bd,// 94 PAY  51 

    0x5979f46d,// 95 PAY  52 

    0x30416269,// 96 PAY  53 

    0xe283e094,// 97 PAY  54 

    0xf57c4827,// 98 PAY  55 

    0x7a8a19ee,// 99 PAY  56 

    0x5581538f,// 100 PAY  57 

    0xcbb7d288,// 101 PAY  58 

    0x099a366d,// 102 PAY  59 

    0x47157acb,// 103 PAY  60 

    0x15cd715a,// 104 PAY  61 

    0xe93a45ea,// 105 PAY  62 

    0x012dfdbf,// 106 PAY  63 

    0x16031d0e,// 107 PAY  64 

    0x3b1bbfeb,// 108 PAY  65 

    0x38b04f39,// 109 PAY  66 

    0xecbddb33,// 110 PAY  67 

    0xb1efc7c7,// 111 PAY  68 

    0x8dff1b5a,// 112 PAY  69 

    0xb9b5ec7d,// 113 PAY  70 

    0xcc89ba74,// 114 PAY  71 

    0x56c9102d,// 115 PAY  72 

    0x5b279b41,// 116 PAY  73 

    0xaff1202e,// 117 PAY  74 

    0x5e524943,// 118 PAY  75 

    0x68fde98c,// 119 PAY  76 

    0x3d65c3c6,// 120 PAY  77 

    0x711a14dd,// 121 PAY  78 

    0x4f88dd8d,// 122 PAY  79 

    0xd3927e92,// 123 PAY  80 

    0x421c3f03,// 124 PAY  81 

    0x8c566b5d,// 125 PAY  82 

    0x1a1fb76d,// 126 PAY  83 

    0xdc404538,// 127 PAY  84 

    0x4612627a,// 128 PAY  85 

    0xb9f94fb4,// 129 PAY  86 

    0x003ab51e,// 130 PAY  87 

    0x35803e2b,// 131 PAY  88 

    0xd124e050,// 132 PAY  89 

    0x3eb66740,// 133 PAY  90 

    0xc454d369,// 134 PAY  91 

    0x8fc5fbf6,// 135 PAY  92 

    0xef5726b4,// 136 PAY  93 

    0xb31e5b90,// 137 PAY  94 

    0x5596ef98,// 138 PAY  95 

    0x319123fa,// 139 PAY  96 

    0xd8ab2e10,// 140 PAY  97 

    0x5898b7ed,// 141 PAY  98 

    0xa103f881,// 142 PAY  99 

    0x84953b5b,// 143 PAY 100 

    0x30594551,// 144 PAY 101 

    0x7e6c46af,// 145 PAY 102 

    0xe29b3be1,// 146 PAY 103 

    0x2720f78d,// 147 PAY 104 

    0x0c7a15a3,// 148 PAY 105 

    0x96c7af92,// 149 PAY 106 

    0x8a02e309,// 150 PAY 107 

    0xf215a8c7,// 151 PAY 108 

    0xbcf2164f,// 152 PAY 109 

    0x7811aa17,// 153 PAY 110 

    0x8344677b,// 154 PAY 111 

    0x20763692,// 155 PAY 112 

    0x2ad5ab97,// 156 PAY 113 

    0x4d7ab61a,// 157 PAY 114 

    0xe0739ecf,// 158 PAY 115 

    0x186b5d35,// 159 PAY 116 

    0x39a9daa4,// 160 PAY 117 

    0x668b9ee0,// 161 PAY 118 

    0x41614265,// 162 PAY 119 

    0x173df684,// 163 PAY 120 

    0xaf780208,// 164 PAY 121 

    0xe54d8cfc,// 165 PAY 122 

    0x68097720,// 166 PAY 123 

    0x31b82bc7,// 167 PAY 124 

    0x50d0c21f,// 168 PAY 125 

    0x603cab24,// 169 PAY 126 

    0x29aa19a7,// 170 PAY 127 

    0xfa2134d2,// 171 PAY 128 

    0xa9a8120c,// 172 PAY 129 

    0xbd0cdd1c,// 173 PAY 130 

    0x5070387b,// 174 PAY 131 

    0x03628bf0,// 175 PAY 132 

    0xc22c99bd,// 176 PAY 133 

    0xa6093f66,// 177 PAY 134 

    0x5eb2d9c5,// 178 PAY 135 

    0x8f0d33a0,// 179 PAY 136 

    0x45ca1a99,// 180 PAY 137 

    0xd6e620d1,// 181 PAY 138 

    0x8847cef0,// 182 PAY 139 

    0xd38c14f6,// 183 PAY 140 

    0xe1a30dd4,// 184 PAY 141 

    0x185e2a18,// 185 PAY 142 

    0xf428e121,// 186 PAY 143 

    0x07043011,// 187 PAY 144 

    0xf85afd5e,// 188 PAY 145 

    0xbac0fcc7,// 189 PAY 146 

    0xba878d02,// 190 PAY 147 

    0xce032821,// 191 PAY 148 

    0x3f434612,// 192 PAY 149 

    0x2b5570e6,// 193 PAY 150 

    0x010a577b,// 194 PAY 151 

    0x346e2537,// 195 PAY 152 

    0xe1521947,// 196 PAY 153 

    0x4045d012,// 197 PAY 154 

    0xa79319c6,// 198 PAY 155 

    0xc6e811cc,// 199 PAY 156 

    0x06935292,// 200 PAY 157 

    0x78162765,// 201 PAY 158 

    0x8c7fd10c,// 202 PAY 159 

    0x54f60cb8,// 203 PAY 160 

    0xd66247f5,// 204 PAY 161 

    0xd10f9f42,// 205 PAY 162 

    0xbbf40f1c,// 206 PAY 163 

    0x70b5bd47,// 207 PAY 164 

    0xcd96aaae,// 208 PAY 165 

    0xcfb0e235,// 209 PAY 166 

    0xb1b6f8f7,// 210 PAY 167 

    0x2729334d,// 211 PAY 168 

    0x447ff4ba,// 212 PAY 169 

    0x47629c22,// 213 PAY 170 

    0x3490c0f6,// 214 PAY 171 

    0xb057684e,// 215 PAY 172 

    0x9fa973df,// 216 PAY 173 

    0x095662c4,// 217 PAY 174 

    0x0a03320d,// 218 PAY 175 

    0x453e0f5c,// 219 PAY 176 

    0xe6659cf5,// 220 PAY 177 

    0x30700ab6,// 221 PAY 178 

    0xa0d26e86,// 222 PAY 179 

    0xd0eb6439,// 223 PAY 180 

    0x9bc998f8,// 224 PAY 181 

    0x215d5713,// 225 PAY 182 

    0x4e80992b,// 226 PAY 183 

    0xbe33c467,// 227 PAY 184 

    0x122f173a,// 228 PAY 185 

    0x2382d77a,// 229 PAY 186 

    0x0c233c19,// 230 PAY 187 

    0xf5a87d0f,// 231 PAY 188 

    0xe6fcc54a,// 232 PAY 189 

    0xced94d6e,// 233 PAY 190 

    0xc3c41e1d,// 234 PAY 191 

    0x1fbdf136,// 235 PAY 192 

    0xf7b12969,// 236 PAY 193 

    0x499e3dfc,// 237 PAY 194 

    0xea2ba04f,// 238 PAY 195 

    0x94f478da,// 239 PAY 196 

    0x3853e661,// 240 PAY 197 

    0x0c2c074e,// 241 PAY 198 

    0x98c9ca6a,// 242 PAY 199 

    0x384242dc,// 243 PAY 200 

    0x99fa057b,// 244 PAY 201 

    0x86cdae9c,// 245 PAY 202 

    0x84ef761e,// 246 PAY 203 

    0xd5f5ec6c,// 247 PAY 204 

    0xbd361d05,// 248 PAY 205 

    0x7f0308ac,// 249 PAY 206 

    0x5aee4be0,// 250 PAY 207 

    0x8c2528d5,// 251 PAY 208 

    0xf877d332,// 252 PAY 209 

    0x7d47768b,// 253 PAY 210 

    0xddaa1507,// 254 PAY 211 

    0xea368309,// 255 PAY 212 

    0xcef9d38c,// 256 PAY 213 

    0xc3ff7efb,// 257 PAY 214 

    0x12f09ab1,// 258 PAY 215 

    0x8b3746cc,// 259 PAY 216 

    0xd74698fb,// 260 PAY 217 

    0xbec90362,// 261 PAY 218 

    0x1eceb30c,// 262 PAY 219 

    0x4b8803c6,// 263 PAY 220 

    0xd6b38df4,// 264 PAY 221 

    0xcc490511,// 265 PAY 222 

    0x38fc8813,// 266 PAY 223 

    0x1e7e046e,// 267 PAY 224 

    0xe948b6dc,// 268 PAY 225 

    0x9413e89f,// 269 PAY 226 

    0x73ca904f,// 270 PAY 227 

    0x353f6319,// 271 PAY 228 

    0x567da961,// 272 PAY 229 

    0xc856b2a1,// 273 PAY 230 

    0x979a1b58,// 274 PAY 231 

    0x304d47f7,// 275 PAY 232 

    0xc17ff4d4,// 276 PAY 233 

    0xe62b4043,// 277 PAY 234 

    0x90024511,// 278 PAY 235 

    0xea62332a,// 279 PAY 236 

    0x55fb6b02,// 280 PAY 237 

    0x10de2909,// 281 PAY 238 

    0x0de7ab74,// 282 PAY 239 

    0x7626a6e1,// 283 PAY 240 

    0xf1e82a0e,// 284 PAY 241 

    0xa840e22c,// 285 PAY 242 

    0x4c1351ed,// 286 PAY 243 

    0x1f1a0400,// 287 PAY 244 

    0x9b3635d1,// 288 PAY 245 

    0xf277509a,// 289 PAY 246 

    0x00d5d902,// 290 PAY 247 

    0xe2422e3f,// 291 PAY 248 

    0xe150d163,// 292 PAY 249 

    0xf2edd7fe,// 293 PAY 250 

    0x54afe86b,// 294 PAY 251 

    0x901027fe,// 295 PAY 252 

    0x637c228a,// 296 PAY 253 

    0x2847d78a,// 297 PAY 254 

    0x19a759c9,// 298 PAY 255 

    0x980b03b7,// 299 PAY 256 

    0x964de64d,// 300 PAY 257 

    0x766fb150,// 301 PAY 258 

    0xb99e6145,// 302 PAY 259 

    0x3874a607,// 303 PAY 260 

    0x656fb132,// 304 PAY 261 

    0x898b42e8,// 305 PAY 262 

    0x48060dbb,// 306 PAY 263 

    0xfaecc7f1,// 307 PAY 264 

    0xfa5d8639,// 308 PAY 265 

    0x9c99e3d8,// 309 PAY 266 

    0x6aaa81cf,// 310 PAY 267 

    0x7229c99d,// 311 PAY 268 

    0xec40b14e,// 312 PAY 269 

    0xc8267c12,// 313 PAY 270 

    0x5e4b9064,// 314 PAY 271 

    0x5a8869d1,// 315 PAY 272 

    0x4eb79d30,// 316 PAY 273 

    0x6a99b91f,// 317 PAY 274 

    0x7aee2055,// 318 PAY 275 

    0xbb6bd127,// 319 PAY 276 

    0x21bdacc2,// 320 PAY 277 

    0x11027a54,// 321 PAY 278 

    0x09a660b5,// 322 PAY 279 

    0x403db17f,// 323 PAY 280 

    0xd639032d,// 324 PAY 281 

    0xa145100c,// 325 PAY 282 

    0x5f5e859a,// 326 PAY 283 

    0x84413f2b,// 327 PAY 284 

    0xe19c8432,// 328 PAY 285 

    0xcbc8d8c2,// 329 PAY 286 

    0xcac57688,// 330 PAY 287 

    0xce2836fa,// 331 PAY 288 

    0xcf8d9641,// 332 PAY 289 

    0xdb8d3576,// 333 PAY 290 

    0xdbceeeae,// 334 PAY 291 

    0x3c4f4cf8,// 335 PAY 292 

    0xbca1b644,// 336 PAY 293 

    0x0400d30f,// 337 PAY 294 

    0x13948041,// 338 PAY 295 

    0x695ff0ec,// 339 PAY 296 

    0xcee022b8,// 340 PAY 297 

    0x48db4ffe,// 341 PAY 298 

    0x5458f1e3,// 342 PAY 299 

    0x28e42710,// 343 PAY 300 

    0x08a25ffe,// 344 PAY 301 

    0x81be67c7,// 345 PAY 302 

    0xbc39c726,// 346 PAY 303 

    0xb6fe4733,// 347 PAY 304 

    0xfdd867b4,// 348 PAY 305 

    0xe80950ab,// 349 PAY 306 

    0xa2762215,// 350 PAY 307 

    0x943f8b62,// 351 PAY 308 

    0x6a39bbcb,// 352 PAY 309 

    0x8dc2263b,// 353 PAY 310 

    0xc5ca0b0a,// 354 PAY 311 

    0xbd83a0fb,// 355 PAY 312 

    0x49c5f232,// 356 PAY 313 

    0xd2b09d10,// 357 PAY 314 

    0x13efc953,// 358 PAY 315 

    0x4443ed2d,// 359 PAY 316 

    0xb818923d,// 360 PAY 317 

    0xd5fe2b01,// 361 PAY 318 

    0xd475ea3d,// 362 PAY 319 

    0xf5548671,// 363 PAY 320 

    0xa4ae7383,// 364 PAY 321 

    0x10e3cea9,// 365 PAY 322 

    0x05d88be9,// 366 PAY 323 

    0x22b03ff2,// 367 PAY 324 

    0xf9ff2a1a,// 368 PAY 325 

    0x48512365,// 369 PAY 326 

    0x8bb750ce,// 370 PAY 327 

    0xae1b7fdc,// 371 PAY 328 

    0x2350cff8,// 372 PAY 329 

    0x967cb7ad,// 373 PAY 330 

    0xbb736729,// 374 PAY 331 

    0xd7828f80,// 375 PAY 332 

    0x88f61f5d,// 376 PAY 333 

    0x4ef451c9,// 377 PAY 334 

    0xa721ac4e,// 378 PAY 335 

    0xac0f8808,// 379 PAY 336 

    0xb07060ba,// 380 PAY 337 

    0x8921edba,// 381 PAY 338 

    0xa98d4045,// 382 PAY 339 

    0x852b3cb4,// 383 PAY 340 

    0x58339e74,// 384 PAY 341 

    0x02a89b0f,// 385 PAY 342 

    0xc8b7b995,// 386 PAY 343 

    0x63cf226f,// 387 PAY 344 

    0x9515aa63,// 388 PAY 345 

    0x47ab2248,// 389 PAY 346 

    0x597a811a,// 390 PAY 347 

    0xfe32fac9,// 391 PAY 348 

    0x36d896ef,// 392 PAY 349 

    0xf0e7eb72,// 393 PAY 350 

    0xf0112998,// 394 PAY 351 

    0x71c12e2b,// 395 PAY 352 

    0xa509b180,// 396 PAY 353 

    0x2a2e8cf5,// 397 PAY 354 

    0x242930e9,// 398 PAY 355 

    0x0fe0fb18,// 399 PAY 356 

    0x59c032d4,// 400 PAY 357 

    0x3689a8df,// 401 PAY 358 

    0xa8e53b80,// 402 PAY 359 

    0x0c125be5,// 403 PAY 360 

    0x667342b7,// 404 PAY 361 

    0x99418ab9,// 405 PAY 362 

    0x957a6b9a,// 406 PAY 363 

    0x72b6246f,// 407 PAY 364 

    0x666beaba,// 408 PAY 365 

    0x65e8e2c1,// 409 PAY 366 

    0x8acdbaf7,// 410 PAY 367 

    0x82a9ec37,// 411 PAY 368 

    0x5954c884,// 412 PAY 369 

    0xbfd531f1,// 413 PAY 370 

    0x8ef6e9da,// 414 PAY 371 

    0x4094917a,// 415 PAY 372 

    0xe3772966,// 416 PAY 373 

    0xbc938c5b,// 417 PAY 374 

    0x6093edc3,// 418 PAY 375 

    0x3e7bf896,// 419 PAY 376 

    0xade1baa0,// 420 PAY 377 

    0xf80b5443,// 421 PAY 378 

    0x2d722f85,// 422 PAY 379 

    0x6150af69,// 423 PAY 380 

    0x1bae3d5c,// 424 PAY 381 

    0x8a30271a,// 425 PAY 382 

    0x2160c779,// 426 PAY 383 

    0x629c4a26,// 427 PAY 384 

    0x30b4ee59,// 428 PAY 385 

    0xea580227,// 429 PAY 386 

    0x77741f6d,// 430 PAY 387 

    0x40c1ebe7,// 431 PAY 388 

    0x4e2e8da2,// 432 PAY 389 

    0x6d3c5213,// 433 PAY 390 

    0x4ffca153,// 434 PAY 391 

    0xf28cfe2d,// 435 PAY 392 

    0xa4883f3b,// 436 PAY 393 

    0x04f30de9,// 437 PAY 394 

    0x795da3e7,// 438 PAY 395 

    0x4ece40f2,// 439 PAY 396 

    0xf84320b0,// 440 PAY 397 

    0x94f228ea,// 441 PAY 398 

    0x0d2f177a,// 442 PAY 399 

    0x0220121b,// 443 PAY 400 

    0xbb5a5e6d,// 444 PAY 401 

    0x4220ab77,// 445 PAY 402 

    0xdef4f11c,// 446 PAY 403 

    0xb07d47c6,// 447 PAY 404 

    0x96b580fc,// 448 PAY 405 

    0x430b0862,// 449 PAY 406 

    0xe3ca6fa2,// 450 PAY 407 

    0x097045fe,// 451 PAY 408 

    0xb2a760fb,// 452 PAY 409 

    0xb756befa,// 453 PAY 410 

    0xe338970f,// 454 PAY 411 

    0xaab7c957,// 455 PAY 412 

    0x1621370d,// 456 PAY 413 

    0x153e8090,// 457 PAY 414 

    0x800f3839,// 458 PAY 415 

    0x0d96b335,// 459 PAY 416 

    0x04a72116,// 460 PAY 417 

    0xa314db72,// 461 PAY 418 

    0xee30c11e,// 462 PAY 419 

    0xfa258e83,// 463 PAY 420 

    0xf2866dfa,// 464 PAY 421 

    0x87565cc4,// 465 PAY 422 

    0x87c1c486,// 466 PAY 423 

    0x60ad5a4e,// 467 PAY 424 

    0x7142bc8c,// 468 PAY 425 

    0xce65535f,// 469 PAY 426 

    0xe5c2d5b9,// 470 PAY 427 

    0xfcf36221,// 471 PAY 428 

    0x6b21acb3,// 472 PAY 429 

    0x7b5dcaf4,// 473 PAY 430 

    0xe5899ee5,// 474 PAY 431 

    0xdf0611a5,// 475 PAY 432 

    0x72a5b034,// 476 PAY 433 

    0xdae4bff8,// 477 PAY 434 

    0x58201fb6,// 478 PAY 435 

    0x8a6c6c71,// 479 PAY 436 

    0x969a27a7,// 480 PAY 437 

    0x88b18156,// 481 PAY 438 

    0x113af07c,// 482 PAY 439 

    0xf10abd43,// 483 PAY 440 

    0xe7a02269,// 484 PAY 441 

    0xf17c4b6d,// 485 PAY 442 

    0xb384b382,// 486 PAY 443 

    0xd10f89fd,// 487 PAY 444 

    0x8be6f62d,// 488 PAY 445 

    0xe789d64f,// 489 PAY 446 

    0x36b83df0,// 490 PAY 447 

    0x89fa2e65,// 491 PAY 448 

    0xd8de8dbc,// 492 PAY 449 

    0x9b7456ff,// 493 PAY 450 

    0x30a335e4,// 494 PAY 451 

    0x298cbe2b,// 495 PAY 452 

    0x20e12df7,// 496 PAY 453 

    0x7c5f87f3,// 497 PAY 454 

    0x71078450,// 498 PAY 455 

    0x0ff1e79c,// 499 PAY 456 

    0xb00780e8,// 500 PAY 457 

    0xd9034938,// 501 PAY 458 

    0x233271a6,// 502 PAY 459 

    0x9b83b727,// 503 PAY 460 

    0x39cf11c9,// 504 PAY 461 

    0xa761a2b8,// 505 PAY 462 

    0x0a4b439d,// 506 PAY 463 

    0x4e32f9e4,// 507 PAY 464 

    0x4a4ed395,// 508 PAY 465 

    0x73416b66,// 509 PAY 466 

    0x3f08c2d2,// 510 PAY 467 

    0x97913ee7,// 511 PAY 468 

    0x31d9ccd4,// 512 PAY 469 

    0x018388c9,// 513 PAY 470 

    0xf2bfd74f,// 514 PAY 471 

    0x57b51efb,// 515 PAY 472 

    0x1b9118f8,// 516 PAY 473 

    0x22ec6622,// 517 PAY 474 

    0x0db7689a,// 518 PAY 475 

    0x5bb51a21,// 519 PAY 476 

    0xf38cdfcf,// 520 PAY 477 

    0xb792921f,// 521 PAY 478 

    0x0f59ab18,// 522 PAY 479 

    0xf4af23a8,// 523 PAY 480 

    0xdc4db33a,// 524 PAY 481 

    0x1fdd22b0,// 525 PAY 482 

    0x24c81b75,// 526 PAY 483 

    0x0a171e10,// 527 PAY 484 

    0xfe5789ad,// 528 PAY 485 

    0x824b9161,// 529 PAY 486 

    0x191ecc45,// 530 PAY 487 

    0x37f07a36,// 531 PAY 488 

    0xd2698dfe,// 532 PAY 489 

    0x55d96792,// 533 PAY 490 

    0x41ec9577,// 534 PAY 491 

    0x1c2557f6,// 535 PAY 492 

    0x29d1643b,// 536 PAY 493 

    0x47526527,// 537 PAY 494 

    0x69f0dff5,// 538 PAY 495 

    0xc9855173,// 539 PAY 496 

    0xc9f55343,// 540 PAY 497 

    0xdee9e4f0,// 541 PAY 498 

    0x42e1e7e9,// 542 PAY 499 

    0x5fc30d7d,// 543 PAY 500 

    0xdc6470d3,// 544 PAY 501 

    0x255d7534,// 545 PAY 502 

    0x8f000000,// 546 PAY 503 

/// STA is 1 words. 

/// STA num_pkts       : 178 

/// STA pkt_idx        : 214 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x6e 

    0x03586eb2 // 547 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 80 (0x50) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_sha1_pkt62_tmpl[] = {
    0xb8010050,// 1 CCH   1 

/// ECH cache_idx      : 0x02 

/// ECH pdu_tag        : 0x00 

    0x00020000,// 2 ECH   1 

/// SCX is 19 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound !save_icv !insert_icv check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : SHA1 

/// SCX aes_size        : RC4UPDT_AES192 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x5 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 40 

    0x00000013,// 3 SCX   1 

    0x80614870,// 4 SCX   2 

    0x00001500,// 5 SCX   3 

    0x41a9c246,// 6 SCX   4 

    0x0f4f23a7,// 7 SCX   5 

    0xeccdda71,// 8 SCX   6 

    0x6bab3886,// 9 SCX   7 

    0x432081a7,// 10 SCX   8 

    0x243f7d43,// 11 SCX   9 

    0x1aac986c,// 12 SCX  10 

    0xd91f4982,// 13 SCX  11 

    0xe3d9434f,// 14 SCX  12 

    0xfe607322,// 15 SCX  13 

    0x621b4a42,// 16 SCX  14 

    0x1148fbf0,// 17 SCX  15 

    0x38b5d365,// 18 SCX  16 

    0x991ccfdc,// 19 SCX  17 

    0xd61c18f9,// 20 SCX  18 

    0x8f22c456,// 21 SCX  19 

/// BFD is 3 words. 

/// BFD tot_len        : 844 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 311 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 311 

/// BFD lencrypto      : 80 

/// BFD ofstcrypto     : 16 

/// BFD (ofst+len)cry  : 96 

/// BFD ofstiv         : 4 

/// BFD ofsticv        : 660 

    0x00000137,// 22 BFD   1 

    0x00100050,// 23 BFD   2 

    0x02940004,// 24 BFD   3 

/// MFM is 10 words. 

/// MFM vldnibs        : 46 

    0x4600e73b,// 25 MFM   1 

    0xc9399c7d,// 26 MFM   2 

    0x53bbb830,// 27 MFM   3 

    0x72076fe8,// 28 MFM   4 

    0x8af300f5,// 29 MFM   5 

    0xd4054441,// 30 MFM   6 

    0x3b83e5ed,// 31 MFM   7 

    0x8c0c41a3,// 32 MFM   8 

    0x68b421f3,// 33 MFM   9 

    0x2f000000,// 34 MFM  10 

/// BDA is 212 words. 

/// BDA size     is 844 (0x34c) 

/// BDA id       is 0x8eca 

    0x034c8eca,// 35 BDA   1 

/// PAY Generic Data size   : 844 byte(s) 

/// PAD Buffer Data Pad size   : 0 byte(s) 

    0x9c96ac78,// 36 PAY   1 

    0x49e45026,// 37 PAY   2 

    0xa5f65bd7,// 38 PAY   3 

    0x2f2e67a4,// 39 PAY   4 

    0xe75c422c,// 40 PAY   5 

    0xf318c599,// 41 PAY   6 

    0xdb45612c,// 42 PAY   7 

    0x2f8c4138,// 43 PAY   8 

    0xe15fc3af,// 44 PAY   9 

    0x6d6d37ff,// 45 PAY  10 

    0x9c1894d8,// 46 PAY  11 

    0xc9add281,// 47 PAY  12 

    0xfc73dca8,// 48 PAY  13 

    0x1196bb20,// 49 PAY  14 

    0xa1c882e3,// 50 PAY  15 

    0xed67211e,// 51 PAY  16 

    0xcc76c8e6,// 52 PAY  17 

    0xa2fbb15c,// 53 PAY  18 

    0xc2296ea8,// 54 PAY  19 

    0xec32d261,// 55 PAY  20 

    0x264721b9,// 56 PAY  21 

    0xd8dba515,// 57 PAY  22 

    0xf4bc281c,// 58 PAY  23 

    0x062c01d9,// 59 PAY  24 

    0xecf37519,// 60 PAY  25 

    0xbede35db,// 61 PAY  26 

    0x1f2db32b,// 62 PAY  27 

    0xea1ce155,// 63 PAY  28 

    0x336d50f1,// 64 PAY  29 

    0x88feeb50,// 65 PAY  30 

    0x89d1c1f6,// 66 PAY  31 

    0x3d6c351a,// 67 PAY  32 

    0x98a999d3,// 68 PAY  33 

    0x1461c6bb,// 69 PAY  34 

    0x7582ceda,// 70 PAY  35 

    0xea63cdb7,// 71 PAY  36 

    0xad95f363,// 72 PAY  37 

    0x41aaf41e,// 73 PAY  38 

    0xc9bfd8df,// 74 PAY  39 

    0xc88bc6e8,// 75 PAY  40 

    0xcee7dfba,// 76 PAY  41 

    0x769d6cbd,// 77 PAY  42 

    0xea5c5b5b,// 78 PAY  43 

    0x72fec43f,// 79 PAY  44 

    0x518a8858,// 80 PAY  45 

    0xda4331ca,// 81 PAY  46 

    0xfc03ae64,// 82 PAY  47 

    0xdaa7a5e9,// 83 PAY  48 

    0xd1d9ba69,// 84 PAY  49 

    0x9f4f305d,// 85 PAY  50 

    0xf8f6927f,// 86 PAY  51 

    0x1e99f2a3,// 87 PAY  52 

    0x8eca576b,// 88 PAY  53 

    0xfaaa1d81,// 89 PAY  54 

    0xca550323,// 90 PAY  55 

    0xfdfb31f0,// 91 PAY  56 

    0xeb5441f7,// 92 PAY  57 

    0x60ae6fa7,// 93 PAY  58 

    0x31b28529,// 94 PAY  59 

    0xbb1e4716,// 95 PAY  60 

    0x0023828f,// 96 PAY  61 

    0x48de3058,// 97 PAY  62 

    0xd39c0a19,// 98 PAY  63 

    0xc99e1545,// 99 PAY  64 

    0xbfccc9cb,// 100 PAY  65 

    0xb73df53e,// 101 PAY  66 

    0xeaae28dd,// 102 PAY  67 

    0xe8ccf430,// 103 PAY  68 

    0xe1f2c6db,// 104 PAY  69 

    0x1d860244,// 105 PAY  70 

    0x26b9050f,// 106 PAY  71 

    0xb2975559,// 107 PAY  72 

    0x42df5e38,// 108 PAY  73 

    0x40ec9183,// 109 PAY  74 

    0x336e14ef,// 110 PAY  75 

    0x95b08b1b,// 111 PAY  76 

    0x50da2ca7,// 112 PAY  77 

    0xf9205e13,// 113 PAY  78 

    0xfbab703d,// 114 PAY  79 

    0xdc6e861f,// 115 PAY  80 

    0xb14e4bd0,// 116 PAY  81 

    0x626c7b9e,// 117 PAY  82 

    0x2ddae152,// 118 PAY  83 

    0xbbcec0d2,// 119 PAY  84 

    0x6413c887,// 120 PAY  85 

    0x7f4711a1,// 121 PAY  86 

    0xc30835f6,// 122 PAY  87 

    0xb4bc3c1d,// 123 PAY  88 

    0xd95e00a2,// 124 PAY  89 

    0x81ebf86d,// 125 PAY  90 

    0x069e15c0,// 126 PAY  91 

    0x217c42f3,// 127 PAY  92 

    0x4c5bfe48,// 128 PAY  93 

    0x0befba4b,// 129 PAY  94 

    0x3af3e473,// 130 PAY  95 

    0x594308e2,// 131 PAY  96 

    0x900473b3,// 132 PAY  97 

    0xe91b5bea,// 133 PAY  98 

    0x42347c52,// 134 PAY  99 

    0xb4c45835,// 135 PAY 100 

    0x966abc2c,// 136 PAY 101 

    0x5c08f105,// 137 PAY 102 

    0x4306f154,// 138 PAY 103 

    0xe9df75c3,// 139 PAY 104 

    0x6da1d4d9,// 140 PAY 105 

    0x8458b25f,// 141 PAY 106 

    0x32f9cd30,// 142 PAY 107 

    0x0a82e582,// 143 PAY 108 

    0x22e7c8f8,// 144 PAY 109 

    0xfd388eef,// 145 PAY 110 

    0x51f39408,// 146 PAY 111 

    0xdec8021c,// 147 PAY 112 

    0x9a299e96,// 148 PAY 113 

    0x115b430e,// 149 PAY 114 

    0x1fe20ad1,// 150 PAY 115 

    0xdfbdb0bd,// 151 PAY 116 

    0x6eb44224,// 152 PAY 117 

    0xdc8ccfbd,// 153 PAY 118 

    0x9185ca27,// 154 PAY 119 

    0x7e7c5ba8,// 155 PAY 120 

    0xc125f71b,// 156 PAY 121 

    0xe716d0c6,// 157 PAY 122 

    0xdf6388e2,// 158 PAY 123 

    0x55342274,// 159 PAY 124 

    0xd5b92cd5,// 160 PAY 125 

    0x300ec9b1,// 161 PAY 126 

    0xa2561171,// 162 PAY 127 

    0x50bc0f60,// 163 PAY 128 

    0x43b61af6,// 164 PAY 129 

    0xe51b312e,// 165 PAY 130 

    0x7798c0fa,// 166 PAY 131 

    0xe3c472f0,// 167 PAY 132 

    0x7f657277,// 168 PAY 133 

    0xc8747411,// 169 PAY 134 

    0xd034a01d,// 170 PAY 135 

    0x056cfa7b,// 171 PAY 136 

    0x03f1976b,// 172 PAY 137 

    0x4f7974c3,// 173 PAY 138 

    0xbef1476f,// 174 PAY 139 

    0x65b82267,// 175 PAY 140 

    0x2bba30d4,// 176 PAY 141 

    0x1b6c0f5e,// 177 PAY 142 

    0x67df59a8,// 178 PAY 143 

    0x5e4c3bcf,// 179 PAY 144 

    0x1e8c8cd5,// 180 PAY 145 

    0x963f22c8,// 181 PAY 146 

    0x4250665d,// 182 PAY 147 

    0xef0a1f32,// 183 PAY 148 

    0x55c48ca4,// 184 PAY 149 

    0x6ce3178f,// 185 PAY 150 

    0x7830bd9d,// 186 PAY 151 

    0x28f1e6eb,// 187 PAY 152 

    0x7f7f6c1d,// 188 PAY 153 

    0x30dfcd76,// 189 PAY 154 

    0x6f75bdb6,// 190 PAY 155 

    0xaed156f4,// 191 PAY 156 

    0xe86871e8,// 192 PAY 157 

    0x37eea4d7,// 193 PAY 158 

    0xa01bb9ae,// 194 PAY 159 

    0xa5200f7c,// 195 PAY 160 

    0xbf1df823,// 196 PAY 161 

    0xed02fb31,// 197 PAY 162 

    0x6ec9e657,// 198 PAY 163 

    0xdbe114ef,// 199 PAY 164 

    0x46b0726e,// 200 PAY 165 

    0xb3ed9eb6,// 201 PAY 166 

    0x3485b61d,// 202 PAY 167 

    0xebad0b0f,// 203 PAY 168 

    0x30659921,// 204 PAY 169 

    0x42ddc6bc,// 205 PAY 170 

    0x8a09355a,// 206 PAY 171 

    0x1659203c,// 207 PAY 172 

    0xe37a1583,// 208 PAY 173 

    0x6020dbc8,// 209 PAY 174 

    0x1fd370c6,// 210 PAY 175 

    0xb5fca16e,// 211 PAY 176 

    0x15a853e3,// 212 PAY 177 

    0x9f71001e,// 213 PAY 178 

    0x4a4155fa,// 214 PAY 179 

    0x11d53c6e,// 215 PAY 180 

    0x401cae5a,// 216 PAY 181 

    0x1121c16a,// 217 PAY 182 

    0x3dbb8386,// 218 PAY 183 

    0xfc9a91f4,// 219 PAY 184 

    0xb7360a7f,// 220 PAY 185 

    0xd7d95013,// 221 PAY 186 

    0xda5d5261,// 222 PAY 187 

    0xfc7816d9,// 223 PAY 188 

    0xbb0fe947,// 224 PAY 189 

    0x4ee31ec9,// 225 PAY 190 

    0xdea47af6,// 226 PAY 191 

    0x357b0685,// 227 PAY 192 

    0x15ce4088,// 228 PAY 193 

    0xd7594ac4,// 229 PAY 194 

    0x0012a78f,// 230 PAY 195 

    0x4858ca83,// 231 PAY 196 

    0x84ed7998,// 232 PAY 197 

    0x4fb46d54,// 233 PAY 198 

    0xf989c0fe,// 234 PAY 199 

    0x368329f5,// 235 PAY 200 

    0xe04f6cf4,// 236 PAY 201 

    0x47fb6975,// 237 PAY 202 

    0xd7861c29,// 238 PAY 203 

    0x0b94297d,// 239 PAY 204 

    0xd8dafac5,// 240 PAY 205 

    0x990a3f75,// 241 PAY 206 

    0x6ff8c387,// 242 PAY 207 

    0x3c79c0fb,// 243 PAY 208 

    0xd5f0b184,// 244 PAY 209 

    0x4ebec914,// 245 PAY 210 

    0x19462c91,// 246 PAY 211 

/// STA is 1 words. 

/// STA num_pkts       : 128 

/// STA pkt_idx        : 187 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xdd 

    0x02ecdd80 // 247 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 80 (0x50) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_sha1_pkt63_tmpl[] = {
    0xb8010050,// 1 CCH   1 

/// ECH cache_idx      : 0x0c 

/// ECH pdu_tag        : 0x00 

    0x000c0000,// 2 ECH   1 

/// SCX is 19 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound !save_icv insert_icv !check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : SHA1 

/// SCX aes_size        : AES256 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x3 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 40 

    0x08000013,// 3 SCX   1 

    0x806248d8,// 4 SCX   2 

    0x00002300,// 5 SCX   3 

    0xa1d66f6a,// 6 SCX   4 

    0x997072f9,// 7 SCX   5 

    0xe2db2c84,// 8 SCX   6 

    0xa88ce90e,// 9 SCX   7 

    0xdea63dfb,// 10 SCX   8 

    0x892e6578,// 11 SCX   9 

    0xa92fba19,// 12 SCX  10 

    0x99ff7411,// 13 SCX  11 

    0xb2e9a30b,// 14 SCX  12 

    0x28df1edb,// 15 SCX  13 

    0x2f314215,// 16 SCX  14 

    0x3cc2f4c6,// 17 SCX  15 

    0x545bdf2a,// 18 SCX  16 

    0xa010d2c1,// 19 SCX  17 

    0x53d91a04,// 20 SCX  18 

    0x63181a31,// 21 SCX  19 

/// BFD is 3 words. 

/// BFD tot_len        : 56 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 26 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 26 

/// BFD lencrypto      : 8 

/// BFD ofstcrypto     : 16 

/// BFD (ofst+len)cry  : 24 

/// BFD ofstiv         : 0 

/// BFD ofsticv        : 36 

    0x0000001a,// 22 BFD   1 

    0x00100008,// 23 BFD   2 

    0x00240000,// 24 BFD   3 

/// MFM is 1 words. 

/// MFM vldnibs        : 2 

    0x02005f00,// 25 MFM   1 

/// BDA is 15 words. 

/// BDA size     is 56 (0x38) 

/// BDA id       is 0xad27 

    0x0038ad27,// 26 BDA   1 

/// PAY Generic Data size   : 56 byte(s) 

/// PAD Buffer Data Pad size   : 0 byte(s) 

    0xbe58f4c3,// 27 PAY   1 

    0x2f94a1e0,// 28 PAY   2 

    0x25fe45ab,// 29 PAY   3 

    0x017b49d3,// 30 PAY   4 

    0xa23948ea,// 31 PAY   5 

    0xfd38224a,// 32 PAY   6 

    0xd1161887,// 33 PAY   7 

    0xa1f36760,// 34 PAY   8 

    0x6d1effb8,// 35 PAY   9 

    0x85915472,// 36 PAY  10 

    0x8bb317ec,// 37 PAY  11 

    0xc4f4ae06,// 38 PAY  12 

    0x75e7e03c,// 39 PAY  13 

    0x9a9b8e70,// 40 PAY  14 

/// STA is 1 words. 

/// STA num_pkts       : 83 

/// STA pkt_idx        : 218 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x25 

    0x03682553 // 41 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 88 (0x58) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_sha1_pkt64_tmpl[] = {
    0xb8010058,// 1 CCH   1 

/// ECH cache_idx      : 0x08 

/// ECH pdu_tag        : 0x00 

    0x00080000,// 2 ECH   1 

/// SCX is 21 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound !save_icv !insert_icv check_icv sctx_iv  

/// SCX exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : SHA1 

/// SCX aes_size        : RC4UPDT_AES192 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x4 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 8 

/// SCX authctx_size    : 40 

    0x00000015,// 3 SCX   1 

    0x8065488e,// 4 SCX   2 

    0x000014c2,// 5 SCX   3 

    0xb6496f6e,// 6 SCX   4 

    0xcb0e07d3,// 7 SCX   5 

    0xf047cdaf,// 8 SCX   6 

    0x769546c1,// 9 SCX   7 

    0xdca4c844,// 10 SCX   8 

    0x12561828,// 11 SCX   9 

    0xe783c154,// 12 SCX  10 

    0x08c6be86,// 13 SCX  11 

    0xb9adf4eb,// 14 SCX  12 

    0xc4478bf9,// 15 SCX  13 

    0x1219c37f,// 16 SCX  14 

    0x4219fd0c,// 17 SCX  15 

    0xb4a2d752,// 18 SCX  16 

    0x545c5d8d,// 19 SCX  17 

    0x05c9d1d8,// 20 SCX  18 

    0x95d171b2,// 21 SCX  19 

    0xf5455951,// 22 SCX  20 

    0xf79d8ba2,// 23 SCX  21 

/// BFD is 3 words. 

/// BFD tot_len        : 826 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 582 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 582 

/// BFD lencrypto      : 8 

/// BFD ofstcrypto     : 452 

/// BFD (ofst+len)cry  : 460 

/// BFD ofstiv         : 184 

/// BFD ofsticv        : 744 

    0x00000246,// 24 BFD   1 

    0x01c40008,// 25 BFD   2 

    0x02e800b8,// 26 BFD   3 

/// MFM is 10 words. 

/// MFM vldnibs        : 47 

    0x47006ddb,// 27 MFM   1 

    0x7c116ae2,// 28 MFM   2 

    0x0e026148,// 29 MFM   3 

    0x15a238cf,// 30 MFM   4 

    0x176dac6f,// 31 MFM   5 

    0x2f16dfbd,// 32 MFM   6 

    0xca27f01e,// 33 MFM   7 

    0x54c3f64f,// 34 MFM   8 

    0x1e99c7bd,// 35 MFM   9 

    0xdca00000,// 36 MFM  10 

/// BDA is 208 words. 

/// BDA size     is 826 (0x33a) 

/// BDA id       is 0x770a 

    0x033a770a,// 37 BDA   1 

/// PAY Generic Data size   : 826 byte(s) 

/// PAD Buffer Data Pad size   : 2 byte(s) 

    0xfe6819e8,// 38 PAY   1 

    0xd1075e50,// 39 PAY   2 

    0xb92495bf,// 40 PAY   3 

    0x52944350,// 41 PAY   4 

    0x866e2028,// 42 PAY   5 

    0x4c0f43af,// 43 PAY   6 

    0x885403b6,// 44 PAY   7 

    0x5ff466ec,// 45 PAY   8 

    0x5019c958,// 46 PAY   9 

    0x7398c009,// 47 PAY  10 

    0x360b1941,// 48 PAY  11 

    0xf74fc073,// 49 PAY  12 

    0x7d0c854e,// 50 PAY  13 

    0x9b3fc06b,// 51 PAY  14 

    0x69eaaa9a,// 52 PAY  15 

    0x00b68050,// 53 PAY  16 

    0x3ea56df4,// 54 PAY  17 

    0x674635b9,// 55 PAY  18 

    0x6e5b30ff,// 56 PAY  19 

    0x34c60f3b,// 57 PAY  20 

    0x50456d6b,// 58 PAY  21 

    0x50bd23dc,// 59 PAY  22 

    0x3783ce5e,// 60 PAY  23 

    0x451b9cc8,// 61 PAY  24 

    0xb8bfa651,// 62 PAY  25 

    0xbad82c3c,// 63 PAY  26 

    0xa206fbed,// 64 PAY  27 

    0x7fac0d71,// 65 PAY  28 

    0x03de7e99,// 66 PAY  29 

    0x38934621,// 67 PAY  30 

    0x942612a0,// 68 PAY  31 

    0x90eac12f,// 69 PAY  32 

    0xc51bc559,// 70 PAY  33 

    0xb0831df3,// 71 PAY  34 

    0xd40c029d,// 72 PAY  35 

    0xbc5dbb85,// 73 PAY  36 

    0x6fe37eb0,// 74 PAY  37 

    0x170ed068,// 75 PAY  38 

    0xa1201802,// 76 PAY  39 

    0x1e624565,// 77 PAY  40 

    0xfd801f4a,// 78 PAY  41 

    0x07d31050,// 79 PAY  42 

    0xca8dcf06,// 80 PAY  43 

    0x7e63eca9,// 81 PAY  44 

    0x2c0c8ec5,// 82 PAY  45 

    0xc6955c9d,// 83 PAY  46 

    0x1d50df45,// 84 PAY  47 

    0x10311865,// 85 PAY  48 

    0x5e54fc53,// 86 PAY  49 

    0x628a60a7,// 87 PAY  50 

    0x568f5cfe,// 88 PAY  51 

    0x7b21a085,// 89 PAY  52 

    0x6c6c4316,// 90 PAY  53 

    0x76f3c992,// 91 PAY  54 

    0x38a94882,// 92 PAY  55 

    0xd58acc20,// 93 PAY  56 

    0x9e0c73f6,// 94 PAY  57 

    0xffb87781,// 95 PAY  58 

    0xc62643fe,// 96 PAY  59 

    0xb6b51d1e,// 97 PAY  60 

    0xccfa2bec,// 98 PAY  61 

    0x9ea60714,// 99 PAY  62 

    0x1d44c0c1,// 100 PAY  63 

    0x885bf5a1,// 101 PAY  64 

    0xc75e81d5,// 102 PAY  65 

    0x1b252716,// 103 PAY  66 

    0x85e758c5,// 104 PAY  67 

    0x5e90a664,// 105 PAY  68 

    0x27e0fd65,// 106 PAY  69 

    0x7feeb9c2,// 107 PAY  70 

    0x7f938336,// 108 PAY  71 

    0xe7f76ace,// 109 PAY  72 

    0xd08d82ce,// 110 PAY  73 

    0xa5a134b0,// 111 PAY  74 

    0x05068e6b,// 112 PAY  75 

    0x39adcb7c,// 113 PAY  76 

    0x32262340,// 114 PAY  77 

    0x100571b4,// 115 PAY  78 

    0x1abacd79,// 116 PAY  79 

    0xd5ff1ccc,// 117 PAY  80 

    0x4c93ee72,// 118 PAY  81 

    0x88b061ee,// 119 PAY  82 

    0x7c382da9,// 120 PAY  83 

    0x4756b4ec,// 121 PAY  84 

    0xdc381908,// 122 PAY  85 

    0xf7fa1229,// 123 PAY  86 

    0x5489b6c5,// 124 PAY  87 

    0x78b48b48,// 125 PAY  88 

    0x96b585fe,// 126 PAY  89 

    0xc6c8c6c7,// 127 PAY  90 

    0x11f8f455,// 128 PAY  91 

    0x7de1fa17,// 129 PAY  92 

    0x544e2fc8,// 130 PAY  93 

    0x37193d94,// 131 PAY  94 

    0x80de6d7f,// 132 PAY  95 

    0xfec8586a,// 133 PAY  96 

    0x57bbcc20,// 134 PAY  97 

    0x8ca887bc,// 135 PAY  98 

    0xdcda88c9,// 136 PAY  99 

    0x4c2fefbc,// 137 PAY 100 

    0x7302814a,// 138 PAY 101 

    0x4e8b0b40,// 139 PAY 102 

    0x7c8398b4,// 140 PAY 103 

    0xefb02862,// 141 PAY 104 

    0xf755eff8,// 142 PAY 105 

    0x3a4f6bf8,// 143 PAY 106 

    0xf164c0c8,// 144 PAY 107 

    0xd1a1b097,// 145 PAY 108 

    0x9e19820a,// 146 PAY 109 

    0x61058c53,// 147 PAY 110 

    0x88e41bdb,// 148 PAY 111 

    0xdb47b4cc,// 149 PAY 112 

    0x7483f316,// 150 PAY 113 

    0xa3e4aa79,// 151 PAY 114 

    0x27b86e0a,// 152 PAY 115 

    0x441a09af,// 153 PAY 116 

    0x368242e2,// 154 PAY 117 

    0x423b4013,// 155 PAY 118 

    0x4e83323c,// 156 PAY 119 

    0x8b40b603,// 157 PAY 120 

    0x36a32f03,// 158 PAY 121 

    0x9b76a8d3,// 159 PAY 122 

    0x84aa6390,// 160 PAY 123 

    0x277e445a,// 161 PAY 124 

    0x3f73d15b,// 162 PAY 125 

    0xf9338181,// 163 PAY 126 

    0x3597c3b8,// 164 PAY 127 

    0x7869be53,// 165 PAY 128 

    0x34e6d4cd,// 166 PAY 129 

    0xb0657544,// 167 PAY 130 

    0x7d9643d7,// 168 PAY 131 

    0x370bea3d,// 169 PAY 132 

    0x28f08cc8,// 170 PAY 133 

    0x94ae5008,// 171 PAY 134 

    0xdf6d3562,// 172 PAY 135 

    0x8e2db270,// 173 PAY 136 

    0x23777097,// 174 PAY 137 

    0x1b2e68f9,// 175 PAY 138 

    0xc4adb49a,// 176 PAY 139 

    0xacafa10a,// 177 PAY 140 

    0x093d28c0,// 178 PAY 141 

    0xa02dfe4b,// 179 PAY 142 

    0xe788c94d,// 180 PAY 143 

    0xd163b390,// 181 PAY 144 

    0xd28614f6,// 182 PAY 145 

    0xd3830c55,// 183 PAY 146 

    0xda472386,// 184 PAY 147 

    0x04059e6a,// 185 PAY 148 

    0xbf243fcf,// 186 PAY 149 

    0x07756414,// 187 PAY 150 

    0x0ba6e45b,// 188 PAY 151 

    0xc3930834,// 189 PAY 152 

    0xb8f36edf,// 190 PAY 153 

    0xf6c32dbe,// 191 PAY 154 

    0x56923e94,// 192 PAY 155 

    0x94d8d752,// 193 PAY 156 

    0x2070d46e,// 194 PAY 157 

    0xb5973427,// 195 PAY 158 

    0x2e0b770f,// 196 PAY 159 

    0xb12ff02f,// 197 PAY 160 

    0x93f14274,// 198 PAY 161 

    0x84f758a5,// 199 PAY 162 

    0xcefecb00,// 200 PAY 163 

    0x87b4e82d,// 201 PAY 164 

    0x1b005428,// 202 PAY 165 

    0x1ce73297,// 203 PAY 166 

    0x8efa7380,// 204 PAY 167 

    0x49748b50,// 205 PAY 168 

    0xfe78c01a,// 206 PAY 169 

    0xde222d0d,// 207 PAY 170 

    0x4dc44357,// 208 PAY 171 

    0xd7b80684,// 209 PAY 172 

    0x0cb1820f,// 210 PAY 173 

    0xd654cfdc,// 211 PAY 174 

    0x3d6fe4e1,// 212 PAY 175 

    0x3e313311,// 213 PAY 176 

    0xba56a4f8,// 214 PAY 177 

    0x972cd991,// 215 PAY 178 

    0x032d46dc,// 216 PAY 179 

    0x2611ac83,// 217 PAY 180 

    0x6d6d8dbf,// 218 PAY 181 

    0x3a9bfbc6,// 219 PAY 182 

    0x4862dc81,// 220 PAY 183 

    0x8f0bc642,// 221 PAY 184 

    0x998c94e5,// 222 PAY 185 

    0xe0c9e9b5,// 223 PAY 186 

    0xbff0f74d,// 224 PAY 187 

    0x5ed841f4,// 225 PAY 188 

    0x0c8ac7d2,// 226 PAY 189 

    0xbfeeba96,// 227 PAY 190 

    0xf1e19aa5,// 228 PAY 191 

    0x8aacf431,// 229 PAY 192 

    0xc3f236f9,// 230 PAY 193 

    0xa1cee21e,// 231 PAY 194 

    0x9aeb0b4a,// 232 PAY 195 

    0x77e8109a,// 233 PAY 196 

    0x21e8bd52,// 234 PAY 197 

    0x6d4269cb,// 235 PAY 198 

    0xc5b4d05c,// 236 PAY 199 

    0x11989aa3,// 237 PAY 200 

    0x231aa71a,// 238 PAY 201 

    0xaa991ddc,// 239 PAY 202 

    0x5d858126,// 240 PAY 203 

    0x0f5e3184,// 241 PAY 204 

    0x0794e9aa,// 242 PAY 205 

    0xb2b13309,// 243 PAY 206 

    0xa3630000,// 244 PAY 207 

/// STA is 1 words. 

/// STA num_pkts       : 51 

/// STA pkt_idx        : 131 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xbb 

    0x020cbb33 // 245 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 80 (0x50) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_sha1_pkt65_tmpl[] = {
    0xb8010050,// 1 CCH   1 

/// ECH cache_idx      : 0x08 

/// ECH pdu_tag        : 0x00 

    0x00080000,// 2 ECH   1 

/// SCX is 19 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound save_icv insert_icv !check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : SHA1 

/// SCX aes_size        : NORMAL_RC4INIT_AES128 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x5 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 40 

    0x00000013,// 3 SCX   1 

    0x80604849,// 4 SCX   2 

    0x00006500,// 5 SCX   3 

    0xcec20a19,// 6 SCX   4 

    0x137a53f9,// 7 SCX   5 

    0xb81adaa1,// 8 SCX   6 

    0x2dee0860,// 9 SCX   7 

    0x25964cc2,// 10 SCX   8 

    0x3c3ff92f,// 11 SCX   9 

    0xe78f277c,// 12 SCX  10 

    0x0a12a933,// 13 SCX  11 

    0xea2d365d,// 14 SCX  12 

    0x71461512,// 15 SCX  13 

    0xbe2bd6a8,// 16 SCX  14 

    0x64077fc7,// 17 SCX  15 

    0xd7461487,// 18 SCX  16 

    0xdda0068b,// 19 SCX  17 

    0x2c1f3576,// 20 SCX  18 

    0x8a2b8241,// 21 SCX  19 

/// BFD is 3 words. 

/// BFD tot_len        : 51 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 27 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 27 

/// BFD lencrypto      : 8 

/// BFD ofstcrypto     : 16 

/// BFD (ofst+len)cry  : 24 

/// BFD ofstiv         : 8 

/// BFD ofsticv        : 28 

    0x0000001b,// 22 BFD   1 

    0x00100008,// 23 BFD   2 

    0x001c0008,// 24 BFD   3 

/// MFM is 2 words. 

/// MFM vldnibs        : 6 

    0x0600e7de,// 25 MFM   1 

    0xcd000000,// 26 MFM   2 

/// BDA is 14 words. 

/// BDA size     is 51 (0x33) 

/// BDA id       is 0x5fa4 

    0x00335fa4,// 27 BDA   1 

/// PAY Generic Data size   : 51 byte(s) 

/// PAD Buffer Data Pad size   : 1 byte(s) 

    0x7d130ccf,// 28 PAY   1 

    0x41632e0a,// 29 PAY   2 

    0x70bcbc45,// 30 PAY   3 

    0xf2b58fd1,// 31 PAY   4 

    0xf29ae9b7,// 32 PAY   5 

    0x8366c63d,// 33 PAY   6 

    0xdededd9f,// 34 PAY   7 

    0xdabd7349,// 35 PAY   8 

    0xaeb80ee8,// 36 PAY   9 

    0x7d006337,// 37 PAY  10 

    0x3b26d6fe,// 38 PAY  11 

    0xa6d9bee3,// 39 PAY  12 

    0x7bd8d200,// 40 PAY  13 

/// STA is 1 words. 

/// STA num_pkts       : 51 

/// STA pkt_idx        : 53 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x45 

    0x00d44533 // 41 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 80 (0x50) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_sha1_pkt66_tmpl[] = {
    0xb8010050,// 1 CCH   1 

/// ECH cache_idx      : 0x0a 

/// ECH pdu_tag        : 0x00 

    0x000a0000,// 2 ECH   1 

/// SCX is 19 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound save_icv !insert_icv !check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : SHA1 

/// SCX aes_size        : NORMAL_RC4INIT_AES128 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x3 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 40 

    0x00000013,// 3 SCX   1 

    0x8060481d,// 4 SCX   2 

    0x00004300,// 5 SCX   3 

    0xfd097baa,// 6 SCX   4 

    0x1401f307,// 7 SCX   5 

    0x0e35b84d,// 8 SCX   6 

    0x232fe176,// 9 SCX   7 

    0xf579977e,// 10 SCX   8 

    0xa9f1e2ae,// 11 SCX   9 

    0x03b9050b,// 12 SCX  10 

    0x61a888e3,// 13 SCX  11 

    0xb032fd3c,// 14 SCX  12 

    0xf7c85129,// 15 SCX  13 

    0x9f766d7f,// 16 SCX  14 

    0xcd968872,// 17 SCX  15 

    0x8e23dd86,// 18 SCX  16 

    0x7ac82776,// 19 SCX  17 

    0xf4ebb0a8,// 20 SCX  18 

    0x0faf2a94,// 21 SCX  19 

/// BFD is 3 words. 

/// BFD tot_len        : 111 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 38 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 38 

/// BFD lencrypto      : 16 

/// BFD ofstcrypto     : 12 

/// BFD (ofst+len)cry  : 28 

/// BFD ofstiv         : 0 

/// BFD ofsticv        : 80 

    0x00000026,// 22 BFD   1 

    0x000c0010,// 23 BFD   2 

    0x00500000,// 24 BFD   3 

/// MFM is 1 words. 

/// MFM vldnibs        : 1 

    0x01004000,// 25 MFM   1 

/// BDA is 29 words. 

/// BDA size     is 111 (0x6f) 

/// BDA id       is 0xb717 

    0x006fb717,// 26 BDA   1 

/// PAY Generic Data size   : 111 byte(s) 

/// PAD Buffer Data Pad size   : 1 byte(s) 

    0xf6b4b46a,// 27 PAY   1 

    0x2dd9276a,// 28 PAY   2 

    0xbeb25a81,// 29 PAY   3 

    0xb1c47651,// 30 PAY   4 

    0xc58489a6,// 31 PAY   5 

    0xa34e6853,// 32 PAY   6 

    0x73a91509,// 33 PAY   7 

    0x4dc4f234,// 34 PAY   8 

    0x57199cdc,// 35 PAY   9 

    0x6bfebbab,// 36 PAY  10 

    0x39186042,// 37 PAY  11 

    0xbe2166dc,// 38 PAY  12 

    0x88cec337,// 39 PAY  13 

    0x23a952dc,// 40 PAY  14 

    0x429070ac,// 41 PAY  15 

    0xf36abc3d,// 42 PAY  16 

    0x27aa1ed7,// 43 PAY  17 

    0xdf429d28,// 44 PAY  18 

    0x69ff6479,// 45 PAY  19 

    0x2bfe2dd2,// 46 PAY  20 

    0xefc30da1,// 47 PAY  21 

    0x1ae96dc1,// 48 PAY  22 

    0x00cd80be,// 49 PAY  23 

    0x04261904,// 50 PAY  24 

    0xed9ab102,// 51 PAY  25 

    0xb9db1955,// 52 PAY  26 

    0xc2da281c,// 53 PAY  27 

    0xcfa48500,// 54 PAY  28 

/// STA is 1 words. 

/// STA num_pkts       : 91 

/// STA pkt_idx        : 122 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x83 

    0x01e8835b // 55 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 80 (0x50) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_sha1_pkt67_tmpl[] = {
    0xb8010050,// 1 CCH   1 

/// ECH cache_idx      : 0x09 

/// ECH pdu_tag        : 0x00 

    0x00090000,// 2 ECH   1 

/// SCX is 19 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound save_icv !insert_icv !check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : SHA1 

/// SCX aes_size        : RC4UPDT_AES192 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x2 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 40 

    0x08000013,// 3 SCX   1 

    0x8061480a,// 4 SCX   2 

    0x00004200,// 5 SCX   3 

    0xc939c3fd,// 6 SCX   4 

    0x1e093ebb,// 7 SCX   5 

    0x4a7c784d,// 8 SCX   6 

    0x68e38a76,// 9 SCX   7 

    0xacece110,// 10 SCX   8 

    0x10bc101e,// 11 SCX   9 

    0xf9d7e510,// 12 SCX  10 

    0x8ccdbe1d,// 13 SCX  11 

    0x5f747f5c,// 14 SCX  12 

    0x5f3b1b3d,// 15 SCX  13 

    0x662d0694,// 16 SCX  14 

    0xdb211a21,// 17 SCX  15 

    0xb27cabc7,// 18 SCX  16 

    0xdeb03a53,// 19 SCX  17 

    0xd130acde,// 20 SCX  18 

    0x8224c6d0,// 21 SCX  19 

/// BFD is 3 words. 

/// BFD tot_len        : 313 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 279 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 279 

/// BFD lencrypto      : 232 

/// BFD ofstcrypto     : 44 

/// BFD (ofst+len)cry  : 276 

/// BFD ofstiv         : 20 

/// BFD ofsticv        : 284 

    0x00000117,// 22 BFD   1 

    0x002c00e8,// 23 BFD   2 

    0x011c0014,// 24 BFD   3 

/// MFM is 6 words. 

/// MFM vldnibs        : 26 

    0x2600b0f1,// 25 MFM   1 

    0x37f9af29,// 26 MFM   2 

    0xcc6d840a,// 27 MFM   3 

    0xc3b55f66,// 28 MFM   4 

    0x6a752f11,// 29 MFM   5 

    0x1b000000,// 30 MFM   6 

/// BDA is 80 words. 

/// BDA size     is 313 (0x139) 

/// BDA id       is 0xa522 

    0x0139a522,// 31 BDA   1 

/// PAY Generic Data size   : 313 byte(s) 

/// PAD Buffer Data Pad size   : 3 byte(s) 

    0x4ca3ea2c,// 32 PAY   1 

    0x8dddba33,// 33 PAY   2 

    0x7c40cc3b,// 34 PAY   3 

    0x25e59d83,// 35 PAY   4 

    0x67710dfe,// 36 PAY   5 

    0x748e3a46,// 37 PAY   6 

    0xf1c798ed,// 38 PAY   7 

    0x6579e48f,// 39 PAY   8 

    0xe0e8010e,// 40 PAY   9 

    0xef1c2b3f,// 41 PAY  10 

    0xc12a3945,// 42 PAY  11 

    0xcf2efdce,// 43 PAY  12 

    0xd0fdd915,// 44 PAY  13 

    0x3ca01eb0,// 45 PAY  14 

    0xb2b34684,// 46 PAY  15 

    0xa816c0b8,// 47 PAY  16 

    0x5b750a98,// 48 PAY  17 

    0xefb81f40,// 49 PAY  18 

    0xeff2a8ea,// 50 PAY  19 

    0x7e27176e,// 51 PAY  20 

    0x722a382d,// 52 PAY  21 

    0xa47e34b3,// 53 PAY  22 

    0x8cdad5a4,// 54 PAY  23 

    0x1a7a1213,// 55 PAY  24 

    0xa8a2d03b,// 56 PAY  25 

    0x18f67aef,// 57 PAY  26 

    0xbd42ec4a,// 58 PAY  27 

    0x32c81f41,// 59 PAY  28 

    0xeb46c986,// 60 PAY  29 

    0xbb795092,// 61 PAY  30 

    0x722b9294,// 62 PAY  31 

    0xbea05920,// 63 PAY  32 

    0x535e61e2,// 64 PAY  33 

    0x78b1c1f8,// 65 PAY  34 

    0xa9cb3399,// 66 PAY  35 

    0x93886857,// 67 PAY  36 

    0x5fcb8a5c,// 68 PAY  37 

    0xcaefcf62,// 69 PAY  38 

    0x40b6f9b7,// 70 PAY  39 

    0x5194e01e,// 71 PAY  40 

    0x561e4f9b,// 72 PAY  41 

    0xcb43d1dc,// 73 PAY  42 

    0x6ffa0f56,// 74 PAY  43 

    0x89b1c29c,// 75 PAY  44 

    0xc086968e,// 76 PAY  45 

    0x4d58b2f4,// 77 PAY  46 

    0xa1d456c5,// 78 PAY  47 

    0x1e8db1b1,// 79 PAY  48 

    0x061d3c2a,// 80 PAY  49 

    0xb025a224,// 81 PAY  50 

    0x9942ba83,// 82 PAY  51 

    0x4819f525,// 83 PAY  52 

    0xae0e6364,// 84 PAY  53 

    0x75ace9df,// 85 PAY  54 

    0x402ceef3,// 86 PAY  55 

    0x8321badd,// 87 PAY  56 

    0xf91eb3a7,// 88 PAY  57 

    0xffafbf26,// 89 PAY  58 

    0x5ca42de0,// 90 PAY  59 

    0x3aca621d,// 91 PAY  60 

    0x476a47d4,// 92 PAY  61 

    0x05cfb7c6,// 93 PAY  62 

    0x936eab06,// 94 PAY  63 

    0x5a48bda2,// 95 PAY  64 

    0x519e351c,// 96 PAY  65 

    0x870ca39d,// 97 PAY  66 

    0x3910189a,// 98 PAY  67 

    0x26fe49fb,// 99 PAY  68 

    0x784b8676,// 100 PAY  69 

    0x8e4493a8,// 101 PAY  70 

    0x194c60fc,// 102 PAY  71 

    0x7a1ac8f0,// 103 PAY  72 

    0xc44be9e2,// 104 PAY  73 

    0x1d3cae1e,// 105 PAY  74 

    0xf16463c7,// 106 PAY  75 

    0xd7d13edd,// 107 PAY  76 

    0x9313e379,// 108 PAY  77 

    0x355ce742,// 109 PAY  78 

    0xd5000000,// 110 PAY  79 

/// STA is 1 words. 

/// STA num_pkts       : 221 

/// STA pkt_idx        : 35 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xd4 

    0x008cd4dd // 111 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 80 (0x50) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_sha1_pkt68_tmpl[] = {
    0xb8010050,// 1 CCH   1 

/// ECH cache_idx      : 0x00 

/// ECH pdu_tag        : 0x00 

    0x00000000,// 2 ECH   1 

/// SCX is 19 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound save_icv !insert_icv !check_icv !sctx_iv  

/// SCX exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : SHA1 

/// SCX aes_size        : AES256 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x5 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 40 

    0x00000013,// 3 SCX   1 

    0x80664898,// 4 SCX   2 

    0x00004542,// 5 SCX   3 

    0x53f286fa,// 6 SCX   4 

    0xc972c1f7,// 7 SCX   5 

    0xfefe4c44,// 8 SCX   6 

    0x05e70119,// 9 SCX   7 

    0x723322cb,// 10 SCX   8 

    0x8bcd8063,// 11 SCX   9 

    0xd978be64,// 12 SCX  10 

    0x7ef4e82f,// 13 SCX  11 

    0xd5202638,// 14 SCX  12 

    0x26226b5a,// 15 SCX  13 

    0x2470570e,// 16 SCX  14 

    0xc3e35aac,// 17 SCX  15 

    0xb47272b5,// 18 SCX  16 

    0x9551018b,// 19 SCX  17 

    0xa600f1a1,// 20 SCX  18 

    0x79ee759f,// 21 SCX  19 

/// BFD is 3 words. 

/// BFD tot_len        : 1327 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 1062 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 1062 

/// BFD lencrypto      : 600 

/// BFD ofstcrypto     : 76 

/// BFD (ofst+len)cry  : 676 

/// BFD ofstiv         : 20 

/// BFD ofsticv        : 1280 

    0x00000426,// 22 BFD   1 

    0x004c0258,// 23 BFD   2 

    0x05000014,// 24 BFD   3 

/// MFM is 13 words. 

/// MFM vldnibs        : 60 

    0x6000ef9d,// 25 MFM   1 

    0x82fc984c,// 26 MFM   2 

    0x1e9b6b3e,// 27 MFM   3 

    0xfe5e77f6,// 28 MFM   4 

    0xa716f8a9,// 29 MFM   5 

    0xd922cd64,// 30 MFM   6 

    0x458b9cc0,// 31 MFM   7 

    0x68ef4bd6,// 32 MFM   8 

    0xb40d1ce0,// 33 MFM   9 

    0xf4fbfc37,// 34 MFM  10 

    0x6eac2f85,// 35 MFM  11 

    0xacf5c1bc,// 36 MFM  12 

    0x32b30000,// 37 MFM  13 

/// BDA is 333 words. 

/// BDA size     is 1327 (0x52f) 

/// BDA id       is 0x7985 

    0x052f7985,// 38 BDA   1 

/// PAY Generic Data size   : 1327 byte(s) 

/// PAD Buffer Data Pad size   : 1 byte(s) 

    0x645a792f,// 39 PAY   1 

    0xedc972df,// 40 PAY   2 

    0xcbe27842,// 41 PAY   3 

    0x2193a206,// 42 PAY   4 

    0xb1a270f7,// 43 PAY   5 

    0xc5413a7d,// 44 PAY   6 

    0x0784fd6c,// 45 PAY   7 

    0x39d336fb,// 46 PAY   8 

    0xc74a0f41,// 47 PAY   9 

    0x8b6594fe,// 48 PAY  10 

    0x66dcd55b,// 49 PAY  11 

    0xb989f1fc,// 50 PAY  12 

    0xe988e86c,// 51 PAY  13 

    0xe2ae6108,// 52 PAY  14 

    0xba85c8b1,// 53 PAY  15 

    0x3518d7db,// 54 PAY  16 

    0xe979a42e,// 55 PAY  17 

    0xc3ff24b5,// 56 PAY  18 

    0x35fdd523,// 57 PAY  19 

    0x33a6384e,// 58 PAY  20 

    0x3c90c837,// 59 PAY  21 

    0x9d1c467c,// 60 PAY  22 

    0xfb4b4803,// 61 PAY  23 

    0xbea02ecc,// 62 PAY  24 

    0xd2787f80,// 63 PAY  25 

    0xf28d0d2f,// 64 PAY  26 

    0x365ea43c,// 65 PAY  27 

    0xc3ab7c27,// 66 PAY  28 

    0x24a8e9eb,// 67 PAY  29 

    0x1a3ab622,// 68 PAY  30 

    0xe7702d52,// 69 PAY  31 

    0x2d97e890,// 70 PAY  32 

    0x90d492e5,// 71 PAY  33 

    0xd9b1c5f1,// 72 PAY  34 

    0x07d8f417,// 73 PAY  35 

    0x5a92b197,// 74 PAY  36 

    0x9e50efcf,// 75 PAY  37 

    0xc75b13cb,// 76 PAY  38 

    0x3a39f2e0,// 77 PAY  39 

    0x04d433b6,// 78 PAY  40 

    0xe4a395f1,// 79 PAY  41 

    0x86e39872,// 80 PAY  42 

    0x866a3868,// 81 PAY  43 

    0x119d28ab,// 82 PAY  44 

    0xa56cecc2,// 83 PAY  45 

    0xab30e984,// 84 PAY  46 

    0x59e098d0,// 85 PAY  47 

    0xcb80e882,// 86 PAY  48 

    0x4131146d,// 87 PAY  49 

    0xd49362d5,// 88 PAY  50 

    0x7801593e,// 89 PAY  51 

    0x0cb22dc4,// 90 PAY  52 

    0x4a0882aa,// 91 PAY  53 

    0x7fb01914,// 92 PAY  54 

    0x55b0fa80,// 93 PAY  55 

    0x37ef7938,// 94 PAY  56 

    0x66ebd585,// 95 PAY  57 

    0xbd26739e,// 96 PAY  58 

    0x19c7cc4b,// 97 PAY  59 

    0x68bc0de9,// 98 PAY  60 

    0x0047e624,// 99 PAY  61 

    0xd8dea14e,// 100 PAY  62 

    0xebaafe07,// 101 PAY  63 

    0x5359fe49,// 102 PAY  64 

    0x4e3a425c,// 103 PAY  65 

    0x24209e2b,// 104 PAY  66 

    0x096f83e6,// 105 PAY  67 

    0xdb8d1e12,// 106 PAY  68 

    0x89ca5eb0,// 107 PAY  69 

    0xd005d9e3,// 108 PAY  70 

    0x13e2eacc,// 109 PAY  71 

    0x6c08b10b,// 110 PAY  72 

    0xb3d58b62,// 111 PAY  73 

    0xe1370867,// 112 PAY  74 

    0x066bab1a,// 113 PAY  75 

    0x39c347f4,// 114 PAY  76 

    0xb544ba3b,// 115 PAY  77 

    0x21219c49,// 116 PAY  78 

    0xed82541c,// 117 PAY  79 

    0xab9a2e74,// 118 PAY  80 

    0x1a64a410,// 119 PAY  81 

    0x6b17ffe3,// 120 PAY  82 

    0x7aa9b376,// 121 PAY  83 

    0xaf4d07cf,// 122 PAY  84 

    0x02d2d62e,// 123 PAY  85 

    0x1449efea,// 124 PAY  86 

    0xfeaa3366,// 125 PAY  87 

    0x224dc786,// 126 PAY  88 

    0x3b8ac192,// 127 PAY  89 

    0x2127e00d,// 128 PAY  90 

    0x8adad7fe,// 129 PAY  91 

    0x289a829d,// 130 PAY  92 

    0x49fb48e6,// 131 PAY  93 

    0x120b8539,// 132 PAY  94 

    0xc175c273,// 133 PAY  95 

    0x3422d2c7,// 134 PAY  96 

    0xa1b32939,// 135 PAY  97 

    0xb903dbdb,// 136 PAY  98 

    0x9940ca2f,// 137 PAY  99 

    0xb1fe4435,// 138 PAY 100 

    0x6602354c,// 139 PAY 101 

    0x6af65903,// 140 PAY 102 

    0x39fdad20,// 141 PAY 103 

    0x2535438c,// 142 PAY 104 

    0xdfd1ed23,// 143 PAY 105 

    0xda29dd36,// 144 PAY 106 

    0xa04a1113,// 145 PAY 107 

    0x1e080857,// 146 PAY 108 

    0xbe98f964,// 147 PAY 109 

    0xde1bc797,// 148 PAY 110 

    0xde5ab369,// 149 PAY 111 

    0x0a5ece2d,// 150 PAY 112 

    0x192abde5,// 151 PAY 113 

    0x098f1d2d,// 152 PAY 114 

    0x319120c2,// 153 PAY 115 

    0xa175997e,// 154 PAY 116 

    0x7fd53e1b,// 155 PAY 117 

    0x3e564bac,// 156 PAY 118 

    0xc16141ed,// 157 PAY 119 

    0x23c1e453,// 158 PAY 120 

    0x701be412,// 159 PAY 121 

    0x134d1f3f,// 160 PAY 122 

    0xc97dcc29,// 161 PAY 123 

    0x81708162,// 162 PAY 124 

    0x51b61168,// 163 PAY 125 

    0x249cc944,// 164 PAY 126 

    0xb914d705,// 165 PAY 127 

    0x4fbd83ea,// 166 PAY 128 

    0x61133d43,// 167 PAY 129 

    0x6fc21b12,// 168 PAY 130 

    0xa62c1ade,// 169 PAY 131 

    0xe58c2403,// 170 PAY 132 

    0xf729d4f5,// 171 PAY 133 

    0x05c9587f,// 172 PAY 134 

    0x6ef7af04,// 173 PAY 135 

    0x4a2f5be1,// 174 PAY 136 

    0x5239f272,// 175 PAY 137 

    0xeec05888,// 176 PAY 138 

    0xb25650ec,// 177 PAY 139 

    0x23e02d19,// 178 PAY 140 

    0x07d55e49,// 179 PAY 141 

    0x35de2e1c,// 180 PAY 142 

    0x7e31c0a3,// 181 PAY 143 

    0x9105f015,// 182 PAY 144 

    0xbaa9a559,// 183 PAY 145 

    0xd62e967f,// 184 PAY 146 

    0x15c8aa41,// 185 PAY 147 

    0x4fd7ced3,// 186 PAY 148 

    0x73912bdf,// 187 PAY 149 

    0x453b5ded,// 188 PAY 150 

    0xc269eefe,// 189 PAY 151 

    0xbf37d45d,// 190 PAY 152 

    0x4ec952b8,// 191 PAY 153 

    0xae8c563e,// 192 PAY 154 

    0x532a8ec8,// 193 PAY 155 

    0xcf71cfb6,// 194 PAY 156 

    0xdbfe17b2,// 195 PAY 157 

    0x41ceee34,// 196 PAY 158 

    0x4f1a62db,// 197 PAY 159 

    0xb035ec4b,// 198 PAY 160 

    0x668b3086,// 199 PAY 161 

    0xcb850e79,// 200 PAY 162 

    0xfb54d4d9,// 201 PAY 163 

    0x470b3d74,// 202 PAY 164 

    0x13a3179b,// 203 PAY 165 

    0x7c3c5417,// 204 PAY 166 

    0x9b1bddab,// 205 PAY 167 

    0x9b1a6831,// 206 PAY 168 

    0x91b258e1,// 207 PAY 169 

    0xae464700,// 208 PAY 170 

    0xce169f7f,// 209 PAY 171 

    0xca15fa4e,// 210 PAY 172 

    0x08094514,// 211 PAY 173 

    0xbefdfcb9,// 212 PAY 174 

    0xd3a0a132,// 213 PAY 175 

    0x0f5ff80d,// 214 PAY 176 

    0x7eba0a9f,// 215 PAY 177 

    0x4debb848,// 216 PAY 178 

    0x38c180dd,// 217 PAY 179 

    0xcbe5f48a,// 218 PAY 180 

    0x788b70c3,// 219 PAY 181 

    0x518b2b4b,// 220 PAY 182 

    0xb345232f,// 221 PAY 183 

    0x74fb1a17,// 222 PAY 184 

    0xd7078667,// 223 PAY 185 

    0x8cb4a22b,// 224 PAY 186 

    0xac5b0937,// 225 PAY 187 

    0xdb8e9d08,// 226 PAY 188 

    0x854545fa,// 227 PAY 189 

    0x0e3c100f,// 228 PAY 190 

    0x4c0a2689,// 229 PAY 191 

    0xf9e750e9,// 230 PAY 192 

    0x123edbad,// 231 PAY 193 

    0x68f6888b,// 232 PAY 194 

    0xb3eb7256,// 233 PAY 195 

    0xd5f9302f,// 234 PAY 196 

    0x100f8732,// 235 PAY 197 

    0x70caa38c,// 236 PAY 198 

    0x9a908355,// 237 PAY 199 

    0x9bbb1817,// 238 PAY 200 

    0x3e1c3377,// 239 PAY 201 

    0x8e49d671,// 240 PAY 202 

    0xe35a1fec,// 241 PAY 203 

    0x233f4c8e,// 242 PAY 204 

    0x63bee6fd,// 243 PAY 205 

    0x99ead7aa,// 244 PAY 206 

    0xb987615b,// 245 PAY 207 

    0x83e06833,// 246 PAY 208 

    0x25b4aefa,// 247 PAY 209 

    0x852d22ae,// 248 PAY 210 

    0x8a6eaf80,// 249 PAY 211 

    0xac7e6528,// 250 PAY 212 

    0x5db51095,// 251 PAY 213 

    0x82794e23,// 252 PAY 214 

    0x7344f0a7,// 253 PAY 215 

    0x0c88db72,// 254 PAY 216 

    0x73c2b790,// 255 PAY 217 

    0x64ffd0c8,// 256 PAY 218 

    0x620d591d,// 257 PAY 219 

    0x3e8c7cdf,// 258 PAY 220 

    0x12369bac,// 259 PAY 221 

    0xb4762d4e,// 260 PAY 222 

    0x47010767,// 261 PAY 223 

    0xfe6d5f1c,// 262 PAY 224 

    0xc21c05c7,// 263 PAY 225 

    0x3501223b,// 264 PAY 226 

    0xa027f453,// 265 PAY 227 

    0x8a79e95b,// 266 PAY 228 

    0xa09bbb46,// 267 PAY 229 

    0x732d382e,// 268 PAY 230 

    0x7b952202,// 269 PAY 231 

    0x976230c3,// 270 PAY 232 

    0xdb189bb6,// 271 PAY 233 

    0xdd211d83,// 272 PAY 234 

    0x8132b286,// 273 PAY 235 

    0x08c25a85,// 274 PAY 236 

    0x1cfa6397,// 275 PAY 237 

    0x83c76731,// 276 PAY 238 

    0x0742c10e,// 277 PAY 239 

    0xad892a86,// 278 PAY 240 

    0x46711935,// 279 PAY 241 

    0x1466c62e,// 280 PAY 242 

    0x9a775c02,// 281 PAY 243 

    0x7effe4e5,// 282 PAY 244 

    0xc698a934,// 283 PAY 245 

    0xcbe3e455,// 284 PAY 246 

    0x85d2b436,// 285 PAY 247 

    0x8962c1c9,// 286 PAY 248 

    0x84e19b02,// 287 PAY 249 

    0x5b88ddca,// 288 PAY 250 

    0xe5ce1e61,// 289 PAY 251 

    0x98e51ebe,// 290 PAY 252 

    0xa06b6235,// 291 PAY 253 

    0x879f7bc2,// 292 PAY 254 

    0xae66e25a,// 293 PAY 255 

    0x8bcc665b,// 294 PAY 256 

    0xdf655ad1,// 295 PAY 257 

    0x515d9ee8,// 296 PAY 258 

    0x4f011218,// 297 PAY 259 

    0x352da860,// 298 PAY 260 

    0xc5ff4d67,// 299 PAY 261 

    0xa7356eea,// 300 PAY 262 

    0xc0a83739,// 301 PAY 263 

    0x7fd30891,// 302 PAY 264 

    0xd040d325,// 303 PAY 265 

    0x0171ea95,// 304 PAY 266 

    0xf721cfcd,// 305 PAY 267 

    0x1a7e78bc,// 306 PAY 268 

    0x0955d93c,// 307 PAY 269 

    0xd2c9dfe6,// 308 PAY 270 

    0x1384c9dc,// 309 PAY 271 

    0x4b0428e2,// 310 PAY 272 

    0xc529a9dd,// 311 PAY 273 

    0x7c1aadc7,// 312 PAY 274 

    0xda01ac75,// 313 PAY 275 

    0xec621064,// 314 PAY 276 

    0x8a7a4d9b,// 315 PAY 277 

    0xb02a79d2,// 316 PAY 278 

    0xc0d65a8f,// 317 PAY 279 

    0x1c097008,// 318 PAY 280 

    0x5b0255a8,// 319 PAY 281 

    0x0520980b,// 320 PAY 282 

    0xb231b77c,// 321 PAY 283 

    0x753385f1,// 322 PAY 284 

    0x2666629a,// 323 PAY 285 

    0x3619109e,// 324 PAY 286 

    0x600a5bbc,// 325 PAY 287 

    0x352804d8,// 326 PAY 288 

    0xa3fe9455,// 327 PAY 289 

    0xbd704350,// 328 PAY 290 

    0x762bef74,// 329 PAY 291 

    0x17c57615,// 330 PAY 292 

    0xc41310cf,// 331 PAY 293 

    0x823351d8,// 332 PAY 294 

    0x6d99fdcc,// 333 PAY 295 

    0x41936330,// 334 PAY 296 

    0x3486dd17,// 335 PAY 297 

    0xf28c563a,// 336 PAY 298 

    0x8f0858bb,// 337 PAY 299 

    0x03a7ef78,// 338 PAY 300 

    0x795bc02c,// 339 PAY 301 

    0x9ac87d81,// 340 PAY 302 

    0x0f3b729a,// 341 PAY 303 

    0xbc4067c1,// 342 PAY 304 

    0x47d5c5fd,// 343 PAY 305 

    0x6a805656,// 344 PAY 306 

    0xa7da2cad,// 345 PAY 307 

    0x10557b6d,// 346 PAY 308 

    0x7d1f6837,// 347 PAY 309 

    0x80324980,// 348 PAY 310 

    0x17faa5b8,// 349 PAY 311 

    0x6aa12720,// 350 PAY 312 

    0x458b0e78,// 351 PAY 313 

    0xbda0409f,// 352 PAY 314 

    0x5af3cd12,// 353 PAY 315 

    0x25397088,// 354 PAY 316 

    0x5cca54e0,// 355 PAY 317 

    0x1892c8f4,// 356 PAY 318 

    0xbfd0b2fe,// 357 PAY 319 

    0xd29a4b38,// 358 PAY 320 

    0xb7880db4,// 359 PAY 321 

    0xc6ffe434,// 360 PAY 322 

    0x061f154d,// 361 PAY 323 

    0xa7daf202,// 362 PAY 324 

    0x096afa94,// 363 PAY 325 

    0x6fabe8aa,// 364 PAY 326 

    0x4a1bbecb,// 365 PAY 327 

    0x6c9c1c28,// 366 PAY 328 

    0x5e2bb4da,// 367 PAY 329 

    0xeaa0b09b,// 368 PAY 330 

    0x798fc14a,// 369 PAY 331 

    0x6d14ec00,// 370 PAY 332 

/// STA is 1 words. 

/// STA num_pkts       : 198 

/// STA pkt_idx        : 217 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x9d 

    0x03659dc6 // 371 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 80 (0x50) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_sha1_pkt69_tmpl[] = {
    0xb8010050,// 1 CCH   1 

/// ECH cache_idx      : 0x04 

/// ECH pdu_tag        : 0x00 

    0x00040000,// 2 ECH   1 

/// SCX is 19 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound !save_icv !insert_icv check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : SHA1 

/// SCX aes_size        : RC4UPDT_AES192 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x5 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 40 

    0x08000013,// 3 SCX   1 

    0x806148ec,// 4 SCX   2 

    0x00001500,// 5 SCX   3 

    0x71aec469,// 6 SCX   4 

    0xb41e5663,// 7 SCX   5 

    0xfbc25b15,// 8 SCX   6 

    0x391e2e24,// 9 SCX   7 

    0x29024265,// 10 SCX   8 

    0x0fa9a5c8,// 11 SCX   9 

    0x4fda150d,// 12 SCX  10 

    0xb8b7374b,// 13 SCX  11 

    0x9ba67fb5,// 14 SCX  12 

    0x1a42cc87,// 15 SCX  13 

    0x46d4e4e7,// 16 SCX  14 

    0x08def798,// 17 SCX  15 

    0x7a1f9181,// 18 SCX  16 

    0x6013c233,// 19 SCX  17 

    0xaa26418f,// 20 SCX  18 

    0xb93d6d70,// 21 SCX  19 

/// BFD is 3 words. 

/// BFD tot_len        : 1982 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 1385 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 1385 

/// BFD lencrypto      : 864 

/// BFD ofstcrypto     : 516 

/// BFD (ofst+len)cry  : 1380 

/// BFD ofstiv         : 220 

/// BFD ofsticv        : 1452 

    0x00000569,// 22 BFD   1 

    0x02040360,// 23 BFD   2 

    0x05ac00dc,// 24 BFD   3 

/// MFM is 16 words. 

/// MFM vldnibs        : 7c 

    0x7c00499a,// 25 MFM   1 

    0x0dfd7cfb,// 26 MFM   2 

    0xd51ff8f0,// 27 MFM   3 

    0x198b9add,// 28 MFM   4 

    0xf3e2f990,// 29 MFM   5 

    0x8433d90b,// 30 MFM   6 

    0x61f30677,// 31 MFM   7 

    0xc6b3fc1d,// 32 MFM   8 

    0x08bf1222,// 33 MFM   9 

    0x2a34b4ce,// 34 MFM  10 

    0xc70dba38,// 35 MFM  11 

    0x95f3df6f,// 36 MFM  12 

    0x8094eb99,// 37 MFM  13 

    0x562a6d83,// 38 MFM  14 

    0x53e91e2e,// 39 MFM  15 

    0x26183f45,// 40 MFM  16 

/// BDA is 497 words. 

/// BDA size     is 1982 (0x7be) 

/// BDA id       is 0xe834 

    0x07bee834,// 41 BDA   1 

/// PAY Generic Data size   : 1982 byte(s) 

/// PAD Buffer Data Pad size   : 2 byte(s) 

    0xe3d5cfc8,// 42 PAY   1 

    0x868022d5,// 43 PAY   2 

    0x4ef5832f,// 44 PAY   3 

    0xe632d969,// 45 PAY   4 

    0x89da5e94,// 46 PAY   5 

    0xae4a68fc,// 47 PAY   6 

    0xc894e55f,// 48 PAY   7 

    0xc605c8a0,// 49 PAY   8 

    0x20e88a44,// 50 PAY   9 

    0x8140cc41,// 51 PAY  10 

    0xa20ff1ce,// 52 PAY  11 

    0x5f35a165,// 53 PAY  12 

    0x24cb9fde,// 54 PAY  13 

    0x2605e6b6,// 55 PAY  14 

    0x6622a2a2,// 56 PAY  15 

    0xa1884d71,// 57 PAY  16 

    0x78fd88c3,// 58 PAY  17 

    0x6aa1fd1c,// 59 PAY  18 

    0xb6f99946,// 60 PAY  19 

    0x07a07f92,// 61 PAY  20 

    0x00b3d27d,// 62 PAY  21 

    0x8cc41be3,// 63 PAY  22 

    0x0f34e924,// 64 PAY  23 

    0xf5388c93,// 65 PAY  24 

    0xf8ec9370,// 66 PAY  25 

    0x8576012a,// 67 PAY  26 

    0x568216d6,// 68 PAY  27 

    0x3f3c6432,// 69 PAY  28 

    0x706171b5,// 70 PAY  29 

    0x2a9ffa3e,// 71 PAY  30 

    0xd8592cd2,// 72 PAY  31 

    0x7168dbfa,// 73 PAY  32 

    0x5b6a9470,// 74 PAY  33 

    0x2666dbcb,// 75 PAY  34 

    0x6b851531,// 76 PAY  35 

    0xd38beeba,// 77 PAY  36 

    0x2f5f1582,// 78 PAY  37 

    0xe4cf79ff,// 79 PAY  38 

    0x966fb515,// 80 PAY  39 

    0xd863dec9,// 81 PAY  40 

    0xfe7ffd8f,// 82 PAY  41 

    0xf91c89a3,// 83 PAY  42 

    0x90a41af4,// 84 PAY  43 

    0x95150e94,// 85 PAY  44 

    0xdc042bc0,// 86 PAY  45 

    0x51a7148c,// 87 PAY  46 

    0xff64fcd5,// 88 PAY  47 

    0x68f99d48,// 89 PAY  48 

    0xceffb823,// 90 PAY  49 

    0x4081abb6,// 91 PAY  50 

    0xac379345,// 92 PAY  51 

    0x23e83215,// 93 PAY  52 

    0x014e5897,// 94 PAY  53 

    0x2a2cf6d8,// 95 PAY  54 

    0xedc52e96,// 96 PAY  55 

    0x2b82485c,// 97 PAY  56 

    0x99d8d8ae,// 98 PAY  57 

    0x936d18ae,// 99 PAY  58 

    0x98ad13a2,// 100 PAY  59 

    0xfd26a123,// 101 PAY  60 

    0x84cc4da3,// 102 PAY  61 

    0x9508ebc2,// 103 PAY  62 

    0xfb5f3edd,// 104 PAY  63 

    0xf7c1180e,// 105 PAY  64 

    0x4002ba26,// 106 PAY  65 

    0xb276b007,// 107 PAY  66 

    0xaf1cd894,// 108 PAY  67 

    0x9def65ab,// 109 PAY  68 

    0x970b08f9,// 110 PAY  69 

    0x21a47e8b,// 111 PAY  70 

    0x6c13590a,// 112 PAY  71 

    0x999fa93a,// 113 PAY  72 

    0x409e70f1,// 114 PAY  73 

    0x11f0dd46,// 115 PAY  74 

    0xc6620811,// 116 PAY  75 

    0x55ae3bb1,// 117 PAY  76 

    0xcf676e12,// 118 PAY  77 

    0x60e40d5c,// 119 PAY  78 

    0x75a906ab,// 120 PAY  79 

    0x90e79371,// 121 PAY  80 

    0x1c5a38bd,// 122 PAY  81 

    0xa3f0fb7b,// 123 PAY  82 

    0x0a3b72b2,// 124 PAY  83 

    0xe5cb0e4a,// 125 PAY  84 

    0x0d7a5dd4,// 126 PAY  85 

    0x43d08178,// 127 PAY  86 

    0x2db8d64e,// 128 PAY  87 

    0xc731dca0,// 129 PAY  88 

    0xf562c1bb,// 130 PAY  89 

    0x70df8093,// 131 PAY  90 

    0xf14e5421,// 132 PAY  91 

    0xa8219a3a,// 133 PAY  92 

    0xd9fbe4c3,// 134 PAY  93 

    0x8e2daa19,// 135 PAY  94 

    0x51b51599,// 136 PAY  95 

    0x3a0265ff,// 137 PAY  96 

    0xc0c0f71f,// 138 PAY  97 

    0xccc25de3,// 139 PAY  98 

    0x3066b7de,// 140 PAY  99 

    0x89af4e51,// 141 PAY 100 

    0x4fba5be1,// 142 PAY 101 

    0xa258663a,// 143 PAY 102 

    0xdd1f4b11,// 144 PAY 103 

    0x34715530,// 145 PAY 104 

    0xdc2c8254,// 146 PAY 105 

    0x7ac06024,// 147 PAY 106 

    0xd3ca04ae,// 148 PAY 107 

    0x6de5c975,// 149 PAY 108 

    0x062151e9,// 150 PAY 109 

    0xffadc9af,// 151 PAY 110 

    0x76f4b27a,// 152 PAY 111 

    0xdb116972,// 153 PAY 112 

    0xf1295964,// 154 PAY 113 

    0xab03c2a2,// 155 PAY 114 

    0x70b89272,// 156 PAY 115 

    0x3007113c,// 157 PAY 116 

    0x7a5bd2b0,// 158 PAY 117 

    0xfd61430c,// 159 PAY 118 

    0x0facc966,// 160 PAY 119 

    0x60e39412,// 161 PAY 120 

    0x4a186fa4,// 162 PAY 121 

    0xca6b5283,// 163 PAY 122 

    0x4ea6cf57,// 164 PAY 123 

    0xd3f897c9,// 165 PAY 124 

    0x81c15644,// 166 PAY 125 

    0xf15e9890,// 167 PAY 126 

    0x1130e66a,// 168 PAY 127 

    0xb1738cca,// 169 PAY 128 

    0xd0622896,// 170 PAY 129 

    0x2d87a704,// 171 PAY 130 

    0xf91a9a81,// 172 PAY 131 

    0x4871f1aa,// 173 PAY 132 

    0xc41e42e1,// 174 PAY 133 

    0x944ee2f6,// 175 PAY 134 

    0x172578e0,// 176 PAY 135 

    0x2c8f7624,// 177 PAY 136 

    0x8f6ff1a5,// 178 PAY 137 

    0x75be063f,// 179 PAY 138 

    0x9bca0d33,// 180 PAY 139 

    0xd7e3e75a,// 181 PAY 140 

    0xec64fa42,// 182 PAY 141 

    0x54e34901,// 183 PAY 142 

    0x98bec2f5,// 184 PAY 143 

    0x4295d4c6,// 185 PAY 144 

    0x8cf1bf20,// 186 PAY 145 

    0xcd1fbdfb,// 187 PAY 146 

    0x53b9bf3e,// 188 PAY 147 

    0xc4e8def4,// 189 PAY 148 

    0x6e4a48aa,// 190 PAY 149 

    0x17b1e2ce,// 191 PAY 150 

    0x896e708c,// 192 PAY 151 

    0xb4e39327,// 193 PAY 152 

    0x3f368f6e,// 194 PAY 153 

    0x970af066,// 195 PAY 154 

    0x3c26220c,// 196 PAY 155 

    0xe7cefc43,// 197 PAY 156 

    0x4ab1fbbd,// 198 PAY 157 

    0xb49efc50,// 199 PAY 158 

    0xe8ac385e,// 200 PAY 159 

    0x7f23ccc3,// 201 PAY 160 

    0xa30240ae,// 202 PAY 161 

    0x472dd908,// 203 PAY 162 

    0xc30b4785,// 204 PAY 163 

    0x30dbee60,// 205 PAY 164 

    0x44b7cc95,// 206 PAY 165 

    0xb75989a4,// 207 PAY 166 

    0xc11d4220,// 208 PAY 167 

    0x6fa72cc4,// 209 PAY 168 

    0x584b9bd9,// 210 PAY 169 

    0x24af8258,// 211 PAY 170 

    0xd949596f,// 212 PAY 171 

    0x051f16a8,// 213 PAY 172 

    0xce0bc820,// 214 PAY 173 

    0x24bf051e,// 215 PAY 174 

    0x29fabef2,// 216 PAY 175 

    0x9c62c891,// 217 PAY 176 

    0xefa7f4d0,// 218 PAY 177 

    0x303b3e63,// 219 PAY 178 

    0x2ee2b07c,// 220 PAY 179 

    0xa1ac6807,// 221 PAY 180 

    0x09b98b61,// 222 PAY 181 

    0xfdfddcdb,// 223 PAY 182 

    0x05a9d334,// 224 PAY 183 

    0x1e85e840,// 225 PAY 184 

    0xa3ce4280,// 226 PAY 185 

    0x325cd502,// 227 PAY 186 

    0x74518d47,// 228 PAY 187 

    0x04545509,// 229 PAY 188 

    0xf6cfdc3a,// 230 PAY 189 

    0x0103927e,// 231 PAY 190 

    0x88df0c40,// 232 PAY 191 

    0xb8577480,// 233 PAY 192 

    0x1ec79218,// 234 PAY 193 

    0x9275fa75,// 235 PAY 194 

    0x5a9ef513,// 236 PAY 195 

    0x272416e3,// 237 PAY 196 

    0xf5077410,// 238 PAY 197 

    0xa7f5d6d6,// 239 PAY 198 

    0x8547ce4e,// 240 PAY 199 

    0x6c61c3f4,// 241 PAY 200 

    0xe8e39a2b,// 242 PAY 201 

    0xa0c7d66d,// 243 PAY 202 

    0x85c18bf9,// 244 PAY 203 

    0xc6139323,// 245 PAY 204 

    0x9188aa2d,// 246 PAY 205 

    0x02d524cc,// 247 PAY 206 

    0x18a57ab9,// 248 PAY 207 

    0xa50bdbd6,// 249 PAY 208 

    0x4fd2f782,// 250 PAY 209 

    0xe1de4101,// 251 PAY 210 

    0x9a59fb76,// 252 PAY 211 

    0xf23721ef,// 253 PAY 212 

    0xa3a0957e,// 254 PAY 213 

    0xdbba880d,// 255 PAY 214 

    0xb79d0e48,// 256 PAY 215 

    0xc072e977,// 257 PAY 216 

    0xdef08346,// 258 PAY 217 

    0xd041156a,// 259 PAY 218 

    0xfe41a60b,// 260 PAY 219 

    0xa99fe88c,// 261 PAY 220 

    0x865a91e7,// 262 PAY 221 

    0x5a474c67,// 263 PAY 222 

    0x6ea0a6f0,// 264 PAY 223 

    0xa1693313,// 265 PAY 224 

    0xef48dbaf,// 266 PAY 225 

    0xd12db4d3,// 267 PAY 226 

    0xff7f9e96,// 268 PAY 227 

    0x95782d70,// 269 PAY 228 

    0xda4e6dfd,// 270 PAY 229 

    0x94238f9e,// 271 PAY 230 

    0x1f6e0a78,// 272 PAY 231 

    0x4cf900e8,// 273 PAY 232 

    0x2fd49a3b,// 274 PAY 233 

    0x833b1739,// 275 PAY 234 

    0x0ae11368,// 276 PAY 235 

    0x029bd924,// 277 PAY 236 

    0x993f0b9a,// 278 PAY 237 

    0xe4ccb991,// 279 PAY 238 

    0xdc5fdda7,// 280 PAY 239 

    0x79a3ab09,// 281 PAY 240 

    0xdf53d4ee,// 282 PAY 241 

    0xfd11c610,// 283 PAY 242 

    0x64f9c32a,// 284 PAY 243 

    0x09cb639d,// 285 PAY 244 

    0xac8955b8,// 286 PAY 245 

    0x281a5cc8,// 287 PAY 246 

    0x6bd7b454,// 288 PAY 247 

    0x8b2aaad4,// 289 PAY 248 

    0x48669d1b,// 290 PAY 249 

    0x9a1d4a2a,// 291 PAY 250 

    0x5dbb2112,// 292 PAY 251 

    0x00626d74,// 293 PAY 252 

    0x500a1132,// 294 PAY 253 

    0xc79003b6,// 295 PAY 254 

    0x3988d64a,// 296 PAY 255 

    0x0854896b,// 297 PAY 256 

    0x897bc69a,// 298 PAY 257 

    0x7471d1ab,// 299 PAY 258 

    0x2f9d4570,// 300 PAY 259 

    0x916350e7,// 301 PAY 260 

    0xba0adef7,// 302 PAY 261 

    0x4ee21fc5,// 303 PAY 262 

    0x0ef0669b,// 304 PAY 263 

    0xdd8a3b01,// 305 PAY 264 

    0xc518d9e5,// 306 PAY 265 

    0x0466d86f,// 307 PAY 266 

    0xdc2d44b1,// 308 PAY 267 

    0x2b41aa36,// 309 PAY 268 

    0x0532068a,// 310 PAY 269 

    0x3e2a5755,// 311 PAY 270 

    0xea23c4e7,// 312 PAY 271 

    0x0ad2f8d5,// 313 PAY 272 

    0x7ae1a41f,// 314 PAY 273 

    0x47b32f02,// 315 PAY 274 

    0xe55008b3,// 316 PAY 275 

    0x785d27a3,// 317 PAY 276 

    0x5de88e89,// 318 PAY 277 

    0xc7e98e93,// 319 PAY 278 

    0xee2a26cb,// 320 PAY 279 

    0x2ba031b5,// 321 PAY 280 

    0xab697738,// 322 PAY 281 

    0x1db6f36c,// 323 PAY 282 

    0x99550f70,// 324 PAY 283 

    0x751ad414,// 325 PAY 284 

    0x5a060266,// 326 PAY 285 

    0x1a8a0519,// 327 PAY 286 

    0x08840827,// 328 PAY 287 

    0x6ce3cac5,// 329 PAY 288 

    0x02384528,// 330 PAY 289 

    0x44ce7c8e,// 331 PAY 290 

    0x184507dc,// 332 PAY 291 

    0x705ac351,// 333 PAY 292 

    0x6a07cb7e,// 334 PAY 293 

    0x663bd1ad,// 335 PAY 294 

    0xf5bfc45a,// 336 PAY 295 

    0xef519c13,// 337 PAY 296 

    0x225bd52a,// 338 PAY 297 

    0x5fcab726,// 339 PAY 298 

    0x30f720c2,// 340 PAY 299 

    0x09388a24,// 341 PAY 300 

    0x63a7ba7a,// 342 PAY 301 

    0xe4448d03,// 343 PAY 302 

    0x385e7a05,// 344 PAY 303 

    0x4030637f,// 345 PAY 304 

    0xe85a234e,// 346 PAY 305 

    0x1701dcf5,// 347 PAY 306 

    0x37e0a3da,// 348 PAY 307 

    0x74686bda,// 349 PAY 308 

    0x7d3d47f9,// 350 PAY 309 

    0x1c50d0f8,// 351 PAY 310 

    0x0f4368a2,// 352 PAY 311 

    0xe688ac89,// 353 PAY 312 

    0x47f9a024,// 354 PAY 313 

    0x2d11f665,// 355 PAY 314 

    0x536f3c1e,// 356 PAY 315 

    0x9a5ad85a,// 357 PAY 316 

    0x325c321c,// 358 PAY 317 

    0x4804f939,// 359 PAY 318 

    0xb28d9ac1,// 360 PAY 319 

    0x01ffcece,// 361 PAY 320 

    0x698747d8,// 362 PAY 321 

    0xd0f137d5,// 363 PAY 322 

    0x2495cffe,// 364 PAY 323 

    0x08b3072a,// 365 PAY 324 

    0x659e5e10,// 366 PAY 325 

    0xae5aa74d,// 367 PAY 326 

    0x5b97372a,// 368 PAY 327 

    0x95628672,// 369 PAY 328 

    0xc6afcfce,// 370 PAY 329 

    0x86739a45,// 371 PAY 330 

    0xfadf426c,// 372 PAY 331 

    0x2a149567,// 373 PAY 332 

    0x4c68ec6e,// 374 PAY 333 

    0xb3a531c7,// 375 PAY 334 

    0x12ebde26,// 376 PAY 335 

    0x86ec4d20,// 377 PAY 336 

    0xbbd4ef3b,// 378 PAY 337 

    0x75efa4d0,// 379 PAY 338 

    0xa7c7ba44,// 380 PAY 339 

    0xa2e1273c,// 381 PAY 340 

    0x5850bbbc,// 382 PAY 341 

    0x9a80f53b,// 383 PAY 342 

    0x6665c37d,// 384 PAY 343 

    0x0fcd197f,// 385 PAY 344 

    0x4122f690,// 386 PAY 345 

    0xa655198f,// 387 PAY 346 

    0x685c8c58,// 388 PAY 347 

    0xeb490189,// 389 PAY 348 

    0xa82ac5fe,// 390 PAY 349 

    0x74d87287,// 391 PAY 350 

    0x6546db81,// 392 PAY 351 

    0xfe036fec,// 393 PAY 352 

    0xf0a24d3b,// 394 PAY 353 

    0xb90850e4,// 395 PAY 354 

    0x4fe81d9e,// 396 PAY 355 

    0x7a5b536b,// 397 PAY 356 

    0x363a8381,// 398 PAY 357 

    0xd65839a8,// 399 PAY 358 

    0x026694d4,// 400 PAY 359 

    0xe58a1b14,// 401 PAY 360 

    0xa752181a,// 402 PAY 361 

    0x4eab428b,// 403 PAY 362 

    0x63e9c48c,// 404 PAY 363 

    0x4ad0508d,// 405 PAY 364 

    0x22fd1b8a,// 406 PAY 365 

    0xb388432a,// 407 PAY 366 

    0xc12ecdad,// 408 PAY 367 

    0x82db9ca5,// 409 PAY 368 

    0x56ff49f4,// 410 PAY 369 

    0xdcbe7f8a,// 411 PAY 370 

    0x5bcb4091,// 412 PAY 371 

    0xe1b7b957,// 413 PAY 372 

    0xa57a7780,// 414 PAY 373 

    0x9306eb7d,// 415 PAY 374 

    0x7eb05bf0,// 416 PAY 375 

    0x2d3e9e1b,// 417 PAY 376 

    0x644cfd6c,// 418 PAY 377 

    0x3fbdd083,// 419 PAY 378 

    0x8df0449f,// 420 PAY 379 

    0xffd2b5d0,// 421 PAY 380 

    0xef822892,// 422 PAY 381 

    0x635d5dde,// 423 PAY 382 

    0xb903fba7,// 424 PAY 383 

    0xaa4c1afd,// 425 PAY 384 

    0x2336e9eb,// 426 PAY 385 

    0x2bb83bae,// 427 PAY 386 

    0xad477af4,// 428 PAY 387 

    0xcec5410c,// 429 PAY 388 

    0x561435a3,// 430 PAY 389 

    0x46e9d742,// 431 PAY 390 

    0xf3730c81,// 432 PAY 391 

    0x156901bd,// 433 PAY 392 

    0x9e0c5bbc,// 434 PAY 393 

    0x0b7c9d19,// 435 PAY 394 

    0xe878753c,// 436 PAY 395 

    0x8b9dcd94,// 437 PAY 396 

    0x6ad01ec8,// 438 PAY 397 

    0x174c248d,// 439 PAY 398 

    0x52ca88d7,// 440 PAY 399 

    0xbf79f1eb,// 441 PAY 400 

    0xaeb6ebfc,// 442 PAY 401 

    0x69193d50,// 443 PAY 402 

    0xd4255ef8,// 444 PAY 403 

    0xc11df00c,// 445 PAY 404 

    0xddb64f15,// 446 PAY 405 

    0x12b3a6ef,// 447 PAY 406 

    0x5a54966c,// 448 PAY 407 

    0x46cb4275,// 449 PAY 408 

    0xabdc3761,// 450 PAY 409 

    0x5fbf01b4,// 451 PAY 410 

    0x53ce466e,// 452 PAY 411 

    0xf5c9c574,// 453 PAY 412 

    0x69bae7b3,// 454 PAY 413 

    0x039008ef,// 455 PAY 414 

    0x35ba432d,// 456 PAY 415 

    0xfd819bb0,// 457 PAY 416 

    0x14ff2da7,// 458 PAY 417 

    0xa6895b12,// 459 PAY 418 

    0x40ca2dc2,// 460 PAY 419 

    0x438c030d,// 461 PAY 420 

    0x0f308b2e,// 462 PAY 421 

    0x8490bbea,// 463 PAY 422 

    0xf0dc3363,// 464 PAY 423 

    0x47f7bccd,// 465 PAY 424 

    0x924fce11,// 466 PAY 425 

    0x34238755,// 467 PAY 426 

    0xe15928b8,// 468 PAY 427 

    0x6ef8308d,// 469 PAY 428 

    0x0bf526bd,// 470 PAY 429 

    0xc3e285a7,// 471 PAY 430 

    0xac41188a,// 472 PAY 431 

    0x62e01b2e,// 473 PAY 432 

    0x729289c2,// 474 PAY 433 

    0xe5dbc081,// 475 PAY 434 

    0x117162cd,// 476 PAY 435 

    0xbede803a,// 477 PAY 436 

    0x4070d5a2,// 478 PAY 437 

    0x52153264,// 479 PAY 438 

    0x7491777d,// 480 PAY 439 

    0x57ad4ebf,// 481 PAY 440 

    0xfefa8612,// 482 PAY 441 

    0x7a7db524,// 483 PAY 442 

    0xdc8d947f,// 484 PAY 443 

    0x684b3418,// 485 PAY 444 

    0x2c34d20c,// 486 PAY 445 

    0xfea711bb,// 487 PAY 446 

    0xe9e334a0,// 488 PAY 447 

    0x173da67d,// 489 PAY 448 

    0x402f5921,// 490 PAY 449 

    0x31437496,// 491 PAY 450 

    0xfb7c7133,// 492 PAY 451 

    0x3c57f3db,// 493 PAY 452 

    0x6ef87994,// 494 PAY 453 

    0x6e3d46b1,// 495 PAY 454 

    0x486c4d0e,// 496 PAY 455 

    0xc1567d2a,// 497 PAY 456 

    0x5e37409e,// 498 PAY 457 

    0x7bc7b458,// 499 PAY 458 

    0x27303adf,// 500 PAY 459 

    0x5f7b6bea,// 501 PAY 460 

    0x60e4b11b,// 502 PAY 461 

    0xdd61a2f8,// 503 PAY 462 

    0xd7b82cd9,// 504 PAY 463 

    0x268b1616,// 505 PAY 464 

    0x1d628ae8,// 506 PAY 465 

    0x9c910c19,// 507 PAY 466 

    0x30f47cd0,// 508 PAY 467 

    0x0b646e7d,// 509 PAY 468 

    0x4269608c,// 510 PAY 469 

    0x225bcb24,// 511 PAY 470 

    0x9f5f56bc,// 512 PAY 471 

    0x050cef16,// 513 PAY 472 

    0x21cb9c5f,// 514 PAY 473 

    0x6974cf75,// 515 PAY 474 

    0x103e060e,// 516 PAY 475 

    0xecbf7baf,// 517 PAY 476 

    0xecce9630,// 518 PAY 477 

    0x351dc898,// 519 PAY 478 

    0x15a223db,// 520 PAY 479 

    0x69fdb14f,// 521 PAY 480 

    0xa3d17d03,// 522 PAY 481 

    0xbf9ad186,// 523 PAY 482 

    0x8cd9d7f6,// 524 PAY 483 

    0xe83e7f4f,// 525 PAY 484 

    0x53080ab9,// 526 PAY 485 

    0xc49c1ec6,// 527 PAY 486 

    0x5f1df81d,// 528 PAY 487 

    0xd021488b,// 529 PAY 488 

    0x257aa401,// 530 PAY 489 

    0xf34199ed,// 531 PAY 490 

    0xf7c76eda,// 532 PAY 491 

    0x83caac20,// 533 PAY 492 

    0x2118491e,// 534 PAY 493 

    0xc6f82e88,// 535 PAY 494 

    0x605c61e3,// 536 PAY 495 

    0x61ec0000,// 537 PAY 496 

/// STA is 1 words. 

/// STA num_pkts       : 24 

/// STA pkt_idx        : 247 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xed 

    0x03dded18 // 538 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 88 (0x58) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_sha1_pkt70_tmpl[] = {
    0xb8010058,// 1 CCH   1 

/// ECH cache_idx      : 0x04 

/// ECH pdu_tag        : 0x00 

    0x00040000,// 2 ECH   1 

/// SCX is 21 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound save_icv insert_icv !check_icv sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : SHA1 

/// SCX aes_size        : AES256 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x3 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 8 

/// SCX authctx_size    : 40 

    0x08000015,// 3 SCX   1 

    0x806648c3,// 4 SCX   2 

    0x00006382,// 5 SCX   3 

    0x4a8aaee1,// 6 SCX   4 

    0xbe65b87c,// 7 SCX   5 

    0x456705fe,// 8 SCX   6 

    0x3390247f,// 9 SCX   7 

    0xf80e910a,// 10 SCX   8 

    0xb7e3a781,// 11 SCX   9 

    0xb1592764,// 12 SCX  10 

    0x691c59f0,// 13 SCX  11 

    0xef92cbdc,// 14 SCX  12 

    0x858caf69,// 15 SCX  13 

    0x75e0c38a,// 16 SCX  14 

    0xe4520bc4,// 17 SCX  15 

    0xe4f6a696,// 18 SCX  16 

    0x47cddd98,// 19 SCX  17 

    0x3e527d18,// 20 SCX  18 

    0xf2f204c0,// 21 SCX  19 

    0x5b521895,// 22 SCX  20 

    0x287e1d36,// 23 SCX  21 

/// BFD is 3 words. 

/// BFD tot_len        : 1866 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 703 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 703 

/// BFD lencrypto      : 8 

/// BFD ofstcrypto     : 368 

/// BFD (ofst+len)cry  : 376 

/// BFD ofstiv         : 272 

/// BFD ofsticv        : 804 

    0x000002bf,// 24 BFD   1 

    0x01700008,// 25 BFD   2 

    0x03240110,// 26 BFD   3 

/// MFM is 16 words. 

/// MFM vldnibs        : 7c 

    0x7c00704c,// 27 MFM   1 

    0xf47372d2,// 28 MFM   2 

    0x70c8301c,// 29 MFM   3 

    0x00678dbd,// 30 MFM   4 

    0xa34a228a,// 31 MFM   5 

    0x232c5a01,// 32 MFM   6 

    0xdbdcce3e,// 33 MFM   7 

    0x359f550f,// 34 MFM   8 

    0x2bf8b4b5,// 35 MFM   9 

    0x2e6a5c8e,// 36 MFM  10 

    0x534efcce,// 37 MFM  11 

    0xf14327b9,// 38 MFM  12 

    0xcbad4f95,// 39 MFM  13 

    0xa28b6055,// 40 MFM  14 

    0x65cfe4e9,// 41 MFM  15 

    0xae3bfb72,// 42 MFM  16 

/// BDA is 468 words. 

/// BDA size     is 1866 (0x74a) 

/// BDA id       is 0x8e57 

    0x074a8e57,// 43 BDA   1 

/// PAY Generic Data size   : 1866 byte(s) 

/// PAD Buffer Data Pad size   : 2 byte(s) 

    0x0a3e80f8,// 44 PAY   1 

    0x675794e5,// 45 PAY   2 

    0xe3ae603a,// 46 PAY   3 

    0x18deeba8,// 47 PAY   4 

    0xfa862d7b,// 48 PAY   5 

    0x7f9472ec,// 49 PAY   6 

    0x5a51afe5,// 50 PAY   7 

    0x180a1b5b,// 51 PAY   8 

    0x201f85f5,// 52 PAY   9 

    0xeeb5484f,// 53 PAY  10 

    0xe397b86a,// 54 PAY  11 

    0xce7dbce2,// 55 PAY  12 

    0xefd1c76b,// 56 PAY  13 

    0x74004e85,// 57 PAY  14 

    0x5a93397d,// 58 PAY  15 

    0x4a8d184b,// 59 PAY  16 

    0xbaf0859c,// 60 PAY  17 

    0xea3f3e51,// 61 PAY  18 

    0x150ef2d3,// 62 PAY  19 

    0x73a00d7b,// 63 PAY  20 

    0xff49544a,// 64 PAY  21 

    0xe36086ca,// 65 PAY  22 

    0x0300176c,// 66 PAY  23 

    0x62167ebf,// 67 PAY  24 

    0x5f97be52,// 68 PAY  25 

    0xea7c10bd,// 69 PAY  26 

    0x77a4bfc1,// 70 PAY  27 

    0xd8c6c480,// 71 PAY  28 

    0x7c3bdf7b,// 72 PAY  29 

    0x1a1cac43,// 73 PAY  30 

    0xfe605f76,// 74 PAY  31 

    0x70b1a8a8,// 75 PAY  32 

    0x6bf6b68d,// 76 PAY  33 

    0x1a386d6e,// 77 PAY  34 

    0x49d2bcb1,// 78 PAY  35 

    0x354a7f9b,// 79 PAY  36 

    0x6594a061,// 80 PAY  37 

    0x177e37b4,// 81 PAY  38 

    0x0f24df63,// 82 PAY  39 

    0xd955d051,// 83 PAY  40 

    0xc9883dad,// 84 PAY  41 

    0x6adc18c5,// 85 PAY  42 

    0x20b9fef3,// 86 PAY  43 

    0x14e386f8,// 87 PAY  44 

    0x900691e7,// 88 PAY  45 

    0x5157d6ca,// 89 PAY  46 

    0xa422db62,// 90 PAY  47 

    0x3041ba11,// 91 PAY  48 

    0x0d2a2259,// 92 PAY  49 

    0x7185159a,// 93 PAY  50 

    0x172f5028,// 94 PAY  51 

    0x22d049f0,// 95 PAY  52 

    0xe042d4c1,// 96 PAY  53 

    0xdca1ec3e,// 97 PAY  54 

    0x47ddb0f5,// 98 PAY  55 

    0x0e98b5f5,// 99 PAY  56 

    0x7ba019f2,// 100 PAY  57 

    0x3c270035,// 101 PAY  58 

    0x396c696b,// 102 PAY  59 

    0x6f4dc860,// 103 PAY  60 

    0x18e57c6b,// 104 PAY  61 

    0xfb2c7163,// 105 PAY  62 

    0xd5b94708,// 106 PAY  63 

    0x0bb83ade,// 107 PAY  64 

    0x1b6cd5de,// 108 PAY  65 

    0xe176877a,// 109 PAY  66 

    0x49b54f04,// 110 PAY  67 

    0x1eaf6a0f,// 111 PAY  68 

    0x73a72007,// 112 PAY  69 

    0xf95b74b5,// 113 PAY  70 

    0x3fe5808b,// 114 PAY  71 

    0x4f14694f,// 115 PAY  72 

    0x4a616166,// 116 PAY  73 

    0x3c302cbd,// 117 PAY  74 

    0xc2350110,// 118 PAY  75 

    0x5233893b,// 119 PAY  76 

    0xb1ee28a3,// 120 PAY  77 

    0x388be92d,// 121 PAY  78 

    0x86df4643,// 122 PAY  79 

    0xe97765f5,// 123 PAY  80 

    0x1b929276,// 124 PAY  81 

    0x71b076be,// 125 PAY  82 

    0xea44479e,// 126 PAY  83 

    0x9ad99973,// 127 PAY  84 

    0x7a33159b,// 128 PAY  85 

    0xf9efaf52,// 129 PAY  86 

    0x9134de94,// 130 PAY  87 

    0xb1b3383e,// 131 PAY  88 

    0xfad291f2,// 132 PAY  89 

    0x28f256a1,// 133 PAY  90 

    0x435be923,// 134 PAY  91 

    0x2e50deac,// 135 PAY  92 

    0x7593ae77,// 136 PAY  93 

    0x465683f0,// 137 PAY  94 

    0xbb8dcd98,// 138 PAY  95 

    0x3e6afef4,// 139 PAY  96 

    0xac1741b9,// 140 PAY  97 

    0xd8d64cef,// 141 PAY  98 

    0x6e76cd06,// 142 PAY  99 

    0xadff46ba,// 143 PAY 100 

    0xb0371407,// 144 PAY 101 

    0x4f20b434,// 145 PAY 102 

    0x76263706,// 146 PAY 103 

    0xaad04c69,// 147 PAY 104 

    0x85bc5806,// 148 PAY 105 

    0xc0bdda8c,// 149 PAY 106 

    0xa5d25216,// 150 PAY 107 

    0x1835cd74,// 151 PAY 108 

    0xff1755ea,// 152 PAY 109 

    0x5168c6f3,// 153 PAY 110 

    0x59695415,// 154 PAY 111 

    0x61f610b0,// 155 PAY 112 

    0x6d749f10,// 156 PAY 113 

    0x825ec621,// 157 PAY 114 

    0xdaf2f2b4,// 158 PAY 115 

    0x63d3ddd3,// 159 PAY 116 

    0xcf758e13,// 160 PAY 117 

    0xae7ef4a8,// 161 PAY 118 

    0xf2c7ce3b,// 162 PAY 119 

    0xbeb267ea,// 163 PAY 120 

    0x9f7d3fa3,// 164 PAY 121 

    0x3ea13910,// 165 PAY 122 

    0x7259aaeb,// 166 PAY 123 

    0xfe4b2fd9,// 167 PAY 124 

    0x1ee6732c,// 168 PAY 125 

    0x44de99e0,// 169 PAY 126 

    0x0bf3fa32,// 170 PAY 127 

    0x329fa948,// 171 PAY 128 

    0xf66bc465,// 172 PAY 129 

    0xe80bad9e,// 173 PAY 130 

    0x3eb366cc,// 174 PAY 131 

    0x25b4af18,// 175 PAY 132 

    0x5a2496ea,// 176 PAY 133 

    0xe6da103a,// 177 PAY 134 

    0x0b987f8d,// 178 PAY 135 

    0xc2ac1ad4,// 179 PAY 136 

    0x3c179081,// 180 PAY 137 

    0x7c0aa866,// 181 PAY 138 

    0x81747d01,// 182 PAY 139 

    0x08a8d8a3,// 183 PAY 140 

    0xd2b37d47,// 184 PAY 141 

    0x89283747,// 185 PAY 142 

    0x3be2a085,// 186 PAY 143 

    0x2a01a738,// 187 PAY 144 

    0x896ba867,// 188 PAY 145 

    0xafbecacf,// 189 PAY 146 

    0xae2c30a9,// 190 PAY 147 

    0xc2d74d32,// 191 PAY 148 

    0x5b98cbe0,// 192 PAY 149 

    0xf8d70943,// 193 PAY 150 

    0xa88a55fb,// 194 PAY 151 

    0x9a1f59fa,// 195 PAY 152 

    0xa7c3c53f,// 196 PAY 153 

    0xd219a679,// 197 PAY 154 

    0x1e2aef06,// 198 PAY 155 

    0x7189c4d2,// 199 PAY 156 

    0x9d1f08fe,// 200 PAY 157 

    0xeff20426,// 201 PAY 158 

    0xdb809944,// 202 PAY 159 

    0xaa384c6c,// 203 PAY 160 

    0x41854823,// 204 PAY 161 

    0x617ea640,// 205 PAY 162 

    0x398f4214,// 206 PAY 163 

    0xbfa32f71,// 207 PAY 164 

    0xb2b16a74,// 208 PAY 165 

    0xb71ac2d9,// 209 PAY 166 

    0x55e4c41b,// 210 PAY 167 

    0x15bf2063,// 211 PAY 168 

    0x1567b75a,// 212 PAY 169 

    0x3037114d,// 213 PAY 170 

    0x0b09e608,// 214 PAY 171 

    0x616f4d2a,// 215 PAY 172 

    0xda9cfb36,// 216 PAY 173 

    0x0bde2276,// 217 PAY 174 

    0xd732f25e,// 218 PAY 175 

    0xc72a8fab,// 219 PAY 176 

    0x0a19e79e,// 220 PAY 177 

    0x5031cb0b,// 221 PAY 178 

    0x16b69711,// 222 PAY 179 

    0xe04af3a0,// 223 PAY 180 

    0x57b6b17c,// 224 PAY 181 

    0xf3d21c04,// 225 PAY 182 

    0xe71e516f,// 226 PAY 183 

    0xaf2219ea,// 227 PAY 184 

    0xb06001ce,// 228 PAY 185 

    0xc16d1050,// 229 PAY 186 

    0xfeb8a2a6,// 230 PAY 187 

    0x9d5fe557,// 231 PAY 188 

    0x13003d56,// 232 PAY 189 

    0xa7da9661,// 233 PAY 190 

    0x67ff0e49,// 234 PAY 191 

    0x89c0407b,// 235 PAY 192 

    0xaf164825,// 236 PAY 193 

    0x915840bc,// 237 PAY 194 

    0x30f032b0,// 238 PAY 195 

    0x1d15dabe,// 239 PAY 196 

    0x655c616e,// 240 PAY 197 

    0xa150c3e4,// 241 PAY 198 

    0xb390252e,// 242 PAY 199 

    0x80794160,// 243 PAY 200 

    0xd96bf2c9,// 244 PAY 201 

    0xe7925d76,// 245 PAY 202 

    0x857fdad4,// 246 PAY 203 

    0x79aeb3a2,// 247 PAY 204 

    0x9a43dbc3,// 248 PAY 205 

    0xea619be6,// 249 PAY 206 

    0x8d7bc6ef,// 250 PAY 207 

    0x945b972f,// 251 PAY 208 

    0x4d8c6523,// 252 PAY 209 

    0xeaa281fa,// 253 PAY 210 

    0x72321f6d,// 254 PAY 211 

    0xae2b28cc,// 255 PAY 212 

    0xb3c0c592,// 256 PAY 213 

    0xfb3c1ad0,// 257 PAY 214 

    0xf552d133,// 258 PAY 215 

    0x43498309,// 259 PAY 216 

    0x210cabc9,// 260 PAY 217 

    0xfa4c7656,// 261 PAY 218 

    0xb042350f,// 262 PAY 219 

    0x10132caf,// 263 PAY 220 

    0x906089ab,// 264 PAY 221 

    0x1cdb67b5,// 265 PAY 222 

    0xdfbd2d1b,// 266 PAY 223 

    0x166a11ed,// 267 PAY 224 

    0xbfa3f52d,// 268 PAY 225 

    0x40a38b81,// 269 PAY 226 

    0xbbcf2b0e,// 270 PAY 227 

    0x1b039620,// 271 PAY 228 

    0x11416c7e,// 272 PAY 229 

    0x81d4c306,// 273 PAY 230 

    0x6940c259,// 274 PAY 231 

    0x65ff1a25,// 275 PAY 232 

    0x278b7040,// 276 PAY 233 

    0x208c336c,// 277 PAY 234 

    0xf3c61f25,// 278 PAY 235 

    0xb05c15c6,// 279 PAY 236 

    0x8a099682,// 280 PAY 237 

    0x2a57ea29,// 281 PAY 238 

    0x482860a2,// 282 PAY 239 

    0x32b6e0f3,// 283 PAY 240 

    0xf549e2ba,// 284 PAY 241 

    0xea951c23,// 285 PAY 242 

    0xa6e1c0e4,// 286 PAY 243 

    0x92a5cf89,// 287 PAY 244 

    0xa224c498,// 288 PAY 245 

    0xf04fe31d,// 289 PAY 246 

    0x1a5069ba,// 290 PAY 247 

    0x5297a829,// 291 PAY 248 

    0x2dcdd0da,// 292 PAY 249 

    0xf192ba8a,// 293 PAY 250 

    0x362e8bc4,// 294 PAY 251 

    0x0f0b6ca3,// 295 PAY 252 

    0x006216ec,// 296 PAY 253 

    0x6a01b669,// 297 PAY 254 

    0x05e27b48,// 298 PAY 255 

    0x9d4415f4,// 299 PAY 256 

    0x0ef0f7f5,// 300 PAY 257 

    0xdc2aabab,// 301 PAY 258 

    0xdfc28db4,// 302 PAY 259 

    0x4aaa78f4,// 303 PAY 260 

    0xcfc9903f,// 304 PAY 261 

    0x5363de60,// 305 PAY 262 

    0xded86830,// 306 PAY 263 

    0xb8673ac1,// 307 PAY 264 

    0xf065fe14,// 308 PAY 265 

    0x66ef507c,// 309 PAY 266 

    0xde037e83,// 310 PAY 267 

    0xdff4acb6,// 311 PAY 268 

    0xd2830599,// 312 PAY 269 

    0xd75018e1,// 313 PAY 270 

    0xa997a1dd,// 314 PAY 271 

    0x5384c4db,// 315 PAY 272 

    0x0a5dd3df,// 316 PAY 273 

    0x98275b0e,// 317 PAY 274 

    0xd1cfac36,// 318 PAY 275 

    0xb815a395,// 319 PAY 276 

    0xac8aa5b0,// 320 PAY 277 

    0xfc60c30b,// 321 PAY 278 

    0x0cc68f2f,// 322 PAY 279 

    0xd843e03d,// 323 PAY 280 

    0xc4788323,// 324 PAY 281 

    0x0139a4d7,// 325 PAY 282 

    0x19d812d9,// 326 PAY 283 

    0x5a9d2074,// 327 PAY 284 

    0xbfba43ae,// 328 PAY 285 

    0x9ee6750e,// 329 PAY 286 

    0xf066af2a,// 330 PAY 287 

    0xe39fa706,// 331 PAY 288 

    0xd85db270,// 332 PAY 289 

    0x227f7448,// 333 PAY 290 

    0xeb4a0ebf,// 334 PAY 291 

    0x2ff54b7c,// 335 PAY 292 

    0x809465a2,// 336 PAY 293 

    0x1a6b15d3,// 337 PAY 294 

    0x654e9902,// 338 PAY 295 

    0x11802ee4,// 339 PAY 296 

    0xf095df2f,// 340 PAY 297 

    0xef4e9fcf,// 341 PAY 298 

    0x0407f81c,// 342 PAY 299 

    0x60f61361,// 343 PAY 300 

    0x8706ebd9,// 344 PAY 301 

    0x9b8f1cca,// 345 PAY 302 

    0x8ba323a4,// 346 PAY 303 

    0xadd8897c,// 347 PAY 304 

    0xca7c7298,// 348 PAY 305 

    0x199cb323,// 349 PAY 306 

    0x77a12f48,// 350 PAY 307 

    0x80670793,// 351 PAY 308 

    0x41aa0ff4,// 352 PAY 309 

    0x218e434d,// 353 PAY 310 

    0x57f442fe,// 354 PAY 311 

    0xfe84839b,// 355 PAY 312 

    0xacc134ab,// 356 PAY 313 

    0x628f9411,// 357 PAY 314 

    0x986c823e,// 358 PAY 315 

    0x8e4d1556,// 359 PAY 316 

    0xd949d15b,// 360 PAY 317 

    0xc2e8dc49,// 361 PAY 318 

    0x57f75ec5,// 362 PAY 319 

    0x2f45b4b5,// 363 PAY 320 

    0x4a1f2c07,// 364 PAY 321 

    0x48c899c0,// 365 PAY 322 

    0xc1a0dceb,// 366 PAY 323 

    0x45bb2733,// 367 PAY 324 

    0xaeaa98ad,// 368 PAY 325 

    0x3ee78bfb,// 369 PAY 326 

    0xb958f7b8,// 370 PAY 327 

    0x71d5b057,// 371 PAY 328 

    0x00230550,// 372 PAY 329 

    0x6f329a0e,// 373 PAY 330 

    0xa1aace07,// 374 PAY 331 

    0x1eafadf7,// 375 PAY 332 

    0x10bb8cd3,// 376 PAY 333 

    0xc69faef8,// 377 PAY 334 

    0xba7d3af1,// 378 PAY 335 

    0xd56cf785,// 379 PAY 336 

    0x98bf37d6,// 380 PAY 337 

    0x5432cbf0,// 381 PAY 338 

    0xbcd0d28e,// 382 PAY 339 

    0x5fe5628c,// 383 PAY 340 

    0x0e7a2392,// 384 PAY 341 

    0xccab53fb,// 385 PAY 342 

    0xa7e22f85,// 386 PAY 343 

    0x3e42b333,// 387 PAY 344 

    0x7629c8a3,// 388 PAY 345 

    0x2c7b9c35,// 389 PAY 346 

    0xfe3f2d75,// 390 PAY 347 

    0xde84f7b1,// 391 PAY 348 

    0xa72434b9,// 392 PAY 349 

    0x2d386ffc,// 393 PAY 350 

    0x1464e2c9,// 394 PAY 351 

    0xb65cd263,// 395 PAY 352 

    0xf67ffed5,// 396 PAY 353 

    0xd062f1e1,// 397 PAY 354 

    0x407637d4,// 398 PAY 355 

    0x0c425d1c,// 399 PAY 356 

    0x4b4eb5ea,// 400 PAY 357 

    0xd67b1aef,// 401 PAY 358 

    0x894876b2,// 402 PAY 359 

    0x1cd9b7a8,// 403 PAY 360 

    0x66cf4f86,// 404 PAY 361 

    0x5e492a76,// 405 PAY 362 

    0xf4321795,// 406 PAY 363 

    0xa166c7bf,// 407 PAY 364 

    0x2d085732,// 408 PAY 365 

    0x2dbde8a6,// 409 PAY 366 

    0xed40fc8d,// 410 PAY 367 

    0x80cebae8,// 411 PAY 368 

    0x54054c06,// 412 PAY 369 

    0x5006ef41,// 413 PAY 370 

    0xe2c8da32,// 414 PAY 371 

    0x2e29a15e,// 415 PAY 372 

    0x6d40230e,// 416 PAY 373 

    0xc30138c0,// 417 PAY 374 

    0xecc06039,// 418 PAY 375 

    0x7b81d65d,// 419 PAY 376 

    0xbb8d86a8,// 420 PAY 377 

    0x307f8d2e,// 421 PAY 378 

    0x43d5f2e9,// 422 PAY 379 

    0x48ff563d,// 423 PAY 380 

    0x25cfbc28,// 424 PAY 381 

    0x66ce4e2c,// 425 PAY 382 

    0x6c548a5e,// 426 PAY 383 

    0xd2f1f738,// 427 PAY 384 

    0x5b5ca487,// 428 PAY 385 

    0x3908763f,// 429 PAY 386 

    0xe3a84e42,// 430 PAY 387 

    0x8e9a0a0d,// 431 PAY 388 

    0x4a5a7019,// 432 PAY 389 

    0xa37de945,// 433 PAY 390 

    0x4a42ef0f,// 434 PAY 391 

    0xb731bc1e,// 435 PAY 392 

    0x62f61593,// 436 PAY 393 

    0xcb156624,// 437 PAY 394 

    0x4d479f71,// 438 PAY 395 

    0xde816a81,// 439 PAY 396 

    0xb06390f7,// 440 PAY 397 

    0x1a120f9b,// 441 PAY 398 

    0x6b639eff,// 442 PAY 399 

    0x99173c83,// 443 PAY 400 

    0x27dee4dc,// 444 PAY 401 

    0x128d5fbe,// 445 PAY 402 

    0x09214f51,// 446 PAY 403 

    0x0848ed18,// 447 PAY 404 

    0xee20bf1e,// 448 PAY 405 

    0xc2bab095,// 449 PAY 406 

    0xd27e9c5d,// 450 PAY 407 

    0x4df88dc5,// 451 PAY 408 

    0x41c6b69c,// 452 PAY 409 

    0x60811a36,// 453 PAY 410 

    0xfa9437f7,// 454 PAY 411 

    0xfce42fe0,// 455 PAY 412 

    0xcfeef235,// 456 PAY 413 

    0x2f377636,// 457 PAY 414 

    0x3170a066,// 458 PAY 415 

    0x1cad5933,// 459 PAY 416 

    0x5573e407,// 460 PAY 417 

    0x081d0d77,// 461 PAY 418 

    0xaa9b17ea,// 462 PAY 419 

    0xde5aac99,// 463 PAY 420 

    0x8893b073,// 464 PAY 421 

    0xbdc1bf0b,// 465 PAY 422 

    0x7915d3a9,// 466 PAY 423 

    0xfbd2958b,// 467 PAY 424 

    0x266b4ea1,// 468 PAY 425 

    0x9f8a5b12,// 469 PAY 426 

    0xfb3b382e,// 470 PAY 427 

    0xa45ce2ef,// 471 PAY 428 

    0xd7b3ae39,// 472 PAY 429 

    0x3e88f0d6,// 473 PAY 430 

    0x11d55c58,// 474 PAY 431 

    0x117c4976,// 475 PAY 432 

    0xc2e2917e,// 476 PAY 433 

    0xbf4a0481,// 477 PAY 434 

    0xf5e824fa,// 478 PAY 435 

    0x4c03d36d,// 479 PAY 436 

    0x5b5c1abe,// 480 PAY 437 

    0x0bb93661,// 481 PAY 438 

    0x7332de1a,// 482 PAY 439 

    0x5bf546c5,// 483 PAY 440 

    0x40c3afa3,// 484 PAY 441 

    0x52547c7b,// 485 PAY 442 

    0x7e599fd0,// 486 PAY 443 

    0xe49f9e66,// 487 PAY 444 

    0x91aa75ff,// 488 PAY 445 

    0x3c0f088e,// 489 PAY 446 

    0xf11ccec8,// 490 PAY 447 

    0x9de92855,// 491 PAY 448 

    0x56f9f52a,// 492 PAY 449 

    0x6697aaa9,// 493 PAY 450 

    0x2d91a4f0,// 494 PAY 451 

    0xbd919fb4,// 495 PAY 452 

    0x6dda6a36,// 496 PAY 453 

    0x13ca0e84,// 497 PAY 454 

    0xd81a01ee,// 498 PAY 455 

    0x3ad55e59,// 499 PAY 456 

    0x33795338,// 500 PAY 457 

    0x2346e219,// 501 PAY 458 

    0x112783e9,// 502 PAY 459 

    0xc57b04fe,// 503 PAY 460 

    0x0c603f84,// 504 PAY 461 

    0x9b0bcfc5,// 505 PAY 462 

    0xfbde3c55,// 506 PAY 463 

    0x0eb7b45e,// 507 PAY 464 

    0x0e8faf7b,// 508 PAY 465 

    0x02df0e49,// 509 PAY 466 

    0x14960000,// 510 PAY 467 

/// STA is 1 words. 

/// STA num_pkts       : 20 

/// STA pkt_idx        : 132 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x13 

    0x02111314 // 511 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 88 (0x58) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_sha1_pkt71_tmpl[] = {
    0xb8010058,// 1 CCH   1 

/// ECH cache_idx      : 0x09 

/// ECH pdu_tag        : 0x00 

    0x00090000,// 2 ECH   1 

/// SCX is 21 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound !save_icv !insert_icv !check_icv sctx_iv  

/// SCX exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : SHA1 

/// SCX aes_size        : NORMAL_RC4INIT_AES128 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x1 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 8 

/// SCX authctx_size    : 40 

    0x00000015,// 3 SCX   1 

    0x806448b2,// 4 SCX   2 

    0x000001c2,// 5 SCX   3 

    0xf2686228,// 6 SCX   4 

    0xd0c46652,// 7 SCX   5 

    0xc4b7899b,// 8 SCX   6 

    0xfe6d5c66,// 9 SCX   7 

    0xac0d13c9,// 10 SCX   8 

    0xb3b0dbf0,// 11 SCX   9 

    0xfd0aa8cd,// 12 SCX  10 

    0x5803ee5d,// 13 SCX  11 

    0xf94c15c6,// 14 SCX  12 

    0x86e1176e,// 15 SCX  13 

    0x620c8070,// 16 SCX  14 

    0x97f2b708,// 17 SCX  15 

    0x62a3ab2e,// 18 SCX  16 

    0x4aa4f71f,// 19 SCX  17 

    0x0fb0d60f,// 20 SCX  18 

    0x7f85f889,// 21 SCX  19 

    0xddbf715e,// 22 SCX  20 

    0xf8c397a0,// 23 SCX  21 

/// BFD is 3 words. 

/// BFD tot_len        : 1350 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 292 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 292 

/// BFD lencrypto      : 176 

/// BFD ofstcrypto     : 104 

/// BFD (ofst+len)cry  : 280 

/// BFD ofstiv         : 20 

/// BFD ofsticv        : 672 

    0x00000124,// 24 BFD   1 

    0x006800b0,// 25 BFD   2 

    0x02a00014,// 26 BFD   3 

/// MFM is 3 words. 

/// MFM vldnibs        : 10 

    0x100069b6,// 27 MFM   1 

    0x2a1a2e96,// 28 MFM   2 

    0x18770000,// 29 MFM   3 

/// BDA is 339 words. 

/// BDA size     is 1350 (0x546) 

/// BDA id       is 0xc9c9 

    0x0546c9c9,// 30 BDA   1 

/// PAY Generic Data size   : 1350 byte(s) 

/// PAD Buffer Data Pad size   : 2 byte(s) 

    0xf0da445d,// 31 PAY   1 

    0xf7ba2066,// 32 PAY   2 

    0xe145a31d,// 33 PAY   3 

    0x02db19e0,// 34 PAY   4 

    0x7c316baa,// 35 PAY   5 

    0xbe14d815,// 36 PAY   6 

    0x61e5f84a,// 37 PAY   7 

    0x0deabcf7,// 38 PAY   8 

    0x2c5545df,// 39 PAY   9 

    0xf6fd771c,// 40 PAY  10 

    0x5ec99562,// 41 PAY  11 

    0x73b178f8,// 42 PAY  12 

    0xaf448ec5,// 43 PAY  13 

    0x6bf01503,// 44 PAY  14 

    0xf02c5462,// 45 PAY  15 

    0x19733cca,// 46 PAY  16 

    0xc2e84d71,// 47 PAY  17 

    0x4e015165,// 48 PAY  18 

    0xae608a64,// 49 PAY  19 

    0x046b6bdc,// 50 PAY  20 

    0x03eca4a0,// 51 PAY  21 

    0xbc01920e,// 52 PAY  22 

    0x51e696e8,// 53 PAY  23 

    0x07bcac02,// 54 PAY  24 

    0x313e4714,// 55 PAY  25 

    0x15a5a4f0,// 56 PAY  26 

    0x1e7c70cb,// 57 PAY  27 

    0x0a9a0afb,// 58 PAY  28 

    0x5b59d56e,// 59 PAY  29 

    0xce04fd0c,// 60 PAY  30 

    0x03b91d12,// 61 PAY  31 

    0xff9536be,// 62 PAY  32 

    0xe609772d,// 63 PAY  33 

    0xef304c2b,// 64 PAY  34 

    0x811154f0,// 65 PAY  35 

    0x393cd945,// 66 PAY  36 

    0xc629b3d5,// 67 PAY  37 

    0x9af49aa9,// 68 PAY  38 

    0x870f3eae,// 69 PAY  39 

    0xc4e44b9b,// 70 PAY  40 

    0xb1ad338a,// 71 PAY  41 

    0x23b1ce47,// 72 PAY  42 

    0x4a93405f,// 73 PAY  43 

    0x352ba4bf,// 74 PAY  44 

    0xc164917a,// 75 PAY  45 

    0x687c0967,// 76 PAY  46 

    0xb992c9ee,// 77 PAY  47 

    0x3d11bf3f,// 78 PAY  48 

    0x22b9da0e,// 79 PAY  49 

    0x60c98a49,// 80 PAY  50 

    0xfa3d519a,// 81 PAY  51 

    0xf8259aaf,// 82 PAY  52 

    0x7a7d51ca,// 83 PAY  53 

    0x498cdb6d,// 84 PAY  54 

    0x93a641ad,// 85 PAY  55 

    0x0d7eed9f,// 86 PAY  56 

    0xd3bb6f65,// 87 PAY  57 

    0x463704f9,// 88 PAY  58 

    0xa39e6f68,// 89 PAY  59 

    0x8a6fd331,// 90 PAY  60 

    0xcf1054ba,// 91 PAY  61 

    0x8c9e2d4c,// 92 PAY  62 

    0xcbed5c02,// 93 PAY  63 

    0xd7a858ea,// 94 PAY  64 

    0x178bb37c,// 95 PAY  65 

    0x67a706b5,// 96 PAY  66 

    0xb0faa31d,// 97 PAY  67 

    0xffb94319,// 98 PAY  68 

    0x5e049a77,// 99 PAY  69 

    0xc4f161ed,// 100 PAY  70 

    0x0302c2a9,// 101 PAY  71 

    0x4fbed9b3,// 102 PAY  72 

    0x7e64b87f,// 103 PAY  73 

    0xa2ace290,// 104 PAY  74 

    0x9a9c5100,// 105 PAY  75 

    0x5c422b68,// 106 PAY  76 

    0x5b881e1f,// 107 PAY  77 

    0xc2619e8f,// 108 PAY  78 

    0x0a770239,// 109 PAY  79 

    0x6858fcfb,// 110 PAY  80 

    0xafd162d6,// 111 PAY  81 

    0x8ec34452,// 112 PAY  82 

    0xbcce85d8,// 113 PAY  83 

    0x77c1b7cd,// 114 PAY  84 

    0x0e9a4f21,// 115 PAY  85 

    0x28c3d7f0,// 116 PAY  86 

    0xdf3b9cfe,// 117 PAY  87 

    0x5c370029,// 118 PAY  88 

    0x62901b66,// 119 PAY  89 

    0xa05f358a,// 120 PAY  90 

    0x7b5bc37b,// 121 PAY  91 

    0xb1d192a7,// 122 PAY  92 

    0xf2ae481a,// 123 PAY  93 

    0x23455cce,// 124 PAY  94 

    0x49707280,// 125 PAY  95 

    0x87c0496f,// 126 PAY  96 

    0x37bbebf6,// 127 PAY  97 

    0xa79c743b,// 128 PAY  98 

    0x01893203,// 129 PAY  99 

    0x638db109,// 130 PAY 100 

    0x173fb2de,// 131 PAY 101 

    0x25296538,// 132 PAY 102 

    0x589d3279,// 133 PAY 103 

    0x2dd8261b,// 134 PAY 104 

    0xecdd88b6,// 135 PAY 105 

    0x3b91ee07,// 136 PAY 106 

    0xd1f3bd82,// 137 PAY 107 

    0x769ac3c3,// 138 PAY 108 

    0x6afdef3c,// 139 PAY 109 

    0x2efc44da,// 140 PAY 110 

    0x342a8f39,// 141 PAY 111 

    0x640b054a,// 142 PAY 112 

    0x6833da95,// 143 PAY 113 

    0x55704c16,// 144 PAY 114 

    0x1473e804,// 145 PAY 115 

    0xcc4634f7,// 146 PAY 116 

    0xb9dc316b,// 147 PAY 117 

    0x7868e59f,// 148 PAY 118 

    0x8e1943b9,// 149 PAY 119 

    0x44408c5a,// 150 PAY 120 

    0xce372a2c,// 151 PAY 121 

    0x4270a9e3,// 152 PAY 122 

    0x40136ff2,// 153 PAY 123 

    0x2d9accc8,// 154 PAY 124 

    0xb33e6af3,// 155 PAY 125 

    0x12d769f5,// 156 PAY 126 

    0xc223e967,// 157 PAY 127 

    0x3f96c765,// 158 PAY 128 

    0xa5dcfdbd,// 159 PAY 129 

    0xdf253a4a,// 160 PAY 130 

    0x66e2bfd9,// 161 PAY 131 

    0x397f6d04,// 162 PAY 132 

    0xd6edee15,// 163 PAY 133 

    0x6db3c6b3,// 164 PAY 134 

    0xd068f058,// 165 PAY 135 

    0x6530107d,// 166 PAY 136 

    0x5ca5350b,// 167 PAY 137 

    0xed4c9712,// 168 PAY 138 

    0xc11df193,// 169 PAY 139 

    0x392643d3,// 170 PAY 140 

    0x391c2874,// 171 PAY 141 

    0xcdae06fb,// 172 PAY 142 

    0x1d5e658d,// 173 PAY 143 

    0xd66312f1,// 174 PAY 144 

    0x8691e1e8,// 175 PAY 145 

    0x3b96ac41,// 176 PAY 146 

    0xb903a634,// 177 PAY 147 

    0x229f9fc9,// 178 PAY 148 

    0xff1b6ee4,// 179 PAY 149 

    0x12c3d8ac,// 180 PAY 150 

    0x86fd1369,// 181 PAY 151 

    0x21687f78,// 182 PAY 152 

    0x65e0d6bd,// 183 PAY 153 

    0x6e2a500c,// 184 PAY 154 

    0xcb23a2f5,// 185 PAY 155 

    0xeb389ce9,// 186 PAY 156 

    0x6c9f36db,// 187 PAY 157 

    0x1e763011,// 188 PAY 158 

    0x89a23c6b,// 189 PAY 159 

    0xcc788da0,// 190 PAY 160 

    0x9311d320,// 191 PAY 161 

    0xdfdc1948,// 192 PAY 162 

    0xee69d4e8,// 193 PAY 163 

    0xc936ba91,// 194 PAY 164 

    0x8cf6d83f,// 195 PAY 165 

    0x236f720b,// 196 PAY 166 

    0xbb66c8f0,// 197 PAY 167 

    0x86864025,// 198 PAY 168 

    0xc3440595,// 199 PAY 169 

    0xd8e58daf,// 200 PAY 170 

    0xbaea056a,// 201 PAY 171 

    0x0b9ddb03,// 202 PAY 172 

    0xfeac8fc1,// 203 PAY 173 

    0x13d4b596,// 204 PAY 174 

    0x6d3abdfd,// 205 PAY 175 

    0xc0fface1,// 206 PAY 176 

    0x9ea05069,// 207 PAY 177 

    0xd9bbd059,// 208 PAY 178 

    0x95db126e,// 209 PAY 179 

    0xff2d2f97,// 210 PAY 180 

    0xc239752a,// 211 PAY 181 

    0x1ee3b189,// 212 PAY 182 

    0x6c5495fb,// 213 PAY 183 

    0xd1d389f6,// 214 PAY 184 

    0xd4935ab8,// 215 PAY 185 

    0x3eec86f4,// 216 PAY 186 

    0x8574f0fe,// 217 PAY 187 

    0x39ad9c6c,// 218 PAY 188 

    0x514b5960,// 219 PAY 189 

    0xb42ec15d,// 220 PAY 190 

    0xdc6893d0,// 221 PAY 191 

    0x97cc8c0a,// 222 PAY 192 

    0x02f899a2,// 223 PAY 193 

    0x091095f6,// 224 PAY 194 

    0xf49a613c,// 225 PAY 195 

    0x7fcfd243,// 226 PAY 196 

    0x68f1d1b6,// 227 PAY 197 

    0x112f9dfc,// 228 PAY 198 

    0xb027bc85,// 229 PAY 199 

    0x19bcf2f3,// 230 PAY 200 

    0xab07fc90,// 231 PAY 201 

    0x8edfa472,// 232 PAY 202 

    0xcf5ceee4,// 233 PAY 203 

    0x9859bfb8,// 234 PAY 204 

    0xf865c036,// 235 PAY 205 

    0x2c5ec08c,// 236 PAY 206 

    0x0e908f73,// 237 PAY 207 

    0x8b53fcdd,// 238 PAY 208 

    0x7ee88a36,// 239 PAY 209 

    0x879b28de,// 240 PAY 210 

    0x31da1dbc,// 241 PAY 211 

    0x9ef86a88,// 242 PAY 212 

    0xba7dff39,// 243 PAY 213 

    0x29a3f2b4,// 244 PAY 214 

    0xa4a43996,// 245 PAY 215 

    0x8a66667c,// 246 PAY 216 

    0x774ebce4,// 247 PAY 217 

    0x25cf19ee,// 248 PAY 218 

    0x2e719d40,// 249 PAY 219 

    0xb322285f,// 250 PAY 220 

    0x68a7a368,// 251 PAY 221 

    0xa41171a4,// 252 PAY 222 

    0xe664b1f4,// 253 PAY 223 

    0xbcb722a9,// 254 PAY 224 

    0xbcbaccc9,// 255 PAY 225 

    0x3608a737,// 256 PAY 226 

    0xaa1d0562,// 257 PAY 227 

    0xfbbcb851,// 258 PAY 228 

    0xcd939498,// 259 PAY 229 

    0x9f55c1d0,// 260 PAY 230 

    0xc72a8411,// 261 PAY 231 

    0x4788a1fa,// 262 PAY 232 

    0xa5675d81,// 263 PAY 233 

    0x2d80ba78,// 264 PAY 234 

    0xfbb03e93,// 265 PAY 235 

    0x8c2c62aa,// 266 PAY 236 

    0x1334da85,// 267 PAY 237 

    0x0d93ab48,// 268 PAY 238 

    0x802273e3,// 269 PAY 239 

    0xe90e19d8,// 270 PAY 240 

    0x98cacf94,// 271 PAY 241 

    0xc55c9c7d,// 272 PAY 242 

    0x7d7b9998,// 273 PAY 243 

    0x307ffca8,// 274 PAY 244 

    0x93cd575d,// 275 PAY 245 

    0xc9d6cd72,// 276 PAY 246 

    0x645d0d19,// 277 PAY 247 

    0x1124f5ca,// 278 PAY 248 

    0x1ce3f996,// 279 PAY 249 

    0xf2d03370,// 280 PAY 250 

    0xdf6df113,// 281 PAY 251 

    0xb63eee4a,// 282 PAY 252 

    0xd4b88ac7,// 283 PAY 253 

    0xad0750ff,// 284 PAY 254 

    0xf3473cde,// 285 PAY 255 

    0x91ecac10,// 286 PAY 256 

    0xa702d73f,// 287 PAY 257 

    0x3f549b66,// 288 PAY 258 

    0xfc60a5da,// 289 PAY 259 

    0x83b958cd,// 290 PAY 260 

    0xaab51b17,// 291 PAY 261 

    0xcfba6d60,// 292 PAY 262 

    0x67abbb28,// 293 PAY 263 

    0x2136f018,// 294 PAY 264 

    0x7f3f4b8d,// 295 PAY 265 

    0xb4cb5e88,// 296 PAY 266 

    0xc1ecfe6c,// 297 PAY 267 

    0x3eccaf3e,// 298 PAY 268 

    0xfef819d1,// 299 PAY 269 

    0xa1e18c85,// 300 PAY 270 

    0x173ee4cd,// 301 PAY 271 

    0x2c8cebb7,// 302 PAY 272 

    0x46e9bc2e,// 303 PAY 273 

    0x7ca9f4c7,// 304 PAY 274 

    0xc1235310,// 305 PAY 275 

    0xd75cc299,// 306 PAY 276 

    0xc9109c76,// 307 PAY 277 

    0x0877862d,// 308 PAY 278 

    0x8817f3c5,// 309 PAY 279 

    0x0a50ac28,// 310 PAY 280 

    0x45b45bb8,// 311 PAY 281 

    0xc2383bdf,// 312 PAY 282 

    0xee3f677a,// 313 PAY 283 

    0x75ab78a8,// 314 PAY 284 

    0xc9b58de3,// 315 PAY 285 

    0x9588a6a4,// 316 PAY 286 

    0x5847ce31,// 317 PAY 287 

    0x358a5662,// 318 PAY 288 

    0xbf6a5dff,// 319 PAY 289 

    0x60bf5e6c,// 320 PAY 290 

    0x1d730976,// 321 PAY 291 

    0xb9cb725b,// 322 PAY 292 

    0x7da19edf,// 323 PAY 293 

    0x44073a18,// 324 PAY 294 

    0x3ececb40,// 325 PAY 295 

    0x98a9cdcd,// 326 PAY 296 

    0x313711eb,// 327 PAY 297 

    0x6029f154,// 328 PAY 298 

    0xbd00f233,// 329 PAY 299 

    0x92ee22c0,// 330 PAY 300 

    0x8c3ccdc6,// 331 PAY 301 

    0x320f04bd,// 332 PAY 302 

    0x868ab750,// 333 PAY 303 

    0xecdb4b60,// 334 PAY 304 

    0x86becc5e,// 335 PAY 305 

    0x4f73b2e9,// 336 PAY 306 

    0xe0ab1755,// 337 PAY 307 

    0xaa9d0ac6,// 338 PAY 308 

    0xeaeb94c3,// 339 PAY 309 

    0x770b86cb,// 340 PAY 310 

    0x6e81b8cd,// 341 PAY 311 

    0x8e4f719e,// 342 PAY 312 

    0xfe6ca58c,// 343 PAY 313 

    0xfe9b04fd,// 344 PAY 314 

    0x16feae28,// 345 PAY 315 

    0xe06280d1,// 346 PAY 316 

    0xb8dc7f2e,// 347 PAY 317 

    0x3748e285,// 348 PAY 318 

    0x0d5814dd,// 349 PAY 319 

    0x0e3bedd7,// 350 PAY 320 

    0x83761320,// 351 PAY 321 

    0x0c6c8fae,// 352 PAY 322 

    0x6e7e8cf7,// 353 PAY 323 

    0xc6d2c2b7,// 354 PAY 324 

    0x917b3def,// 355 PAY 325 

    0x94f56429,// 356 PAY 326 

    0x24266930,// 357 PAY 327 

    0x8a20dbf5,// 358 PAY 328 

    0x468a1106,// 359 PAY 329 

    0x0698bd98,// 360 PAY 330 

    0xa5043285,// 361 PAY 331 

    0x6b2a8251,// 362 PAY 332 

    0x2337631c,// 363 PAY 333 

    0xd115a382,// 364 PAY 334 

    0x9d5f7210,// 365 PAY 335 

    0xf4eabbcd,// 366 PAY 336 

    0x4b7f921e,// 367 PAY 337 

    0xc8530000,// 368 PAY 338 

/// STA is 1 words. 

/// STA num_pkts       : 85 

/// STA pkt_idx        : 179 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xf5 

    0x02ccf555 // 369 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 88 (0x58) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_sha1_pkt72_tmpl[] = {
    0xb8010058,// 1 CCH   1 

/// ECH cache_idx      : 0x06 

/// ECH pdu_tag        : 0x00 

    0x00060000,// 2 ECH   1 

/// SCX is 21 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound save_icv !insert_icv !check_icv sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : SHA1 

/// SCX aes_size        : RC4UPDT_AES192 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x5 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 8 

/// SCX authctx_size    : 40 

    0x00000015,// 3 SCX   1 

    0x8065484d,// 4 SCX   2 

    0x00004582,// 5 SCX   3 

    0x42c8da38,// 6 SCX   4 

    0x09d2422f,// 7 SCX   5 

    0xf20b9ee1,// 8 SCX   6 

    0xe0f0bebe,// 9 SCX   7 

    0x6e1293bf,// 10 SCX   8 

    0xe10f7ec1,// 11 SCX   9 

    0x53ad5877,// 12 SCX  10 

    0xa17addd8,// 13 SCX  11 

    0xed62eb26,// 14 SCX  12 

    0xff8e9482,// 15 SCX  13 

    0x94123bd9,// 16 SCX  14 

    0xa5232a98,// 17 SCX  15 

    0xd8fb8efc,// 18 SCX  16 

    0x1e56650e,// 19 SCX  17 

    0x8d2941d1,// 20 SCX  18 

    0x15849b0c,// 21 SCX  19 

    0x18281ce8,// 22 SCX  20 

    0x8bb4d70f,// 23 SCX  21 

/// BFD is 3 words. 

/// BFD tot_len        : 1915 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 474 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 474 

/// BFD lencrypto      : 120 

/// BFD ofstcrypto     : 88 

/// BFD (ofst+len)cry  : 208 

/// BFD ofstiv         : 68 

/// BFD ofsticv        : 1296 

    0x000001da,// 24 BFD   1 

    0x00580078,// 25 BFD   2 

    0x05100044,// 26 BFD   3 

/// MFM is 4 words. 

/// MFM vldnibs        : 15 

    0x1500422f,// 27 MFM   1 

    0xe1ce283d,// 28 MFM   2 

    0xa98b3f52,// 29 MFM   3 

    0xa0000000,// 30 MFM   4 

/// BDA is 480 words. 

/// BDA size     is 1915 (0x77b) 

/// BDA id       is 0xdad4 

    0x077bdad4,// 31 BDA   1 

/// PAY Generic Data size   : 1915 byte(s) 

/// PAD Buffer Data Pad size   : 1 byte(s) 

    0x599a2ed8,// 32 PAY   1 

    0xd32fc75c,// 33 PAY   2 

    0x317332dc,// 34 PAY   3 

    0x0de57f25,// 35 PAY   4 

    0x589b45e9,// 36 PAY   5 

    0x408766c5,// 37 PAY   6 

    0x38b8f564,// 38 PAY   7 

    0x3968e307,// 39 PAY   8 

    0x4dd7febd,// 40 PAY   9 

    0xa0d60595,// 41 PAY  10 

    0x1653e1ac,// 42 PAY  11 

    0xfe428150,// 43 PAY  12 

    0x4095f8cc,// 44 PAY  13 

    0x2bf28e80,// 45 PAY  14 

    0x7ad5d01f,// 46 PAY  15 

    0x9ac667c8,// 47 PAY  16 

    0x6dce2554,// 48 PAY  17 

    0x6ce476a4,// 49 PAY  18 

    0xa0e82fab,// 50 PAY  19 

    0x0ee756b1,// 51 PAY  20 

    0x835b2fce,// 52 PAY  21 

    0x58dc28f5,// 53 PAY  22 

    0xd4c9f352,// 54 PAY  23 

    0x684d4545,// 55 PAY  24 

    0x9d4081aa,// 56 PAY  25 

    0x78d0f5a3,// 57 PAY  26 

    0x1b5fd1fb,// 58 PAY  27 

    0x47532683,// 59 PAY  28 

    0xd23d2f77,// 60 PAY  29 

    0xc39dbbef,// 61 PAY  30 

    0xb0351320,// 62 PAY  31 

    0x75976086,// 63 PAY  32 

    0xe8448a70,// 64 PAY  33 

    0x20db1cd3,// 65 PAY  34 

    0x01a03b2c,// 66 PAY  35 

    0xd2a3c012,// 67 PAY  36 

    0x3585aa4d,// 68 PAY  37 

    0x25e89f4c,// 69 PAY  38 

    0x6597d58e,// 70 PAY  39 

    0x05bcc469,// 71 PAY  40 

    0x7eb49657,// 72 PAY  41 

    0x474a88a3,// 73 PAY  42 

    0x720bb44d,// 74 PAY  43 

    0xa0eefbfe,// 75 PAY  44 

    0x5fad78ae,// 76 PAY  45 

    0xbe0157d6,// 77 PAY  46 

    0x6476733d,// 78 PAY  47 

    0xe2f77ebf,// 79 PAY  48 

    0x6e6ec3ac,// 80 PAY  49 

    0x2bacac4c,// 81 PAY  50 

    0xbf8cecbd,// 82 PAY  51 

    0x628d9713,// 83 PAY  52 

    0xa3e6af44,// 84 PAY  53 

    0xfdd90ffe,// 85 PAY  54 

    0x80eda8f8,// 86 PAY  55 

    0x774d669b,// 87 PAY  56 

    0x58d42fe8,// 88 PAY  57 

    0x13eaf992,// 89 PAY  58 

    0x925096aa,// 90 PAY  59 

    0x453f900d,// 91 PAY  60 

    0x26fa0728,// 92 PAY  61 

    0x31ace57f,// 93 PAY  62 

    0xeae92119,// 94 PAY  63 

    0x56d12f8b,// 95 PAY  64 

    0x4e5dc674,// 96 PAY  65 

    0xa7bb57ba,// 97 PAY  66 

    0x36471244,// 98 PAY  67 

    0x1bfbdbec,// 99 PAY  68 

    0xb157d828,// 100 PAY  69 

    0xf3ca5a60,// 101 PAY  70 

    0x3057fd33,// 102 PAY  71 

    0x50180e66,// 103 PAY  72 

    0xbb53d57c,// 104 PAY  73 

    0x24ae5e80,// 105 PAY  74 

    0x9e3794e1,// 106 PAY  75 

    0x19fa65d0,// 107 PAY  76 

    0x3fef41fd,// 108 PAY  77 

    0xe217afb2,// 109 PAY  78 

    0x27efb570,// 110 PAY  79 

    0x2de9fe25,// 111 PAY  80 

    0x33aa55dc,// 112 PAY  81 

    0x6e2666b9,// 113 PAY  82 

    0xa5911ab3,// 114 PAY  83 

    0x6e2685d5,// 115 PAY  84 

    0x781efaed,// 116 PAY  85 

    0x9264db0d,// 117 PAY  86 

    0xd615e4de,// 118 PAY  87 

    0x487623bb,// 119 PAY  88 

    0x2a1fd7a2,// 120 PAY  89 

    0x9f902ab6,// 121 PAY  90 

    0x1666ac40,// 122 PAY  91 

    0x958204a5,// 123 PAY  92 

    0xf15d0151,// 124 PAY  93 

    0xc7a2cf44,// 125 PAY  94 

    0x51a5e481,// 126 PAY  95 

    0xc2c4a620,// 127 PAY  96 

    0xb66d68b6,// 128 PAY  97 

    0xfd4ab9c5,// 129 PAY  98 

    0xb1df317f,// 130 PAY  99 

    0x597e6f95,// 131 PAY 100 

    0x8ed55b82,// 132 PAY 101 

    0x83bf0530,// 133 PAY 102 

    0x5b07d7ac,// 134 PAY 103 

    0xc4ac7b5a,// 135 PAY 104 

    0x102c1a2f,// 136 PAY 105 

    0x317eca47,// 137 PAY 106 

    0x6ebec1c4,// 138 PAY 107 

    0xcdeae49c,// 139 PAY 108 

    0xe9379e5b,// 140 PAY 109 

    0xa5744c2f,// 141 PAY 110 

    0x9e866062,// 142 PAY 111 

    0x5abb80f7,// 143 PAY 112 

    0xc95a1666,// 144 PAY 113 

    0x8984a06a,// 145 PAY 114 

    0x0df22017,// 146 PAY 115 

    0x4f2da423,// 147 PAY 116 

    0x0b3b7be8,// 148 PAY 117 

    0x75f6d42e,// 149 PAY 118 

    0x6f0cb94d,// 150 PAY 119 

    0xf9b04fff,// 151 PAY 120 

    0x09c357e5,// 152 PAY 121 

    0x42a357c6,// 153 PAY 122 

    0xd69e9cd1,// 154 PAY 123 

    0x10b58799,// 155 PAY 124 

    0x39fa8472,// 156 PAY 125 

    0xd8be9594,// 157 PAY 126 

    0x09c2311e,// 158 PAY 127 

    0xb5932950,// 159 PAY 128 

    0xebc1b23f,// 160 PAY 129 

    0x67c72715,// 161 PAY 130 

    0xebf30681,// 162 PAY 131 

    0x1a19440d,// 163 PAY 132 

    0xdffac3d0,// 164 PAY 133 

    0xb8c3fad9,// 165 PAY 134 

    0x203f3341,// 166 PAY 135 

    0x26c8abac,// 167 PAY 136 

    0xbc17b327,// 168 PAY 137 

    0x5bacc12b,// 169 PAY 138 

    0xb5138e72,// 170 PAY 139 

    0x0b2ebbb3,// 171 PAY 140 

    0x9d2a08e3,// 172 PAY 141 

    0x7889a8ac,// 173 PAY 142 

    0x178152cb,// 174 PAY 143 

    0xa8a454aa,// 175 PAY 144 

    0x6e06ea3b,// 176 PAY 145 

    0x9957bb6e,// 177 PAY 146 

    0x54741b19,// 178 PAY 147 

    0x668985d6,// 179 PAY 148 

    0xc8001791,// 180 PAY 149 

    0x794403c4,// 181 PAY 150 

    0x725b1e39,// 182 PAY 151 

    0x4c3b0322,// 183 PAY 152 

    0xdaa953b8,// 184 PAY 153 

    0x981fad1e,// 185 PAY 154 

    0xecb36528,// 186 PAY 155 

    0xf0f3e034,// 187 PAY 156 

    0x13652866,// 188 PAY 157 

    0xc1b33731,// 189 PAY 158 

    0xd6adb163,// 190 PAY 159 

    0x75eca1ba,// 191 PAY 160 

    0xc0a31fe9,// 192 PAY 161 

    0x5a25d85a,// 193 PAY 162 

    0xe149c162,// 194 PAY 163 

    0x6ebe48bf,// 195 PAY 164 

    0xc2a4c04d,// 196 PAY 165 

    0xe886f340,// 197 PAY 166 

    0x3fc7641d,// 198 PAY 167 

    0xf0dc0282,// 199 PAY 168 

    0x0d411be4,// 200 PAY 169 

    0xa43fa97b,// 201 PAY 170 

    0xe0d1eec0,// 202 PAY 171 

    0xf296717a,// 203 PAY 172 

    0x65f2f24c,// 204 PAY 173 

    0xf8c26950,// 205 PAY 174 

    0x04ae87db,// 206 PAY 175 

    0x047f75e3,// 207 PAY 176 

    0x9416cb0c,// 208 PAY 177 

    0xe1de851b,// 209 PAY 178 

    0xc2733fa8,// 210 PAY 179 

    0xb33c7819,// 211 PAY 180 

    0x186a7b16,// 212 PAY 181 

    0x0ad993cd,// 213 PAY 182 

    0x7e5a5310,// 214 PAY 183 

    0x860e25eb,// 215 PAY 184 

    0x784f108b,// 216 PAY 185 

    0x9ce717d8,// 217 PAY 186 

    0x2fb8bf22,// 218 PAY 187 

    0x7f3794d9,// 219 PAY 188 

    0xb0a02aec,// 220 PAY 189 

    0x98b5a107,// 221 PAY 190 

    0x17eede20,// 222 PAY 191 

    0x39556c13,// 223 PAY 192 

    0x6cf73a9c,// 224 PAY 193 

    0x1cb33009,// 225 PAY 194 

    0xb36b2337,// 226 PAY 195 

    0x633550f1,// 227 PAY 196 

    0xd2cdbf6b,// 228 PAY 197 

    0xb62cd6f1,// 229 PAY 198 

    0xb52bca94,// 230 PAY 199 

    0xc2fa7277,// 231 PAY 200 

    0x7d685118,// 232 PAY 201 

    0xfdc77db7,// 233 PAY 202 

    0x0d697842,// 234 PAY 203 

    0x666066f0,// 235 PAY 204 

    0x2b166ff9,// 236 PAY 205 

    0x792596ba,// 237 PAY 206 

    0xc941b66b,// 238 PAY 207 

    0x59586393,// 239 PAY 208 

    0x52c8b417,// 240 PAY 209 

    0x8ae6d2c1,// 241 PAY 210 

    0x44aa6d88,// 242 PAY 211 

    0x2a3745e0,// 243 PAY 212 

    0x0ab5f4e1,// 244 PAY 213 

    0x300040f1,// 245 PAY 214 

    0xe5a1e34f,// 246 PAY 215 

    0x3964a54b,// 247 PAY 216 

    0x282b630a,// 248 PAY 217 

    0xd39ddc97,// 249 PAY 218 

    0xcea0b2af,// 250 PAY 219 

    0xf4aec525,// 251 PAY 220 

    0x8ff12767,// 252 PAY 221 

    0x30ced89f,// 253 PAY 222 

    0x9648745e,// 254 PAY 223 

    0x240f0d56,// 255 PAY 224 

    0x92f50597,// 256 PAY 225 

    0x6ba2d1a5,// 257 PAY 226 

    0x973739ff,// 258 PAY 227 

    0xcad24cba,// 259 PAY 228 

    0xc6aac81a,// 260 PAY 229 

    0xfa651065,// 261 PAY 230 

    0x824008f2,// 262 PAY 231 

    0x5af4ba8a,// 263 PAY 232 

    0xf86ca7de,// 264 PAY 233 

    0xbfe2b849,// 265 PAY 234 

    0xebcba6c3,// 266 PAY 235 

    0x3f1c530c,// 267 PAY 236 

    0xe6d7b8ed,// 268 PAY 237 

    0x44820cdf,// 269 PAY 238 

    0x082419ba,// 270 PAY 239 

    0x71b08d7e,// 271 PAY 240 

    0xafc2478a,// 272 PAY 241 

    0x60ec8482,// 273 PAY 242 

    0xe3947f28,// 274 PAY 243 

    0x0933f155,// 275 PAY 244 

    0x9f3f0a7a,// 276 PAY 245 

    0x660f5226,// 277 PAY 246 

    0x6cd26d2b,// 278 PAY 247 

    0x3ff158a8,// 279 PAY 248 

    0xe134f01d,// 280 PAY 249 

    0x51fd036b,// 281 PAY 250 

    0x803364d1,// 282 PAY 251 

    0xa0381744,// 283 PAY 252 

    0x96594988,// 284 PAY 253 

    0x0cead9c0,// 285 PAY 254 

    0x9f8f7033,// 286 PAY 255 

    0xa871c9bc,// 287 PAY 256 

    0x5655fc46,// 288 PAY 257 

    0x55cdbf54,// 289 PAY 258 

    0x5b2193fb,// 290 PAY 259 

    0xda924f83,// 291 PAY 260 

    0xff5fe806,// 292 PAY 261 

    0x010ce3b8,// 293 PAY 262 

    0x2f4e0d90,// 294 PAY 263 

    0x3050b54c,// 295 PAY 264 

    0xe5b7414e,// 296 PAY 265 

    0x75a39ec6,// 297 PAY 266 

    0xccfd1028,// 298 PAY 267 

    0xe324fdd8,// 299 PAY 268 

    0xbe925b09,// 300 PAY 269 

    0xb3356859,// 301 PAY 270 

    0x2981b477,// 302 PAY 271 

    0x712a3aa4,// 303 PAY 272 

    0x07394cfc,// 304 PAY 273 

    0x91aff1b3,// 305 PAY 274 

    0x3f4888cb,// 306 PAY 275 

    0x56403f25,// 307 PAY 276 

    0x9e92171e,// 308 PAY 277 

    0xefa85b9b,// 309 PAY 278 

    0x326fe355,// 310 PAY 279 

    0x6ceb6e20,// 311 PAY 280 

    0x778cb3e7,// 312 PAY 281 

    0xd36b9772,// 313 PAY 282 

    0x602891c6,// 314 PAY 283 

    0xc207658d,// 315 PAY 284 

    0x3d212ead,// 316 PAY 285 

    0xa7d619f2,// 317 PAY 286 

    0x2616e394,// 318 PAY 287 

    0xbfe7ad24,// 319 PAY 288 

    0x8e6d0bac,// 320 PAY 289 

    0x5d00317d,// 321 PAY 290 

    0x6f48a1f7,// 322 PAY 291 

    0xe2ce266b,// 323 PAY 292 

    0x4ff4a92b,// 324 PAY 293 

    0x1cfd7fd4,// 325 PAY 294 

    0xcb2cba90,// 326 PAY 295 

    0x4251e762,// 327 PAY 296 

    0x6db075a9,// 328 PAY 297 

    0xd6bbc8af,// 329 PAY 298 

    0x177e284b,// 330 PAY 299 

    0x75d3d8bb,// 331 PAY 300 

    0x899938d6,// 332 PAY 301 

    0x1f374566,// 333 PAY 302 

    0xcd5d78ef,// 334 PAY 303 

    0x1ad7c31a,// 335 PAY 304 

    0xefcafd26,// 336 PAY 305 

    0x4c8b7e68,// 337 PAY 306 

    0xa2c38a6a,// 338 PAY 307 

    0xa9a9ba39,// 339 PAY 308 

    0x964d0e83,// 340 PAY 309 

    0x7281077b,// 341 PAY 310 

    0x33a7509b,// 342 PAY 311 

    0xc187ca2a,// 343 PAY 312 

    0x531e7512,// 344 PAY 313 

    0x9510a407,// 345 PAY 314 

    0x626a7b3b,// 346 PAY 315 

    0xa9069a01,// 347 PAY 316 

    0xf0f01534,// 348 PAY 317 

    0x19841239,// 349 PAY 318 

    0x55af6c9e,// 350 PAY 319 

    0x0b1c1f67,// 351 PAY 320 

    0xd3af9e49,// 352 PAY 321 

    0x52e5f12f,// 353 PAY 322 

    0xf3f3c25c,// 354 PAY 323 

    0xf315d661,// 355 PAY 324 

    0x75cade10,// 356 PAY 325 

    0x02fbccc5,// 357 PAY 326 

    0x794f1627,// 358 PAY 327 

    0xfebdf45d,// 359 PAY 328 

    0xb71999f9,// 360 PAY 329 

    0x59ee121c,// 361 PAY 330 

    0xbafaf42f,// 362 PAY 331 

    0xc13a386f,// 363 PAY 332 

    0xcbf81839,// 364 PAY 333 

    0x1202e478,// 365 PAY 334 

    0xe52ed787,// 366 PAY 335 

    0x5cd180cf,// 367 PAY 336 

    0xe7f4ff41,// 368 PAY 337 

    0x4afb77e7,// 369 PAY 338 

    0xfa6c750a,// 370 PAY 339 

    0x85e86d16,// 371 PAY 340 

    0xc3075d99,// 372 PAY 341 

    0xcfe904bd,// 373 PAY 342 

    0x3b09a799,// 374 PAY 343 

    0x74365f0b,// 375 PAY 344 

    0x53cd3f46,// 376 PAY 345 

    0x171e7ea4,// 377 PAY 346 

    0x7bb99730,// 378 PAY 347 

    0x51d3bd5c,// 379 PAY 348 

    0x06709dc4,// 380 PAY 349 

    0x6f817624,// 381 PAY 350 

    0x92b0c597,// 382 PAY 351 

    0x23028c89,// 383 PAY 352 

    0x1ff4511d,// 384 PAY 353 

    0xccd13f00,// 385 PAY 354 

    0xeb2dd85c,// 386 PAY 355 

    0xe548e0b5,// 387 PAY 356 

    0x7fc4701f,// 388 PAY 357 

    0x5e45c00e,// 389 PAY 358 

    0x3bd5b440,// 390 PAY 359 

    0xf8c8c604,// 391 PAY 360 

    0x0b1128d0,// 392 PAY 361 

    0x8ceee55c,// 393 PAY 362 

    0xcb141d69,// 394 PAY 363 

    0x18058c48,// 395 PAY 364 

    0x9f9869e1,// 396 PAY 365 

    0x5f911163,// 397 PAY 366 

    0xd8780c8b,// 398 PAY 367 

    0x7fe659e6,// 399 PAY 368 

    0x14c8c60a,// 400 PAY 369 

    0xf6b29964,// 401 PAY 370 

    0x9e241d9c,// 402 PAY 371 

    0x9e9a56df,// 403 PAY 372 

    0xe47dc8ca,// 404 PAY 373 

    0xb1e5bfbe,// 405 PAY 374 

    0x376eca92,// 406 PAY 375 

    0xf3d1c871,// 407 PAY 376 

    0xf97929dd,// 408 PAY 377 

    0xdfee3c6d,// 409 PAY 378 

    0x4e0042dc,// 410 PAY 379 

    0x0c1f719a,// 411 PAY 380 

    0x679176bf,// 412 PAY 381 

    0x30fa37f5,// 413 PAY 382 

    0xfcdd8402,// 414 PAY 383 

    0xdf1408da,// 415 PAY 384 

    0xfbc7b1a3,// 416 PAY 385 

    0xe9aa9077,// 417 PAY 386 

    0xa96aa20e,// 418 PAY 387 

    0xa079a07d,// 419 PAY 388 

    0xeaa16f0e,// 420 PAY 389 

    0x1128946e,// 421 PAY 390 

    0x5f1e4f1c,// 422 PAY 391 

    0x7bb2a5a2,// 423 PAY 392 

    0x2080b388,// 424 PAY 393 

    0xec76033f,// 425 PAY 394 

    0x7ce6eff4,// 426 PAY 395 

    0xfca6f19a,// 427 PAY 396 

    0x435fc981,// 428 PAY 397 

    0x1a611e3c,// 429 PAY 398 

    0x73849c25,// 430 PAY 399 

    0xe8e5e7d0,// 431 PAY 400 

    0xf490c220,// 432 PAY 401 

    0x4c4745b9,// 433 PAY 402 

    0x24c61166,// 434 PAY 403 

    0xc800af45,// 435 PAY 404 

    0x6be0d618,// 436 PAY 405 

    0xb37f4457,// 437 PAY 406 

    0xd5e50f15,// 438 PAY 407 

    0xaec8922d,// 439 PAY 408 

    0x71afac5d,// 440 PAY 409 

    0x985ef063,// 441 PAY 410 

    0x7f569580,// 442 PAY 411 

    0xf89b913e,// 443 PAY 412 

    0xe1533ac1,// 444 PAY 413 

    0x9854d3d0,// 445 PAY 414 

    0x7696452d,// 446 PAY 415 

    0xa4b5dbbe,// 447 PAY 416 

    0xe631e3d9,// 448 PAY 417 

    0x1cf5bff3,// 449 PAY 418 

    0xce2b4a3b,// 450 PAY 419 

    0xee34abb3,// 451 PAY 420 

    0x20fa5b17,// 452 PAY 421 

    0x96ae18b6,// 453 PAY 422 

    0x98f1c547,// 454 PAY 423 

    0x6b57e814,// 455 PAY 424 

    0x653fcdb3,// 456 PAY 425 

    0xdc58b79a,// 457 PAY 426 

    0xc96ce362,// 458 PAY 427 

    0x9787a7f6,// 459 PAY 428 

    0x6568f0a8,// 460 PAY 429 

    0x3ed91445,// 461 PAY 430 

    0xa9295c8e,// 462 PAY 431 

    0x768f1049,// 463 PAY 432 

    0x7a473efe,// 464 PAY 433 

    0x485afca0,// 465 PAY 434 

    0xe50bbd83,// 466 PAY 435 

    0x5a00ee4f,// 467 PAY 436 

    0x0e864f99,// 468 PAY 437 

    0x366bdf40,// 469 PAY 438 

    0x26a268c2,// 470 PAY 439 

    0x1b383a09,// 471 PAY 440 

    0xd5ba9e62,// 472 PAY 441 

    0x0913b3bf,// 473 PAY 442 

    0x05dfe275,// 474 PAY 443 

    0xc8f7ea98,// 475 PAY 444 

    0x3d13946e,// 476 PAY 445 

    0x32a3715d,// 477 PAY 446 

    0x08ba9a12,// 478 PAY 447 

    0xe528e39f,// 479 PAY 448 

    0x881c2aca,// 480 PAY 449 

    0x0664f812,// 481 PAY 450 

    0x97bf68b6,// 482 PAY 451 

    0x2d3eb3b7,// 483 PAY 452 

    0xdb682776,// 484 PAY 453 

    0x622e6119,// 485 PAY 454 

    0x861dee8c,// 486 PAY 455 

    0x2476a4e9,// 487 PAY 456 

    0x2437949d,// 488 PAY 457 

    0x86996ce6,// 489 PAY 458 

    0x4f0a2d0a,// 490 PAY 459 

    0x4eb5f609,// 491 PAY 460 

    0x2333b02f,// 492 PAY 461 

    0x009ce838,// 493 PAY 462 

    0x460f8b08,// 494 PAY 463 

    0x79f9703d,// 495 PAY 464 

    0x68f0dc0d,// 496 PAY 465 

    0x3b02a255,// 497 PAY 466 

    0x8219232d,// 498 PAY 467 

    0xd04c03c7,// 499 PAY 468 

    0x047fc25f,// 500 PAY 469 

    0x4b98583b,// 501 PAY 470 

    0x1920c326,// 502 PAY 471 

    0x497a2e36,// 503 PAY 472 

    0x86955a6b,// 504 PAY 473 

    0x54016eeb,// 505 PAY 474 

    0x395c3882,// 506 PAY 475 

    0xc30fdfd2,// 507 PAY 476 

    0x375ffcf4,// 508 PAY 477 

    0x8292e3f2,// 509 PAY 478 

    0x2d287900,// 510 PAY 479 

/// STA is 1 words. 

/// STA num_pkts       : 44 

/// STA pkt_idx        : 45 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x94 

    0x00b5942c // 511 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 80 (0x50) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_sha1_pkt73_tmpl[] = {
    0xb8010050,// 1 CCH   1 

/// ECH cache_idx      : 0x04 

/// ECH pdu_tag        : 0x00 

    0x00040000,// 2 ECH   1 

/// SCX is 19 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound save_icv !insert_icv !check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : SHA1 

/// SCX aes_size        : AES256 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x2 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 40 

    0x08000013,// 3 SCX   1 

    0x80624853,// 4 SCX   2 

    0x00004200,// 5 SCX   3 

    0x29e1087d,// 6 SCX   4 

    0x8a9acb9d,// 7 SCX   5 

    0xcf95c4cf,// 8 SCX   6 

    0x8cb5f41d,// 9 SCX   7 

    0xa1f34199,// 10 SCX   8 

    0x954d6ada,// 11 SCX   9 

    0x867e4891,// 12 SCX  10 

    0x012adfed,// 13 SCX  11 

    0x4e7f2276,// 14 SCX  12 

    0x6a624005,// 15 SCX  13 

    0xfe74a85c,// 16 SCX  14 

    0x35486b57,// 17 SCX  15 

    0x1d49000b,// 18 SCX  16 

    0xa660f951,// 19 SCX  17 

    0x9c4c9741,// 20 SCX  18 

    0xf7c11d59,// 21 SCX  19 

/// BFD is 3 words. 

/// BFD tot_len        : 1129 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 21 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 21 

/// BFD lencrypto      : 8 

/// BFD ofstcrypto     : 12 

/// BFD (ofst+len)cry  : 20 

/// BFD ofstiv         : 0 

/// BFD ofsticv        : 1084 

    0x00000015,// 22 BFD   1 

    0x000c0008,// 23 BFD   2 

    0x043c0000,// 24 BFD   3 

/// MFM is 1 words. 

/// MFM vldnibs        : 4 

    0x04007fba,// 25 MFM   1 

/// BDA is 284 words. 

/// BDA size     is 1129 (0x469) 

/// BDA id       is 0xb041 

    0x0469b041,// 26 BDA   1 

/// PAY Generic Data size   : 1129 byte(s) 

/// PAD Buffer Data Pad size   : 3 byte(s) 

    0x344cbe4f,// 27 PAY   1 

    0xd3c65ad1,// 28 PAY   2 

    0x7019016f,// 29 PAY   3 

    0x43a95a25,// 30 PAY   4 

    0xcaeada05,// 31 PAY   5 

    0x875480de,// 32 PAY   6 

    0xc8392996,// 33 PAY   7 

    0xa268d1de,// 34 PAY   8 

    0xcffb293f,// 35 PAY   9 

    0x0383b8b5,// 36 PAY  10 

    0xcd0f788a,// 37 PAY  11 

    0x46879c46,// 38 PAY  12 

    0x70c4d894,// 39 PAY  13 

    0x3020ce6b,// 40 PAY  14 

    0x6d49ff2e,// 41 PAY  15 

    0x22d33768,// 42 PAY  16 

    0xf079e834,// 43 PAY  17 

    0x6a862af7,// 44 PAY  18 

    0x2519fa9f,// 45 PAY  19 

    0x0403fd0f,// 46 PAY  20 

    0xba535edc,// 47 PAY  21 

    0x84fb404d,// 48 PAY  22 

    0xd6e94104,// 49 PAY  23 

    0xdc387a2a,// 50 PAY  24 

    0x7f1d2697,// 51 PAY  25 

    0x725893c1,// 52 PAY  26 

    0x462b0ece,// 53 PAY  27 

    0xab12d90f,// 54 PAY  28 

    0x694a31bb,// 55 PAY  29 

    0xfdb92830,// 56 PAY  30 

    0xea99238e,// 57 PAY  31 

    0xfaaab101,// 58 PAY  32 

    0xfd90757c,// 59 PAY  33 

    0xa7d51527,// 60 PAY  34 

    0xf9eef21c,// 61 PAY  35 

    0x03a2c37a,// 62 PAY  36 

    0xae0306eb,// 63 PAY  37 

    0x2564cb70,// 64 PAY  38 

    0x03ae1cfa,// 65 PAY  39 

    0x6ef32654,// 66 PAY  40 

    0xd61e1006,// 67 PAY  41 

    0x8c4a023a,// 68 PAY  42 

    0x247e4037,// 69 PAY  43 

    0x7e480c8a,// 70 PAY  44 

    0x5e6c6db0,// 71 PAY  45 

    0x3e758296,// 72 PAY  46 

    0xc74b4dd1,// 73 PAY  47 

    0xe957a5fb,// 74 PAY  48 

    0xd8e4a9fc,// 75 PAY  49 

    0x2ae8dd0b,// 76 PAY  50 

    0xc079da24,// 77 PAY  51 

    0x72bbfc8a,// 78 PAY  52 

    0x82ed0695,// 79 PAY  53 

    0x7b7a8687,// 80 PAY  54 

    0xf1c1baf9,// 81 PAY  55 

    0x740eae09,// 82 PAY  56 

    0xf019e21c,// 83 PAY  57 

    0x4489d392,// 84 PAY  58 

    0x1dc9b595,// 85 PAY  59 

    0x55b0ac3d,// 86 PAY  60 

    0xfda80d5f,// 87 PAY  61 

    0x1ddcdd4f,// 88 PAY  62 

    0x8847152e,// 89 PAY  63 

    0x10f9571b,// 90 PAY  64 

    0x395cc47a,// 91 PAY  65 

    0x3f87cdb7,// 92 PAY  66 

    0xed518d44,// 93 PAY  67 

    0x197a5f11,// 94 PAY  68 

    0x83e6d658,// 95 PAY  69 

    0x3ab47ce6,// 96 PAY  70 

    0x9cbe7201,// 97 PAY  71 

    0x38bcef26,// 98 PAY  72 

    0x5c9899ee,// 99 PAY  73 

    0x63c8cd34,// 100 PAY  74 

    0x07d6d454,// 101 PAY  75 

    0x18b4fbd2,// 102 PAY  76 

    0x6e54f1ac,// 103 PAY  77 

    0x78b10003,// 104 PAY  78 

    0x9c1bfe92,// 105 PAY  79 

    0x2220db58,// 106 PAY  80 

    0x1fb25112,// 107 PAY  81 

    0xaf1350bd,// 108 PAY  82 

    0x20f4a1f2,// 109 PAY  83 

    0xe880e737,// 110 PAY  84 

    0x506ee528,// 111 PAY  85 

    0x9709f76b,// 112 PAY  86 

    0xd1facfec,// 113 PAY  87 

    0x73096481,// 114 PAY  88 

    0xe5c739ed,// 115 PAY  89 

    0x5332fa59,// 116 PAY  90 

    0x62876828,// 117 PAY  91 

    0x92f1f303,// 118 PAY  92 

    0x79637ae3,// 119 PAY  93 

    0xe57aefe3,// 120 PAY  94 

    0xf2e90bfa,// 121 PAY  95 

    0xf48920d1,// 122 PAY  96 

    0xf2261e8e,// 123 PAY  97 

    0x06ac90fb,// 124 PAY  98 

    0xf3389ca4,// 125 PAY  99 

    0x2b493141,// 126 PAY 100 

    0xe275378f,// 127 PAY 101 

    0x9f44b688,// 128 PAY 102 

    0xd20462cb,// 129 PAY 103 

    0xe52eb83e,// 130 PAY 104 

    0xa27e106d,// 131 PAY 105 

    0x800fe20c,// 132 PAY 106 

    0xdb4189b6,// 133 PAY 107 

    0xfe452be9,// 134 PAY 108 

    0x6f01a475,// 135 PAY 109 

    0x3cea356f,// 136 PAY 110 

    0x7233cafa,// 137 PAY 111 

    0x0ff0b9c6,// 138 PAY 112 

    0x8f8e60ab,// 139 PAY 113 

    0x24714ba7,// 140 PAY 114 

    0xdc0697fe,// 141 PAY 115 

    0x8380bf92,// 142 PAY 116 

    0xba358085,// 143 PAY 117 

    0xa4dd7a1c,// 144 PAY 118 

    0xc29a9da7,// 145 PAY 119 

    0x01312085,// 146 PAY 120 

    0x9f18aadf,// 147 PAY 121 

    0x8f924406,// 148 PAY 122 

    0x81ab79af,// 149 PAY 123 

    0xca0efd89,// 150 PAY 124 

    0x2c3568a9,// 151 PAY 125 

    0x7f9da731,// 152 PAY 126 

    0xafbd3865,// 153 PAY 127 

    0x60220cf6,// 154 PAY 128 

    0x7191ead8,// 155 PAY 129 

    0xf1778e43,// 156 PAY 130 

    0x54704fff,// 157 PAY 131 

    0x8886b4c6,// 158 PAY 132 

    0x87062bb0,// 159 PAY 133 

    0x16787071,// 160 PAY 134 

    0xee1fefb9,// 161 PAY 135 

    0x311fde05,// 162 PAY 136 

    0x699bda3c,// 163 PAY 137 

    0x7ebb60ae,// 164 PAY 138 

    0xd44c3cad,// 165 PAY 139 

    0xb8a9ea69,// 166 PAY 140 

    0xfd67a068,// 167 PAY 141 

    0xa89e6325,// 168 PAY 142 

    0x25c0aba8,// 169 PAY 143 

    0x7026efd2,// 170 PAY 144 

    0xb87c8ef0,// 171 PAY 145 

    0xadc41a98,// 172 PAY 146 

    0x90b1d040,// 173 PAY 147 

    0xcfd156d9,// 174 PAY 148 

    0x20598222,// 175 PAY 149 

    0x8553f289,// 176 PAY 150 

    0xb70d46d7,// 177 PAY 151 

    0x24fae6fd,// 178 PAY 152 

    0xc91c07f9,// 179 PAY 153 

    0xd7021beb,// 180 PAY 154 

    0x154e5022,// 181 PAY 155 

    0xd167a9c7,// 182 PAY 156 

    0xa7322074,// 183 PAY 157 

    0x92d5d6a2,// 184 PAY 158 

    0xaa9e64fd,// 185 PAY 159 

    0xc0b64a48,// 186 PAY 160 

    0xe466719a,// 187 PAY 161 

    0x7568733f,// 188 PAY 162 

    0x22670696,// 189 PAY 163 

    0x463d9c66,// 190 PAY 164 

    0x46e824ac,// 191 PAY 165 

    0xcfaf32cd,// 192 PAY 166 

    0x52728a83,// 193 PAY 167 

    0xda19917e,// 194 PAY 168 

    0xf8d782f7,// 195 PAY 169 

    0x1c9f370d,// 196 PAY 170 

    0xee2f8891,// 197 PAY 171 

    0xdc4dfa28,// 198 PAY 172 

    0x15d9a557,// 199 PAY 173 

    0xaf7747d0,// 200 PAY 174 

    0xa8b854f6,// 201 PAY 175 

    0x634aceac,// 202 PAY 176 

    0xcc4e6971,// 203 PAY 177 

    0x8c79c1f7,// 204 PAY 178 

    0x122a2bff,// 205 PAY 179 

    0xa2d6f5cd,// 206 PAY 180 

    0xa6046036,// 207 PAY 181 

    0xab05865d,// 208 PAY 182 

    0x2b5dc5f2,// 209 PAY 183 

    0xd24118ae,// 210 PAY 184 

    0xc89d1408,// 211 PAY 185 

    0x9f889d83,// 212 PAY 186 

    0xbfc95864,// 213 PAY 187 

    0xa85ad47e,// 214 PAY 188 

    0x00519353,// 215 PAY 189 

    0xf0f67131,// 216 PAY 190 

    0xe898f752,// 217 PAY 191 

    0x84b29145,// 218 PAY 192 

    0x89e395fb,// 219 PAY 193 

    0x12d12a40,// 220 PAY 194 

    0x3e3b5045,// 221 PAY 195 

    0x1b819aa9,// 222 PAY 196 

    0xdfdd3fb2,// 223 PAY 197 

    0xb038e4e7,// 224 PAY 198 

    0x4af1c2ce,// 225 PAY 199 

    0x3eaa5454,// 226 PAY 200 

    0x8d87c8fb,// 227 PAY 201 

    0x92c58333,// 228 PAY 202 

    0x62e166d8,// 229 PAY 203 

    0xaf5e09d1,// 230 PAY 204 

    0xab980f01,// 231 PAY 205 

    0x0e5498ba,// 232 PAY 206 

    0xf4dd4325,// 233 PAY 207 

    0x82de3936,// 234 PAY 208 

    0xd2a2cd20,// 235 PAY 209 

    0x389737ee,// 236 PAY 210 

    0x013f44e8,// 237 PAY 211 

    0x8f4c7f2f,// 238 PAY 212 

    0x9e9e7669,// 239 PAY 213 

    0x90eef5d1,// 240 PAY 214 

    0x911be171,// 241 PAY 215 

    0xd13e73d9,// 242 PAY 216 

    0xb39961b2,// 243 PAY 217 

    0xf40257f5,// 244 PAY 218 

    0xa1fa7760,// 245 PAY 219 

    0xa27593fe,// 246 PAY 220 

    0x1392fe83,// 247 PAY 221 

    0x6d70a643,// 248 PAY 222 

    0xc1f0288c,// 249 PAY 223 

    0x2f82e4ce,// 250 PAY 224 

    0x759df7db,// 251 PAY 225 

    0xa10ea940,// 252 PAY 226 

    0xd30b682f,// 253 PAY 227 

    0x3cd26752,// 254 PAY 228 

    0x77c0e9a2,// 255 PAY 229 

    0xe7e99c88,// 256 PAY 230 

    0x435d6722,// 257 PAY 231 

    0x52294bf1,// 258 PAY 232 

    0x17eadfeb,// 259 PAY 233 

    0xf5e893e0,// 260 PAY 234 

    0xd679e0cb,// 261 PAY 235 

    0xd582899f,// 262 PAY 236 

    0x358b7728,// 263 PAY 237 

    0x79929a8b,// 264 PAY 238 

    0xe0027ef2,// 265 PAY 239 

    0x80e4ff19,// 266 PAY 240 

    0x26abd241,// 267 PAY 241 

    0xb86eb277,// 268 PAY 242 

    0xcacc23b7,// 269 PAY 243 

    0x182cab05,// 270 PAY 244 

    0xadc2f6af,// 271 PAY 245 

    0x014ae877,// 272 PAY 246 

    0x3a15a769,// 273 PAY 247 

    0x17f3370d,// 274 PAY 248 

    0x0225224b,// 275 PAY 249 

    0x76f1ec70,// 276 PAY 250 

    0x922d03f0,// 277 PAY 251 

    0x397369e0,// 278 PAY 252 

    0xc98ea5b1,// 279 PAY 253 

    0x1733fd32,// 280 PAY 254 

    0x5efbd610,// 281 PAY 255 

    0x30597265,// 282 PAY 256 

    0xd6bff066,// 283 PAY 257 

    0xd8ef0e39,// 284 PAY 258 

    0xee4d8190,// 285 PAY 259 

    0xdaff2188,// 286 PAY 260 

    0x0f02beda,// 287 PAY 261 

    0x5f6a1e4b,// 288 PAY 262 

    0xfade5b34,// 289 PAY 263 

    0x237ff968,// 290 PAY 264 

    0x142971e8,// 291 PAY 265 

    0x15577223,// 292 PAY 266 

    0x9c355832,// 293 PAY 267 

    0xf0e479d8,// 294 PAY 268 

    0xb242408f,// 295 PAY 269 

    0x8288bcc1,// 296 PAY 270 

    0x6df575ce,// 297 PAY 271 

    0xed50b8ce,// 298 PAY 272 

    0xd217ef50,// 299 PAY 273 

    0xc07a6535,// 300 PAY 274 

    0x8d8dc46b,// 301 PAY 275 

    0x0ac71446,// 302 PAY 276 

    0x2f43836b,// 303 PAY 277 

    0xc9b79406,// 304 PAY 278 

    0x7df053cf,// 305 PAY 279 

    0x69e614cd,// 306 PAY 280 

    0x8886fe25,// 307 PAY 281 

    0x8da3a393,// 308 PAY 282 

    0x87000000,// 309 PAY 283 

/// STA is 1 words. 

/// STA num_pkts       : 218 

/// STA pkt_idx        : 241 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x44 

    0x03c544da // 310 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 80 (0x50) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_sha1_pkt74_tmpl[] = {
    0xb8010050,// 1 CCH   1 

/// ECH cache_idx      : 0x0c 

/// ECH pdu_tag        : 0x00 

    0x000c0000,// 2 ECH   1 

/// SCX is 19 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound save_icv !insert_icv !check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : SHA1 

/// SCX aes_size        : NORMAL_RC4INIT_AES128 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x2 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 40 

    0x08000013,// 3 SCX   1 

    0x8060487e,// 4 SCX   2 

    0x00004200,// 5 SCX   3 

    0x92ab5b2a,// 6 SCX   4 

    0x4dbd6c52,// 7 SCX   5 

    0x46acd331,// 8 SCX   6 

    0x77883071,// 9 SCX   7 

    0x7d4f5a47,// 10 SCX   8 

    0x2ba11cb0,// 11 SCX   9 

    0xd65d6e7b,// 12 SCX  10 

    0xc805bc1e,// 13 SCX  11 

    0x5c6e8987,// 14 SCX  12 

    0xd1b0a35e,// 15 SCX  13 

    0x6312f856,// 16 SCX  14 

    0x372a4cca,// 17 SCX  15 

    0x087b30ea,// 18 SCX  16 

    0x7ef30192,// 19 SCX  17 

    0x7b459bfb,// 20 SCX  18 

    0xc42b101e,// 21 SCX  19 

/// BFD is 3 words. 

/// BFD tot_len        : 935 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 879 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 879 

/// BFD lencrypto      : 144 

/// BFD ofstcrypto     : 668 

/// BFD (ofst+len)cry  : 812 

/// BFD ofstiv         : 428 

/// BFD ofsticv        : 912 

    0x0000036f,// 22 BFD   1 

    0x029c0090,// 23 BFD   2 

    0x039001ac,// 24 BFD   3 

/// MFM is 16 words. 

/// MFM vldnibs        : 7c 

    0x7c002e0f,// 25 MFM   1 

    0x92cd13f8,// 26 MFM   2 

    0x9cac25d4,// 27 MFM   3 

    0x2ebdf839,// 28 MFM   4 

    0x60ec77e7,// 29 MFM   5 

    0x328bc47c,// 30 MFM   6 

    0x0eb16ce0,// 31 MFM   7 

    0xca58becd,// 32 MFM   8 

    0x4d5e55d6,// 33 MFM   9 

    0x8628b06d,// 34 MFM  10 

    0x0e0fc42c,// 35 MFM  11 

    0x495dce63,// 36 MFM  12 

    0x74fe8760,// 37 MFM  13 

    0x854bb8e0,// 38 MFM  14 

    0x57b2c1eb,// 39 MFM  15 

    0xbab5925f,// 40 MFM  16 

/// BDA is 235 words. 

/// BDA size     is 935 (0x3a7) 

/// BDA id       is 0xa0be 

    0x03a7a0be,// 41 BDA   1 

/// PAY Generic Data size   : 935 byte(s) 

/// PAD Buffer Data Pad size   : 1 byte(s) 

    0x6e5bfae0,// 42 PAY   1 

    0x7943758a,// 43 PAY   2 

    0x9143ef99,// 44 PAY   3 

    0x1bb70b28,// 45 PAY   4 

    0x69c23c78,// 46 PAY   5 

    0x13bde055,// 47 PAY   6 

    0x01b1b7d0,// 48 PAY   7 

    0xdd16643e,// 49 PAY   8 

    0x35e24993,// 50 PAY   9 

    0x9e2097a8,// 51 PAY  10 

    0x2aefc1bc,// 52 PAY  11 

    0xe83d4106,// 53 PAY  12 

    0x83ee2a62,// 54 PAY  13 

    0xef970178,// 55 PAY  14 

    0x8838ad4a,// 56 PAY  15 

    0x7c99fd4a,// 57 PAY  16 

    0x40e62d81,// 58 PAY  17 

    0xb74a9ad3,// 59 PAY  18 

    0x6b98bebc,// 60 PAY  19 

    0x54f1c59c,// 61 PAY  20 

    0xa4754fba,// 62 PAY  21 

    0x503c836c,// 63 PAY  22 

    0xd4677536,// 64 PAY  23 

    0xaf873c05,// 65 PAY  24 

    0x1258cdf5,// 66 PAY  25 

    0x0836b495,// 67 PAY  26 

    0x1c4c874b,// 68 PAY  27 

    0x9bb01696,// 69 PAY  28 

    0x74b4c2bd,// 70 PAY  29 

    0x3602ed03,// 71 PAY  30 

    0xb764d3a7,// 72 PAY  31 

    0x362bddbf,// 73 PAY  32 

    0x3c3f1961,// 74 PAY  33 

    0x10eec89d,// 75 PAY  34 

    0xff60380f,// 76 PAY  35 

    0x76a32d58,// 77 PAY  36 

    0x70717367,// 78 PAY  37 

    0xceb2ed54,// 79 PAY  38 

    0x318dc4c8,// 80 PAY  39 

    0xa23aa1f6,// 81 PAY  40 

    0x4fa683a3,// 82 PAY  41 

    0x504b1f01,// 83 PAY  42 

    0x91d454dd,// 84 PAY  43 

    0x413f2df0,// 85 PAY  44 

    0x57ec28c2,// 86 PAY  45 

    0x2b806b96,// 87 PAY  46 

    0x0a6b327a,// 88 PAY  47 

    0x264d75d3,// 89 PAY  48 

    0xad3ab59e,// 90 PAY  49 

    0x7fdc19d9,// 91 PAY  50 

    0x228c22b8,// 92 PAY  51 

    0xd9875fd2,// 93 PAY  52 

    0x42a9ada7,// 94 PAY  53 

    0x4d485edf,// 95 PAY  54 

    0x5f600df8,// 96 PAY  55 

    0x6ef97e41,// 97 PAY  56 

    0x32621879,// 98 PAY  57 

    0xd718f099,// 99 PAY  58 

    0x54c4e205,// 100 PAY  59 

    0xcc37bc67,// 101 PAY  60 

    0x51eb9a28,// 102 PAY  61 

    0x60052a84,// 103 PAY  62 

    0xf23b16c9,// 104 PAY  63 

    0x8181c92c,// 105 PAY  64 

    0x423c6460,// 106 PAY  65 

    0xc20e0cee,// 107 PAY  66 

    0xfa96538d,// 108 PAY  67 

    0x3bc45fe5,// 109 PAY  68 

    0x6c3a42ab,// 110 PAY  69 

    0xf8abd54c,// 111 PAY  70 

    0x2cf6eedb,// 112 PAY  71 

    0xd4f381e4,// 113 PAY  72 

    0x9e6f48ff,// 114 PAY  73 

    0xdce6af13,// 115 PAY  74 

    0x06df2757,// 116 PAY  75 

    0xa9e6ea34,// 117 PAY  76 

    0xa0dafffb,// 118 PAY  77 

    0xe901b5b2,// 119 PAY  78 

    0x6e9417a3,// 120 PAY  79 

    0xed3f6ddc,// 121 PAY  80 

    0xa7ceebe4,// 122 PAY  81 

    0xbc0abd11,// 123 PAY  82 

    0x43498bdf,// 124 PAY  83 

    0x2eee88c3,// 125 PAY  84 

    0x87089588,// 126 PAY  85 

    0x78dbab9c,// 127 PAY  86 

    0x76e46ee5,// 128 PAY  87 

    0xc5156c0f,// 129 PAY  88 

    0x189b3dd9,// 130 PAY  89 

    0x5da610ef,// 131 PAY  90 

    0xeb9ee7dc,// 132 PAY  91 

    0x87144ead,// 133 PAY  92 

    0x266aefe6,// 134 PAY  93 

    0xa91db10e,// 135 PAY  94 

    0x491ca2e7,// 136 PAY  95 

    0x7a0a3962,// 137 PAY  96 

    0x1cad827a,// 138 PAY  97 

    0x27b1c1d2,// 139 PAY  98 

    0xd890569d,// 140 PAY  99 

    0x287b2494,// 141 PAY 100 

    0x69414c28,// 142 PAY 101 

    0xdc92695b,// 143 PAY 102 

    0x2cb2d138,// 144 PAY 103 

    0x320312b0,// 145 PAY 104 

    0xd9a5fb13,// 146 PAY 105 

    0x5f1f7781,// 147 PAY 106 

    0x165a4c9a,// 148 PAY 107 

    0x01cc65ef,// 149 PAY 108 

    0x27b065fd,// 150 PAY 109 

    0xedc29901,// 151 PAY 110 

    0xf36c8678,// 152 PAY 111 

    0x64aa9eb6,// 153 PAY 112 

    0xfc14e015,// 154 PAY 113 

    0x698a93f2,// 155 PAY 114 

    0x981c1261,// 156 PAY 115 

    0x1ce87baa,// 157 PAY 116 

    0x46f848ad,// 158 PAY 117 

    0xaa4246be,// 159 PAY 118 

    0x91970ecb,// 160 PAY 119 

    0xbbeab6d0,// 161 PAY 120 

    0xd048bcd4,// 162 PAY 121 

    0x036763ca,// 163 PAY 122 

    0x73ead135,// 164 PAY 123 

    0x1e1acde0,// 165 PAY 124 

    0x5aca35d8,// 166 PAY 125 

    0x27f29aec,// 167 PAY 126 

    0x488a4e58,// 168 PAY 127 

    0x5cc51821,// 169 PAY 128 

    0x821767e8,// 170 PAY 129 

    0x9e3953e3,// 171 PAY 130 

    0x5f74da4d,// 172 PAY 131 

    0x76263571,// 173 PAY 132 

    0xbf462c2e,// 174 PAY 133 

    0xe7e6aeea,// 175 PAY 134 

    0x510f1d9a,// 176 PAY 135 

    0xa72d2cb8,// 177 PAY 136 

    0xb7c10be1,// 178 PAY 137 

    0xed91aa2b,// 179 PAY 138 

    0x0404c639,// 180 PAY 139 

    0x07d06c73,// 181 PAY 140 

    0x1cf306aa,// 182 PAY 141 

    0xf33b3c4b,// 183 PAY 142 

    0xce1851fe,// 184 PAY 143 

    0x98044f00,// 185 PAY 144 

    0x8f51c7a5,// 186 PAY 145 

    0xfdf461a8,// 187 PAY 146 

    0x818108f1,// 188 PAY 147 

    0xabf7dd2d,// 189 PAY 148 

    0xb66cbfd2,// 190 PAY 149 

    0x449a5c9d,// 191 PAY 150 

    0x20042617,// 192 PAY 151 

    0xac075975,// 193 PAY 152 

    0x53cdae0e,// 194 PAY 153 

    0xc4bb1c38,// 195 PAY 154 

    0x881e13a2,// 196 PAY 155 

    0xeb850728,// 197 PAY 156 

    0xce7a7577,// 198 PAY 157 

    0xff981773,// 199 PAY 158 

    0x3dd24e80,// 200 PAY 159 

    0x92df9fe7,// 201 PAY 160 

    0xab22d160,// 202 PAY 161 

    0xa4500997,// 203 PAY 162 

    0x93535ef4,// 204 PAY 163 

    0x31b37ca3,// 205 PAY 164 

    0xaf8633d3,// 206 PAY 165 

    0x4fc3bc01,// 207 PAY 166 

    0x9ee538a3,// 208 PAY 167 

    0x6e81c741,// 209 PAY 168 

    0xae125204,// 210 PAY 169 

    0xfb114e92,// 211 PAY 170 

    0xf0532ec6,// 212 PAY 171 

    0x72389fd7,// 213 PAY 172 

    0x28df0941,// 214 PAY 173 

    0xec7c5beb,// 215 PAY 174 

    0x44d6f4a8,// 216 PAY 175 

    0xd7e2559f,// 217 PAY 176 

    0x6cee4f61,// 218 PAY 177 

    0x17924530,// 219 PAY 178 

    0xde8ab23e,// 220 PAY 179 

    0xb34b29df,// 221 PAY 180 

    0x91c46f0d,// 222 PAY 181 

    0x00d23a37,// 223 PAY 182 

    0x7be4f512,// 224 PAY 183 

    0xd60f23e0,// 225 PAY 184 

    0x017f0aa7,// 226 PAY 185 

    0x3232e049,// 227 PAY 186 

    0xb5979c1a,// 228 PAY 187 

    0x543bc6a5,// 229 PAY 188 

    0x9fe569c8,// 230 PAY 189 

    0x1b4c72ec,// 231 PAY 190 

    0x2a5b9903,// 232 PAY 191 

    0x3901a4f7,// 233 PAY 192 

    0xd34500b5,// 234 PAY 193 

    0xcd0e751a,// 235 PAY 194 

    0xb25ffa85,// 236 PAY 195 

    0x3a630628,// 237 PAY 196 

    0x4c2afe81,// 238 PAY 197 

    0xdb830619,// 239 PAY 198 

    0xafaf6fca,// 240 PAY 199 

    0x3dae3a24,// 241 PAY 200 

    0x04e4e50f,// 242 PAY 201 

    0x62633588,// 243 PAY 202 

    0xcd39b6b5,// 244 PAY 203 

    0xdd366a6e,// 245 PAY 204 

    0x0d7f6761,// 246 PAY 205 

    0xff415f35,// 247 PAY 206 

    0x740731d9,// 248 PAY 207 

    0x8b7e0607,// 249 PAY 208 

    0xcb12cdfc,// 250 PAY 209 

    0xdc7db7ba,// 251 PAY 210 

    0x3106094c,// 252 PAY 211 

    0xc94e0810,// 253 PAY 212 

    0x326ad469,// 254 PAY 213 

    0x55d22c98,// 255 PAY 214 

    0x545bfea1,// 256 PAY 215 

    0xd8fb8dd1,// 257 PAY 216 

    0x0c4f1cd8,// 258 PAY 217 

    0x6ae742eb,// 259 PAY 218 

    0x08e43677,// 260 PAY 219 

    0xb8d90ad6,// 261 PAY 220 

    0xd40d8ff9,// 262 PAY 221 

    0xf50df376,// 263 PAY 222 

    0x61bf5345,// 264 PAY 223 

    0xf6a16c12,// 265 PAY 224 

    0xba9f6d9b,// 266 PAY 225 

    0x0c721e6f,// 267 PAY 226 

    0xe4c77e4b,// 268 PAY 227 

    0xb7085da7,// 269 PAY 228 

    0x4d289a4b,// 270 PAY 229 

    0x3f704ab6,// 271 PAY 230 

    0x21c9d2fe,// 272 PAY 231 

    0xd722a351,// 273 PAY 232 

    0x4fc2ac4b,// 274 PAY 233 

    0x40434800,// 275 PAY 234 

/// STA is 1 words. 

/// STA num_pkts       : 111 

/// STA pkt_idx        : 124 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x4d 

    0x01f04d6f // 276 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 88 (0x58) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_sha1_pkt75_tmpl[] = {
    0xb8010058,// 1 CCH   1 

/// ECH cache_idx      : 0x02 

/// ECH pdu_tag        : 0x00 

    0x00020000,// 2 ECH   1 

/// SCX is 21 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound !save_icv insert_icv check_icv sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : SHA1 

/// SCX aes_size        : AES256 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x5 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 8 

/// SCX authctx_size    : 40 

    0x00000015,// 3 SCX   1 

    0x80664898,// 4 SCX   2 

    0x00003582,// 5 SCX   3 

    0xe8295049,// 6 SCX   4 

    0x7667f126,// 7 SCX   5 

    0x1906c421,// 8 SCX   6 

    0xccc90b69,// 9 SCX   7 

    0xa3b7f3f4,// 10 SCX   8 

    0xd408c780,// 11 SCX   9 

    0x30cb3452,// 12 SCX  10 

    0x3b17cce8,// 13 SCX  11 

    0x92b1b8f2,// 14 SCX  12 

    0xf34968ef,// 15 SCX  13 

    0xe3ca6dee,// 16 SCX  14 

    0x648ab76b,// 17 SCX  15 

    0xd2104117,// 18 SCX  16 

    0x158782ba,// 19 SCX  17 

    0x87a81d81,// 20 SCX  18 

    0x66faaae6,// 21 SCX  19 

    0xfa3a572b,// 22 SCX  20 

    0x70791114,// 23 SCX  21 

/// BFD is 3 words. 

/// BFD tot_len        : 1523 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 360 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 360 

/// BFD lencrypto      : 24 

/// BFD ofstcrypto     : 316 

/// BFD (ofst+len)cry  : 340 

/// BFD ofstiv         : 252 

/// BFD ofsticv        : 752 

    0x00000168,// 24 BFD   1 

    0x013c0018,// 25 BFD   2 

    0x02f000fc,// 26 BFD   3 

/// MFM is 10 words. 

/// MFM vldnibs        : 49 

    0x49007098,// 27 MFM   1 

    0x18284c09,// 28 MFM   2 

    0xfe37f55a,// 29 MFM   3 

    0xa79afab5,// 30 MFM   4 

    0x754f92ca,// 31 MFM   5 

    0x9497f066,// 32 MFM   6 

    0x9542fef3,// 33 MFM   7 

    0xd2c3bd33,// 34 MFM   8 

    0xde4e00fe,// 35 MFM   9 

    0x92b2f000,// 36 MFM  10 

/// BDA is 382 words. 

/// BDA size     is 1523 (0x5f3) 

/// BDA id       is 0xec5d 

    0x05f3ec5d,// 37 BDA   1 

/// PAY Generic Data size   : 1523 byte(s) 

/// PAD Buffer Data Pad size   : 1 byte(s) 

    0x84fdda40,// 38 PAY   1 

    0x20bdb30f,// 39 PAY   2 

    0xb3951a39,// 40 PAY   3 

    0x9574977c,// 41 PAY   4 

    0x1f7d6fe5,// 42 PAY   5 

    0x80be8f39,// 43 PAY   6 

    0x299cc98e,// 44 PAY   7 

    0xa1eb7d34,// 45 PAY   8 

    0xa11204be,// 46 PAY   9 

    0xe80170fe,// 47 PAY  10 

    0x27f13fd0,// 48 PAY  11 

    0x1fef0790,// 49 PAY  12 

    0xe05e0c39,// 50 PAY  13 

    0x02ea676a,// 51 PAY  14 

    0x4738c840,// 52 PAY  15 

    0x02a0df77,// 53 PAY  16 

    0x0a3c4a26,// 54 PAY  17 

    0xabc613c8,// 55 PAY  18 

    0xbf288444,// 56 PAY  19 

    0xd2a14993,// 57 PAY  20 

    0x9dd8c97e,// 58 PAY  21 

    0x9961bab8,// 59 PAY  22 

    0x51388a07,// 60 PAY  23 

    0xb77b5603,// 61 PAY  24 

    0xaac47a40,// 62 PAY  25 

    0x62e3a73a,// 63 PAY  26 

    0xbf1567ce,// 64 PAY  27 

    0x8cb249fb,// 65 PAY  28 

    0x5cc3df0f,// 66 PAY  29 

    0x087bc034,// 67 PAY  30 

    0x60f3fe3b,// 68 PAY  31 

    0x6f014bbb,// 69 PAY  32 

    0x968d6818,// 70 PAY  33 

    0xf8865bb2,// 71 PAY  34 

    0x6ab26356,// 72 PAY  35 

    0xc1a51bd9,// 73 PAY  36 

    0xf2aabf73,// 74 PAY  37 

    0x51c0d950,// 75 PAY  38 

    0x425b3d1d,// 76 PAY  39 

    0x70458f55,// 77 PAY  40 

    0xfa0fc01e,// 78 PAY  41 

    0x8a2c022e,// 79 PAY  42 

    0x8f97d757,// 80 PAY  43 

    0xe94b50bd,// 81 PAY  44 

    0x56e33aa1,// 82 PAY  45 

    0x99b184d7,// 83 PAY  46 

    0xfb1224aa,// 84 PAY  47 

    0xdf4148e1,// 85 PAY  48 

    0x4b14150a,// 86 PAY  49 

    0x5ce722e9,// 87 PAY  50 

    0x570ee6a3,// 88 PAY  51 

    0x18633896,// 89 PAY  52 

    0xac943f29,// 90 PAY  53 

    0xc46f0abd,// 91 PAY  54 

    0x109b1ff3,// 92 PAY  55 

    0xbd7019d2,// 93 PAY  56 

    0xb13ed464,// 94 PAY  57 

    0x12e3340c,// 95 PAY  58 

    0xdb9b17a9,// 96 PAY  59 

    0x3f31927d,// 97 PAY  60 

    0x24a56c90,// 98 PAY  61 

    0x1de5f8d9,// 99 PAY  62 

    0x0108920b,// 100 PAY  63 

    0xfbfbcc6b,// 101 PAY  64 

    0xb847da45,// 102 PAY  65 

    0xc2612b49,// 103 PAY  66 

    0xdd6617a8,// 104 PAY  67 

    0xc2c5995c,// 105 PAY  68 

    0x63754d97,// 106 PAY  69 

    0x0acdfbe4,// 107 PAY  70 

    0x10c44c65,// 108 PAY  71 

    0x0481bf85,// 109 PAY  72 

    0xfdd3aaf0,// 110 PAY  73 

    0x2d3a31f7,// 111 PAY  74 

    0xd3cfaf91,// 112 PAY  75 

    0xc7e0466c,// 113 PAY  76 

    0xeee3d9bd,// 114 PAY  77 

    0x2ac0f10a,// 115 PAY  78 

    0x3cf2efe7,// 116 PAY  79 

    0xfee5115d,// 117 PAY  80 

    0x7ba2e54c,// 118 PAY  81 

    0xdf2ebb04,// 119 PAY  82 

    0x19de2978,// 120 PAY  83 

    0x92c0e5c8,// 121 PAY  84 

    0x125e6681,// 122 PAY  85 

    0x9fe1639b,// 123 PAY  86 

    0x32ea71fe,// 124 PAY  87 

    0xe5e66d35,// 125 PAY  88 

    0xf90d342a,// 126 PAY  89 

    0xf5a51c8c,// 127 PAY  90 

    0x6d52c87d,// 128 PAY  91 

    0xd2398e8d,// 129 PAY  92 

    0x4bb12088,// 130 PAY  93 

    0x36b0b54d,// 131 PAY  94 

    0x7afe18d6,// 132 PAY  95 

    0x505303e9,// 133 PAY  96 

    0xaee69759,// 134 PAY  97 

    0x8eda9d70,// 135 PAY  98 

    0x2d6b7537,// 136 PAY  99 

    0x1f9043f7,// 137 PAY 100 

    0xa8fd84d9,// 138 PAY 101 

    0x4c409742,// 139 PAY 102 

    0xfbeababb,// 140 PAY 103 

    0x5725e4e8,// 141 PAY 104 

    0x0abef7f2,// 142 PAY 105 

    0xe8716edb,// 143 PAY 106 

    0xac50bba7,// 144 PAY 107 

    0xf86c846c,// 145 PAY 108 

    0x815a61d7,// 146 PAY 109 

    0x9912b7f9,// 147 PAY 110 

    0x8925d10a,// 148 PAY 111 

    0x8d64502e,// 149 PAY 112 

    0x7bf2bdb5,// 150 PAY 113 

    0x967fbaad,// 151 PAY 114 

    0xb147caa8,// 152 PAY 115 

    0x13493382,// 153 PAY 116 

    0xeb8410d1,// 154 PAY 117 

    0x4573a155,// 155 PAY 118 

    0x8c4290f0,// 156 PAY 119 

    0xe0a6b1b0,// 157 PAY 120 

    0x513fbd4e,// 158 PAY 121 

    0xf02beecb,// 159 PAY 122 

    0x15d653cc,// 160 PAY 123 

    0xcbb21213,// 161 PAY 124 

    0xde38b5d3,// 162 PAY 125 

    0xf8f49530,// 163 PAY 126 

    0x499ab83f,// 164 PAY 127 

    0x7e27bb52,// 165 PAY 128 

    0xd86e084b,// 166 PAY 129 

    0x02950e22,// 167 PAY 130 

    0x523e3fc7,// 168 PAY 131 

    0xf8dc55d3,// 169 PAY 132 

    0xa3de63f2,// 170 PAY 133 

    0x91163767,// 171 PAY 134 

    0xf3ac1fe2,// 172 PAY 135 

    0xd3d014f7,// 173 PAY 136 

    0xa05ab35d,// 174 PAY 137 

    0x1c4e90c0,// 175 PAY 138 

    0x4c7b550f,// 176 PAY 139 

    0xbac09ec9,// 177 PAY 140 

    0x83a6e934,// 178 PAY 141 

    0x1f9a48e5,// 179 PAY 142 

    0xfcbfc784,// 180 PAY 143 

    0x808d58ad,// 181 PAY 144 

    0x39bd5c37,// 182 PAY 145 

    0xa590c28b,// 183 PAY 146 

    0x6b3e8175,// 184 PAY 147 

    0xe897c723,// 185 PAY 148 

    0x30d2480c,// 186 PAY 149 

    0x3e2c7b56,// 187 PAY 150 

    0xe6085f0f,// 188 PAY 151 

    0x760a3e29,// 189 PAY 152 

    0xa1810b6e,// 190 PAY 153 

    0xa9c330d2,// 191 PAY 154 

    0xfc2c6339,// 192 PAY 155 

    0x2f724d86,// 193 PAY 156 

    0x8d747bfb,// 194 PAY 157 

    0xb4051c85,// 195 PAY 158 

    0xf184adf1,// 196 PAY 159 

    0x180d4dc0,// 197 PAY 160 

    0x99218fe3,// 198 PAY 161 

    0x515e3c97,// 199 PAY 162 

    0xb5cdfe7d,// 200 PAY 163 

    0xe79a4d2d,// 201 PAY 164 

    0xd0d4a626,// 202 PAY 165 

    0xbfa218a9,// 203 PAY 166 

    0x442bdb78,// 204 PAY 167 

    0x09d1db9f,// 205 PAY 168 

    0xb619fc79,// 206 PAY 169 

    0xc2f10d96,// 207 PAY 170 

    0x622f6926,// 208 PAY 171 

    0xcdf81522,// 209 PAY 172 

    0xf7fb8699,// 210 PAY 173 

    0x66efadb3,// 211 PAY 174 

    0xd94080da,// 212 PAY 175 

    0x57161937,// 213 PAY 176 

    0x167a62d6,// 214 PAY 177 

    0xe10ab55e,// 215 PAY 178 

    0x574abc09,// 216 PAY 179 

    0xc30c2a1d,// 217 PAY 180 

    0x079a3e06,// 218 PAY 181 

    0xe2aaa3e9,// 219 PAY 182 

    0x2ebf09f9,// 220 PAY 183 

    0xda0662c8,// 221 PAY 184 

    0xac4f5540,// 222 PAY 185 

    0xcd628647,// 223 PAY 186 

    0xdca5d8e1,// 224 PAY 187 

    0xe8e2186d,// 225 PAY 188 

    0xf71eab16,// 226 PAY 189 

    0x46542053,// 227 PAY 190 

    0xb2749703,// 228 PAY 191 

    0xd57998ad,// 229 PAY 192 

    0xa38d6bfa,// 230 PAY 193 

    0xcdec1baf,// 231 PAY 194 

    0xddf23f46,// 232 PAY 195 

    0xde0be85a,// 233 PAY 196 

    0x3cb34812,// 234 PAY 197 

    0xe1c30fdb,// 235 PAY 198 

    0x476a27bc,// 236 PAY 199 

    0x447ba0e4,// 237 PAY 200 

    0x46dd3c7e,// 238 PAY 201 

    0x825916cb,// 239 PAY 202 

    0xed18db2b,// 240 PAY 203 

    0x171e175b,// 241 PAY 204 

    0x765dd56b,// 242 PAY 205 

    0x8f39822a,// 243 PAY 206 

    0xb482c2f5,// 244 PAY 207 

    0x8efbc7d1,// 245 PAY 208 

    0x1716626d,// 246 PAY 209 

    0x97396074,// 247 PAY 210 

    0x098ba85c,// 248 PAY 211 

    0x1758e231,// 249 PAY 212 

    0xa2942edc,// 250 PAY 213 

    0x088ffc00,// 251 PAY 214 

    0x68a64093,// 252 PAY 215 

    0x9411f84c,// 253 PAY 216 

    0x3f99a3af,// 254 PAY 217 

    0x96c46df2,// 255 PAY 218 

    0x42246c37,// 256 PAY 219 

    0xfed23de3,// 257 PAY 220 

    0x9fa1a7cb,// 258 PAY 221 

    0xa2199d34,// 259 PAY 222 

    0xbf76e2e8,// 260 PAY 223 

    0x428f1e69,// 261 PAY 224 

    0x91b2a809,// 262 PAY 225 

    0x2cf92a15,// 263 PAY 226 

    0xcbafe4ae,// 264 PAY 227 

    0xc8996674,// 265 PAY 228 

    0x34afc052,// 266 PAY 229 

    0xefef8a10,// 267 PAY 230 

    0xed3c405d,// 268 PAY 231 

    0x23eaca19,// 269 PAY 232 

    0xa5ef9c7e,// 270 PAY 233 

    0x9fe10d09,// 271 PAY 234 

    0x2e4c8f44,// 272 PAY 235 

    0x845e6a32,// 273 PAY 236 

    0x23b36b2b,// 274 PAY 237 

    0x34978cb9,// 275 PAY 238 

    0x47ed8be4,// 276 PAY 239 

    0x0ca55f53,// 277 PAY 240 

    0x13460391,// 278 PAY 241 

    0xe257145d,// 279 PAY 242 

    0x3034a7e3,// 280 PAY 243 

    0xb42026b0,// 281 PAY 244 

    0x514ef3a6,// 282 PAY 245 

    0x3d6c22f1,// 283 PAY 246 

    0x8208e2ce,// 284 PAY 247 

    0x083595ec,// 285 PAY 248 

    0xcb2f7c82,// 286 PAY 249 

    0x364ff57f,// 287 PAY 250 

    0xe1078ddd,// 288 PAY 251 

    0x1f359af7,// 289 PAY 252 

    0x4a1740d9,// 290 PAY 253 

    0x885493ba,// 291 PAY 254 

    0xa022d889,// 292 PAY 255 

    0xc15a3818,// 293 PAY 256 

    0x98fcab8c,// 294 PAY 257 

    0x72c722e0,// 295 PAY 258 

    0xf06cefa6,// 296 PAY 259 

    0x8f50159c,// 297 PAY 260 

    0x4632f114,// 298 PAY 261 

    0x95712a17,// 299 PAY 262 

    0xd39fa6b1,// 300 PAY 263 

    0x9785537b,// 301 PAY 264 

    0xb3d45582,// 302 PAY 265 

    0xd9835292,// 303 PAY 266 

    0x1999705c,// 304 PAY 267 

    0xa01fc4df,// 305 PAY 268 

    0x5b027eb0,// 306 PAY 269 

    0x2e24cd76,// 307 PAY 270 

    0xd8486380,// 308 PAY 271 

    0x1ee435f2,// 309 PAY 272 

    0xed306bc4,// 310 PAY 273 

    0x804ed16a,// 311 PAY 274 

    0x3c7c3f01,// 312 PAY 275 

    0xb1c6d7c4,// 313 PAY 276 

    0x1b18a79a,// 314 PAY 277 

    0x2569869e,// 315 PAY 278 

    0xedba49a2,// 316 PAY 279 

    0x581b928c,// 317 PAY 280 

    0xcfa9f29e,// 318 PAY 281 

    0xbcf3351f,// 319 PAY 282 

    0x4ca4b7e5,// 320 PAY 283 

    0xd9455906,// 321 PAY 284 

    0x65687bfe,// 322 PAY 285 

    0x764edbdc,// 323 PAY 286 

    0x9669dc9b,// 324 PAY 287 

    0xec84aebd,// 325 PAY 288 

    0xe1f9182a,// 326 PAY 289 

    0x2923c4aa,// 327 PAY 290 

    0x871eb7c1,// 328 PAY 291 

    0x9f41f983,// 329 PAY 292 

    0xcd05afad,// 330 PAY 293 

    0x39d5762b,// 331 PAY 294 

    0xa32eb4cc,// 332 PAY 295 

    0x6c2e4714,// 333 PAY 296 

    0xbd3cba54,// 334 PAY 297 

    0xb963613a,// 335 PAY 298 

    0x75203433,// 336 PAY 299 

    0x113da8a7,// 337 PAY 300 

    0x62a94074,// 338 PAY 301 

    0x9acbfd53,// 339 PAY 302 

    0x0b692a4e,// 340 PAY 303 

    0xe7f3ac18,// 341 PAY 304 

    0x74be4bee,// 342 PAY 305 

    0xf707c4d1,// 343 PAY 306 

    0x8805c470,// 344 PAY 307 

    0x4f37c9be,// 345 PAY 308 

    0x9f8239a2,// 346 PAY 309 

    0x74de69de,// 347 PAY 310 

    0x2cf815c8,// 348 PAY 311 

    0x20dbb7cc,// 349 PAY 312 

    0xd9218a34,// 350 PAY 313 

    0x79fee165,// 351 PAY 314 

    0xc96c537e,// 352 PAY 315 

    0xe4f61c1a,// 353 PAY 316 

    0xee5a4340,// 354 PAY 317 

    0xd2339bec,// 355 PAY 318 

    0x2138ab1e,// 356 PAY 319 

    0x15d88abd,// 357 PAY 320 

    0x0451eaf3,// 358 PAY 321 

    0x591772b0,// 359 PAY 322 

    0xaf5e50c4,// 360 PAY 323 

    0x44b9b0e8,// 361 PAY 324 

    0x2c979226,// 362 PAY 325 

    0x40cb8359,// 363 PAY 326 

    0x62fdae52,// 364 PAY 327 

    0x2b808aa6,// 365 PAY 328 

    0x44817ea1,// 366 PAY 329 

    0x8dcc98a9,// 367 PAY 330 

    0x37bdecc8,// 368 PAY 331 

    0x286f31a4,// 369 PAY 332 

    0xbad90edd,// 370 PAY 333 

    0x2e6dfd7f,// 371 PAY 334 

    0xc345592b,// 372 PAY 335 

    0x25b987f2,// 373 PAY 336 

    0x3a293d68,// 374 PAY 337 

    0x83e9f655,// 375 PAY 338 

    0x347cecb9,// 376 PAY 339 

    0xf0aa4076,// 377 PAY 340 

    0xa3fd2590,// 378 PAY 341 

    0x78f8bb30,// 379 PAY 342 

    0x9c1acba1,// 380 PAY 343 

    0x23c846e7,// 381 PAY 344 

    0x684e704b,// 382 PAY 345 

    0x8164639e,// 383 PAY 346 

    0x6fb2989a,// 384 PAY 347 

    0x5ae00fa0,// 385 PAY 348 

    0xd68f8d8e,// 386 PAY 349 

    0x4fb3f92e,// 387 PAY 350 

    0x6e232355,// 388 PAY 351 

    0xb33936da,// 389 PAY 352 

    0x1cadf46d,// 390 PAY 353 

    0xb92f67d9,// 391 PAY 354 

    0x0d58f2c7,// 392 PAY 355 

    0x5b481b01,// 393 PAY 356 

    0x989762ff,// 394 PAY 357 

    0x8ee550f2,// 395 PAY 358 

    0xb0e91581,// 396 PAY 359 

    0xa56f2c56,// 397 PAY 360 

    0x3c957b1b,// 398 PAY 361 

    0x7473d6ae,// 399 PAY 362 

    0x261eaf06,// 400 PAY 363 

    0xd34850e6,// 401 PAY 364 

    0x31444d71,// 402 PAY 365 

    0x62649544,// 403 PAY 366 

    0x3caf2bbd,// 404 PAY 367 

    0x243e5ceb,// 405 PAY 368 

    0x5cd118cb,// 406 PAY 369 

    0x16489fb9,// 407 PAY 370 

    0x0fb3080a,// 408 PAY 371 

    0x9a3de689,// 409 PAY 372 

    0x802e6100,// 410 PAY 373 

    0xce4393a4,// 411 PAY 374 

    0x7abe2e7f,// 412 PAY 375 

    0xe68ac8a4,// 413 PAY 376 

    0xbf4ca502,// 414 PAY 377 

    0x97b083be,// 415 PAY 378 

    0x43aaa914,// 416 PAY 379 

    0xbeab49bf,// 417 PAY 380 

    0xdeab6000,// 418 PAY 381 

/// STA is 1 words. 

/// STA num_pkts       : 147 

/// STA pkt_idx        : 180 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x96 

    0x02d09693 // 419 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 80 (0x50) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_sha1_pkt76_tmpl[] = {
    0xb8010050,// 1 CCH   1 

/// ECH cache_idx      : 0x05 

/// ECH pdu_tag        : 0x00 

    0x00050000,// 2 ECH   1 

/// SCX is 19 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound !save_icv !insert_icv check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : SHA1 

/// SCX aes_size        : NORMAL_RC4INIT_AES128 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x5 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 40 

    0x08000013,// 3 SCX   1 

    0x8060483a,// 4 SCX   2 

    0x00001500,// 5 SCX   3 

    0x014c8dc1,// 6 SCX   4 

    0x855a7b27,// 7 SCX   5 

    0xd210aede,// 8 SCX   6 

    0x8805dc62,// 9 SCX   7 

    0xfe73a041,// 10 SCX   8 

    0x96bd2bbc,// 11 SCX   9 

    0x7547e3d5,// 12 SCX  10 

    0x83ef82cb,// 13 SCX  11 

    0x747f81d8,// 14 SCX  12 

    0xc2b3ad7a,// 15 SCX  13 

    0x38d45a44,// 16 SCX  14 

    0x616c6f35,// 17 SCX  15 

    0x825e7338,// 18 SCX  16 

    0xebf32769,// 19 SCX  17 

    0xa7603f06,// 20 SCX  18 

    0xe898e59c,// 21 SCX  19 

/// BFD is 3 words. 

/// BFD tot_len        : 1654 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 396 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 396 

/// BFD lencrypto      : 216 

/// BFD ofstcrypto     : 32 

/// BFD (ofst+len)cry  : 248 

/// BFD ofstiv         : 4 

/// BFD ofsticv        : 688 

    0x0000018c,// 22 BFD   1 

    0x002000d8,// 23 BFD   2 

    0x02b00004,// 24 BFD   3 

/// MFM is 3 words. 

/// MFM vldnibs        : f 

    0x0f009be2,// 25 MFM   1 

    0x0cc5bef4,// 26 MFM   2 

    0xaf300000,// 27 MFM   3 

/// BDA is 415 words. 

/// BDA size     is 1654 (0x676) 

/// BDA id       is 0xd76a 

    0x0676d76a,// 28 BDA   1 

/// PAY Generic Data size   : 1654 byte(s) 

/// PAD Buffer Data Pad size   : 2 byte(s) 

    0x44bf5494,// 29 PAY   1 

    0x0b9c32be,// 30 PAY   2 

    0x4ae85f49,// 31 PAY   3 

    0x0423034f,// 32 PAY   4 

    0xbcc4fc99,// 33 PAY   5 

    0xccdcc124,// 34 PAY   6 

    0xe4f08bb7,// 35 PAY   7 

    0xf0daccf4,// 36 PAY   8 

    0xd6a56283,// 37 PAY   9 

    0x4808f5cb,// 38 PAY  10 

    0x7b1f2e9d,// 39 PAY  11 

    0xa3670bf5,// 40 PAY  12 

    0x91999a02,// 41 PAY  13 

    0xb3937bb7,// 42 PAY  14 

    0x19bae9dc,// 43 PAY  15 

    0x1bb6d6de,// 44 PAY  16 

    0xcab62a40,// 45 PAY  17 

    0x61c167ed,// 46 PAY  18 

    0x43bfaabb,// 47 PAY  19 

    0x60e6b5fd,// 48 PAY  20 

    0x7d0dceaa,// 49 PAY  21 

    0xe3566985,// 50 PAY  22 

    0x2a49d7c6,// 51 PAY  23 

    0x8d9cde47,// 52 PAY  24 

    0xef5aabbe,// 53 PAY  25 

    0x8d2c85d4,// 54 PAY  26 

    0x800e0c2b,// 55 PAY  27 

    0x5e52e025,// 56 PAY  28 

    0x144c513f,// 57 PAY  29 

    0x762a438d,// 58 PAY  30 

    0xbe9fa7ef,// 59 PAY  31 

    0x68ee61f1,// 60 PAY  32 

    0x6ec8a94e,// 61 PAY  33 

    0x8831fabd,// 62 PAY  34 

    0xa75bc0d7,// 63 PAY  35 

    0xaabda89d,// 64 PAY  36 

    0xff67fd0f,// 65 PAY  37 

    0x4c7342c7,// 66 PAY  38 

    0x4a11f624,// 67 PAY  39 

    0x776f03ab,// 68 PAY  40 

    0xa349d808,// 69 PAY  41 

    0xa4ac485a,// 70 PAY  42 

    0x083bd15d,// 71 PAY  43 

    0x46942159,// 72 PAY  44 

    0x95b3ea7a,// 73 PAY  45 

    0x177475a5,// 74 PAY  46 

    0xffe15719,// 75 PAY  47 

    0x81ca77d0,// 76 PAY  48 

    0x67de2dbf,// 77 PAY  49 

    0x619598e2,// 78 PAY  50 

    0x4eee8712,// 79 PAY  51 

    0x5bffc924,// 80 PAY  52 

    0xbe616b89,// 81 PAY  53 

    0xf1ebd006,// 82 PAY  54 

    0x6336c4a2,// 83 PAY  55 

    0xb567322a,// 84 PAY  56 

    0xd0050576,// 85 PAY  57 

    0xcb0fdc24,// 86 PAY  58 

    0xc2f0a959,// 87 PAY  59 

    0xcee69bd2,// 88 PAY  60 

    0xb8f791ea,// 89 PAY  61 

    0xbe6297f7,// 90 PAY  62 

    0x690b9f67,// 91 PAY  63 

    0x96f6c2b3,// 92 PAY  64 

    0xdc7cc3f8,// 93 PAY  65 

    0xde71f785,// 94 PAY  66 

    0x67640147,// 95 PAY  67 

    0xa782817f,// 96 PAY  68 

    0x8c3b1ea1,// 97 PAY  69 

    0x153c4dd3,// 98 PAY  70 

    0x98799afa,// 99 PAY  71 

    0xced99272,// 100 PAY  72 

    0x3fef0fd3,// 101 PAY  73 

    0x06067513,// 102 PAY  74 

    0x1e45d32c,// 103 PAY  75 

    0xd00bc1d0,// 104 PAY  76 

    0x77a37f85,// 105 PAY  77 

    0x41d138fa,// 106 PAY  78 

    0xcef437a6,// 107 PAY  79 

    0x19dbbc2c,// 108 PAY  80 

    0x98e4156a,// 109 PAY  81 

    0x2e4bb72b,// 110 PAY  82 

    0xcf4d4a70,// 111 PAY  83 

    0xaedbe741,// 112 PAY  84 

    0x544c6254,// 113 PAY  85 

    0x9c67e2f4,// 114 PAY  86 

    0x5535641d,// 115 PAY  87 

    0x2594b87d,// 116 PAY  88 

    0x5ce8cb2e,// 117 PAY  89 

    0x09eb1073,// 118 PAY  90 

    0x84179727,// 119 PAY  91 

    0xa8a05491,// 120 PAY  92 

    0x2e26c25d,// 121 PAY  93 

    0x30eb60b7,// 122 PAY  94 

    0xe1fe83e8,// 123 PAY  95 

    0xeea12ae5,// 124 PAY  96 

    0x4ba2f204,// 125 PAY  97 

    0xcf46af54,// 126 PAY  98 

    0x7b673d7f,// 127 PAY  99 

    0x34e5ca05,// 128 PAY 100 

    0xb218a4e7,// 129 PAY 101 

    0x96f2d1a6,// 130 PAY 102 

    0xc848785f,// 131 PAY 103 

    0x557749ac,// 132 PAY 104 

    0xa4f42d5c,// 133 PAY 105 

    0xff464575,// 134 PAY 106 

    0x34ceadcb,// 135 PAY 107 

    0x3f791e63,// 136 PAY 108 

    0xb7deac31,// 137 PAY 109 

    0x4dda39d9,// 138 PAY 110 

    0x68411e3c,// 139 PAY 111 

    0xf271b756,// 140 PAY 112 

    0x81eb8ca0,// 141 PAY 113 

    0xbfdd9c48,// 142 PAY 114 

    0x921e1c2f,// 143 PAY 115 

    0xa72ab4dd,// 144 PAY 116 

    0x5f0f0d35,// 145 PAY 117 

    0xf45d6678,// 146 PAY 118 

    0x38d25461,// 147 PAY 119 

    0x9c80b547,// 148 PAY 120 

    0x40652c6b,// 149 PAY 121 

    0x41975b31,// 150 PAY 122 

    0x3f86bafb,// 151 PAY 123 

    0x61785b62,// 152 PAY 124 

    0x90c5bc51,// 153 PAY 125 

    0x63cf25a3,// 154 PAY 126 

    0xb7c6a057,// 155 PAY 127 

    0x4c7598fc,// 156 PAY 128 

    0x257fdd9e,// 157 PAY 129 

    0x030f4e13,// 158 PAY 130 

    0x003581fb,// 159 PAY 131 

    0x49ac8389,// 160 PAY 132 

    0x55fa427d,// 161 PAY 133 

    0xb4ec7ba8,// 162 PAY 134 

    0xb7f6f4f5,// 163 PAY 135 

    0x4f21a5b0,// 164 PAY 136 

    0xe53b4a94,// 165 PAY 137 

    0x87ac8444,// 166 PAY 138 

    0xefce69f7,// 167 PAY 139 

    0xcb3edfed,// 168 PAY 140 

    0xab489494,// 169 PAY 141 

    0xd575dc07,// 170 PAY 142 

    0x60360898,// 171 PAY 143 

    0x197eea18,// 172 PAY 144 

    0xe49ce216,// 173 PAY 145 

    0xa3eec54f,// 174 PAY 146 

    0x3fe70785,// 175 PAY 147 

    0x8af5fd68,// 176 PAY 148 

    0x2dfff093,// 177 PAY 149 

    0x1886bb99,// 178 PAY 150 

    0xc5cbbba2,// 179 PAY 151 

    0xa92c68c5,// 180 PAY 152 

    0xc4436048,// 181 PAY 153 

    0xa4637da6,// 182 PAY 154 

    0x9e316e59,// 183 PAY 155 

    0x05997632,// 184 PAY 156 

    0x8fb7c7df,// 185 PAY 157 

    0x8299ef87,// 186 PAY 158 

    0x5760ea36,// 187 PAY 159 

    0x655fa70b,// 188 PAY 160 

    0x8ba83105,// 189 PAY 161 

    0x4f3a60a1,// 190 PAY 162 

    0xd4aab2eb,// 191 PAY 163 

    0x1bf553fc,// 192 PAY 164 

    0x757fc414,// 193 PAY 165 

    0x2f3cec51,// 194 PAY 166 

    0x0fecae9a,// 195 PAY 167 

    0x60b66947,// 196 PAY 168 

    0x2267959a,// 197 PAY 169 

    0x3eecf956,// 198 PAY 170 

    0xbc926fa1,// 199 PAY 171 

    0xe3d37da7,// 200 PAY 172 

    0x60556e4d,// 201 PAY 173 

    0x2c5393e5,// 202 PAY 174 

    0x4fb0aa2a,// 203 PAY 175 

    0x6152a41b,// 204 PAY 176 

    0xd3f0fc81,// 205 PAY 177 

    0x849eb8c2,// 206 PAY 178 

    0x9261c6c6,// 207 PAY 179 

    0x01c379dc,// 208 PAY 180 

    0xad3048b1,// 209 PAY 181 

    0x0d6a0fa4,// 210 PAY 182 

    0xeba60c10,// 211 PAY 183 

    0x764ebdba,// 212 PAY 184 

    0xec3cb7cc,// 213 PAY 185 

    0x5c896468,// 214 PAY 186 

    0x1ccd07b6,// 215 PAY 187 

    0xfa588fa8,// 216 PAY 188 

    0xb261a581,// 217 PAY 189 

    0xf4d1a90a,// 218 PAY 190 

    0xeece991f,// 219 PAY 191 

    0xf9c54678,// 220 PAY 192 

    0x87d239ee,// 221 PAY 193 

    0xa2430abe,// 222 PAY 194 

    0x22a195f1,// 223 PAY 195 

    0x5c2ddc53,// 224 PAY 196 

    0x597e09e5,// 225 PAY 197 

    0xa5bc0319,// 226 PAY 198 

    0x194cf783,// 227 PAY 199 

    0x09b1d463,// 228 PAY 200 

    0xca956950,// 229 PAY 201 

    0xfcc7bfc3,// 230 PAY 202 

    0x4eac2c02,// 231 PAY 203 

    0x549b2c1b,// 232 PAY 204 

    0x07c11659,// 233 PAY 205 

    0xacf809ce,// 234 PAY 206 

    0x6be8b89a,// 235 PAY 207 

    0x8b1e799e,// 236 PAY 208 

    0x3ae1f2f6,// 237 PAY 209 

    0x7e8f7e12,// 238 PAY 210 

    0x06d9baa2,// 239 PAY 211 

    0x86c914a9,// 240 PAY 212 

    0xb33678b1,// 241 PAY 213 

    0x59298f87,// 242 PAY 214 

    0xa1c56593,// 243 PAY 215 

    0x1bec1270,// 244 PAY 216 

    0x25c44001,// 245 PAY 217 

    0x6f8e81d2,// 246 PAY 218 

    0xce9e2a32,// 247 PAY 219 

    0x35fc45ce,// 248 PAY 220 

    0x43c89c5a,// 249 PAY 221 

    0x3a7c85ce,// 250 PAY 222 

    0xd3db6328,// 251 PAY 223 

    0x4e87e803,// 252 PAY 224 

    0x0ebdda92,// 253 PAY 225 

    0x03a33cfc,// 254 PAY 226 

    0xb832e011,// 255 PAY 227 

    0x0d4c1d7e,// 256 PAY 228 

    0x1e202416,// 257 PAY 229 

    0xc5a4951a,// 258 PAY 230 

    0x584b01a4,// 259 PAY 231 

    0x9c5d70fc,// 260 PAY 232 

    0x486750e5,// 261 PAY 233 

    0xed4ddd57,// 262 PAY 234 

    0x01ab6949,// 263 PAY 235 

    0x123b734b,// 264 PAY 236 

    0xd37a76f5,// 265 PAY 237 

    0x7699881f,// 266 PAY 238 

    0x9df0fde9,// 267 PAY 239 

    0x693a2ecf,// 268 PAY 240 

    0x6c36e477,// 269 PAY 241 

    0x66ff2416,// 270 PAY 242 

    0x2075354b,// 271 PAY 243 

    0x1f51569e,// 272 PAY 244 

    0x088ac978,// 273 PAY 245 

    0xfd508690,// 274 PAY 246 

    0x7b098068,// 275 PAY 247 

    0x53085c4e,// 276 PAY 248 

    0xc09a210a,// 277 PAY 249 

    0x3fd5cf21,// 278 PAY 250 

    0x94414940,// 279 PAY 251 

    0x084dfaed,// 280 PAY 252 

    0x7ade8c5f,// 281 PAY 253 

    0x47ae005f,// 282 PAY 254 

    0x8b08cd18,// 283 PAY 255 

    0xe7747e41,// 284 PAY 256 

    0xc434a1a7,// 285 PAY 257 

    0x4be3b573,// 286 PAY 258 

    0x178a4e8b,// 287 PAY 259 

    0xf04a717d,// 288 PAY 260 

    0x41e2c8a8,// 289 PAY 261 

    0x18782cab,// 290 PAY 262 

    0xc4d1fa5b,// 291 PAY 263 

    0x3c9ccfe6,// 292 PAY 264 

    0xf96be32c,// 293 PAY 265 

    0x94cb32c5,// 294 PAY 266 

    0x914d0a12,// 295 PAY 267 

    0x5e746b05,// 296 PAY 268 

    0xa188f8eb,// 297 PAY 269 

    0xed97b84c,// 298 PAY 270 

    0x7e191d23,// 299 PAY 271 

    0xe01e2df2,// 300 PAY 272 

    0xa1a77f68,// 301 PAY 273 

    0x0852fd48,// 302 PAY 274 

    0xf3523617,// 303 PAY 275 

    0x5108f46f,// 304 PAY 276 

    0x7c5e737e,// 305 PAY 277 

    0x59987233,// 306 PAY 278 

    0x777478a4,// 307 PAY 279 

    0x1034605a,// 308 PAY 280 

    0xb796e67e,// 309 PAY 281 

    0x11ab7e7a,// 310 PAY 282 

    0xb23bda64,// 311 PAY 283 

    0x0d81845d,// 312 PAY 284 

    0x0e54bf65,// 313 PAY 285 

    0x180eddc0,// 314 PAY 286 

    0x4357768e,// 315 PAY 287 

    0x13765849,// 316 PAY 288 

    0x26fd3949,// 317 PAY 289 

    0xd5d30d73,// 318 PAY 290 

    0xac3b2c22,// 319 PAY 291 

    0x253ee495,// 320 PAY 292 

    0xbb7689e4,// 321 PAY 293 

    0xfcfd595d,// 322 PAY 294 

    0xcd1055bc,// 323 PAY 295 

    0xed9bc390,// 324 PAY 296 

    0xf5ed6739,// 325 PAY 297 

    0x5cb92cf2,// 326 PAY 298 

    0x33520483,// 327 PAY 299 

    0x9dbbb7fb,// 328 PAY 300 

    0x985a13b9,// 329 PAY 301 

    0x50645dc6,// 330 PAY 302 

    0xe5752864,// 331 PAY 303 

    0x5da47299,// 332 PAY 304 

    0x113a2391,// 333 PAY 305 

    0xc3a565ff,// 334 PAY 306 

    0x046b34b3,// 335 PAY 307 

    0x2dc89e23,// 336 PAY 308 

    0xb5fb9ddb,// 337 PAY 309 

    0xc1ac1bc4,// 338 PAY 310 

    0x46a345ea,// 339 PAY 311 

    0x6f42c6ce,// 340 PAY 312 

    0x54ee0304,// 341 PAY 313 

    0x9c45443e,// 342 PAY 314 

    0xe24c4d24,// 343 PAY 315 

    0x9b588071,// 344 PAY 316 

    0x0b5aeaf5,// 345 PAY 317 

    0x6c056462,// 346 PAY 318 

    0x22abaf9f,// 347 PAY 319 

    0x38e66dbb,// 348 PAY 320 

    0x3167cd72,// 349 PAY 321 

    0x21094064,// 350 PAY 322 

    0xf3a46c21,// 351 PAY 323 

    0x968cbe51,// 352 PAY 324 

    0xa323ea3b,// 353 PAY 325 

    0xacc772f3,// 354 PAY 326 

    0x63bc447f,// 355 PAY 327 

    0x2bdcc64d,// 356 PAY 328 

    0xdc20f80f,// 357 PAY 329 

    0x611e0178,// 358 PAY 330 

    0x1f3aa337,// 359 PAY 331 

    0x2629bcc1,// 360 PAY 332 

    0x62d2fb14,// 361 PAY 333 

    0x384417c2,// 362 PAY 334 

    0x2f5b797c,// 363 PAY 335 

    0x614db4d1,// 364 PAY 336 

    0xb5b061be,// 365 PAY 337 

    0x38dfc035,// 366 PAY 338 

    0x15b05609,// 367 PAY 339 

    0x936a27e1,// 368 PAY 340 

    0x946fd56c,// 369 PAY 341 

    0xe8626c78,// 370 PAY 342 

    0x7c47244f,// 371 PAY 343 

    0x6fd290e0,// 372 PAY 344 

    0xd40df44f,// 373 PAY 345 

    0x41ca1b3b,// 374 PAY 346 

    0xe03d8b15,// 375 PAY 347 

    0x2097f288,// 376 PAY 348 

    0xfb49f753,// 377 PAY 349 

    0x2aa486d3,// 378 PAY 350 

    0xaf55b21f,// 379 PAY 351 

    0x34a39c1b,// 380 PAY 352 

    0xc9d7bedf,// 381 PAY 353 

    0xe443048f,// 382 PAY 354 

    0xa9489540,// 383 PAY 355 

    0x92192063,// 384 PAY 356 

    0x3a5b8a62,// 385 PAY 357 

    0xe60e380b,// 386 PAY 358 

    0x85250d9d,// 387 PAY 359 

    0x145927b4,// 388 PAY 360 

    0xc967e939,// 389 PAY 361 

    0x0b0fcbaa,// 390 PAY 362 

    0x0100daca,// 391 PAY 363 

    0xd86886d4,// 392 PAY 364 

    0x1bdb8650,// 393 PAY 365 

    0x5a7e3775,// 394 PAY 366 

    0xb2bda177,// 395 PAY 367 

    0x276db8c4,// 396 PAY 368 

    0x16c629cd,// 397 PAY 369 

    0x38bee713,// 398 PAY 370 

    0x2556ea74,// 399 PAY 371 

    0x3b48e94c,// 400 PAY 372 

    0x10c8316d,// 401 PAY 373 

    0x3fc92b4d,// 402 PAY 374 

    0x0c88b02e,// 403 PAY 375 

    0xe113bbbf,// 404 PAY 376 

    0x7b0c63b9,// 405 PAY 377 

    0x55f5438e,// 406 PAY 378 

    0x12191ac5,// 407 PAY 379 

    0xa36937d3,// 408 PAY 380 

    0xaa6c6a38,// 409 PAY 381 

    0xa241ce17,// 410 PAY 382 

    0x9e7545c6,// 411 PAY 383 

    0x3d9ced0f,// 412 PAY 384 

    0xab78f534,// 413 PAY 385 

    0xf62d7e8e,// 414 PAY 386 

    0x6457d20b,// 415 PAY 387 

    0x7e2d2322,// 416 PAY 388 

    0x5d3a965e,// 417 PAY 389 

    0x3fd9c0b1,// 418 PAY 390 

    0x12baea22,// 419 PAY 391 

    0x9008b121,// 420 PAY 392 

    0xc1115367,// 421 PAY 393 

    0x69407d77,// 422 PAY 394 

    0xee559f81,// 423 PAY 395 

    0xd32b7c56,// 424 PAY 396 

    0x73746090,// 425 PAY 397 

    0x9cb95a44,// 426 PAY 398 

    0xdd67b5de,// 427 PAY 399 

    0xa3d14182,// 428 PAY 400 

    0xb62945e4,// 429 PAY 401 

    0xb2c53f79,// 430 PAY 402 

    0x4277b122,// 431 PAY 403 

    0x8b043f88,// 432 PAY 404 

    0x90c43bac,// 433 PAY 405 

    0x7b2ea867,// 434 PAY 406 

    0xf27064b6,// 435 PAY 407 

    0x5a1e1a92,// 436 PAY 408 

    0x00dc00b1,// 437 PAY 409 

    0x8f216257,// 438 PAY 410 

    0xa0e3d751,// 439 PAY 411 

    0x5be66629,// 440 PAY 412 

    0xa81dd09a,// 441 PAY 413 

    0x7c530000,// 442 PAY 414 

/// STA is 1 words. 

/// STA num_pkts       : 235 

/// STA pkt_idx        : 178 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x1c 

    0x02c81ceb // 443 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 80 (0x50) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_sha1_pkt77_tmpl[] = {
    0xb8010050,// 1 CCH   1 

/// ECH cache_idx      : 0x08 

/// ECH pdu_tag        : 0x00 

    0x00080000,// 2 ECH   1 

/// SCX is 19 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound save_icv insert_icv check_icv !sctx_iv  

/// SCX exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : SHA1 

/// SCX aes_size        : RC4UPDT_AES192 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x1 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 40 

    0x00000013,// 3 SCX   1 

    0x806548ab,// 4 SCX   2 

    0x00007142,// 5 SCX   3 

    0xa65a25b3,// 6 SCX   4 

    0x49cd7633,// 7 SCX   5 

    0x3bf24f47,// 8 SCX   6 

    0x68056339,// 9 SCX   7 

    0x5e1db01c,// 10 SCX   8 

    0xe7d86b9c,// 11 SCX   9 

    0xb04b6752,// 12 SCX  10 

    0xd9c24c37,// 13 SCX  11 

    0x21b59304,// 14 SCX  12 

    0x610a306d,// 15 SCX  13 

    0xa56920e5,// 16 SCX  14 

    0x849781ea,// 17 SCX  15 

    0xfa5f4a3b,// 18 SCX  16 

    0xd584207f,// 19 SCX  17 

    0x8350e42b,// 20 SCX  18 

    0x71b40a05,// 21 SCX  19 

/// BFD is 3 words. 

/// BFD tot_len        : 683 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 572 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 572 

/// BFD lencrypto      : 232 

/// BFD ofstcrypto     : 304 

/// BFD (ofst+len)cry  : 536 

/// BFD ofstiv         : 232 

/// BFD ofsticv        : 620 

    0x0000023c,// 22 BFD   1 

    0x013000e8,// 23 BFD   2 

    0x026c00e8,// 24 BFD   3 

/// MFM is 12 words. 

/// MFM vldnibs        : 58 

    0x5800b37f,// 25 MFM   1 

    0xbb445d1c,// 26 MFM   2 

    0xed18f9bc,// 27 MFM   3 

    0xa279abf0,// 28 MFM   4 

    0xd6d796dc,// 29 MFM   5 

    0x5fd71a8d,// 30 MFM   6 

    0x974ebe86,// 31 MFM   7 

    0xdc50ec0a,// 32 MFM   8 

    0x32bbac79,// 33 MFM   9 

    0x34f8ffcd,// 34 MFM  10 

    0xeee986b3,// 35 MFM  11 

    0xa1f90000,// 36 MFM  12 

/// BDA is 172 words. 

/// BDA size     is 683 (0x2ab) 

/// BDA id       is 0xaa5 

    0x02ab0aa5,// 37 BDA   1 

/// PAY Generic Data size   : 683 byte(s) 

/// PAD Buffer Data Pad size   : 1 byte(s) 

    0xf4fe11c2,// 38 PAY   1 

    0x911ab0d8,// 39 PAY   2 

    0xfcbdbfac,// 40 PAY   3 

    0x1c24dfad,// 41 PAY   4 

    0xea1284b5,// 42 PAY   5 

    0x41c8b4f6,// 43 PAY   6 

    0x5e2eb704,// 44 PAY   7 

    0x00207c48,// 45 PAY   8 

    0xd25d2875,// 46 PAY   9 

    0xe16f2837,// 47 PAY  10 

    0x85830de6,// 48 PAY  11 

    0xf7ef0c99,// 49 PAY  12 

    0xc443a05b,// 50 PAY  13 

    0x6a24aa0f,// 51 PAY  14 

    0x2a0ea680,// 52 PAY  15 

    0x45e8e5dc,// 53 PAY  16 

    0xe7eb9fb1,// 54 PAY  17 

    0x2ddc9d57,// 55 PAY  18 

    0x20fff8ab,// 56 PAY  19 

    0xe7b753ae,// 57 PAY  20 

    0xe601207b,// 58 PAY  21 

    0x90845309,// 59 PAY  22 

    0x73072838,// 60 PAY  23 

    0xb3777a9d,// 61 PAY  24 

    0x5e6b46a3,// 62 PAY  25 

    0x4eb4abad,// 63 PAY  26 

    0xdfd3e496,// 64 PAY  27 

    0x0912555f,// 65 PAY  28 

    0x7f572fb5,// 66 PAY  29 

    0x961a230a,// 67 PAY  30 

    0xa18ee60f,// 68 PAY  31 

    0x57a1404a,// 69 PAY  32 

    0x1e4a53e7,// 70 PAY  33 

    0x9a02d908,// 71 PAY  34 

    0xa244210c,// 72 PAY  35 

    0xaf934b73,// 73 PAY  36 

    0x0672c857,// 74 PAY  37 

    0x217d0ed2,// 75 PAY  38 

    0x465b3f07,// 76 PAY  39 

    0x9dcf2a29,// 77 PAY  40 

    0xbac8a058,// 78 PAY  41 

    0x5639c86f,// 79 PAY  42 

    0x696e01f1,// 80 PAY  43 

    0xe71b8207,// 81 PAY  44 

    0x98691494,// 82 PAY  45 

    0xf648b06b,// 83 PAY  46 

    0x7ad3d103,// 84 PAY  47 

    0x96f6c29c,// 85 PAY  48 

    0x2a26d336,// 86 PAY  49 

    0xc2097981,// 87 PAY  50 

    0xdf17a32d,// 88 PAY  51 

    0xc338c828,// 89 PAY  52 

    0x371ae6f6,// 90 PAY  53 

    0xd069de54,// 91 PAY  54 

    0x3d4d07eb,// 92 PAY  55 

    0x09a2c976,// 93 PAY  56 

    0xda0d6083,// 94 PAY  57 

    0x120e961f,// 95 PAY  58 

    0xf63663b8,// 96 PAY  59 

    0x4e05297a,// 97 PAY  60 

    0xe8a415eb,// 98 PAY  61 

    0x9555a236,// 99 PAY  62 

    0x51f616a6,// 100 PAY  63 

    0xad2f01ee,// 101 PAY  64 

    0x30f979c8,// 102 PAY  65 

    0x10231dae,// 103 PAY  66 

    0xaa55d3b7,// 104 PAY  67 

    0x2b495841,// 105 PAY  68 

    0x5ccb89b4,// 106 PAY  69 

    0x32f7c11c,// 107 PAY  70 

    0x81fa97c7,// 108 PAY  71 

    0xfae273df,// 109 PAY  72 

    0x962fd9a6,// 110 PAY  73 

    0xfe71e040,// 111 PAY  74 

    0x5abc360a,// 112 PAY  75 

    0xd6e8ed31,// 113 PAY  76 

    0xfe60c3d6,// 114 PAY  77 

    0xcd8f19a3,// 115 PAY  78 

    0x0d043435,// 116 PAY  79 

    0xcd2e5f52,// 117 PAY  80 

    0x08ec9360,// 118 PAY  81 

    0x7c7be128,// 119 PAY  82 

    0x68f4047c,// 120 PAY  83 

    0xbf0829af,// 121 PAY  84 

    0x95a3baa8,// 122 PAY  85 

    0x5476bd4e,// 123 PAY  86 

    0x5377bf44,// 124 PAY  87 

    0x9b69c607,// 125 PAY  88 

    0xf512689a,// 126 PAY  89 

    0x6d77c49f,// 127 PAY  90 

    0x8f2afe77,// 128 PAY  91 

    0xa5076575,// 129 PAY  92 

    0x101fd9a0,// 130 PAY  93 

    0x7d3d09f7,// 131 PAY  94 

    0xfeeb525f,// 132 PAY  95 

    0xdbcfa2a2,// 133 PAY  96 

    0x5fcd7be9,// 134 PAY  97 

    0xb8f8ae77,// 135 PAY  98 

    0xec98ffb1,// 136 PAY  99 

    0x0c7b1061,// 137 PAY 100 

    0x6022249b,// 138 PAY 101 

    0x6107fdc4,// 139 PAY 102 

    0x070044a4,// 140 PAY 103 

    0x2151b18e,// 141 PAY 104 

    0xf7bb0c8a,// 142 PAY 105 

    0xb3645e7c,// 143 PAY 106 

    0x48381b94,// 144 PAY 107 

    0x0aaedf99,// 145 PAY 108 

    0xcba67df1,// 146 PAY 109 

    0x1adbb6c0,// 147 PAY 110 

    0xbd0b837a,// 148 PAY 111 

    0xe6c372d1,// 149 PAY 112 

    0x927de226,// 150 PAY 113 

    0x106266ba,// 151 PAY 114 

    0xb7f4ca03,// 152 PAY 115 

    0xf5d89a3c,// 153 PAY 116 

    0x2f3403aa,// 154 PAY 117 

    0xca73555a,// 155 PAY 118 

    0xd6fff043,// 156 PAY 119 

    0x0a17f326,// 157 PAY 120 

    0xbc6cc15b,// 158 PAY 121 

    0xab3ef92c,// 159 PAY 122 

    0x689ac6e9,// 160 PAY 123 

    0x86f35132,// 161 PAY 124 

    0xb63551c8,// 162 PAY 125 

    0x0d22d71a,// 163 PAY 126 

    0x4ebfc6d5,// 164 PAY 127 

    0x3046c871,// 165 PAY 128 

    0x7e968c07,// 166 PAY 129 

    0xeedf3bcc,// 167 PAY 130 

    0x14a38bf1,// 168 PAY 131 

    0xaf2cc695,// 169 PAY 132 

    0xfd30f2a0,// 170 PAY 133 

    0xd9e41dc8,// 171 PAY 134 

    0xb97bb9e6,// 172 PAY 135 

    0xd0476651,// 173 PAY 136 

    0x4593e86d,// 174 PAY 137 

    0x5a50019d,// 175 PAY 138 

    0xd92b0f5f,// 176 PAY 139 

    0x839c8cd7,// 177 PAY 140 

    0x463b237e,// 178 PAY 141 

    0xf7db7ee6,// 179 PAY 142 

    0x34d8cdcd,// 180 PAY 143 

    0x48fad5e4,// 181 PAY 144 

    0x5e598d89,// 182 PAY 145 

    0x416bcec7,// 183 PAY 146 

    0x4e002f4d,// 184 PAY 147 

    0xfece6025,// 185 PAY 148 

    0xb661a235,// 186 PAY 149 

    0xe2be8050,// 187 PAY 150 

    0x6ada4aa8,// 188 PAY 151 

    0x9d856e3e,// 189 PAY 152 

    0xd855fcc3,// 190 PAY 153 

    0xbf1397b5,// 191 PAY 154 

    0xdba28a05,// 192 PAY 155 

    0x32e0c383,// 193 PAY 156 

    0x7d479e15,// 194 PAY 157 

    0x2e99629b,// 195 PAY 158 

    0x4b158d0b,// 196 PAY 159 

    0x9896b22d,// 197 PAY 160 

    0xa924497b,// 198 PAY 161 

    0xfb15cf15,// 199 PAY 162 

    0x7acbc444,// 200 PAY 163 

    0xc6e7169e,// 201 PAY 164 

    0xa8e63711,// 202 PAY 165 

    0xc8cb31e4,// 203 PAY 166 

    0xa0b65c11,// 204 PAY 167 

    0x5e351f69,// 205 PAY 168 

    0x6ae8a687,// 206 PAY 169 

    0x9d449b1b,// 207 PAY 170 

    0x109e0600,// 208 PAY 171 

/// STA is 1 words. 

/// STA num_pkts       : 254 

/// STA pkt_idx        : 71 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xbe 

    0x011dbefe // 209 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 80 (0x50) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_sha1_pkt78_tmpl[] = {
    0xb8010050,// 1 CCH   1 

/// ECH cache_idx      : 0x00 

/// ECH pdu_tag        : 0x00 

    0x00000000,// 2 ECH   1 

/// SCX is 19 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound save_icv insert_icv !check_icv !sctx_iv  

/// SCX exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : SHA1 

/// SCX aes_size        : AES256 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x1 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 40 

    0x00000013,// 3 SCX   1 

    0x806648af,// 4 SCX   2 

    0x00006142,// 5 SCX   3 

    0x90351699,// 6 SCX   4 

    0x61129b68,// 7 SCX   5 

    0x8f793ab3,// 8 SCX   6 

    0xe18a3f7e,// 9 SCX   7 

    0x5fb6fe6c,// 10 SCX   8 

    0x0b1d1aa6,// 11 SCX   9 

    0x79e94c0e,// 12 SCX  10 

    0xa0c25db3,// 13 SCX  11 

    0x825da7f1,// 14 SCX  12 

    0xbe4f9f79,// 15 SCX  13 

    0xc8c38277,// 16 SCX  14 

    0x9cfa4e3a,// 17 SCX  15 

    0x6ef95f41,// 18 SCX  16 

    0x90351554,// 19 SCX  17 

    0x45e9d9b8,// 20 SCX  18 

    0x47a3d409,// 21 SCX  19 

/// BFD is 3 words. 

/// BFD tot_len        : 1312 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 563 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 563 

/// BFD lencrypto      : 120 

/// BFD ofstcrypto     : 440 

/// BFD (ofst+len)cry  : 560 

/// BFD ofstiv         : 424 

/// BFD ofsticv        : 756 

    0x00000233,// 22 BFD   1 

    0x01b80078,// 23 BFD   2 

    0x02f401a8,// 24 BFD   3 

/// MFM is 3 words. 

/// MFM vldnibs        : 11 

    0x11009478,// 25 MFM   1 

    0x43ccf251,// 26 MFM   2 

    0xf3cc1000,// 27 MFM   3 

/// BDA is 329 words. 

/// BDA size     is 1312 (0x520) 

/// BDA id       is 0xdef3 

    0x0520def3,// 28 BDA   1 

/// PAY Generic Data size   : 1312 byte(s) 

/// PAD Buffer Data Pad size   : 0 byte(s) 

    0xa2db9046,// 29 PAY   1 

    0x2f66252a,// 30 PAY   2 

    0x6d7556ad,// 31 PAY   3 

    0x789c3e4d,// 32 PAY   4 

    0x790bd0c9,// 33 PAY   5 

    0x81d5e94b,// 34 PAY   6 

    0x719fdfbd,// 35 PAY   7 

    0xcd798e5d,// 36 PAY   8 

    0x1e3ca240,// 37 PAY   9 

    0xf9a928c3,// 38 PAY  10 

    0x90bcdd28,// 39 PAY  11 

    0xe0948443,// 40 PAY  12 

    0xe5ac604b,// 41 PAY  13 

    0x3ae0def2,// 42 PAY  14 

    0x2eb8633e,// 43 PAY  15 

    0xa6700e5a,// 44 PAY  16 

    0x3b54397c,// 45 PAY  17 

    0xc8b60fc6,// 46 PAY  18 

    0x21085baf,// 47 PAY  19 

    0x12bf5dca,// 48 PAY  20 

    0xde557bc8,// 49 PAY  21 

    0xd67b6412,// 50 PAY  22 

    0xcdafa13f,// 51 PAY  23 

    0x68766480,// 52 PAY  24 

    0x53d026c0,// 53 PAY  25 

    0x99092e8f,// 54 PAY  26 

    0xbd0cc55c,// 55 PAY  27 

    0x4ffda16c,// 56 PAY  28 

    0xad20b4da,// 57 PAY  29 

    0x78d89565,// 58 PAY  30 

    0x66ca5321,// 59 PAY  31 

    0x64dcef7a,// 60 PAY  32 

    0xf3b1237f,// 61 PAY  33 

    0xae9c5185,// 62 PAY  34 

    0x91cd7038,// 63 PAY  35 

    0x20fb8e78,// 64 PAY  36 

    0xf1b4a307,// 65 PAY  37 

    0x9e2de7ca,// 66 PAY  38 

    0x9431cbb2,// 67 PAY  39 

    0x866964dc,// 68 PAY  40 

    0xf8554ba1,// 69 PAY  41 

    0xd36996a4,// 70 PAY  42 

    0xc631a4d1,// 71 PAY  43 

    0xecd319ff,// 72 PAY  44 

    0x6d64a416,// 73 PAY  45 

    0x8d8bba94,// 74 PAY  46 

    0xfbb9b3c2,// 75 PAY  47 

    0x3dfbc0f7,// 76 PAY  48 

    0x15b97de7,// 77 PAY  49 

    0xb29d9f8b,// 78 PAY  50 

    0x1d5ca033,// 79 PAY  51 

    0x71df66cd,// 80 PAY  52 

    0xacaca427,// 81 PAY  53 

    0xba20771d,// 82 PAY  54 

    0x99d0d583,// 83 PAY  55 

    0x63f120ef,// 84 PAY  56 

    0xfcd87fea,// 85 PAY  57 

    0x2679a952,// 86 PAY  58 

    0xb8a574c6,// 87 PAY  59 

    0x10e4e619,// 88 PAY  60 

    0xeec8d520,// 89 PAY  61 

    0x1297c8ca,// 90 PAY  62 

    0xdf3fb662,// 91 PAY  63 

    0x76c27a84,// 92 PAY  64 

    0x544b1283,// 93 PAY  65 

    0x00bd454a,// 94 PAY  66 

    0x369fc379,// 95 PAY  67 

    0xa703f598,// 96 PAY  68 

    0x8fd9fe1c,// 97 PAY  69 

    0x8ede8ad7,// 98 PAY  70 

    0x89560e1d,// 99 PAY  71 

    0x33b639bd,// 100 PAY  72 

    0xcc26c893,// 101 PAY  73 

    0x00ccce94,// 102 PAY  74 

    0x95d21282,// 103 PAY  75 

    0xfa706d9c,// 104 PAY  76 

    0x07624f33,// 105 PAY  77 

    0xad4c96eb,// 106 PAY  78 

    0x5fdabfda,// 107 PAY  79 

    0x444c9d1e,// 108 PAY  80 

    0x878f3511,// 109 PAY  81 

    0x68e676f3,// 110 PAY  82 

    0xd8c29214,// 111 PAY  83 

    0x6ecb79dd,// 112 PAY  84 

    0xcbbf524c,// 113 PAY  85 

    0x5e5a740b,// 114 PAY  86 

    0x529dbf7e,// 115 PAY  87 

    0xbc9f61b7,// 116 PAY  88 

    0xdee1526c,// 117 PAY  89 

    0x9e37f370,// 118 PAY  90 

    0x8b444dc7,// 119 PAY  91 

    0xec48b501,// 120 PAY  92 

    0xa1db0b04,// 121 PAY  93 

    0x5e5bc9a0,// 122 PAY  94 

    0x3714c92e,// 123 PAY  95 

    0x01edfc9c,// 124 PAY  96 

    0xb882e70b,// 125 PAY  97 

    0xefb83b4d,// 126 PAY  98 

    0xee41fd0a,// 127 PAY  99 

    0x57dc0d3c,// 128 PAY 100 

    0x01a48ef8,// 129 PAY 101 

    0x5a9c089a,// 130 PAY 102 

    0x023edf4e,// 131 PAY 103 

    0xb7f4423e,// 132 PAY 104 

    0x97151d61,// 133 PAY 105 

    0x15f9f308,// 134 PAY 106 

    0x0ea43d57,// 135 PAY 107 

    0x3a408a08,// 136 PAY 108 

    0x241f9d0c,// 137 PAY 109 

    0x1ba14a4f,// 138 PAY 110 

    0x957bc413,// 139 PAY 111 

    0x4ad41dcc,// 140 PAY 112 

    0xf721e54f,// 141 PAY 113 

    0x09fafedc,// 142 PAY 114 

    0x35cbb117,// 143 PAY 115 

    0x268171a8,// 144 PAY 116 

    0x7a869609,// 145 PAY 117 

    0x76f46cee,// 146 PAY 118 

    0x3384d5a4,// 147 PAY 119 

    0xab05e8fd,// 148 PAY 120 

    0x312ce8e7,// 149 PAY 121 

    0x80353789,// 150 PAY 122 

    0x2ac65e1e,// 151 PAY 123 

    0xe5314707,// 152 PAY 124 

    0x80b4bd65,// 153 PAY 125 

    0x121884f0,// 154 PAY 126 

    0x2c0efca3,// 155 PAY 127 

    0xe6d60827,// 156 PAY 128 

    0xd94e5821,// 157 PAY 129 

    0x726e4051,// 158 PAY 130 

    0x885f737a,// 159 PAY 131 

    0xb9c56043,// 160 PAY 132 

    0xa6c17536,// 161 PAY 133 

    0xfc1c35a3,// 162 PAY 134 

    0x064d4d53,// 163 PAY 135 

    0x1bd9db61,// 164 PAY 136 

    0x7be4424c,// 165 PAY 137 

    0xd0016e16,// 166 PAY 138 

    0x1478a6bf,// 167 PAY 139 

    0x8f1bf52b,// 168 PAY 140 

    0x35874dd7,// 169 PAY 141 

    0x58d5c3ff,// 170 PAY 142 

    0x1a2c8692,// 171 PAY 143 

    0xdd148081,// 172 PAY 144 

    0xd412a62c,// 173 PAY 145 

    0xc8530881,// 174 PAY 146 

    0x2f2d6580,// 175 PAY 147 

    0x734e939b,// 176 PAY 148 

    0x75e249fe,// 177 PAY 149 

    0x071e25af,// 178 PAY 150 

    0x6646b961,// 179 PAY 151 

    0xcf071ab4,// 180 PAY 152 

    0xe15e21ae,// 181 PAY 153 

    0x119cc60a,// 182 PAY 154 

    0xe46ecbc5,// 183 PAY 155 

    0x9f929a9e,// 184 PAY 156 

    0x25402f12,// 185 PAY 157 

    0x47c380eb,// 186 PAY 158 

    0x34367e7a,// 187 PAY 159 

    0x22c6aafa,// 188 PAY 160 

    0x47f03202,// 189 PAY 161 

    0x703359c4,// 190 PAY 162 

    0x8349daaf,// 191 PAY 163 

    0x2e7bb4aa,// 192 PAY 164 

    0x3aaa602f,// 193 PAY 165 

    0x74bac291,// 194 PAY 166 

    0xccac29f5,// 195 PAY 167 

    0x4f44d5ba,// 196 PAY 168 

    0xe23c5a34,// 197 PAY 169 

    0xcd7a2887,// 198 PAY 170 

    0x00f19dbc,// 199 PAY 171 

    0xd2f87737,// 200 PAY 172 

    0x17592504,// 201 PAY 173 

    0xcfdf7305,// 202 PAY 174 

    0x62638e9b,// 203 PAY 175 

    0x3e0207e0,// 204 PAY 176 

    0x94e3c7ad,// 205 PAY 177 

    0x67c4c52d,// 206 PAY 178 

    0x8344b0df,// 207 PAY 179 

    0xeabc5a01,// 208 PAY 180 

    0xce7cf649,// 209 PAY 181 

    0x34a073b5,// 210 PAY 182 

    0x8a4b75c7,// 211 PAY 183 

    0x4c15b6ee,// 212 PAY 184 

    0x40a6c429,// 213 PAY 185 

    0x6e92bda5,// 214 PAY 186 

    0xa8d7b357,// 215 PAY 187 

    0x9b7fa7d4,// 216 PAY 188 

    0xf44efd4d,// 217 PAY 189 

    0x832166e1,// 218 PAY 190 

    0xf776ad3d,// 219 PAY 191 

    0xff29ea7c,// 220 PAY 192 

    0x7fae64ba,// 221 PAY 193 

    0xe1540f5d,// 222 PAY 194 

    0xc9c42f71,// 223 PAY 195 

    0x443a6d8d,// 224 PAY 196 

    0x997fa81e,// 225 PAY 197 

    0xda922252,// 226 PAY 198 

    0x63bddb21,// 227 PAY 199 

    0xa9be3ebd,// 228 PAY 200 

    0xc6aea4f9,// 229 PAY 201 

    0x7edb48aa,// 230 PAY 202 

    0x84707f72,// 231 PAY 203 

    0xd86587d4,// 232 PAY 204 

    0xf82320b9,// 233 PAY 205 

    0xc960a6a9,// 234 PAY 206 

    0xcb221b65,// 235 PAY 207 

    0x1f0b2f05,// 236 PAY 208 

    0x6dcf9f4c,// 237 PAY 209 

    0x47917e5b,// 238 PAY 210 

    0x3a0c5e47,// 239 PAY 211 

    0xffab1fd8,// 240 PAY 212 

    0x175afb04,// 241 PAY 213 

    0x47614085,// 242 PAY 214 

    0xf9b0201d,// 243 PAY 215 

    0xb35e2772,// 244 PAY 216 

    0xa9e3a827,// 245 PAY 217 

    0xeb06bc5e,// 246 PAY 218 

    0xbfc441ec,// 247 PAY 219 

    0xd048f903,// 248 PAY 220 

    0x7173c485,// 249 PAY 221 

    0x6c289c27,// 250 PAY 222 

    0xdf5db08c,// 251 PAY 223 

    0xee0092e4,// 252 PAY 224 

    0x4b3ad036,// 253 PAY 225 

    0x5c1329ff,// 254 PAY 226 

    0x3824574a,// 255 PAY 227 

    0xfb0eee41,// 256 PAY 228 

    0x859ac52f,// 257 PAY 229 

    0x3160f719,// 258 PAY 230 

    0x1305e84e,// 259 PAY 231 

    0x00ea46a2,// 260 PAY 232 

    0xacbf155e,// 261 PAY 233 

    0xcfdeec00,// 262 PAY 234 

    0xe83d8215,// 263 PAY 235 

    0x99638edf,// 264 PAY 236 

    0xa9f1eb3e,// 265 PAY 237 

    0xc4f5853e,// 266 PAY 238 

    0x47b55192,// 267 PAY 239 

    0xf53c2b96,// 268 PAY 240 

    0xd2a57c2b,// 269 PAY 241 

    0x5b1bd7da,// 270 PAY 242 

    0xf2bc51bc,// 271 PAY 243 

    0x935cc2dc,// 272 PAY 244 

    0xc967a6d4,// 273 PAY 245 

    0x9c5cdcd2,// 274 PAY 246 

    0xb180b491,// 275 PAY 247 

    0x27d59b00,// 276 PAY 248 

    0x31e187e7,// 277 PAY 249 

    0xa78cb333,// 278 PAY 250 

    0xc3be7fc9,// 279 PAY 251 

    0x20afdc81,// 280 PAY 252 

    0x69cd65f2,// 281 PAY 253 

    0x6870f025,// 282 PAY 254 

    0x6245ee6e,// 283 PAY 255 

    0x87c2d30c,// 284 PAY 256 

    0x7e4f1dae,// 285 PAY 257 

    0xe75cd0cc,// 286 PAY 258 

    0xe57dc46a,// 287 PAY 259 

    0x9b304e69,// 288 PAY 260 

    0x94b8ddc6,// 289 PAY 261 

    0x16d8fffe,// 290 PAY 262 

    0xf3d0cc3a,// 291 PAY 263 

    0xe5304bdb,// 292 PAY 264 

    0x545a6b17,// 293 PAY 265 

    0x1a6f0432,// 294 PAY 266 

    0xb5f5f0f1,// 295 PAY 267 

    0x4662425f,// 296 PAY 268 

    0x5ea4c694,// 297 PAY 269 

    0xeaca011e,// 298 PAY 270 

    0x100f3bd3,// 299 PAY 271 

    0x816c4a07,// 300 PAY 272 

    0x46d15c1f,// 301 PAY 273 

    0x53a79ad7,// 302 PAY 274 

    0x9a854d83,// 303 PAY 275 

    0xcd4161d5,// 304 PAY 276 

    0x7bbd2b65,// 305 PAY 277 

    0x368ca0b0,// 306 PAY 278 

    0x586a82cd,// 307 PAY 279 

    0x46b67c62,// 308 PAY 280 

    0x30717e69,// 309 PAY 281 

    0xbb35ae75,// 310 PAY 282 

    0xb59ae379,// 311 PAY 283 

    0x0465ab1e,// 312 PAY 284 

    0xea1cd926,// 313 PAY 285 

    0xc7670f9d,// 314 PAY 286 

    0x34de4ecb,// 315 PAY 287 

    0xffd58ff6,// 316 PAY 288 

    0x79d2f99b,// 317 PAY 289 

    0xe9a20e98,// 318 PAY 290 

    0xb0b8e7f4,// 319 PAY 291 

    0x9fb0e760,// 320 PAY 292 

    0x81bcaf6d,// 321 PAY 293 

    0xf5f0186e,// 322 PAY 294 

    0x1971cbb0,// 323 PAY 295 

    0xcfbfa883,// 324 PAY 296 

    0x506234ba,// 325 PAY 297 

    0x898c05b5,// 326 PAY 298 

    0x4983cb2b,// 327 PAY 299 

    0x81b82c33,// 328 PAY 300 

    0xe3f06900,// 329 PAY 301 

    0x317e1cf4,// 330 PAY 302 

    0xa7946627,// 331 PAY 303 

    0x05e3d649,// 332 PAY 304 

    0x793e51f6,// 333 PAY 305 

    0x6bfc8552,// 334 PAY 306 

    0xfcd4c08f,// 335 PAY 307 

    0xb3de979a,// 336 PAY 308 

    0x30fa54da,// 337 PAY 309 

    0x2581ef16,// 338 PAY 310 

    0x50eccca8,// 339 PAY 311 

    0xc8b39c38,// 340 PAY 312 

    0x35501333,// 341 PAY 313 

    0x11889edb,// 342 PAY 314 

    0x08c74aa0,// 343 PAY 315 

    0x58fa1296,// 344 PAY 316 

    0xb80012c1,// 345 PAY 317 

    0xe412aae9,// 346 PAY 318 

    0x47de8047,// 347 PAY 319 

    0x141fc344,// 348 PAY 320 

    0x268174c3,// 349 PAY 321 

    0x2cc64798,// 350 PAY 322 

    0xabbe7f14,// 351 PAY 323 

    0xf1743de9,// 352 PAY 324 

    0xa4a329b5,// 353 PAY 325 

    0x2a08e618,// 354 PAY 326 

    0xeeadd366,// 355 PAY 327 

    0xbbf8ae6c,// 356 PAY 328 

/// STA is 1 words. 

/// STA num_pkts       : 55 

/// STA pkt_idx        : 168 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xf4 

    0x02a0f437 // 357 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 88 (0x58) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_sha1_pkt79_tmpl[] = {
    0xb8010058,// 1 CCH   1 

/// ECH cache_idx      : 0x0c 

/// ECH pdu_tag        : 0x00 

    0x000c0000,// 2 ECH   1 

/// SCX is 21 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound save_icv !insert_icv check_icv sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : SHA1 

/// SCX aes_size        : NORMAL_RC4INIT_AES128 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x4 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 8 

/// SCX authctx_size    : 40 

    0x08000015,// 3 SCX   1 

    0x806448d1,// 4 SCX   2 

    0x00005482,// 5 SCX   3 

    0x82f6736e,// 6 SCX   4 

    0x2a5033c7,// 7 SCX   5 

    0xfdfcde9e,// 8 SCX   6 

    0x0f8bafc4,// 9 SCX   7 

    0xde7ee046,// 10 SCX   8 

    0x30128220,// 11 SCX   9 

    0xe9d5b9c8,// 12 SCX  10 

    0x08b4d540,// 13 SCX  11 

    0xa77b24c0,// 14 SCX  12 

    0xadc089e3,// 15 SCX  13 

    0x612e96e2,// 16 SCX  14 

    0x3e373fea,// 17 SCX  15 

    0x7659fee5,// 18 SCX  16 

    0x5c543882,// 19 SCX  17 

    0x97c5f57f,// 20 SCX  18 

    0x6c0413de,// 21 SCX  19 

    0xa91e7774,// 22 SCX  20 

    0x64c24c51,// 23 SCX  21 

/// BFD is 3 words. 

/// BFD tot_len        : 1287 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 445 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 445 

/// BFD lencrypto      : 72 

/// BFD ofstcrypto     : 156 

/// BFD (ofst+len)cry  : 228 

/// BFD ofstiv         : 16 

/// BFD ofsticv        : 480 

    0x000001bd,// 24 BFD   1 

    0x009c0048,// 25 BFD   2 

    0x01e00010,// 26 BFD   3 

/// MFM is 13 words. 

/// MFM vldnibs        : 60 

    0x60001e9f,// 27 MFM   1 

    0xea44a236,// 28 MFM   2 

    0xfb6d0025,// 29 MFM   3 

    0x43ef1e5a,// 30 MFM   4 

    0x812fd316,// 31 MFM   5 

    0xcd0d8d22,// 32 MFM   6 

    0xf29644e0,// 33 MFM   7 

    0x2e3f437a,// 34 MFM   8 

    0xdd57efed,// 35 MFM   9 

    0x61b4229e,// 36 MFM  10 

    0x914abd89,// 37 MFM  11 

    0x02f7b73f,// 38 MFM  12 

    0x29d80000,// 39 MFM  13 

/// BDA is 323 words. 

/// BDA size     is 1287 (0x507) 

/// BDA id       is 0x4d3 

    0x050704d3,// 40 BDA   1 

/// PAY Generic Data size   : 1287 byte(s) 

/// PAD Buffer Data Pad size   : 1 byte(s) 

    0x2a31b684,// 41 PAY   1 

    0x19b57234,// 42 PAY   2 

    0x98533061,// 43 PAY   3 

    0xdd4ec9ed,// 44 PAY   4 

    0x3787ec90,// 45 PAY   5 

    0xd5789aac,// 46 PAY   6 

    0x210f46ab,// 47 PAY   7 

    0xaaf74bd0,// 48 PAY   8 

    0x85d11338,// 49 PAY   9 

    0xb232111b,// 50 PAY  10 

    0xe187154e,// 51 PAY  11 

    0x5c583b2a,// 52 PAY  12 

    0xc45172b6,// 53 PAY  13 

    0xcfce8f28,// 54 PAY  14 

    0x651377f9,// 55 PAY  15 

    0xd5a550ef,// 56 PAY  16 

    0xa950fdeb,// 57 PAY  17 

    0x847273c3,// 58 PAY  18 

    0x99d2fe59,// 59 PAY  19 

    0x8f54d1fc,// 60 PAY  20 

    0x3ba48508,// 61 PAY  21 

    0x972ee34a,// 62 PAY  22 

    0xea4fceb0,// 63 PAY  23 

    0x23caaf93,// 64 PAY  24 

    0xfb4d5d7f,// 65 PAY  25 

    0xe9556205,// 66 PAY  26 

    0x8bc54877,// 67 PAY  27 

    0x85e6f3e2,// 68 PAY  28 

    0x50d591ce,// 69 PAY  29 

    0x16543faa,// 70 PAY  30 

    0x27855252,// 71 PAY  31 

    0x89a3ee53,// 72 PAY  32 

    0x6ca387c3,// 73 PAY  33 

    0x01ef738b,// 74 PAY  34 

    0x47464175,// 75 PAY  35 

    0x8eb93453,// 76 PAY  36 

    0x462e10d6,// 77 PAY  37 

    0xa591e735,// 78 PAY  38 

    0x3d3800db,// 79 PAY  39 

    0xc59174bf,// 80 PAY  40 

    0x897ca0a1,// 81 PAY  41 

    0x3559cbf6,// 82 PAY  42 

    0x1f5eaedb,// 83 PAY  43 

    0xfdfd027e,// 84 PAY  44 

    0x77f5c80d,// 85 PAY  45 

    0xc2e1fb18,// 86 PAY  46 

    0xfd93f947,// 87 PAY  47 

    0xf6efbedc,// 88 PAY  48 

    0x81c93eaf,// 89 PAY  49 

    0x98fb63ee,// 90 PAY  50 

    0x8b54666b,// 91 PAY  51 

    0x9b925376,// 92 PAY  52 

    0x2bb3b95b,// 93 PAY  53 

    0x53356f9d,// 94 PAY  54 

    0xca8272dd,// 95 PAY  55 

    0x4957527b,// 96 PAY  56 

    0x8dd2c836,// 97 PAY  57 

    0x1dd3b0f5,// 98 PAY  58 

    0x32ecf93b,// 99 PAY  59 

    0x7e437b63,// 100 PAY  60 

    0x59096046,// 101 PAY  61 

    0x0fb46115,// 102 PAY  62 

    0xdf7b73fd,// 103 PAY  63 

    0x209a8185,// 104 PAY  64 

    0x0ba7d483,// 105 PAY  65 

    0x51090e6d,// 106 PAY  66 

    0xa804149e,// 107 PAY  67 

    0xe41368c3,// 108 PAY  68 

    0x1c4a489d,// 109 PAY  69 

    0xda12f071,// 110 PAY  70 

    0xe4ae2c37,// 111 PAY  71 

    0x43d7ce2b,// 112 PAY  72 

    0x72a3f2c3,// 113 PAY  73 

    0xb7ffd6cf,// 114 PAY  74 

    0x88c81156,// 115 PAY  75 

    0xfac5139a,// 116 PAY  76 

    0x93a63550,// 117 PAY  77 

    0x0adb8815,// 118 PAY  78 

    0xda01c8d7,// 119 PAY  79 

    0xac740480,// 120 PAY  80 

    0x48c12fea,// 121 PAY  81 

    0x9ab93c9e,// 122 PAY  82 

    0x5a848fdf,// 123 PAY  83 

    0x48033ee8,// 124 PAY  84 

    0x31f316f7,// 125 PAY  85 

    0xd11b4f84,// 126 PAY  86 

    0xa6a0e9f6,// 127 PAY  87 

    0x97c7f6b5,// 128 PAY  88 

    0x67cbdb34,// 129 PAY  89 

    0x6678b306,// 130 PAY  90 

    0xc7e82d37,// 131 PAY  91 

    0xd2ff3a69,// 132 PAY  92 

    0x3469f16c,// 133 PAY  93 

    0x491d7323,// 134 PAY  94 

    0x0f9ea291,// 135 PAY  95 

    0xd707c7ec,// 136 PAY  96 

    0x22dfdc0c,// 137 PAY  97 

    0x6ea055e0,// 138 PAY  98 

    0x28e62867,// 139 PAY  99 

    0x30273cc1,// 140 PAY 100 

    0xe94241c8,// 141 PAY 101 

    0x5cbb090f,// 142 PAY 102 

    0x390a9037,// 143 PAY 103 

    0x2702f28f,// 144 PAY 104 

    0x5049654a,// 145 PAY 105 

    0x69991ecb,// 146 PAY 106 

    0xe5ccc072,// 147 PAY 107 

    0x4e766e22,// 148 PAY 108 

    0xa1dcc1ed,// 149 PAY 109 

    0x9981a7ef,// 150 PAY 110 

    0xea5296cf,// 151 PAY 111 

    0x739cc13b,// 152 PAY 112 

    0x288c04ea,// 153 PAY 113 

    0x9d6049be,// 154 PAY 114 

    0x210628b9,// 155 PAY 115 

    0xd47d6a26,// 156 PAY 116 

    0x49576ac4,// 157 PAY 117 

    0xce7d268f,// 158 PAY 118 

    0x652a11e3,// 159 PAY 119 

    0xb0156eb5,// 160 PAY 120 

    0x3cd09326,// 161 PAY 121 

    0x60fe3d7c,// 162 PAY 122 

    0xcbc500b4,// 163 PAY 123 

    0xaffbef9b,// 164 PAY 124 

    0xfbd70447,// 165 PAY 125 

    0xfbd89278,// 166 PAY 126 

    0xea9f7ae7,// 167 PAY 127 

    0x60fac404,// 168 PAY 128 

    0x6d6798d5,// 169 PAY 129 

    0x8c79f1af,// 170 PAY 130 

    0x434e5d13,// 171 PAY 131 

    0xa6551347,// 172 PAY 132 

    0x5404e469,// 173 PAY 133 

    0x2c87a576,// 174 PAY 134 

    0xfab3ae88,// 175 PAY 135 

    0xad46684f,// 176 PAY 136 

    0xde77ee34,// 177 PAY 137 

    0x84a95396,// 178 PAY 138 

    0xdc79cfdb,// 179 PAY 139 

    0xdac9171c,// 180 PAY 140 

    0xb9c06e32,// 181 PAY 141 

    0x08b1072a,// 182 PAY 142 

    0x52211e95,// 183 PAY 143 

    0xed311425,// 184 PAY 144 

    0x8e3e0d0c,// 185 PAY 145 

    0x38fdb9e7,// 186 PAY 146 

    0xabb16910,// 187 PAY 147 

    0x8537fb64,// 188 PAY 148 

    0x79637e8d,// 189 PAY 149 

    0x3e0a2d83,// 190 PAY 150 

    0xa59ab660,// 191 PAY 151 

    0x10f9b988,// 192 PAY 152 

    0xed9c665b,// 193 PAY 153 

    0x04f8b697,// 194 PAY 154 

    0x9960c693,// 195 PAY 155 

    0xcccc8cba,// 196 PAY 156 

    0xf16a2197,// 197 PAY 157 

    0xbd22ee16,// 198 PAY 158 

    0xe16ff8ed,// 199 PAY 159 

    0xe5636005,// 200 PAY 160 

    0x6ffce3c0,// 201 PAY 161 

    0x65ab6a02,// 202 PAY 162 

    0x61af63f9,// 203 PAY 163 

    0xf1859b1f,// 204 PAY 164 

    0xb201dc02,// 205 PAY 165 

    0xbe0ba268,// 206 PAY 166 

    0x574d6dcc,// 207 PAY 167 

    0x727c9b7d,// 208 PAY 168 

    0xba99aaa7,// 209 PAY 169 

    0x7974e705,// 210 PAY 170 

    0x6dccc142,// 211 PAY 171 

    0xf4335d3d,// 212 PAY 172 

    0x3b25477c,// 213 PAY 173 

    0x18845d45,// 214 PAY 174 

    0x495058a7,// 215 PAY 175 

    0x7388c811,// 216 PAY 176 

    0x012c377e,// 217 PAY 177 

    0x5f6c5a15,// 218 PAY 178 

    0x7db9e8d8,// 219 PAY 179 

    0x3c3635cc,// 220 PAY 180 

    0xba162990,// 221 PAY 181 

    0x61bb3457,// 222 PAY 182 

    0x9c102f6a,// 223 PAY 183 

    0x1b0863fe,// 224 PAY 184 

    0xee6c611e,// 225 PAY 185 

    0x82324144,// 226 PAY 186 

    0xa7804274,// 227 PAY 187 

    0x3aa4ca96,// 228 PAY 188 

    0xed08c494,// 229 PAY 189 

    0x313169a7,// 230 PAY 190 

    0x74fda078,// 231 PAY 191 

    0x866ed2d6,// 232 PAY 192 

    0xae85130d,// 233 PAY 193 

    0x2748a1f0,// 234 PAY 194 

    0xaccf3dc5,// 235 PAY 195 

    0x8ced46fc,// 236 PAY 196 

    0x5bb60325,// 237 PAY 197 

    0x9c4389e5,// 238 PAY 198 

    0x59ed7d6e,// 239 PAY 199 

    0x53bb222b,// 240 PAY 200 

    0xe8e80a3c,// 241 PAY 201 

    0x6025dd6b,// 242 PAY 202 

    0xd3fa9964,// 243 PAY 203 

    0x43dd68b9,// 244 PAY 204 

    0x1afd1265,// 245 PAY 205 

    0x3bb3d4d4,// 246 PAY 206 

    0xf4f7f3b4,// 247 PAY 207 

    0xcb51863a,// 248 PAY 208 

    0x67f95ecb,// 249 PAY 209 

    0x324e5292,// 250 PAY 210 

    0xff1078a7,// 251 PAY 211 

    0x5cf4b16e,// 252 PAY 212 

    0x9cc761e4,// 253 PAY 213 

    0x0d718da3,// 254 PAY 214 

    0x6cd36d18,// 255 PAY 215 

    0x147144bd,// 256 PAY 216 

    0xe20b2cb5,// 257 PAY 217 

    0x5d902b34,// 258 PAY 218 

    0xdbcd395b,// 259 PAY 219 

    0x347060f3,// 260 PAY 220 

    0x84dfc1f9,// 261 PAY 221 

    0xcee5921e,// 262 PAY 222 

    0x992a9239,// 263 PAY 223 

    0xa89b4a78,// 264 PAY 224 

    0x376fe45c,// 265 PAY 225 

    0x670ca631,// 266 PAY 226 

    0xc151850f,// 267 PAY 227 

    0xbee99544,// 268 PAY 228 

    0x9211b06f,// 269 PAY 229 

    0x85bc3ef2,// 270 PAY 230 

    0xf02b6ecd,// 271 PAY 231 

    0x2059a0a2,// 272 PAY 232 

    0x861e9ec3,// 273 PAY 233 

    0xb378ad21,// 274 PAY 234 

    0xa6643462,// 275 PAY 235 

    0x6ce982e3,// 276 PAY 236 

    0x0293a872,// 277 PAY 237 

    0x32995eec,// 278 PAY 238 

    0xc034a89e,// 279 PAY 239 

    0xd5542cc9,// 280 PAY 240 

    0x5da09039,// 281 PAY 241 

    0xdf634ac0,// 282 PAY 242 

    0x3516ab99,// 283 PAY 243 

    0xc47cbc23,// 284 PAY 244 

    0xd9649782,// 285 PAY 245 

    0x32028d2d,// 286 PAY 246 

    0xa08685f3,// 287 PAY 247 

    0xd8408d0c,// 288 PAY 248 

    0xfc164dfd,// 289 PAY 249 

    0xc3cdde75,// 290 PAY 250 

    0x00faaf99,// 291 PAY 251 

    0xded6c919,// 292 PAY 252 

    0x2356a441,// 293 PAY 253 

    0x3ccfc340,// 294 PAY 254 

    0x6903a6d1,// 295 PAY 255 

    0x7343ff13,// 296 PAY 256 

    0x0a9546f3,// 297 PAY 257 

    0x0ef429e2,// 298 PAY 258 

    0xd2f3ca73,// 299 PAY 259 

    0x429f789b,// 300 PAY 260 

    0xf9fcd9e5,// 301 PAY 261 

    0x83eb7146,// 302 PAY 262 

    0x14fe9aa0,// 303 PAY 263 

    0xfdc0e7ee,// 304 PAY 264 

    0x1e86febb,// 305 PAY 265 

    0xaf762605,// 306 PAY 266 

    0xf03db7f6,// 307 PAY 267 

    0x1b18fe76,// 308 PAY 268 

    0x52d511bc,// 309 PAY 269 

    0x0ee92347,// 310 PAY 270 

    0xd481b7ec,// 311 PAY 271 

    0x0f895230,// 312 PAY 272 

    0x0b8488a0,// 313 PAY 273 

    0xc548ba0f,// 314 PAY 274 

    0x5a7987d5,// 315 PAY 275 

    0xd7f4e0f8,// 316 PAY 276 

    0x82cfffe0,// 317 PAY 277 

    0x3441b6e3,// 318 PAY 278 

    0xa87fc5ae,// 319 PAY 279 

    0x6e584197,// 320 PAY 280 

    0x2784c0cb,// 321 PAY 281 

    0x4a1d6000,// 322 PAY 282 

    0xfc60aa81,// 323 PAY 283 

    0x3884d975,// 324 PAY 284 

    0x8572f701,// 325 PAY 285 

    0x494e5c5a,// 326 PAY 286 

    0x00d10d5f,// 327 PAY 287 

    0xe768713a,// 328 PAY 288 

    0x3f5dc95f,// 329 PAY 289 

    0x23aca171,// 330 PAY 290 

    0x071baae8,// 331 PAY 291 

    0x11bdd6f9,// 332 PAY 292 

    0x88a7bc68,// 333 PAY 293 

    0xe2d0c475,// 334 PAY 294 

    0x22eaab71,// 335 PAY 295 

    0x63079f27,// 336 PAY 296 

    0x7ce32da1,// 337 PAY 297 

    0x7ad60baa,// 338 PAY 298 

    0x28663f7c,// 339 PAY 299 

    0xe41e4603,// 340 PAY 300 

    0x0ffbf733,// 341 PAY 301 

    0x37799363,// 342 PAY 302 

    0x3c627bff,// 343 PAY 303 

    0x5a9c1be5,// 344 PAY 304 

    0x606c14b4,// 345 PAY 305 

    0xdc54bbd1,// 346 PAY 306 

    0x5fa18cda,// 347 PAY 307 

    0xb7267cd6,// 348 PAY 308 

    0x2fa46942,// 349 PAY 309 

    0xbe7cd425,// 350 PAY 310 

    0xc38ac45d,// 351 PAY 311 

    0x72a8c5b1,// 352 PAY 312 

    0x2a165073,// 353 PAY 313 

    0xdf7895da,// 354 PAY 314 

    0x2774c568,// 355 PAY 315 

    0x9718f502,// 356 PAY 316 

    0x89290550,// 357 PAY 317 

    0x939da5a4,// 358 PAY 318 

    0xacb07082,// 359 PAY 319 

    0x752b8970,// 360 PAY 320 

    0xe04e2647,// 361 PAY 321 

    0x00733700,// 362 PAY 322 

/// STA is 1 words. 

/// STA num_pkts       : 45 

/// STA pkt_idx        : 90 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xf 

    0x01690f2d // 363 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 88 (0x58) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_sha1_pkt80_tmpl[] = {
    0xb8010058,// 1 CCH   1 

/// ECH cache_idx      : 0x0a 

/// ECH pdu_tag        : 0x00 

    0x000a0000,// 2 ECH   1 

/// SCX is 21 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound !save_icv insert_icv check_icv sctx_iv  

/// SCX exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : SHA1 

/// SCX aes_size        : AES256 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x3 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 8 

/// SCX authctx_size    : 40 

    0x00000015,// 3 SCX   1 

    0x80664842,// 4 SCX   2 

    0x000033c2,// 5 SCX   3 

    0xa799d1a3,// 6 SCX   4 

    0x72e92d8b,// 7 SCX   5 

    0xcc930e2c,// 8 SCX   6 

    0xd437e6da,// 9 SCX   7 

    0x47a1288b,// 10 SCX   8 

    0x499636fc,// 11 SCX   9 

    0xca2e54ad,// 12 SCX  10 

    0xfde7129d,// 13 SCX  11 

    0x21e3155d,// 14 SCX  12 

    0x588d88a6,// 15 SCX  13 

    0x028e0637,// 16 SCX  14 

    0xfdf99d7e,// 17 SCX  15 

    0x7e3d3c3e,// 18 SCX  16 

    0x157b648c,// 19 SCX  17 

    0xbf1f4f87,// 20 SCX  18 

    0x267b2fdc,// 21 SCX  19 

    0x1619dc51,// 22 SCX  20 

    0x2ab359fb,// 23 SCX  21 

/// BFD is 3 words. 

/// BFD tot_len        : 1748 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 513 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 513 

/// BFD lencrypto      : 16 

/// BFD ofstcrypto     : 492 

/// BFD (ofst+len)cry  : 508 

/// BFD ofstiv         : 288 

/// BFD ofsticv        : 1100 

    0x00000201,// 24 BFD   1 

    0x01ec0010,// 25 BFD   2 

    0x044c0120,// 26 BFD   3 

/// MFM is 2 words. 

/// MFM vldnibs        : 8 

    0x08004752,// 27 MFM   1 

    0x5a8c0000,// 28 MFM   2 

/// BDA is 438 words. 

/// BDA size     is 1748 (0x6d4) 

/// BDA id       is 0xcf5d 

    0x06d4cf5d,// 29 BDA   1 

/// PAY Generic Data size   : 1748 byte(s) 

/// PAD Buffer Data Pad size   : 0 byte(s) 

    0x9eb8edda,// 30 PAY   1 

    0xa8cf3c8e,// 31 PAY   2 

    0x15b99ef9,// 32 PAY   3 

    0xdfac629c,// 33 PAY   4 

    0x7040633c,// 34 PAY   5 

    0xe5f2b7f8,// 35 PAY   6 

    0x0cb854ba,// 36 PAY   7 

    0xb7741103,// 37 PAY   8 

    0x8156c4c1,// 38 PAY   9 

    0x16286725,// 39 PAY  10 

    0x16d276d2,// 40 PAY  11 

    0x0d8dbd19,// 41 PAY  12 

    0x6e4bfade,// 42 PAY  13 

    0xd000def4,// 43 PAY  14 

    0x9cb4ebbd,// 44 PAY  15 

    0x80ff3c74,// 45 PAY  16 

    0x5936f5fe,// 46 PAY  17 

    0x9562435a,// 47 PAY  18 

    0xf1e2e251,// 48 PAY  19 

    0x57172034,// 49 PAY  20 

    0xd27e0edc,// 50 PAY  21 

    0xed5faf66,// 51 PAY  22 

    0x59412233,// 52 PAY  23 

    0x895f0336,// 53 PAY  24 

    0x23c5c0aa,// 54 PAY  25 

    0x31f8deec,// 55 PAY  26 

    0x3b4f6f75,// 56 PAY  27 

    0xa30f760e,// 57 PAY  28 

    0x69ec7430,// 58 PAY  29 

    0x82aa3970,// 59 PAY  30 

    0x94d941c3,// 60 PAY  31 

    0x6e446ca1,// 61 PAY  32 

    0x4635af4c,// 62 PAY  33 

    0xc7381dc5,// 63 PAY  34 

    0x55dabcf8,// 64 PAY  35 

    0x8082040d,// 65 PAY  36 

    0xd611b4b9,// 66 PAY  37 

    0x10f53a5a,// 67 PAY  38 

    0x8e3c078c,// 68 PAY  39 

    0x118ebe6c,// 69 PAY  40 

    0x4302fbb6,// 70 PAY  41 

    0x58bdb951,// 71 PAY  42 

    0x97ee2824,// 72 PAY  43 

    0x354a5099,// 73 PAY  44 

    0x332b2dab,// 74 PAY  45 

    0x1b3b6b13,// 75 PAY  46 

    0x3c952092,// 76 PAY  47 

    0xcf93b0d4,// 77 PAY  48 

    0xc426c46f,// 78 PAY  49 

    0x2c0e713b,// 79 PAY  50 

    0x04cb773a,// 80 PAY  51 

    0x52e88a24,// 81 PAY  52 

    0xda9e41ff,// 82 PAY  53 

    0x706533f0,// 83 PAY  54 

    0xccb1c430,// 84 PAY  55 

    0x86797484,// 85 PAY  56 

    0xadd517fe,// 86 PAY  57 

    0x5e643583,// 87 PAY  58 

    0xa0834d81,// 88 PAY  59 

    0xa68fe74c,// 89 PAY  60 

    0x29dbe5e2,// 90 PAY  61 

    0xe467e72d,// 91 PAY  62 

    0xa5c42125,// 92 PAY  63 

    0xcb03cb6e,// 93 PAY  64 

    0x75cb9a66,// 94 PAY  65 

    0x24bbe5dd,// 95 PAY  66 

    0x3f05d5e2,// 96 PAY  67 

    0xfe601717,// 97 PAY  68 

    0x9d60649b,// 98 PAY  69 

    0x74f28379,// 99 PAY  70 

    0x82c9deaf,// 100 PAY  71 

    0x13cc5c82,// 101 PAY  72 

    0x2c411448,// 102 PAY  73 

    0x92c113d1,// 103 PAY  74 

    0xba632ebf,// 104 PAY  75 

    0xe02ff658,// 105 PAY  76 

    0x7f3d5b7d,// 106 PAY  77 

    0x3a09eec3,// 107 PAY  78 

    0xcbf1deb2,// 108 PAY  79 

    0xb49f993a,// 109 PAY  80 

    0x5ce3d0dd,// 110 PAY  81 

    0xb53817c5,// 111 PAY  82 

    0xf698ceb0,// 112 PAY  83 

    0xc6766113,// 113 PAY  84 

    0xddcdab5b,// 114 PAY  85 

    0xadec1e70,// 115 PAY  86 

    0x96479cda,// 116 PAY  87 

    0xb431aa22,// 117 PAY  88 

    0x132a544e,// 118 PAY  89 

    0xfb78a1a8,// 119 PAY  90 

    0x22d82d45,// 120 PAY  91 

    0x67d8fdad,// 121 PAY  92 

    0xcfa030b9,// 122 PAY  93 

    0x9a16c319,// 123 PAY  94 

    0x2f3a5478,// 124 PAY  95 

    0x2374aac3,// 125 PAY  96 

    0x8ab60de3,// 126 PAY  97 

    0x13d71835,// 127 PAY  98 

    0xf86c920a,// 128 PAY  99 

    0xf3217782,// 129 PAY 100 

    0xe009e839,// 130 PAY 101 

    0x7f47abbd,// 131 PAY 102 

    0xde42ca9f,// 132 PAY 103 

    0x586cef52,// 133 PAY 104 

    0x6554a9aa,// 134 PAY 105 

    0xbe9bb724,// 135 PAY 106 

    0x7964ed60,// 136 PAY 107 

    0xdaddf3b3,// 137 PAY 108 

    0x5f948027,// 138 PAY 109 

    0x1c6f8b99,// 139 PAY 110 

    0x594f59ec,// 140 PAY 111 

    0x9fbc5145,// 141 PAY 112 

    0xfe8cb550,// 142 PAY 113 

    0x43893178,// 143 PAY 114 

    0x68836899,// 144 PAY 115 

    0xa6a891d6,// 145 PAY 116 

    0xae0b86cc,// 146 PAY 117 

    0xe6e9eb05,// 147 PAY 118 

    0x7b6b0bff,// 148 PAY 119 

    0xbac9fc98,// 149 PAY 120 

    0xdea3de6a,// 150 PAY 121 

    0x8492a91b,// 151 PAY 122 

    0xb6c50a3d,// 152 PAY 123 

    0x69d67fd1,// 153 PAY 124 

    0x00c0c2aa,// 154 PAY 125 

    0x86dee7e1,// 155 PAY 126 

    0x4d98024a,// 156 PAY 127 

    0x024a971a,// 157 PAY 128 

    0xe3b805b5,// 158 PAY 129 

    0x29aa10e0,// 159 PAY 130 

    0x6b710610,// 160 PAY 131 

    0xf63436ae,// 161 PAY 132 

    0xc4dd50cc,// 162 PAY 133 

    0xf54ec43d,// 163 PAY 134 

    0x8e71d3ba,// 164 PAY 135 

    0x3a63e8e0,// 165 PAY 136 

    0x8ea8f3a4,// 166 PAY 137 

    0x769f962b,// 167 PAY 138 

    0xd8fa233a,// 168 PAY 139 

    0x8dc2da27,// 169 PAY 140 

    0x940cee2e,// 170 PAY 141 

    0xc5a1de9b,// 171 PAY 142 

    0x66e2c30d,// 172 PAY 143 

    0x537614c9,// 173 PAY 144 

    0x10e62497,// 174 PAY 145 

    0xeeb49950,// 175 PAY 146 

    0x8435c15f,// 176 PAY 147 

    0x317017f6,// 177 PAY 148 

    0x5bed7c2e,// 178 PAY 149 

    0x18d3dc05,// 179 PAY 150 

    0xe45fb695,// 180 PAY 151 

    0xaba8c706,// 181 PAY 152 

    0x2e8baa42,// 182 PAY 153 

    0xbc418d19,// 183 PAY 154 

    0x31fad492,// 184 PAY 155 

    0xcceb9f3e,// 185 PAY 156 

    0xbe143f88,// 186 PAY 157 

    0x10b9d527,// 187 PAY 158 

    0x0de0615a,// 188 PAY 159 

    0xebeb30cc,// 189 PAY 160 

    0x521486cf,// 190 PAY 161 

    0x9af00c27,// 191 PAY 162 

    0xfb78c2d8,// 192 PAY 163 

    0x623585e7,// 193 PAY 164 

    0x1f508a35,// 194 PAY 165 

    0x76730218,// 195 PAY 166 

    0xd1317ab1,// 196 PAY 167 

    0x567f10e4,// 197 PAY 168 

    0x1b36c02d,// 198 PAY 169 

    0x08e016a3,// 199 PAY 170 

    0xeb7e44bf,// 200 PAY 171 

    0x636e253d,// 201 PAY 172 

    0x4396da5a,// 202 PAY 173 

    0xc181ea9a,// 203 PAY 174 

    0x2d3b57ab,// 204 PAY 175 

    0xd22a02f9,// 205 PAY 176 

    0x0a8f2240,// 206 PAY 177 

    0x17c18144,// 207 PAY 178 

    0xc3e0ada1,// 208 PAY 179 

    0xad3c52aa,// 209 PAY 180 

    0xc939adc7,// 210 PAY 181 

    0x53a7c5f3,// 211 PAY 182 

    0x343e3eac,// 212 PAY 183 

    0x07fa9ac5,// 213 PAY 184 

    0xdf9d4abf,// 214 PAY 185 

    0x1aa063a1,// 215 PAY 186 

    0xe88ed1e4,// 216 PAY 187 

    0xc34f2b53,// 217 PAY 188 

    0x33d10184,// 218 PAY 189 

    0x623cbec1,// 219 PAY 190 

    0xd5dbca9d,// 220 PAY 191 

    0x9424da99,// 221 PAY 192 

    0x7858b773,// 222 PAY 193 

    0x15097ee7,// 223 PAY 194 

    0x2f8d8594,// 224 PAY 195 

    0xb70bd23b,// 225 PAY 196 

    0x88602dbd,// 226 PAY 197 

    0x285e8169,// 227 PAY 198 

    0xf3e9bd9b,// 228 PAY 199 

    0xdf9754d2,// 229 PAY 200 

    0xb9db87a2,// 230 PAY 201 

    0x86040217,// 231 PAY 202 

    0xd16007e4,// 232 PAY 203 

    0x3b1d1e59,// 233 PAY 204 

    0xa031ad82,// 234 PAY 205 

    0xd9b4cc97,// 235 PAY 206 

    0x80a35ca0,// 236 PAY 207 

    0x8f245fba,// 237 PAY 208 

    0xc0d4f5a7,// 238 PAY 209 

    0xe607650e,// 239 PAY 210 

    0x7023d959,// 240 PAY 211 

    0xae43e514,// 241 PAY 212 

    0xdc53d9b8,// 242 PAY 213 

    0x03ea3e82,// 243 PAY 214 

    0x60d4bccb,// 244 PAY 215 

    0x99622489,// 245 PAY 216 

    0xeb6c3458,// 246 PAY 217 

    0x99720159,// 247 PAY 218 

    0x4724d605,// 248 PAY 219 

    0x1dc8b1d4,// 249 PAY 220 

    0x6ebad712,// 250 PAY 221 

    0xe42241c5,// 251 PAY 222 

    0x5948f633,// 252 PAY 223 

    0x25265d36,// 253 PAY 224 

    0x961964dd,// 254 PAY 225 

    0x756f372d,// 255 PAY 226 

    0x986d2bd9,// 256 PAY 227 

    0xc0937062,// 257 PAY 228 

    0xca018cf0,// 258 PAY 229 

    0x98a44638,// 259 PAY 230 

    0xb59c0ac7,// 260 PAY 231 

    0xb9924983,// 261 PAY 232 

    0xb0c8b555,// 262 PAY 233 

    0xa4cc5f6e,// 263 PAY 234 

    0x96cb929a,// 264 PAY 235 

    0xa9f9f95c,// 265 PAY 236 

    0x8daf86cf,// 266 PAY 237 

    0x1a7c20c8,// 267 PAY 238 

    0xb1b60d0c,// 268 PAY 239 

    0x2b554c84,// 269 PAY 240 

    0x10e31230,// 270 PAY 241 

    0x8ba22332,// 271 PAY 242 

    0xcb46a029,// 272 PAY 243 

    0x9dbedcfc,// 273 PAY 244 

    0xadb4988c,// 274 PAY 245 

    0xa4e92bd7,// 275 PAY 246 

    0xdee07436,// 276 PAY 247 

    0xd17fffcb,// 277 PAY 248 

    0xe2ef5730,// 278 PAY 249 

    0x17080d11,// 279 PAY 250 

    0x9ef9ff22,// 280 PAY 251 

    0x99459a19,// 281 PAY 252 

    0x9d48c20e,// 282 PAY 253 

    0xb7257d77,// 283 PAY 254 

    0xa8baf3f9,// 284 PAY 255 

    0xe762f1ba,// 285 PAY 256 

    0x5affb523,// 286 PAY 257 

    0x54a2b300,// 287 PAY 258 

    0xee7e71d9,// 288 PAY 259 

    0x2857a653,// 289 PAY 260 

    0xfc7e6cdb,// 290 PAY 261 

    0x118f31c6,// 291 PAY 262 

    0xe88ea549,// 292 PAY 263 

    0xa46a3709,// 293 PAY 264 

    0xd650139e,// 294 PAY 265 

    0xc41a7d2b,// 295 PAY 266 

    0xb838011b,// 296 PAY 267 

    0x5ce2d841,// 297 PAY 268 

    0x996c8b92,// 298 PAY 269 

    0xd918350f,// 299 PAY 270 

    0xe74866d1,// 300 PAY 271 

    0x276cf890,// 301 PAY 272 

    0x0590eb8d,// 302 PAY 273 

    0xa2f86e69,// 303 PAY 274 

    0xd45ef1e0,// 304 PAY 275 

    0x5627b217,// 305 PAY 276 

    0xbab8215f,// 306 PAY 277 

    0x37b47878,// 307 PAY 278 

    0x29548b55,// 308 PAY 279 

    0xc6eb2328,// 309 PAY 280 

    0xbaaa31d7,// 310 PAY 281 

    0xca024a53,// 311 PAY 282 

    0x475973ad,// 312 PAY 283 

    0x06c8fe74,// 313 PAY 284 

    0x31450756,// 314 PAY 285 

    0x5c7098f2,// 315 PAY 286 

    0x3663d52e,// 316 PAY 287 

    0xc1522d50,// 317 PAY 288 

    0xad5217ba,// 318 PAY 289 

    0xc8755afa,// 319 PAY 290 

    0x368c7622,// 320 PAY 291 

    0x2e87a51b,// 321 PAY 292 

    0xfa97cbb9,// 322 PAY 293 

    0x1986a696,// 323 PAY 294 

    0x3cd0a802,// 324 PAY 295 

    0x00d3ac23,// 325 PAY 296 

    0xb258a197,// 326 PAY 297 

    0xe29b1f2f,// 327 PAY 298 

    0xf73a015d,// 328 PAY 299 

    0x7611c9e1,// 329 PAY 300 

    0xa29d69b3,// 330 PAY 301 

    0x896a57ac,// 331 PAY 302 

    0x3eaee271,// 332 PAY 303 

    0xf0872f02,// 333 PAY 304 

    0x68da8af5,// 334 PAY 305 

    0x0149de5e,// 335 PAY 306 

    0x7a4aa272,// 336 PAY 307 

    0x2fcf4cc5,// 337 PAY 308 

    0xa32e6034,// 338 PAY 309 

    0xf939e570,// 339 PAY 310 

    0x5ae9709a,// 340 PAY 311 

    0x37290729,// 341 PAY 312 

    0xe27d6154,// 342 PAY 313 

    0x573dbb0e,// 343 PAY 314 

    0x7fe132d0,// 344 PAY 315 

    0x469e6318,// 345 PAY 316 

    0x0cf2b0f9,// 346 PAY 317 

    0xa72977d2,// 347 PAY 318 

    0x7d37d0d4,// 348 PAY 319 

    0xac9d1a77,// 349 PAY 320 

    0xfbbaabdb,// 350 PAY 321 

    0x00e75740,// 351 PAY 322 

    0xac1a0f9d,// 352 PAY 323 

    0xa9588fa8,// 353 PAY 324 

    0x455ca353,// 354 PAY 325 

    0x8b7fe34e,// 355 PAY 326 

    0x16ed5286,// 356 PAY 327 

    0xe7b7edc7,// 357 PAY 328 

    0xab0d6ec3,// 358 PAY 329 

    0x393b4d33,// 359 PAY 330 

    0xc0f2ed49,// 360 PAY 331 

    0x4459f623,// 361 PAY 332 

    0x1c41e7e4,// 362 PAY 333 

    0x49232bc0,// 363 PAY 334 

    0x2f774fc4,// 364 PAY 335 

    0xc57af5da,// 365 PAY 336 

    0x5a64080f,// 366 PAY 337 

    0x9794249d,// 367 PAY 338 

    0x7659b79e,// 368 PAY 339 

    0x8edfa118,// 369 PAY 340 

    0xe3a3039a,// 370 PAY 341 

    0x5e71a979,// 371 PAY 342 

    0x35e6b41d,// 372 PAY 343 

    0xb9db8b76,// 373 PAY 344 

    0x00220556,// 374 PAY 345 

    0x601a3a3e,// 375 PAY 346 

    0x406b2fcb,// 376 PAY 347 

    0x9ba5f5e5,// 377 PAY 348 

    0x0d0b97da,// 378 PAY 349 

    0xbc40269c,// 379 PAY 350 

    0xa6bc5c69,// 380 PAY 351 

    0x1f84b679,// 381 PAY 352 

    0xf675352e,// 382 PAY 353 

    0xa16c0b27,// 383 PAY 354 

    0x9d2b06bf,// 384 PAY 355 

    0x3a801c45,// 385 PAY 356 

    0xbf0f16b1,// 386 PAY 357 

    0x0e4de8bc,// 387 PAY 358 

    0x8f63df05,// 388 PAY 359 

    0xbf2ba1bd,// 389 PAY 360 

    0xda616aec,// 390 PAY 361 

    0x1cf31104,// 391 PAY 362 

    0xcb59afa8,// 392 PAY 363 

    0x48baafbe,// 393 PAY 364 

    0x4e1ca358,// 394 PAY 365 

    0x398a480f,// 395 PAY 366 

    0xdd6bd614,// 396 PAY 367 

    0xd1c818d7,// 397 PAY 368 

    0xa8765f23,// 398 PAY 369 

    0xaaf16b14,// 399 PAY 370 

    0x19240aa0,// 400 PAY 371 

    0xea66c591,// 401 PAY 372 

    0xc2f33cb0,// 402 PAY 373 

    0x1aae809b,// 403 PAY 374 

    0x39e47c36,// 404 PAY 375 

    0xcec22f86,// 405 PAY 376 

    0x64581cb3,// 406 PAY 377 

    0xea1a5844,// 407 PAY 378 

    0xb91cfb8e,// 408 PAY 379 

    0xa1005c4c,// 409 PAY 380 

    0x4e36621c,// 410 PAY 381 

    0x063a8cdd,// 411 PAY 382 

    0x9a488820,// 412 PAY 383 

    0x5c4dbd85,// 413 PAY 384 

    0xdedfc6f7,// 414 PAY 385 

    0xad661a33,// 415 PAY 386 

    0xe21ddd97,// 416 PAY 387 

    0xa041aa06,// 417 PAY 388 

    0x7ac8703f,// 418 PAY 389 

    0x4bda2cc5,// 419 PAY 390 

    0x15e98f13,// 420 PAY 391 

    0x96a715bc,// 421 PAY 392 

    0x3ac6e9dd,// 422 PAY 393 

    0x7ea8a8d2,// 423 PAY 394 

    0xd7c14b90,// 424 PAY 395 

    0x037ccff0,// 425 PAY 396 

    0x6688ba51,// 426 PAY 397 

    0x025a28f2,// 427 PAY 398 

    0x4c2cb6c1,// 428 PAY 399 

    0x461b90dd,// 429 PAY 400 

    0x949721a4,// 430 PAY 401 

    0x97a08994,// 431 PAY 402 

    0xf48e479e,// 432 PAY 403 

    0x21527ad6,// 433 PAY 404 

    0xe91437a4,// 434 PAY 405 

    0xf89f161f,// 435 PAY 406 

    0xff154feb,// 436 PAY 407 

    0xdd0c7a92,// 437 PAY 408 

    0x1b2af819,// 438 PAY 409 

    0x06f19ce8,// 439 PAY 410 

    0x318ee3e9,// 440 PAY 411 

    0x3aa7f6f4,// 441 PAY 412 

    0xfe48d50f,// 442 PAY 413 

    0x9b7b950f,// 443 PAY 414 

    0x6b9859f8,// 444 PAY 415 

    0x3167f33a,// 445 PAY 416 

    0x362e2ad7,// 446 PAY 417 

    0x20cabdd3,// 447 PAY 418 

    0xe8052a12,// 448 PAY 419 

    0x362c3327,// 449 PAY 420 

    0x97c1ca03,// 450 PAY 421 

    0x23a59869,// 451 PAY 422 

    0xa22c3794,// 452 PAY 423 

    0x9fce7470,// 453 PAY 424 

    0x12f8e275,// 454 PAY 425 

    0x24547ca1,// 455 PAY 426 

    0x5ab73dd8,// 456 PAY 427 

    0x0786db4e,// 457 PAY 428 

    0x701f0304,// 458 PAY 429 

    0x95ebf6e7,// 459 PAY 430 

    0x24531661,// 460 PAY 431 

    0x9c7f1382,// 461 PAY 432 

    0x54974523,// 462 PAY 433 

    0x868c3e98,// 463 PAY 434 

    0x96bea438,// 464 PAY 435 

    0xbe40792f,// 465 PAY 436 

    0xdde9a14f,// 466 PAY 437 

/// STA is 1 words. 

/// STA num_pkts       : 133 

/// STA pkt_idx        : 255 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x4 

    0x03fc0485 // 467 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 80 (0x50) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_sha1_pkt81_tmpl[] = {
    0xb8010050,// 1 CCH   1 

/// ECH cache_idx      : 0x0e 

/// ECH pdu_tag        : 0x00 

    0x000e0000,// 2 ECH   1 

/// SCX is 19 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound !save_icv insert_icv check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : SHA1 

/// SCX aes_size        : RC4UPDT_AES192 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x1 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 40 

    0x08000013,// 3 SCX   1 

    0x8061481c,// 4 SCX   2 

    0x00003100,// 5 SCX   3 

    0x2b97ce31,// 6 SCX   4 

    0x6880199f,// 7 SCX   5 

    0xbf4c01b2,// 8 SCX   6 

    0x23d2faf2,// 9 SCX   7 

    0xf3b5bc4e,// 10 SCX   8 

    0x66bf601c,// 11 SCX   9 

    0x21035ad7,// 12 SCX  10 

    0x7e2cfba9,// 13 SCX  11 

    0xfb880789,// 14 SCX  12 

    0xf17a91e8,// 15 SCX  13 

    0xadeffe81,// 16 SCX  14 

    0xdc04592c,// 17 SCX  15 

    0x3d2055c0,// 18 SCX  16 

    0x6a73ff56,// 19 SCX  17 

    0x4aa18627,// 20 SCX  18 

    0xbb9467f2,// 21 SCX  19 

/// BFD is 3 words. 

/// BFD tot_len        : 210 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 134 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 134 

/// BFD lencrypto      : 16 

/// BFD ofstcrypto     : 52 

/// BFD (ofst+len)cry  : 68 

/// BFD ofstiv         : 32 

/// BFD ofsticv        : 140 

    0x00000086,// 22 BFD   1 

    0x00340010,// 23 BFD   2 

    0x008c0020,// 24 BFD   3 

/// MFM is 3 words. 

/// MFM vldnibs        : 10 

    0x10003397,// 25 MFM   1 

    0x2c6a4029,// 26 MFM   2 

    0x3cb50000,// 27 MFM   3 

/// BDA is 54 words. 

/// BDA size     is 210 (0xd2) 

/// BDA id       is 0xe599 

    0x00d2e599,// 28 BDA   1 

/// PAY Generic Data size   : 210 byte(s) 

/// PAD Buffer Data Pad size   : 2 byte(s) 

    0x35f8108d,// 29 PAY   1 

    0xf2c9a7cc,// 30 PAY   2 

    0x977c7ef9,// 31 PAY   3 

    0x4b7ee154,// 32 PAY   4 

    0xa60ca1a1,// 33 PAY   5 

    0xb5182951,// 34 PAY   6 

    0x51653ee6,// 35 PAY   7 

    0xb087a969,// 36 PAY   8 

    0x46f6ee49,// 37 PAY   9 

    0x84ad570c,// 38 PAY  10 

    0xb07cd3d0,// 39 PAY  11 

    0xf9dd2feb,// 40 PAY  12 

    0x8a6421ef,// 41 PAY  13 

    0xe486bc72,// 42 PAY  14 

    0x67b4695d,// 43 PAY  15 

    0xbe8d8f39,// 44 PAY  16 

    0x5aa42f8f,// 45 PAY  17 

    0x8da70b34,// 46 PAY  18 

    0x2d974a3d,// 47 PAY  19 

    0xbee534dc,// 48 PAY  20 

    0x77a29560,// 49 PAY  21 

    0x3532d411,// 50 PAY  22 

    0xb10792ed,// 51 PAY  23 

    0xff7e1d21,// 52 PAY  24 

    0x57167ede,// 53 PAY  25 

    0x4b82c125,// 54 PAY  26 

    0x79e5f0e9,// 55 PAY  27 

    0xb7e56798,// 56 PAY  28 

    0x4471561f,// 57 PAY  29 

    0x0b96b0cf,// 58 PAY  30 

    0x60922cc7,// 59 PAY  31 

    0x343df9d9,// 60 PAY  32 

    0x729f2523,// 61 PAY  33 

    0xfec0dc78,// 62 PAY  34 

    0xdbb687f5,// 63 PAY  35 

    0x8c1c2bce,// 64 PAY  36 

    0x4e1e14d1,// 65 PAY  37 

    0x56e85325,// 66 PAY  38 

    0x3f2e30ba,// 67 PAY  39 

    0xe375a7d6,// 68 PAY  40 

    0x424856bf,// 69 PAY  41 

    0x404e8288,// 70 PAY  42 

    0x52c00c2b,// 71 PAY  43 

    0xb59f013d,// 72 PAY  44 

    0x87d386b8,// 73 PAY  45 

    0x9a331e3f,// 74 PAY  46 

    0x279d83da,// 75 PAY  47 

    0x5c4c3a20,// 76 PAY  48 

    0x5958381c,// 77 PAY  49 

    0x40f49251,// 78 PAY  50 

    0x9897757d,// 79 PAY  51 

    0x53a98f19,// 80 PAY  52 

    0x054e0000,// 81 PAY  53 

/// STA is 1 words. 

/// STA num_pkts       : 210 

/// STA pkt_idx        : 251 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x1f 

    0x03ed1fd2 // 82 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 80 (0x50) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_sha1_pkt82_tmpl[] = {
    0xb8010050,// 1 CCH   1 

/// ECH cache_idx      : 0x06 

/// ECH pdu_tag        : 0x00 

    0x00060000,// 2 ECH   1 

/// SCX is 19 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound !save_icv !insert_icv !check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : SHA1 

/// SCX aes_size        : AES256 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x4 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 40 

    0x08000013,// 3 SCX   1 

    0x806248ab,// 4 SCX   2 

    0x00000400,// 5 SCX   3 

    0xf5e22d6c,// 6 SCX   4 

    0xe5f8da85,// 7 SCX   5 

    0xef2714fc,// 8 SCX   6 

    0xc95c8924,// 9 SCX   7 

    0x8d886b35,// 10 SCX   8 

    0xb8b4fe93,// 11 SCX   9 

    0x75140ae2,// 12 SCX  10 

    0x4ba6cc6a,// 13 SCX  11 

    0x40cae6e1,// 14 SCX  12 

    0x71c18d5d,// 15 SCX  13 

    0xe17ba53e,// 16 SCX  14 

    0xaa64462a,// 17 SCX  15 

    0xa46d50fe,// 18 SCX  16 

    0x652a7ec0,// 19 SCX  17 

    0xa61693d3,// 20 SCX  18 

    0xe550a9a5,// 21 SCX  19 

/// BFD is 3 words. 

/// BFD tot_len        : 616 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 283 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 283 

/// BFD lencrypto      : 24 

/// BFD ofstcrypto     : 236 

/// BFD (ofst+len)cry  : 260 

/// BFD ofstiv         : 136 

/// BFD ofsticv        : 308 

    0x0000011b,// 22 BFD   1 

    0x00ec0018,// 23 BFD   2 

    0x01340088,// 24 BFD   3 

/// MFM is 3 words. 

/// MFM vldnibs        : f 

    0x0f00bcb0,// 25 MFM   1 

    0xdb868951,// 26 MFM   2 

    0xb4300000,// 27 MFM   3 

/// BDA is 155 words. 

/// BDA size     is 616 (0x268) 

/// BDA id       is 0x8517 

    0x02688517,// 28 BDA   1 

/// PAY Generic Data size   : 616 byte(s) 

/// PAD Buffer Data Pad size   : 0 byte(s) 

    0x33812981,// 29 PAY   1 

    0x3f00df34,// 30 PAY   2 

    0x77ea94bc,// 31 PAY   3 

    0x7e15ce08,// 32 PAY   4 

    0x66c27f93,// 33 PAY   5 

    0x92c7b865,// 34 PAY   6 

    0xac536fc1,// 35 PAY   7 

    0x8f5c2a00,// 36 PAY   8 

    0xaf5b064d,// 37 PAY   9 

    0x91d0ba47,// 38 PAY  10 

    0x4c0bd185,// 39 PAY  11 

    0x2ae63cae,// 40 PAY  12 

    0x2e3b9a20,// 41 PAY  13 

    0x7571dfaf,// 42 PAY  14 

    0xa28488bf,// 43 PAY  15 

    0xd2fd3cfd,// 44 PAY  16 

    0xa6d462bb,// 45 PAY  17 

    0x7f2da2ef,// 46 PAY  18 

    0x82569725,// 47 PAY  19 

    0xe4ceb625,// 48 PAY  20 

    0xebb3855e,// 49 PAY  21 

    0xfbefbd57,// 50 PAY  22 

    0x465be8c6,// 51 PAY  23 

    0x2eccbbd8,// 52 PAY  24 

    0xf4740ede,// 53 PAY  25 

    0x70b08037,// 54 PAY  26 

    0xaa34bfe7,// 55 PAY  27 

    0x63f7d82c,// 56 PAY  28 

    0x60419cb7,// 57 PAY  29 

    0x7aaf6b07,// 58 PAY  30 

    0x030f71a9,// 59 PAY  31 

    0xe0c1fc16,// 60 PAY  32 

    0xaf5290fa,// 61 PAY  33 

    0xd0e0404d,// 62 PAY  34 

    0x7117fcad,// 63 PAY  35 

    0x76ed0e52,// 64 PAY  36 

    0xac3ca39c,// 65 PAY  37 

    0xfa711a06,// 66 PAY  38 

    0xba1d6117,// 67 PAY  39 

    0x1d943811,// 68 PAY  40 

    0x36e9e4c8,// 69 PAY  41 

    0xbf672ac8,// 70 PAY  42 

    0x4ddbf050,// 71 PAY  43 

    0xaa7deae7,// 72 PAY  44 

    0xfab57244,// 73 PAY  45 

    0x88688c56,// 74 PAY  46 

    0x6ade3304,// 75 PAY  47 

    0xb6b263f8,// 76 PAY  48 

    0xbbf3d729,// 77 PAY  49 

    0x4ebfed49,// 78 PAY  50 

    0x694676e1,// 79 PAY  51 

    0x7145dd79,// 80 PAY  52 

    0x5993cb10,// 81 PAY  53 

    0x93867cd5,// 82 PAY  54 

    0x471a81f0,// 83 PAY  55 

    0x705c8e99,// 84 PAY  56 

    0x9e2a9e94,// 85 PAY  57 

    0x730033fb,// 86 PAY  58 

    0x580dd81f,// 87 PAY  59 

    0x3ee73280,// 88 PAY  60 

    0x8e0eb5c1,// 89 PAY  61 

    0x1b1a4d17,// 90 PAY  62 

    0x39efaef8,// 91 PAY  63 

    0x68dfb19c,// 92 PAY  64 

    0x226485ad,// 93 PAY  65 

    0x817ea6fd,// 94 PAY  66 

    0x5a283f95,// 95 PAY  67 

    0x4111666c,// 96 PAY  68 

    0x5738c89f,// 97 PAY  69 

    0x41cc9042,// 98 PAY  70 

    0xb5993a1e,// 99 PAY  71 

    0x6551e9cb,// 100 PAY  72 

    0xa0a3031b,// 101 PAY  73 

    0x6a29a424,// 102 PAY  74 

    0x814d27ff,// 103 PAY  75 

    0x2ddce56b,// 104 PAY  76 

    0x9c5b6e42,// 105 PAY  77 

    0x48073952,// 106 PAY  78 

    0xb745931a,// 107 PAY  79 

    0xdf3fd008,// 108 PAY  80 

    0x46458723,// 109 PAY  81 

    0xdc282878,// 110 PAY  82 

    0xd1733c0f,// 111 PAY  83 

    0x4af923e8,// 112 PAY  84 

    0x92aa0ef7,// 113 PAY  85 

    0x08a57c77,// 114 PAY  86 

    0x87b57936,// 115 PAY  87 

    0xe4218da0,// 116 PAY  88 

    0xaa2b156a,// 117 PAY  89 

    0x7fd9ef9a,// 118 PAY  90 

    0x97b9ac02,// 119 PAY  91 

    0xa9b47cbb,// 120 PAY  92 

    0xbbac6b5f,// 121 PAY  93 

    0xe8ff30d5,// 122 PAY  94 

    0x60f6bf8b,// 123 PAY  95 

    0x66d100e9,// 124 PAY  96 

    0x6a19c051,// 125 PAY  97 

    0x078bb5ea,// 126 PAY  98 

    0x2651b00b,// 127 PAY  99 

    0xd2c58557,// 128 PAY 100 

    0xe4e37923,// 129 PAY 101 

    0x9c116715,// 130 PAY 102 

    0x7d14d517,// 131 PAY 103 

    0xb08f0700,// 132 PAY 104 

    0xfd8b2d9e,// 133 PAY 105 

    0x4830797c,// 134 PAY 106 

    0x373aa817,// 135 PAY 107 

    0xf447c14a,// 136 PAY 108 

    0x0ee02168,// 137 PAY 109 

    0x58a7dd5e,// 138 PAY 110 

    0x73874fe4,// 139 PAY 111 

    0x38b11290,// 140 PAY 112 

    0x80980dab,// 141 PAY 113 

    0x0b1fac69,// 142 PAY 114 

    0x094b5e5f,// 143 PAY 115 

    0x1242739e,// 144 PAY 116 

    0x78029f6d,// 145 PAY 117 

    0x634055a2,// 146 PAY 118 

    0xb21bdf92,// 147 PAY 119 

    0x97a65fc2,// 148 PAY 120 

    0xdcbf2bce,// 149 PAY 121 

    0x4c57c68a,// 150 PAY 122 

    0xb2796f3f,// 151 PAY 123 

    0x19c5ea39,// 152 PAY 124 

    0xd7f4d165,// 153 PAY 125 

    0x195c721d,// 154 PAY 126 

    0xb263fc2a,// 155 PAY 127 

    0x3e856e31,// 156 PAY 128 

    0xe5f23b95,// 157 PAY 129 

    0xeb6adb09,// 158 PAY 130 

    0x42e7a1c5,// 159 PAY 131 

    0x34d88ce8,// 160 PAY 132 

    0xc34a8835,// 161 PAY 133 

    0xcd649757,// 162 PAY 134 

    0xa409359d,// 163 PAY 135 

    0x39e3f3fa,// 164 PAY 136 

    0x1fb6db10,// 165 PAY 137 

    0x7dc17ed3,// 166 PAY 138 

    0x48cb5044,// 167 PAY 139 

    0x2e25e8d7,// 168 PAY 140 

    0x36e9acd5,// 169 PAY 141 

    0x020fdf8c,// 170 PAY 142 

    0xfa6e8f30,// 171 PAY 143 

    0xda581872,// 172 PAY 144 

    0x6309debf,// 173 PAY 145 

    0x14593f2d,// 174 PAY 146 

    0xefe2d02e,// 175 PAY 147 

    0x399f9d6d,// 176 PAY 148 

    0x7e665049,// 177 PAY 149 

    0x1e2635b7,// 178 PAY 150 

    0x9dab7e90,// 179 PAY 151 

    0xeb8e119e,// 180 PAY 152 

    0x1d60c070,// 181 PAY 153 

    0xc5454d54,// 182 PAY 154 

/// STA is 1 words. 

/// STA num_pkts       : 81 

/// STA pkt_idx        : 247 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xdc 

    0x03dcdc51 // 183 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 88 (0x58) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_sha1_pkt83_tmpl[] = {
    0xb8010058,// 1 CCH   1 

/// ECH cache_idx      : 0x0f 

/// ECH pdu_tag        : 0x00 

    0x000f0000,// 2 ECH   1 

/// SCX is 21 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound !save_icv insert_icv !check_icv sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : SHA1 

/// SCX aes_size        : NORMAL_RC4INIT_AES128 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x3 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 8 

/// SCX authctx_size    : 40 

    0x08000015,// 3 SCX   1 

    0x80644853,// 4 SCX   2 

    0x00002382,// 5 SCX   3 

    0xeb6454c7,// 6 SCX   4 

    0x02b9fa5f,// 7 SCX   5 

    0x8685e038,// 8 SCX   6 

    0x45d32e24,// 9 SCX   7 

    0x4e2366c1,// 10 SCX   8 

    0x0ab13862,// 11 SCX   9 

    0xeeed615f,// 12 SCX  10 

    0xe92ebc57,// 13 SCX  11 

    0xc538e765,// 14 SCX  12 

    0x7e39a1bf,// 15 SCX  13 

    0xac556439,// 16 SCX  14 

    0x1c99c023,// 17 SCX  15 

    0xc4d05a51,// 18 SCX  16 

    0x8580ace4,// 19 SCX  17 

    0xbaef0004,// 20 SCX  18 

    0x5b965402,// 21 SCX  19 

    0xde70bc25,// 22 SCX  20 

    0x39eb700d,// 23 SCX  21 

/// BFD is 3 words. 

/// BFD tot_len        : 1946 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 1746 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 1746 

/// BFD lencrypto      : 272 

/// BFD ofstcrypto     : 1248 

/// BFD (ofst+len)cry  : 1520 

/// BFD ofstiv         : 408 

/// BFD ofsticv        : 1812 

    0x000006d2,// 24 BFD   1 

    0x04e00110,// 25 BFD   2 

    0x07140198,// 26 BFD   3 

/// MFM is 14 words. 

/// MFM vldnibs        : 68 

    0x68008b2a,// 27 MFM   1 

    0xcdc8f0ef,// 28 MFM   2 

    0x18a94412,// 29 MFM   3 

    0x9902dca0,// 30 MFM   4 

    0x29e445f6,// 31 MFM   5 

    0x28602b6b,// 32 MFM   6 

    0x16dc4393,// 33 MFM   7 

    0x84716c95,// 34 MFM   8 

    0x8a178de2,// 35 MFM   9 

    0x044b826a,// 36 MFM  10 

    0x37dc448e,// 37 MFM  11 

    0x441f1151,// 38 MFM  12 

    0xc4ca4814,// 39 MFM  13 

    0xfffb0000,// 40 MFM  14 

/// BDA is 488 words. 

/// BDA size     is 1946 (0x79a) 

/// BDA id       is 0x8d6d 

    0x079a8d6d,// 41 BDA   1 

/// PAY Generic Data size   : 1946 byte(s) 

/// PAD Buffer Data Pad size   : 2 byte(s) 

    0x369000fe,// 42 PAY   1 

    0x4b96fdda,// 43 PAY   2 

    0xf1125a51,// 44 PAY   3 

    0x30dcf55b,// 45 PAY   4 

    0xb9a207c4,// 46 PAY   5 

    0xc8c9e3d8,// 47 PAY   6 

    0xfcf5f07e,// 48 PAY   7 

    0x5cbdc94b,// 49 PAY   8 

    0x4e5e51f4,// 50 PAY   9 

    0x82b72e84,// 51 PAY  10 

    0x31ec8c8f,// 52 PAY  11 

    0xa098be60,// 53 PAY  12 

    0x155cde0b,// 54 PAY  13 

    0x7bc9d511,// 55 PAY  14 

    0xdfffd7c3,// 56 PAY  15 

    0xafa3cf61,// 57 PAY  16 

    0x03652780,// 58 PAY  17 

    0x8b296bf3,// 59 PAY  18 

    0x26844df6,// 60 PAY  19 

    0x90f73ce9,// 61 PAY  20 

    0x38ad34e7,// 62 PAY  21 

    0xe8fe61f4,// 63 PAY  22 

    0x896f79cb,// 64 PAY  23 

    0x9fc9e4a4,// 65 PAY  24 

    0x32205cad,// 66 PAY  25 

    0x8f010d42,// 67 PAY  26 

    0x04c4a0e7,// 68 PAY  27 

    0x40e35df3,// 69 PAY  28 

    0x2d6846a2,// 70 PAY  29 

    0xb342373a,// 71 PAY  30 

    0x5ec7f7be,// 72 PAY  31 

    0xabeaddce,// 73 PAY  32 

    0x95c5cc85,// 74 PAY  33 

    0xf1ab8ef0,// 75 PAY  34 

    0xc9bc788b,// 76 PAY  35 

    0x00ca02b4,// 77 PAY  36 

    0x19e631f6,// 78 PAY  37 

    0x808039ed,// 79 PAY  38 

    0x58597b2d,// 80 PAY  39 

    0xb9e63dec,// 81 PAY  40 

    0xe79ba792,// 82 PAY  41 

    0x193a98e4,// 83 PAY  42 

    0x0185e734,// 84 PAY  43 

    0xffb1b515,// 85 PAY  44 

    0x1117e0d8,// 86 PAY  45 

    0x4119eefe,// 87 PAY  46 

    0xe000ec93,// 88 PAY  47 

    0xacddf1f1,// 89 PAY  48 

    0x6cdb5a68,// 90 PAY  49 

    0x318954e4,// 91 PAY  50 

    0x27cb669d,// 92 PAY  51 

    0x7a51aa2b,// 93 PAY  52 

    0x9705d3df,// 94 PAY  53 

    0x2694cd72,// 95 PAY  54 

    0xa0fcc600,// 96 PAY  55 

    0xccd94411,// 97 PAY  56 

    0xdff2e8e0,// 98 PAY  57 

    0xebc87e88,// 99 PAY  58 

    0xe415feac,// 100 PAY  59 

    0xf9164741,// 101 PAY  60 

    0xa80090f3,// 102 PAY  61 

    0x82089177,// 103 PAY  62 

    0x1327e04e,// 104 PAY  63 

    0x84910e1c,// 105 PAY  64 

    0x7a93344c,// 106 PAY  65 

    0x92919e9b,// 107 PAY  66 

    0x6a4fe762,// 108 PAY  67 

    0x0d501787,// 109 PAY  68 

    0xf7f00a73,// 110 PAY  69 

    0x6e270bc8,// 111 PAY  70 

    0xe65f869e,// 112 PAY  71 

    0x4f2ab923,// 113 PAY  72 

    0x33c9322a,// 114 PAY  73 

    0xa4d96969,// 115 PAY  74 

    0x8dad229b,// 116 PAY  75 

    0xe6baaf19,// 117 PAY  76 

    0xc3590822,// 118 PAY  77 

    0x641ecc02,// 119 PAY  78 

    0x89f9cc60,// 120 PAY  79 

    0x31ef92ae,// 121 PAY  80 

    0xebc28077,// 122 PAY  81 

    0xe8c36d02,// 123 PAY  82 

    0x02af50a4,// 124 PAY  83 

    0x02379e75,// 125 PAY  84 

    0xec882d29,// 126 PAY  85 

    0xedfc20d6,// 127 PAY  86 

    0x193a46b6,// 128 PAY  87 

    0xe152f48f,// 129 PAY  88 

    0xb614b718,// 130 PAY  89 

    0xda96321f,// 131 PAY  90 

    0xff2c0631,// 132 PAY  91 

    0x2dca2849,// 133 PAY  92 

    0x45804a72,// 134 PAY  93 

    0xe939a65a,// 135 PAY  94 

    0xb225ca09,// 136 PAY  95 

    0x6c906495,// 137 PAY  96 

    0x4055e408,// 138 PAY  97 

    0xbde3b7a4,// 139 PAY  98 

    0xb33d552a,// 140 PAY  99 

    0xaa56404f,// 141 PAY 100 

    0x62c902b8,// 142 PAY 101 

    0x75841cc2,// 143 PAY 102 

    0x91f118d9,// 144 PAY 103 

    0xcd6ac39b,// 145 PAY 104 

    0xdc6bfaa1,// 146 PAY 105 

    0xa7e3a5f1,// 147 PAY 106 

    0x67da098f,// 148 PAY 107 

    0x675e03fc,// 149 PAY 108 

    0x132567c8,// 150 PAY 109 

    0x9bb4c358,// 151 PAY 110 

    0xd6256d53,// 152 PAY 111 

    0xf4c279fb,// 153 PAY 112 

    0xe6f8814c,// 154 PAY 113 

    0xe051f52e,// 155 PAY 114 

    0xb3a2d05c,// 156 PAY 115 

    0x20b625f3,// 157 PAY 116 

    0xdd497ed5,// 158 PAY 117 

    0xfe7de7bd,// 159 PAY 118 

    0xbaab08a2,// 160 PAY 119 

    0x09d8d62b,// 161 PAY 120 

    0x09cdbacb,// 162 PAY 121 

    0x1c948014,// 163 PAY 122 

    0x7eabce81,// 164 PAY 123 

    0xbdd34667,// 165 PAY 124 

    0x6d128835,// 166 PAY 125 

    0x34933532,// 167 PAY 126 

    0xec2f07df,// 168 PAY 127 

    0x397db6f8,// 169 PAY 128 

    0x26214287,// 170 PAY 129 

    0xe84ca959,// 171 PAY 130 

    0x85655109,// 172 PAY 131 

    0xaf926b40,// 173 PAY 132 

    0x0e45acc4,// 174 PAY 133 

    0xb7fe7dfe,// 175 PAY 134 

    0xd360bda9,// 176 PAY 135 

    0x225efab7,// 177 PAY 136 

    0xe432998e,// 178 PAY 137 

    0x3d343988,// 179 PAY 138 

    0x3c6f0c6c,// 180 PAY 139 

    0xa6560a3c,// 181 PAY 140 

    0xc909e3bc,// 182 PAY 141 

    0x8fe09e90,// 183 PAY 142 

    0xa8bf7869,// 184 PAY 143 

    0x9dcc0856,// 185 PAY 144 

    0x12cd75c6,// 186 PAY 145 

    0xb1230124,// 187 PAY 146 

    0xbf350e94,// 188 PAY 147 

    0xf33c06ff,// 189 PAY 148 

    0x0e992bbe,// 190 PAY 149 

    0x68026cfa,// 191 PAY 150 

    0xbeb00c00,// 192 PAY 151 

    0xd9d5b446,// 193 PAY 152 

    0x251495ae,// 194 PAY 153 

    0xe21ebe65,// 195 PAY 154 

    0x953f1c05,// 196 PAY 155 

    0x1e8b8018,// 197 PAY 156 

    0x97fea260,// 198 PAY 157 

    0x2899d8ab,// 199 PAY 158 

    0x51b54a3f,// 200 PAY 159 

    0x7156a0d3,// 201 PAY 160 

    0x3201ecac,// 202 PAY 161 

    0xa6fba62d,// 203 PAY 162 

    0x7cc4da2c,// 204 PAY 163 

    0x11b33937,// 205 PAY 164 

    0x3a9637ef,// 206 PAY 165 

    0x946e21db,// 207 PAY 166 

    0x3408c3c3,// 208 PAY 167 

    0xf10881d7,// 209 PAY 168 

    0x05315d62,// 210 PAY 169 

    0xbc13598c,// 211 PAY 170 

    0x908b54ca,// 212 PAY 171 

    0x15d65ef1,// 213 PAY 172 

    0xde5abfad,// 214 PAY 173 

    0x2d2fb85e,// 215 PAY 174 

    0x81c7b0e3,// 216 PAY 175 

    0x6874a7cc,// 217 PAY 176 

    0xa4935486,// 218 PAY 177 

    0x9c1232b3,// 219 PAY 178 

    0xcc1d6b7d,// 220 PAY 179 

    0x68b9e530,// 221 PAY 180 

    0x861a8810,// 222 PAY 181 

    0x09d13a71,// 223 PAY 182 

    0xa58b299e,// 224 PAY 183 

    0x86333f53,// 225 PAY 184 

    0xd2fd224e,// 226 PAY 185 

    0xe61054a4,// 227 PAY 186 

    0xd05ebe14,// 228 PAY 187 

    0x449e8475,// 229 PAY 188 

    0x6a47d23e,// 230 PAY 189 

    0xe5970ad2,// 231 PAY 190 

    0x01b36c4f,// 232 PAY 191 

    0x11bdefb1,// 233 PAY 192 

    0x191293be,// 234 PAY 193 

    0xda384203,// 235 PAY 194 

    0x0f1b0b11,// 236 PAY 195 

    0xbd765037,// 237 PAY 196 

    0x5203f550,// 238 PAY 197 

    0x4fa5eaee,// 239 PAY 198 

    0x5c66493b,// 240 PAY 199 

    0xb7ff3a15,// 241 PAY 200 

    0xe554d935,// 242 PAY 201 

    0x22aefd6e,// 243 PAY 202 

    0x13b2c711,// 244 PAY 203 

    0x4be5ab40,// 245 PAY 204 

    0xace4fca1,// 246 PAY 205 

    0xa2723b88,// 247 PAY 206 

    0xb3da3a8e,// 248 PAY 207 

    0xa39e525f,// 249 PAY 208 

    0x5d829026,// 250 PAY 209 

    0xb8969c1f,// 251 PAY 210 

    0xaf59f42d,// 252 PAY 211 

    0xdf1acc5a,// 253 PAY 212 

    0x92d8019c,// 254 PAY 213 

    0x38897b74,// 255 PAY 214 

    0x9a25214d,// 256 PAY 215 

    0xbb4fc6b0,// 257 PAY 216 

    0x4b5bfdd9,// 258 PAY 217 

    0xd7d590ea,// 259 PAY 218 

    0x2e48bb68,// 260 PAY 219 

    0x85c10865,// 261 PAY 220 

    0x294ced6c,// 262 PAY 221 

    0x8be1b730,// 263 PAY 222 

    0x07ac7eac,// 264 PAY 223 

    0xc53174c4,// 265 PAY 224 

    0x4e267279,// 266 PAY 225 

    0xaa71015e,// 267 PAY 226 

    0x2b9a6115,// 268 PAY 227 

    0x7873dbb5,// 269 PAY 228 

    0xf9b1e0eb,// 270 PAY 229 

    0xd9dfa974,// 271 PAY 230 

    0xfd99370a,// 272 PAY 231 

    0x1b2c33fc,// 273 PAY 232 

    0x9320844c,// 274 PAY 233 

    0x075bdfc3,// 275 PAY 234 

    0x558a20cd,// 276 PAY 235 

    0xa700cdf8,// 277 PAY 236 

    0xa0f3ecf1,// 278 PAY 237 

    0xa6b21472,// 279 PAY 238 

    0x2fbc6cdb,// 280 PAY 239 

    0xf37a0009,// 281 PAY 240 

    0xc2434ec7,// 282 PAY 241 

    0x14f3ccfa,// 283 PAY 242 

    0x0fb82dc7,// 284 PAY 243 

    0xb7d61933,// 285 PAY 244 

    0x03743492,// 286 PAY 245 

    0xfc84671a,// 287 PAY 246 

    0x342875e8,// 288 PAY 247 

    0x5aafe739,// 289 PAY 248 

    0x8c50e6d3,// 290 PAY 249 

    0x0244237b,// 291 PAY 250 

    0x01b4eb96,// 292 PAY 251 

    0xb9a6d019,// 293 PAY 252 

    0x782474c3,// 294 PAY 253 

    0xb32ffe0e,// 295 PAY 254 

    0x3883db3f,// 296 PAY 255 

    0x38026de4,// 297 PAY 256 

    0xb8703f75,// 298 PAY 257 

    0x0fe484b5,// 299 PAY 258 

    0x50fd6830,// 300 PAY 259 

    0x5b77780d,// 301 PAY 260 

    0x5ffaf131,// 302 PAY 261 

    0xf95267cd,// 303 PAY 262 

    0x837f058d,// 304 PAY 263 

    0xd494602f,// 305 PAY 264 

    0x6088b916,// 306 PAY 265 

    0x8c07029e,// 307 PAY 266 

    0x7ce4d340,// 308 PAY 267 

    0x1cfc873d,// 309 PAY 268 

    0x371a6a06,// 310 PAY 269 

    0xc6fc32fc,// 311 PAY 270 

    0xe9edb36b,// 312 PAY 271 

    0x393a8968,// 313 PAY 272 

    0x1e14986a,// 314 PAY 273 

    0xf2f8ad7f,// 315 PAY 274 

    0x4a18111a,// 316 PAY 275 

    0xbeb7d75e,// 317 PAY 276 

    0xc8f5715a,// 318 PAY 277 

    0x1d13d7dc,// 319 PAY 278 

    0xe1c05cf5,// 320 PAY 279 

    0x45212e48,// 321 PAY 280 

    0x327e2470,// 322 PAY 281 

    0x31fc7881,// 323 PAY 282 

    0x2804f9b1,// 324 PAY 283 

    0x28b2098e,// 325 PAY 284 

    0xca133e8e,// 326 PAY 285 

    0x39139806,// 327 PAY 286 

    0x42ae4a2b,// 328 PAY 287 

    0x03acfda3,// 329 PAY 288 

    0xc88df92c,// 330 PAY 289 

    0x0746ef10,// 331 PAY 290 

    0x7aff09cf,// 332 PAY 291 

    0x2a31b3d8,// 333 PAY 292 

    0x901bff3a,// 334 PAY 293 

    0xe098f81b,// 335 PAY 294 

    0x5d5fe9ad,// 336 PAY 295 

    0x1e6b76f8,// 337 PAY 296 

    0xf5241ef9,// 338 PAY 297 

    0x5318d2ef,// 339 PAY 298 

    0xcd6568cd,// 340 PAY 299 

    0xac554cff,// 341 PAY 300 

    0xce896e9d,// 342 PAY 301 

    0xa1a8af95,// 343 PAY 302 

    0x29482bbb,// 344 PAY 303 

    0x00810e56,// 345 PAY 304 

    0x9c27929e,// 346 PAY 305 

    0x59d3a16a,// 347 PAY 306 

    0x9f26bffe,// 348 PAY 307 

    0xbfac2045,// 349 PAY 308 

    0x02417dba,// 350 PAY 309 

    0xf8de61d8,// 351 PAY 310 

    0x00921258,// 352 PAY 311 

    0x85bca8c9,// 353 PAY 312 

    0xaa813703,// 354 PAY 313 

    0x78b8263b,// 355 PAY 314 

    0x85961620,// 356 PAY 315 

    0x6867d911,// 357 PAY 316 

    0xe8736e2d,// 358 PAY 317 

    0xf8ce1516,// 359 PAY 318 

    0x0d55479f,// 360 PAY 319 

    0x8a7b058b,// 361 PAY 320 

    0x48106fbf,// 362 PAY 321 

    0x0ab1c27e,// 363 PAY 322 

    0x132ea335,// 364 PAY 323 

    0xc26f09a7,// 365 PAY 324 

    0x110b6202,// 366 PAY 325 

    0x631c2f0f,// 367 PAY 326 

    0x874a948d,// 368 PAY 327 

    0xeb27086f,// 369 PAY 328 

    0x22225ed3,// 370 PAY 329 

    0x635a7137,// 371 PAY 330 

    0xd9b4a7b5,// 372 PAY 331 

    0xd0af7fc4,// 373 PAY 332 

    0xf53e4a56,// 374 PAY 333 

    0x742d8f3a,// 375 PAY 334 

    0x627add29,// 376 PAY 335 

    0x30051cab,// 377 PAY 336 

    0x51865df9,// 378 PAY 337 

    0xe00cdc6c,// 379 PAY 338 

    0x76931bd5,// 380 PAY 339 

    0x805232c0,// 381 PAY 340 

    0xef65cbe9,// 382 PAY 341 

    0xe2f651d6,// 383 PAY 342 

    0x3a5a4c3c,// 384 PAY 343 

    0xb586233a,// 385 PAY 344 

    0x4fbac96c,// 386 PAY 345 

    0xff22ca8e,// 387 PAY 346 

    0xab901363,// 388 PAY 347 

    0xfe476b5a,// 389 PAY 348 

    0xb1c44828,// 390 PAY 349 

    0x937e6eee,// 391 PAY 350 

    0x063f5d70,// 392 PAY 351 

    0x7104cae4,// 393 PAY 352 

    0xf46a3aeb,// 394 PAY 353 

    0xf3a738a0,// 395 PAY 354 

    0xc3acc461,// 396 PAY 355 

    0xc1b41844,// 397 PAY 356 

    0x3098fa8f,// 398 PAY 357 

    0xa4ef301b,// 399 PAY 358 

    0xedad854d,// 400 PAY 359 

    0x248f3f95,// 401 PAY 360 

    0x07eb079d,// 402 PAY 361 

    0xa0a7ef4a,// 403 PAY 362 

    0xc1a9994b,// 404 PAY 363 

    0x25f35f64,// 405 PAY 364 

    0xa5dc0c52,// 406 PAY 365 

    0x4fbba1a0,// 407 PAY 366 

    0x6b1b0dd7,// 408 PAY 367 

    0xd7a09484,// 409 PAY 368 

    0xbfee6d08,// 410 PAY 369 

    0x58faf101,// 411 PAY 370 

    0x66f7f6a2,// 412 PAY 371 

    0x24c6f325,// 413 PAY 372 

    0xfb2b22e2,// 414 PAY 373 

    0xcb1f39eb,// 415 PAY 374 

    0x604f368a,// 416 PAY 375 

    0xdf1070dd,// 417 PAY 376 

    0xdffab54e,// 418 PAY 377 

    0x32360234,// 419 PAY 378 

    0x8dae96b7,// 420 PAY 379 

    0x5c765ffc,// 421 PAY 380 

    0xac8c6db3,// 422 PAY 381 

    0xe34b1f8b,// 423 PAY 382 

    0x8b0bb994,// 424 PAY 383 

    0x4e085c14,// 425 PAY 384 

    0x025487d7,// 426 PAY 385 

    0xdc6d8273,// 427 PAY 386 

    0x4e90cda1,// 428 PAY 387 

    0xb2d00a3b,// 429 PAY 388 

    0xef63d9ef,// 430 PAY 389 

    0xa2a6b7e7,// 431 PAY 390 

    0x116dfab3,// 432 PAY 391 

    0x442ba5ce,// 433 PAY 392 

    0x6fc95f3f,// 434 PAY 393 

    0xdfcda654,// 435 PAY 394 

    0xec39e0f4,// 436 PAY 395 

    0x1f3a044e,// 437 PAY 396 

    0x3c295cc2,// 438 PAY 397 

    0x5e1a6f09,// 439 PAY 398 

    0x62ab9cab,// 440 PAY 399 

    0x752ebb70,// 441 PAY 400 

    0x973dcfd7,// 442 PAY 401 

    0x4dd6bb44,// 443 PAY 402 

    0x932023f1,// 444 PAY 403 

    0xd905a138,// 445 PAY 404 

    0x03f51ea9,// 446 PAY 405 

    0x5a2ba36f,// 447 PAY 406 

    0xed935d54,// 448 PAY 407 

    0x2d8883da,// 449 PAY 408 

    0x026a27fd,// 450 PAY 409 

    0x083ca56a,// 451 PAY 410 

    0x32aa5c32,// 452 PAY 411 

    0xbb9c173f,// 453 PAY 412 

    0x3a08d19e,// 454 PAY 413 

    0x2d4ad8b0,// 455 PAY 414 

    0xd123a5ee,// 456 PAY 415 

    0xdcee9e74,// 457 PAY 416 

    0x09233663,// 458 PAY 417 

    0x1632c9dd,// 459 PAY 418 

    0xdbf3677b,// 460 PAY 419 

    0xc030e13f,// 461 PAY 420 

    0x299402a1,// 462 PAY 421 

    0x88eee516,// 463 PAY 422 

    0x12afb763,// 464 PAY 423 

    0x2e5e2a4d,// 465 PAY 424 

    0x315e33da,// 466 PAY 425 

    0x306697c8,// 467 PAY 426 

    0x1f0d7e15,// 468 PAY 427 

    0x5595e788,// 469 PAY 428 

    0x0ab7d6d9,// 470 PAY 429 

    0x312d1709,// 471 PAY 430 

    0x32993af2,// 472 PAY 431 

    0x917a946b,// 473 PAY 432 

    0xfea16f84,// 474 PAY 433 

    0xa6a76973,// 475 PAY 434 

    0xfb7aa3df,// 476 PAY 435 

    0x6ee810b2,// 477 PAY 436 

    0x30bb06b7,// 478 PAY 437 

    0x35a63287,// 479 PAY 438 

    0xb62d07cf,// 480 PAY 439 

    0x70a85688,// 481 PAY 440 

    0x2d878ffb,// 482 PAY 441 

    0xa09a9126,// 483 PAY 442 

    0xea3f10ef,// 484 PAY 443 

    0x6e75131e,// 485 PAY 444 

    0x15f97e84,// 486 PAY 445 

    0x5747e34b,// 487 PAY 446 

    0x0f136fc2,// 488 PAY 447 

    0x0ee2f535,// 489 PAY 448 

    0xa79c0f8d,// 490 PAY 449 

    0x8822274a,// 491 PAY 450 

    0x2f0890e8,// 492 PAY 451 

    0x60a79dd2,// 493 PAY 452 

    0x3bcb7e2e,// 494 PAY 453 

    0x67fff19e,// 495 PAY 454 

    0x3f7eaa5b,// 496 PAY 455 

    0xed12c6a0,// 497 PAY 456 

    0xc4aab198,// 498 PAY 457 

    0x62181e4a,// 499 PAY 458 

    0x87d21533,// 500 PAY 459 

    0x151bd1ea,// 501 PAY 460 

    0xb7a39999,// 502 PAY 461 

    0x28858b17,// 503 PAY 462 

    0x3a1f90e0,// 504 PAY 463 

    0x31344b21,// 505 PAY 464 

    0xac2f4fd9,// 506 PAY 465 

    0x249200ae,// 507 PAY 466 

    0xe959bc5b,// 508 PAY 467 

    0x57de6502,// 509 PAY 468 

    0x1a58612b,// 510 PAY 469 

    0x9ce1d952,// 511 PAY 470 

    0x6e2f4934,// 512 PAY 471 

    0xeaf4f784,// 513 PAY 472 

    0xd333315e,// 514 PAY 473 

    0x2285c2ec,// 515 PAY 474 

    0x6e285551,// 516 PAY 475 

    0x070a71e3,// 517 PAY 476 

    0xa827f2e4,// 518 PAY 477 

    0x94f5c596,// 519 PAY 478 

    0x0fcc2d95,// 520 PAY 479 

    0xf0a51fe2,// 521 PAY 480 

    0xfdd87304,// 522 PAY 481 

    0xbdb5c46c,// 523 PAY 482 

    0x87f6c2be,// 524 PAY 483 

    0x0acc324e,// 525 PAY 484 

    0xd126869d,// 526 PAY 485 

    0x9b29a924,// 527 PAY 486 

    0xdc560000,// 528 PAY 487 

/// STA is 1 words. 

/// STA num_pkts       : 73 

/// STA pkt_idx        : 206 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x16 

    0x03391649 // 529 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 80 (0x50) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_sha1_pkt84_tmpl[] = {
    0xb8010050,// 1 CCH   1 

/// ECH cache_idx      : 0x0e 

/// ECH pdu_tag        : 0x00 

    0x000e0000,// 2 ECH   1 

/// SCX is 19 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound save_icv !insert_icv check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : SHA1 

/// SCX aes_size        : NORMAL_RC4INIT_AES128 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x3 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 40 

    0x08000013,// 3 SCX   1 

    0x8060487c,// 4 SCX   2 

    0x00005300,// 5 SCX   3 

    0x690a687b,// 6 SCX   4 

    0xb297f845,// 7 SCX   5 

    0x3b528274,// 8 SCX   6 

    0x398863f3,// 9 SCX   7 

    0xd348ea02,// 10 SCX   8 

    0xbbd5774c,// 11 SCX   9 

    0xed268dea,// 12 SCX  10 

    0x9e2bd57e,// 13 SCX  11 

    0xaef2e50f,// 14 SCX  12 

    0xa7c3e964,// 15 SCX  13 

    0x748a411c,// 16 SCX  14 

    0xb7d450df,// 17 SCX  15 

    0x1bc898f9,// 18 SCX  16 

    0x42ace1b7,// 19 SCX  17 

    0xa20947f4,// 20 SCX  18 

    0xa3b0e55d,// 21 SCX  19 

/// BFD is 3 words. 

/// BFD tot_len        : 1983 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 1246 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 1246 

/// BFD lencrypto      : 64 

/// BFD ofstcrypto     : 1160 

/// BFD (ofst+len)cry  : 1224 

/// BFD ofstiv         : 1100 

/// BFD ofsticv        : 1616 

    0x000004de,// 22 BFD   1 

    0x04880040,// 23 BFD   2 

    0x0650044c,// 24 BFD   3 

/// MFM is 16 words. 

/// MFM vldnibs        : 7c 

    0x7c00d86a,// 25 MFM   1 

    0xdfe55db7,// 26 MFM   2 

    0x3dcff06e,// 27 MFM   3 

    0x015e2aa0,// 28 MFM   4 

    0x3ea4ddd3,// 29 MFM   5 

    0x66313ca7,// 30 MFM   6 

    0xe8304647,// 31 MFM   7 

    0x1b5a09d0,// 32 MFM   8 

    0x06b950c2,// 33 MFM   9 

    0x67717043,// 34 MFM  10 

    0xf63cb23b,// 35 MFM  11 

    0x6fbab7c8,// 36 MFM  12 

    0x3c164ff6,// 37 MFM  13 

    0x369059b0,// 38 MFM  14 

    0x4ff76c24,// 39 MFM  15 

    0x37715bae,// 40 MFM  16 

/// BDA is 497 words. 

/// BDA size     is 1983 (0x7bf) 

/// BDA id       is 0x8ef 

    0x07bf08ef,// 41 BDA   1 

/// PAY Generic Data size   : 1983 byte(s) 

/// PAD Buffer Data Pad size   : 1 byte(s) 

    0x9c9271c2,// 42 PAY   1 

    0x161adddb,// 43 PAY   2 

    0x6875eb60,// 44 PAY   3 

    0xadb53449,// 45 PAY   4 

    0xc59c0467,// 46 PAY   5 

    0xfa44a79b,// 47 PAY   6 

    0x15507b8e,// 48 PAY   7 

    0xe55fda25,// 49 PAY   8 

    0x35f86520,// 50 PAY   9 

    0xaac7cb59,// 51 PAY  10 

    0x6df16d4c,// 52 PAY  11 

    0x22e5d80c,// 53 PAY  12 

    0xe3fa30b0,// 54 PAY  13 

    0x9b60cacf,// 55 PAY  14 

    0xb2b9ed5b,// 56 PAY  15 

    0x0c5945af,// 57 PAY  16 

    0xec8c227f,// 58 PAY  17 

    0xa6581243,// 59 PAY  18 

    0xd9c9391a,// 60 PAY  19 

    0x2a9f16d9,// 61 PAY  20 

    0xba477727,// 62 PAY  21 

    0xe89b456e,// 63 PAY  22 

    0x94c58fcb,// 64 PAY  23 

    0x500881a7,// 65 PAY  24 

    0x151ba1a1,// 66 PAY  25 

    0x80653fbd,// 67 PAY  26 

    0x32f4a14a,// 68 PAY  27 

    0xff75164d,// 69 PAY  28 

    0x7e8f1bb1,// 70 PAY  29 

    0xb336df1a,// 71 PAY  30 

    0x14e00040,// 72 PAY  31 

    0x36ba763e,// 73 PAY  32 

    0x9e099e38,// 74 PAY  33 

    0x25dcbe96,// 75 PAY  34 

    0xf7e76db3,// 76 PAY  35 

    0x2d12b372,// 77 PAY  36 

    0x4b129c6f,// 78 PAY  37 

    0xc1fe39f2,// 79 PAY  38 

    0xf85f516a,// 80 PAY  39 

    0xaaf13bd8,// 81 PAY  40 

    0x4c7f3562,// 82 PAY  41 

    0x7b5866da,// 83 PAY  42 

    0x6db5fd6f,// 84 PAY  43 

    0xdaa9566d,// 85 PAY  44 

    0x09fcd691,// 86 PAY  45 

    0xde973c62,// 87 PAY  46 

    0xc31f61bf,// 88 PAY  47 

    0xa746c05d,// 89 PAY  48 

    0x51777807,// 90 PAY  49 

    0x77882e0e,// 91 PAY  50 

    0x05a6e746,// 92 PAY  51 

    0x5b26a2ac,// 93 PAY  52 

    0x4240191e,// 94 PAY  53 

    0xec525a0f,// 95 PAY  54 

    0x491e7080,// 96 PAY  55 

    0x6509e4b8,// 97 PAY  56 

    0x5ba1a35a,// 98 PAY  57 

    0xbf9bf2f5,// 99 PAY  58 

    0x5ec72df3,// 100 PAY  59 

    0xf1e51d8a,// 101 PAY  60 

    0x9f46ec4f,// 102 PAY  61 

    0x7d57f885,// 103 PAY  62 

    0x2ac50a9c,// 104 PAY  63 

    0xb98fcb1b,// 105 PAY  64 

    0x6bae1c3c,// 106 PAY  65 

    0x67592b0b,// 107 PAY  66 

    0xede6cc57,// 108 PAY  67 

    0xfea48a3c,// 109 PAY  68 

    0x100861bc,// 110 PAY  69 

    0x2290c50f,// 111 PAY  70 

    0xc32216db,// 112 PAY  71 

    0xe8899df4,// 113 PAY  72 

    0xfeeb1314,// 114 PAY  73 

    0x6578388b,// 115 PAY  74 

    0xa55a31e5,// 116 PAY  75 

    0xdce82e58,// 117 PAY  76 

    0x3c85c9b1,// 118 PAY  77 

    0x4c481eab,// 119 PAY  78 

    0xfe908bba,// 120 PAY  79 

    0xf3344070,// 121 PAY  80 

    0x89ceb240,// 122 PAY  81 

    0x381ca462,// 123 PAY  82 

    0x509af437,// 124 PAY  83 

    0xc5c62690,// 125 PAY  84 

    0x8ef23a2e,// 126 PAY  85 

    0x40c50ca8,// 127 PAY  86 

    0x780015d9,// 128 PAY  87 

    0x3093691f,// 129 PAY  88 

    0x2ab713ed,// 130 PAY  89 

    0x2fd4305f,// 131 PAY  90 

    0x50a089cc,// 132 PAY  91 

    0xc7b64e0d,// 133 PAY  92 

    0x785b880d,// 134 PAY  93 

    0xf01069e1,// 135 PAY  94 

    0x6a809bbc,// 136 PAY  95 

    0x858f1f4c,// 137 PAY  96 

    0xd2fc498b,// 138 PAY  97 

    0xea3464d2,// 139 PAY  98 

    0x54bab70f,// 140 PAY  99 

    0xecc96dcb,// 141 PAY 100 

    0x28cc2642,// 142 PAY 101 

    0xa8b206d6,// 143 PAY 102 

    0xefc66069,// 144 PAY 103 

    0xeff2d357,// 145 PAY 104 

    0x5b2f6478,// 146 PAY 105 

    0xbd8f6409,// 147 PAY 106 

    0x26ff4bd0,// 148 PAY 107 

    0xde100ff5,// 149 PAY 108 

    0x300a8487,// 150 PAY 109 

    0x60174412,// 151 PAY 110 

    0x6d12e6d2,// 152 PAY 111 

    0x851cc427,// 153 PAY 112 

    0xbc981716,// 154 PAY 113 

    0xea801746,// 155 PAY 114 

    0xbe75271c,// 156 PAY 115 

    0xa9c4a76a,// 157 PAY 116 

    0x7a0c0ddb,// 158 PAY 117 

    0xb3c7181e,// 159 PAY 118 

    0xb68c0b3f,// 160 PAY 119 

    0x09a9fecb,// 161 PAY 120 

    0xaf63ed76,// 162 PAY 121 

    0x0ee7e80f,// 163 PAY 122 

    0x305afa90,// 164 PAY 123 

    0x13fd8d47,// 165 PAY 124 

    0x32d5cccd,// 166 PAY 125 

    0xfe0ef4b4,// 167 PAY 126 

    0xcf9445b4,// 168 PAY 127 

    0x1eb56ec2,// 169 PAY 128 

    0x2e4aafb1,// 170 PAY 129 

    0x5c946ca8,// 171 PAY 130 

    0x530b88a8,// 172 PAY 131 

    0xe23b3fe0,// 173 PAY 132 

    0x7c651087,// 174 PAY 133 

    0x52761c05,// 175 PAY 134 

    0xbb1029ae,// 176 PAY 135 

    0x52a23cf5,// 177 PAY 136 

    0x2bdefa23,// 178 PAY 137 

    0xef33fd79,// 179 PAY 138 

    0xd5979137,// 180 PAY 139 

    0xb6fdf95b,// 181 PAY 140 

    0x8fd88c1f,// 182 PAY 141 

    0xbf0d374e,// 183 PAY 142 

    0xca03a947,// 184 PAY 143 

    0xa92f98f3,// 185 PAY 144 

    0x3f088d78,// 186 PAY 145 

    0x03ad711c,// 187 PAY 146 

    0xa66cc23d,// 188 PAY 147 

    0xe4ad17d9,// 189 PAY 148 

    0x24dc9ce3,// 190 PAY 149 

    0xd29f33b4,// 191 PAY 150 

    0x61950b62,// 192 PAY 151 

    0x9d6742b8,// 193 PAY 152 

    0x1b9fa1cc,// 194 PAY 153 

    0x8730c396,// 195 PAY 154 

    0x6d05ad6e,// 196 PAY 155 

    0x85100d80,// 197 PAY 156 

    0x63c54be0,// 198 PAY 157 

    0xc0340fdb,// 199 PAY 158 

    0x991d9a64,// 200 PAY 159 

    0x780acfd6,// 201 PAY 160 

    0xc24f033c,// 202 PAY 161 

    0x5bcf08bc,// 203 PAY 162 

    0xc024443a,// 204 PAY 163 

    0x2f05c192,// 205 PAY 164 

    0x08b99921,// 206 PAY 165 

    0x3359bd07,// 207 PAY 166 

    0x83124194,// 208 PAY 167 

    0x4a21c7fa,// 209 PAY 168 

    0xe7b84476,// 210 PAY 169 

    0x58ac643e,// 211 PAY 170 

    0x1bfa324e,// 212 PAY 171 

    0x4124c99f,// 213 PAY 172 

    0x79747ae8,// 214 PAY 173 

    0xcc500337,// 215 PAY 174 

    0xe98d61ba,// 216 PAY 175 

    0x634cda54,// 217 PAY 176 

    0x4797bc1c,// 218 PAY 177 

    0x97ff7c5f,// 219 PAY 178 

    0xd6a38b1e,// 220 PAY 179 

    0x548b5b14,// 221 PAY 180 

    0x20b75f17,// 222 PAY 181 

    0x30ba6400,// 223 PAY 182 

    0xddd43c1e,// 224 PAY 183 

    0x387e7571,// 225 PAY 184 

    0xabb171c2,// 226 PAY 185 

    0x950bb682,// 227 PAY 186 

    0xe986c476,// 228 PAY 187 

    0xb87f8eea,// 229 PAY 188 

    0x00184067,// 230 PAY 189 

    0x40c74f95,// 231 PAY 190 

    0x48bdcf13,// 232 PAY 191 

    0x660f8a5f,// 233 PAY 192 

    0xdb28890a,// 234 PAY 193 

    0xb3a4ec21,// 235 PAY 194 

    0x6813792d,// 236 PAY 195 

    0xb5b7f189,// 237 PAY 196 

    0xdff12800,// 238 PAY 197 

    0x622642c2,// 239 PAY 198 

    0x872f2844,// 240 PAY 199 

    0x81affe59,// 241 PAY 200 

    0x0fba94a1,// 242 PAY 201 

    0x33990d43,// 243 PAY 202 

    0x97e8913e,// 244 PAY 203 

    0x51734ad3,// 245 PAY 204 

    0xfb8ab4eb,// 246 PAY 205 

    0x83bdc52a,// 247 PAY 206 

    0xd38b8483,// 248 PAY 207 

    0x4d591778,// 249 PAY 208 

    0xf8c32e54,// 250 PAY 209 

    0x10fca49d,// 251 PAY 210 

    0xbcf4392b,// 252 PAY 211 

    0x11242553,// 253 PAY 212 

    0xd300fc03,// 254 PAY 213 

    0x05a7e4fd,// 255 PAY 214 

    0x922de5b0,// 256 PAY 215 

    0x379cdc02,// 257 PAY 216 

    0x21edaf16,// 258 PAY 217 

    0x3ab895fe,// 259 PAY 218 

    0x09559159,// 260 PAY 219 

    0x49b57881,// 261 PAY 220 

    0x4b586049,// 262 PAY 221 

    0x73c0052f,// 263 PAY 222 

    0xd3bdc4d4,// 264 PAY 223 

    0xf180a643,// 265 PAY 224 

    0x849264f0,// 266 PAY 225 

    0x07795755,// 267 PAY 226 

    0x1ac0b079,// 268 PAY 227 

    0xe2b8b4f0,// 269 PAY 228 

    0x44806f06,// 270 PAY 229 

    0xb6e4ef5c,// 271 PAY 230 

    0xa4b924ed,// 272 PAY 231 

    0xc366a765,// 273 PAY 232 

    0x48c3f211,// 274 PAY 233 

    0x8ec4b88c,// 275 PAY 234 

    0x6795990d,// 276 PAY 235 

    0x6ffc4a70,// 277 PAY 236 

    0xe0c69247,// 278 PAY 237 

    0x1cd5f59d,// 279 PAY 238 

    0x1f4571b2,// 280 PAY 239 

    0x1bb82823,// 281 PAY 240 

    0xed7bac26,// 282 PAY 241 

    0xdddf8b60,// 283 PAY 242 

    0xd2afa44f,// 284 PAY 243 

    0x112fb103,// 285 PAY 244 

    0xef887df9,// 286 PAY 245 

    0xe0ca6ffc,// 287 PAY 246 

    0x6855b46a,// 288 PAY 247 

    0x6a9070b0,// 289 PAY 248 

    0xa7fc897b,// 290 PAY 249 

    0x312a179b,// 291 PAY 250 

    0x476e8d63,// 292 PAY 251 

    0x5ef5fb7e,// 293 PAY 252 

    0x005764ba,// 294 PAY 253 

    0x4f58cdb3,// 295 PAY 254 

    0x4a3965b4,// 296 PAY 255 

    0xf6900a8d,// 297 PAY 256 

    0xd6423a49,// 298 PAY 257 

    0x8e7469be,// 299 PAY 258 

    0xc7443611,// 300 PAY 259 

    0x2f4d2943,// 301 PAY 260 

    0xc8f26b56,// 302 PAY 261 

    0x58bdcd04,// 303 PAY 262 

    0xd52db8dd,// 304 PAY 263 

    0xd4f0bb7e,// 305 PAY 264 

    0xb4c14021,// 306 PAY 265 

    0xf3e11b10,// 307 PAY 266 

    0xa3de78a4,// 308 PAY 267 

    0xd2fd495d,// 309 PAY 268 

    0xe48fb4cb,// 310 PAY 269 

    0x3696e254,// 311 PAY 270 

    0xe37cf27c,// 312 PAY 271 

    0xaec10fe6,// 313 PAY 272 

    0x81a2d3b2,// 314 PAY 273 

    0x8af770c8,// 315 PAY 274 

    0xe73cb39d,// 316 PAY 275 

    0x490dfbc9,// 317 PAY 276 

    0x835f77b1,// 318 PAY 277 

    0x35105e96,// 319 PAY 278 

    0x3f40b00a,// 320 PAY 279 

    0xdfd1e824,// 321 PAY 280 

    0x110ba00e,// 322 PAY 281 

    0xbbb908c2,// 323 PAY 282 

    0xa3adb4fd,// 324 PAY 283 

    0x2a4bc648,// 325 PAY 284 

    0x7a822d15,// 326 PAY 285 

    0xd4458b6d,// 327 PAY 286 

    0xa151dbcc,// 328 PAY 287 

    0xd536a8be,// 329 PAY 288 

    0xa0ed7077,// 330 PAY 289 

    0xd984cbfb,// 331 PAY 290 

    0xeba18a64,// 332 PAY 291 

    0x8422ac19,// 333 PAY 292 

    0x9d617d4d,// 334 PAY 293 

    0x4757e3ee,// 335 PAY 294 

    0x1d8cdbfb,// 336 PAY 295 

    0x61d91ea1,// 337 PAY 296 

    0xe12b5f95,// 338 PAY 297 

    0x57122756,// 339 PAY 298 

    0x8de25957,// 340 PAY 299 

    0x957793b8,// 341 PAY 300 

    0xb0dfa733,// 342 PAY 301 

    0x37d63d24,// 343 PAY 302 

    0x2288a4ee,// 344 PAY 303 

    0x5e259d51,// 345 PAY 304 

    0x41b6dff9,// 346 PAY 305 

    0xa6a10ee7,// 347 PAY 306 

    0x182e8803,// 348 PAY 307 

    0xea68f07a,// 349 PAY 308 

    0x1945b9c9,// 350 PAY 309 

    0xe1d9b0c8,// 351 PAY 310 

    0xd4f6262a,// 352 PAY 311 

    0x94a0f6ec,// 353 PAY 312 

    0xb4abb6a3,// 354 PAY 313 

    0x289bb28f,// 355 PAY 314 

    0x0e14c402,// 356 PAY 315 

    0xa3ef2e26,// 357 PAY 316 

    0xc3d52946,// 358 PAY 317 

    0xe42245b0,// 359 PAY 318 

    0x4ec3fbd5,// 360 PAY 319 

    0x3d44e06b,// 361 PAY 320 

    0x12ea2e9e,// 362 PAY 321 

    0x2164aba6,// 363 PAY 322 

    0x9cebfc8a,// 364 PAY 323 

    0xbc5de34b,// 365 PAY 324 

    0x5d54c7c9,// 366 PAY 325 

    0x1eeb1d8b,// 367 PAY 326 

    0x54adb716,// 368 PAY 327 

    0x91595072,// 369 PAY 328 

    0xbb416e7c,// 370 PAY 329 

    0x4a562c2a,// 371 PAY 330 

    0xebb2d9ef,// 372 PAY 331 

    0x38d4d8eb,// 373 PAY 332 

    0x48bcd044,// 374 PAY 333 

    0x0665d844,// 375 PAY 334 

    0x79189ee0,// 376 PAY 335 

    0x1def1323,// 377 PAY 336 

    0x44ffdc79,// 378 PAY 337 

    0xade654d7,// 379 PAY 338 

    0x9efc6494,// 380 PAY 339 

    0xf8c77b68,// 381 PAY 340 

    0x66bb7e0c,// 382 PAY 341 

    0x4dd25f69,// 383 PAY 342 

    0x0812de14,// 384 PAY 343 

    0xd3d3e3f2,// 385 PAY 344 

    0x821bcf82,// 386 PAY 345 

    0xe15e6e90,// 387 PAY 346 

    0x4e6fa30d,// 388 PAY 347 

    0x2991ee29,// 389 PAY 348 

    0x0e1d47c2,// 390 PAY 349 

    0x8246fccc,// 391 PAY 350 

    0x7aef5ae3,// 392 PAY 351 

    0x17b4e94d,// 393 PAY 352 

    0xd933da6e,// 394 PAY 353 

    0x4fd95c06,// 395 PAY 354 

    0xa1623311,// 396 PAY 355 

    0x75601988,// 397 PAY 356 

    0xb225ade6,// 398 PAY 357 

    0x4ee01029,// 399 PAY 358 

    0x10003ca7,// 400 PAY 359 

    0xaae10b5a,// 401 PAY 360 

    0xe26bc0a3,// 402 PAY 361 

    0xd11f6e9c,// 403 PAY 362 

    0xf91533ed,// 404 PAY 363 

    0x060d7413,// 405 PAY 364 

    0x1d3dae7b,// 406 PAY 365 

    0x294a23d8,// 407 PAY 366 

    0x76ac0404,// 408 PAY 367 

    0xc9c5f018,// 409 PAY 368 

    0xb9b78485,// 410 PAY 369 

    0xa9756d9a,// 411 PAY 370 

    0xec6cd481,// 412 PAY 371 

    0x6cbbf150,// 413 PAY 372 

    0xc848a996,// 414 PAY 373 

    0xf30ca2b7,// 415 PAY 374 

    0x1d232061,// 416 PAY 375 

    0x57654e31,// 417 PAY 376 

    0x34479af6,// 418 PAY 377 

    0x3c3b7cbb,// 419 PAY 378 

    0xcf5730c3,// 420 PAY 379 

    0xd750d82a,// 421 PAY 380 

    0x4df92c08,// 422 PAY 381 

    0xfaf839f7,// 423 PAY 382 

    0x40e4c1e3,// 424 PAY 383 

    0xd278fc96,// 425 PAY 384 

    0x2da20403,// 426 PAY 385 

    0x3476ba39,// 427 PAY 386 

    0xf6c41f30,// 428 PAY 387 

    0x74978845,// 429 PAY 388 

    0x74b6635f,// 430 PAY 389 

    0x18c7de26,// 431 PAY 390 

    0x4c774732,// 432 PAY 391 

    0xb8623b91,// 433 PAY 392 

    0xf0ddc803,// 434 PAY 393 

    0x12c20915,// 435 PAY 394 

    0xcc143594,// 436 PAY 395 

    0x3c20995f,// 437 PAY 396 

    0x6c935059,// 438 PAY 397 

    0x4e514b5d,// 439 PAY 398 

    0x8f2e56fb,// 440 PAY 399 

    0xc12d944b,// 441 PAY 400 

    0x7ebc51c2,// 442 PAY 401 

    0xd709d9d9,// 443 PAY 402 

    0x5426cba0,// 444 PAY 403 

    0x0c6263c0,// 445 PAY 404 

    0x77a2d17d,// 446 PAY 405 

    0xdba53225,// 447 PAY 406 

    0xb90962d4,// 448 PAY 407 

    0x7b4e78c5,// 449 PAY 408 

    0x68c0e96d,// 450 PAY 409 

    0xf7481e6f,// 451 PAY 410 

    0xd184f5c0,// 452 PAY 411 

    0xb2e66d96,// 453 PAY 412 

    0x7f18d7ed,// 454 PAY 413 

    0xadc59a2d,// 455 PAY 414 

    0xdec2e515,// 456 PAY 415 

    0xaffae755,// 457 PAY 416 

    0xb4eb9365,// 458 PAY 417 

    0x62661073,// 459 PAY 418 

    0x36cc0cc9,// 460 PAY 419 

    0xad16ff0b,// 461 PAY 420 

    0xd07e979a,// 462 PAY 421 

    0x7b902485,// 463 PAY 422 

    0x37160362,// 464 PAY 423 

    0xdb597b3a,// 465 PAY 424 

    0x7e308661,// 466 PAY 425 

    0xbf6e5ba0,// 467 PAY 426 

    0x2c504478,// 468 PAY 427 

    0x72742087,// 469 PAY 428 

    0xcbf0d08e,// 470 PAY 429 

    0x9cd49492,// 471 PAY 430 

    0x51fc02df,// 472 PAY 431 

    0x3435b816,// 473 PAY 432 

    0x3cac0bda,// 474 PAY 433 

    0x4a973dcb,// 475 PAY 434 

    0xedd20098,// 476 PAY 435 

    0x8fe3770b,// 477 PAY 436 

    0x4849af77,// 478 PAY 437 

    0x4cd32c40,// 479 PAY 438 

    0xd3ccff9a,// 480 PAY 439 

    0x8e5775f2,// 481 PAY 440 

    0x7f595015,// 482 PAY 441 

    0xa05eec39,// 483 PAY 442 

    0x9f0615a3,// 484 PAY 443 

    0x3a465c9e,// 485 PAY 444 

    0xcf67c776,// 486 PAY 445 

    0xeb66cdee,// 487 PAY 446 

    0x9cbd6230,// 488 PAY 447 

    0xf2e918b8,// 489 PAY 448 

    0xd48a57db,// 490 PAY 449 

    0xe6ba68cb,// 491 PAY 450 

    0xdffe898c,// 492 PAY 451 

    0x3b920360,// 493 PAY 452 

    0x091a1bce,// 494 PAY 453 

    0xeb4771ca,// 495 PAY 454 

    0x1a0c95a8,// 496 PAY 455 

    0xa34a9b9a,// 497 PAY 456 

    0x04c6f25e,// 498 PAY 457 

    0x742aba70,// 499 PAY 458 

    0x17ee22c1,// 500 PAY 459 

    0x63052ca4,// 501 PAY 460 

    0xd41dddee,// 502 PAY 461 

    0x6527ba2b,// 503 PAY 462 

    0x29ab1ebc,// 504 PAY 463 

    0x7565db09,// 505 PAY 464 

    0x41930f80,// 506 PAY 465 

    0x12c26dda,// 507 PAY 466 

    0xe70e3e9d,// 508 PAY 467 

    0xc1f3e63a,// 509 PAY 468 

    0xcc4c365c,// 510 PAY 469 

    0x3be37a3a,// 511 PAY 470 

    0xbdaa8464,// 512 PAY 471 

    0xbfe709c0,// 513 PAY 472 

    0xe809e530,// 514 PAY 473 

    0x7516a8c8,// 515 PAY 474 

    0x45960324,// 516 PAY 475 

    0x6ea4cbc7,// 517 PAY 476 

    0x592a36dc,// 518 PAY 477 

    0x0f5ce4c8,// 519 PAY 478 

    0xb61b31d9,// 520 PAY 479 

    0x1536b016,// 521 PAY 480 

    0xbbf490a5,// 522 PAY 481 

    0xf95588d4,// 523 PAY 482 

    0xe7119db1,// 524 PAY 483 

    0x7ab5ad44,// 525 PAY 484 

    0x9f9e292e,// 526 PAY 485 

    0x7b217486,// 527 PAY 486 

    0xdcc0e0fa,// 528 PAY 487 

    0x86d89b72,// 529 PAY 488 

    0x939b9940,// 530 PAY 489 

    0x2dee9380,// 531 PAY 490 

    0x4a5dda32,// 532 PAY 491 

    0x17e697d7,// 533 PAY 492 

    0xc005e3d6,// 534 PAY 493 

    0x095acf88,// 535 PAY 494 

    0x4b0fd009,// 536 PAY 495 

    0x5a68b500,// 537 PAY 496 

/// STA is 1 words. 

/// STA num_pkts       : 53 

/// STA pkt_idx        : 49 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xb4 

    0x00c4b435 // 538 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 88 (0x58) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_sha1_pkt85_tmpl[] = {
    0xb8010058,// 1 CCH   1 

/// ECH cache_idx      : 0x04 

/// ECH pdu_tag        : 0x00 

    0x00040000,// 2 ECH   1 

/// SCX is 21 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound !save_icv !insert_icv check_icv sctx_iv  

/// SCX exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : SHA1 

/// SCX aes_size        : RC4UPDT_AES192 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x5 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 8 

/// SCX authctx_size    : 40 

    0x08000015,// 3 SCX   1 

    0x8065487f,// 4 SCX   2 

    0x000015c2,// 5 SCX   3 

    0x03827bd8,// 6 SCX   4 

    0x68aef0d9,// 7 SCX   5 

    0xede1d273,// 8 SCX   6 

    0xa9da4a0d,// 9 SCX   7 

    0x4cdbd704,// 10 SCX   8 

    0xec0815db,// 11 SCX   9 

    0x236b37db,// 12 SCX  10 

    0x41283be6,// 13 SCX  11 

    0xd79770ad,// 14 SCX  12 

    0x30955d90,// 15 SCX  13 

    0x523b4d56,// 16 SCX  14 

    0x5db2c84e,// 17 SCX  15 

    0x474cd0b2,// 18 SCX  16 

    0x72f4ab28,// 19 SCX  17 

    0x56b4277d,// 20 SCX  18 

    0x2778d9da,// 21 SCX  19 

    0x8d438263,// 22 SCX  20 

    0x4fe17b55,// 23 SCX  21 

/// BFD is 3 words. 

/// BFD tot_len        : 357 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 199 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 199 

/// BFD lencrypto      : 8 

/// BFD ofstcrypto     : 152 

/// BFD (ofst+len)cry  : 160 

/// BFD ofstiv         : 96 

/// BFD ofsticv        : 296 

    0x000000c7,// 24 BFD   1 

    0x00980008,// 25 BFD   2 

    0x01280060,// 26 BFD   3 

/// MFM is 6 words. 

/// MFM vldnibs        : 2b 

    0x2b0091f5,// 27 MFM   1 

    0x2cace808,// 28 MFM   2 

    0xc65c54ab,// 29 MFM   3 

    0x6d7b0958,// 30 MFM   4 

    0x3e27da02,// 31 MFM   5 

    0xb0a18940,// 32 MFM   6 

/// BDA is 91 words. 

/// BDA size     is 357 (0x165) 

/// BDA id       is 0xca9 

    0x01650ca9,// 33 BDA   1 

/// PAY Generic Data size   : 357 byte(s) 

/// PAD Buffer Data Pad size   : 3 byte(s) 

    0x602a59d2,// 34 PAY   1 

    0x90b7490d,// 35 PAY   2 

    0xcc6c1eb9,// 36 PAY   3 

    0x147617f0,// 37 PAY   4 

    0x9b382a5b,// 38 PAY   5 

    0x3e7f8e34,// 39 PAY   6 

    0x2218cab2,// 40 PAY   7 

    0xb610113c,// 41 PAY   8 

    0x97cc08ee,// 42 PAY   9 

    0x2f74b3b7,// 43 PAY  10 

    0xf18b6424,// 44 PAY  11 

    0x2487bf23,// 45 PAY  12 

    0xfc139d7b,// 46 PAY  13 

    0x9bb66847,// 47 PAY  14 

    0x82d2ea41,// 48 PAY  15 

    0x6f873edc,// 49 PAY  16 

    0x4314a130,// 50 PAY  17 

    0x40a7372b,// 51 PAY  18 

    0x54061357,// 52 PAY  19 

    0x57ff52cb,// 53 PAY  20 

    0xb5dc8300,// 54 PAY  21 

    0x6b8fe18c,// 55 PAY  22 

    0x914c13fc,// 56 PAY  23 

    0x0b6c1d40,// 57 PAY  24 

    0x1038f232,// 58 PAY  25 

    0xd9c42d25,// 59 PAY  26 

    0x1337f1c7,// 60 PAY  27 

    0xa9f1b9c1,// 61 PAY  28 

    0xfd46f82e,// 62 PAY  29 

    0xa63abe41,// 63 PAY  30 

    0xa74c007c,// 64 PAY  31 

    0x799e876c,// 65 PAY  32 

    0xa738ca58,// 66 PAY  33 

    0x62f56566,// 67 PAY  34 

    0xac5ecb25,// 68 PAY  35 

    0x9acfeeaf,// 69 PAY  36 

    0xdf223b39,// 70 PAY  37 

    0x706d23e5,// 71 PAY  38 

    0xd733eadc,// 72 PAY  39 

    0x062a6ae8,// 73 PAY  40 

    0x88d8af8e,// 74 PAY  41 

    0xd06dfa99,// 75 PAY  42 

    0x2f356935,// 76 PAY  43 

    0x044bdcf6,// 77 PAY  44 

    0xf4a9f925,// 78 PAY  45 

    0xf9d9b664,// 79 PAY  46 

    0x2cbe1654,// 80 PAY  47 

    0xf63fdedb,// 81 PAY  48 

    0x3b5731dc,// 82 PAY  49 

    0x8ee69e7e,// 83 PAY  50 

    0x350523ad,// 84 PAY  51 

    0x48a1464c,// 85 PAY  52 

    0xb1024c82,// 86 PAY  53 

    0xbd544248,// 87 PAY  54 

    0x4f9cfead,// 88 PAY  55 

    0x228511ff,// 89 PAY  56 

    0xbd7588c8,// 90 PAY  57 

    0x5ebbce49,// 91 PAY  58 

    0x7c5bc764,// 92 PAY  59 

    0x97726dc0,// 93 PAY  60 

    0x1a2c86dc,// 94 PAY  61 

    0xebb5941c,// 95 PAY  62 

    0x5b307dc7,// 96 PAY  63 

    0x71bc8324,// 97 PAY  64 

    0x547b318d,// 98 PAY  65 

    0x0a90662c,// 99 PAY  66 

    0x14f7769c,// 100 PAY  67 

    0x77f811ac,// 101 PAY  68 

    0xf37d5c78,// 102 PAY  69 

    0x65cfe1bf,// 103 PAY  70 

    0x0fa50ec9,// 104 PAY  71 

    0xba25e906,// 105 PAY  72 

    0xf9da7b8d,// 106 PAY  73 

    0x2a24fb74,// 107 PAY  74 

    0x98c5637b,// 108 PAY  75 

    0xfb89e7a0,// 109 PAY  76 

    0x66374bc0,// 110 PAY  77 

    0x746ed41d,// 111 PAY  78 

    0xff03a5ad,// 112 PAY  79 

    0x3a3bd679,// 113 PAY  80 

    0x49c12a5f,// 114 PAY  81 

    0x292716fd,// 115 PAY  82 

    0xf7fcc7e5,// 116 PAY  83 

    0xa0c9c8bc,// 117 PAY  84 

    0xd42dfab6,// 118 PAY  85 

    0x7935f48c,// 119 PAY  86 

    0x16bad988,// 120 PAY  87 

    0x788a8869,// 121 PAY  88 

    0x773896c0,// 122 PAY  89 

    0xe8000000,// 123 PAY  90 

/// STA is 1 words. 

/// STA num_pkts       : 126 

/// STA pkt_idx        : 53 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x5e 

    0x00d55e7e // 124 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 88 (0x58) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_sha1_pkt86_tmpl[] = {
    0xb8010058,// 1 CCH   1 

/// ECH cache_idx      : 0x0e 

/// ECH pdu_tag        : 0x00 

    0x000e0000,// 2 ECH   1 

/// SCX is 21 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound !save_icv !insert_icv !check_icv sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : SHA1 

/// SCX aes_size        : AES256 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x4 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 8 

/// SCX authctx_size    : 40 

    0x08000015,// 3 SCX   1 

    0x8066489e,// 4 SCX   2 

    0x00000482,// 5 SCX   3 

    0xc9a76afd,// 6 SCX   4 

    0xf4b02d06,// 7 SCX   5 

    0xee86f5b0,// 8 SCX   6 

    0x5b7fd85b,// 9 SCX   7 

    0xf776db48,// 10 SCX   8 

    0xc31a02a8,// 11 SCX   9 

    0xdb356e6b,// 12 SCX  10 

    0x391b80df,// 13 SCX  11 

    0x2926545b,// 14 SCX  12 

    0xbc7dd194,// 15 SCX  13 

    0x47630619,// 16 SCX  14 

    0x4fd94ff9,// 17 SCX  15 

    0xbc8b5793,// 18 SCX  16 

    0x2a415e32,// 19 SCX  17 

    0xa7fc30a2,// 20 SCX  18 

    0x8c60fbe5,// 21 SCX  19 

    0xe289b74a,// 22 SCX  20 

    0x9dcaee4f,// 23 SCX  21 

/// BFD is 3 words. 

/// BFD tot_len        : 1544 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 574 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 574 

/// BFD lencrypto      : 128 

/// BFD ofstcrypto     : 432 

/// BFD (ofst+len)cry  : 560 

/// BFD ofstiv         : 332 

/// BFD ofsticv        : 1128 

    0x0000023e,// 24 BFD   1 

    0x01b00080,// 25 BFD   2 

    0x0468014c,// 26 BFD   3 

/// MFM is 7 words. 

/// MFM vldnibs        : 30 

    0x3000163f,// 27 MFM   1 

    0xbd0879d6,// 28 MFM   2 

    0xbf8555f5,// 29 MFM   3 

    0xc160f060,// 30 MFM   4 

    0xc046a46a,// 31 MFM   5 

    0xfc689962,// 32 MFM   6 

    0xa95e0000,// 33 MFM   7 

/// BDA is 387 words. 

/// BDA size     is 1544 (0x608) 

/// BDA id       is 0xf6c2 

    0x0608f6c2,// 34 BDA   1 

/// PAY Generic Data size   : 1544 byte(s) 

/// PAD Buffer Data Pad size   : 0 byte(s) 

    0x18834df7,// 35 PAY   1 

    0xad5b163f,// 36 PAY   2 

    0xa20a9405,// 37 PAY   3 

    0xc4e3530b,// 38 PAY   4 

    0xa4815b32,// 39 PAY   5 

    0x06220567,// 40 PAY   6 

    0xc83b3e39,// 41 PAY   7 

    0xe4840966,// 42 PAY   8 

    0x7e18622e,// 43 PAY   9 

    0xddde866c,// 44 PAY  10 

    0x8e448dc9,// 45 PAY  11 

    0xfb8d51a3,// 46 PAY  12 

    0xf07b7470,// 47 PAY  13 

    0xee2e661b,// 48 PAY  14 

    0xc56bf53f,// 49 PAY  15 

    0x551aaf17,// 50 PAY  16 

    0x92327589,// 51 PAY  17 

    0xd4a59a11,// 52 PAY  18 

    0x1432fe7d,// 53 PAY  19 

    0x2ca9256a,// 54 PAY  20 

    0x12443a61,// 55 PAY  21 

    0x2e543867,// 56 PAY  22 

    0x38b0535a,// 57 PAY  23 

    0xefaf3f9e,// 58 PAY  24 

    0xba340ac8,// 59 PAY  25 

    0x2d488251,// 60 PAY  26 

    0x370da4a3,// 61 PAY  27 

    0xbd2f6847,// 62 PAY  28 

    0x688d5a54,// 63 PAY  29 

    0x3ee28453,// 64 PAY  30 

    0xbcf2d16d,// 65 PAY  31 

    0x308cdf6e,// 66 PAY  32 

    0x95cb0436,// 67 PAY  33 

    0xa1cc0897,// 68 PAY  34 

    0x578dce5f,// 69 PAY  35 

    0x9e14e78f,// 70 PAY  36 

    0x2c046c5f,// 71 PAY  37 

    0x3d9d21db,// 72 PAY  38 

    0x484309f9,// 73 PAY  39 

    0x1c54143c,// 74 PAY  40 

    0x3242af52,// 75 PAY  41 

    0x7ed3a3e7,// 76 PAY  42 

    0x182a9e19,// 77 PAY  43 

    0x3870b9e1,// 78 PAY  44 

    0xcac12dc2,// 79 PAY  45 

    0xc8a2d2c8,// 80 PAY  46 

    0x6a8bb317,// 81 PAY  47 

    0xe792e2f7,// 82 PAY  48 

    0x762bccff,// 83 PAY  49 

    0x3cc91118,// 84 PAY  50 

    0x47578617,// 85 PAY  51 

    0x8c742c85,// 86 PAY  52 

    0x2acbf70f,// 87 PAY  53 

    0xf5f4378b,// 88 PAY  54 

    0xdd4c9b92,// 89 PAY  55 

    0xf64d9c6b,// 90 PAY  56 

    0x1f0877c4,// 91 PAY  57 

    0x17316e4e,// 92 PAY  58 

    0xbd9f60ae,// 93 PAY  59 

    0xe168efe8,// 94 PAY  60 

    0x201e18ea,// 95 PAY  61 

    0xb6be696b,// 96 PAY  62 

    0x26d1bf9b,// 97 PAY  63 

    0x56c3bfa0,// 98 PAY  64 

    0xcf302eb4,// 99 PAY  65 

    0x0e30f959,// 100 PAY  66 

    0x44220191,// 101 PAY  67 

    0x72ffcca6,// 102 PAY  68 

    0x85e8e7e4,// 103 PAY  69 

    0x26a36b52,// 104 PAY  70 

    0x9d4660d7,// 105 PAY  71 

    0x7106584a,// 106 PAY  72 

    0xb7a77bf4,// 107 PAY  73 

    0xb03aec67,// 108 PAY  74 

    0x9583e68e,// 109 PAY  75 

    0x6c761c7c,// 110 PAY  76 

    0xa721fb50,// 111 PAY  77 

    0xd482ed86,// 112 PAY  78 

    0x4095d279,// 113 PAY  79 

    0x85e1000c,// 114 PAY  80 

    0xc04a1a5c,// 115 PAY  81 

    0xcbfb6eae,// 116 PAY  82 

    0x49e54a93,// 117 PAY  83 

    0x1cee031c,// 118 PAY  84 

    0x9f632453,// 119 PAY  85 

    0xf7e9470e,// 120 PAY  86 

    0x9c020c45,// 121 PAY  87 

    0x3227fc3d,// 122 PAY  88 

    0x9e8a0fe7,// 123 PAY  89 

    0x84c83bdc,// 124 PAY  90 

    0xa176eea1,// 125 PAY  91 

    0x8af0b079,// 126 PAY  92 

    0xe068ee4e,// 127 PAY  93 

    0x274fba59,// 128 PAY  94 

    0xa93e9ee2,// 129 PAY  95 

    0x71dcb54c,// 130 PAY  96 

    0x01980e08,// 131 PAY  97 

    0x66ab7e5a,// 132 PAY  98 

    0x2174e03c,// 133 PAY  99 

    0x6f7719ae,// 134 PAY 100 

    0x51d6f47f,// 135 PAY 101 

    0x48b6d299,// 136 PAY 102 

    0xe0117d0c,// 137 PAY 103 

    0xacb1c578,// 138 PAY 104 

    0x1be9aad3,// 139 PAY 105 

    0x54d806f7,// 140 PAY 106 

    0x9b01eac1,// 141 PAY 107 

    0x02edebd4,// 142 PAY 108 

    0x7af5a6b4,// 143 PAY 109 

    0xf8282728,// 144 PAY 110 

    0x5f31e360,// 145 PAY 111 

    0x81671f6e,// 146 PAY 112 

    0xa52e734e,// 147 PAY 113 

    0x569e627d,// 148 PAY 114 

    0x19487570,// 149 PAY 115 

    0xc4576fae,// 150 PAY 116 

    0x4ea114f9,// 151 PAY 117 

    0x1ec2ff0d,// 152 PAY 118 

    0x1190384e,// 153 PAY 119 

    0xc8cae6b8,// 154 PAY 120 

    0x367334e4,// 155 PAY 121 

    0xb83c3be8,// 156 PAY 122 

    0x3bdc1133,// 157 PAY 123 

    0x2572edd2,// 158 PAY 124 

    0x38880145,// 159 PAY 125 

    0x45ee5050,// 160 PAY 126 

    0x773e1c97,// 161 PAY 127 

    0xaa3f4b55,// 162 PAY 128 

    0xfb477d30,// 163 PAY 129 

    0x950de12d,// 164 PAY 130 

    0xa7d3e2cb,// 165 PAY 131 

    0xc2f38775,// 166 PAY 132 

    0xc10c68dc,// 167 PAY 133 

    0x62900813,// 168 PAY 134 

    0x7f3e65b6,// 169 PAY 135 

    0xb3d93b64,// 170 PAY 136 

    0x30d9ad6f,// 171 PAY 137 

    0xfce7e0c1,// 172 PAY 138 

    0x79e7c7cf,// 173 PAY 139 

    0xf9441c71,// 174 PAY 140 

    0xd487584e,// 175 PAY 141 

    0x36ce2fb7,// 176 PAY 142 

    0x960ddaac,// 177 PAY 143 

    0x1a38e754,// 178 PAY 144 

    0x4f85cd47,// 179 PAY 145 

    0x3b7769a3,// 180 PAY 146 

    0x3c292992,// 181 PAY 147 

    0x1c596e3e,// 182 PAY 148 

    0x5d72d9bb,// 183 PAY 149 

    0xe949f9de,// 184 PAY 150 

    0x7d9238ec,// 185 PAY 151 

    0x8d20709b,// 186 PAY 152 

    0xf16ba776,// 187 PAY 153 

    0x37ee35f7,// 188 PAY 154 

    0xfce72a3f,// 189 PAY 155 

    0x62c00fe9,// 190 PAY 156 

    0xd93f44a1,// 191 PAY 157 

    0x88a0675a,// 192 PAY 158 

    0x3cb21dc2,// 193 PAY 159 

    0x348db55e,// 194 PAY 160 

    0x538f88c5,// 195 PAY 161 

    0x894437d1,// 196 PAY 162 

    0xfb553156,// 197 PAY 163 

    0xf702b54c,// 198 PAY 164 

    0x197211a8,// 199 PAY 165 

    0xedd9af4a,// 200 PAY 166 

    0xbc28328d,// 201 PAY 167 

    0xd86f9873,// 202 PAY 168 

    0x773cbc0b,// 203 PAY 169 

    0x01f161b5,// 204 PAY 170 

    0x89614a0f,// 205 PAY 171 

    0x8fa6b2ad,// 206 PAY 172 

    0x1b7f8bf2,// 207 PAY 173 

    0x87ffd5f5,// 208 PAY 174 

    0xb88715cd,// 209 PAY 175 

    0x71a43545,// 210 PAY 176 

    0xcd6e2561,// 211 PAY 177 

    0x60223309,// 212 PAY 178 

    0x48c53c8a,// 213 PAY 179 

    0xac0c211b,// 214 PAY 180 

    0x624ee381,// 215 PAY 181 

    0xc0097bc3,// 216 PAY 182 

    0x3c1d74a8,// 217 PAY 183 

    0x6f89b449,// 218 PAY 184 

    0xec0018fd,// 219 PAY 185 

    0x977a52ef,// 220 PAY 186 

    0xe3bb7cfc,// 221 PAY 187 

    0x2e56a8d4,// 222 PAY 188 

    0xef5e05f8,// 223 PAY 189 

    0xfddd61e9,// 224 PAY 190 

    0x84322ed4,// 225 PAY 191 

    0x56e1fff9,// 226 PAY 192 

    0x634f1d73,// 227 PAY 193 

    0xb6f042f8,// 228 PAY 194 

    0x9c754e20,// 229 PAY 195 

    0xa527b7e4,// 230 PAY 196 

    0x64097978,// 231 PAY 197 

    0xf27caa08,// 232 PAY 198 

    0x7fb9ceba,// 233 PAY 199 

    0x762e4eb3,// 234 PAY 200 

    0x1dd1b64a,// 235 PAY 201 

    0x3f55444b,// 236 PAY 202 

    0xdb92f00a,// 237 PAY 203 

    0x1c973711,// 238 PAY 204 

    0x52652dff,// 239 PAY 205 

    0xe03fd1c8,// 240 PAY 206 

    0x5f9ccdc3,// 241 PAY 207 

    0x24c13386,// 242 PAY 208 

    0x9fd22ac0,// 243 PAY 209 

    0xa8b84ffc,// 244 PAY 210 

    0xb02e9a3b,// 245 PAY 211 

    0x2cc0ed1f,// 246 PAY 212 

    0x666ba837,// 247 PAY 213 

    0xd234d0d9,// 248 PAY 214 

    0xbe96a59c,// 249 PAY 215 

    0x70b3a743,// 250 PAY 216 

    0xccb088ff,// 251 PAY 217 

    0x56cd3919,// 252 PAY 218 

    0xa3946e78,// 253 PAY 219 

    0x9fe74185,// 254 PAY 220 

    0xd2e8070a,// 255 PAY 221 

    0x8d95a628,// 256 PAY 222 

    0x39edc4fd,// 257 PAY 223 

    0xc2578bd0,// 258 PAY 224 

    0xa521599c,// 259 PAY 225 

    0x320f5694,// 260 PAY 226 

    0x91ffe11f,// 261 PAY 227 

    0xeaf8a0fd,// 262 PAY 228 

    0x9792a92d,// 263 PAY 229 

    0x68d157fb,// 264 PAY 230 

    0x95633d51,// 265 PAY 231 

    0x354e53b8,// 266 PAY 232 

    0xa4211ba7,// 267 PAY 233 

    0x4d725ce4,// 268 PAY 234 

    0x66e420e8,// 269 PAY 235 

    0x09096b85,// 270 PAY 236 

    0xac0bbd21,// 271 PAY 237 

    0xc0191a3d,// 272 PAY 238 

    0x34584775,// 273 PAY 239 

    0xcf24edbb,// 274 PAY 240 

    0xba02727f,// 275 PAY 241 

    0x21889932,// 276 PAY 242 

    0x3773d834,// 277 PAY 243 

    0x227fef74,// 278 PAY 244 

    0x2d53b5c1,// 279 PAY 245 

    0x7677f90c,// 280 PAY 246 

    0xeb32b454,// 281 PAY 247 

    0xcb7777eb,// 282 PAY 248 

    0x13bccb8d,// 283 PAY 249 

    0x257e353d,// 284 PAY 250 

    0x16a20b2a,// 285 PAY 251 

    0x8efe0509,// 286 PAY 252 

    0x567af12d,// 287 PAY 253 

    0x5ddb0157,// 288 PAY 254 

    0x702a3bd3,// 289 PAY 255 

    0xe6c18379,// 290 PAY 256 

    0xc4f58f20,// 291 PAY 257 

    0x3e4abd62,// 292 PAY 258 

    0xef77c193,// 293 PAY 259 

    0x57281e7f,// 294 PAY 260 

    0x0fb91165,// 295 PAY 261 

    0x9ae8fc9c,// 296 PAY 262 

    0x431cb11e,// 297 PAY 263 

    0x91a8d1b3,// 298 PAY 264 

    0xb344ca6b,// 299 PAY 265 

    0x8d17d051,// 300 PAY 266 

    0x06272cbd,// 301 PAY 267 

    0x9eb1a991,// 302 PAY 268 

    0x46347585,// 303 PAY 269 

    0xae7c11e3,// 304 PAY 270 

    0xe99b3791,// 305 PAY 271 

    0x08b5c582,// 306 PAY 272 

    0xb0eaa131,// 307 PAY 273 

    0x4ac907ae,// 308 PAY 274 

    0x06ac7f2b,// 309 PAY 275 

    0xbd51ed4c,// 310 PAY 276 

    0x2f74715a,// 311 PAY 277 

    0x2677abf5,// 312 PAY 278 

    0x968ae67d,// 313 PAY 279 

    0x5f67caa1,// 314 PAY 280 

    0x35c25061,// 315 PAY 281 

    0xa6781d07,// 316 PAY 282 

    0x8ee896a4,// 317 PAY 283 

    0x74c72ab8,// 318 PAY 284 

    0xef9838cc,// 319 PAY 285 

    0xbc9315f3,// 320 PAY 286 

    0x773b16f4,// 321 PAY 287 

    0xe2beffef,// 322 PAY 288 

    0x330c9d0f,// 323 PAY 289 

    0xd2a971be,// 324 PAY 290 

    0x1a9f7b18,// 325 PAY 291 

    0x7196bd64,// 326 PAY 292 

    0x10e874a6,// 327 PAY 293 

    0x5958fbf7,// 328 PAY 294 

    0x8124c59b,// 329 PAY 295 

    0xbf0d0225,// 330 PAY 296 

    0xf841502c,// 331 PAY 297 

    0x9168c611,// 332 PAY 298 

    0xe4eb6e94,// 333 PAY 299 

    0x2304256d,// 334 PAY 300 

    0x8bcc3884,// 335 PAY 301 

    0x43b24b86,// 336 PAY 302 

    0xda18df92,// 337 PAY 303 

    0x0289e5a1,// 338 PAY 304 

    0x30429588,// 339 PAY 305 

    0x0083015f,// 340 PAY 306 

    0x8dd84a57,// 341 PAY 307 

    0xff187053,// 342 PAY 308 

    0xc84c1a22,// 343 PAY 309 

    0x5ddf92f3,// 344 PAY 310 

    0x575e80d5,// 345 PAY 311 

    0x506bb79b,// 346 PAY 312 

    0x498e56aa,// 347 PAY 313 

    0xf465763f,// 348 PAY 314 

    0x51643cc0,// 349 PAY 315 

    0x0cacac93,// 350 PAY 316 

    0xb60e1ab5,// 351 PAY 317 

    0x96f2e49b,// 352 PAY 318 

    0xc0ec5b55,// 353 PAY 319 

    0xe49ac39e,// 354 PAY 320 

    0x2466371d,// 355 PAY 321 

    0x2fa965db,// 356 PAY 322 

    0x5e997376,// 357 PAY 323 

    0x412bf2eb,// 358 PAY 324 

    0x0b2483f3,// 359 PAY 325 

    0xf9b941ec,// 360 PAY 326 

    0xebc5d1a9,// 361 PAY 327 

    0x1e8c3287,// 362 PAY 328 

    0xa68a1469,// 363 PAY 329 

    0xc2a85e9f,// 364 PAY 330 

    0xd1871512,// 365 PAY 331 

    0x760fb4b5,// 366 PAY 332 

    0x415d2b4f,// 367 PAY 333 

    0xce6c9445,// 368 PAY 334 

    0x9f143d6f,// 369 PAY 335 

    0x76a89f3a,// 370 PAY 336 

    0x4ba3485c,// 371 PAY 337 

    0xf66e7cf0,// 372 PAY 338 

    0xc646dc8d,// 373 PAY 339 

    0xfd79d453,// 374 PAY 340 

    0xfd7d0d46,// 375 PAY 341 

    0xd79d722a,// 376 PAY 342 

    0x97ebbad4,// 377 PAY 343 

    0xffefd700,// 378 PAY 344 

    0x9fab533d,// 379 PAY 345 

    0xf91feefb,// 380 PAY 346 

    0xde531f5c,// 381 PAY 347 

    0x008d2522,// 382 PAY 348 

    0xf7a4aa2c,// 383 PAY 349 

    0x3f4de058,// 384 PAY 350 

    0xb36a15d0,// 385 PAY 351 

    0xbdfef8a6,// 386 PAY 352 

    0xabb190eb,// 387 PAY 353 

    0x27e11e59,// 388 PAY 354 

    0xfc4f1ced,// 389 PAY 355 

    0x85a9ead2,// 390 PAY 356 

    0xb6cd7379,// 391 PAY 357 

    0x9a5d61e0,// 392 PAY 358 

    0x56aeaa35,// 393 PAY 359 

    0x7f8a31d7,// 394 PAY 360 

    0xec6a8435,// 395 PAY 361 

    0xb8599bef,// 396 PAY 362 

    0x4ef20e68,// 397 PAY 363 

    0x677b1079,// 398 PAY 364 

    0xe7d1f895,// 399 PAY 365 

    0x8ce1a764,// 400 PAY 366 

    0xa0fe3268,// 401 PAY 367 

    0x1d81b6a9,// 402 PAY 368 

    0xf3abda71,// 403 PAY 369 

    0x4defc312,// 404 PAY 370 

    0xe7029aed,// 405 PAY 371 

    0xdcda25ad,// 406 PAY 372 

    0x37dcdc98,// 407 PAY 373 

    0xa1480b78,// 408 PAY 374 

    0x3d1bc612,// 409 PAY 375 

    0x311cf992,// 410 PAY 376 

    0xbb71d30a,// 411 PAY 377 

    0xbd4e0751,// 412 PAY 378 

    0x1a45a1ea,// 413 PAY 379 

    0xfe6be178,// 414 PAY 380 

    0xba9ccefb,// 415 PAY 381 

    0xc0c7bb84,// 416 PAY 382 

    0x27a61327,// 417 PAY 383 

    0xf5892ce6,// 418 PAY 384 

    0x2661b36f,// 419 PAY 385 

    0x2d63f449,// 420 PAY 386 

/// STA is 1 words. 

/// STA num_pkts       : 233 

/// STA pkt_idx        : 239 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x5b 

    0x03bc5be9 // 421 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 88 (0x58) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_sha1_pkt87_tmpl[] = {
    0xb8010058,// 1 CCH   1 

/// ECH cache_idx      : 0x0e 

/// ECH pdu_tag        : 0x00 

    0x000e0000,// 2 ECH   1 

/// SCX is 21 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound save_icv insert_icv check_icv sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : SHA1 

/// SCX aes_size        : AES256 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x5 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 8 

/// SCX authctx_size    : 40 

    0x08000015,// 3 SCX   1 

    0x806648c1,// 4 SCX   2 

    0x00007582,// 5 SCX   3 

    0x50aa5fdf,// 6 SCX   4 

    0xfc339b3c,// 7 SCX   5 

    0xd9f1ac38,// 8 SCX   6 

    0xa9f8d163,// 9 SCX   7 

    0x99b872e4,// 10 SCX   8 

    0x02e272ff,// 11 SCX   9 

    0x64174364,// 12 SCX  10 

    0xc590938d,// 13 SCX  11 

    0xaf0e5121,// 14 SCX  12 

    0x4ae5b26d,// 15 SCX  13 

    0x93621e70,// 16 SCX  14 

    0x94d10773,// 17 SCX  15 

    0xba888c29,// 18 SCX  16 

    0xca0a04ee,// 19 SCX  17 

    0x1b014072,// 20 SCX  18 

    0x316b3969,// 21 SCX  19 

    0x1ae4536a,// 22 SCX  20 

    0xde25d16d,// 23 SCX  21 

/// BFD is 3 words. 

/// BFD tot_len        : 685 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 85 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 85 

/// BFD lencrypto      : 8 

/// BFD ofstcrypto     : 76 

/// BFD (ofst+len)cry  : 84 

/// BFD ofstiv         : 40 

/// BFD ofsticv        : 536 

    0x00000055,// 24 BFD   1 

    0x004c0008,// 25 BFD   2 

    0x02180028,// 26 BFD   3 

/// MFM is 3 words. 

/// MFM vldnibs        : e 

    0x0e00c138,// 27 MFM   1 

    0x54449ea9,// 28 MFM   2 

    0x20000000,// 29 MFM   3 

/// BDA is 173 words. 

/// BDA size     is 685 (0x2ad) 

/// BDA id       is 0x316c 

    0x02ad316c,// 30 BDA   1 

/// PAY Generic Data size   : 685 byte(s) 

/// PAD Buffer Data Pad size   : 3 byte(s) 

    0x7b96287b,// 31 PAY   1 

    0x2b74ab2c,// 32 PAY   2 

    0xa7c00938,// 33 PAY   3 

    0xa645c18f,// 34 PAY   4 

    0xf1fd646c,// 35 PAY   5 

    0x6c8276b1,// 36 PAY   6 

    0xd57ddb86,// 37 PAY   7 

    0xa778992c,// 38 PAY   8 

    0x6ffe4f6e,// 39 PAY   9 

    0xc91b2f04,// 40 PAY  10 

    0x5ee6a32a,// 41 PAY  11 

    0x56fbda0e,// 42 PAY  12 

    0xa239c519,// 43 PAY  13 

    0x621cd48a,// 44 PAY  14 

    0xb5836640,// 45 PAY  15 

    0x7d869bcd,// 46 PAY  16 

    0xc3fee07a,// 47 PAY  17 

    0x8bdcc255,// 48 PAY  18 

    0x34f69c38,// 49 PAY  19 

    0x8a1fefc9,// 50 PAY  20 

    0xdc5a98f5,// 51 PAY  21 

    0x68ff08f1,// 52 PAY  22 

    0x8bc453c0,// 53 PAY  23 

    0x19f04cab,// 54 PAY  24 

    0x9e7d37a8,// 55 PAY  25 

    0x84f9a53e,// 56 PAY  26 

    0x13574201,// 57 PAY  27 

    0x12284ed7,// 58 PAY  28 

    0xd08d2a96,// 59 PAY  29 

    0x4ac898c6,// 60 PAY  30 

    0x30b07bc2,// 61 PAY  31 

    0xbca704cf,// 62 PAY  32 

    0xc317fc1c,// 63 PAY  33 

    0xe5de6e03,// 64 PAY  34 

    0x6a891a9c,// 65 PAY  35 

    0xe7e9ab26,// 66 PAY  36 

    0xedeab293,// 67 PAY  37 

    0x91010c3a,// 68 PAY  38 

    0x3523440e,// 69 PAY  39 

    0x1b4e633d,// 70 PAY  40 

    0x6f8567b9,// 71 PAY  41 

    0x8601a2cc,// 72 PAY  42 

    0xbee3fc86,// 73 PAY  43 

    0x3b9d0493,// 74 PAY  44 

    0xc2f1e8be,// 75 PAY  45 

    0xbf9b8954,// 76 PAY  46 

    0xba02dd5d,// 77 PAY  47 

    0x00ac59bb,// 78 PAY  48 

    0x95155471,// 79 PAY  49 

    0x581e0dbe,// 80 PAY  50 

    0x226bbe6d,// 81 PAY  51 

    0x5324ce6a,// 82 PAY  52 

    0xb9204ed8,// 83 PAY  53 

    0x580edef7,// 84 PAY  54 

    0xdb4bbc4c,// 85 PAY  55 

    0x035a6412,// 86 PAY  56 

    0x2b44f83e,// 87 PAY  57 

    0xb135c302,// 88 PAY  58 

    0x7e2249e9,// 89 PAY  59 

    0xf2df3f20,// 90 PAY  60 

    0xbe0f4a58,// 91 PAY  61 

    0x60f19455,// 92 PAY  62 

    0x8a0c66d4,// 93 PAY  63 

    0x8a0cc0b0,// 94 PAY  64 

    0xb2c9c9bd,// 95 PAY  65 

    0xec6f50fb,// 96 PAY  66 

    0xa84afffb,// 97 PAY  67 

    0x7de1c23b,// 98 PAY  68 

    0xb6da6bd7,// 99 PAY  69 

    0xe5bab197,// 100 PAY  70 

    0x80b2d08d,// 101 PAY  71 

    0x3fdeac9f,// 102 PAY  72 

    0x8aad85a2,// 103 PAY  73 

    0x36977b71,// 104 PAY  74 

    0x9f9e79de,// 105 PAY  75 

    0x39bcdee4,// 106 PAY  76 

    0x3a7e3af4,// 107 PAY  77 

    0xfd7e3238,// 108 PAY  78 

    0x76d059f6,// 109 PAY  79 

    0x42b88940,// 110 PAY  80 

    0xedb4b2cf,// 111 PAY  81 

    0xfda78aa0,// 112 PAY  82 

    0xa7882a0f,// 113 PAY  83 

    0xafc60964,// 114 PAY  84 

    0x2262a9b3,// 115 PAY  85 

    0xcfdf8061,// 116 PAY  86 

    0xae36b1f4,// 117 PAY  87 

    0xab69e80e,// 118 PAY  88 

    0xee852db2,// 119 PAY  89 

    0x6279d550,// 120 PAY  90 

    0xe4ca4f93,// 121 PAY  91 

    0x46777a9f,// 122 PAY  92 

    0x3c330961,// 123 PAY  93 

    0xd5a722fa,// 124 PAY  94 

    0xbbb03d76,// 125 PAY  95 

    0xdd7a13ea,// 126 PAY  96 

    0xe999a1fd,// 127 PAY  97 

    0x140e9d59,// 128 PAY  98 

    0x6bdb9de5,// 129 PAY  99 

    0x14c7c219,// 130 PAY 100 

    0xdd777de4,// 131 PAY 101 

    0x87ec4b01,// 132 PAY 102 

    0x94aee0f8,// 133 PAY 103 

    0x4e54601c,// 134 PAY 104 

    0xf868aff7,// 135 PAY 105 

    0xd7147456,// 136 PAY 106 

    0x10afdb20,// 137 PAY 107 

    0xddf83fbe,// 138 PAY 108 

    0xcfefefc9,// 139 PAY 109 

    0xaae30b20,// 140 PAY 110 

    0x2a3b0ef7,// 141 PAY 111 

    0xa38702a2,// 142 PAY 112 

    0xc0259c57,// 143 PAY 113 

    0xed21bf4b,// 144 PAY 114 

    0xf1aad939,// 145 PAY 115 

    0x93e1f34c,// 146 PAY 116 

    0xe29a6efe,// 147 PAY 117 

    0x0d8f6082,// 148 PAY 118 

    0x5ff14f72,// 149 PAY 119 

    0xbf4b3a11,// 150 PAY 120 

    0x4a0abb2c,// 151 PAY 121 

    0xd7dad8d3,// 152 PAY 122 

    0x1723dc9d,// 153 PAY 123 

    0xb7195a5e,// 154 PAY 124 

    0xae8e1a5e,// 155 PAY 125 

    0x9b9b6700,// 156 PAY 126 

    0x92600b6b,// 157 PAY 127 

    0x5ff5308a,// 158 PAY 128 

    0xa2dfe733,// 159 PAY 129 

    0xcc0ba393,// 160 PAY 130 

    0x335d39f9,// 161 PAY 131 

    0xacb386f1,// 162 PAY 132 

    0x311540b0,// 163 PAY 133 

    0x6392af58,// 164 PAY 134 

    0x656ae5de,// 165 PAY 135 

    0xff839a2f,// 166 PAY 136 

    0xbae49d87,// 167 PAY 137 

    0xbcac622a,// 168 PAY 138 

    0x01a5d0e1,// 169 PAY 139 

    0x2b9b5a7b,// 170 PAY 140 

    0x2da50b72,// 171 PAY 141 

    0x23e1a2d3,// 172 PAY 142 

    0xa3a4ae1a,// 173 PAY 143 

    0x85715d1c,// 174 PAY 144 

    0x2f527f5a,// 175 PAY 145 

    0x14bdde67,// 176 PAY 146 

    0x5b664941,// 177 PAY 147 

    0x14908e95,// 178 PAY 148 

    0x7b90c7f9,// 179 PAY 149 

    0x572bf281,// 180 PAY 150 

    0x6d20cdba,// 181 PAY 151 

    0xe300eda6,// 182 PAY 152 

    0xe99619b3,// 183 PAY 153 

    0xd5f82c60,// 184 PAY 154 

    0xcd22178c,// 185 PAY 155 

    0x5c882a41,// 186 PAY 156 

    0xef8adbab,// 187 PAY 157 

    0x1d92e479,// 188 PAY 158 

    0x5e7bab02,// 189 PAY 159 

    0xf1b77e7b,// 190 PAY 160 

    0x5c340b2f,// 191 PAY 161 

    0x28060ae5,// 192 PAY 162 

    0xdeb3d968,// 193 PAY 163 

    0xcd5d8249,// 194 PAY 164 

    0xed15cd0d,// 195 PAY 165 

    0x6ff70ccb,// 196 PAY 166 

    0x11eed592,// 197 PAY 167 

    0x1420e20b,// 198 PAY 168 

    0x4ee68569,// 199 PAY 169 

    0x4a57d9e6,// 200 PAY 170 

    0xa2e4ce15,// 201 PAY 171 

    0xa6000000,// 202 PAY 172 

/// STA is 1 words. 

/// STA num_pkts       : 189 

/// STA pkt_idx        : 136 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xcb 

    0x0220cbbd // 203 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 80 (0x50) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_sha1_pkt88_tmpl[] = {
    0xb8010050,// 1 CCH   1 

/// ECH cache_idx      : 0x09 

/// ECH pdu_tag        : 0x00 

    0x00090000,// 2 ECH   1 

/// SCX is 19 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound save_icv insert_icv check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : SHA1 

/// SCX aes_size        : NORMAL_RC4INIT_AES128 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x1 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 40 

    0x00000013,// 3 SCX   1 

    0x806048de,// 4 SCX   2 

    0x00007100,// 5 SCX   3 

    0x541fd6ae,// 6 SCX   4 

    0x24f52267,// 7 SCX   5 

    0x6fbed207,// 8 SCX   6 

    0x65866685,// 9 SCX   7 

    0x55240797,// 10 SCX   8 

    0x35e08efd,// 11 SCX   9 

    0x10a6c8f5,// 12 SCX  10 

    0xaa622f3c,// 13 SCX  11 

    0x6260964c,// 14 SCX  12 

    0x631a9e81,// 15 SCX  13 

    0xbb4a302f,// 16 SCX  14 

    0x2820e97f,// 17 SCX  15 

    0xfc1598fc,// 18 SCX  16 

    0xcf0bfb30,// 19 SCX  17 

    0xe5b5cf92,// 20 SCX  18 

    0xe2d3646c,// 21 SCX  19 

/// BFD is 3 words. 

/// BFD tot_len        : 855 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 645 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 645 

/// BFD lencrypto      : 352 

/// BFD ofstcrypto     : 76 

/// BFD (ofst+len)cry  : 428 

/// BFD ofstiv         : 32 

/// BFD ofsticv        : 696 

    0x00000285,// 22 BFD   1 

    0x004c0160,// 23 BFD   2 

    0x02b80020,// 24 BFD   3 

/// MFM is 5 words. 

/// MFM vldnibs        : 24 

    0x2400c104,// 25 MFM   1 

    0xde8d7434,// 26 MFM   2 

    0xd0f69e4d,// 27 MFM   3 

    0x145a3fb8,// 28 MFM   4 

    0x8d697f2c,// 29 MFM   5 

/// BDA is 215 words. 

/// BDA size     is 855 (0x357) 

/// BDA id       is 0x441 

    0x03570441,// 30 BDA   1 

/// PAY Generic Data size   : 855 byte(s) 

/// PAD Buffer Data Pad size   : 1 byte(s) 

    0x70f1b087,// 31 PAY   1 

    0xf8926a33,// 32 PAY   2 

    0xc843928a,// 33 PAY   3 

    0xfdb54d09,// 34 PAY   4 

    0x487e56ff,// 35 PAY   5 

    0xea3e55cd,// 36 PAY   6 

    0x7c863498,// 37 PAY   7 

    0x968a5c61,// 38 PAY   8 

    0x8c12badf,// 39 PAY   9 

    0x01f9854e,// 40 PAY  10 

    0xe71f7e32,// 41 PAY  11 

    0x64d1c5ca,// 42 PAY  12 

    0xc4784609,// 43 PAY  13 

    0x2d9ea248,// 44 PAY  14 

    0x1faa0ef6,// 45 PAY  15 

    0x23077a4a,// 46 PAY  16 

    0x3ccd6844,// 47 PAY  17 

    0xae72feee,// 48 PAY  18 

    0x50ef4a0b,// 49 PAY  19 

    0x9ac10814,// 50 PAY  20 

    0xfbe04d6d,// 51 PAY  21 

    0xe02399bf,// 52 PAY  22 

    0x1cb81397,// 53 PAY  23 

    0x1825658e,// 54 PAY  24 

    0xfb8ac94c,// 55 PAY  25 

    0x33e4e731,// 56 PAY  26 

    0xb4c8788a,// 57 PAY  27 

    0x041ef5ec,// 58 PAY  28 

    0x72dc211e,// 59 PAY  29 

    0x7caaaa6c,// 60 PAY  30 

    0xe64f8d33,// 61 PAY  31 

    0x19d126f0,// 62 PAY  32 

    0xdb2cc72f,// 63 PAY  33 

    0x4d8a8c02,// 64 PAY  34 

    0x49330ef6,// 65 PAY  35 

    0xcafe4c3c,// 66 PAY  36 

    0x2f5dea34,// 67 PAY  37 

    0x122b0b53,// 68 PAY  38 

    0x983e18b9,// 69 PAY  39 

    0xcb42202f,// 70 PAY  40 

    0x64b2defa,// 71 PAY  41 

    0x3bc6c986,// 72 PAY  42 

    0xcc0804da,// 73 PAY  43 

    0x52ab7557,// 74 PAY  44 

    0x8c4b8370,// 75 PAY  45 

    0x764f94b6,// 76 PAY  46 

    0x6464f5a6,// 77 PAY  47 

    0x7d058793,// 78 PAY  48 

    0x3d588398,// 79 PAY  49 

    0xbc538f90,// 80 PAY  50 

    0x3912e46d,// 81 PAY  51 

    0xdc28bb4d,// 82 PAY  52 

    0x339b839f,// 83 PAY  53 

    0xcca92039,// 84 PAY  54 

    0x810b3c7a,// 85 PAY  55 

    0xe90e5be7,// 86 PAY  56 

    0xb6b6157b,// 87 PAY  57 

    0xe23b69c8,// 88 PAY  58 

    0x55a06d69,// 89 PAY  59 

    0x94d39b0e,// 90 PAY  60 

    0xff23e623,// 91 PAY  61 

    0x8036b2e2,// 92 PAY  62 

    0x81e2e35d,// 93 PAY  63 

    0x3ae18a4d,// 94 PAY  64 

    0x6b7c1072,// 95 PAY  65 

    0x0ccdae8c,// 96 PAY  66 

    0xbd3e954d,// 97 PAY  67 

    0xadef2b36,// 98 PAY  68 

    0x0a65d271,// 99 PAY  69 

    0x369d438a,// 100 PAY  70 

    0xae4411c9,// 101 PAY  71 

    0x1e83b978,// 102 PAY  72 

    0x4fec2b04,// 103 PAY  73 

    0x3d89dc10,// 104 PAY  74 

    0x69b1539d,// 105 PAY  75 















