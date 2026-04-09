// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00ec7f8c
// Entry Point: 00ec7f8c
// Size: 728 bytes
// Signature: undefined FUN_00ec7f8c(void)


undefined8 FUN_00ec7f8c(uint *param_1,uint *param_2,uint *param_3,long *param_4)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
  uVar3 = *param_2;
  lVar1 = *param_4;
  lVar2 = param_4[1];
  uVar5 = uVar3 * 3;
  lVar10 = (ulong)*(uint *)((long)param_4 + 0x14) * 8;
  uVar4 = *param_1;
  uVar8 = uVar4 * 3;
  dVar11 = (*(double *)(lVar1 + (ulong)*(uint *)(lVar2 + (ulong)uVar5 * 4) * 0x18 + lVar10) +
            *(double *)(lVar1 + (ulong)*(uint *)(lVar2 + (ulong)(uVar5 + 1) * 4) * 0x18 + lVar10) +
           *(double *)(lVar1 + (ulong)*(uint *)(lVar2 + (ulong)(uVar5 + 2) * 4) * 0x18 + lVar10)) /
           3.0;
  uVar5 = *param_3;
  uVar9 = uVar5 * 3;
  dVar13 = (*(double *)(lVar1 + (ulong)*(uint *)(lVar2 + (ulong)uVar8 * 4) * 0x18 + lVar10) +
            *(double *)(lVar1 + (ulong)*(uint *)(lVar2 + (ulong)(uVar8 + 1) * 4) * 0x18 + lVar10) +
           *(double *)(lVar1 + (ulong)*(uint *)(lVar2 + (ulong)(uVar8 + 2) * 4) * 0x18 + lVar10)) /
           3.0;
  dVar12 = (*(double *)(lVar1 + (ulong)*(uint *)(lVar2 + (ulong)uVar9 * 4) * 0x18 + lVar10) +
            *(double *)(lVar1 + (ulong)*(uint *)(lVar2 + (ulong)(uVar9 + 1) * 4) * 0x18 + lVar10) +
           *(double *)(lVar1 + (ulong)*(uint *)(lVar2 + (ulong)(uVar9 + 2) * 4) * 0x18 + lVar10)) /
           3.0;
  bVar6 = uVar3 < uVar4;
  if (dVar11 != dVar13) {
    bVar6 = dVar11 < dVar13;
  }
  bVar7 = uVar5 < uVar3;
  if (dVar12 != dVar11) {
    bVar7 = dVar12 < dVar11;
  }
  if (bVar6) {
    if (bVar7) {
      *param_1 = uVar5;
      *param_3 = uVar4;
      return 1;
    }
    *param_1 = uVar3;
    *param_2 = uVar4;
    uVar3 = *param_3;
    uVar5 = uVar3 * 3;
    lVar10 = (ulong)*(uint *)((long)param_4 + 0x14) * 8;
    dVar11 = (*(double *)(lVar1 + (ulong)*(uint *)(lVar2 + (ulong)uVar5 * 4) * 0x18 + lVar10) +
              *(double *)(lVar1 + (ulong)*(uint *)(lVar2 + (ulong)(uVar5 + 1) * 4) * 0x18 + lVar10)
             + *(double *)(lVar1 + (ulong)*(uint *)(lVar2 + (ulong)(uVar5 + 2) * 4) * 0x18 + lVar10)
             ) / 3.0;
    dVar12 = (*(double *)(lVar1 + (ulong)*(uint *)(lVar2 + (ulong)uVar8 * 4) * 0x18 + lVar10) +
              *(double *)(lVar1 + (ulong)*(uint *)(lVar2 + (ulong)(uVar8 + 1) * 4) * 0x18 + lVar10)
             + *(double *)(lVar1 + (ulong)*(uint *)(lVar2 + (ulong)(uVar8 + 2) * 4) * 0x18 + lVar10)
             ) / 3.0;
    bVar6 = uVar3 < uVar4;
    if (dVar11 != dVar12) {
      bVar6 = dVar11 < dVar12;
    }
    if (bVar6) {
      *param_2 = uVar3;
      *param_3 = uVar4;
      return 2;
    }
  }
  else {
    if (!bVar7) {
      return 0;
    }
    *param_2 = uVar5;
    *param_3 = uVar3;
    uVar3 = *param_2;
    uVar5 = uVar3 * 3;
    lVar10 = (ulong)*(uint *)((long)param_4 + 0x14) * 8;
    uVar4 = *param_1;
    uVar8 = uVar4 * 3;
    dVar11 = (*(double *)(lVar1 + (ulong)*(uint *)(lVar2 + (ulong)uVar5 * 4) * 0x18 + lVar10) +
              *(double *)(lVar1 + (ulong)*(uint *)(lVar2 + (ulong)(uVar5 + 1) * 4) * 0x18 + lVar10)
             + *(double *)(lVar1 + (ulong)*(uint *)(lVar2 + (ulong)(uVar5 + 2) * 4) * 0x18 + lVar10)
             ) / 3.0;
    dVar12 = (*(double *)(lVar1 + (ulong)*(uint *)(lVar2 + (ulong)uVar8 * 4) * 0x18 + lVar10) +
              *(double *)(lVar1 + (ulong)*(uint *)(lVar2 + (ulong)(uVar8 + 1) * 4) * 0x18 + lVar10)
             + *(double *)(lVar1 + (ulong)*(uint *)(lVar2 + (ulong)(uVar8 + 2) * 4) * 0x18 + lVar10)
             ) / 3.0;
    bVar6 = uVar3 < uVar4;
    if (dVar11 != dVar12) {
      bVar6 = dVar11 < dVar12;
    }
    if (bVar6) {
      *param_1 = uVar3;
      *param_2 = uVar4;
      return 2;
    }
  }
  return 1;
}


