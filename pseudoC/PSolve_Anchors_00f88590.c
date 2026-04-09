// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: PSolve_Anchors
// Entry Point: 00f88590
// Size: 616 bytes
// Signature: undefined __cdecl PSolve_Anchors(btSoftBody * param_1, float param_2, float param_3)


/* btSoftBody::PSolve_Anchors(btSoftBody*, float, float) */

void btSoftBody::PSolve_Anchors(btSoftBody *param_1,float param_2,float param_3)

{
  ulong uVar1;
  float *pfVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  
  uVar1 = (ulong)*(uint *)(param_1 + 0x3f4);
  if (0 < (int)*(uint *)(param_1 + 0x3f4)) {
    fVar5 = *(float *)(param_1 + 0x1a8) * param_2;
    uVar6 = *(undefined4 *)(param_1 + 0x240);
    pfVar2 = (float *)(*(long *)(param_1 + 0x400) + 0x34);
    do {
      lVar3 = *(long *)(pfVar2 + -7);
      fVar7 = pfVar2[-0xb];
      fVar9 = pfVar2[-10];
      fVar12 = pfVar2[-9];
      lVar4 = *(long *)(pfVar2 + -0xd);
      uVar13 = NEON_fmadd(*(undefined4 *)(lVar3 + 0x1c),fVar9,*(float *)(lVar3 + 0x18) * fVar7);
      uVar10 = NEON_fmadd(*(undefined4 *)(lVar3 + 0xc),fVar9,*(float *)(lVar3 + 8) * fVar7);
      uVar8 = NEON_fmadd(*(undefined4 *)(lVar3 + 0x2c),fVar9,*(float *)(lVar3 + 0x28) * fVar7);
      fVar14 = (float)NEON_fmadd(*(undefined4 *)(lVar3 + 0x20),fVar12,uVar13);
      fVar11 = (float)NEON_fmadd(*(undefined4 *)(lVar3 + 0x10),fVar12,uVar10);
      fVar7 = (float)NEON_fmadd(*(undefined4 *)(lVar3 + 0x30),fVar12,uVar8);
      fVar9 = (float)NEON_fnmsub(pfVar2[9],*(float *)(lVar3 + 0x194),
                                 pfVar2[10] * *(float *)(lVar3 + 400));
      fVar15 = (float)NEON_fnmsub(*(float *)(lVar3 + 0x18c),pfVar2[10],
                                  pfVar2[8] * *(float *)(lVar3 + 0x194));
      fVar12 = (float)NEON_fnmsub(pfVar2[8],*(float *)(lVar3 + 400),
                                  *(float *)(lVar3 + 0x18c) * pfVar2[9]);
      fVar18 = *(float *)(lVar4 + 0x10);
      fVar19 = *(float *)(lVar4 + 0x14);
      fVar9 = (float)NEON_fmadd(fVar9 - *(float *)(lVar3 + 0x17c),uVar6,fVar18);
      fVar16 = (float)NEON_fmadd(fVar15 - *(float *)(lVar3 + 0x180),uVar6,fVar19);
      fVar15 = *(float *)(lVar4 + 0x18);
      fVar12 = (float)NEON_fmadd(fVar12 - *(float *)(lVar3 + 0x184),uVar6,fVar15);
      fVar11 = (float)NEON_fmadd((fVar11 + *(float *)(lVar3 + 0x38)) - fVar18,fVar5,
                                 *(float *)(lVar4 + 0x20) - fVar9);
      uVar13 = NEON_fmadd((fVar14 + *(float *)(lVar3 + 0x3c)) - fVar19,fVar5,
                          *(float *)(lVar4 + 0x24) - fVar16);
      fVar9 = pfVar2[-5];
      uVar17 = NEON_fmadd((fVar7 + *(float *)(lVar3 + 0x40)) - fVar15,fVar5,
                          *(float *)(lVar4 + 0x28) - fVar12);
      uVar10 = NEON_fmadd(pfVar2[1],uVar13,*pfVar2 * fVar11);
      uVar8 = NEON_fmadd(pfVar2[5],uVar13,pfVar2[4] * fVar11);
      uVar13 = NEON_fmadd(pfVar2[-3],uVar13,pfVar2[-4] * fVar11);
      fVar14 = (float)NEON_fmadd(pfVar2[2],uVar17,uVar10);
      fVar11 = (float)NEON_fmadd(pfVar2[6],uVar17,uVar8);
      fVar12 = (float)NEON_fmadd(uVar17,pfVar2[-2],uVar13);
      fVar7 = pfVar2[0xc];
      uVar13 = NEON_fmadd(fVar9 * fVar14,fVar7,fVar19);
      uVar10 = NEON_fmadd(fVar11 * fVar9,fVar7,fVar15);
      uVar8 = NEON_fmadd(fVar7,fVar9 * fVar12,fVar18);
      *(undefined4 *)(lVar4 + 0x14) = uVar13;
      *(undefined4 *)(lVar4 + 0x10) = uVar8;
      *(undefined4 *)(lVar4 + 0x18) = uVar10;
      fVar7 = *(float *)(lVar3 + 0x19c);
      if (fVar7 != 0.0) {
        fVar15 = *(float *)(lVar3 + 0x1a8) * -(fVar11 * fVar9);
        uVar8 = NEON_fmadd(fVar7 * -(fVar11 * fVar9),*(float *)(lVar3 + 0x1a8),
                           *(undefined4 *)(lVar3 + 0x184));
        *(undefined4 *)(lVar3 + 0x184) = uVar8;
        fVar16 = (float)*(undefined8 *)(lVar3 + 0x1a0);
        fVar19 = (float)((ulong)*(undefined8 *)(lVar3 + 0x1a0) >> 0x20);
        fVar11 = -(fVar9 * fVar14) * fVar19;
        fVar18 = -(fVar9 * fVar12) * fVar16;
        *(ulong *)(lVar3 + 0x17c) =
             CONCAT44((float)((ulong)*(undefined8 *)(lVar3 + 0x17c) >> 0x20) +
                      fVar19 * -(fVar9 * fVar14) * fVar7,
                      (float)*(undefined8 *)(lVar3 + 0x17c) + fVar16 * -(fVar9 * fVar12) * fVar7);
        fVar7 = (float)NEON_fnmsub(fVar15,pfVar2[9],pfVar2[10] * fVar11);
        fVar12 = (float)NEON_fnmsub(pfVar2[10],fVar18,pfVar2[8] * fVar15);
        fVar9 = (float)NEON_fnmsub(pfVar2[8],fVar11,pfVar2[9] * fVar18);
        uVar8 = NEON_fmadd(*(undefined4 *)(lVar3 + 0x170),fVar12,*(float *)(lVar3 + 0x16c) * fVar7);
        uVar8 = NEON_fmadd(*(undefined4 *)(lVar3 + 0x174),fVar9,uVar8);
        uVar8 = NEON_fmadd(*(undefined4 *)(lVar3 + 0x280),uVar8,*(undefined4 *)(lVar3 + 0x194));
        *(ulong *)(lVar3 + 0x18c) =
             CONCAT44((float)((ulong)*(undefined8 *)(lVar3 + 0x18c) >> 0x20) +
                      (*(float *)(lVar3 + 0x15c) * fVar7 + *(float *)(lVar3 + 0x160) * fVar12 +
                      *(float *)(lVar3 + 0x164) * fVar9) *
                      (float)((ulong)*(undefined8 *)(lVar3 + 0x278) >> 0x20),
                      (float)*(undefined8 *)(lVar3 + 0x18c) +
                      ((float)*(undefined8 *)(lVar3 + 0x14c) * fVar7 +
                       (float)*(undefined8 *)(lVar3 + 0x150) * fVar12 +
                      (float)*(undefined8 *)(lVar3 + 0x154) * fVar9) *
                      (float)*(undefined8 *)(lVar3 + 0x278));
        *(undefined4 *)(lVar3 + 0x194) = uVar8;
      }
      pfVar2 = pfVar2 + 0x1a;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}


