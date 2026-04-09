// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: StaticAlgorithmName
// Entry Point: 00d2107c
// Size: 284 bytes
// Signature: undefined StaticAlgorithmName(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::CipherModeFinalTemplate_CipherHolder<CryptoPP::BlockCipherFinal<(CryptoPP::CipherDir)0,
   CryptoPP::MDC<CryptoPP::SHA1>::Enc>, CryptoPP::ConcretePolicyHolder<CryptoPP::Empty,
   CryptoPP::CFB_EncryptionTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::CFB_CipherAbstractPolicy,
   CryptoPP::CFB_ModePolicy> >, CryptoPP::CFB_CipherAbstractPolicy> >::StaticAlgorithmName() */

void CryptoPP::
     CipherModeFinalTemplate_CipherHolder<CryptoPP::BlockCipherFinal<(CryptoPP::CipherDir)0,CryptoPP::MDC<CryptoPP::SHA1>::Enc>,CryptoPP::ConcretePolicyHolder<CryptoPP::Empty,CryptoPP::CFB_EncryptionTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::CFB_CipherAbstractPolicy,CryptoPP::CFB_ModePolicy>>,CryptoPP::CFB_CipherAbstractPolicy>>
     ::StaticAlgorithmName(void)

{
  long lVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  undefined8 *in_x8;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong local_80;
  ulong uStack_78;
  void *local_70;
  ulong local_60;
  ulong uStack_58;
  void *local_50;
  byte local_40;
  undefined4 local_3f;
  undefined local_3b;
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40 = 8;
  local_3f = 0x2f43444d;
  local_3b = 0;
                    /* try { // try from 00d210b4 to 00d210c3 has its CatchHandler @ 00d211c4 */
  puVar2 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    append((char *)&local_40);
  local_70 = (void *)puVar2[2];
  uStack_78 = puVar2[1];
  local_80 = *puVar2;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
  if ((local_40 & 1) != 0) {
    operator_delete(local_30);
  }
                    /* try { // try from 00d210ec to 00d210fb has its CatchHandler @ 00d211b0 */
  puVar2 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    append((char *)&local_80);
  local_50 = (void *)puVar2[2];
  uStack_58 = puVar2[1];
  local_60 = *puVar2;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
                    /* try { // try from 00d21114 to 00d21123 has its CatchHandler @ 00d21198 */
  puVar3 = (undefined8 *)
           std::__ndk1::
           basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                     ((char *)&local_60);
  uVar4 = puVar3[2];
  uVar6 = puVar3[1];
  uVar5 = *puVar3;
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  in_x8[2] = uVar4;
  in_x8[1] = uVar6;
  *in_x8 = uVar5;
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if ((local_80 & 1) == 0) {
    if (*(long *)(lVar1 + 0x28) != local_28) {
LAB_00d21194:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  else {
    operator_delete(local_70);
    if (*(long *)(lVar1 + 0x28) != local_28) goto LAB_00d21194;
  }
  return;
}


