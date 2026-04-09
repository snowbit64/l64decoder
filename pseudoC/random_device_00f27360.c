// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: random_device
// Entry Point: 00f27360
// Size: 180 bytes
// Signature: undefined __thiscall random_device(random_device * this, basic_string * param_1)


/* std::__ndk1::random_device::random_device(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall std::__ndk1::random_device::random_device(random_device *this,basic_string *param_1)

{
  char *pcVar1;
  long lVar2;
  int iVar3;
  int *piVar4;
  long lVar5;
  byte local_50 [16];
  char *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  lVar5 = *(long *)(param_1 + 4);
  if ((*(byte *)param_1 & 1) == 0) {
    lVar5 = (long)param_1 + 1;
  }
  iVar3 = __open_2(lVar5,0);
  *(int *)this = iVar3;
  if (iVar3 < 0) {
    piVar4 = (int *)__errno();
    iVar3 = *piVar4;
    std::__ndk1::operator+("random_device failed to open ",param_1);
    pcVar1 = (char *)((ulong)local_50 | 1);
    if ((local_50[0] & 1) != 0) {
      pcVar1 = local_40;
    }
                    /* try { // try from 00f27408 to 00f2740f has its CatchHandler @ 00f27414 */
    std::__ndk1::__throw_system_error(iVar3,pcVar1);
  }
  else if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


