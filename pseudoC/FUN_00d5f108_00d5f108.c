// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d5f108
// Entry Point: 00d5f108
// Size: 596 bytes
// Signature: undefined FUN_00d5f108(void)


void FUN_00d5f108(long *param_1,char param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  code **ppcVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  
  lVar7 = param_1[0x44];
  if (param_2 != '\0') {
    ppcVar5 = (code **)*param_1;
    *(undefined4 *)(ppcVar5 + 5) = 0x31;
    (**ppcVar5)(param_1);
  }
  if (*(char *)((long)param_1 + 0x14c) == '\0') {
    *(code **)(lVar7 + 8) = FUN_00d601a8;
    iVar1 = *(int *)((long)param_1 + 0x164);
  }
  else if (*(int *)((long)param_1 + 0x1c4) == 0) {
    if (*(int *)((long)param_1 + 0x1bc) == 0) {
      *(code **)(lVar7 + 8) = FUN_00d5f918;
      iVar1 = *(int *)((long)param_1 + 0x164);
    }
    else {
      *(code **)(lVar7 + 8) = FUN_00d5fb60;
      iVar1 = *(int *)((long)param_1 + 0x164);
    }
  }
  else if (*(int *)((long)param_1 + 0x1bc) == 0) {
    *(code **)(lVar7 + 8) = FUN_00d5fe7c;
    iVar1 = *(int *)((long)param_1 + 0x164);
  }
  else {
    *(code **)(lVar7 + 8) = FUN_00d5ff30;
    iVar1 = *(int *)((long)param_1 + 0x164);
  }
  if (0 < iVar1) {
    lVar8 = 0;
    do {
      lVar10 = param_1[lVar8 + 0x2d];
      if ((*(int *)((long)param_1 + 0x1bc) == 0) && (*(int *)((long)param_1 + 0x1c4) == 0)) {
        uVar2 = *(uint *)(lVar10 + 0x14);
        if (0xf < uVar2) {
          lVar6 = *param_1;
          *(uint *)(lVar6 + 0x2c) = uVar2;
          ppcVar5 = (code **)*param_1;
          *(undefined4 *)(lVar6 + 0x28) = 0x32;
          (**ppcVar5)(param_1);
        }
        puVar9 = (undefined8 *)(lVar7 + (long)(int)uVar2 * 8 + 0x68);
        puVar4 = (undefined8 *)*puVar9;
        if (puVar4 == (undefined8 *)0x0) {
          puVar4 = (undefined8 *)(**(code **)param_1[1])(param_1,1,0x40);
          *puVar9 = puVar4;
        }
        lVar6 = lVar7 + lVar8 * 4;
        puVar4[5] = 0;
        puVar4[4] = 0;
        puVar4[7] = 0;
        puVar4[6] = 0;
        puVar4[1] = 0;
        *puVar4 = 0;
        puVar4[3] = 0;
        puVar4[2] = 0;
        *(undefined4 *)(lVar6 + 0x40) = 0;
        *(undefined4 *)(lVar6 + 0x50) = 0;
        iVar1 = *(int *)(param_1 + 0x38);
      }
      else {
        iVar1 = *(int *)(param_1 + 0x38);
      }
      if (iVar1 != 0) {
        uVar2 = *(uint *)(lVar10 + 0x18);
        if (0xf < uVar2) {
          lVar10 = *param_1;
          *(uint *)(lVar10 + 0x2c) = uVar2;
          ppcVar5 = (code **)*param_1;
          *(undefined4 *)(lVar10 + 0x28) = 0x32;
          (**ppcVar5)(param_1);
        }
        puVar9 = (undefined8 *)(lVar7 + (long)(int)uVar2 * 8 + 0xe8);
        puVar4 = (undefined8 *)*puVar9;
        if (puVar4 == (undefined8 *)0x0) {
          puVar4 = (undefined8 *)(**(code **)param_1[1])(param_1,1,0x100);
          *puVar9 = puVar4;
        }
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
  *(undefined8 *)(lVar7 + 0x28) = 0;
  *(undefined8 *)(lVar7 + 0x30) = 0;
  *(undefined8 *)(lVar7 + 0x38) = 0xffffffff0000000b;
  uVar3 = *(undefined4 *)(param_1 + 0x26);
  *(undefined8 *)(lVar7 + 0x20) = 0x10000;
  *(undefined8 *)(lVar7 + 0x18) = 0;
  *(undefined4 *)(lVar7 + 0x60) = uVar3;
  *(undefined4 *)(lVar7 + 100) = 0;
  return;
}


