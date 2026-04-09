// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: moveFile
// Entry Point: 00c6082c
// Size: 484 bytes
// Signature: undefined __cdecl moveFile(char * param_1, char * param_2, bool param_3)


/* NativeFileUtil::moveFile(char const*, char const*, bool) */

void NativeFileUtil::moveFile(char *param_1,char *param_2,bool param_3)

{
  long lVar1;
  int iVar2;
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
    if (sVar3 != 0) goto LAB_00c608b0;
  }
  else {
    uVar6 = sVar3 + 0x10 & 0xfffffffffffffff0;
    pcVar4 = (char *)operator_new(uVar6);
    local_70 = uVar6 | 1;
    local_68 = sVar3;
    local_60 = pcVar4;
LAB_00c608b0:
    memcpy(pcVar4,param_1,sVar3);
  }
  pcVar4[sVar3] = '\0';
                    /* try { // try from 00c608c4 to 00c608cf has its CatchHandler @ 00c60a10 */
  PathUtil::removeBackReferencesInPlace((basic_string *)&local_70);
  pcVar4 = (char *)((ulong)&local_70 | 1);
  if ((local_70 & 1) != 0) {
    pcVar4 = local_60;
  }
  sVar3 = strlen(param_2);
  if (0xffffffffffffffef < sVar3) {
                    /* try { // try from 00c60a04 to 00c60a0b has its CatchHandler @ 00c60a44 */
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar3 < 0x17) {
    pcVar5 = (char *)((ulong)&local_88 | 1);
    local_88 = CONCAT71(local_88._1_7_,(char)((int)sVar3 << 1));
    if (sVar3 == 0) goto LAB_00c60948;
  }
  else {
    uVar6 = sVar3 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 00c60920 to 00c60927 has its CatchHandler @ 00c60a44 */
    pcVar5 = (char *)operator_new(uVar6);
    local_88 = uVar6 | 1;
    local_80 = sVar3;
    local_78 = pcVar5;
  }
  memcpy(pcVar5,param_2,sVar3);
LAB_00c60948:
  pcVar5[sVar3] = '\0';
                    /* try { // try from 00c6094c to 00c60977 has its CatchHandler @ 00c60a14 */
  PathUtil::removeBackReferencesInPlace((basic_string *)&local_88);
  pcVar5 = (char *)((ulong)&local_88 | 1);
  if ((local_88 & 1) != 0) {
    pcVar5 = local_78;
  }
  if (param_3) {
    deleteFile(pcVar5);
  }
  iVar2 = rename(pcVar4,pcVar5);
  if (iVar2 == 0) {
    ::remove(pcVar4);
  }
  if ((local_88 & 1) != 0) {
    operator_delete(local_78);
  }
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2 == 0);
}


