// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: StaticAlgorithmName
// Entry Point: 00cae408
// Size: 360 bytes
// Signature: undefined StaticAlgorithmName(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::OAEP<CryptoPP::SHA1, CryptoPP::P1363_MGF1>::StaticAlgorithmName() */

void CryptoPP::OAEP<CryptoPP::SHA1,CryptoPP::P1363_MGF1>::StaticAlgorithmName(void)

{
  long lVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  undefined8 *in_x8;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte local_98;
  undefined4 local_97;
  undefined2 local_93;
  void *local_88;
  ulong local_80;
  ulong uStack_78;
  void *local_70;
  ulong local_60;
  ulong uStack_58;
  void *local_50;
  ulong local_40;
  ulong uStack_38;
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_98 = 10;
  local_97 = 0x5045414f;
  local_93 = 0x2d;
                    /* try { // try from 00cae444 to 00cae453 has its CatchHandler @ 00cae5f0 */
  puVar2 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    append((char *)&local_98);
  local_70 = (void *)puVar2[2];
  uStack_78 = puVar2[1];
  local_80 = *puVar2;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
                    /* try { // try from 00cae46c to 00cae47b has its CatchHandler @ 00cae5d0 */
  puVar2 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    append((char *)&local_80);
  local_50 = (void *)puVar2[2];
  uStack_58 = puVar2[1];
  local_60 = *puVar2;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
                    /* try { // try from 00cae494 to 00cae4a3 has its CatchHandler @ 00cae5b0 */
  puVar2 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    append((char *)&local_60);
  local_30 = (void *)puVar2[2];
  uStack_38 = puVar2[1];
  local_40 = *puVar2;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
                    /* try { // try from 00cae4bc to 00cae4cb has its CatchHandler @ 00cae570 */
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
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if ((local_98 & 1) == 0) {
    if (*(long *)(lVar1 + 0x28) != local_28) {
LAB_00cae56c:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  else {
    operator_delete(local_88);
    if (*(long *)(lVar1 + 0x28) != local_28) goto LAB_00cae56c;
  }
  return;
}


