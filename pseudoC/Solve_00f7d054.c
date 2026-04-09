// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Solve
// Entry Point: 00f7d054
// Size: 920 bytes
// Signature: undefined __thiscall Solve(AJoint * this, float param_1, float param_2)


/* btSoftBody::AJoint::Solve(float, float) */

void __thiscall btSoftBody::AJoint::Solve(AJoint *this,float param_1,float param_2)

{
  float *pfVar1;
  float *pfVar2;
  long lVar3;
  float *pfVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  double dVar16;
  float fVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  lVar3 = *(long *)(this + 0x10);
  if (lVar3 == 0) {
    lVar3 = *(long *)(this + 8);
    if (lVar3 != 0) {
      pfVar1 = (float *)(lVar3 + 0x170);
      pfVar2 = (float *)(lVar3 + 0x174);
      pfVar4 = (float *)(lVar3 + 0x178);
      goto LAB_00f7d09c;
    }
    fVar9 = 0.0;
    fVar7 = 0.0;
    fVar5 = 0.0;
    lVar3 = *(long *)(this + 0x28);
    if (lVar3 == 0) goto LAB_00f7d0d4;
LAB_00f7d0b0:
    pfVar1 = (float *)(lVar3 + 0x18c);
    pfVar2 = (float *)(lVar3 + 400);
    pfVar4 = (float *)(lVar3 + 0x194);
  }
  else {
    pfVar1 = (float *)(lVar3 + 0x18c);
    pfVar2 = (float *)(lVar3 + 400);
    pfVar4 = (float *)(lVar3 + 0x194);
LAB_00f7d09c:
    fVar5 = *pfVar4;
    fVar7 = *pfVar2;
    fVar9 = *pfVar1;
    lVar3 = *(long *)(this + 0x28);
    if (lVar3 != 0) goto LAB_00f7d0b0;
LAB_00f7d0d4:
    lVar3 = *(long *)(this + 0x20);
    if (lVar3 == 0) {
      fVar14 = 0.0;
      fVar13 = 0.0;
      fVar11 = 0.0;
      goto LAB_00f7d0f4;
    }
    pfVar1 = (float *)(lVar3 + 0x170);
    pfVar2 = (float *)(lVar3 + 0x174);
    pfVar4 = (float *)(lVar3 + 0x178);
  }
  fVar11 = *pfVar4;
  fVar13 = *pfVar2;
  fVar14 = *pfVar1;
LAB_00f7d0f4:
  uVar6 = NEON_fmadd(*(undefined4 *)(this + 0xbc),fVar7 - fVar13,
                     *(float *)(this + 0xb8) * (fVar9 - fVar14));
  uVar6 = NEON_fmadd(*(undefined4 *)(this + 0xc0),fVar5 - fVar11,uVar6);
  uVar6 = (**(code **)(**(long **)(this + 0xd8) + 0x18))(uVar6,*(long **)(this + 0xd8),this);
  uVar12 = *(undefined4 *)(this + 0x58);
  uVar8 = NEON_fmsub(*(undefined4 *)(this + 0xb8),uVar6,fVar9 - fVar14);
  uVar10 = NEON_fmsub(*(undefined4 *)(this + 0xbc),uVar6,fVar7 - fVar13);
  uVar6 = NEON_fmsub(*(undefined4 *)(this + 0xc0),uVar6,fVar5 - fVar11);
  lVar3 = *(long *)(this + 0x10);
  fVar5 = (float)NEON_fmadd(uVar12,uVar8,*(undefined4 *)(this + 100));
  uVar15 = NEON_fmadd(uVar12,uVar10,*(undefined4 *)(this + 0x68));
  uVar6 = NEON_fmadd(uVar12,uVar6,*(undefined4 *)(this + 0x6c));
  uVar8 = NEON_fmadd(*(undefined4 *)(this + 0x88),uVar15,*(float *)(this + 0x84) * fVar5);
  uVar10 = NEON_fmadd(*(undefined4 *)(this + 0x98),uVar15,*(float *)(this + 0x94) * fVar5);
  fVar9 = (float)NEON_fmadd(*(undefined4 *)(this + 0x8c),uVar6,uVar8);
  fVar7 = (float)NEON_fmadd(*(undefined4 *)(this + 0x9c),uVar6,uVar10);
  fVar9 = fVar9 * param_2;
  uVar8 = NEON_fmadd(*(undefined4 *)(this + 0xa8),uVar15,*(float *)(this + 0xa4) * fVar5);
  fVar7 = fVar7 * param_2;
  fVar5 = (float)NEON_fmadd(*(undefined4 *)(this + 0xac),uVar6,uVar8);
  fVar5 = fVar5 * param_2;
  fVar11 = -fVar9;
  fVar13 = -fVar7;
  if (lVar3 != 0) {
    dVar16 = (double)NEON_rev64(CONCAT44(*(float *)(lVar3 + 0x150) * fVar13,
                                         *(float *)(lVar3 + 0x15c) * fVar11),4);
    dVar16 = dVar16 - (double)CONCAT44(*(float *)(lVar3 + 0x160) * fVar7,
                                       *(float *)(lVar3 + 0x14c) * fVar9);
    uVar6 = NEON_fmsub(fVar5,*(undefined4 *)(lVar3 + 0x174),
                       *(float *)(lVar3 + 0x16c) * fVar11 + *(float *)(lVar3 + 0x170) * fVar13);
    uVar19 = *(undefined8 *)(lVar3 + 0x18c);
    uVar6 = NEON_fmadd(*(undefined4 *)(lVar3 + 0x280),uVar6,*(undefined4 *)(lVar3 + 0x194));
    *(undefined8 *)(lVar3 + 0x18c) =
         CONCAT44((float)((ulong)uVar19 >> 0x20) +
                  ((float)((ulong)dVar16 >> 0x20) - *(float *)(lVar3 + 0x164) * fVar5) *
                  (float)((ulong)*(undefined8 *)(lVar3 + 0x278) >> 0x20),
                  (float)uVar19 +
                  (SUB84(dVar16,0) - *(float *)(lVar3 + 0x154) * fVar5) *
                  (float)*(undefined8 *)(lVar3 + 0x278));
    *(undefined4 *)(lVar3 + 0x194) = uVar6;
  }
  lVar3 = *(long *)(this + 8);
  if (lVar3 != 0) {
    fVar14 = (float)NEON_fmsub(fVar5,*(undefined4 *)(lVar3 + 0xe0),
                               *(float *)(lVar3 + 0xd8) * fVar11 + *(float *)(lVar3 + 0xdc) * fVar13
                              );
    fVar17 = (float)NEON_fmsub(fVar5,*(undefined4 *)(lVar3 + 0xf0),
                               *(float *)(lVar3 + 0xe8) * fVar11 + *(float *)(lVar3 + 0xec) * fVar13
                              );
    fVar11 = (float)NEON_fmsub(fVar5,*(undefined4 *)(lVar3 + 0x100),
                               *(float *)(lVar3 + 0xf8) * fVar11 + *(float *)(lVar3 + 0xfc) * fVar13
                              );
    *(int *)(lVar3 + 0x158) = *(int *)(lVar3 + 0x158) + 1;
    *(float *)(lVar3 + 0x128) = *(float *)(lVar3 + 0x128) + fVar14;
    *(float *)(lVar3 + 300) = *(float *)(lVar3 + 300) + fVar17;
    *(float *)(lVar3 + 0x130) = *(float *)(lVar3 + 0x130) + fVar11;
    *(float *)(lVar3 + 0x170) = *(float *)(lVar3 + 0x170) + fVar14;
    *(float *)(lVar3 + 0x174) = *(float *)(lVar3 + 0x174) + fVar17;
    *(float *)(lVar3 + 0x178) = *(float *)(lVar3 + 0x178) + fVar11;
  }
  lVar3 = *(long *)(this + 0x28);
  if (lVar3 != 0) {
    uVar19 = NEON_rev64(CONCAT44(*(float *)(lVar3 + 0x150) * fVar7,*(float *)(lVar3 + 0x15c) * fVar9
                                ),4);
    uVar6 = NEON_fmadd(*(undefined4 *)(lVar3 + 0x170),fVar7,*(float *)(lVar3 + 0x16c) * fVar9);
    uVar6 = NEON_fmadd(*(undefined4 *)(lVar3 + 0x174),fVar5,uVar6);
    uVar18 = *(undefined8 *)(lVar3 + 0x18c);
    uVar6 = NEON_fmadd(*(undefined4 *)(lVar3 + 0x280),uVar6,*(undefined4 *)(lVar3 + 0x194));
    *(undefined8 *)(lVar3 + 0x18c) =
         CONCAT44((float)((ulong)uVar18 >> 0x20) +
                  ((float)((ulong)uVar19 >> 0x20) + fVar7 * *(float *)(lVar3 + 0x160) +
                  *(float *)(lVar3 + 0x164) * fVar5) *
                  (float)((ulong)*(undefined8 *)(lVar3 + 0x278) >> 0x20),
                  (float)uVar18 +
                  ((float)uVar19 + fVar9 * *(float *)(lVar3 + 0x14c) +
                  *(float *)(lVar3 + 0x154) * fVar5) * (float)*(undefined8 *)(lVar3 + 0x278));
    *(undefined4 *)(lVar3 + 0x194) = uVar6;
  }
  lVar3 = *(long *)(this + 0x20);
  if (lVar3 != 0) {
    uVar8 = NEON_fmadd(fVar7,*(undefined4 *)(lVar3 + 0xdc),fVar9 * *(float *)(lVar3 + 0xd8));
    uVar10 = NEON_fmadd(*(undefined4 *)(lVar3 + 0xec),fVar7,*(float *)(lVar3 + 0xe8) * fVar9);
    uVar6 = NEON_fmadd(*(undefined4 *)(lVar3 + 0xfc),fVar7,*(float *)(lVar3 + 0xf8) * fVar9);
    *(int *)(lVar3 + 0x158) = *(int *)(lVar3 + 0x158) + 1;
    fVar7 = (float)NEON_fmadd(fVar5,*(undefined4 *)(lVar3 + 0xe0),uVar8);
    fVar9 = (float)NEON_fmadd(*(undefined4 *)(lVar3 + 0xf0),fVar5,uVar10);
    fVar5 = (float)NEON_fmadd(*(undefined4 *)(lVar3 + 0x100),fVar5,uVar6);
    *(float *)(lVar3 + 0x128) = *(float *)(lVar3 + 0x128) + fVar7;
    *(float *)(lVar3 + 300) = *(float *)(lVar3 + 300) + fVar9;
    *(float *)(lVar3 + 0x130) = *(float *)(lVar3 + 0x130) + fVar5;
    *(float *)(lVar3 + 0x170) = *(float *)(lVar3 + 0x170) + fVar7;
    *(float *)(lVar3 + 0x174) = *(float *)(lVar3 + 0x174) + fVar9;
    *(float *)(lVar3 + 0x178) = *(float *)(lVar3 + 0x178) + fVar5;
  }
  return;
}


