// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e1327c
// Entry Point: 00e1327c
// Size: 340 bytes
// Signature: undefined FUN_00e1327c(void)


void FUN_00e1327c(long param_1,long param_2,int param_3,int param_4,undefined8 *param_5,int param_6,
                 long param_7)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  
  iVar2 = param_4;
  if (param_6 <= param_4) {
    iVar2 = param_6 + -1;
  }
  param_5[6] = 0;
  param_5[3] = 0;
  param_5[2] = 0;
  param_5[5] = 0;
  param_5[4] = 0;
  param_5[1] = 0;
  *param_5 = 0;
  *(int *)param_5 = param_3;
  *(int *)((long)param_5 + 4) = param_4;
  if (iVar2 < param_3) {
    iVar14 = 0;
    iVar13 = 0;
    iVar11 = 0;
    iVar10 = 0;
    iVar9 = 0;
    iVar3 = 0;
    iVar8 = 0;
    iVar7 = 0;
    iVar6 = 0;
    iVar12 = 0;
    uVar15 = 0;
  }
  else {
    uVar15 = 0;
    iVar12 = 0;
    iVar6 = 0;
    iVar7 = 0;
    iVar8 = 0;
    iVar3 = 0;
    iVar9 = 0;
    iVar10 = 0;
    iVar11 = 0;
    iVar13 = 0;
    iVar14 = 0;
    lVar5 = (long)param_3;
    do {
      fVar16 = *(float *)(param_1 + lVar5 * 4);
      fVar17 = (float)NEON_fmadd(fVar16,0x40ea0ea1,0x447fe000);
      uVar1 = (int)fVar17 & ((int)fVar17 >> 0x1f ^ 0xffffffffU);
      if (0x3fe < uVar1) {
        uVar1 = 0x3ff;
      }
      if (uVar1 != 0) {
        iVar4 = (int)lVar5;
        if (*(float *)(param_2 + lVar5 * 4) + *(float *)(param_7 + 0x458) < fVar16) {
          iVar6 = iVar6 + iVar4 * iVar4;
          iVar8 = iVar8 + iVar4;
          iVar12 = iVar12 + uVar1 * uVar1;
          iVar7 = uVar1 + iVar7;
          uVar15 = CONCAT44((int)((ulong)uVar15 >> 0x20) + 1,uVar1 * iVar4 + (int)uVar15);
        }
        else {
          iVar11 = iVar11 + iVar4 * iVar4;
          iVar14 = iVar14 + iVar4;
          iVar10 = iVar10 + uVar1 * uVar1;
          iVar13 = uVar1 + iVar13;
          iVar9 = iVar9 + uVar1 * iVar4;
          iVar3 = iVar3 + 1;
        }
      }
      lVar5 = lVar5 + 1;
    } while ((long)iVar2 + 1 != lVar5);
  }
  *(int *)(param_5 + 1) = iVar14;
  *(int *)((long)param_5 + 0xc) = iVar13;
  *(int *)(param_5 + 2) = iVar11;
  *(int *)((long)param_5 + 0x14) = iVar10;
  *(int *)(param_5 + 3) = iVar9;
  *(int *)((long)param_5 + 0x1c) = iVar3;
  *(int *)(param_5 + 4) = iVar8;
  *(int *)((long)param_5 + 0x24) = iVar7;
  *(int *)(param_5 + 5) = iVar6;
  *(int *)((long)param_5 + 0x2c) = iVar12;
  param_5[6] = uVar15;
  return;
}


