// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: location
// Entry Point: 00c15974
// Size: 212 bytes
// Signature: undefined __cdecl location(GsTSourceLoc param_1)


/* GsTInfoSinkBase::location(GsTSourceLoc) */

void GsTInfoSinkBase::location(GsTSourceLoc param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  bool bVar4;
  ulong *puVar5;
  long in_x1;
  int in_w2;
  undefined auStack_78 [64];
  long local_38;
  
  puVar5 = (ulong *)(ulong)param_1;
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if (in_x1 != 0) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)puVar5);
  }
  if (0 < in_w2) {
    FUN_00c15b8c(auStack_78);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)puVar5);
  bVar4 = (*(byte *)puVar5 & 1) != 0;
  uVar1 = (ulong)(*(byte *)puVar5 >> 1);
  if (bVar4) {
    uVar1 = puVar5[1];
  }
  uVar2 = 0x16;
  if (bVar4) {
    uVar2 = (*puVar5 & 0xfffffffffffffffe) - 1;
  }
  if (uVar2 < uVar1 + 4) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    reserve((ulong)puVar5);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)puVar5);
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


