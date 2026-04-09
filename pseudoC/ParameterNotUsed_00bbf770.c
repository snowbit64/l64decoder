// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ParameterNotUsed
// Entry Point: 00bbf770
// Size: 336 bytes
// Signature: undefined __thiscall ParameterNotUsed(ParameterNotUsed * this, char * param_1)


/* CryptoPP::AlgorithmParametersBase::ParameterNotUsed::ParameterNotUsed(char const*) */

void __thiscall
CryptoPP::AlgorithmParametersBase::ParameterNotUsed::ParameterNotUsed
          (ParameterNotUsed *this,char *param_1)

{
  long lVar1;
  ulong *puVar2;
  ulong local_90;
  undefined8 uStack_88;
  undefined8 *local_80;
  ulong local_70;
  ulong uStack_68;
  void *local_60;
  ulong local_50;
  ulong uStack_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_80 = (undefined8 *)operator_new(0x30);
  *(undefined *)((long)local_80 + 0x24) = 0;
  *(undefined4 *)(local_80 + 4) = 0x22207265;
  uStack_88 = 0x24;
  local_90 = 0x31;
  local_80[1] = 0x74656d617261506d;
  *local_80 = 0x687469726f676c41;
  local_80[3] = 0x74656d6172617020;
  local_80[2] = 0x3a65736142737265;
                    /* try { // try from 00bbf7d0 to 00bbf7db has its CatchHandler @ 00bbf920 */
  puVar2 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    append((char *)&local_90);
  local_60 = (void *)puVar2[2];
  uStack_68 = puVar2[1];
  local_70 = *puVar2;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
                    /* try { // try from 00bbf7f4 to 00bbf803 has its CatchHandler @ 00bbf900 */
  puVar2 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    append((char *)&local_70);
  local_40 = (void *)puVar2[2];
  uStack_48 = puVar2[1];
  local_50 = *puVar2;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
  *(undefined4 *)(this + 8) = 6;
  *(undefined ***)this = &PTR__Exception_00fe0298;
                    /* try { // try from 00bbf838 to 00bbf843 has its CatchHandler @ 00bbf8c0 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(this + 0x10));
  if ((local_50 & 1) != 0) {
    operator_delete(local_40);
  }
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  *(undefined ***)this = &PTR__Exception_00feb9e8;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


