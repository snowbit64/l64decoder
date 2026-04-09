// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0079db18
// Entry Point: 0079db18
// Size: 208 bytes
// Signature: undefined FUN_0079db18(void)


void FUN_0079db18(char **param_1)

{
  ulong *puVar1;
  size_t __n;
  char *__s;
  undefined *__dest;
  ulong uVar2;
  char *pcVar3;
  
  if (*(int *)(param_1 + 3) == 8) {
    pcVar3 = param_1[2];
  }
  else {
    pcVar3 = (char *)0x0;
  }
  puVar1 = (ulong *)operator_new(0x20);
  __s = *param_1;
  __n = strlen(__s);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 0079dbe0 to 0079dbe7 has its CatchHandler @ 0079dbe8 */
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (undefined *)((long)puVar1 + 1);
    *(char *)puVar1 = (char)((int)__n << 1);
    if (__n == 0) goto LAB_0079dbb8;
  }
  else {
    uVar2 = __n + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 0079db90 to 0079db97 has its CatchHandler @ 0079dbe8 */
    __dest = (undefined *)operator_new(uVar2);
    puVar1[1] = __n;
    puVar1[2] = (ulong)__dest;
    *puVar1 = uVar2 | 1;
  }
  memcpy(__dest,__s,__n);
LAB_0079dbb8:
  __dest[__n] = 0;
  puVar1[3] = (ulong)pcVar3;
  GenericSaveGameUtil::readSaveGameFinish(ScriptingSavegameReport::StaticCallback,puVar1);
  return;
}


