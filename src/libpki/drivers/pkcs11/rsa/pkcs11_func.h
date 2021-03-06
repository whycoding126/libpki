/* This file prevents the compiler from warining about
 * deferencing void pointers
 */

CK_RV CK_ENTRY C_GetFunctionList(CK_FUNCTION_LIST_PTR_PTR ppFunctionList);

typedef CK_RV CK_ENTRY (CK_PTR CK_C_Initialize)(CK_VOID_PTR pReserved);
typedef CK_RV CK_ENTRY (CK_PTR CK_C_Finalize)(CK_VOID_PTR pReserved);
typedef CK_RV CK_ENTRY (CK_PTR CK_C_Terminate)(void);
typedef CK_RV CK_ENTRY (CK_PTR CK_C_GetInfo)(CK_INFO_PTR pInfo);
typedef CK_RV CK_ENTRY (CK_PTR CK_C_GetFunctionList)(CK_FUNCTION_LIST_PTR_PTR ppFunctionList);
typedef CK_RV CK_ENTRY (CK_PTR CK_C_GetSlotList)(CK_BBOOL tokenPresent, CK_SLOT_ID_PTR pSlotList, CK_ULONG_PTR pusCount);
typedef CK_RV CK_ENTRY (CK_PTR CK_C_GetSlotInfo)(CK_SLOT_ID slotID, CK_SLOT_INFO_PTR pInfo);
typedef CK_RV CK_ENTRY (CK_PTR CK_C_GetTokenInfo)(CK_SLOT_ID slotID, CK_TOKEN_INFO_PTR pInfo);
typedef CK_RV CK_ENTRY (CK_PTR CK_C_GetMechanismList)(CK_SLOT_ID slotID, CK_MECHANISM_TYPE_PTR pMechanismList, CK_ULONG_PTR pusCount);
typedef CK_RV CK_ENTRY (CK_PTR CK_C_GetMechanismInfo)(CK_SLOT_ID slotID, CK_MECHANISM_TYPE type, CK_MECHANISM_INFO_PTR pInfo);
typedef CK_RV CK_ENTRY (CK_PTR CK_C_WaitForSlotEvent)(CK_FLAGS flags, CK_SLOT_ID_PTR pSlot, CK_VOID_PTR pReserved);
typedef CK_RV CK_ENTRY (CK_PTR CK_C_InitToken)(CK_SLOT_ID slotID, CK_CHAR_PTR pPin, CK_ULONG usPinLen, CK_CHAR_PTR pLabel);
typedef CK_RV CK_ENTRY (CK_PTR CK_C_InitPIN)(CK_SESSION_HANDLE hSession, CK_CHAR_PTR pPin, CK_ULONG usPinLen);
typedef CK_RV CK_ENTRY (CK_PTR CK_C_SetPIN)(CK_SESSION_HANDLE hSession, CK_CHAR_PTR pOldPin, CK_ULONG usOldLen, CK_CHAR_PTR pNewPin, CK_ULONG usNewLen);
typedef CK_RV CK_ENTRY (CK_PTR CK_C_OpenSession)(CK_SLOT_ID slotID, CK_FLAGS flags, CK_VOID_PTR pApplication, CK_NOTIFY Notify, CK_SESSION_HANDLE_PTR phSession);
typedef CK_RV CK_ENTRY (CK_PTR CK_C_CloseSession)(CK_SESSION_HANDLE hSession);
typedef CK_RV CK_ENTRY (CK_PTR CK_C_CloseAllSessions)(CK_SLOT_ID slotID);
typedef CK_RV CK_ENTRY (CK_PTR CK_C_GetSessionInfo)(CK_SESSION_HANDLE hSession, CK_SESSION_INFO_PTR pInfo);
typedef CK_RV CK_ENTRY (CK_PTR CK_C_GetOperationState)(CK_SESSION_HANDLE hSession, CK_BYTE_PTR pOperationState, CK_ULONG_PTR pulOperationStateLen);
typedef CK_RV CK_ENTRY (CK_PTR CK_C_SetOperationState)(CK_SESSION_HANDLE hSession, CK_BYTE_PTR pOperationState, CK_ULONG ulOperationStateLen, CK_OBJECT_HANDLE hEncryptionKey, CK_OBJECT_HANDLE hAuthenticationKey);
typedef CK_RV CK_ENTRY (CK_PTR CK_C_Login)(CK_SESSION_HANDLE hSession, CK_USER_TYPE userType, CK_CHAR_PTR pPin, CK_ULONG usPinLen);
typedef CK_RV CK_ENTRY (CK_PTR CK_C_Logout)(CK_SESSION_HANDLE hSession);
typedef CK_RV CK_ENTRY (CK_PTR CK_C_CreateObject)(CK_SESSION_HANDLE hSession, CK_ATTRIBUTE_PTR pTemplate, CK_ULONG usCount, CK_OBJECT_HANDLE_PTR phObject);
typedef CK_RV CK_ENTRY (CK_PTR CK_C_CopyObject)(CK_SESSION_HANDLE hSession, CK_OBJECT_HANDLE hObject, CK_ATTRIBUTE_PTR pTemplate, CK_ULONG usCount, CK_OBJECT_HANDLE_PTR phNewObject);
typedef CK_RV CK_ENTRY (CK_PTR CK_C_DestroyObject)(CK_SESSION_HANDLE hSession, CK_OBJECT_HANDLE hObject);
typedef CK_RV CK_ENTRY (CK_PTR CK_C_GetObjectSize)(CK_SESSION_HANDLE hSession, CK_OBJECT_HANDLE hObject, CK_ULONG_PTR pusSize);
typedef CK_RV CK_ENTRY (CK_PTR CK_C_GetAttributeValue)(CK_SESSION_HANDLE hSession, CK_OBJECT_HANDLE hObject, CK_ATTRIBUTE_PTR pTemplate, CK_ULONG usCount);
typedef CK_RV CK_ENTRY (CK_PTR CK_C_SetAttributeValue)(CK_SESSION_HANDLE hSession, CK_OBJECT_HANDLE hObject, CK_ATTRIBUTE_PTR pTemplate, CK_ULONG usCount);
typedef CK_RV CK_ENTRY (CK_PTR CK_C_FindObjectsInit)(CK_SESSION_HANDLE hSession, CK_ATTRIBUTE_PTR pTemplate, CK_ULONG usCount);
typedef CK_RV CK_ENTRY (CK_PTR CK_C_FindObjects)(CK_SESSION_HANDLE hSession, CK_OBJECT_HANDLE_PTR phObject, CK_ULONG usMaxObjectCount, CK_ULONG_PTR pusObjectCount);
typedef CK_RV CK_ENTRY (CK_PTR CK_C_FindObjectsFinal)(CK_SESSION_HANDLE hSession);
typedef CK_RV CK_ENTRY (CK_PTR CK_C_EncryptInit)(CK_SESSION_HANDLE hSession, CK_MECHANISM_PTR pMechanism, CK_OBJECT_HANDLE hKey);
typedef CK_RV CK_ENTRY (CK_PTR CK_C_Encrypt)(CK_SESSION_HANDLE hSession, CK_BYTE_PTR pData, CK_ULONG usDataLen, CK_BYTE_PTR pEncryptedData, CK_ULONG_PTR pusEncryptedDataLen);
typedef CK_RV CK_ENTRY (CK_PTR CK_C_EncryptUpdate)(CK_SESSION_HANDLE hSession, CK_BYTE_PTR pPart, CK_ULONG usPartLen, CK_BYTE_PTR pEncryptedPart, CK_ULONG_PTR pusEncryptedPartLen);
typedef CK_RV CK_ENTRY (CK_PTR CK_C_EncryptFinal)(CK_SESSION_HANDLE hSession, CK_BYTE_PTR pLastEncryptedPart, CK_ULONG_PTR pusLastEncryptedPartLen);
typedef CK_RV CK_ENTRY (CK_PTR CK_C_DecryptInit)(CK_SESSION_HANDLE hSession, CK_MECHANISM_PTR pMechanism, CK_OBJECT_HANDLE hKey);
typedef CK_RV CK_ENTRY (CK_PTR CK_C_Decrypt)(CK_SESSION_HANDLE hSession, CK_BYTE_PTR pEncryptedData, CK_ULONG usEncryptedDataLen, CK_BYTE_PTR pData, CK_ULONG_PTR pusDataLen);
typedef CK_RV CK_ENTRY (CK_PTR CK_C_DecryptUpdate)(CK_SESSION_HANDLE hSession, CK_BYTE_PTR pEncryptedPart, CK_ULONG usEncryptedPartLen, CK_BYTE_PTR pPart, CK_ULONG_PTR pusPartLen);
typedef CK_RV CK_ENTRY (CK_PTR CK_C_DecryptFinal)(CK_SESSION_HANDLE hSession, CK_BYTE_PTR pLastPart, CK_ULONG_PTR pusLastPartLen);
typedef CK_RV CK_ENTRY (CK_PTR CK_C_DigestInit)(CK_SESSION_HANDLE hSession, CK_MECHANISM_PTR pMechanism);
typedef CK_RV CK_ENTRY (CK_PTR CK_C_Digest)(CK_SESSION_HANDLE hSession, CK_BYTE_PTR pData, CK_ULONG usDataLen, CK_BYTE_PTR pDigest, CK_ULONG_PTR pusDigestLen);
typedef CK_RV CK_ENTRY (CK_PTR CK_C_DigestUpdate)(CK_SESSION_HANDLE hSession, CK_BYTE_PTR pPart, CK_ULONG usPartLen);
typedef CK_RV CK_ENTRY (CK_PTR CK_C_DigestKey)(CK_SESSION_HANDLE hSession, CK_OBJECT_HANDLE hKey);
typedef CK_RV CK_ENTRY (CK_PTR CK_C_DigestFinal)(CK_SESSION_HANDLE hSession, CK_BYTE_PTR pDigest, CK_ULONG_PTR pusDigestLen);
typedef CK_RV CK_ENTRY (CK_PTR CK_C_SignInit)(CK_SESSION_HANDLE hSession, CK_MECHANISM_PTR pMechanism, CK_OBJECT_HANDLE hKey);
typedef CK_RV CK_ENTRY (CK_PTR CK_C_Sign)(CK_SESSION_HANDLE hSession, CK_BYTE_PTR pData, CK_ULONG usDataLen, CK_BYTE_PTR pSignature, CK_ULONG_PTR pusSignatureLen);
typedef CK_RV CK_ENTRY (CK_PTR CK_C_SignUpdate)(CK_SESSION_HANDLE hSession, CK_BYTE_PTR pPart, CK_ULONG usPartLen);
typedef CK_RV CK_ENTRY (CK_PTR CK_C_SignFinal)(CK_SESSION_HANDLE hSession, CK_BYTE_PTR pSignature, CK_ULONG_PTR pusSignatureLen);
typedef CK_RV CK_ENTRY (CK_PTR CK_C_SignRecoverInit)(CK_SESSION_HANDLE hSession, CK_MECHANISM_PTR pMechanism, CK_OBJECT_HANDLE hKey);
typedef CK_RV CK_ENTRY (CK_PTR CK_C_SignRecover)(CK_SESSION_HANDLE hSession, CK_BYTE_PTR pData, CK_ULONG usDataLen, CK_BYTE_PTR pSignature, CK_ULONG_PTR pusSignatureLen);
typedef CK_RV CK_ENTRY (CK_PTR CK_C_VerifyInit)(CK_SESSION_HANDLE hSession, CK_MECHANISM_PTR pMechanism, CK_OBJECT_HANDLE hKey);
typedef CK_RV CK_ENTRY (CK_PTR CK_C_Verify)(CK_SESSION_HANDLE hSession, CK_BYTE_PTR pData, CK_ULONG usDataLen, CK_BYTE_PTR pSignature, CK_ULONG usSignatureLen);
typedef CK_RV CK_ENTRY (CK_PTR CK_C_VerifyUpdate)(CK_SESSION_HANDLE hSession, CK_BYTE_PTR pPart, CK_ULONG usPartLen);
typedef CK_RV CK_ENTRY (CK_PTR CK_C_VerifyFinal)(CK_SESSION_HANDLE hSession, CK_BYTE_PTR pSignature, CK_ULONG usSignatureLen);
typedef CK_RV CK_ENTRY (CK_PTR CK_C_VerifyRecoverInit)(CK_SESSION_HANDLE hSession, CK_MECHANISM_PTR pMechanism, CK_OBJECT_HANDLE hKey);
typedef CK_RV CK_ENTRY (CK_PTR CK_C_VerifyRecover)(CK_SESSION_HANDLE hSession, CK_BYTE_PTR pSignature, CK_ULONG usSignatureLen, CK_BYTE_PTR pData, CK_ULONG_PTR pusDataLen);
typedef CK_RV CK_ENTRY (CK_PTR CK_C_DigestEncryptUpdate)(CK_SESSION_HANDLE hSession, CK_BYTE_PTR pPart, CK_ULONG ulPartLen, CK_BYTE_PTR pEncryptedPart, CK_ULONG_PTR pulEncryptedPartLen);
typedef CK_RV CK_ENTRY (CK_PTR CK_C_DecryptDigestUpdate)(CK_SESSION_HANDLE hSession, CK_BYTE_PTR pEncryptedPart, CK_ULONG ulEncryptedPartLen, CK_BYTE_PTR pPart, CK_ULONG_PTR pulPartLen);
typedef CK_RV CK_ENTRY (CK_PTR CK_C_SignEncryptUpdate)(CK_SESSION_HANDLE hSession, CK_BYTE_PTR pPart, CK_ULONG ulPartLen, CK_BYTE_PTR pEncryptedPart, CK_ULONG_PTR pulEncryptedPartLen);
typedef CK_RV CK_ENTRY (CK_PTR CK_C_DecryptVerifyUpdate)(CK_SESSION_HANDLE hSession, CK_BYTE_PTR pEncryptedPart, CK_ULONG ulEncryptedPartLen, CK_BYTE_PTR pPart, CK_ULONG_PTR pulPartLen);
typedef CK_RV CK_ENTRY (CK_PTR CK_C_GenerateKey)(CK_SESSION_HANDLE hSession, CK_MECHANISM_PTR pMechanism, CK_ATTRIBUTE_PTR pTemplate, CK_ULONG usCount, CK_OBJECT_HANDLE_PTR phKey);
typedef CK_RV CK_ENTRY (CK_PTR CK_C_GenerateKeyPair)(CK_SESSION_HANDLE hSession, CK_MECHANISM_PTR pMechanism, CK_ATTRIBUTE_PTR pPublicKeyTemplate, CK_ULONG usPublicKeyAttributeCount, CK_ATTRIBUTE_PTR pPrivateKeyTemplate, CK_ULONG usPrivateKeyAttributeCount, CK_OBJECT_HANDLE_PTR phPrivateKey, CK_OBJECT_HANDLE_PTR phPublicKey);
typedef CK_RV CK_ENTRY (CK_PTR CK_C_WrapKey)(CK_SESSION_HANDLE hSession, CK_MECHANISM_PTR pMechanism, CK_OBJECT_HANDLE hWrappingKey, CK_OBJECT_HANDLE hKey, CK_BYTE_PTR pWrappedKey, CK_ULONG_PTR pusWrappedKeyLen);
typedef CK_RV CK_ENTRY (CK_PTR CK_C_UnwrapKey)(CK_SESSION_HANDLE hSession, CK_MECHANISM_PTR pMechanism, CK_OBJECT_HANDLE hUnwrappingKey, CK_BYTE_PTR pWrappedKey, CK_ULONG usWrappedKeyLen, CK_ATTRIBUTE_PTR pTemplate, CK_ULONG usAttributeCount, CK_OBJECT_HANDLE_PTR phKey);
typedef CK_RV CK_ENTRY (CK_PTR CK_C_DeriveKey)(CK_SESSION_HANDLE hSession, CK_MECHANISM_PTR pMechanism, CK_OBJECT_HANDLE hBaseKey, CK_ATTRIBUTE_PTR pTemplate, CK_ULONG usAttributeCount, CK_OBJECT_HANDLE_PTR phKey);
typedef CK_RV CK_ENTRY (CK_PTR CK_C_SeedRandom)(CK_SESSION_HANDLE hSession, CK_BYTE_PTR pSeed, CK_ULONG usSeedLen);
typedef CK_RV CK_ENTRY (CK_PTR CK_C_GenerateRandom)(CK_SESSION_HANDLE hSession, CK_BYTE_PTR pRandomData, CK_ULONG usRandomLen);
typedef CK_RV CK_ENTRY (CK_PTR CK_C_GetFunctionStatus)(CK_SESSION_HANDLE hSession);
typedef CK_RV CK_ENTRY (CK_PTR CK_C_CancelFunction)(CK_SESSION_HANDLE hSession);
typedef CK_RV CK_ENTRY (CK_PTR CK_C_PerformSelfTest)(CK_SESSION_HANDLE hSession, CK_ULONG typeOfTest, CK_BYTE_PTR outputData, CK_ULONG sizeOfOutputData, CK_BYTE_PTR inputData, CK_ULONG_PTR sizeOfInputData);
typedef CK_RV CK_ENTRY (CK_PTR CK_Notify)(CK_SESSION_HANDLE hSession, CK_NOTIFICATION event, CK_VOID_PTR pApplication);


