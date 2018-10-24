// Copyright (c) Microsoft. All rights reserved.
// Licensed under the MIT license. See LICENSE file in the project root for full license information.

#ifndef X509_OPENSSL_H
#define X509_OPENSSL_H

#include "openssl/ssl.h"

#ifdef __cplusplus
extern "C" {
#endif

#include "azure_c_shared_utility/umock_c_prod.h"

MOCKABLE_FUNCTION(,int, x509_openssl_add_certificates, SSL_CTX*, ssl_ctx, const char*, certificates);
MOCKABLE_FUNCTION(,int, x509_openssl_add_credentials, SSL_CTX*, ssl_ctx, const char*, x509certificate, const char*, x509privatekey);
MOCKABLE_FUNCTION(,int, x509_openssl_add_ecc_credentials, SSL_CTX*, ssl_ctx, const char*, ecc_alias_cert, const char*, ecc_alias_key);

#ifdef __cplusplus
}
#endif 

#endif
