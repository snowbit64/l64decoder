// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getFileType
// Entry Point: 00c60b88
// Size: 304 bytes
// Signature: undefined __cdecl getFileType(char * param_1, bool param_2)


/* NativeFileUtil::getFileType(char const*, bool) */

int NativeFileUtil::getFileType(char *param_1,bool param_2)

{
  long lVar1;
  int iVar2;
  size_t __n;
  char *pcVar3;
  ulong uVar4;
  undefined auStack_e0 [128];
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
    if (__n == 0) goto LAB_00c60c10;
  }
  else {
    uVar4 = __n + 0x10 & 0xfffffffffffffff0;
    pcVar3 = (char *)operator_new(uVar4);
    local_60 = uVar4 | 1;
    local_58 = __n;
    local_50 = pcVar3;
  }
  memcpy(pcVar3,param_1,__n);
LAB_00c60c10:
  pcVar3[__n] = '\0';
                    /* try { // try from 00c60c14 to 00c60c1f has its CatchHandler @ 00c60cb8 */
  PathUtil::removeBackReferencesInPlace((basic_string *)&local_60);
  pcVar3 = (char *)((ulong)&local_60 | 1);
  if ((local_60 & 1) != 0) {
    pcVar3 = local_50;
  }
  iVar2 = lstat(pcVar3,(stat *)auStack_e0);
  if (iVar2 == -1) {
    iVar2 = 0;
  }
  else {
    iVar2 = (uint)((auStack_e0._16_4_ & 0xf000) == 0x4000) << 1;
    if ((auStack_e0._16_4_ & 0xf000) == 0x8000) {
      iVar2 = 1;
    }
  }
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}


