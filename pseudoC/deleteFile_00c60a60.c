// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: deleteFile
// Entry Point: 00c60a60
// Size: 268 bytes
// Signature: undefined __cdecl deleteFile(char * param_1)


/* NativeFileUtil::deleteFile(char const*) */

uint NativeFileUtil::deleteFile(char *param_1)

{
  long lVar1;
  uint uVar2;
  size_t __n;
  char *pcVar3;
  ulong uVar4;
  undefined8 local_60;
  size_t local_58;
  char *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  __n = strlen(param_1);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    pcVar3 = (char *)((ulong)&local_60 | 1);
    local_60 = CONCAT71(local_60._1_7_,(char)((int)__n << 1));
    if (__n == 0) goto LAB_00c60ae8;
  }
  else {
    uVar4 = __n + 0x10 & 0xfffffffffffffff0;
    pcVar3 = (char *)operator_new(uVar4);
    local_60 = uVar4 | 1;
    local_58 = __n;
    local_50 = pcVar3;
  }
  memcpy(pcVar3,param_1,__n);
LAB_00c60ae8:
  pcVar3[__n] = '\0';
                    /* try { // try from 00c60aec to 00c60b13 has its CatchHandler @ 00c60b6c */
  PathUtil::removeBackReferencesInPlace((basic_string *)&local_60);
  pcVar3 = (char *)((ulong)&local_60 | 1);
  if ((local_60 & 1) != 0) {
    pcVar3 = local_50;
  }
  uVar2 = PathUtil::isAbsolutePath(pcVar3);
  if ((uVar2 & 1) != 0) {
    ::remove(pcVar3);
  }
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2 & 1;
}


