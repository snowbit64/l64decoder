// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setAxis
// Entry Point: 00f3f3b0
// Size: 480 bytes
// Signature: undefined __thiscall setAxis(btGeneric6DofConstraint * this, btVector3 * param_1, btVector3 * param_2)


/* btGeneric6DofConstraint::setAxis(btVector3 const&, btVector3 const&) */

void __thiscall
btGeneric6DofConstraint::setAxis
          (btGeneric6DofConstraint *this,btVector3 *param_1,btVector3 *param_2)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  float fVar29;
  float fVar30;
  
  uVar13 = NEON_fmov(0x3f800000,4);
  fVar9 = (float)*(undefined8 *)param_2;
  fVar3 = *(float *)param_1;
  fVar4 = (float)*(undefined8 *)(param_2 + 8);
  fVar5 = *(float *)(param_1 + 8);
  fVar6 = (float)*(undefined8 *)(param_2 + 4);
  fVar7 = *(float *)(param_1 + 4);
  lVar1 = *(long *)(this + 0x28);
  lVar2 = *(long *)(this + 0x30);
  uVar10 = NEON_fsqrt(CONCAT44(fVar3 * fVar3 + fVar7 * fVar7 + fVar5 * fVar5,
                               fVar9 * fVar9 + fVar6 * fVar6 + fVar4 * fVar4),4);
  fVar8 = (float)uVar13 / (float)uVar10;
  fVar11 = (float)((ulong)uVar13 >> 0x20) / (float)((ulong)uVar10 >> 0x20);
  fVar12 = *(float *)(lVar1 + 8);
  fVar14 = *(float *)(lVar1 + 0x18);
  fVar15 = *(float *)(lVar1 + 0x1c);
  uVar16 = *(undefined4 *)(lVar1 + 0x38);
  fVar18 = *(float *)(lVar1 + 0x3c);
  fVar19 = *(float *)(lVar1 + 0x28);
  fVar20 = *(float *)(lVar1 + 0x2c);
  fVar21 = *(float *)(lVar1 + 0x20);
  uVar23 = *(undefined4 *)(lVar1 + 0x40);
  fVar25 = *(float *)(lVar1 + 0x30);
  fVar26 = (float)NEON_fmadd(uVar23,fVar20,fVar18 * fVar15);
  fVar6 = fVar8 * fVar6;
  fVar7 = fVar11 * fVar7;
  fVar4 = fVar8 * fVar4;
  fVar5 = fVar11 * fVar5;
  fVar8 = fVar8 * fVar9;
  fVar11 = fVar11 * fVar3;
  fVar9 = (float)NEON_fmadd(uVar23,fVar19,fVar18 * fVar14);
  fVar3 = (float)NEON_fmadd(uVar23,fVar25,fVar18 * fVar21);
  uVar23 = NEON_fnmadd(fVar12,uVar16,-fVar9);
  fVar18 = -(fVar4 * fVar7) + fVar5 * fVar6;
  fVar29 = -(fVar8 * fVar5) + fVar11 * fVar4;
  fVar9 = *(float *)(lVar1 + 0xc);
  fVar30 = *(float *)(lVar1 + 0x10);
  fVar24 = -(fVar6 * fVar11) + fVar7 * fVar8;
  *(undefined4 *)(this + 0x54) = 0;
  *(undefined4 *)(this + 100) = 0;
  uVar27 = NEON_fnmadd(fVar9,uVar16,-fVar26);
  uVar17 = NEON_fnmadd(fVar30,uVar16,-fVar3);
  *(undefined4 *)(this + 0x74) = 0;
  uVar16 = NEON_fmadd(fVar29,fVar14,fVar18 * fVar12);
  *(undefined4 *)(this + 0x78) = uVar23;
  *(undefined4 *)(this + 0x7c) = uVar27;
  *(undefined4 *)(this + 0x84) = 0;
  *(undefined4 *)(this + 0x80) = uVar17;
  uVar17 = NEON_fmadd(fVar29,fVar15,fVar18 * fVar9);
  uVar27 = NEON_fmadd(fVar21,fVar29,fVar30 * fVar18);
  uVar23 = NEON_fmadd(fVar24,fVar19,uVar16);
  *(ulong *)(this + 0x4c) =
       CONCAT44(fVar11 * fVar12 + fVar7 * fVar14 + fVar5 * fVar19,
                fVar8 * fVar12 + fVar6 * fVar14 + fVar4 * fVar19);
  uVar16 = NEON_fmadd(fVar20,fVar24,uVar17);
  uVar17 = NEON_fmadd(fVar25,fVar24,uVar27);
  *(ulong *)(this + 0x5c) =
       CONCAT44(fVar11 * fVar9 + fVar7 * fVar15 + fVar5 * fVar20,
                fVar8 * fVar9 + fVar6 * fVar15 + fVar4 * fVar20);
  *(ulong *)(this + 0x6c) =
       CONCAT44(fVar11 * fVar30 + fVar7 * fVar21 + fVar5 * fVar25,
                fVar8 * fVar30 + fVar6 * fVar21 + fVar4 * fVar25);
  *(undefined4 *)(this + 0x48) = uVar23;
  *(undefined4 *)(this + 0x58) = uVar16;
  *(undefined4 *)(this + 0x68) = uVar17;
  fVar3 = *(float *)(lVar2 + 8);
  fVar19 = *(float *)(lVar2 + 0xc);
  fVar20 = *(float *)(lVar2 + 0x10);
  fVar12 = *(float *)(lVar2 + 0x18);
  fVar15 = *(float *)(lVar2 + 0x1c);
  fVar26 = *(float *)(lVar2 + 0x20);
  uVar28 = *(undefined4 *)(lVar2 + 0x38);
  fVar9 = *(float *)(lVar2 + 0x3c);
  uVar23 = NEON_fmadd(fVar12,fVar29,fVar3 * fVar18);
  fVar21 = *(float *)(lVar2 + 0x28);
  fVar25 = *(float *)(lVar2 + 0x2c);
  uVar17 = NEON_fmadd(fVar15,fVar29,fVar19 * fVar18);
  uVar22 = NEON_fmadd(fVar26,fVar29,fVar20 * fVar18);
  fVar29 = *(float *)(lVar2 + 0x30);
  uVar16 = NEON_fmadd(fVar21,fVar24,uVar23);
  uVar23 = *(undefined4 *)(lVar2 + 0x40);
  *(undefined4 *)(this + 0x94) = 0;
  *(undefined4 *)(this + 0xa4) = 0;
  fVar14 = (float)NEON_fmadd(uVar23,fVar21,fVar9 * fVar12);
  fVar18 = (float)NEON_fmadd(uVar23,fVar25,fVar9 * fVar15);
  fVar9 = (float)NEON_fmadd(uVar23,fVar29,fVar9 * fVar26);
  uVar27 = NEON_fmadd(fVar25,fVar24,uVar17);
  uVar22 = NEON_fmadd(fVar29,fVar24,uVar22);
  *(undefined4 *)(this + 0xb4) = 0;
  *(undefined4 *)(this + 0x88) = uVar16;
  uVar23 = NEON_fnmadd(fVar3,uVar28,-fVar14);
  uVar17 = NEON_fnmadd(fVar19,uVar28,-fVar18);
  uVar16 = NEON_fnmadd(fVar20,uVar28,-fVar9);
  *(ulong *)(this + 0x8c) =
       CONCAT44(fVar11 * fVar3 + fVar7 * fVar12 + fVar5 * fVar21,
                fVar8 * fVar3 + fVar6 * fVar12 + fVar4 * fVar21);
  *(undefined4 *)(this + 0x98) = uVar27;
  *(ulong *)(this + 0x9c) =
       CONCAT44(fVar11 * fVar19 + fVar7 * fVar15 + fVar5 * fVar25,
                fVar8 * fVar19 + fVar6 * fVar15 + fVar4 * fVar25);
  *(undefined4 *)(this + 0xa8) = uVar22;
  *(ulong *)(this + 0xac) =
       CONCAT44(fVar11 * fVar20 + fVar7 * fVar26 + fVar5 * fVar29,
                fVar8 * fVar20 + fVar6 * fVar26 + fVar4 * fVar29);
  *(undefined4 *)(this + 0xb8) = uVar23;
  *(undefined4 *)(this + 0xbc) = uVar17;
  *(undefined4 *)(this + 0xc0) = uVar16;
  *(undefined4 *)(this + 0xc4) = 0;
  calculateTransforms(this,(btTransform *)(float *)(lVar1 + 8),(btTransform *)(float *)(lVar2 + 8));
  return;
}


