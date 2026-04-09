// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0079dcf4
// Entry Point: 0079dcf4
// Size: 232 bytes
// Signature: undefined FUN_0079dcf4(void)


void FUN_0079dcf4(uint *param_1)

{
  uint uVar1;
  RESOLVE_POLICY RVar2;
  ulong *puVar3;
  size_t __n;
  char *__s;
  undefined *__dest;
  ulong uVar4;
  ulong uVar5;
  
  if (param_1[0xe] == 8) {
    uVar5 = *(ulong *)(param_1 + 0xc);
  }
  else {
    uVar5 = 0;
  }
  uVar1 = *param_1;
  RVar2 = param_1[4];
  puVar3 = (ulong *)operator_new(0x20);
  __s = *(char **)(param_1 + 8);
  __n = strlen(__s);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 0079ddd4 to 0079dddb has its CatchHandler @ 0079dddc */
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (undefined *)((long)puVar3 + 1);
    *(char *)puVar3 = (char)((int)__n << 1);
    if (__n == 0) goto LAB_0079dda0;
  }
  else {
    uVar4 = __n + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 0079dd78 to 0079dd7f has its CatchHandler @ 0079dddc */
    __dest = (undefined *)operator_new(uVar4);
    puVar3[1] = __n;
    puVar3[2] = (ulong)__dest;
    *puVar3 = uVar4 | 1;
  }
  memcpy(__dest,__s,__n);
LAB_0079dda0:
  __dest[__n] = 0;
  puVar3[3] = uVar5;
  GenericSaveGameUtil::resolveConflict(uVar1,RVar2,ScriptingSavegameReport::StaticCallback,puVar3);
  return;
}


