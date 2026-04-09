// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: PBKDF2_SHA256
// Entry Point: 00be4c98
// Size: 188 bytes
// Signature: undefined __cdecl PBKDF2_SHA256(uchar * param_1, ulong param_2, uchar * param_3, ulong param_4, uchar * param_5, ulong param_6, uint param_7)


/* PBKDF2HashUtil::PBKDF2_SHA256(unsigned char const*, unsigned long, unsigned char const*, unsigned
   long, unsigned char const*, unsigned long, unsigned int) */

void PBKDF2HashUtil::PBKDF2_SHA256
               (uchar *param_1,ulong param_2,uchar *param_3,ulong param_4,uchar *param_5,
               ulong param_6,uint param_7)

{
  long lVar1;
  undefined **local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  CryptoPP::Algorithm::Algorithm((Algorithm *)&local_60,true);
  local_60 = &PTR__Clonable_00febf80;
  CryptoPP::PKCS5_PBKDF2_HMAC<CryptoPP::SHA256>::DeriveKey
            ((PKCS5_PBKDF2_HMAC<CryptoPP::SHA256> *)&local_60,param_1,param_2,'\0',param_3,param_4,
             param_5,param_6,param_7,0.0);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


