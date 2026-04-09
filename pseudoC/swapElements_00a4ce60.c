// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: swapElements
// Entry Point: 00a4ce60
// Size: 340 bytes
// Signature: undefined __thiscall swapElements(AudioSourceSample * this, uint param_1, uint param_2)


/* AudioSourceSample::swapElements(unsigned int, unsigned int) */

void __thiscall AudioSourceSample::swapElements(AudioSourceSample *this,uint param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  long lVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  byte local_98;
  void *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  puVar1 = (undefined4 *)(this + (ulong)param_1 * 0x38 + 0xb4);
  if (1 < *(uint *)(this + 0xb0)) {
    puVar1 = (undefined4 *)(*(long *)(this + 0xf0) + (ulong)param_1 * 0x38);
  }
  puVar2 = (undefined4 *)(this + (ulong)param_2 * 0x38 + 0xb4);
  if (1 < *(uint *)(this + 0xb0)) {
    puVar2 = (undefined4 *)(*(long *)(this + 0xf0) + (ulong)param_2 * 0x38);
  }
  uVar5 = *puVar1;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)&local_98);
  local_70 = *(undefined8 *)(puVar1 + 0xc);
  uStack_78 = *(undefined8 *)(puVar1 + 10);
  local_80 = *(undefined8 *)(puVar1 + 8);
  *puVar1 = *puVar2;
                    /* try { // try from 00a4cf04 to 00a4cf37 has its CatchHandler @ 00a4cfb4 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (puVar1 + 2),puVar2 + 2);
  uVar7 = *(undefined8 *)(puVar2 + 10);
  uVar6 = *(undefined8 *)(puVar2 + 8);
  *(undefined8 *)(puVar1 + 0xc) = *(undefined8 *)(puVar2 + 0xc);
  *(undefined8 *)(puVar1 + 10) = uVar7;
  *(undefined8 *)(puVar1 + 8) = uVar6;
  *puVar2 = uVar5;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (puVar2 + 2),(basic_string *)&local_98);
  *(undefined8 *)(puVar2 + 0xc) = local_70;
  *(undefined8 *)(puVar2 + 10) = uStack_78;
  *(undefined8 *)(puVar2 + 8) = local_80;
  if ((local_98 & 1) != 0) {
    operator_delete(local_88);
  }
  uVar4 = param_2;
  if ((*(uint *)(this + 0xac) == param_1) || (uVar4 = param_1, *(uint *)(this + 0xac) == param_2)) {
    *(uint *)(this + 0xac) = uVar4;
  }
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


