// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AlgorithmName
// Entry Point: 00c81ca0
// Size: 228 bytes
// Signature: undefined AlgorithmName(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::CipherModeFinalTemplate_ExternalCipher<CryptoPP::CBC_Encryption>::AlgorithmName() const
    */

void CryptoPP::CipherModeFinalTemplate_ExternalCipher<CryptoPP::CBC_Encryption>::AlgorithmName(void)

{
  long lVar1;
  long in_x0;
  ulong *puVar2;
  undefined8 *puVar3;
  undefined8 *in_x8;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  byte local_68 [16];
  void *local_58;
  ulong local_50;
  ulong uStack_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar5 = *(long *)(in_x0 + 0x10);
  if (lVar5 == 0) {
    local_50 = local_50 & 0xffffffffffff0000;
  }
  else {
    (**(code **)(*(long *)(lVar5 + 8) + 0x18))(local_68);
                    /* try { // try from 00c81ce0 to 00c81cef has its CatchHandler @ 00c81d84 */
    puVar2 = (ulong *)std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::append((char *)local_68);
    local_40 = (void *)puVar2[2];
    uStack_48 = puVar2[1];
    local_50 = *puVar2;
    puVar2[1] = 0;
    puVar2[2] = 0;
    *puVar2 = 0;
  }
                    /* try { // try from 00c81d10 to 00c81d1f has its CatchHandler @ 00c81d8c */
  puVar3 = (undefined8 *)
           std::__ndk1::
           basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                     ((char *)&local_50);
  uVar4 = puVar3[2];
  uVar7 = puVar3[1];
  uVar6 = *puVar3;
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  in_x8[2] = uVar4;
  in_x8[1] = uVar7;
  *in_x8 = uVar6;
  if ((local_50 & 1) != 0) {
    operator_delete(local_40);
  }
  if ((lVar5 != 0) && ((local_68[0] & 1) != 0)) {
    operator_delete(local_58);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


