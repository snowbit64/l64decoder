// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007bc448
// Entry Point: 007bc448
// Size: 224 bytes
// Signature: undefined FUN_007bc448(void)


void FUN_007bc448(DensityMapEntity *param_1,char **param_2)

{
  ulong *puVar1;
  size_t __n;
  char *__s;
  undefined *__dest;
  ulong uVar2;
  char *pcVar3;
  
  if (*(int *)(param_2 + 3) == 8) {
    pcVar3 = param_2[2];
  }
  else {
    pcVar3 = (char *)0x0;
  }
  puVar1 = (ulong *)operator_new(0x20);
  __s = *param_2;
  __n = strlen(__s);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 007bc520 to 007bc527 has its CatchHandler @ 007bc528 */
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (undefined *)((long)puVar1 + 1);
    *(char *)puVar1 = (char)((int)__n << 1);
    if (__n == 0) goto LAB_007bc4f0;
  }
  else {
    uVar2 = __n + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 007bc4c8 to 007bc4cf has its CatchHandler @ 007bc528 */
    __dest = (undefined *)operator_new(uVar2);
    puVar1[1] = __n;
    puVar1[2] = (ulong)__dest;
    *puVar1 = uVar2 | 1;
  }
  memcpy(__dest,__s,__n);
LAB_007bc4f0:
  __dest[__n] = 0;
  puVar1[3] = (ulong)pcVar3;
  DensityMapEntity::saveToFileFinishAsync(param_1,ScriptingGenericReport::StaticCallback,puVar1);
  return;
}


