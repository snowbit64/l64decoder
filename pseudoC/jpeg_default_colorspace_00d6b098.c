// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: jpeg_default_colorspace
// Entry Point: 00d6b098
// Size: 1216 bytes
// Signature: undefined jpeg_default_colorspace(void)


void jpeg_default_colorspace(long *param_1)

{
  bool bVar1;
  code **ppcVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined4 *puVar7;
  int *piVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  int *piVar12;
  
  switch(*(undefined4 *)((long)param_1 + 0x3c)) {
  case 0:
    if (*(int *)((long)param_1 + 0x24) != 100) {
      lVar6 = *param_1;
      *(int *)(lVar6 + 0x2c) = *(int *)((long)param_1 + 0x24);
      ppcVar2 = (code **)*param_1;
      *(undefined4 *)(lVar6 + 0x28) = 0x15;
      (**ppcVar2)(param_1);
    }
    uVar9 = *(uint *)(param_1 + 7);
    *(undefined *)(param_1 + 0x27) = 0;
    *(undefined *)(param_1 + 0x28) = 0;
    *(uint *)((long)param_1 + 0x5c) = uVar9;
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (uVar9 - 0xb < 0xfffffff6) {
      lVar6 = *param_1;
      *(uint *)(lVar6 + 0x2c) = uVar9;
      lVar4 = *param_1;
      *(undefined4 *)(lVar6 + 0x28) = 0x1b;
      *(undefined4 *)(lVar4 + 0x30) = 10;
      (**(code **)*param_1)(param_1);
      uVar9 = *(uint *)((long)param_1 + 0x5c);
      if ((int)uVar9 < 1) {
        return;
      }
    }
    piVar8 = (int *)param_1[0xd];
    uVar3 = (ulong)uVar9;
    if (uVar9 < 2) {
      uVar5 = 0;
    }
    else {
      uVar11 = 0;
      uVar5 = uVar3 & 0xfffffffe;
      piVar12 = piVar8;
      do {
        iVar10 = (int)uVar11;
        *piVar12 = iVar10;
        *(undefined8 *)(piVar12 + 4) = 0;
        *(undefined8 *)(piVar12 + 2) = 0x100000001;
        uVar11 = uVar11 + 2;
        *(undefined8 *)(piVar12 + 0x1c) = 0;
        *(undefined8 *)(piVar12 + 0x1a) = 0x100000001;
        piVar12[0x18] = iVar10 + 1;
        piVar12[6] = 0;
        piVar12[0x1e] = 0;
        piVar12 = piVar12 + 0x30;
      } while (uVar5 != uVar11);
      if (uVar5 == uVar3) {
        return;
      }
    }
    piVar8 = piVar8 + uVar5 * 0x18;
    do {
      *piVar8 = (int)uVar5;
      uVar5 = uVar5 + 1;
      *(undefined8 *)(piVar8 + 4) = 0;
      *(undefined8 *)(piVar8 + 2) = 0x100000001;
      piVar8[6] = 0;
      piVar8 = piVar8 + 0x18;
    } while (uVar3 != uVar5);
    break;
  case 1:
    if (*(int *)((long)param_1 + 0x24) != 100) {
      lVar6 = *param_1;
      *(int *)(lVar6 + 0x2c) = *(int *)((long)param_1 + 0x24);
      ppcVar2 = (code **)*param_1;
      *(undefined4 *)(lVar6 + 0x28) = 0x15;
      (**ppcVar2)(param_1);
    }
    puVar7 = (undefined4 *)param_1[0xd];
    *(undefined *)(param_1 + 0x28) = 0;
    *(undefined *)(param_1 + 0x27) = 1;
    *(undefined8 *)((long)param_1 + 0x5c) = 0x100000001;
    *puVar7 = 1;
    *(undefined8 *)(puVar7 + 4) = 0;
    *(undefined8 *)(puVar7 + 2) = 0x100000001;
    puVar7[6] = 0;
    return;
  case 2:
  case 3:
    if (*(int *)((long)param_1 + 0x24) != 100) {
      lVar6 = *param_1;
      *(int *)(lVar6 + 0x2c) = *(int *)((long)param_1 + 0x24);
      ppcVar2 = (code **)*param_1;
      *(undefined4 *)(lVar6 + 0x28) = 0x15;
      (**ppcVar2)(param_1);
    }
    *(undefined *)(param_1 + 0x28) = 0;
    puVar7 = (undefined4 *)param_1[0xd];
    *(undefined8 *)((long)param_1 + 0x5c) = 0x300000003;
    *(undefined *)(param_1 + 0x27) = 1;
    puVar7[0x18] = 2;
    *(undefined8 *)(puVar7 + 4) = 0;
    *(undefined8 *)(puVar7 + 2) = 0x200000002;
    *puVar7 = 1;
    puVar7[6] = 0;
    *(undefined8 *)(puVar7 + 0x1c) = 0x100000001;
    *(undefined8 *)(puVar7 + 0x1a) = 0x100000001;
    puVar7[0x1e] = 1;
    puVar7[0x30] = 3;
    *(undefined8 *)(puVar7 + 0x34) = 0x100000001;
    *(undefined8 *)(puVar7 + 0x32) = 0x100000001;
    puVar7[0x36] = 1;
    break;
  case 4:
    if (*(int *)((long)param_1 + 0x24) != 100) {
      lVar6 = *param_1;
      *(int *)(lVar6 + 0x2c) = *(int *)((long)param_1 + 0x24);
      ppcVar2 = (code **)*param_1;
      *(undefined4 *)(lVar6 + 0x28) = 0x15;
      (**ppcVar2)(param_1);
    }
    puVar7 = (undefined4 *)param_1[0xd];
    *(undefined *)(param_1 + 0x27) = 0;
    *(undefined *)(param_1 + 0x28) = 1;
    *(undefined8 *)((long)param_1 + 0x5c) = 0x400000004;
    *puVar7 = 0x43;
    puVar7[0x18] = 0x4d;
    *(undefined8 *)(puVar7 + 4) = 0;
    *(undefined8 *)(puVar7 + 2) = 0x100000001;
    puVar7[6] = 0;
    puVar7[0x30] = 0x59;
    *(undefined8 *)(puVar7 + 0x1c) = 0;
    *(undefined8 *)(puVar7 + 0x1a) = 0x100000001;
    puVar7[0x1e] = 0;
    puVar7[0x48] = 0x4b;
    *(undefined8 *)(puVar7 + 0x34) = 0;
    *(undefined8 *)(puVar7 + 0x32) = 0x100000001;
    puVar7[0x36] = 0;
    *(undefined8 *)(puVar7 + 0x4c) = 0;
    *(undefined8 *)(puVar7 + 0x4a) = 0x100000001;
    puVar7[0x4e] = 0;
    return;
  case 5:
    if (*(int *)((long)param_1 + 0x24) != 100) {
      lVar6 = *param_1;
      *(int *)(lVar6 + 0x2c) = *(int *)((long)param_1 + 0x24);
      ppcVar2 = (code **)*param_1;
      *(undefined4 *)(lVar6 + 0x28) = 0x15;
      (**ppcVar2)(param_1);
    }
    *(undefined *)(param_1 + 0x27) = 0;
    puVar7 = (undefined4 *)param_1[0xd];
    *(undefined *)(param_1 + 0x28) = 1;
    *(undefined8 *)((long)param_1 + 0x5c) = 0x500000004;
    *puVar7 = 1;
    puVar7[0x18] = 2;
    puVar7[0x1e] = 1;
    puVar7[0x36] = 1;
    puVar7[0x30] = 3;
    *(undefined8 *)(puVar7 + 4) = 0;
    *(undefined8 *)(puVar7 + 2) = 0x200000002;
    puVar7[6] = 0;
    *(undefined8 *)(puVar7 + 0x1c) = 0x100000001;
    *(undefined8 *)(puVar7 + 0x1a) = 0x100000001;
    *(undefined8 *)(puVar7 + 0x34) = 0x100000001;
    *(undefined8 *)(puVar7 + 0x32) = 0x100000001;
    puVar7[0x48] = 4;
    *(undefined8 *)(puVar7 + 0x4c) = 0;
    *(undefined8 *)(puVar7 + 0x4a) = 0x200000002;
    puVar7[0x4e] = 0;
    return;
  case 6:
    if (*(int *)((long)param_1 + 0x24) != 100) {
      lVar6 = *param_1;
      *(int *)(lVar6 + 0x2c) = *(int *)((long)param_1 + 0x24);
      ppcVar2 = (code **)*param_1;
      *(undefined4 *)(lVar6 + 0x28) = 0x15;
      (**ppcVar2)(param_1);
    }
    puVar7 = (undefined4 *)param_1[0xd];
    *(undefined *)(param_1 + 0x28) = 0;
    *(undefined2 *)(param_1 + 0x27) = 0x201;
    bVar1 = *(int *)((long)param_1 + 0x144) == 1;
    *(undefined8 *)((long)param_1 + 0x5c) = 0x600000003;
    *puVar7 = 0x72;
    *(undefined8 *)(puVar7 + 2) = 0x100000001;
    uVar9 = (uint)bVar1;
    puVar7[4] = 0;
    puVar7[5] = uVar9;
    puVar7[0x18] = 0x67;
    puVar7[6] = uVar9;
    *(undefined8 *)(puVar7 + 0x1c) = 0;
    *(undefined8 *)(puVar7 + 0x1a) = 0x100000001;
    puVar7[0x1e] = 0;
    puVar7[0x30] = 0x62;
    *(undefined8 *)(puVar7 + 0x32) = 0x100000001;
    uVar9 = (uint)bVar1;
    puVar7[0x34] = 0;
    puVar7[0x35] = uVar9;
    puVar7[0x36] = uVar9;
    return;
  case 7:
    if (*(int *)((long)param_1 + 0x24) != 100) {
      lVar6 = *param_1;
      *(int *)(lVar6 + 0x2c) = *(int *)((long)param_1 + 0x24);
      ppcVar2 = (code **)*param_1;
      *(undefined4 *)(lVar6 + 0x28) = 0x15;
      (**ppcVar2)(param_1);
    }
    *(undefined *)(param_1 + 0x28) = 0;
    puVar7 = (undefined4 *)param_1[0xd];
    *(undefined8 *)((long)param_1 + 0x5c) = 0x700000003;
    *(undefined2 *)(param_1 + 0x27) = 0x201;
    puVar7[0x18] = 0x22;
    *(undefined8 *)(puVar7 + 4) = 0;
    *(undefined8 *)(puVar7 + 2) = 0x200000002;
    puVar7[6] = 0;
    *puVar7 = 1;
    *(undefined8 *)(puVar7 + 0x1c) = 0x100000001;
    *(undefined8 *)(puVar7 + 0x1a) = 0x100000001;
    puVar7[0x1e] = 1;
    puVar7[0x30] = 0x23;
    *(undefined8 *)(puVar7 + 0x34) = 0x100000001;
    *(undefined8 *)(puVar7 + 0x32) = 0x100000001;
    puVar7[0x36] = 1;
    return;
  default:
    ppcVar2 = (code **)*param_1;
    *(undefined4 *)(ppcVar2 + 5) = 10;
                    /* WARNING: Could not recover jumptable at 0x00d6b170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**ppcVar2)(param_1);
    return;
  }
  return;
}


