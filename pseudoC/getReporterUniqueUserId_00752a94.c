// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getReporterUniqueUserId
// Entry Point: 00752a94
// Size: 300 bytes
// Signature: undefined getReporterUniqueUserId(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* EngineManager::getReporterUniqueUserId() */

void EngineManager::getReporterUniqueUserId(void)

{
  long lVar1;
  int iVar2;
  size_t __n;
  ulong *in_x8;
  undefined *__dest;
  ulong uVar3;
  char acStack_148 [256];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (((DAT_010530b8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_010530b8), iVar2 != 0)) {
                    /* try { // try from 00752b7c to 00752b87 has its CatchHandler @ 00752bc0 */
    EngineManager((EngineManager *)&DAT_01052d78);
    __cxa_atexit(~EngineManager,&DAT_01052d78,&PTR_LOOP_00fd8de0);
    __cxa_guard_release(&DAT_010530b8);
  }
  CopyProtection::getNetworkKey();
  FUN_00752bd8(acStack_148);
  __n = strlen(acStack_148);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (undefined *)((long)in_x8 + 1);
    *(char *)in_x8 = (char)((int)__n << 1);
    if (__n == 0) goto LAB_00752b40;
  }
  else {
    uVar3 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (undefined *)operator_new(uVar3);
    in_x8[1] = __n;
    in_x8[2] = (ulong)__dest;
    *in_x8 = uVar3 | 1;
  }
  memcpy(__dest,acStack_148,__n);
LAB_00752b40:
  __dest[__n] = 0;
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


