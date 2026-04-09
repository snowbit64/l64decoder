// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DecrSortEigenStuff
// Entry Point: 00ebe2b8
// Size: 528 bytes
// Signature: undefined DecrSortEigenStuff(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* FLOAT_MATH::Eigen<double>::DecrSortEigenStuff() */

void FLOAT_MATH::Eigen<double>::DecrSortEigenStuff(void)

{
  ulong uVar1;
  double *in_x0;
  byte bVar2;
  double *pdVar3;
  double *pdVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined8 uVar13;
  double dVar14;
  
  dVar9 = in_x0[2];
  in_x0[0xe] = 0.0;
  pdVar3 = in_x0 + 1;
  dVar5 = *pdVar3;
  dVar6 = in_x0[5];
  dVar7 = in_x0[4];
  dVar8 = in_x0[8];
  in_x0[9] = *in_x0;
  if (dVar9 == 0.0) {
    in_x0[0xc] = dVar5;
    dVar5 = 1.0;
    in_x0[10] = dVar7;
    in_x0[0xb] = dVar8;
    *in_x0 = 1.0;
    in_x0[4] = 1.0;
    in_x0[0xd] = dVar6;
    in_x0[2] = 0.0;
    in_x0[3] = 0.0;
    *pdVar3 = 0.0;
    in_x0[6] = 0.0;
    in_x0[7] = 0.0;
    in_x0[5] = 0.0;
  }
  else {
    in_x0[2] = 0.0;
    in_x0[3] = 0.0;
    *pdVar3 = 0.0;
    dVar11 = (double)NEON_fmadd(dVar5,dVar5,dVar9 * dVar9);
    in_x0[6] = 0.0;
    *in_x0 = 1.0;
    dVar12 = 1.0 / (double)(float)SQRT(dVar11);
    dVar14 = dVar5 * dVar12;
    dVar10 = dVar9 * dVar12;
    dVar5 = -(dVar5 * dVar12);
    in_x0[4] = dVar14;
    in_x0[5] = dVar10;
    in_x0[7] = dVar10;
    uVar13 = NEON_fmadd(dVar14 + dVar14,dVar6,(dVar8 - dVar7) * dVar10);
    dVar7 = (double)NEON_fmadd(dVar10,uVar13,dVar7);
    dVar8 = (double)NEON_fmsub(dVar10,uVar13,dVar8);
    dVar6 = (double)NEON_fmsub(dVar14,uVar13,dVar6);
    in_x0[10] = dVar7;
    in_x0[0xb] = dVar8;
    in_x0[0xc] = (double)(float)SQRT(dVar11);
    in_x0[0xd] = dVar6;
  }
  in_x0[8] = dVar5;
  *(bool *)(in_x0 + 0xf) = dVar9 == 0.0;
  QLAlgorithm();
  dVar8 = in_x0[9];
  dVar7 = in_x0[10];
  dVar5 = in_x0[0xb];
  dVar6 = dVar7;
  if (dVar7 <= dVar8) {
    dVar6 = dVar8;
  }
  uVar1 = 2;
  if (dVar5 <= dVar6) {
    uVar1 = (ulong)(dVar8 < dVar7);
  }
  bVar2 = *(byte *)(in_x0 + 0xf);
  if (uVar1 != 0) {
    if (dVar5 <= dVar6) {
      dVar5 = dVar6;
    }
    dVar9 = in_x0[uVar1];
    in_x0[uVar1] = *in_x0;
    bVar2 = bVar2 ^ 1;
    pdVar3 = in_x0 + 3;
    dVar10 = pdVar3[uVar1];
    pdVar3[uVar1] = *pdVar3;
    in_x0[9] = dVar5;
    pdVar4 = in_x0 + 6;
    dVar5 = *pdVar4;
    (in_x0 + 9)[uVar1] = dVar8;
    dVar6 = pdVar4[uVar1];
    pdVar4[uVar1] = dVar5;
    dVar7 = in_x0[10];
    dVar5 = in_x0[0xb];
    *pdVar3 = dVar10;
    *in_x0 = dVar9;
    *pdVar4 = dVar6;
    *(byte *)(in_x0 + 0xf) = bVar2;
  }
  if (dVar7 < dVar5) {
    bVar2 = bVar2 ^ 1;
    in_x0[0xb] = dVar7;
    dVar6 = in_x0[1];
    in_x0[10] = dVar5;
    *(byte *)(in_x0 + 0xf) = bVar2;
    in_x0[1] = in_x0[2];
    dVar7 = in_x0[4];
    in_x0[2] = dVar6;
    in_x0[4] = in_x0[5];
    dVar5 = in_x0[7];
    in_x0[5] = dVar7;
    in_x0[7] = in_x0[8];
    in_x0[8] = dVar5;
  }
  if (bVar2 == 0) {
    *in_x0 = -*in_x0;
    in_x0[3] = -in_x0[3];
    in_x0[6] = -in_x0[6];
    return;
  }
  return;
}


