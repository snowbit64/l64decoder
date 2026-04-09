// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fillPlaneAdd
// Entry Point: 008d0998
// Size: 988 bytes
// Signature: undefined __thiscall fillPlaneAdd(FillPlaneGeometry * this, float param_1, Vector3 * param_2, Vector3 * param_3, Vector3 * param_4)


/* FillPlaneGeometry::fillPlaneAdd(float, Vector3 const&, Vector3 const&, Vector3 const&) */

void __thiscall
FillPlaneGeometry::fillPlaneAdd
          (FillPlaneGeometry *this,float param_1,Vector3 *param_2,Vector3 *param_3,Vector3 *param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  float *pfVar14;
  long lVar15;
  float *pfVar16;
  float *pfVar17;
  float *pfVar18;
  ulong uVar19;
  void *__s;
  size_t __n;
  undefined8 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined4 uVar27;
  float fVar28;
  float local_98;
  float local_94;
  float fStack_90;
  undefined8 local_88;
  float local_80;
  Plane aPStack_78 [16];
  undefined8 local_68;
  float local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  fVar22 = (float)*(undefined8 *)(param_3 + 4);
  fVar25 = (float)((ulong)*(undefined8 *)(param_4 + 4) >> 0x20);
  fVar23 = (float)((ulong)*(undefined8 *)(param_3 + 4) >> 0x20);
  fVar24 = (float)*(undefined8 *)(param_4 + 4);
  local_60 = *(float *)param_4 * -fVar22 + *(float *)param_3 * fVar24;
  uVar20 = NEON_rev64(CONCAT44(-fVar23,-*(float *)param_3),4);
  fVar21 = (float)NEON_fnmadd(*(undefined4 *)(this + 0x118),*(undefined4 *)(this + 0x11c),
                              -*(float *)(this + 0x9c));
  local_68 = CONCAT44(fVar25 * (float)((ulong)uVar20 >> 0x20) + *(float *)param_4 * fVar23,
                      fVar24 * (float)uVar20 + fVar25 * fVar22);
  Plane::Plane(aPStack_78,0.0,1.0,0.0,fVar21);
  local_88 = CONCAT44(((float)((ulong)*(undefined8 *)param_3 >> 0x20) +
                      (float)((ulong)*(undefined8 *)param_4 >> 0x20)) * 0.5 +
                      (float)((ulong)*(undefined8 *)param_2 >> 0x20),
                      ((float)*(undefined8 *)param_3 + (float)*(undefined8 *)param_4) * 0.5 +
                      (float)*(undefined8 *)param_2);
  local_80 = (*(float *)(param_3 + 8) + *(float *)(param_4 + 8)) * 0.5 + *(float *)(param_2 + 8);
  uVar6 = Plane::intersectionWithLine
                    (aPStack_78,(Vector3 *)&local_88,(Vector3 *)&local_68,(Vector3 *)&local_98);
  if ((uVar6 & 1) == 0) goto LAB_008d0d30;
  uVar6 = *(ulong *)(this + 0x148);
  if (uVar6 != 0) {
    __s = *(void **)(this + 0x140);
    __n = (uVar6 >> 6) * 8;
    memset(__s,0,__n);
    if ((uVar6 & 0x3f) != 0) {
      *(ulong *)((long)__s + __n) =
           *(ulong *)((long)__s + __n) &
           (0xffffffffffffffffU >> (-(uVar6 & 0x3f) & 0x3f) ^ 0xffffffffffffffff);
    }
  }
  lVar1 = *(long *)(this + 0xe0);
  uVar6 = *(long *)(this + 0xe8) - lVar1;
  uVar7 = uVar6 >> 5 & 0xffffffff;
  iVar8 = (int)(uVar6 >> 5);
  if (iVar8 == 0) {
    uVar6 = 0;
LAB_008d0be4:
    uVar13 = uVar6 >> 3 & 0x1ffffff8;
    uVar9 = 1;
    *(ulong *)(*(long *)(this + 0x140) + uVar13) =
         *(ulong *)(*(long *)(this + 0x140) + uVar13) | 1L << (uVar6 & 0x3f);
  }
  else {
    uVar13 = 0;
    uVar9 = 0;
    uVar6 = 0;
    lVar15 = *(long *)(this + 0x140);
    pfVar18 = (float *)(*(long *)(this + 0x158) + 8);
    fVar24 = (ABS(*(float *)param_3) + ABS(*(float *)param_4)) * 0.5;
    fVar21 = (ABS(*(float *)(param_3 + 8)) + ABS(*(float *)(param_4 + 8))) * 0.5;
    fVar23 = local_98 + fVar24;
    fVar25 = fStack_90 + fVar21;
    fVar22 = 3.402823e+38;
    do {
      fVar28 = pfVar18[-2];
      fVar26 = *pfVar18;
      bVar5 = local_98 - fVar24 <= fVar28;
      bVar4 = fStack_90 - fVar21 <= fVar26;
      if (((bVar5 && fVar28 < fVar23 || bVar5 && fVar28 == fVar23) && bVar4) && fVar26 < fVar25 ||
          ((bVar5 && fVar28 < fVar23 || bVar5 && fVar28 == fVar23) && bVar4) && fVar26 == fVar25) {
        uVar19 = uVar13 >> 3 & 0x1ffffffffffffff8;
        uVar9 = (ulong)((int)uVar9 + 1);
        *(ulong *)(lVar15 + uVar19) = *(ulong *)(lVar15 + uVar19) | 1L << (uVar13 & 0x3f);
      }
      pfVar14 = pfVar18 + -1;
      pfVar18 = pfVar18 + 3;
      uVar27 = NEON_fmadd(*pfVar14 - local_94,*pfVar14 - local_94,
                          (fVar28 - local_98) * (fVar28 - local_98));
      fVar28 = (float)NEON_fmadd(fVar26 - fStack_90,fVar26 - fStack_90,uVar27);
      fVar26 = fVar22;
      if (fVar28 <= fVar22) {
        fVar26 = fVar28;
      }
      uVar11 = (uint)uVar6;
      if (fVar28 <= fVar22) {
        uVar11 = (uint)uVar13;
      }
      uVar6 = (ulong)uVar11;
      uVar13 = uVar13 + 1;
      fVar22 = fVar26;
    } while (uVar7 != uVar13);
    if ((int)uVar9 == 0) goto LAB_008d0be4;
  }
  fVar23 = *(float *)(this + 0x118);
  fVar22 = *(float *)(this + 0x114) - fVar23;
  if (param_1 <= *(float *)(this + 0x114) - fVar23) {
    fVar22 = param_1;
  }
  fVar24 = -fVar23;
  if (-fVar23 <= param_1) {
    fVar24 = fVar22;
  }
  *(float *)(this + 0x118) = fVar23 + fVar24;
  if (iVar8 != 0) {
    uVar6 = 0;
    lVar15 = *(long *)(this + 0xe0);
    lVar2 = *(long *)(this + 0xe8);
    lVar10 = *(long *)(this + 0x140);
    lVar12 = *(long *)(this + 0xb0);
    do {
      if ((*(ulong *)(lVar10 + (uVar6 >> 3 & 0x1ffffffffffffff8)) >> (uVar6 & 0x3f) & 1) != 0) {
        pfVar18 = (float *)(lVar1 + uVar6 * 0x20);
        fVar22 = fVar24 / (float)uVar9 + *pfVar18;
        *pfVar18 = fVar22;
        if (*(short *)((long)pfVar18 + 0x16) == -1) {
          fVar23 = *(float *)(this + 0x9c);
          fVar22 = (float)NEON_fmadd(fVar22 * (float)((ulong)(lVar2 - lVar15) >> 5 & 0xffffffff),
                                     *(undefined4 *)(this + 0x11c),fVar23);
          if ((fVar23 <= fVar22) &&
             (fVar23 = *(float *)(this + 0xa8), fVar22 <= *(float *)(this + 0xa8))) {
            fVar23 = fVar22;
          }
          pfVar14 = *(float **)(lVar12 + (ulong)*(ushort *)(pfVar18 + 5) * 8);
          pfVar18 = *(float **)(pfVar14 + 4);
          do {
            pfVar17 = pfVar18;
            pfVar18 = pfVar17 + 3;
            fVar22 = pfVar17[4];
            pfVar16 = (float *)(*(long *)(pfVar14 + 6) + -0xc);
            if (pfVar18 == (float *)(*(long *)(pfVar14 + 6) + -0xc)) break;
            pfVar16 = pfVar18;
          } while (fVar23 < fVar22);
          fVar22 = (fVar23 - fVar22) / (pfVar17[1] - fVar22);
          fVar21 = (float)NEON_fmadd(*pfVar17 - *pfVar16,fVar22,*pfVar16);
          fVar22 = (float)NEON_fmadd(pfVar17[2] - pfVar17[5],fVar22,pfVar17[5]);
          *pfVar14 = fVar21 + pfVar14[10];
          pfVar14[1] = fVar23;
          pfVar14[2] = fVar22 + pfVar14[0xb];
        }
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 != uVar7);
  }
LAB_008d0d30:
  solveHardConstraints();
  *(undefined2 *)(this + 0x94) = 0x101;
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


