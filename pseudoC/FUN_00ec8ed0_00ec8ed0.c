// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00ec8ed0
// Entry Point: 00ec8ed0
// Size: 896 bytes
// Signature: undefined FUN_00ec8ed0(void)


ulong FUN_00ec8ed0(uint *param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5,
                  long *param_6)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  double dVar11;
  double dVar12;
  
  uVar9 = FUN_00ec8c24();
  uVar3 = *param_5;
  lVar1 = *param_6;
  lVar2 = param_6[1];
  uVar6 = uVar3 * 3;
  lVar10 = (ulong)*(uint *)((long)param_6 + 0x14) * 8;
  uVar4 = *param_4;
  uVar7 = uVar4 * 3;
  dVar11 = (*(double *)(lVar1 + (ulong)*(uint *)(lVar2 + (ulong)uVar6 * 4) * 0x18 + lVar10) +
            *(double *)(lVar1 + (ulong)*(uint *)(lVar2 + (ulong)(uVar6 + 1) * 4) * 0x18 + lVar10) +
           *(double *)(lVar1 + (ulong)*(uint *)(lVar2 + (ulong)(uVar6 + 2) * 4) * 0x18 + lVar10)) /
           3.0;
  dVar12 = (*(double *)(lVar1 + (ulong)*(uint *)(lVar2 + (ulong)uVar7 * 4) * 0x18 + lVar10) +
            *(double *)(lVar1 + (ulong)*(uint *)(lVar2 + (ulong)(uVar7 + 1) * 4) * 0x18 + lVar10) +
           *(double *)(lVar1 + (ulong)*(uint *)(lVar2 + (ulong)(uVar7 + 2) * 4) * 0x18 + lVar10)) /
           3.0;
  bVar5 = uVar3 < uVar4;
  if (dVar11 != dVar12) {
    bVar5 = dVar11 < dVar12;
  }
  if (bVar5) {
    *param_4 = uVar3;
    *param_5 = uVar4;
    uVar3 = *param_4;
    uVar6 = uVar3 * 3;
    lVar10 = (ulong)*(uint *)((long)param_6 + 0x14) * 8;
    uVar4 = *param_3;
    uVar7 = uVar4 * 3;
    dVar12 = (*(double *)(lVar1 + (ulong)*(uint *)(lVar2 + (ulong)uVar6 * 4) * 0x18 + lVar10) +
              *(double *)(lVar1 + (ulong)*(uint *)(lVar2 + (ulong)(uVar6 + 1) * 4) * 0x18 + lVar10)
             + *(double *)(lVar1 + (ulong)*(uint *)(lVar2 + (ulong)(uVar6 + 2) * 4) * 0x18 + lVar10)
             ) / 3.0;
    dVar11 = (*(double *)(lVar1 + (ulong)*(uint *)(lVar2 + (ulong)uVar7 * 4) * 0x18 + lVar10) +
              *(double *)(lVar1 + (ulong)*(uint *)(lVar2 + (ulong)(uVar7 + 1) * 4) * 0x18 + lVar10)
             + *(double *)(lVar1 + (ulong)*(uint *)(lVar2 + (ulong)(uVar7 + 2) * 4) * 0x18 + lVar10)
             ) / 3.0;
    bVar5 = uVar3 < uVar4;
    if (dVar12 != dVar11) {
      bVar5 = dVar12 < dVar11;
    }
    iVar8 = (int)uVar9;
    if (!bVar5) {
      return (ulong)(iVar8 + 1);
    }
    *param_3 = uVar3;
    *param_4 = uVar4;
    uVar3 = *param_3;
    uVar6 = uVar3 * 3;
    lVar10 = (ulong)*(uint *)((long)param_6 + 0x14) * 8;
    uVar4 = *param_2;
    uVar7 = uVar4 * 3;
    dVar11 = (*(double *)(lVar1 + (ulong)*(uint *)(lVar2 + (ulong)uVar6 * 4) * 0x18 + lVar10) +
              *(double *)(lVar1 + (ulong)*(uint *)(lVar2 + (ulong)(uVar6 + 1) * 4) * 0x18 + lVar10)
             + *(double *)(lVar1 + (ulong)*(uint *)(lVar2 + (ulong)(uVar6 + 2) * 4) * 0x18 + lVar10)
             ) / 3.0;
    dVar12 = (*(double *)(lVar1 + (ulong)*(uint *)(lVar2 + (ulong)uVar7 * 4) * 0x18 + lVar10) +
              *(double *)(lVar1 + (ulong)*(uint *)(lVar2 + (ulong)(uVar7 + 1) * 4) * 0x18 + lVar10)
             + *(double *)(lVar1 + (ulong)*(uint *)(lVar2 + (ulong)(uVar7 + 2) * 4) * 0x18 + lVar10)
             ) / 3.0;
    bVar5 = uVar3 < uVar4;
    if (dVar11 != dVar12) {
      bVar5 = dVar11 < dVar12;
    }
    if (!bVar5) {
      return (ulong)(iVar8 + 2);
    }
    *param_2 = uVar3;
    *param_3 = uVar4;
    uVar3 = *param_2;
    uVar6 = uVar3 * 3;
    lVar10 = (ulong)*(uint *)((long)param_6 + 0x14) * 8;
    uVar4 = *param_1;
    uVar7 = uVar4 * 3;
    dVar12 = (*(double *)(lVar1 + (ulong)*(uint *)(lVar2 + (ulong)uVar6 * 4) * 0x18 + lVar10) +
              *(double *)(lVar1 + (ulong)*(uint *)(lVar2 + (ulong)(uVar6 + 1) * 4) * 0x18 + lVar10)
             + *(double *)(lVar1 + (ulong)*(uint *)(lVar2 + (ulong)(uVar6 + 2) * 4) * 0x18 + lVar10)
             ) / 3.0;
    dVar11 = (*(double *)(lVar1 + (ulong)*(uint *)(lVar2 + (ulong)uVar7 * 4) * 0x18 + lVar10) +
              *(double *)(lVar1 + (ulong)*(uint *)(lVar2 + (ulong)(uVar7 + 1) * 4) * 0x18 + lVar10)
             + *(double *)(lVar1 + (ulong)*(uint *)(lVar2 + (ulong)(uVar7 + 2) * 4) * 0x18 + lVar10)
             ) / 3.0;
    bVar5 = uVar3 < uVar4;
    if (dVar12 != dVar11) {
      bVar5 = dVar12 < dVar11;
    }
    if (!bVar5) {
      return (ulong)(iVar8 + 3);
    }
    uVar9 = (ulong)(iVar8 + 4);
    *param_1 = uVar3;
    *param_2 = uVar4;
  }
  return uVar9;
}


