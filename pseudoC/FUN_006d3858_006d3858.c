// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006d3858
// Entry Point: 006d3858
// Size: 1180 bytes
// Signature: undefined FUN_006d3858(void)


int FUN_006d3858(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                undefined8 *param_5)

{
  ulong uVar1;
  ulong uVar2;
  size_t sVar3;
  void *pvVar4;
  byte bVar5;
  byte bVar6;
  undefined uVar7;
  long lVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  void *pvVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  int iVar16;
  void *pvVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined6 local_78;
  undefined2 uStack_72;
  
  lVar8 = tpidr_el0;
  lVar11 = *(long *)(lVar8 + 0x28);
  iVar9 = FUN_006d34d0();
  bVar5 = *(byte *)param_5;
  bVar6 = *(byte *)param_4;
  uVar1 = (ulong)(bVar5 >> 1);
  if ((bVar5 & 1) != 0) {
    uVar1 = param_5[1];
  }
  uVar2 = (ulong)(bVar6 >> 1);
  if ((bVar6 & 1) != 0) {
    uVar2 = param_4[1];
  }
  sVar3 = uVar1;
  if (uVar2 <= uVar1) {
    sVar3 = uVar2;
  }
  iVar16 = iVar9;
  if (sVar3 == 0) {
LAB_006d3904:
    if (uVar1 <= uVar2) goto LAB_006d3cb8;
    pvVar17 = (void *)param_4[2];
  }
  else {
    pvVar12 = (void *)param_5[2];
    pvVar17 = (void *)param_4[2];
    if ((bVar5 & 1) == 0) {
      pvVar12 = (void *)((long)param_5 + 1);
    }
    pvVar4 = pvVar17;
    if ((bVar6 & 1) == 0) {
      pvVar4 = (void *)((long)param_4 + 1);
    }
    iVar10 = memcmp(pvVar4,pvVar12,sVar3);
    if (iVar10 == 0) goto LAB_006d3904;
    if (-1 < iVar10) goto LAB_006d3cb8;
  }
  uVar7 = *(undefined *)((long)param_4 + 1);
  uVar13 = param_4[1];
  uVar15 = param_4[5];
  param_4[1] = 0;
  param_4[2] = 0;
  *param_4 = 0;
  uVar18 = *param_5;
  local_78 = (undefined6)*(undefined8 *)((long)param_4 + 2);
  uVar14 = param_5[2];
  uStack_72 = (undefined2)uVar13;
  param_4[1] = param_5[1];
  *param_4 = uVar18;
  uVar19 = param_4[4];
  uVar18 = param_4[3];
  param_4[2] = uVar14;
  uVar20 = param_5[3];
  *(undefined2 *)param_5 = 0;
  uVar14 = param_5[5];
  param_4[4] = param_5[4];
  param_4[3] = uVar20;
  param_4[5] = uVar14;
  if ((*(byte *)param_5 & 1) != 0) {
    operator_delete((void *)param_5[2]);
  }
  *(byte *)param_5 = bVar6;
  *(undefined *)((long)param_5 + 1) = uVar7;
  *(ulong *)((long)param_5 + 2) = CONCAT26(uStack_72,local_78);
  param_5[1] = uVar13;
  param_5[2] = pvVar17;
  param_5[4] = uVar19;
  param_5[3] = uVar18;
  param_5[5] = uVar15;
  bVar5 = *(byte *)param_4;
  bVar6 = *(byte *)param_3;
  uVar1 = (ulong)(bVar5 >> 1);
  if ((bVar5 & 1) != 0) {
    uVar1 = param_4[1];
  }
  uVar2 = (ulong)(bVar6 >> 1);
  if ((bVar6 & 1) != 0) {
    uVar2 = param_3[1];
  }
  sVar3 = uVar1;
  if (uVar2 <= uVar1) {
    sVar3 = uVar2;
  }
  iVar16 = iVar9 + 1;
  if (sVar3 == 0) {
LAB_006d3a04:
    if (uVar1 <= uVar2) goto LAB_006d3cb8;
    pvVar17 = (void *)param_3[2];
  }
  else {
    pvVar12 = (void *)param_4[2];
    pvVar17 = (void *)param_3[2];
    if ((bVar5 & 1) == 0) {
      pvVar12 = (void *)((long)param_4 + 1);
    }
    pvVar4 = pvVar17;
    if ((bVar6 & 1) == 0) {
      pvVar4 = (void *)((long)param_3 + 1);
    }
    iVar10 = memcmp(pvVar4,pvVar12,sVar3);
    if (iVar10 == 0) goto LAB_006d3a04;
    if (-1 < iVar10) goto LAB_006d3cb8;
  }
  uVar7 = *(undefined *)((long)param_3 + 1);
  uVar15 = param_3[5];
  uVar13 = param_3[1];
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  uVar18 = *param_4;
  local_78 = (undefined6)*(undefined8 *)((long)param_3 + 2);
  uVar14 = param_4[2];
  uStack_72 = (undefined2)uVar13;
  param_3[1] = param_4[1];
  *param_3 = uVar18;
  uVar19 = param_3[4];
  uVar18 = param_3[3];
  param_3[2] = uVar14;
  uVar20 = param_4[3];
  *(undefined2 *)param_4 = 0;
  uVar14 = param_4[5];
  param_3[4] = param_4[4];
  param_3[3] = uVar20;
  param_3[5] = uVar14;
  if ((*(byte *)param_4 & 1) != 0) {
    operator_delete((void *)param_4[2]);
  }
  *(byte *)param_4 = bVar6;
  *(undefined *)((long)param_4 + 1) = uVar7;
  param_4[2] = pvVar17;
  *(undefined8 *)((long)param_4 + 2) = CONCAT26(uStack_72,local_78);
  param_4[1] = uVar13;
  param_4[4] = uVar19;
  param_4[3] = uVar18;
  param_4[5] = uVar15;
  bVar5 = *(byte *)param_3;
  bVar6 = *(byte *)param_2;
  uVar1 = (ulong)(bVar5 >> 1);
  if ((bVar5 & 1) != 0) {
    uVar1 = param_3[1];
  }
  uVar2 = (ulong)(bVar6 >> 1);
  if ((bVar6 & 1) != 0) {
    uVar2 = param_2[1];
  }
  sVar3 = uVar1;
  if (uVar2 <= uVar1) {
    sVar3 = uVar2;
  }
  iVar16 = iVar9 + 2;
  if (sVar3 == 0) {
LAB_006d3b0c:
    if (uVar1 <= uVar2) goto LAB_006d3cb8;
    pvVar17 = (void *)param_2[2];
  }
  else {
    pvVar12 = (void *)param_3[2];
    pvVar17 = (void *)param_2[2];
    if ((bVar5 & 1) == 0) {
      pvVar12 = (void *)((long)param_3 + 1);
    }
    pvVar4 = pvVar17;
    if ((bVar6 & 1) == 0) {
      pvVar4 = (void *)((long)param_2 + 1);
    }
    iVar10 = memcmp(pvVar4,pvVar12,sVar3);
    if (iVar10 == 0) goto LAB_006d3b0c;
    if (-1 < iVar10) goto LAB_006d3cb8;
  }
  uVar7 = *(undefined *)((long)param_2 + 1);
  uVar13 = param_2[1];
  uVar15 = param_2[5];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  uVar18 = *param_3;
  local_78 = (undefined6)*(undefined8 *)((long)param_2 + 2);
  uVar14 = param_3[2];
  uStack_72 = (undefined2)uVar13;
  param_2[1] = param_3[1];
  *param_2 = uVar18;
  uVar19 = param_2[4];
  uVar18 = param_2[3];
  param_2[2] = uVar14;
  uVar20 = param_3[3];
  *(undefined2 *)param_3 = 0;
  uVar14 = param_3[5];
  param_2[4] = param_3[4];
  param_2[3] = uVar20;
  param_2[5] = uVar14;
  if ((*(byte *)param_3 & 1) != 0) {
    operator_delete((void *)param_3[2]);
  }
  *(byte *)param_3 = bVar6;
  *(undefined *)((long)param_3 + 1) = uVar7;
  param_3[2] = pvVar17;
  *(undefined8 *)((long)param_3 + 2) = CONCAT26(uStack_72,local_78);
  param_3[1] = uVar13;
  param_3[4] = uVar19;
  param_3[3] = uVar18;
  param_3[5] = uVar15;
  bVar5 = *(byte *)param_2;
  bVar6 = *(byte *)param_1;
  uVar1 = (ulong)(bVar5 >> 1);
  if ((bVar5 & 1) != 0) {
    uVar1 = param_2[1];
  }
  uVar2 = (ulong)(bVar6 >> 1);
  if ((bVar6 & 1) != 0) {
    uVar2 = param_1[1];
  }
  sVar3 = uVar1;
  if (uVar2 <= uVar1) {
    sVar3 = uVar2;
  }
  iVar16 = iVar9 + 3;
  if (sVar3 == 0) {
LAB_006d3c14:
    if (uVar1 <= uVar2) goto LAB_006d3cb8;
    pvVar17 = (void *)param_1[2];
  }
  else {
    pvVar12 = (void *)param_2[2];
    pvVar17 = (void *)param_1[2];
    if ((bVar5 & 1) == 0) {
      pvVar12 = (void *)((long)param_2 + 1);
    }
    pvVar4 = pvVar17;
    if ((bVar6 & 1) == 0) {
      pvVar4 = (void *)((long)param_1 + 1);
    }
    iVar10 = memcmp(pvVar4,pvVar12,sVar3);
    if (iVar10 == 0) goto LAB_006d3c14;
    if (-1 < iVar10) goto LAB_006d3cb8;
  }
  uVar7 = *(undefined *)((long)param_1 + 1);
  *param_1 = 0;
  uVar13 = param_1[1];
  param_1[1] = 0;
  param_1[2] = 0;
  uVar18 = *param_2;
  uVar14 = param_2[2];
  local_78 = (undefined6)*(undefined8 *)((long)param_1 + 2);
  uVar15 = param_1[5];
  uStack_72 = (undefined2)uVar13;
  param_1[1] = param_2[1];
  *param_1 = uVar18;
  uVar19 = param_1[4];
  uVar18 = param_1[3];
  param_1[2] = uVar14;
  uVar20 = param_2[3];
  *(undefined2 *)param_2 = 0;
  uVar14 = param_2[5];
  param_1[4] = param_2[4];
  param_1[3] = uVar20;
  param_1[5] = uVar14;
  if ((*(byte *)param_2 & 1) != 0) {
    operator_delete((void *)param_2[2]);
  }
  *(undefined *)((long)param_2 + 1) = uVar7;
  *(byte *)param_2 = bVar6;
  param_2[2] = pvVar17;
  *(undefined8 *)((long)param_2 + 2) = CONCAT26(uStack_72,local_78);
  param_2[1] = uVar13;
  param_2[4] = uVar19;
  param_2[3] = uVar18;
  param_2[5] = uVar15;
  iVar16 = iVar9 + 4;
LAB_006d3cb8:
  if (*(long *)(lVar8 + 0x28) != lVar11) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar16;
}


