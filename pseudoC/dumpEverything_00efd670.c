// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: dumpEverything
// Entry Point: 00efd670
// Size: 376 bytes
// Signature: undefined dumpEverything(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Luau::BytecodeBuilder::dumpEverything() const */

void Luau::BytecodeBuilder::dumpEverything(void)

{
  void *pvVar1;
  ulong uVar2;
  long lVar3;
  long *in_x0;
  byte bVar4;
  undefined8 *in_x8;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined4 local_80;
  void *local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  lVar5 = *in_x0;
  lVar7 = in_x0[1];
  *in_x8 = 0;
  in_x8[1] = 0;
  in_x8[2] = 0;
  if (lVar7 != lVar5) {
    lVar7 = 0;
    uVar6 = 0;
    do {
      bVar4 = *(byte *)(lVar5 + lVar7 + 0x40);
      uVar2 = (ulong)(bVar4 >> 1);
      if ((bVar4 & 1) != 0) {
        uVar2 = *(ulong *)(lVar5 + lVar7 + 0x48);
      }
      if (uVar2 == 0) {
        bVar4 = 0;
        local_80._1_2_ = 0x3f3f;
        local_80._3_1_ = 0;
        local_80._0_1_ = 4;
      }
      else {
                    /* try { // try from 00efd72c to 00efd733 has its CatchHandler @ 00efd7e8 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string(&local_80);
        bVar4 = (byte)local_80;
      }
      pvVar1 = (void *)((ulong)&local_80 | 1);
      if ((bVar4 & 1) != 0) {
        pvVar1 = local_70;
      }
                    /* try { // try from 00efd758 to 00efd79f has its CatchHandler @ 00efd7f8 */
      formatAppend((basic_string *)in_x8,"Function %d (%s):\n",uVar6 & 0xffffffff,pvVar1);
      lVar5 = *in_x0 + lVar7;
      uVar2 = lVar5 + 0x29;
      if ((*(byte *)(lVar5 + 0x28) & 1) != 0) {
        uVar2 = *(ulong *)(lVar5 + 0x38);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((char *)in_x8,uVar2);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((char *)in_x8);
      if (((byte)local_80 & 1) != 0) {
        operator_delete(local_70);
      }
      lVar5 = *in_x0;
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 0x58;
    } while (uVar6 < (ulong)((in_x0[1] - lVar5 >> 3) * 0x2e8ba2e8ba2e8ba3));
  }
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


