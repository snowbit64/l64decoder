// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0079d8c8
// Entry Point: 0079d8c8
// Size: 232 bytes
// Signature: undefined FUN_0079d8c8(void)


void FUN_0079d8c8(char **param_1)

{
  ulong *puVar1;
  size_t __n;
  char *pcVar2;
  char *pcVar3;
  char *__s;
  undefined *__dest;
  ulong uVar4;
  char *pcVar5;
  
  if (*(int *)(param_1 + 7) == 8) {
    pcVar5 = param_1[6];
  }
  else {
    pcVar5 = (char *)0x0;
  }
  pcVar2 = *param_1;
  pcVar3 = param_1[2];
  puVar1 = (ulong *)operator_new(0x20);
  __s = param_1[4];
  __n = strlen(__s);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 0079d9a8 to 0079d9af has its CatchHandler @ 0079d9b0 */
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (undefined *)((long)puVar1 + 1);
    *(char *)puVar1 = (char)((int)__n << 1);
    if (__n == 0) goto LAB_0079d974;
  }
  else {
    uVar4 = __n + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 0079d94c to 0079d953 has its CatchHandler @ 0079d9b0 */
    __dest = (undefined *)operator_new(uVar4);
    puVar1[1] = __n;
    puVar1[2] = (ulong)__dest;
    *puVar1 = uVar4 | 1;
  }
  memcpy(__dest,__s,__n);
LAB_0079d974:
  __dest[__n] = 0;
  puVar1[3] = (ulong)pcVar5;
  GenericSaveGameUtil::writeSaveGameFinish
            (pcVar2,pcVar3,ScriptingSavegameReport::StaticCallback,puVar1);
  return;
}


