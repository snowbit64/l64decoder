// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d8f794
// Entry Point: 00d8f794
// Size: 312 bytes
// Signature: undefined FUN_00d8f794(void)


void FUN_00d8f794(long param_1,long param_2,void **param_3,uint param_4)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  char cVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  byte *pbVar13;
  char *pcVar14;
  uint uVar15;
  byte *pbVar16;
  
  if (0 < (int)param_4) {
    uVar2 = *(uint *)(param_1 + 0x74);
    if (uVar2 != 0) {
      uVar3 = *(uint *)(param_1 + 0x7c);
      uVar9 = (ulong)uVar3;
      if ((int)uVar3 < 1) {
        uVar9 = (ulong)param_4;
        do {
          memset(*param_3,0,(ulong)uVar2);
          uVar9 = uVar9 - 1;
          param_3 = param_3 + 1;
        } while (uVar9 != 0);
      }
      else {
        uVar10 = 0;
        uVar12 = uVar9 & 0xfffffffe;
        lVar11 = *(long *)(*(long *)(param_1 + 0x270) + 0x30);
        do {
          pbVar13 = *(byte **)(param_2 + uVar10 * 8);
          pcVar14 = (char *)param_3[uVar10];
          uVar15 = uVar2;
          do {
            if (uVar3 < 2) {
              cVar4 = '\0';
              uVar7 = 0;
              pbVar16 = pbVar13;
LAB_00d8f87c:
              lVar8 = uVar9 - uVar7;
              plVar6 = (long *)(lVar11 + uVar7 * 8);
              do {
                lVar8 = lVar8 + -1;
                cVar4 = cVar4 + *(char *)(*plVar6 + (ulong)*pbVar16);
                plVar6 = plVar6 + 1;
                pbVar16 = pbVar16 + 1;
              } while (lVar8 != 0);
            }
            else {
              uVar7 = 0;
              cVar5 = '\0';
              cVar4 = '\0';
              pbVar16 = pbVar13 + uVar12;
              do {
                plVar6 = (long *)(lVar11 + uVar7 * 8);
                pbVar1 = pbVar13 + uVar7;
                uVar7 = uVar7 + 2;
                cVar5 = cVar5 + *(char *)(*plVar6 + (ulong)*pbVar1);
                cVar4 = cVar4 + *(char *)(plVar6[1] + (ulong)pbVar1[1]);
              } while (uVar12 != uVar7);
              cVar4 = cVar4 + cVar5;
              uVar7 = uVar12;
              if (uVar12 != uVar9) goto LAB_00d8f87c;
            }
            pbVar13 = pbVar13 + (ulong)(uVar3 - 1) + 1;
            uVar15 = uVar15 - 1;
            *pcVar14 = cVar4;
            pcVar14 = pcVar14 + 1;
          } while (uVar15 != 0);
          uVar10 = uVar10 + 1;
        } while (uVar10 != param_4);
      }
    }
  }
  return;
}


