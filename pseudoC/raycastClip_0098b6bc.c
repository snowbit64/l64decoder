// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: raycastClip
// Entry Point: 0098b6bc
// Size: 812 bytes
// Signature: undefined __thiscall raycastClip(PlayerCenteredCollisionHeightmap * this, Vector3 * param_1, Vector3 * param_2, float param_3)


/* PlayerCenteredCollisionHeightmap::raycastClip(Vector3 const&, Vector3 const&, float) */

undefined  [16] __thiscall
PlayerCenteredCollisionHeightmap::raycastClip
          (PlayerCenteredCollisionHeightmap *this,Vector3 *param_1,Vector3 *param_2,float param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  int iVar6;
  uint uVar7;
  char cVar8;
  bool bVar9;
  bool bVar10;
  float *pfVar11;
  int iVar12;
  float *pfVar13;
  int iVar14;
  int iVar15;
  float *pfVar16;
  int iVar17;
  undefined4 in_register_00005004;
  undefined8 in_register_00005008;
  undefined auVar18 [16];
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  
  iVar3 = *(int *)(this + 0x1c);
  iVar6 = *(int *)(this + 0x20);
  fVar19 = *(float *)(this + 0x10);
  uVar4 = *(uint *)this;
  uVar5 = (ulong)uVar4;
  uVar7 = *(uint *)(this + 4);
  fVar24 = *(float *)(param_1 + 8);
  fVar21 = fVar19 * (float)iVar3;
  fVar23 = *(float *)param_1;
  fVar20 = *(float *)(param_1 + 4);
  if (fVar21 <= fVar23) {
    fVar21 = (float)NEON_fmadd(fVar19,(float)uVar5,fVar21);
    if (fVar21 < fVar23) {
      if ((0.0 <= *(float *)param_2) ||
         (fVar22 = (fVar23 - fVar21) / -*(float *)param_2, param_3 < fVar22)) goto LAB_0098b83c;
      iVar14 = uVar4 + iVar3 + -1;
      fVar24 = (float)NEON_fmadd(fVar22,*(undefined4 *)(param_2 + 8),fVar24);
      fVar20 = (float)NEON_fmadd(fVar22,*(undefined4 *)(param_2 + 4),fVar20);
      fVar23 = fVar21;
      goto LAB_0098b764;
    }
    fVar22 = 0.0;
    iVar14 = (int)(fVar23 / fVar19);
  }
  else {
    if ((*(float *)param_2 <= 0.0) ||
       (fVar22 = (fVar21 - fVar23) / *(float *)param_2, param_3 < fVar22)) goto LAB_0098b83c;
    fVar24 = (float)NEON_fmadd(fVar22,*(undefined4 *)(param_2 + 8),fVar24);
    fVar20 = (float)NEON_fmadd(fVar22,*(undefined4 *)(param_2 + 4),fVar20);
    fVar23 = fVar21;
    iVar14 = iVar3;
LAB_0098b764:
    fVar22 = fVar22 + 0.0;
  }
  fVar21 = fVar19 * (float)iVar6;
  if (fVar21 <= fVar24) {
    fVar21 = (float)NEON_fmadd(fVar19,(float)(ulong)uVar7,fVar21);
    if (fVar21 < fVar24) {
      if ((0.0 <= *(float *)(param_2 + 8)) ||
         (fVar25 = (fVar24 - fVar21) / -*(float *)(param_2 + 8), param_3 < fVar25))
      goto LAB_0098b83c;
      uVar26 = *(undefined4 *)param_2;
      uVar27 = *(undefined4 *)(param_2 + 4);
      iVar15 = uVar7 + iVar6 + -1;
      fVar24 = fVar21;
      goto LAB_0098b804;
    }
    iVar15 = (int)(float)(int)(fVar24 / fVar19);
  }
  else {
    if ((*(float *)(param_2 + 8) <= 0.0) ||
       (fVar25 = (fVar21 - fVar24) / *(float *)(param_2 + 8), param_3 < fVar25)) goto LAB_0098b83c;
    uVar26 = *(undefined4 *)param_2;
    uVar27 = *(undefined4 *)(param_2 + 4);
    fVar24 = fVar21;
    iVar15 = iVar6;
LAB_0098b804:
    fVar22 = fVar22 + fVar25;
    fVar23 = (float)NEON_fmadd(fVar25,uVar26,fVar23);
    fVar20 = (float)NEON_fmadd(fVar25,uVar27,fVar20);
    iVar14 = (int)(fVar23 / fVar19);
  }
  iVar1 = uVar4 + iVar3;
  bVar9 = false;
  if (iVar3 <= iVar14) {
    bVar9 = iVar14 - iVar1 < 0;
  }
  iVar2 = uVar7 + iVar6;
  bVar9 = bVar9 != (iVar3 <= iVar14 && SBORROW4(iVar14,iVar1));
  bVar10 = true;
  if (bVar9) {
    bVar10 = iVar15 - iVar6 < 0;
  }
  bVar9 = bVar10 == (bVar9 && SBORROW4(iVar15,iVar6));
  bVar10 = false;
  if (bVar9) {
    bVar10 = iVar15 - iVar2 < 0;
  }
  if (bVar10 != (bVar9 && SBORROW4(iVar15,iVar2))) {
    fVar28 = *(float *)(param_2 + 4);
    fVar21 = *(float *)(param_2 + 8);
    fVar25 = *(float *)param_2;
    pfVar16 = (float *)(*(long *)(this + 0x30) + (long)(iVar14 - iVar3) * 8 +
                       (ulong)((iVar15 - iVar6) * uVar4) * 8);
    do {
      if (fVar25 <= 0.0) {
        pfVar11 = pfVar16;
        fVar29 = fVar23;
        fVar30 = param_3;
        iVar17 = iVar14;
        if (fVar25 < 0.0) {
          iVar17 = iVar14 + -1;
          pfVar11 = pfVar16 + -2;
          fVar29 = fVar19 * (float)iVar14;
          fVar30 = (fVar23 - fVar29) / -fVar25;
        }
      }
      else {
        fVar29 = fVar19 * (float)(iVar14 + 1);
        pfVar11 = pfVar16 + 2;
        fVar30 = (fVar29 - fVar23) / fVar25;
        iVar17 = iVar14 + 1;
      }
      if (fVar21 <= 0.0) {
        pfVar13 = pfVar16;
        fVar31 = fVar24;
        fVar32 = param_3;
        iVar12 = iVar15;
        if (fVar21 < 0.0) {
          iVar12 = iVar15 + -1;
          pfVar13 = pfVar16 + uVar5 * -2;
          fVar31 = fVar19 * (float)iVar15;
          fVar32 = (fVar24 - fVar31) / -fVar21;
        }
      }
      else {
        fVar31 = fVar19 * (float)(iVar15 + 1);
        pfVar13 = pfVar16 + uVar5 * 2;
        fVar32 = (fVar31 - fVar24) / fVar21;
        iVar12 = iVar15 + 1;
      }
      if (fVar30 <= fVar32) {
        fVar31 = (float)NEON_fmadd(param_3 - fVar22,fVar25,fVar23);
        fVar23 = fVar29;
        if (param_3 <= fVar22 + fVar30) {
          pfVar11 = (float *)0x0;
          fVar23 = fVar31;
          fVar30 = param_3 - fVar22;
        }
        fVar29 = (float)NEON_fmadd(fVar30,fVar28,fVar20);
        fVar24 = (float)NEON_fmadd(fVar30,fVar21,fVar24);
        cVar8 = *(char *)(pfVar16 + 1);
        iVar14 = iVar17;
        pfVar13 = pfVar11;
      }
      else {
        fVar29 = (float)NEON_fmadd(param_3 - fVar22,fVar21,fVar24);
        fVar24 = fVar31;
        fVar30 = fVar32;
        if (param_3 <= fVar22 + fVar32) {
          pfVar13 = (float *)0x0;
          fVar24 = fVar29;
          fVar30 = param_3 - fVar22;
        }
        fVar23 = (float)NEON_fmadd(fVar30,fVar25,fVar23);
        fVar29 = (float)NEON_fmadd(fVar30,fVar28,fVar20);
        cVar8 = *(char *)(pfVar16 + 1);
        iVar15 = iVar12;
      }
      if (cVar8 != '\0') {
        fVar31 = fVar29;
        if (fVar20 <= fVar29) {
          fVar31 = fVar20;
        }
        if (fVar31 < *pfVar16) {
          if (fVar28 <= 0.0) {
            fVar24 = (*pfVar16 - fVar20) / (fVar29 - fVar20);
            fVar23 = (float)NEON_fmadd(fVar24,fVar30,fVar22);
            if (0.0 <= fVar24) {
              fVar22 = fVar23;
            }
            return ZEXT416((uint)fVar22);
          }
          return ZEXT416((uint)fVar22);
        }
      }
    } while ((((pfVar13 != (float *)0x0) && (iVar3 <= iVar14)) && (iVar14 < iVar1)) &&
            ((iVar6 <= iVar15 &&
             (fVar22 = fVar22 + fVar30, pfVar16 = pfVar13, fVar20 = fVar29, iVar15 < iVar2))));
  }
LAB_0098b83c:
  auVar18._4_4_ = in_register_00005004;
  auVar18._0_4_ = param_3;
  auVar18._8_8_ = in_register_00005008;
  return auVar18;
}


