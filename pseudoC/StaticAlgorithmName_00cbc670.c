// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: StaticAlgorithmName
// Entry Point: 00cbc670
// Size: 308 bytes
// Signature: undefined StaticAlgorithmName(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::DL_SS<CryptoPP::DL_Keys_ECDSA<CryptoPP::ECP>,
   CryptoPP::DL_Algorithm_ECDSA<CryptoPP::ECP>, CryptoPP::DL_SignatureMessageEncodingMethod_DSA,
   CryptoPP::SHA256, int>::StaticAlgorithmName() */

void CryptoPP::
     DL_SS<CryptoPP::DL_Keys_ECDSA<CryptoPP::ECP>,CryptoPP::DL_Algorithm_ECDSA<CryptoPP::ECP>,CryptoPP::DL_SignatureMessageEncodingMethod_DSA,CryptoPP::SHA256,int>
     ::StaticAlgorithmName(void)

{
  long lVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  undefined8 *in_x8;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte local_78;
  undefined4 local_77;
  undefined4 uStack_73;
  void *local_68;
  ulong local_60;
  ulong uStack_58;
  void *local_50;
  ulong local_40;
  ulong uStack_38;
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_78 = 0xe;
  local_77 = 0x534d452f;
  uStack_73 = 0x283141;
                    /* try { // try from 00cbc6b4 to 00cbc6c7 has its CatchHandler @ 00cbc7fc */
  puVar2 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    insert((ulong)&local_78,(char *)0x0);
  local_50 = (void *)puVar2[2];
  uStack_58 = puVar2[1];
  local_60 = *puVar2;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
                    /* try { // try from 00cbc6e0 to 00cbc6ef has its CatchHandler @ 00cbc7dc */
  puVar2 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    append((char *)&local_60);
  local_30 = (void *)puVar2[2];
  uStack_38 = puVar2[1];
  local_40 = *puVar2;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
                    /* try { // try from 00cbc708 to 00cbc717 has its CatchHandler @ 00cbc7a4 */
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
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if ((local_78 & 1) == 0) {
    if (*(long *)(lVar1 + 0x28) != local_28) {
LAB_00cbc7a0:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  else {
    operator_delete(local_68);
    if (*(long *)(lVar1 + 0x28) != local_28) goto LAB_00cbc7a0;
  }
  return;
}


