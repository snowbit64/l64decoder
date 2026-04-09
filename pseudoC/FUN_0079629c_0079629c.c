// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0079629c
// Entry Point: 0079629c
// Size: 328 bytes
// Signature: undefined FUN_0079629c(void)


void FUN_0079629c(char **param_1)

{
  long lVar1;
  size_t __n;
  ulong uVar2;
  undefined4 uVar3;
  char *pcVar4;
  char *__dest;
  undefined8 local_60;
  size_t local_58;
  char *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  pcVar4 = *param_1;
  __n = strlen(pcVar4);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (char *)((ulong)&local_60 | 1);
    local_60 = CONCAT71(local_60._1_7_,(char)((int)__n << 1));
    if (__n == 0) goto LAB_0079632c;
  }
  else {
    uVar2 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (char *)operator_new(uVar2);
    local_60 = uVar2 | 1;
    local_58 = __n;
    local_50 = __dest;
  }
  memcpy(__dest,pcVar4,__n);
LAB_0079632c:
  __dest[__n] = '\0';
                    /* try { // try from 00796330 to 0079636f has its CatchHandler @ 007963e4 */
  PathUtil::makeUnifiedPathInPlace((basic_string *)&local_60);
  pcVar4 = (char *)((ulong)&local_60 | 1);
  if ((local_60 & 1) != 0) {
    pcVar4 = local_50;
  }
  uVar2 = FileHashManager::getFileHash
                    ((FileHashManager *)&FileHashManager::s_fileHashManager,pcVar4,param_1[2],
                     &DAT_0107c26d,true);
  if ((uVar2 & 1) == 0) {
    uVar3 = 0;
    param_1[0x20] = (char *)0x0;
  }
  else {
    DAT_0107c28d = 0;
    param_1[0x20] = &DAT_0107c26d;
    uVar3 = 6;
    *(ushort *)((long)param_1 + 0x10c) = *(ushort *)((long)param_1 + 0x10c) & 0xfffe;
  }
  *(undefined4 *)(param_1 + 0x21) = uVar3;
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


