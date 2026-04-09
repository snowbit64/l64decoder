// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b4028
// Entry Point: 007b4028
// Size: 224 bytes
// Signature: undefined FUN_007b4028(void)


void FUN_007b4028(long param_1,char **param_2)

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
                    /* try { // try from 007b4100 to 007b4107 has its CatchHandler @ 007b4108 */
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (undefined *)((long)puVar1 + 1);
    *(char *)puVar1 = (char)((int)__n << 1);
    if (__n == 0) goto LAB_007b40d0;
  }
  else {
    uVar2 = __n + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 007b40a8 to 007b40af has its CatchHandler @ 007b4108 */
    __dest = (undefined *)operator_new(uVar2);
    puVar1[1] = __n;
    puVar1[2] = (ulong)__dest;
    *puVar1 = uVar2 | 1;
  }
  memcpy(__dest,__s,__n);
LAB_007b40d0:
  __dest[__n] = 0;
  puVar1[3] = (ulong)pcVar3;
  BaseTerrain::saveLodTextureTypeMapSysFinishAsync
            ((BaseTerrain *)(param_1 + 0x170),ScriptingGenericReport::StaticCallback,puVar1);
  return;
}


