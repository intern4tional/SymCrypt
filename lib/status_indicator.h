//
// status_indicator.h Implements FIPS 140-3 Approved Services Status Indicator
//
// Copyright (c) Microsoft Corporation. Licensed under the MIT license.
//


// Each module that exports SymCryptDeprecatedStatusIndicator function should define the
// following symbol and also the corresponding service descriptions so that the status
// indicator string is constructed specific to that module.
#ifndef SYMCRYPT_FIPS_STATUS_INDICATOR
#error SYMCRYPT_FIPS_STATUS_INDICATOR is not defined
#endif


// Helper macros to construct service strings
#define FIPS_SERVICE_BEGIN(name) name "\n"
#define FIPS_SERVICE_DESC(txt)  "\t- " txt "\n"
#define FIPS_SERVICE_END() "\n"

//
// For each service, define the service description macro FIPS_SERVICE_DESC_<service_name>
// if the module provides it. If this is not defined, then the service name
// will be left out of the status indicator string. Use FIPS_SERVICE_DESC()
// macro to include additional explanations for that service.
//

//#define FIPS_SERVICE_DESC_ALGORITHM_PROVIDERS_AND_PROPERTIES
//#define FIPS_SERVICE_DESC_ENCRYPTION_AND_DECRYPTION
//#define FIPS_SERVICE_DESC_HASHING_AND_MESSAGE_AUTHENTICATION
//#define FIPS_SERVICE_DESC_KEY_AND_KEYPAIR_GENERATION
//#define FIPS_SERVICE_DESC_KEY_DERIVATION
//#define FIPS_SERVICE_DESC_KEY_ENTRY_AND_OUTPUT
//#define FIPS_SERVICE_DESC_RANDOM_NUMBER_GENERATION
//#define FIPS_SERVICE_DESC_SELF_TESTS
//#define FIPS_SERVICE_DESC_SHOW_STATUS
//#define FIPS_SERVICE_DESC_SHOW_VERSION
//#define FIPS_SERVICE_DESC_SIGNING_AND_VERIFICATION
//#define FIPS_SERVICE_DESC_SECRET_AGREEMENT
//#define FIPS_SERVICE_DESC_ZEROIZING_CRYPTOGRAPHIC_MATERIAL


// The macros below will construct the status indicator string based on the
// defined services above. Do not modify below this line.

#ifdef FIPS_SERVICE_DESC_ALGORITHM_PROVIDERS_AND_PROPERTIES
#define FIPS_SERVICE_TEXT_ALGORITHM_PROVIDERS_AND_PROPERTIES \
    FIPS_SERVICE_BEGIN("Algorithm Providers and Properties") \
    FIPS_SERVICE_DESC_ALGORITHM_PROVIDERS_AND_PROPERTIES \
    FIPS_SERVICE_END()
#else
#define FIPS_SERVICE_TEXT_ALGORITHM_PROVIDERS_AND_PROPERTIES ""
#endif

#ifdef FIPS_SERVICE_DESC_ENCRYPTION_AND_DECRYPTION
#define FIPS_SERVICE_TEXT_ENCRYPTION_AND_DECRYPTION \
    FIPS_SERVICE_BEGIN("Encryption and Decryption") \
    FIPS_SERVICE_DESC_ENCRYPTION_AND_DECRYPTION \
    FIPS_SERVICE_END()
#else
#define FIPS_SERVICE_TEXT_ENCRYPTION_AND_DECRYPTION ""
#endif

#ifdef FIPS_SERVICE_DESC_HASHING_AND_MESSAGE_AUTHENTICATION
#define FIPS_SERVICE_TEXT_HASHING_AND_MESSAGE_AUTHENTICATION \
    FIPS_SERVICE_BEGIN("Hashing and Message Authentication") \
    FIPS_SERVICE_DESC_HASHING_AND_MESSAGE_AUTHENTICATION \
    FIPS_SERVICE_END()
#else
#define FIPS_SERVICE_TEXT_HASHING_AND_MESSAGE_AUTHENTICATION ""
#endif

#ifdef FIPS_SERVICE_DESC_KEY_AND_KEYPAIR_GENERATION
#define FIPS_SERVICE_TEXT_KEY_AND_KEYPAIR_GENERATION \
    FIPS_SERVICE_BEGIN("Key and Key-Pair Generation") \
    FIPS_SERVICE_DESC_KEY_AND_KEYPAIR_GENERATION \
    FIPS_SERVICE_END()
#else
#define FIPS_SERVICE_TEXT_KEY_AND_KEYPAIR_GENERATION ""
#endif

#ifdef FIPS_SERVICE_DESC_KEY_DERIVATION
#define FIPS_SERVICE_TEXT_KEY_DERIVATION \
    FIPS_SERVICE_BEGIN("Key Derivation") \
    FIPS_SERVICE_DESC_KEY_DERIVATION \
    FIPS_SERVICE_END()
#else
#define FIPS_SERVICE_TEXT_KEY_DERIVATION ""
#endif

#ifdef FIPS_SERVICE_DESC_KEY_ENTRY_AND_OUTPUT
#define FIPS_SERVICE_TEXT_KEY_ENTRY_AND_OUTPUT \
    FIPS_SERVICE_BEGIN("Key Entry and Output") \
    FIPS_SERVICE_DESC_KEY_ENTRY_AND_OUTPUT \
    FIPS_SERVICE_END()
