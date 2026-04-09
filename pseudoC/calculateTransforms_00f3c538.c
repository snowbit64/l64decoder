// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: calculateTransforms
// Entry Point: 00f3c538
// Size: 596 bytes
// Signature: undefined __thiscall calculateTransforms(btGeneric6DofConstraint * this, btTransform * param_1, btTransform * param_2)


/* btGeneric6DofConstraint::calculateTransforms(btTransform const&, btTransform const&) */

void __thiscall
btGeneric6DofConstraint::calculateTransforms
          (btGeneric6DofConstraint *this,btTransform *param_1,btTransform *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined4 uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  
  fVar1 = *(float *)param_1;
  fVar9 = *(float *)(param_1 + 4);
  fVar12 = *(float *)(param_1 + 0x10);
  fVar16 = *(float *)(param_1 + 0x14);
  fVar6 = *(float *)(this + 0x50);
  fVar7 = (float)*(undefined8 *)(this + 0x48);
  fVar11 = (float)((ulong)*(undefined8 *)(this + 0x48) >> 0x20);
  uVar8 = *(undefined4 *)(this + 0x60);
  fVar4 = (float)*(undefined8 *)(this + 0x58);
  fVar5 = (float)((ulong)*(undefined8 *)(this + 0x58) >> 0x20);
  fVar20 = *(float *)(param_1 + 8);
  uVar10 = NEON_fmadd(uVar8,fVar9,fVar6 * fVar1);
  fVar14 = *(float *)(param_1 + 0x20);
  fVar24 = *(float *)(param_1 + 0x24);
  fVar15 = (float)*(undefined8 *)(this + 0x78);
  fVar19 = (float)((ulong)*(undefined8 *)(this + 0x78) >> 0x20);
  uVar23 = *(undefined4 *)(this + 0x70);
  fVar25 = *(float *)(param_1 + 0x18);
  fVar21 = (float)*(undefined8 *)(this + 0x68);
  fVar22 = (float)((ulong)*(undefined8 *)(this + 0x68) >> 0x20);
  uVar13 = NEON_rev64(CONCAT44(fVar19 * fVar9,fVar15 * fVar12),4);
  uVar10 = NEON_fmadd(uVar23,fVar20,uVar10);
  fVar26 = *(float *)(param_1 + 0x28);
  uVar18 = NEON_fmadd(fVar16,uVar8,fVar12 * fVar6);
  fVar2 = *(float *)(this + 0x80);
  uVar8 = NEON_fmadd(fVar24,uVar8,fVar14 * fVar6);
  uVar17 = *(undefined8 *)(param_1 + 0x30);
  uVar18 = NEON_fmadd(fVar25,uVar23,uVar18);
  fVar3 = *(float *)(param_1 + 0x38);
  fVar6 = (float)NEON_fmadd(fVar2,fVar26,fVar14 * fVar15 + fVar24 * fVar19);
  uVar8 = NEON_fmadd(fVar26,uVar23,uVar8);
  *(ulong *)(this + 0x450) =
       CONCAT44(fVar11 * fVar12 + fVar5 * fVar16 + fVar22 * fVar25,
                fVar7 * fVar12 + fVar4 * fVar16 + fVar21 * fVar25);
  *(ulong *)(this + 0x440) =
       CONCAT44(fVar11 * fVar1 + fVar5 * fVar9 + fVar22 * fVar20,
                fVar7 * fVar1 + fVar4 * fVar9 + fVar21 * fVar20);
  fVar12 = *(float *)(this + 0x90);
  *(undefined4 *)(this + 0x448) = uVar10;
  *(undefined4 *)(this + 0x44c) = 0;
  *(undefined4 *)(this + 0x458) = uVar18;
  uVar10 = *(undefined4 *)(this + 0xa0);
  *(undefined4 *)(this + 0x45c) = 0;
  uVar23 = *(undefined4 *)(this + 0xb0);
  *(ulong *)(this + 0x460) =
       CONCAT44(fVar11 * fVar14 + fVar5 * fVar24 + fVar22 * fVar26,
                fVar7 * fVar14 + fVar4 * fVar24 + fVar21 * fVar26);
  *(undefined4 *)(this + 0x468) = uVar8;
  *(undefined4 *)(this + 0x46c) = 0;
  *(ulong *)(this + 0x470) =
       CONCAT44((float)((ulong)uVar13 >> 0x20) + fVar16 * fVar19 + fVar25 * fVar2 +
                (float)((ulong)uVar17 >> 0x20),
                (float)uVar13 + fVar1 * fVar15 + fVar20 * fVar2 + (float)uVar17);
  *(float *)(this + 0x478) = fVar6 + fVar3;
  *(undefined4 *)(this + 0x47c) = 0;
  fVar6 = *(float *)param_2;
  fVar2 = *(float *)(param_2 + 4);
  fVar11 = *(float *)(param_2 + 0x10);
  fVar15 = *(float *)(param_2 + 0x14);
  fVar19 = *(float *)(param_2 + 0x20);
  fVar24 = *(float *)(param_2 + 0x24);
  fVar1 = *(float *)(param_2 + 8);
  fVar3 = (float)*(undefined8 *)(this + 0x88);
  fVar5 = (float)((ulong)*(undefined8 *)(this + 0x88) >> 0x20);
  fVar25 = *(float *)(param_2 + 0x28);
  fVar9 = (float)*(undefined8 *)(this + 0x98);
  fVar7 = (float)((ulong)*(undefined8 *)(this + 0x98) >> 0x20);
  uVar8 = NEON_fmadd(uVar10,fVar2,fVar12 * fVar6);
  fVar20 = *(float *)(param_2 + 0x18);
  fVar21 = (float)*(undefined8 *)(this + 0xb8);
  fVar22 = (float)((ulong)*(undefined8 *)(this + 0xb8) >> 0x20);
  uVar18 = NEON_fmadd(fVar15,uVar10,fVar11 * fVar12);
  fVar14 = (float)*(undefined8 *)(this + 0xa8);
  fVar16 = (float)((ulong)*(undefined8 *)(this + 0xa8) >> 0x20);
  uVar8 = NEON_fmadd(uVar23,fVar1,uVar8);
  uVar13 = NEON_rev64(CONCAT44(fVar22 * fVar2,fVar21 * fVar11),4);
  uVar10 = NEON_fmadd(fVar24,uVar10,fVar19 * fVar12);
  uVar18 = NEON_fmadd(fVar20,uVar23,uVar18);
  uVar17 = *(undefined8 *)(param_2 + 0x30);
  fVar12 = *(float *)(param_2 + 0x38);
  *(undefined4 *)(this + 0x488) = uVar8;
  fVar4 = *(float *)(this + 0xc0);
  *(ulong *)(this + 0x480) =
       CONCAT44(fVar5 * fVar6 + fVar7 * fVar2 + fVar16 * fVar1,
                fVar3 * fVar6 + fVar9 * fVar2 + fVar14 * fVar1);
  *(undefined4 *)(this + 0x48c) = 0;
  *(ulong *)(this + 0x490) =
       CONCAT44(fVar5 * fVar11 + fVar7 * fVar15 + fVar16 * fVar20,
                fVar3 * fVar11 + fVar9 * fVar15 + fVar14 * fVar20);
  *(undefined4 *)(this + 0x498) = uVar18;
  fVar2 = (float)NEON_fmadd(fVar4,fVar25,fVar19 * fVar21 + fVar24 * fVar22);
  uVar8 = NEON_fmadd(fVar25,uVar23,uVar10);
  *(undefined4 *)(this + 0x49c) = 0;
  *(ulong *)(this + 0x4a0) =
       CONCAT44(fVar5 * fVar19 + fVar7 * fVar24 + fVar16 * fVar25,
                fVar3 * fVar19 + fVar9 * fVar24 + fVar14 * fVar25);
  *(undefined4 *)(this + 0x4ac) = 0;
  *(undefined4 *)(this + 0x4a8) = uVar8;
  *(undefined4 *)(this + 0x4bc) = 0;
  *(ulong *)(this + 0x4b0) =
       CONCAT44((float)((ulong)uVar13 >> 0x20) + fVar15 * fVar22 + fVar20 * fVar4 +
                (float)((ulong)uVar17 >> 0x20),
                (float)uVar13 + fVar6 * fVar21 + fVar1 * fVar4 + (float)uVar17);
  *(float *)(this + 0x4b8) = fVar2 + fVar12;
  calculateLinearInfo();
  calculateAngleInfo();
  if (this[0x52d] != (btGeneric6DofConstraint)0x0) {
    fVar2 = *(float *)(*(long *)(this + 0x30) + 0x19c);
    fVar6 = fVar2 + *(float *)(*(long *)(this + 0x28) + 0x19c);
    fVar1 = fVar2 / fVar6;
    this[0x518] = (btGeneric6DofConstraint)
                  (*(float *)(*(long *)(this + 0x28) + 0x19c) < 1.192093e-07 || fVar2 < 1.192093e-07
                  );
    if (fVar6 <= 0.0) {
      fVar1 = 0.5;
    }
    *(float *)(this + 0x510) = fVar1;
    *(float *)(this + 0x514) = 1.0 - fVar1;
  }
  return;
}


