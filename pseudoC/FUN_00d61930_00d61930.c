// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d61930
// Entry Point: 00d61930
// Size: 680 bytes
// Signature: undefined FUN_00d61930(void)


void FUN_00d61930(long *param_1,char param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  char cVar5;
  undefined8 uVar6;
  void *pvVar7;
  code *pcVar8;
  long lVar9;
  code **ppcVar10;
  long lVar11;
  long lVar12;
  void **ppvVar13;
  long lVar14;
  
  lVar11 = param_1[0x44];
  if (param_2 == '\0') {
    cVar5 = *(char *)((long)param_1 + 0x14c);
    *(code **)(lVar11 + 0x10) = FUN_00d61d30;
    if (cVar5 == '\0') {
      *(code **)(lVar11 + 8) = FUN_00d63614;
      iVar1 = *(int *)((long)param_1 + 0x164);
      goto joined_r0x00d61a48;
    }
  }
  else {
    cVar5 = *(char *)((long)param_1 + 0x14c);
    *(code **)(lVar11 + 0x10) = FUN_00d61bd8;
    if (cVar5 == '\0') {
      *(code **)(lVar11 + 8) = FUN_00d63394;
      iVar1 = *(int *)((long)param_1 + 0x164);
      goto joined_r0x00d61a48;
    }
  }
  iVar1 = *(int *)((long)param_1 + 0x1c4);
  *(long **)(lVar11 + 0xd8) = param_1;
  iVar2 = *(int *)((long)param_1 + 0x1bc);
  *(char *)(lVar11 + 0xc0) = param_2;
  if (iVar1 == 0) {
    if (iVar2 == 0) {
      pcVar8 = FUN_00d61ef8;
    }
    else {
      pcVar8 = FUN_00d620b0;
    }
LAB_00d61a2c:
    *(code **)(lVar11 + 8) = pcVar8;
  }
  else {
    if (iVar2 == 0) {
      pcVar8 = FUN_00d624e0;
      goto LAB_00d61a2c;
    }
    *(code **)(lVar11 + 8) = FUN_00d62714;
    if (*(long *)(lVar11 + 0xf0) == 0) {
      uVar6 = (**(code **)param_1[1])(param_1,1,1000);
      *(undefined8 *)(lVar11 + 0xf0) = uVar6;
    }
  }
  uVar4 = *(undefined4 *)(param_1[0x2d] + 0x18);
  *(undefined4 *)(lVar11 + 0xe4) = 0;
  *(undefined4 *)(lVar11 + 0xe8) = 0;
  *(undefined4 *)(lVar11 + 0xe0) = uVar4;
  iVar1 = *(int *)((long)param_1 + 0x164);
joined_r0x00d61a48:
  if (0 < iVar1) {
    lVar12 = 0;
    do {
      lVar14 = param_1[lVar12 + 0x2d];
      if ((*(int *)((long)param_1 + 0x1bc) == 0) && (*(int *)((long)param_1 + 0x1c4) == 0)) {
        uVar3 = *(uint *)(lVar14 + 0x14);
        if (param_2 == '\0') {
          FUN_00d64124(param_1,1,uVar3,lVar11 + (long)(int)uVar3 * 8 + 0x40);
          *(undefined4 *)(lVar11 + 0x24 + lVar12 * 4) = 0;
          iVar1 = *(int *)(param_1 + 0x38);
        }
        else {
          if (3 < uVar3) {
            lVar9 = *param_1;
            *(uint *)(lVar9 + 0x2c) = uVar3;
            ppcVar10 = (code **)*param_1;
            *(undefined4 *)(lVar9 + 0x28) = 0x34;
            (**ppcVar10)(param_1);
          }
          ppvVar13 = (void **)(lVar11 + (long)(int)uVar3 * 8 + 0x80);
          pvVar7 = *ppvVar13;
          if (pvVar7 == (void *)0x0) {
            pvVar7 = (void *)(**(code **)param_1[1])(param_1,1,0x808);
            *ppvVar13 = pvVar7;
          }
          memset(pvVar7,0,0x808);
          *(undefined4 *)(lVar11 + 0x24 + lVar12 * 4) = 0;
          iVar1 = *(int *)(param_1 + 0x38);
        }
      }
      else {
        iVar1 = *(int *)(param_1 + 0x38);
      }
      if (iVar1 != 0) {
        uVar3 = *(uint *)(lVar14 + 0x18);
        if (param_2 == '\0') {
          FUN_00d64124(param_1,0,uVar3,lVar11 + (long)(int)uVar3 * 8 + 0x60);
        }
        else {
          if (3 < uVar3) {
            lVar14 = *param_1;
            *(uint *)(lVar14 + 0x2c) = uVar3;
            ppcVar10 = (code **)*param_1;
            *(undefined4 *)(lVar14 + 0x28) = 0x34;
            (**ppcVar10)(param_1);
          }
          ppvVar13 = (void **)(lVar11 + (long)(int)uVar3 * 8 + 0xa0);
          pvVar7 = *ppvVar13;
          if (pvVar7 == (void *)0x0) {
            pvVar7 = (void *)(**(code **)param_1[1])(param_1,1,0x808);
            *ppvVar13 = pvVar7;
          }
          memset(pvVar7,0,0x808);
        }
      }
      lVar12 = lVar12 + 1;
    } while (lVar12 < *(int *)((long)param_1 + 0x164));
  }
  uVar4 = *(undefined4 *)(param_1 + 0x26);
  *(undefined8 *)(lVar11 + 0x18) = 0;
  *(undefined4 *)(lVar11 + 0x20) = 0;
  *(undefined4 *)(lVar11 + 0x38) = uVar4;
  *(undefined4 *)(lVar11 + 0x3c) = 0;
  return;
}


