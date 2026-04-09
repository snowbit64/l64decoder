// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: OS_RNG_Err
// Entry Point: 00d1a00c
// Size: 364 bytes
// Signature: undefined __thiscall OS_RNG_Err(OS_RNG_Err * this, basic_string * param_1)


/* WARNING: Type propagation algorithm not settling */
/* CryptoPP::OS_RNG_Err::OS_RNG_Err(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void __thiscall CryptoPP::OS_RNG_Err::OS_RNG_Err(OS_RNG_Err *this,basic_string *param_1)

{
  long lVar1;
  void *pvVar2;
  ulong *puVar3;
  int *piVar4;
  byte local_a0 [16];
  void *local_90;
  byte local_88 [16];
  void *local_78;
  ulong local_70;
  ulong uStack_68;
  void *local_60;
  ulong local_50;
  ulong uStack_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  std::__ndk1::operator+("OS_Rng: ",param_1);
                    /* try { // try from 00d1a040 to 00d1a04f has its CatchHandler @ 00d1a200 */
  puVar3 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    append((char *)local_88);
  local_60 = (void *)puVar3[2];
  uStack_68 = puVar3[1];
  local_70 = *puVar3;
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
  piVar4 = (int *)__errno();
                    /* try { // try from 00d1a070 to 00d1a07f has its CatchHandler @ 00d1a1e0 */
  IntToString<int>(*piVar4,10);
  pvVar2 = (void *)((ulong)local_a0 | 1);
  if ((local_a0[0] & 1) != 0) {
    pvVar2 = local_90;
  }
                    /* try { // try from 00d1a09c to 00d1a0a3 has its CatchHandler @ 00d1a1c0 */
  puVar3 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    append((char *)&local_70,(ulong)pvVar2);
  local_40 = (void *)puVar3[2];
  uStack_48 = puVar3[1];
  local_50 = *puVar3;
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
  *(undefined4 *)(this + 8) = 6;
  *(undefined ***)this = &PTR__Exception_00fe0298;
                    /* try { // try from 00d1a0d8 to 00d1a0e3 has its CatchHandler @ 00d1a178 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(this + 0x10));
  if ((local_50 & 1) != 0) {
    operator_delete(local_40);
  }
  if ((local_a0[0] & 1) != 0) {
    operator_delete(local_90);
  }
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if ((local_88[0] & 1) != 0) {
    operator_delete(local_78);
  }
  *(undefined ***)this = &PTR__Exception_0100ea28;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


