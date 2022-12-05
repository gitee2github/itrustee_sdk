/*
 * Copyright (c) Huawei Technologies Co., Ltd. 2020-2022. All rights reserved.
 * iTrustee licensed under the Mulan PSL v2.
 * You can use this software according to the terms and conditions of the Mulan PSL v2.
 * You may obtain a copy of Mulan PSL v2 at:
 *     http://license.coscl.org.cn/MulanPSL2
 * THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND, EITHER EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT, MERCHANTABILITY OR FIT FOR A PARTICULAR
 * PURPOSE.
 * See the Mulan PSL v2 for more details.
 * Description: rsa_ta_interface.h
 */
#ifndef __RSA_TA_INTERFACE_H
#define __RSA_TA_INTERFACE_H

#include <stddef.h>
#include "tee_defines.h"

#define TA_RSA_CRYPTO_DEMO_VERSION        "V1_20151215"
#define CLIENT_APPLICATION_NAME           "/vendor/bin/rsa_demo"

#define RSA_KEY_SIZE             256    // 2048bits
#define RSA_KEY_1                1
#define RSA_ALG_OAEP_SHA512      1      // 用 TEE_ALG_RSAES_PKCS1_OAEP_MGF1_SHA512 模式加密
#define RSA_ALG_PSS_SHA256       2      // 用 TEE_ALG_RSASSA_PKCS1_PSS_MGF1_SHA256 模式去签名

#define RSA_CRYPTO_DEBUG
#define RSA_2048_OUTPUT_SIZE     256
#define PATHLEN_LIMIT_START      21
#define PATHLEN_LIMIT_END        127
#define DIGEST_BUF_LEN           32

#define PARAMS_IDX0              0    // params参数的下标索引 0
#define PARAMS_IDX1              1    // params参数的下标索引 1
#define PARAMS_IDX2              2    // params参数的下标索引 2
#define PARAMS_IDX3              3    // params参数的下标索引 3
#define PARAMS_IDX4              4    // params参数的下标索引 4

#define NUM_VALUE_0              0    // 参数下标索引 0
#define NUM_VALUE_1              1    // 参数下标索引 1
#define NUM_VALUE_2              2    // 参数下标索引 2
#define NUM_VALUE_3              3    // 参数下标索引 3
#define NUM_VALUE_4              4    // 参数下标索引 4
typedef enum {
    CMD_GENERATE_RANDOM = 0,
	CMD_GENERATE_KEYPAIR,
	CMD_SAVE_KEYPAIR,
	CMD_READ_KEYPAIR,
	CMD_ENC_OAEP_MGF1_SHA512,
	CMD_DEC_OAEP_MGF1_SHA512,
	CMD_SIGN_PSS_MGF1_SHA256,
	CMD_VERIFY_PSS_MGF1_SHA256,
} DEMO_RSA_CRYPTO_CMD;

typedef struct {
    char *buffer;
    size_t size;
} Buffer;

#endif