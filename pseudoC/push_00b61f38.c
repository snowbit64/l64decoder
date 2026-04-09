// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: push
// Entry Point: 00b61f38
// Size: 868 bytes
// Signature: undefined __thiscall push(EnclosingSphere * this, Vector3F32 * param_1)


/* BoundingVolumeFactory::EnclosingSphere::push(BoundingVolumeFactory::Vector3F32 const&) */

undefined4 __thiscall
BoundingVolumeFactory::EnclosingSphere::push(EnclosingSphere *this,Vector3F32 *param_1)

{
  EnclosingSphere *pEVar1;
  uint uVar2;
  float *pfVar3;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  float *pfVar12;
  float *pfVar13;
  undefined4 *puVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  EnclosingSphere *pEVar20;
  undefined4 *puVar21;
  float *pfVar22;
  float fVar23;
  float fVar24;
  undefined4 uVar25;
  float fVar26;
  undefined4 uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined8 uVar34;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  
  uVar2 = *(uint *)(this + 0xdc);
  lVar11 = (long)(int)uVar2;
  fVar23 = *(float *)param_1;
  uVar10 = (ulong)uVar2;
  if (uVar2 == 0) {
    *(float *)(this + 0x8c) = fVar23;
    lVar11 = 0;
    *(float *)this = fVar23;
    uVar27 = *(undefined4 *)(param_1 + 4);
    *(undefined4 *)(this + 0x90) = uVar27;
    *(undefined4 *)(this + 4) = uVar27;
    fVar23 = 0.0;
    uVar27 = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(this + 0x94) = uVar27;
    *(undefined4 *)(this + 8) = uVar27;
    goto LAB_00b62268;
  }
  fVar24 = *(float *)(this + 4);
  fVar26 = *(float *)(this + 8);
  fVar23 = fVar23 - *(float *)this;
  pfVar13 = (float *)(this + lVar11 * 0xc + 0xc);
  *pfVar13 = fVar23;
  fVar24 = *(float *)(param_1 + 4) - fVar24;
  *(float *)(this + lVar11 * 0xc + 0x10) = fVar24;
  fVar26 = *(float *)(param_1 + 8) - fVar26;
  pfVar12 = (float *)(this + lVar11 * 0xc + 0x14);
  *pfVar12 = fVar26;
  if (1 < (int)uVar2) {
    uVar15 = uVar10 - 1;
    if (uVar15 < 4) {
      uVar17 = 1;
LAB_00b620e0:
      pEVar20 = this + uVar17 * 4;
      lVar16 = lVar11 * 0xc + 0x3c;
      lVar18 = uVar10 - uVar17;
      puVar14 = (undefined4 *)(this + uVar17 * 0xc + 0x14);
      do {
        *(undefined4 *)(pEVar20 + lVar16) = 0;
        fVar29 = *(float *)(pEVar20 + 0x7c);
        lVar18 = lVar18 + -1;
        uVar27 = NEON_fmadd(puVar14[-2],fVar23,0);
        *(undefined4 *)(pEVar20 + lVar16) = uVar27;
        uVar27 = NEON_fmadd(puVar14[-1],fVar24,uVar27);
        *(undefined4 *)(pEVar20 + lVar16) = uVar27;
        fVar28 = (float)NEON_fmadd(*puVar14,fVar26,uVar27);
        *(float *)(pEVar20 + lVar16) = fVar28 * (2.0 / fVar29);
        pEVar20 = pEVar20 + 4;
        puVar14 = puVar14 + 3;
      } while (lVar18 != 0);
    }
    else {
      pEVar20 = this + lVar11 * 0xc + 0x40;
      pEVar1 = this + (lVar11 * 3 + uVar10) * 4 + 0x3c;
      uVar17 = 1;
      if ((((pEVar20 < this + uVar10 * 0xc + 4 && this + 0x18 < pEVar1) ||
           (pEVar20 < this + uVar10 * 0xc + 8 && this + 0x1c < pEVar1)) ||
          (pEVar20 < this + uVar10 * 0xc + 0xc && this + 0x20 < pEVar1)) ||
         (pEVar20 < this + uVar10 * 4 + 0x7c && this + 0x80 < pEVar1)) goto LAB_00b620e0;
      uVar19 = uVar15 & 0xfffffffffffffffc;
      uVar17 = uVar19 | 1;
      pEVar20 = this + 0x40;
      pfVar22 = (float *)(this + 0x18);
      uVar9 = uVar19;
      do {
        *(undefined8 *)((long)(pEVar20 + lVar11 * 0xc) + 8) = 0;
        *(undefined8 *)(pEVar20 + lVar11 * 0xc) = 0;
        uVar9 = uVar9 - 4;
        fVar28 = *pfVar22;
        fVar30 = pfVar22[1];
        fVar32 = pfVar22[2];
        fVar29 = pfVar22[3];
        fVar31 = pfVar22[4];
        fVar33 = pfVar22[5];
        pfVar3 = pfVar22 + 6;
        pfVar4 = pfVar22 + 7;
        pfVar5 = pfVar22 + 8;
        pfVar6 = pfVar22 + 9;
        pfVar7 = pfVar22 + 10;
        pfVar8 = pfVar22 + 0xb;
        pfVar22 = pfVar22 + 0xc;
        uVar34 = *(undefined8 *)(pEVar20 + 0x40);
        *(ulong *)((long)(pEVar20 + lVar11 * 0xc) + 8) =
             CONCAT44((fVar23 * *pfVar6 + 0.0 + fVar24 * *pfVar7 + fVar26 * *pfVar8) *
                      (2.0 / (float)((ulong)*(undefined8 *)(pEVar20 + 0x48) >> 0x20)),
                      (fVar23 * *pfVar3 + 0.0 + fVar24 * *pfVar4 + fVar26 * *pfVar5) *
                      (2.0 / (float)*(undefined8 *)(pEVar20 + 0x48)));
        *(ulong *)(pEVar20 + lVar11 * 0xc) =
             CONCAT44((fVar23 * fVar29 + 0.0 + fVar24 * fVar31 + fVar26 * fVar33) *
                      (2.0 / (float)((ulong)uVar34 >> 0x20)),
                      (fVar23 * fVar28 + 0.0 + fVar24 * fVar30 + fVar26 * fVar32) *
                      (2.0 / (float)uVar34));
        pEVar20 = pEVar20 + 0x10;
      } while (uVar9 != 0);
      if (uVar15 != uVar19) goto LAB_00b620e0;
    }
    if (1 < (int)uVar2) {
      lVar18 = (ulong)uVar2 - 1;
      puVar14 = (undefined4 *)(this + lVar11 * 0xc + 0x40);
      puVar21 = (undefined4 *)(this + 0x20);
      do {
        uVar27 = *puVar14;
        lVar18 = lVar18 + -1;
        fVar23 = (float)NEON_fmsub(uVar27,puVar21[-2],fVar23);
        *pfVar13 = fVar23;
        fVar24 = (float)NEON_fmsub(uVar27,puVar21[-1],fVar24);
        *(float *)(this + lVar11 * 0xc + 0x10) = fVar24;
        fVar26 = (float)NEON_fmsub(uVar27,*puVar21,fVar26);
        *pfVar12 = fVar26;
        puVar14 = puVar14 + 1;
        puVar21 = puVar21 + 3;
      } while (lVar18 != 0);
    }
  }
  uVar27 = NEON_fmadd(fVar23,fVar23,fVar24 * fVar24);
  fVar23 = (float)NEON_fmadd(fVar26,fVar26,uVar27);
  fVar23 = fVar23 + fVar23;
  *(float *)(this + lVar11 * 4 + 0x7c) = fVar23;
  if (fVar23 < *(float *)(this + 0xd8) * 1e-30) {
    return 0;
  }
  lVar18 = (long)(int)uVar2 + -1;
  pfVar22 = (float *)(this + lVar18 * 0xc + 0x8c);
  fVar26 = *pfVar22;
  fVar28 = *(float *)param_1 - fVar26;
  uVar27 = NEON_fnmsub(fVar28,fVar28,*(undefined4 *)(this + lVar18 * 4 + 0xbc));
  fVar29 = pfVar22[2];
  uVar27 = NEON_fmadd(*(float *)(param_1 + 4) - pfVar22[1],*(float *)(param_1 + 4) - pfVar22[1],
                      uVar27);
  fVar28 = *(float *)(param_1 + 8) - fVar29;
  fVar28 = (float)NEON_fmadd(fVar28,fVar28,uVar27);
  *(float *)(this + lVar11 * 4 + 0x6c) = fVar28 / fVar23;
  puVar14 = (undefined4 *)(this + lVar11 * 0xc + 0x8c);
  uVar27 = NEON_fmadd(fVar28 / fVar23,*pfVar13,fVar26);
  *puVar14 = uVar27;
  uVar25 = NEON_fmadd(*(undefined4 *)(this + lVar11 * 4 + 0x6c),*pfVar12,fVar29);
  uVar27 = NEON_fmadd(*(undefined4 *)(this + lVar11 * 4 + 0x6c),fVar24,pfVar22[1]);
  puVar14[2] = uVar25;
  fVar23 = *(float *)(this + lVar11 * 4 + 0x6c);
  puVar14[1] = uVar27;
  fVar23 = *(float *)(this + lVar18 * 4 + 0xbc) + fVar28 * fVar23 * 0.5;
LAB_00b62268:
  *(float *)(this + lVar11 * 4 + 0xbc) = fVar23;
  *(float *)(this + 0xd8) = fVar23;
  *(uint *)(this + 0xdc) = uVar2 + 1;
  *(uint *)(this + 0xe0) = uVar2 + 1;
  *(EnclosingSphere **)(this + 0xd0) = this + lVar11 * 0xc + 0x8c;
  return 1;
}


