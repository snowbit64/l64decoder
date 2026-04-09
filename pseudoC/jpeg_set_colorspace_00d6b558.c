// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: jpeg_set_colorspace
// Entry Point: 00d6b558
// Size: 952 bytes
// Signature: undefined jpeg_set_colorspace(void)


void jpeg_set_colorspace(long *param_1,undefined4 param_2)

{
  code **ppcVar1;
  ulong uVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  undefined4 uVar10;
  int iVar11;
  ulong uVar12;
  int *piVar13;
  
  if (*(int *)((long)param_1 + 0x24) != 100) {
    lVar6 = *param_1;
    *(int *)(lVar6 + 0x2c) = *(int *)((long)param_1 + 0x24);
    ppcVar1 = (code **)*param_1;
    *(undefined4 *)(lVar6 + 0x28) = 0x15;
    (**ppcVar1)(param_1);
  }
  *(undefined4 *)(param_1 + 0xc) = param_2;
  *(undefined *)(param_1 + 0x27) = 0;
  *(undefined *)(param_1 + 0x28) = 0;
  switch(param_2) {
  case 0:
    uVar4 = *(uint *)(param_1 + 7);
    *(uint *)((long)param_1 + 0x5c) = uVar4;
    if (uVar4 - 0xb < 0xfffffff6) {
      lVar6 = *param_1;
      *(uint *)(lVar6 + 0x2c) = uVar4;
      lVar7 = *param_1;
      *(undefined4 *)(lVar6 + 0x28) = 0x1b;
      *(undefined4 *)(lVar7 + 0x30) = 10;
      (**(code **)*param_1)(param_1);
      uVar4 = *(uint *)((long)param_1 + 0x5c);
      if ((int)uVar4 < 1) {
        return;
      }
    }
    piVar9 = (int *)param_1[0xd];
    uVar2 = (ulong)uVar4;
    if (uVar4 < 2) {
      uVar8 = 0;
    }
    else {
      uVar12 = 0;
      uVar8 = uVar2 & 0xfffffffe;
      piVar13 = piVar9;
      do {
        iVar11 = (int)uVar12;
        *piVar13 = iVar11;
        *(undefined8 *)(piVar13 + 4) = 0;
        *(undefined8 *)(piVar13 + 2) = 0x100000001;
        uVar12 = uVar12 + 2;
        *(undefined8 *)(piVar13 + 0x1c) = 0;
        *(undefined8 *)(piVar13 + 0x1a) = 0x100000001;
        piVar13[0x18] = iVar11 + 1;
        piVar13[6] = 0;
        piVar13[0x1e] = 0;
        piVar13 = piVar13 + 0x30;
      } while (uVar8 != uVar12);
      if (uVar8 == uVar2) {
        return;
      }
    }
    piVar9 = piVar9 + uVar8 * 0x18;
    do {
      *piVar9 = (int)uVar8;
      uVar8 = uVar8 + 1;
      *(undefined8 *)(piVar9 + 4) = 0;
      *(undefined8 *)(piVar9 + 2) = 0x100000001;
      piVar9[6] = 0;
      piVar9 = piVar9 + 0x18;
    } while (uVar2 != uVar8);
    break;
  case 1:
    puVar3 = (undefined4 *)param_1[0xd];
    *(undefined *)(param_1 + 0x27) = 1;
    *(undefined4 *)((long)param_1 + 0x5c) = 1;
    *puVar3 = 1;
    *(undefined8 *)(puVar3 + 4) = 0;
    *(undefined8 *)(puVar3 + 2) = 0x100000001;
    puVar3[6] = 0;
    break;
  case 2:
    iVar11 = *(int *)((long)param_1 + 0x144);
    puVar3 = (undefined4 *)param_1[0xd];
    *(undefined4 *)((long)param_1 + 0x5c) = 3;
    *(undefined *)(param_1 + 0x28) = 1;
    *puVar3 = 0x52;
    uVar10 = 0x47;
    uVar5 = 0x42;
    *(undefined8 *)(puVar3 + 2) = 0x100000001;
    goto LAB_00d6b804;
  case 3:
    uVar5 = 3;
    *(undefined4 *)((long)param_1 + 0x5c) = 3;
    puVar3 = (undefined4 *)param_1[0xd];
    *(undefined *)(param_1 + 0x27) = 1;
    *(undefined8 *)(puVar3 + 4) = 0;
    *(undefined8 *)(puVar3 + 2) = 0x200000002;
    *puVar3 = 1;
    puVar3[6] = 0;
    puVar3[0x18] = 2;
    goto LAB_00d6b870;
  case 4:
    puVar3 = (undefined4 *)param_1[0xd];
    *(undefined *)(param_1 + 0x28) = 1;
    *(undefined4 *)((long)param_1 + 0x5c) = 4;
    *puVar3 = 0x43;
    puVar3[0x18] = 0x4d;
    puVar3[6] = 0;
    *(undefined8 *)(puVar3 + 4) = 0;
    *(undefined8 *)(puVar3 + 2) = 0x100000001;
    puVar3[0x30] = 0x59;
    *(undefined8 *)(puVar3 + 0x1c) = 0;
    *(undefined8 *)(puVar3 + 0x1a) = 0x100000001;
    puVar3[0x1e] = 0;
    puVar3[0x48] = 0x4b;
    *(undefined8 *)(puVar3 + 0x34) = 0;
    *(undefined8 *)(puVar3 + 0x32) = 0x100000001;
    puVar3[0x36] = 0;
    *(undefined8 *)(puVar3 + 0x4c) = 0;
    *(undefined8 *)(puVar3 + 0x4a) = 0x100000001;
    puVar3[0x4e] = 0;
    return;
  case 5:
    puVar3 = (undefined4 *)param_1[0xd];
    *(undefined *)(param_1 + 0x28) = 1;
    *(undefined4 *)((long)param_1 + 0x5c) = 4;
    puVar3[0x18] = 2;
    *puVar3 = 1;
    puVar3[6] = 0;
    puVar3[0x30] = 3;
    *(undefined8 *)(puVar3 + 4) = 0;
    *(undefined8 *)(puVar3 + 2) = 0x200000002;
    *(undefined8 *)(puVar3 + 0x1c) = 0x100000001;
    *(undefined8 *)(puVar3 + 0x1a) = 0x100000001;
    puVar3[0x1e] = 1;
    *(undefined8 *)(puVar3 + 0x34) = 0x100000001;
    *(undefined8 *)(puVar3 + 0x32) = 0x100000001;
    puVar3[0x36] = 1;
    puVar3[0x48] = 4;
    *(undefined8 *)(puVar3 + 0x4c) = 0;
    *(undefined8 *)(puVar3 + 0x4a) = 0x200000002;
    puVar3[0x4e] = 0;
    return;
  case 6:
    iVar11 = *(int *)((long)param_1 + 0x144);
    puVar3 = (undefined4 *)param_1[0xd];
    *(undefined4 *)((long)param_1 + 0x5c) = 3;
    *(undefined2 *)(param_1 + 0x27) = 0x201;
    *puVar3 = 0x72;
    uVar10 = 0x67;
    *(undefined8 *)(puVar3 + 2) = 0x100000001;
    uVar5 = 0x62;
LAB_00d6b804:
    uVar4 = (uint)(iVar11 == 1);
    puVar3[4] = 0;
    puVar3[5] = uVar4;
    puVar3[6] = uVar4;
    puVar3[0x18] = uVar10;
    *(undefined8 *)(puVar3 + 0x1c) = 0;
    *(undefined8 *)(puVar3 + 0x1a) = 0x100000001;
    puVar3[0x1e] = 0;
    puVar3[0x30] = uVar5;
    *(undefined8 *)(puVar3 + 0x32) = 0x100000001;
    puVar3[0x34] = 0;
    puVar3[0x35] = uVar4;
    puVar3[0x36] = uVar4;
    return;
  case 7:
    *(undefined2 *)(param_1 + 0x27) = 0x201;
    puVar3 = (undefined4 *)param_1[0xd];
    *(undefined4 *)((long)param_1 + 0x5c) = 3;
    *(undefined8 *)(puVar3 + 4) = 0;
    *(undefined8 *)(puVar3 + 2) = 0x200000002;
    *puVar3 = 1;
    puVar3[6] = 0;
    puVar3[0x18] = 0x22;
    uVar5 = 0x23;
LAB_00d6b870:
    *(undefined8 *)(puVar3 + 0x1c) = 0x100000001;
    *(undefined8 *)(puVar3 + 0x1a) = 0x100000001;
    puVar3[0x1e] = 1;
    puVar3[0x30] = uVar5;
    *(undefined8 *)(puVar3 + 0x34) = 0x100000001;
    *(undefined8 *)(puVar3 + 0x32) = 0x100000001;
    puVar3[0x36] = 1;
    return;
  default:
    ppcVar1 = (code **)*param_1;
    *(undefined4 *)(ppcVar1 + 5) = 0xb;
                    /* WARNING: Could not recover jumptable at 0x00d6b648. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**ppcVar1)(param_1);
    return;
  }
  return;
}


