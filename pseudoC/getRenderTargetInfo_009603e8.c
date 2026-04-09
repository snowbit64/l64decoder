// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getRenderTargetInfo
// Entry Point: 009603e8
// Size: 208 bytes
// Signature: undefined __cdecl getRenderTargetInfo(uint param_1)


/* MultiresTextureGpuUpdater::getRenderTargetInfo(unsigned int) */

void MultiresTextureGpuUpdater::getRenderTargetInfo(uint param_1)

{
  long lVar1;
  size_t __n;
  ulong *in_x8;
  undefined *__dest;
  ulong uVar2;
  char acStack_148 [256];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_009604b8(acStack_148);
  __n = strlen(acStack_148);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (undefined *)((long)in_x8 + 1);
    *(char *)in_x8 = (char)((int)__n << 1);
    if (__n == 0) goto LAB_00960480;
  }
  else {
    uVar2 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (undefined *)operator_new(uVar2);
    in_x8[1] = __n;
    in_x8[2] = (ulong)__dest;
    *in_x8 = uVar2 | 1;
  }
  memcpy(__dest,acStack_148,__n);
LAB_00960480:
  __dest[__n] = 0;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


