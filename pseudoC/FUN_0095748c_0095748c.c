// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0095748c
// Entry Point: 0095748c
// Size: 416 bytes
// Signature: undefined FUN_0095748c(void)


undefined8 FUN_0095748c(long **param_1,long **param_2,long **param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  long *plVar4;
  long **pplVar5;
  char *pcVar6;
  long **pplVar7;
  long **pplVar8;
  long *plVar9;
  long *__s1;
  long *plVar10;
  
  if (param_1 != param_2) {
    do {
      bVar1 = *(byte *)(param_1 + 4);
      bVar2 = *(byte *)(param_3 + 4);
      plVar4 = (long *)(ulong)(bVar1 >> 1);
      plVar9 = plVar4;
      if ((bVar1 & 1) != 0) {
        plVar9 = param_1[5];
      }
      plVar10 = (long *)(ulong)(bVar2 >> 1);
      if ((bVar2 & 1) != 0) {
        plVar10 = param_3[5];
      }
      if (plVar9 != plVar10) {
        return 0;
      }
      __s1 = param_1[6];
      plVar10 = param_3[6];
      if ((bVar1 & 1) == 0) {
        __s1 = (long *)((long)param_1 + 0x21);
      }
      if ((bVar2 & 1) == 0) {
        plVar10 = (long *)((long)param_3 + 0x21);
      }
      if ((bVar1 & 1) == 0) {
        if (plVar9 != (long *)0x0) {
          pcVar6 = (char *)((long)param_1 + 0x21);
          do {
            if (*pcVar6 != *(char *)plVar10) {
              return 0;
            }
            plVar4 = (long *)((long)plVar4 - 1);
            pcVar6 = pcVar6 + 1;
            plVar10 = (long *)((long)plVar10 + 1);
          } while (plVar4 != (long *)0x0);
        }
      }
      else if ((plVar9 != (long *)0x0) && (iVar3 = memcmp(__s1,plVar10,(size_t)plVar9), iVar3 != 0))
      {
        return 0;
      }
      if (*(int *)(param_1 + 7) != *(int *)(param_3 + 7)) {
        return 0;
      }
      pplVar5 = (long **)param_1[1];
      if ((long **)param_1[1] == (long **)0x0) {
        pplVar5 = param_1 + 2;
        pplVar7 = (long **)*pplVar5;
        if ((long **)*pplVar7 != param_1) {
          do {
            plVar9 = *pplVar5;
            pplVar5 = (long **)(plVar9 + 2);
            pplVar7 = (long **)*pplVar5;
          } while (*pplVar7 != plVar9);
          goto LAB_009575bc;
        }
        pplVar5 = (long **)param_3[1];
        if ((long **)param_3[1] == (long **)0x0) goto LAB_009575e0;
LAB_009575c4:
        do {
          pplVar8 = pplVar5;
          pplVar5 = (long **)*pplVar8;
        } while (*pplVar8 != (long *)0x0);
      }
      else {
        do {
          pplVar7 = pplVar5;
          pplVar5 = (long **)*pplVar7;
        } while (*pplVar7 != (long *)0x0);
LAB_009575bc:
        pplVar5 = (long **)param_3[1];
        if ((long **)param_3[1] != (long **)0x0) goto LAB_009575c4;
LAB_009575e0:
        pplVar5 = param_3 + 2;
        pplVar8 = (long **)*pplVar5;
        if ((long **)*pplVar8 != param_3) {
          do {
            plVar9 = *pplVar5;
            pplVar5 = (long **)(plVar9 + 2);
            pplVar8 = (long **)*pplVar5;
          } while (*pplVar8 != plVar9);
        }
      }
      param_3 = pplVar8;
      param_1 = pplVar7;
    } while (pplVar7 != param_2);
  }
  return 1;
}


