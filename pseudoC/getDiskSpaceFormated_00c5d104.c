// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getDiskSpaceFormated
// Entry Point: 00c5d104
// Size: 380 bytes
// Signature: undefined __cdecl getDiskSpaceFormated(ulonglong param_1)


/* EnvUtil::getDiskSpaceFormated(unsigned long long) */

void EnvUtil::getDiskSpaceFormated(ulonglong param_1)

{
  long lVar1;
  size_t __n;
  undefined8 in_x1;
  undefined8 in_x2;
  char *pcVar2;
  ulong *in_x8;
  undefined *__dest;
  ulong uVar3;
  double dVar4;
  char acStack_148 [256];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (param_1 < 1000) {
    dVar4 = (double)(unkuint9)param_1;
    pcVar2 = "%4.3f bytes";
  }
  else if (param_1 < 1000000) {
    pcVar2 = "%4.3f kB";
    dVar4 = (double)((param_1 & 0xffffffff) / 1000);
  }
  else if (param_1 < 1000000000) {
    pcVar2 = "%4.3f MB";
    dVar4 = (double)((param_1 & 0xffffffff) / 1000000);
  }
  else {
    if (param_1 < 1000000000000) {
      uVar3 = param_1 / 1000000000;
      pcVar2 = "%4.3f GB";
    }
    else {
      uVar3 = param_1 / 1000000000000;
      pcVar2 = "%4.3f TB";
    }
    dVar4 = (double)(unkuint9)uVar3;
  }
  FUN_00c5d280(dVar4,acStack_148,in_x1,in_x2,pcVar2);
  __n = strlen(acStack_148);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (undefined *)((long)in_x8 + 1);
    *(char *)in_x8 = (char)((int)__n << 1);
    if (__n == 0) goto LAB_00c5d244;
  }
  else {
    uVar3 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (undefined *)operator_new(uVar3);
    in_x8[1] = __n;
    in_x8[2] = (ulong)__dest;
    *in_x8 = uVar3 | 1;
  }
  memcpy(__dest,acStack_148,__n);
LAB_00c5d244:
  __dest[__n] = 0;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


