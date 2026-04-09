// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d75810
// Entry Point: 00d75810
// Size: 288 bytes
// Signature: undefined FUN_00d75810(void)


void FUN_00d75810(long *param_1)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  char cVar4;
  code **ppcVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  
  lVar9 = param_1[0x4a];
  cVar4 = (**(code **)(param_1[0x49] + 0x10))();
  if (cVar4 == '\0') {
    ppcVar5 = (code **)*param_1;
    *(undefined4 *)(ppcVar5 + 5) = 0x19;
    (**ppcVar5)(param_1);
    iVar2 = *(int *)(param_1 + 0x34);
  }
  else {
    iVar2 = *(int *)(param_1 + 0x34);
  }
  if (0 < iVar2) {
    lVar6 = 0;
    do {
      lVar7 = param_1[lVar6 + 0x35];
      if (*(char *)((long)param_1 + 0x129) == '\0') {
LAB_00d758dc:
        puVar8 = *(undefined8 **)(lVar9 + (long)*(int *)(lVar7 + 0x14) * 8 + 0x50);
        puVar8[5] = 0;
        puVar8[4] = 0;
        puVar8[7] = 0;
        puVar8[6] = 0;
        puVar8[1] = 0;
        *puVar8 = 0;
        puVar8[3] = 0;
        puVar8[2] = 0;
        lVar1 = lVar9 + lVar6 * 4;
        cVar4 = *(char *)((long)param_1 + 0x129);
        *(undefined4 *)(lVar1 + 0x2c) = 0;
        *(undefined4 *)(lVar1 + 0x3c) = 0;
        if (cVar4 == '\0') {
          iVar2 = *(int *)(param_1 + 0x43);
        }
        else {
          iVar2 = *(int *)((long)param_1 + 0x1fc);
        }
        if (iVar2 != 0) {
LAB_00d75884:
          puVar8 = *(undefined8 **)(lVar9 + (long)*(int *)(lVar7 + 0x18) * 8 + 0xd0);
          puVar8[0x1d] = 0;
          puVar8[0x1c] = 0;
          puVar8[0x1f] = 0;
          puVar8[0x1e] = 0;
          puVar8[0x19] = 0;
          puVar8[0x18] = 0;
          puVar8[0x1b] = 0;
          puVar8[0x1a] = 0;
          puVar8[0x15] = 0;
          puVar8[0x14] = 0;
          puVar8[0x17] = 0;
          puVar8[0x16] = 0;
          puVar8[0x11] = 0;
          puVar8[0x10] = 0;
          puVar8[0x13] = 0;
          puVar8[0x12] = 0;
          puVar8[0xd] = 0;
          puVar8[0xc] = 0;
          puVar8[0xf] = 0;
          puVar8[0xe] = 0;
          puVar8[9] = 0;
          puVar8[8] = 0;
          puVar8[0xb] = 0;
          puVar8[10] = 0;
          puVar8[5] = 0;
          puVar8[4] = 0;
          puVar8[7] = 0;
          puVar8[6] = 0;
          puVar8[1] = 0;
          *puVar8 = 0;
          puVar8[3] = 0;
          puVar8[2] = 0;
        }
      }
      else {
        if (*(int *)((long)param_1 + 0x1fc) != 0) goto LAB_00d75884;
        if (*(int *)((long)param_1 + 0x204) == 0) goto LAB_00d758dc;
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)(param_1 + 0x34));
  }
  *(undefined8 *)(lVar9 + 0x18) = 0;
  *(undefined8 *)(lVar9 + 0x20) = 0;
  uVar3 = *(undefined4 *)((long)param_1 + 0x15c);
  *(undefined4 *)(lVar9 + 0x28) = 0xfffffff0;
  *(undefined4 *)(lVar9 + 0x4c) = uVar3;
  return;
}


