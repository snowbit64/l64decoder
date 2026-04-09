// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: update
// Entry Point: 00b4cfa0
// Size: 452 bytes
// Signature: undefined update(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* GenericSaveGameUtil::update() */

void GenericSaveGameUtil::update(void)

{
  int iVar1;
  size_t __n;
  long lVar2;
  long lVar3;
  int *piVar4;
  ulong uVar5;
  ulong uVar6;
  int *__dest;
  undefined8 uVar7;
  undefined auStack_68 [16];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  piVar4 = s_uploadErrors;
  if (s_uploadErrors == DAT_0211c5e0) {
LAB_00b4d124:
    if (s_cloudErrorPTData._24_8_ != 0) goto LAB_00b4d134;
  }
  else {
    if ((s_state == 0) && (__dest = s_uploadErrors, s_cloudErrorPTData._24_8_ != 0)) {
      do {
        if (*__dest == 3) {
          iVar1 = __dest[1];
          uVar7 = 0xe;
LAB_00b4d06c:
          FUN_00b4d19c(auStack_68,0x10,0x10,&DAT_004cf2ba,iVar1);
          (*(code *)s_cloudErrorPTData._24_8_)(uVar7,auStack_68);
          __dest = s_uploadErrors;
        }
        else if ((*__dest == 2) && ((int)((ulong)(DAT_0211c588 - (long)s_saveGames) >> 3) != 0)) {
          iVar1 = __dest[1];
          if (**s_saveGames == iVar1) {
            uVar5 = 0;
          }
          else {
            uVar6 = (ulong)(DAT_0211c588 - (long)s_saveGames) >> 3 & 0xffffffff;
            uVar5 = 0;
            do {
              if (uVar6 - 1 == uVar5) goto LAB_00b4d094;
              lVar3 = uVar5 + 1;
              uVar5 = uVar5 + 1;
            } while (*s_saveGames[lVar3] != iVar1);
            if (uVar6 <= uVar5) goto LAB_00b4d094;
          }
          if ((*(char **)(s_saveGames[uVar5 & 0xffffffff] + 4) != (char *)0x0) &&
             (**(char **)(s_saveGames[uVar5 & 0xffffffff] + 4) != '\0')) {
            uVar7 = 0xc;
            goto LAB_00b4d06c;
          }
        }
LAB_00b4d094:
        __n = (long)DAT_0211c5e0 - (long)(__dest + 2);
        piVar4 = __dest;
        if (__n != 0) {
          memmove(__dest,__dest + 2,__n);
          piVar4 = s_uploadErrors;
        }
        DAT_0211c5e0 = (int *)((long)__dest + __n);
      } while (((piVar4 != DAT_0211c5e0) && (s_state == 0)) &&
              (__dest = piVar4, s_cloudErrorPTData._24_8_ != 0));
      goto LAB_00b4d124;
    }
    if (s_cloudErrorPTData._24_8_ != 0) goto LAB_00b4d134;
  }
  if (DAT_0211c5e0 != piVar4) {
    DAT_0211c5e0 = piVar4;
  }
LAB_00b4d134:
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


