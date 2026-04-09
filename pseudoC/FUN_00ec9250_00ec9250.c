// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00ec9250
// Entry Point: 00ec9250
// Size: 948 bytes
// Signature: undefined FUN_00ec9250(void)


bool FUN_00ec9250(uint *param_1,uint *param_2,long *param_3)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  uint *puVar13;
  uint uVar14;
  uint *puVar15;
  double dVar16;
  double dVar17;
  
  switch((long)param_2 - (long)param_1 >> 2) {
  case 0:
  case 1:
    return true;
  case 2:
    uVar14 = param_2[-1];
    lVar11 = *param_3;
    lVar1 = param_3[1];
    uVar5 = uVar14 * 3;
    lVar12 = (ulong)*(uint *)((long)param_3 + 0x14) * 8;
    uVar2 = *param_1;
    uVar6 = uVar2 * 3;
    dVar16 = (*(double *)(lVar11 + (ulong)*(uint *)(lVar1 + (ulong)uVar5 * 4) * 0x18 + lVar12) +
              *(double *)(lVar11 + (ulong)*(uint *)(lVar1 + (ulong)(uVar5 + 1) * 4) * 0x18 + lVar12)
             + *(double *)
                (lVar11 + (ulong)*(uint *)(lVar1 + (ulong)(uVar5 + 2) * 4) * 0x18 + lVar12)) / 3.0;
    dVar17 = (*(double *)(lVar11 + (ulong)*(uint *)(lVar1 + (ulong)uVar6 * 4) * 0x18 + lVar12) +
              *(double *)(lVar11 + (ulong)*(uint *)(lVar1 + (ulong)(uVar6 + 1) * 4) * 0x18 + lVar12)
             + *(double *)
                (lVar11 + (ulong)*(uint *)(lVar1 + (ulong)(uVar6 + 2) * 4) * 0x18 + lVar12)) / 3.0;
    bVar4 = uVar14 < uVar2;
    if (dVar16 != dVar17) {
      bVar4 = dVar16 < dVar17;
    }
    if (!bVar4) {
      return true;
    }
    *param_1 = uVar14;
    param_2[-1] = uVar2;
    return true;
  case 3:
    FUN_00ec7f8c(param_1,param_1 + 1,param_2 + -1,param_3);
    return true;
  case 4:
    FUN_00ec8c24(param_1,param_1 + 1,param_1 + 2,param_2 + -1,param_3);
    break;
  case 5:
    FUN_00ec8ed0(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1,param_3);
    return true;
  default:
    FUN_00ec7f8c(param_1,param_1 + 1,param_1 + 2,param_3);
    if (param_1 + 3 != param_2) {
      lVar1 = *param_3;
      lVar12 = param_3[1];
      iVar10 = 0;
      lVar11 = 0xc;
      puVar7 = param_1 + 3;
      puVar15 = param_1 + 2;
      do {
        puVar13 = puVar7;
        uVar2 = *puVar13;
        uVar14 = *puVar15;
        uVar5 = uVar2 * 3;
        lVar8 = (ulong)*(uint *)((long)param_3 + 0x14) * 8;
        uVar6 = uVar14 * 3;
        dVar16 = (*(double *)(lVar1 + (ulong)*(uint *)(lVar12 + (ulong)uVar5 * 4) * 0x18 + lVar8) +
                  *(double *)
                   (lVar1 + (ulong)*(uint *)(lVar12 + (ulong)(uVar5 + 1) * 4) * 0x18 + lVar8) +
                 *(double *)
                  (lVar1 + (ulong)*(uint *)(lVar12 + (ulong)(uVar5 + 2) * 4) * 0x18 + lVar8)) / 3.0;
        dVar17 = (*(double *)(lVar1 + (ulong)*(uint *)(lVar12 + (ulong)uVar6 * 4) * 0x18 + lVar8) +
                  *(double *)
                   (lVar1 + (ulong)*(uint *)(lVar12 + (ulong)(uVar6 + 1) * 4) * 0x18 + lVar8) +
                 *(double *)
                  (lVar1 + (ulong)*(uint *)(lVar12 + (ulong)(uVar6 + 2) * 4) * 0x18 + lVar8)) / 3.0;
        bVar4 = uVar2 < uVar14;
        if (dVar16 != dVar17) {
          bVar4 = dVar16 < dVar17;
        }
        lVar8 = lVar11;
        if (bVar4) {
          do {
            lVar3 = lVar8 + -4;
            *(uint *)((long)param_1 + lVar8) = uVar14;
            if (lVar3 == 0) {
              *param_1 = uVar2;
              goto joined_r0x00ec93c8;
            }
            lVar9 = (ulong)*(uint *)((long)param_3 + 0x14) * 8;
            uVar14 = *(uint *)((long)param_1 + lVar8 + -8);
            uVar6 = uVar14 * 3;
            dVar16 = (*(double *)
                       (lVar1 + (ulong)*(uint *)(lVar12 + (ulong)uVar5 * 4) * 0x18 + lVar9) +
                      *(double *)
                       (lVar1 + (ulong)*(uint *)(lVar12 + (ulong)(uVar5 + 1) * 4) * 0x18 + lVar9) +
                     *(double *)
                      (lVar1 + (ulong)*(uint *)(lVar12 + (ulong)(uVar5 + 2) * 4) * 0x18 + lVar9)) /
                     3.0;
            dVar17 = (*(double *)
                       (lVar1 + (ulong)*(uint *)(lVar12 + (ulong)uVar6 * 4) * 0x18 + lVar9) +
                      *(double *)
                       (lVar1 + (ulong)*(uint *)(lVar12 + (ulong)(uVar6 + 1) * 4) * 0x18 + lVar9) +
                     *(double *)
                      (lVar1 + (ulong)*(uint *)(lVar12 + (ulong)(uVar6 + 2) * 4) * 0x18 + lVar9)) /
                     3.0;
            bVar4 = uVar2 < uVar14;
            if (dVar16 != dVar17) {
              bVar4 = dVar16 < dVar17;
            }
            lVar8 = lVar3;
          } while (bVar4);
          *(uint *)((long)param_1 + lVar3) = uVar2;
joined_r0x00ec93c8:
          iVar10 = iVar10 + 1;
          if (iVar10 == 8) {
            return puVar13 + 1 == param_2;
          }
        }
        lVar11 = lVar11 + 4;
        puVar7 = puVar13 + 1;
        puVar15 = puVar13;
      } while (puVar13 + 1 != param_2);
    }
  }
  return true;
}


