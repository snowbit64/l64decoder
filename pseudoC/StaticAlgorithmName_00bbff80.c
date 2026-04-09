// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: StaticAlgorithmName
// Entry Point: 00bbff80
// Size: 200 bytes
// Signature: undefined StaticAlgorithmName(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::CipherModeFinalTemplate_CipherHolder<CryptoPP::BlockCipherFinal<(CryptoPP::CipherDir)1,
   CryptoPP::Rijndael::Dec>, CryptoPP::CBC_Decryption>::StaticAlgorithmName() */

void CryptoPP::
     CipherModeFinalTemplate_CipherHolder<CryptoPP::BlockCipherFinal<(CryptoPP::CipherDir)1,CryptoPP::Rijndael::Dec>,CryptoPP::CBC_Decryption>
     ::StaticAlgorithmName(void)

{
  long lVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  undefined8 *in_x8;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte local_58;
  undefined4 local_57;
  void *local_48;
  ulong local_40;
  ulong uStack_38;
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_58 = 6;
  local_57 = 0x534541;
                    /* try { // try from 00bbffb4 to 00bbffc3 has its CatchHandler @ 00bc0078 */
  puVar2 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    append((char *)&local_58);
  local_30 = (void *)puVar2[2];
  uStack_38 = puVar2[1];
  local_40 = *puVar2;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
                    /* try { // try from 00bbffdc to 00bbffeb has its CatchHandler @ 00bc0048 */
  puVar3 = (undefined8 *)
           std::__ndk1::
           basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                     ((char *)&local_40);
  uVar4 = puVar3[2];
  uVar6 = puVar3[1];
  uVar5 = *puVar3;
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  in_x8[2] = uVar4;
  in_x8[1] = uVar6;
  *in_x8 = uVar5;
  if ((local_40 & 1) != 0) {
    operator_delete(local_30);
  }
  if ((local_58 & 1) != 0) {
    operator_delete(local_48);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


