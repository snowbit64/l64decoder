// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createFolder
// Entry Point: 00c5f780
// Size: 288 bytes
// Signature: undefined __cdecl createFolder(char * param_1)


/* NativeFileUtil::createFolder(char const*) */

bool NativeFileUtil::createFolder(char *param_1)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  size_t __n;
  int *piVar4;
  char *pcVar5;
  ulong uVar6;
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
    pcVar5 = (char *)((ulong)&local_60 | 1);
    local_60 = CONCAT71(local_60._1_7_,(char)((int)__n << 1));
    if (__n == 0) goto LAB_00c5f808;
  }
  else {
    uVar6 = __n + 0x10 & 0xfffffffffffffff0;
    pcVar5 = (char *)operator_new(uVar6);
    local_60 = uVar6 | 1;
    local_58 = __n;
    local_50 = pcVar5;
  }
  memcpy(pcVar5,param_1,__n);
LAB_00c5f808:
  pcVar5[__n] = '\0';
                    /* try { // try from 00c5f80c to 00c5f817 has its CatchHandler @ 00c5f8a0 */
  PathUtil::removeBackReferencesInPlace((basic_string *)&local_60);
  pcVar5 = (char *)((ulong)&local_60 | 1);
  if ((local_60 & 1) != 0) {
    pcVar5 = local_50;
  }
  iVar3 = mkdir(pcVar5,0x1fd);
  if (iVar3 == 0) {
    bVar2 = true;
  }
  else {
    piVar4 = (int *)__errno();
    bVar2 = *piVar4 == 0x11;
  }
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


