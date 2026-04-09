// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: linkOrCopyFile
// Entry Point: 00c60628
// Size: 436 bytes
// Signature: undefined __cdecl linkOrCopyFile(char * param_1, char * param_2, bool param_3)


/* NativeFileUtil::linkOrCopyFile(char const*, char const*, bool) */

uint NativeFileUtil::linkOrCopyFile(char *param_1,char *param_2,bool param_3)

{
  long lVar1;
  uint uVar2;
  size_t sVar3;
  char *pcVar4;
  char *pcVar5;
  ulong uVar6;
  undefined8 local_88;
  size_t local_80;
  char *local_78;
  undefined8 local_70;
  size_t local_68;
  char *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  sVar3 = strlen(param_1);
  if (0xffffffffffffffef < sVar3) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar3 < 0x17) {
    pcVar4 = (char *)((ulong)&local_70 | 1);
    local_70 = CONCAT71(local_70._1_7_,(char)((int)sVar3 << 1));
    if (sVar3 != 0) goto LAB_00c606ac;
  }
  else {
    uVar6 = sVar3 + 0x10 & 0xfffffffffffffff0;
    pcVar4 = (char *)operator_new(uVar6);
    local_70 = uVar6 | 1;
    local_68 = sVar3;
    local_60 = pcVar4;
LAB_00c606ac:
    memcpy(pcVar4,param_1,sVar3);
  }
  pcVar4[sVar3] = '\0';
                    /* try { // try from 00c606c0 to 00c606cb has its CatchHandler @ 00c607dc */
  PathUtil::removeBackReferencesInPlace((basic_string *)&local_70);
  pcVar4 = (char *)((ulong)&local_70 | 1);
  if ((local_70 & 1) != 0) {
    pcVar4 = local_60;
  }
  sVar3 = strlen(param_2);
  if (0xffffffffffffffef < sVar3) {
                    /* try { // try from 00c607d0 to 00c607d7 has its CatchHandler @ 00c607e0 */
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar3 < 0x17) {
    pcVar5 = (char *)((ulong)&local_88 | 1);
    local_88 = CONCAT71(local_88._1_7_,(char)((int)sVar3 << 1));
    if (sVar3 == 0) goto LAB_00c60744;
  }
  else {
    uVar6 = sVar3 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 00c6071c to 00c60723 has its CatchHandler @ 00c607e0 */
    pcVar5 = (char *)operator_new(uVar6);
    local_88 = uVar6 | 1;
    local_80 = sVar3;
    local_78 = pcVar5;
  }
  memcpy(pcVar5,param_2,sVar3);
LAB_00c60744:
  pcVar5[sVar3] = '\0';
                    /* try { // try from 00c60748 to 00c60773 has its CatchHandler @ 00c607fc */
  PathUtil::removeBackReferencesInPlace((basic_string *)&local_88);
  pcVar5 = (char *)((ulong)&local_88 | 1);
  if ((local_88 & 1) != 0) {
    pcVar5 = local_78;
  }
  uVar2 = copyFile(pcVar4,pcVar5,param_3);
  if ((local_88 & 1) != 0) {
    operator_delete(local_78);
  }
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2 & 1;
}


