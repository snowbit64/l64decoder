// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0079d9c4
// Entry Point: 0079d9c4
// Size: 224 bytes
// Signature: undefined FUN_0079d9c4(void)


void FUN_0079d9c4(uint *param_1)

{
  uint uVar1;
  ulong *puVar2;
  size_t __n;
  char *__s;
  undefined *__dest;
  ulong uVar3;
  ulong uVar4;
  
  if (param_1[10] == 8) {
    uVar4 = *(ulong *)(param_1 + 8);
  }
  else {
    uVar4 = 0;
  }
  uVar1 = *param_1;
  puVar2 = (ulong *)operator_new(0x20);
  __s = *(char **)(param_1 + 4);
  __n = strlen(__s);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 0079da9c to 0079daa3 has its CatchHandler @ 0079daa4 */
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (undefined *)((long)puVar2 + 1);
    *(char *)puVar2 = (char)((int)__n << 1);
    if (__n == 0) goto LAB_0079da6c;
  }
  else {
    uVar3 = __n + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 0079da44 to 0079da4b has its CatchHandler @ 0079daa4 */
    __dest = (undefined *)operator_new(uVar3);
    puVar2[1] = __n;
    puVar2[2] = (ulong)__dest;
    *puVar2 = uVar3 | 1;
  }
  memcpy(__dest,__s,__n);
LAB_0079da6c:
  __dest[__n] = 0;
  puVar2[3] = uVar4;
  GenericSaveGameUtil::readSaveGameStart(uVar1,ScriptingSavegameReport::StaticCallback,puVar2);
  return;
}


