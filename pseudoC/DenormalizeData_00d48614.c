// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DenormalizeData
// Entry Point: 00d48614
// Size: 320 bytes
// Signature: undefined DenormalizeData(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* HACD::HACD::DenormalizeData() */

void HACD::HACD::DenormalizeData(void)

{
  undefined auVar1 [16];
  bool bVar2;
  long in_x0;
  ulong uVar3;
  long lVar4;
  double *pdVar5;
  ulong uVar6;
  ulong uVar7;
  double *pdVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  uVar3 = *(ulong *)(in_x0 + 0x60);
  if (uVar3 == 0) {
    return;
  }
  if (*(double *)(in_x0 + 0xa0) == 0.0) {
    return;
  }
  pdVar5 = *(double **)(in_x0 + 0x18);
  dVar9 = *(double *)(in_x0 + 0xa0) / (*(double *)(in_x0 + 0xa8) + *(double *)(in_x0 + 0xa8));
  if (1 < uVar3) {
    uVar7 = uVar3 - 1;
    uVar6 = 0;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar7;
    bVar2 = SUB168(auVar1 * ZEXT816(0x18),8) != 0;
    if (((((pdVar5 + 2 + uVar7 * 3 < pdVar5 + 2) || (bVar2)) ||
         (pdVar5 + 1 + uVar7 * 3 < pdVar5 + 1)) || ((bVar2 || (pdVar5 + uVar7 * 3 < pdVar5)))) ||
       (bVar2)) goto LAB_00d48644;
    if (((double *)(in_x0 + 0xe0U) <= pdVar5) || (pdVar5 + uVar3 * 3 <= (double *)(in_x0 + 200U))) {
      uVar6 = uVar3 & 0xfffffffffffffffe;
      uVar7 = uVar6;
      pdVar8 = pdVar5;
      do {
        uVar7 = uVar7 - 2;
        dVar11 = *(double *)(in_x0 + 200);
        dVar10 = *(double *)(in_x0 + 0xd0);
        dVar12 = *(double *)(in_x0 + 0xd8);
        *pdVar8 = *pdVar8 * dVar9 + dVar11;
        pdVar8[1] = pdVar8[1] * dVar9 + dVar10;
        pdVar8[2] = pdVar8[2] * dVar9 + dVar12;
        pdVar8[3] = pdVar8[3] * dVar9 + dVar11;
        pdVar8[4] = pdVar8[4] * dVar9 + dVar10;
        pdVar8[5] = pdVar8[5] * dVar9 + dVar12;
        pdVar8 = pdVar8 + 6;
      } while (uVar7 != 0);
      if (uVar3 == uVar6) {
        return;
      }
      goto LAB_00d48644;
    }
  }
  uVar6 = 0;
LAB_00d48644:
  lVar4 = uVar3 - uVar6;
  pdVar5 = pdVar5 + uVar6 * 3 + 2;
  do {
    lVar4 = lVar4 + -1;
    dVar11 = *(double *)(in_x0 + 200);
    dVar10 = *(double *)(in_x0 + 0xd8);
    pdVar5[-1] = pdVar5[-1] * dVar9 + *(double *)(in_x0 + 0xd0);
    pdVar5[-2] = pdVar5[-2] * dVar9 + dVar11;
    *pdVar5 = dVar9 * *pdVar5 + dVar10;
    pdVar5 = pdVar5 + 3;
  } while (lVar4 != 0);
  return;
}


