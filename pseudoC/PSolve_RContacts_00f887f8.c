// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: PSolve_RContacts
// Entry Point: 00f887f8
// Size: 688 bytes
// Signature: undefined __cdecl PSolve_RContacts(btSoftBody * param_1, float param_2, float param_3)


/* btSoftBody::PSolve_RContacts(btSoftBody*, float, float) */

void btSoftBody::PSolve_RContacts(btSoftBody *param_1,float param_2,float param_3)

{
  long lVar1;
  ulong uVar2;
  float *pfVar3;
  long lVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 in_register_00005024;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  undefined4 uVar20;
  float fVar21;
  
  fVar5 = *(float *)(param_1 + 0x240);
  uVar6 = (**(code **)(**(long **)(param_1 + 200) + 0x60))
                    (fVar5,CONCAT44(in_register_00005024,param_3));
  uVar2 = (ulong)*(uint *)(param_1 + 0x414);
  if (0 < (int)*(uint *)(param_1 + 0x414)) {
    pfVar3 = (float *)(*(long *)(param_1 + 0x420) + 0x38);
    do {
      lVar4 = *(long *)(pfVar3 + -0xe);
      if ((*(byte *)(lVar4 + 0xe0) >> 2 & 1) == 0) {
        lVar1 = 0;
        if ((*(byte *)(lVar4 + 0x100) & 2) != 0) {
          lVar1 = lVar4;
        }
        if (lVar1 == 0) {
          fVar7 = 0.0;
          fVar9 = 0.0;
          fVar11 = 0.0;
        }
        else {
          fVar9 = (float)((ulong)*(undefined8 *)(lVar1 + 400) >> 0x20);
          fVar10 = (float)((ulong)*(undefined8 *)(pfVar3 + 9) >> 0x20);
          fVar11 = (float)*(undefined8 *)(lVar1 + 400);
          fVar8 = (float)*(undefined8 *)(pfVar3 + 9);
          fVar7 = (-(fVar9 * fVar8) + fVar11 * fVar10 + (float)*(undefined8 *)(lVar1 + 0x17c)) *
                  fVar5;
          fVar9 = (-(*(float *)(lVar1 + 0x18c) * fVar10) + fVar9 * pfVar3[8] +
                  (float)((ulong)*(undefined8 *)(lVar1 + 0x17c) >> 0x20)) * fVar5;
          fVar11 = (-(pfVar3[8] * fVar11) + *(float *)(lVar1 + 0x18c) * fVar8 +
                   *(float *)(lVar1 + 0x184)) * fVar5;
        }
        lVar4 = *(long *)(pfVar3 + -6);
        fVar10 = *(float *)(lVar4 + 0x10);
        fVar8 = *(float *)(lVar4 + 0x14);
        fVar12 = fVar10 - (fVar7 + *(float *)(lVar4 + 0x20));
        fVar13 = pfVar3[-0xc];
        fVar15 = pfVar3[-0xb];
        fVar14 = fVar8 - (fVar9 + *(float *)(lVar4 + 0x24));
        fVar7 = *(float *)(lVar4 + 0x18);
        fVar11 = fVar7 - (fVar11 + *(float *)(lVar4 + 0x28));
        fVar9 = pfVar3[-10];
        uVar16 = NEON_fmadd(fVar15,fVar14,fVar13 * fVar12);
        fVar17 = (float)NEON_fmadd(fVar9,fVar11,uVar16);
        if (fVar17 <= 1.192093e-07) {
          fVar19 = pfVar3[0xd];
          uVar20 = NEON_fnmsub(fVar17,fVar15,fVar14);
          fVar21 = pfVar3[0xc];
          uVar16 = NEON_fmadd(fVar15,fVar8,fVar13 * fVar10);
          uVar20 = NEON_fmadd(fVar19,uVar20,fVar14);
          fVar14 = (float)NEON_fmadd(fVar9,fVar7,uVar16);
          uVar16 = NEON_fnmsub(fVar17,fVar13,fVar12);
          uVar18 = NEON_fnmsub(fVar17,fVar9,fVar11);
          fVar14 = (float)NEON_fminnm(fVar14 + pfVar3[-8],uVar6);
          uVar16 = NEON_fmadd(fVar19,uVar16,fVar12);
          fVar14 = fVar14 * pfVar3[0xe];
          fVar12 = (float)NEON_fmadd(fVar14,fVar13,uVar16);
          uVar16 = NEON_fmadd(fVar19,uVar18,fVar11);
          fVar13 = (float)NEON_fmadd(fVar15,fVar14,uVar20);
          fVar12 = fVar12 * param_2;
          fVar11 = (float)NEON_fmadd(fVar9,fVar14,uVar16);
          fVar13 = fVar13 * param_2;
          fVar11 = fVar11 * param_2;
          uVar16 = NEON_fmadd(fVar13,pfVar3[-3],fVar12 * pfVar3[-4]);
          uVar20 = NEON_fmadd(pfVar3[1],fVar13,*pfVar3 * fVar12);
          uVar18 = NEON_fmadd(pfVar3[5],fVar13,pfVar3[4] * fVar12);
          fVar9 = (float)NEON_fmadd(fVar11,pfVar3[-2],uVar16);
          fVar12 = (float)NEON_fmadd(pfVar3[2],fVar11,uVar20);
          fVar11 = (float)NEON_fmadd(pfVar3[6],fVar11,uVar18);
          uVar20 = NEON_fmsub(fVar21,fVar9,fVar10);
          uVar16 = NEON_fmsub(fVar21,fVar12,fVar8);
          uVar18 = NEON_fmsub(fVar21,fVar11,fVar7);
          *(undefined4 *)(lVar4 + 0x10) = uVar20;
          *(undefined4 *)(lVar4 + 0x14) = uVar16;
          *(undefined4 *)(lVar4 + 0x18) = uVar18;
          if ((lVar1 != 0) && (fVar7 = *(float *)(lVar1 + 0x19c), fVar7 != 0.0)) {
            fVar14 = *(float *)(lVar1 + 0x1a8) * fVar11;
            uVar16 = NEON_fmadd(fVar11 * fVar7,*(float *)(lVar1 + 0x1a8),
                                *(undefined4 *)(lVar1 + 0x184));
            *(undefined4 *)(lVar1 + 0x184) = uVar16;
            fVar8 = (float)*(undefined8 *)(lVar1 + 0x1a0);
            fVar13 = (float)((ulong)*(undefined8 *)(lVar1 + 0x1a0) >> 0x20);
            fVar11 = fVar12 * fVar13;
            fVar10 = fVar9 * fVar8;
            *(ulong *)(lVar1 + 0x17c) =
                 CONCAT44((float)((ulong)*(undefined8 *)(lVar1 + 0x17c) >> 0x20) +
                          fVar13 * fVar12 * fVar7,
                          (float)*(undefined8 *)(lVar1 + 0x17c) + fVar8 * fVar9 * fVar7);
            fVar8 = (float)NEON_fnmsub(fVar14,pfVar3[9],pfVar3[10] * fVar11);
            fVar9 = (float)NEON_fnmsub(pfVar3[10],fVar10,pfVar3[8] * fVar14);
            fVar7 = (float)NEON_fnmsub(pfVar3[8],fVar11,pfVar3[9] * fVar10);
            uVar16 = NEON_fmadd(*(undefined4 *)(lVar1 + 0x170),fVar9,
                                *(float *)(lVar1 + 0x16c) * fVar8);
            uVar16 = NEON_fmadd(*(undefined4 *)(lVar1 + 0x174),fVar7,uVar16);
            uVar16 = NEON_fmadd(*(undefined4 *)(lVar1 + 0x280),uVar16,*(undefined4 *)(lVar1 + 0x194)
                               );
            *(ulong *)(lVar1 + 0x18c) =
                 CONCAT44((float)((ulong)*(undefined8 *)(lVar1 + 0x18c) >> 0x20) +
                          (*(float *)(lVar1 + 0x15c) * fVar8 + *(float *)(lVar1 + 0x160) * fVar9 +
                          *(float *)(lVar1 + 0x164) * fVar7) *
                          (float)((ulong)*(undefined8 *)(lVar1 + 0x278) >> 0x20),
                          (float)*(undefined8 *)(lVar1 + 0x18c) +
                          ((float)*(undefined8 *)(lVar1 + 0x14c) * fVar8 +
                           (float)*(undefined8 *)(lVar1 + 0x150) * fVar9 +
                          (float)*(undefined8 *)(lVar1 + 0x154) * fVar7) *
                          (float)*(undefined8 *)(lVar1 + 0x278));
            *(undefined4 *)(lVar1 + 0x194) = uVar16;
          }
        }
      }
      pfVar3 = pfVar3 + 0x1e;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return;
}


