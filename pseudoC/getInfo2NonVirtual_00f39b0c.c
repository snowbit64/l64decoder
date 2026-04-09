// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getInfo2NonVirtual
// Entry Point: 00f39b0c
// Size: 1488 bytes
// Signature: undefined __thiscall getInfo2NonVirtual(btConeTwistConstraint * this, btConstraintInfo2 * param_1, btTransform * param_2, btTransform * param_3, btMatrix3x3 * param_4, btMatrix3x3 * param_5)


/* btConeTwistConstraint::getInfo2NonVirtual(btTypedConstraint::btConstraintInfo2*, btTransform
   const&, btTransform const&, btMatrix3x3 const&, btMatrix3x3 const&) */

void __thiscall
btConeTwistConstraint::getInfo2NonVirtual
          (btConeTwistConstraint *this,btConstraintInfo2 *param_1,btTransform *param_2,
          btTransform *param_3,btMatrix3x3 *param_4,btMatrix3x3 *param_5)

{
  uint uVar1;
  ulong uVar2;
  float *pfVar3;
  undefined4 *puVar4;
  btConeTwistConstraint bVar5;
  int iVar6;
  undefined4 *puVar7;
  long lVar8;
  ulong uVar9;
  undefined4 *puVar10;
  ulong uVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  float *pfVar14;
  ulong uVar15;
  long lVar16;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  float fVar25;
  float fVar26;
  undefined4 uVar27;
  float fVar28;
  undefined4 uVar29;
  float fVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  
  calcAngleInfo2(this,param_2,param_3,param_4,param_5);
  iVar6 = *(int *)(param_1 + 0x28);
  lVar8 = (long)iVar6;
  puVar13 = *(undefined4 **)(param_1 + 0x18);
  uVar1 = iVar6 * 2 + 2;
  uVar11 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2;
  puVar12 = *(undefined4 **)(param_1 + 8);
  puVar4 = *(undefined4 **)(param_1 + 0x10);
  *puVar12 = 0x3f800000;
  puVar12[lVar8 + 1] = 0x3f800000;
  *(undefined4 *)((long)puVar12 + uVar11) = 0x3f800000;
  puVar12 = puVar4 + lVar8;
  fVar17 = *(float *)(this + 0x174);
  pfVar3 = (float *)(puVar4 + lVar8 * 2);
  fVar22 = *(float *)param_2;
  uVar24 = *(undefined4 *)(param_2 + 4);
  uVar18 = *(undefined4 *)(this + 0x178);
  uVar27 = *(undefined4 *)(this + 0x17c);
  uVar23 = *(undefined4 *)(param_2 + 0x18);
  uVar29 = *(undefined4 *)(param_2 + 8);
  fVar19 = (float)NEON_fmadd(*(undefined4 *)(param_2 + 0x24),uVar18,
                             *(float *)(param_2 + 0x20) * fVar17);
  fVar20 = (float)NEON_fmadd(*(undefined4 *)(param_2 + 0x14),uVar18,
                             *(float *)(param_2 + 0x10) * fVar17);
  uVar21 = *(undefined4 *)(param_2 + 0x28);
  *puVar4 = 0;
  fVar25 = (float)NEON_fmadd(uVar18,uVar24,fVar17 * fVar22);
  puVar4[3] = 0;
  fVar17 = (float)NEON_fmadd(uVar21,uVar27,fVar19);
  uVar18 = NEON_fnmadd(uVar23,uVar27,-fVar20);
  uVar21 = NEON_fnmadd(uVar21,uVar27,-fVar19);
  fVar22 = (float)NEON_fmadd(uVar27,uVar29,fVar25);
  puVar4[1] = fVar17;
  puVar4[2] = uVar18;
  fVar19 = (float)NEON_fmadd(uVar23,uVar27,fVar20);
  *puVar12 = uVar21;
  fVar20 = (float)NEON_fnmadd(uVar27,uVar29,-fVar25);
  puVar12[1] = 0;
  puVar12[2] = fVar22;
  puVar12[3] = 0;
  puVar10 = *(undefined4 **)(param_1 + 0x20);
  *pfVar3 = fVar19;
  pfVar3[1] = fVar20;
  *(undefined8 *)(pfVar3 + 2) = 0;
  *puVar13 = 0xbf800000;
  puVar12 = puVar10 + lVar8 * 2;
  puVar13[lVar8 + 1] = 0xbf800000;
  uVar1 = *(uint *)(this + 0x268);
  *(undefined4 *)((long)puVar13 + uVar11) = 0xbf800000;
  pfVar3 = (float *)(puVar10 + lVar8);
  fVar20 = *(float *)(this + 0x1b4);
  uVar18 = *(undefined4 *)(this + 0x1b8);
  uVar24 = *(undefined4 *)(this + 0x1bc);
  uVar21 = *(undefined4 *)(param_3 + 0x18);
  fVar28 = (float)NEON_fmadd(*(undefined4 *)(param_3 + 0x24),uVar18,
                             *(float *)(param_3 + 0x20) * fVar20);
  fVar30 = (float)NEON_fmadd(*(undefined4 *)(param_3 + 0x14),uVar18,
                             *(float *)(param_3 + 0x10) * fVar20);
  fVar26 = (float)NEON_fmadd(uVar18,*(undefined4 *)(param_3 + 4),fVar20 * *(float *)param_3);
  uVar18 = *(undefined4 *)(param_3 + 0x28);
  uVar23 = *(undefined4 *)(param_3 + 8);
  *puVar10 = 0;
  puVar10[3] = 0;
  uVar27 = NEON_fnmadd(uVar18,uVar24,-fVar28);
  fVar25 = (float)NEON_fmadd(uVar21,uVar24,fVar30);
  fVar20 = (float)NEON_fmadd(uVar18,uVar24,fVar28);
  fVar28 = (float)NEON_fnmadd(uVar24,uVar23,-fVar26);
  fVar26 = (float)NEON_fmadd(uVar24,uVar23,fVar26);
  uVar18 = NEON_fnmadd(uVar21,uVar24,-fVar30);
  puVar10[1] = uVar27;
  puVar10[2] = fVar25;
  *pfVar3 = fVar20;
  pfVar3[1] = 0.0;
  pfVar3[2] = fVar28;
  pfVar3[3] = 0.0;
  pfVar3 = (float *)(param_1 + 4);
  if ((uVar1 & 2) != 0) {
    pfVar3 = (float *)(this + 0x270);
  }
  *puVar12 = uVar18;
  puVar12[1] = fVar26;
  *(undefined8 *)(puVar12 + 2) = 0;
  pfVar14 = *(float **)(param_1 + 0x30);
  puVar12 = *(undefined4 **)(param_1 + 0x40);
  puVar13 = *(undefined4 **)(param_1 + 0x48);
  fVar28 = *(float *)param_1 * *pfVar3;
  if ((uVar1 & 1) == 0) {
    *pfVar14 = fVar28 * ((*(float *)(param_3 + 0x30) + fVar26) -
                        (fVar22 + *(float *)(param_2 + 0x30)));
    *puVar12 = 0xff7fffff;
    *puVar13 = 0x7f7fffff;
    pfVar14[lVar8] =
         fVar28 * ((*(float *)(param_3 + 0x34) + fVar25) - (fVar19 + *(float *)(param_2 + 0x34)));
    puVar12[lVar8] = 0xff7fffff;
    puVar13[lVar8] = 0x7f7fffff;
    pfVar14[lVar8 * 2] =
         fVar28 * ((*(float *)(param_3 + 0x38) + fVar20) - (fVar17 + *(float *)(param_2 + 0x38)));
    puVar12[lVar8 * 2] = 0xff7fffff;
    puVar13[lVar8 * 2] = 0x7f7fffff;
  }
  else {
    puVar7 = *(undefined4 **)(param_1 + 0x38);
    *pfVar14 = fVar28 * ((*(float *)(param_3 + 0x30) + fVar26) -
                        (fVar22 + *(float *)(param_2 + 0x30)));
    *puVar12 = 0xff7fffff;
    *puVar13 = 0x7f7fffff;
    *puVar7 = *(undefined4 *)(this + 0x26c);
    pfVar14[lVar8] =
         fVar28 * ((*(float *)(param_3 + 0x34) + fVar25) - (fVar19 + *(float *)(param_2 + 0x34)));
    puVar12[lVar8] = 0xff7fffff;
    puVar13[lVar8] = 0x7f7fffff;
    puVar7[lVar8] = *(undefined4 *)(this + 0x26c);
    pfVar14[lVar8 * 2] =
         fVar28 * ((*(float *)(param_3 + 0x38) + fVar20) - (fVar17 + *(float *)(param_2 + 0x38)));
    puVar12[lVar8 * 2] = 0xff7fffff;
    puVar13[lVar8 * 2] = 0x7f7fffff;
    puVar7[lVar8 * 2] = *(undefined4 *)(this + 0x26c);
  }
  uVar11 = lVar8 * 3;
  if (this[0x226] != (btConeTwistConstraint)0x0) {
    if ((*(float *)(this + 0x1e0) <= *(float *)(this + 0x1d4)) ||
       (*(float *)(this + 0x1e0) <= *(float *)(this + 0x1d8))) {
      fVar19 = *(float *)(this + 0x1e4);
      fVar20 = *(float *)(this + 0x1e8);
      uVar9 = -((uVar11 & 0xffffffff) >> 0x1f) & 0xfffffffc00000000 | (uVar11 & 0xffffffff) << 2;
      fVar17 = *(float *)(this + 0x1cc) * *(float *)(this + 0x1cc);
      fVar22 = *(float *)(this + 0x1ec);
      lVar16 = (long)(int)uVar11;
      *(float *)((long)puVar4 + uVar9) = fVar17 * fVar19;
      puVar4[lVar8 * 3 + 1] = fVar17 * fVar20;
      *(float *)((long)puVar4 + uVar9 + 8) = fVar17 * fVar22;
      *(float *)((long)puVar10 + uVar9) = -(fVar17 * fVar19);
      puVar10[lVar8 * 3 + 1] = -(fVar17 * fVar20);
      *(float *)((long)puVar10 + uVar9 + 8) = -(fVar17 * fVar22);
      *(float *)((long)pfVar14 + uVar9) =
           *(float *)(this + 0x1c8) * *(float *)param_1 * *(float *)(this + 0x210);
      if ((uVar1 >> 2 & 1) != 0) {
        *(undefined4 *)(*(long *)(param_1 + 0x38) + lVar16 * 4) = *(undefined4 *)(this + 0x274);
      }
      bVar5 = this[0x240];
      puVar12[lVar16] = 0;
      if ((bVar5 == (btConeTwistConstraint)0x0) || (fVar17 = *(float *)(this + 0x254), fVar17 < 0.0)
         ) {
        fVar17 = 3.402823e+38;
      }
      uVar11 = (ulong)(uint)(iVar6 << 2);
      puVar13[lVar16] = fVar17;
      bVar5 = this[0x225];
      goto joined_r0x00f39f48;
    }
    fVar17 = *(float *)(this + 0x148);
    uVar15 = -(uVar11 >> 0x1f & 1) & 0xfffffffc00000000 | (uVar11 & 0xffffffff) << 2;
    fVar20 = *(float *)(this + 0x14c);
    uVar18 = *(undefined4 *)(this + 0x158);
    uVar21 = *(undefined4 *)(this + 0x15c);
    uVar32 = *(undefined4 *)(param_2 + 8);
    uVar33 = *(undefined4 *)(this + 0x168);
    fVar25 = (float)NEON_fmadd(uVar18,*(undefined4 *)(param_2 + 4),fVar17 * *(float *)param_2);
    uVar34 = *(undefined4 *)(param_2 + 0x28);
    fVar19 = (float)NEON_fmadd(uVar21,*(undefined4 *)(param_2 + 4),fVar20 * *(float *)param_2);
    fVar28 = (float)NEON_fmadd(*(undefined4 *)(param_2 + 0x14),uVar18,
                               *(float *)(param_2 + 0x10) * fVar17);
    uVar11 = (ulong)(long)(iVar6 * 4) >> 2;
    fVar22 = (float)NEON_fmadd(*(undefined4 *)(param_2 + 0x14),uVar21,
                               *(float *)(param_2 + 0x10) * fVar20);
    uVar23 = *(undefined4 *)(param_2 + 0x18);
    uVar31 = *(undefined4 *)(this + 0x16c);
    fVar30 = (float)NEON_fmadd(uVar33,uVar32,fVar25);
    uVar35 = NEON_fmadd(uVar23,uVar33,fVar28);
    fVar17 = (float)NEON_fmadd(*(undefined4 *)(param_2 + 0x24),uVar18,
                               *(float *)(param_2 + 0x20) * fVar17);
    fVar20 = (float)NEON_fmadd(*(undefined4 *)(param_2 + 0x24),uVar21,
                               *(float *)(param_2 + 0x20) * fVar20);
    fVar26 = (float)NEON_fmadd(uVar31,uVar32,fVar19);
    uVar27 = NEON_fmadd(uVar23,uVar31,fVar22);
    uVar9 = uVar11 << 4 | 4;
    uVar2 = uVar11 << 4 | 8;
    *(float *)((long)puVar4 + uVar15) = fVar30;
    uVar24 = NEON_fnmadd(uVar33,uVar32,-fVar25);
    uVar29 = NEON_fmadd(uVar34,uVar33,fVar17);
    uVar36 = NEON_fmadd(uVar34,uVar31,fVar20);
    uVar18 = NEON_fnmadd(uVar34,uVar33,-fVar17);
    *(undefined4 *)((long)puVar4 + uVar15 + 4) = uVar35;
    uVar33 = NEON_fnmadd(uVar23,uVar33,-fVar28);
    uVar21 = NEON_fnmadd(uVar31,uVar32,-fVar19);
    *(undefined4 *)((long)puVar4 + uVar15 + 8) = uVar29;
    uVar23 = NEON_fnmadd(uVar23,uVar31,-fVar22);
    puVar4[lVar8 * 4] = fVar26;
    uVar11 = (ulong)(uint)(iVar6 * 5);
    *(undefined4 *)((long)puVar4 + uVar9) = uVar27;
    *(undefined4 *)((long)puVar4 + uVar2) = uVar36;
    *(undefined4 *)((long)puVar10 + uVar15 + 8) = uVar18;
    uVar18 = NEON_fnmadd(uVar34,uVar31,-fVar20);
    *(undefined4 *)((long)puVar10 + uVar15) = uVar24;
    pfVar14 = *(float **)(param_1 + 0x30);
    *(undefined4 *)((long)puVar10 + uVar15 + 4) = uVar33;
    puVar10[lVar8 * 4] = uVar21;
    *(undefined4 *)((long)puVar10 + uVar9) = uVar23;
    *(undefined4 *)((long)puVar10 + uVar2) = uVar18;
    fVar19 = *(float *)param_1;
    fVar20 = *(float *)(this + 0x1cc);
    puVar12 = *(undefined4 **)(param_1 + 0x40);
    puVar13 = *(undefined4 **)(param_1 + 0x48);
    uVar18 = NEON_fmadd(*(undefined4 *)(this + 0x1e8),uVar35,*(float *)(this + 0x1e4) * fVar30);
    fVar17 = (float)NEON_fmadd(*(undefined4 *)(this + 0x1ec),uVar29,uVar18);
    *(float *)((long)pfVar14 + uVar15) = fVar17 * fVar20 * fVar19;
    uVar18 = NEON_fmadd(*(undefined4 *)(this + 0x1e8),uVar27,*(float *)(this + 0x1e4) * fVar26);
    fVar17 = (float)NEON_fmadd(*(undefined4 *)(this + 0x1ec),uVar36,uVar18);
    pfVar14[lVar8 * 4] = fVar17 * fVar20 * fVar19;
    *(undefined4 *)((long)puVar12 + uVar15) = 0xff7fffff;
    *(undefined4 *)((long)puVar13 + uVar15) = 0x7f7fffff;
    puVar12[lVar8 * 4] = 0xff7fffff;
    puVar13[lVar8 * 4] = 0x7f7fffff;
  }
  bVar5 = this[0x225];
joined_r0x00f39f48:
  if (bVar5 != (btConeTwistConstraint)0x0) {
    uVar9 = -(uVar11 >> 0x1f & 1) & 0xfffffffc00000000 | (uVar11 & 0xffffffff) << 2;
    fVar19 = *(float *)(this + 500);
    fVar20 = *(float *)(this + 0x1f8);
    fVar17 = *(float *)(this + 0x1cc) * *(float *)(this + 0x1cc);
    fVar22 = *(float *)(this + 0x1fc);
    *(float *)((long)puVar4 + uVar9) = fVar17 * fVar19;
    *(float *)((long)puVar4 + uVar9 + 4) = fVar17 * fVar20;
    *(float *)((long)puVar4 + uVar9 + 8) = fVar17 * fVar22;
    lVar8 = (long)(int)uVar11;
    *(float *)((long)puVar10 + uVar9) = -(fVar17 * fVar19);
    *(float *)((long)puVar10 + uVar9 + 4) = -(fVar17 * fVar20);
    *(float *)((long)puVar10 + uVar9 + 8) = -(fVar17 * fVar22);
    *(float *)((long)pfVar14 + uVar9) =
         *(float *)(this + 0x1c8) * *(float *)param_1 * *(float *)(this + 0x214);
    if ((uVar1 >> 2 & 1) != 0) {
      *(undefined4 *)(*(long *)(param_1 + 0x38) + lVar8 * 4) = *(undefined4 *)(this + 0x274);
    }
    if (*(float *)(this + 0x1dc) <= 0.0) {
      puVar12[lVar8] = 0xff7fffff;
      uVar18 = 0x7f7fffff;
    }
    else if (*(float *)(this + 0x214) <= 0.0) {
      uVar18 = 0;
      puVar12[lVar8] = 0xff7fffff;
    }
    else {
      puVar12[lVar8] = 0;
      uVar18 = 0x7f7fffff;
    }
    puVar13[lVar8] = uVar18;
  }
  return;
}


