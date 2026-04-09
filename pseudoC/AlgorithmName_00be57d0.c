// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AlgorithmName
// Entry Point: 00be57d0
// Size: 284 bytes
// Signature: undefined AlgorithmName(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::HMAC<CryptoPP::SHA256>::AlgorithmName() const */

void CryptoPP::HMAC<CryptoPP::SHA256>::AlgorithmName(void)

{
  long lVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  undefined8 *in_x8;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte local_70;
  undefined4 local_6f;
  undefined4 uStack_6b;
  void *local_60;
  byte local_58;
  undefined4 local_57;
  undefined2 local_53;
  void *local_48;
  ulong local_40;
  ulong uStack_38;
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_58 = 10;
  local_57 = 0x43414d48;
  local_53 = 0x28;
  local_70 = 0xe;
  local_6f = 0x2d414853;
  uStack_6b = 0x363532;
                    /* try { // try from 00be5838 to 00be5843 has its CatchHandler @ 00be5924 */
  puVar2 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    append((char *)&local_58,(ulong)&local_70 | 1);
  local_30 = (void *)puVar2[2];
  uStack_38 = puVar2[1];
  local_40 = *puVar2;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
                    /* try { // try from 00be585c to 00be586b has its CatchHandler @ 00be58ec */
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
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
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


