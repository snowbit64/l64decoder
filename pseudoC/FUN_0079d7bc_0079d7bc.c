// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0079d7bc
// Entry Point: 0079d7bc
// Size: 248 bytes
// Signature: undefined FUN_0079d7bc(void)


void FUN_0079d7bc(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  ulong *puVar3;
  size_t __n;
  char *pcVar4;
  char *__s;
  undefined *__dest;
  ulong uVar5;
  ulong uVar6;
  
  if (param_1[0x12] == 8) {
    uVar6 = *(ulong *)(param_1 + 0x10);
  }
  else {
    uVar6 = 0;
  }
  uVar1 = *param_1;
  pcVar4 = *(char **)(param_1 + 4);
  uVar2 = param_1[8];
  puVar3 = (ulong *)operator_new(0x20);
  __s = *(char **)(param_1 + 0xc);
  __n = strlen(__s);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 0079d8ac to 0079d8b3 has its CatchHandler @ 0079d8b4 */
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (undefined *)((long)puVar3 + 1);
    *(char *)puVar3 = (char)((int)__n << 1);
    if (__n == 0) goto LAB_0079d870;
  }
  else {
    uVar5 = __n + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 0079d848 to 0079d84f has its CatchHandler @ 0079d8b4 */
    __dest = (undefined *)operator_new(uVar5);
    puVar3[1] = __n;
    puVar3[2] = (ulong)__dest;
    *puVar3 = uVar5 | 1;
  }
  memcpy(__dest,__s,__n);
LAB_0079d870:
  __dest[__n] = 0;
  puVar3[3] = uVar6;
  GenericSaveGameUtil::writeSaveGameStart
            (uVar1,pcVar4,uVar2,ScriptingSavegameReport::StaticCallback,puVar3);
  return;
}