#else
#define FIPS_SERVICE_TEXT_KEY_ENTRY_AND_OUTPUT ""
#endif

#ifdef FIPS_SERVICE_DESC_RANDOM_NUMBER_GENERATION
#define FIPS_SERVICE_TEXT_RANDOM_NUMBER_GENERATION \
    FIPS_SERVICE_BEGIN("Random Number Generation") \
    FIPS_SERVICE_DESC_RANDOM_NUMBER_GENERATION \
    FIPS_SERVICE_END()
#else
#define FIPS_SERVICE_TEXT_RANDOM_NUMBER_GENERATION ""
#endif

#ifdef FIPS_SERVICE_DESC_SELF_TESTS
#define FIPS_SERVICE_TEXT_SELF_TESTS \
    FIPS_SERVICE_BEGIN("Self-Tests") \
    FIPS_SERVICE_DESC_SELF_TESTS \
    FIPS_SERVICE_END()
#else
#define FIPS_SERVICE_TEXT_SELF_TESTS ""
#endif

#ifdef FIPS_SERVICE_DESC_SHOW_STATUS
#define FIPS_SERVICE_TEXT_SHOW_STATUS \
    FIPS_SERVICE_BEGIN("Show Status") \
    FIPS_SERVICE_DESC_SHOW_STATUS \
    FIPS_SERVICE_END()
#else
#define FIPS_SERVICE_TEXT_SHOW_STATUS ""
#endif

#ifdef FIPS_SERVICE_DESC_SHOW_VERSION
#define FIPS_SERVICE_TEXT_SHOW_VERSION \
    FIPS_SERVICE_BEGIN("Show Version") \
    FIPS_SERVICE_DESC_SHOW_VERSION \
    FIPS_SERVICE_END()
#else
#define FIPS_SERVICE_TEXT_SHOW_VERSION ""
#endif

#ifdef FIPS_SERVICE_DESC_SIGNING_AND_VERIFICATION
#define FIPS_SERVICE_TEXT_SIGNING_AND_VERIFICATION \
    FIPS_SERVICE_BEGIN("Signing and Verification") \
    FIPS_SERVICE_DESC_SIGNING_AND_VERIFICATION \
    FIPS_SERVICE_END()
#else
#define FIPS_SERVICE_TEXT_SIGNING_AND_VERIFICATION ""
#endif

#ifdef FIPS_SERVICE_DESC_SECRET_AGREEMENT
#define FIPS_SERVICE_TEXT_SECRET_AGREEMENT \
    FIPS_SERVICE_BEGIN("Secret Agreement") \
    FIPS_SERVICE_DESC_SECRET_AGREEMENT \
    FIPS_SERVICE_END()
#else
#define FIPS_SERVICE_TEXT_SECRET_AGREEMENT ""
#endif

#ifdef FIPS_SERVICE_DESC_ZEROIZING_CRYPTOGRAPHIC_MATERIAL
#define FIPS_SERVICE_TEXT_ZEROIZING_CRYPTOGRAPHIC_MATERIAL \
    FIPS_SERVICE_BEGIN("Zeroizing Cryptographic Material") \
    FIPS_SERVICE_DESC_ZEROIZING_CRYPTOGRAPHIC_MATERIAL \
    FIPS_SERVICE_END()
#else
#define FIPS_SERVICE_TEXT_ZEROIZING_CRYPTOGRAPHIC_MATERIAL ""
#endif


static const char _szStatusIndicator[] = \
    FIPS_SERVICE_TEXT_ALGORITHM_PROVIDERS_AND_PROPERTIES \
    FIPS_SERVICE_TEXT_ENCRYPTION_AND_DECRYPTION \
    FIPS_SERVICE_TEXT_HASHING_AND_MESSAGE_AUTHENTICATION \
    FIPS_SERVICE_TEXT_KEY_AND_KEYPAIR_GENERATION \
    FIPS_SERVICE_TEXT_KEY_DERIVATION \
    FIPS_SERVICE_TEXT_KEY_ENTRY_AND_OUTPUT \
    FIPS_SERVICE_TEXT_RANDOM_NUMBER_GENERATION \
    FIPS_SERVICE_TEXT_SELF_TESTS \
    FIPS_SERVICE_TEXT_SHOW_STATUS \
    FIPS_SERVICE_TEXT_SHOW_VERSION \
    FIPS_SERVICE_TEXT_SIGNING_AND_VERIFICATION \
    FIPS_SERVICE_TEXT_SECRET_AGREEMENT \
    FIPS_SERVICE_TEXT_ZEROIZING_CRYPTOGRAPHIC_MATERIAL;

UINT32
SYMCRYPT_CALL
SymCryptDeprecatedStatusIndicator(PBYTE pbOutput, UINT32 cbOutput)
{
    const UINT32 uRequiredSize = sizeof(_szStatusIndicator);
    UINT32 result = 0;

    if (pbOutput == NULL)
    {
        result = uRequiredSize;
    }
    else if (cbOutput >= uRequiredSize)
    {
        memcpy(pbOutput, _szStatusIndicator, uRequiredSize);
        result = uRequiredSize;
    }

    return result;
}
