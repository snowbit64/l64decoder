// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0079b27c
// Entry Point: 0079b27c
// Size: 216 bytes
// Signature: undefined FUN_0079b27c(void)


void FUN_0079b27c(char **param_1)

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
                    /* try { // try from 0079b34c to 0079b353 has its CatchHandler @ 0079b354 */
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (undefined *)((long)puVar1 + 1);
    *(char *)puVar1 = (char)((int)__n << 1);
    if (__n == 0) goto LAB_0079b31c;
  }
  else {
    uVar2 = __n + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 0079b2f4 to 0079b2fb has its CatchHandler @ 0079b354 */
    __dest = (undefined *)operator_new(uVar2);
    puVar1[1] = __n;
    puVar1[2] = (ulong)__dest;
    *puVar1 = uVar2 | 1;
  }
  memcpy(__dest,__s,__n);
LAB_0079b31c:
  __dest[__n] = 0;
  puVar1[3] = (ulong)pcVar3;
  MeshSplitManager::saveSplitShapesToFileFinishAsync
            ((MeshSplitManager *)&MeshSplitManager::s_singletonMeshSplitManager,
             ScriptingGenericReport::StaticCallback,puVar1);
  return;
}


