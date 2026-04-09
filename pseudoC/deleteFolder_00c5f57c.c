// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: deleteFolder
// Entry Point: 00c5f57c
// Size: 472 bytes
// Signature: undefined __cdecl deleteFolder(char * param_1, bool param_2)


/* NativeFileUtil::deleteFolder(char const*, bool) */

undefined8 NativeFileUtil::deleteFolder(char *param_1,bool param_2)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  size_t __n;
  ulong uVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  undefined8 uVar8;
  char *pcVar9;
  undefined8 local_70;
  size_t local_68;
  char *local_60;
  char *local_58;
  undefined8 uStack_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  __n = strlen(param_1);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    pcVar9 = (char *)((ulong)&local_70 | 1);
    local_70 = CONCAT71(local_70._1_7_,(char)((int)__n << 1));
    if (__n != 0) goto LAB_00c5f5f4;
  }
  else {
    uVar4 = __n + 0x10 & 0xfffffffffffffff0;
    pcVar9 = (char *)operator_new(uVar4);
    local_70 = uVar4 | 1;
    local_68 = __n;
    local_60 = pcVar9;
LAB_00c5f5f4:
    memcpy(pcVar9,param_1,__n);
  }
  pcVar9[__n] = '\0';
                    /* try { // try from 00c5f608 to 00c5f62f has its CatchHandler @ 00c5f760 */
  PathUtil::removeBackReferencesInPlace((basic_string *)&local_70);
  pcVar9 = (char *)((ulong)&local_70 | 1);
  if ((local_70 & 1) != 0) {
    pcVar9 = local_60;
  }
  uVar4 = PathUtil::isAbsolutePath(pcVar9);
  if ((uVar4 & 1) != 0) {
    uStack_50 = 0;
                    /* try { // try from 00c5f638 to 00c5f647 has its CatchHandler @ 00c5f75c */
    local_58 = pcVar9;
    lVar5 = fts_open(&local_58,0x18,0);
    if (lVar5 == 0) {
      perror("fts_open");
      uVar8 = 0;
      goto LAB_00c5f70c;
    }
    do {
      while( true ) {
        do {
                    /* try { // try from 00c5f668 to 00c5f66f has its CatchHandler @ 00c5f764 */
          lVar6 = fts_read(lVar5);
          if (lVar6 == 0) {
            piVar7 = (int *)__errno();
            if (*piVar7 != 0) {
              perror("fts_read");
              fts_close(lVar5);
              goto LAB_00c5f708;
            }
                    /* try { // try from 00c5f6bc to 00c5f6ef has its CatchHandler @ 00c5f758 */
            fts_close(lVar5);
            uVar8 = 1;
            goto LAB_00c5f70c;
          }
        } while (0xc < *(ushort *)(lVar6 + 0x66));
        uVar1 = 1 << (ulong)(*(ushort *)(lVar6 + 0x66) & 0x1f);
        if ((uVar1 & 0x1940) == 0) break;
        iVar3 = ::remove(*(char **)(lVar6 + 0x28));
        if (iVar3 != 0) {
          perror("remove");
                    /* try { // try from 00c5f6a4 to 00c5f6ab has its CatchHandler @ 00c5f754 */
          fts_close(lVar5);
          goto LAB_00c5f708;
        }
      }
    } while ((uVar1 & 0x490) == 0);
    perror("fts_read");
                    /* try { // try from 00c5f700 to 00c5f707 has its CatchHandler @ 00c5f754 */
    fts_close(lVar5);
  }
LAB_00c5f708:
  uVar8 = 0;
LAB_00c5f70c:
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar8;
}


