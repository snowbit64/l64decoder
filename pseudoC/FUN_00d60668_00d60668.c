// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d60668
// Entry Point: 00d60668
// Size: 408 bytes
// Signature: undefined FUN_00d60668(void)


void FUN_00d60668(long *param_1,char param_2)

{
  long lVar1;
  int iVar2;
  char cVar3;
  undefined8 *puVar4;
  code **ppcVar5;
  char **ppcVar6;
  undefined *puVar7;
  long lVar8;
  char *pcVar9;
  long lVar10;
  long lVar11;
  
  lVar11 = param_1[0x44];
  FUN_00d5f35c();
  puVar4 = (undefined8 *)param_1[5];
  puVar7 = (undefined *)*puVar4;
  *puVar4 = puVar7 + 1;
  *puVar7 = 0xff;
  lVar8 = puVar4[1];
  puVar4[1] = lVar8 + -1;
  if ((lVar8 + -1 == 0) && (cVar3 = (*(code *)puVar4[3])(param_1), cVar3 == '\0')) {
    ppcVar5 = (code **)*param_1;
    *(undefined4 *)(ppcVar5 + 5) = 0x19;
    (**ppcVar5)(param_1);
  }
  ppcVar6 = (char **)param_1[5];
  pcVar9 = *ppcVar6;
  *ppcVar6 = pcVar9 + 1;
  *pcVar9 = param_2 + -0x30;
  pcVar9 = ppcVar6[1];
  ppcVar6[1] = pcVar9 + -1;
  if ((pcVar9 + -1 == (char *)0x0) && (cVar3 = (*(code *)ppcVar6[3])(param_1), cVar3 == '\0')) {
    ppcVar5 = (code **)*param_1;
    *(undefined4 *)(ppcVar5 + 5) = 0x19;
    (**ppcVar5)(param_1);
  }
  if (0 < *(int *)((long)param_1 + 0x164)) {
    lVar8 = 0;
    do {
      lVar10 = param_1[lVar8 + 0x2d];
      if ((*(int *)((long)param_1 + 0x1bc) == 0) && (*(int *)((long)param_1 + 0x1c4) == 0)) {
        lVar1 = lVar11 + lVar8 * 4;
        puVar4 = *(undefined8 **)(lVar11 + (long)*(int *)(lVar10 + 0x14) * 8 + 0x68);
        puVar4[5] = 0;
        puVar4[4] = 0;
        puVar4[7] = 0;
        puVar4[6] = 0;
        puVar4[1] = 0;
        *puVar4 = 0;
        puVar4[3] = 0;
        puVar4[2] = 0;
        *(undefined4 *)(lVar1 + 0x40) = 0;
        *(undefined4 *)(lVar1 + 0x50) = 0;
        iVar2 = *(int *)(param_1 + 0x38);
      }
      else {
        iVar2 = *(int *)(param_1 + 0x38);
      }
      if (iVar2 != 0) {
        puVar4 = *(undefined8 **)(lVar11 + (long)*(int *)(lVar10 + 0x18) * 8 + 0xe8);
        puVar4[0x1d] = 0;
        puVar4[0x1c] = 0;
        puVar4[0x1f] = 0;
        puVar4[0x1e] = 0;
        puVar4[0x19] = 0;
        puVar4[0x18] = 0;
        puVar4[0x1b] = 0;
        puVar4[0x1a] = 0;
        puVar4[0x15] = 0;
        puVar4[0x14] = 0;
        puVar4[0x17] = 0;
        puVar4[0x16] = 0;
        puVar4[0x11] = 0;
        puVar4[0x10] = 0;
        puVar4[0x13] = 0;
        puVar4[0x12] = 0;
        puVar4[0xd] = 0;
        puVar4[0xc] = 0;
        puVar4[0xf] = 0;
        puVar4[0xe] = 0;
        puVar4[9] = 0;
        puVar4[8] = 0;
        puVar4[0xb] = 0;
        puVar4[10] = 0;
        puVar4[5] = 0;
        puVar4[4] = 0;
        puVar4[7] = 0;
        puVar4[6] = 0;
        puVar4[1] = 0;
        *puVar4 = 0;
        puVar4[3] = 0;
        puVar4[2] = 0;
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 < *(int *)((long)param_1 + 0x164));
  }
  *(undefined8 *)(lVar11 + 0x28) = 0;
  *(undefined8 *)(lVar11 + 0x30) = 0;
  *(undefined8 *)(lVar11 + 0x20) = 0x10000;
  *(undefined8 *)(lVar11 + 0x18) = 0;
  *(undefined8 *)(lVar11 + 0x38) = 0xffffffff0000000b;
  return;
}


