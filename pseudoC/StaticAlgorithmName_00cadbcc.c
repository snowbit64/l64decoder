// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: StaticAlgorithmName
// Entry Point: 00cadbcc
// Size: 280 bytes
// Signature: undefined StaticAlgorithmName(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::AutoSeededX917RNG<CryptoPP::Rijndael>::StaticAlgorithmName() */

void CryptoPP::AutoSeededX917RNG<CryptoPP::Rijndael>::StaticAlgorithmName(void)

{
  long lVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  undefined8 *in_x8;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ushort local_70;
  undefined local_6e;
  void *local_60;
  byte local_58;
  undefined8 local_57;
  undefined7 uStack_4f;
  undefined uStack_48;
  undefined2 uStack_47;
  undefined uStack_45;
  undefined4 uStack_44;
  ulong local_40;
  ulong uStack_38;
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_58 = 0x24;
  uStack_47 = 0x2847;
  uStack_4f = 0x52373139586465;
  uStack_48 = 0x4e;
  local_57._0_1_ = 'A';
  local_57._1_1_ = 'u';
  local_57._2_1_ = 't';
  local_57._3_1_ = 'o';
  local_57._4_1_ = 'S';
  local_57._5_1_ = 'e';
  local_57._6_1_ = 'e';
  local_57._7_1_ = 'd';
  uStack_45 = 0;
                    /* try { // try from 00cadc10 to 00cadc1f has its CatchHandler @ 00cadd2c */
  puVar2 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    append((char *)&local_58);
  local_30 = (void *)puVar2[2];
  uStack_38 = puVar2[1];
  local_40 = *puVar2;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
  local_70 = 0x2902;
  local_6e = 0;
                    /* try { // try from 00cadc4c to 00cadc57 has its CatchHandler @ 00cadce4 */
  puVar3 = (undefined8 *)
           std::__ndk1::
           basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                     ((char *)&local_40,(ulong)&local_70 | 1);
  uVar4 = puVar3[2];
  uVar6 = puVar3[1];
  uVar5 = *puVar3;
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  in_x8[2] = uVar4;
  in_x8[1] = uVar6;
  *in_x8 = uVar5;
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if ((local_40 & 1) != 0) {
    operator_delete(local_30);
  }
  if ((local_58 & 1) == 0) {
    if (*(long *)(lVar1 + 0x28) != local_28) {
LAB_00cadce0:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  else {
    operator_delete((void *)CONCAT44(uStack_44,CONCAT13(uStack_45,CONCAT21(uStack_47,uStack_48))));
    if (*(long *)(lVar1 + 0x28) != local_28) goto LAB_00cadce0;
  }
  return;
}


