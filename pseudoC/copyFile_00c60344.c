// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: copyFile
// Entry Point: 00c60344
// Size: 644 bytes
// Signature: undefined __cdecl copyFile(char * param_1, char * param_2, bool param_3)


/* NativeFileUtil::copyFile(char const*, char const*, bool) */

bool NativeFileUtil::copyFile(char *param_1,char *param_2,bool param_3)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  int __fd;
  size_t sVar4;
  ulong uVar5;
  int *piVar6;
  ssize_t sVar7;
  long lVar8;
  char *pcVar9;
  char *pcVar10;
  undefined auStack_2108 [128];
  undefined8 local_2088;
  size_t local_2080;
  char *local_2078;
  undefined8 local_2070;
  size_t local_2068;
  char *local_2060;
  stat asStack_2058 [56];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  sVar4 = strlen(param_1);
  if (0xffffffffffffffef < sVar4) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar4 < 0x17) {
    pcVar9 = (char *)((ulong)&local_2070 | 1);
    local_2070 = CONCAT71(local_2070._1_7_,(char)((int)sVar4 << 1));
    if (sVar4 != 0) goto LAB_00c603cc;
  }
  else {
    uVar5 = sVar4 + 0x10 & 0xfffffffffffffff0;
    pcVar9 = (char *)operator_new(uVar5);
    local_2070 = uVar5 | 1;
    local_2068 = sVar4;
    local_2060 = pcVar9;
LAB_00c603cc:
    memcpy(pcVar9,param_1,sVar4);
  }
  pcVar9[sVar4] = '\0';
                    /* try { // try from 00c603e0 to 00c603eb has its CatchHandler @ 00c605d4 */
  PathUtil::removeBackReferencesInPlace((basic_string *)&local_2070);
  pcVar9 = (char *)((ulong)&local_2070 | 1);
  if ((local_2070 & 1) != 0) {
    pcVar9 = local_2060;
  }
  sVar4 = strlen(param_2);
  if (0xffffffffffffffef < sVar4) {
                    /* try { // try from 00c605bc to 00c605c3 has its CatchHandler @ 00c605d8 */
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar4 < 0x17) {
    pcVar10 = (char *)((ulong)&local_2088 | 1);
    local_2088 = CONCAT71(local_2088._1_7_,(char)((int)sVar4 << 1));
    if (sVar4 != 0) goto LAB_00c60454;
  }
  else {
    uVar5 = sVar4 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 00c6043c to 00c60443 has its CatchHandler @ 00c605d8 */
    pcVar10 = (char *)operator_new(uVar5);
    local_2088 = uVar5 | 1;
    local_2080 = sVar4;
    local_2078 = pcVar10;
LAB_00c60454:
    memcpy(pcVar10,param_2,sVar4);
  }
  pcVar10[sVar4] = '\0';
                    /* try { // try from 00c60468 to 00c6049b has its CatchHandler @ 00c605f8 */
  PathUtil::removeBackReferencesInPlace((basic_string *)&local_2088);
  pcVar10 = (char *)((ulong)&local_2088 | 1);
  if ((local_2088 & 1) != 0) {
    pcVar10 = local_2078;
  }
  uVar5 = PathUtil::isAbsolutePath(pcVar9);
  if (((uVar5 & 1) != 0) && (uVar5 = PathUtil::isAbsolutePath(pcVar10), (uVar5 & 1) != 0)) {
    if (!param_3) {
      iVar3 = stat(pcVar10,asStack_2058);
      if (iVar3 == 0) {
        bVar2 = true;
        goto LAB_00c60560;
      }
      piVar6 = (int *)__errno();
      if (*piVar6 != 2) goto LAB_00c6055c;
    }
                    /* try { // try from 00c604c4 to 00c604cf has its CatchHandler @ 00c605d0 */
    iVar3 = __open_2(pcVar9,0);
    if (-1 < iVar3) {
      fstat(iVar3,(stat *)auStack_2108);
                    /* try { // try from 00c604e8 to 00c604f3 has its CatchHandler @ 00c605cc */
      __fd = open(pcVar10,0x241,(ulong)(uint)auStack_2108._16_4_);
      if (-1 < __fd) {
        do {
                    /* try { // try from 00c604fc to 00c6052f has its CatchHandler @ 00c605f4 */
          sVar7 = ::read(iVar3,asStack_2058,0x2000);
          bVar2 = sVar7 == 0;
          if (sVar7 == 0) break;
          lVar8 = __write_chk(__fd,asStack_2058,sVar7,0x2000);
        } while (lVar8 == sVar7);
                    /* try { // try from 00c60538 to 00c60547 has its CatchHandler @ 00c605c8 */
        close(iVar3);
        close(__fd);
        goto LAB_00c60560;
      }
                    /* try { // try from 00c60554 to 00c6055b has its CatchHandler @ 00c605cc */
      close(iVar3);
    }
  }
LAB_00c6055c:
  bVar2 = false;
LAB_00c60560:
  if ((local_2088 & 1) != 0) {
    operator_delete(local_2078);
  }
  if ((local_2070 & 1) != 0) {
    operator_delete(local_2060);
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar2;
}


