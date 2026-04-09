// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GenerateProof
// Entry Point: 00be7364
// Size: 376 bytes
// Signature: undefined __thiscall GenerateProof(AuthenticatedEncryption * this, uchar * param_1, uint param_2)


/* AuthenticatedEncryption::GenerateProof(unsigned char*, unsigned int) */

void __thiscall
AuthenticatedEncryption::GenerateProof(AuthenticatedEncryption *this,uchar *param_1,uint param_2)

{
  char *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined **local_188;
  undefined **local_180;
  SecBlock<unsigned_char,CryptoPP::AllocatorWithCleanup<unsigned_char,false>> aSStack_178 [32];
  AuthenticatedEncryption local_158;
  undefined **local_150;
  undefined8 uStack_148;
  SecBlock<unsigned_int,CryptoPP::FixedSizeAllocatorWithCleanup<unsigned_int,16ul,CryptoPP::NullAllocator<unsigned_int>,false>>
  aSStack_140 [96];
  SecBlock<unsigned_int,CryptoPP::FixedSizeAllocatorWithCleanup<unsigned_int,16ul,CryptoPP::NullAllocator<unsigned_int>,true>>
  aSStack_e0 [104];
  undefined auStack_78 [32];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if (param_2 < 0x21) {
    local_188 = &PTR__HMAC_Base_0100c658;
    local_180 = &PTR__HMAC_Base_0100c718;
    CryptoPP::SecBlock<unsigned_char,CryptoPP::AllocatorWithCleanup<unsigned_char,false>>::SecBlock
              (aSStack_178,(SecBlock *)(this + 0x18));
    local_158 = this[0x38];
    local_188 = &PTR__HMAC_00fec030;
    uStack_148 = *(undefined8 *)(this + 0x48);
    local_180 = &PTR__HMAC_00fec100;
    local_150 = &PTR__IteratedHash_00fe9de8;
                    /* try { // try from 00be73fc to 00be7403 has its CatchHandler @ 00be7520 */
    CryptoPP::
    SecBlock<unsigned_int,CryptoPP::FixedSizeAllocatorWithCleanup<unsigned_int,16ul,CryptoPP::NullAllocator<unsigned_int>,false>>
    ::SecBlock(aSStack_140,(SecBlock *)(this + 0x50));
    local_150 = &PTR__IteratedHashWithStaticTransform_00fe9ca8;
                    /* try { // try from 00be741c to 00be741f has its CatchHandler @ 00be74dc */
    CryptoPP::
    SecBlock<unsigned_int,CryptoPP::FixedSizeAllocatorWithCleanup<unsigned_int,16ul,CryptoPP::NullAllocator<unsigned_int>,true>>
    ::SecBlock(aSStack_e0,(SecBlock *)(this + 0xb0));
    local_150 = &PTR__IteratedHashWithStaticTransform_01010888;
    pcVar1 = "shfolder.dll";
    if (*this != (AuthenticatedEncryption)0x0) {
      pcVar1 = "ddraw.dll";
    }
                    /* try { // try from 00be744c to 00be748b has its CatchHandler @ 00be7534 */
    uVar3 = __strlen_chk(pcVar1,0xd);
    (*(code *)local_180[5])(&local_180,pcVar1,uVar3);
    (*(code *)local_180[7])(&local_180,auStack_78);
    memcpy(param_1,auStack_78,(ulong)param_2);
    CryptoPP::HMAC<CryptoPP::SHA256>::~HMAC((HMAC<CryptoPP::SHA256> *)&local_188);
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_2 < 0x21);
}


