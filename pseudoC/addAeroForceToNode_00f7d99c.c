// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addAeroForceToNode
// Entry Point: 00f7d99c
// Size: 892 bytes
// Signature: undefined __thiscall addAeroForceToNode(btSoftBody * this, btVector3 * param_1, int param_2)


/* btSoftBody::addAeroForceToNode(btVector3 const&, int) */

void __thiscall btSoftBody::addAeroForceToNode(btSoftBody *this,btVector3 *param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  
  fVar10 = *(float *)(this + 0x188);
  fVar11 = *(float *)(this + 0x184);
  if ((0.0 < fVar10) || (0.0 < fVar11)) {
    lVar2 = *(long *)(this + 0x380);
    fVar8 = *(float *)(lVar2 + (long)param_2 * 0x78 + 0x60);
    if ((0.0 < fVar8) && (uVar1 = *(uint *)(this + 0x178), (int)uVar1 < 4)) {
      lVar3 = (long)param_2;
      lVar4 = lVar2 + lVar3 * 0x78;
      fVar5 = *(float *)(lVar4 + 0x30);
      fVar6 = *(float *)(lVar4 + 0x34);
      fVar20 = fVar5 - *(float *)param_1;
      fVar19 = fVar6 - *(float *)(param_1 + 4);
      fVar7 = *(float *)(lVar4 + 0x38);
      fVar21 = fVar7 - *(float *)(param_1 + 8);
      uVar12 = NEON_fmadd(fVar19,fVar19,fVar20 * fVar20);
      fVar17 = (float)NEON_fmadd(fVar21,fVar21,uVar12);
      if (1.192093e-07 < fVar17) {
        lVar4 = lVar2 + lVar3 * 0x78;
        fVar25 = *(float *)(lVar4 + 0x50);
        fVar24 = *(float *)(lVar4 + 0x54);
        fVar23 = *(float *)(lVar4 + 0x58);
        fVar13 = 1.0 / SQRT(fVar17);
        fVar15 = fVar13 * fVar20;
        fVar14 = fVar13 * fVar19;
        fVar13 = fVar13 * fVar21;
        if ((uVar1 < 2) || (uVar1 == 3)) {
          uVar12 = NEON_fmadd(fVar24,fVar19,fVar25 * fVar20);
          fVar16 = (float)NEON_fmadd(fVar23,fVar21,uVar12);
          fVar18 = -1.0;
          if (0.0 <= fVar16) {
            fVar18 = 1.0;
          }
          uVar12 = NEON_fmadd(fVar18 * fVar24,fVar19,fVar18 * fVar25 * fVar20);
          fVar19 = (float)NEON_fmadd(fVar18 * fVar23,fVar21,uVar12);
          if (0.0 < fVar19) {
            fVar20 = fVar17 * **(float **)(this + 0x348) * -0.5 * fVar19 *
                     *(float *)(lVar2 + lVar3 * 0x78 + 100);
            fVar11 = fVar20 * fVar11;
            fVar20 = fVar20 * fVar10;
            fVar8 = fVar8 * *(float *)(this + 0x240);
            fVar19 = (float)NEON_fmadd(fVar20,fVar18 * fVar25,fVar11 * fVar15);
            fVar17 = (float)NEON_fmadd(fVar20,fVar18 * fVar24,fVar11 * fVar14);
            fVar10 = (float)NEON_fmadd(fVar20,fVar18 * fVar23,fVar11 * fVar13);
            uVar12 = NEON_fmadd(fVar17 * fVar8,fVar17 * fVar8,fVar19 * fVar8 * fVar19 * fVar8);
            uVar9 = NEON_fmadd(fVar6,fVar6,fVar5 * fVar5);
            fVar11 = (float)NEON_fmadd(fVar10 * fVar8,fVar10 * fVar8,uVar12);
            fVar20 = (float)NEON_fmadd(fVar7,fVar7,uVar9);
            if (fVar11 <= fVar20) {
              lVar2 = lVar2 + lVar3 * 0x78;
              fVar10 = *(float *)(lVar2 + 0x48) + fVar10;
              *(float *)(lVar2 + 0x40) = *(float *)(lVar2 + 0x40) + fVar19;
              *(float *)(lVar2 + 0x44) = *(float *)(lVar2 + 0x44) + fVar17;
            }
            else {
              lVar2 = lVar2 + lVar3 * 0x78;
              uVar12 = NEON_fmadd(fVar17,fVar17,fVar19 * fVar19);
              fVar11 = (float)NEON_fmadd(fVar10,fVar10,uVar12);
              fVar20 = 1.0 / SQRT(fVar11);
              uVar12 = NEON_fmadd(fVar20 * fVar17,fVar6,fVar20 * fVar19 * fVar5);
              fVar11 = (float)NEON_fmadd(fVar20 * fVar10,fVar7,uVar12);
              fVar11 = fVar11 / fVar8;
              uVar12 = NEON_fmsub(fVar11,fVar20 * fVar19,*(undefined4 *)(lVar2 + 0x40));
              uVar9 = NEON_fmsub(fVar11,fVar20 * fVar17,*(undefined4 *)(lVar2 + 0x44));
              fVar10 = (float)NEON_fmsub(fVar11,fVar20 * fVar10,*(undefined4 *)(lVar2 + 0x48));
              *(undefined4 *)(lVar2 + 0x40) = uVar12;
              *(undefined4 *)(lVar2 + 0x44) = uVar9;
            }
            *(float *)(lVar2 + 0x48) = fVar10;
            return;
          }
        }
        else if (uVar1 == 2) {
          uVar12 = NEON_fmadd(fVar24,fVar19,fVar25 * fVar20);
          fVar19 = (float)NEON_fmadd(fVar23,fVar21,uVar12);
          fVar20 = -1.0;
          if (0.0 <= fVar19) {
            fVar20 = 1.0;
          }
          fVar26 = **(float **)(this + 0x348) * 0.5;
          fVar25 = fVar20 * fVar25;
          fVar24 = fVar20 * fVar24;
          fVar19 = *(float *)(lVar2 + lVar3 * 0x78 + 100) * 0.5;
          fVar20 = fVar20 * fVar23;
          fVar21 = 0.0;
          uVar12 = NEON_fmadd(fVar24,fVar14,fVar25 * fVar15);
          fVar27 = (float)NEON_fmadd(fVar20,fVar13,uVar12);
          fVar22 = fVar27 * fVar26 * fVar11 * fVar17 * fVar19;
          fVar11 = fVar22 * -fVar15;
          fVar18 = fVar22 * -fVar14;
          fVar22 = fVar22 * -fVar13;
          fVar16 = 0.0;
          fVar23 = 0.0;
          if (0.0 < fVar27 && fVar27 < 0.9848) {
            fVar27 = (float)NEON_fnmadd(fVar27,fVar27,0x3f800000);
            fVar21 = (float)NEON_fnmsub(fVar25,fVar14,fVar24 * fVar15);
            fVar23 = (float)NEON_fnmsub(fVar24,fVar13,fVar20 * fVar14);
            fVar20 = (float)NEON_fnmsub(fVar20,fVar15,fVar25 * fVar13);
            fVar16 = (float)NEON_fnmsub(fVar21,fVar15,fVar23 * fVar13);
            fVar23 = (float)NEON_fnmsub(fVar23,fVar14,fVar20 * fVar15);
            fVar21 = (float)NEON_fnmsub(fVar20,fVar13,fVar21 * fVar14);
            fVar19 = fVar26 * fVar10 * SQRT(fVar17) * SQRT(fVar27) * fVar19;
            fVar21 = fVar19 * fVar21;
            fVar16 = fVar19 * fVar16;
            fVar23 = fVar19 * fVar23;
          }
          fVar8 = fVar8 * *(float *)(this + 0x240);
          uVar12 = NEON_fmadd(fVar6,fVar6,fVar5 * fVar5);
          uVar9 = NEON_fmadd(fVar8 * fVar18,fVar8 * fVar18,fVar8 * fVar11 * fVar8 * fVar11);
          fVar8 = (float)NEON_fmadd(fVar8 * fVar22,fVar8 * fVar22,uVar9);
          fVar10 = (float)NEON_fmadd(fVar7,fVar7,uVar12);
          if ((fVar10 <= fVar8) && (0.0 < fVar8)) {
            fVar10 = (SQRT(fVar10) * 0.8) / SQRT(fVar8);
            fVar11 = fVar10 * fVar11;
            fVar18 = fVar10 * fVar18;
            fVar22 = fVar10 * fVar22;
          }
          lVar2 = lVar2 + lVar3 * 0x78;
          *(float *)(lVar2 + 0x40) = *(float *)(lVar2 + 0x40) + fVar11 + fVar21;
          *(float *)(lVar2 + 0x44) = *(float *)(lVar2 + 0x44) + fVar18 + fVar16;
          *(float *)(lVar2 + 0x48) = *(float *)(lVar2 + 0x48) + fVar22 + fVar23;
          return;
        }
      }
    }
  }
  return;
}