struct CK_FUNCTION_LIST {
	CK_VERSION version;
	CK_C_Initialize C_Initialize;
	CK_C_Finalize C_Finalize;
	CK_C_GetInfo C_GetInfo;
	CK_C_GetFunctionList C_GetFunctionList;
	CK_C_GetSlotList C_GetSlotList;
	CK_C_GetSlotInfo C_GetSlotInfo;
	CK_C_GetTokenInfo C_GetTokenInfo;
	CK_C_GetMechanismList C_GetMechanismList;
	CK_C_GetMechanismInfo C_GetMechanismInfo;
	CK_C_InitToken C_InitToken;
	CK_C_InitPIN C_InitPIN;
	CK_C_SetPIN C_SetPIN;
	CK_C_OpenSession C_OpenSession;
	CK_C_CloseSession C_CloseSession;
	CK_C_CloseAllSessions C_CloseAllSessions;
	CK_C_GetSessionInfo C_GetSessionInfo;
	CK_C_GetOperationState C_GetOperationState;
	CK_C_SetOperationState C_SetOperationState;
	CK_C_Login C_Login;
	CK_C_Logout C_Logout;
	CK_C_CreateObject C_CreateObject;
	CK_C_CopyObject C_CopyObject;
	CK_C_DestroyObject C_DestroyObject;
	CK_C_GetObjectSize C_GetObjectSize;
	CK_C_GetAttributeValue C_GetAttributeValue;
	CK_C_SetAttributeValue C_SetAttributeValue;
	CK_C_FindObjectsInit C_FindObjectsInit;
	CK_C_FindObjects C_FindObjects;
	CK_C_FindObjectsFinal C_FindObjectsFinal;
	CK_C_EncryptInit C_EncryptInit;
	CK_C_Encrypt C_Encrypt;
	CK_C_EncryptUpdate C_EncryptUpdate;
	CK_C_EncryptFinal C_EncryptFinal;
	CK_C_DecryptInit C_DecryptInit;
	CK_C_Decrypt C_Decrypt;
	CK_C_DecryptUpdate C_DecryptUpdate;
	CK_C_DecryptFinal C_DecryptFinal;
	CK_C_DigestInit C_DigestInit;
	CK_C_Digest C_Digest;
	CK_C_DigestUpdate C_DigestUpdate;
	CK_C_DigestKey C_DigestKey;
	CK_C_DigestFinal C_DigestFinal;
	CK_C_SignInit C_SignInit;
	CK_C_Sign C_Sign;
	CK_C_SignUpdate C_SignUpdate;
	CK_C_SignFinal C_SignFinal;
	CK_C_SignRecoverInit C_SignRecoverInit;
	CK_C_SignRecover C_SignRecover;
	CK_C_VerifyInit C_VerifyInit;
	CK_C_Verify C_Verify;
	CK_C_VerifyUpdate C_VerifyUpdate;
	CK_C_VerifyFinal C_VerifyFinal;
	CK_C_VerifyRecoverInit C_VerifyRecoverInit;
	CK_C_VerifyRecover C_VerifyRecover;
	CK_C_DigestEncryptUpdate C_DigestEncryptUpdate;
	CK_C_DecryptDigestUpdate C_DecryptDigestUpdate;
	CK_C_SignEncryptUpdate C_SignEncryptUpdate;
	CK_C_DecryptVerifyUpdate C_DecryptVerifyUpdate;
	CK_C_GenerateKey C_GenerateKey;
	CK_C_GenerateKeyPair C_GenerateKeyPair;
	CK_C_WrapKey C_WrapKey;
	CK_C_UnwrapKey C_UnwrapKey;
	CK_C_DeriveKey C_DeriveKey;
	CK_C_SeedRandom C_SeedRandom;
	CK_C_GenerateRandom C_GenerateRandom;
	CK_C_GetFunctionStatus C_GetFunctionStatus;
	CK_C_CancelFunction C_CancelFunction;
	CK_C_WaitForSlotEvent C_WaitForSlotEvent;
	CK_C_PerformSelfTest C_PerformSelfTest;
};
 
