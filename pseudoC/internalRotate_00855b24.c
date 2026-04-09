// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: internalRotate
// Entry Point: 00855b24
// Size: 488 bytes
// Signature: undefined __thiscall internalRotate(Joint * this, Vector3 * param_1, float param_2)


/* CCDIKSolverUtil::Joint::internalRotate(Vector3 const&, float) */

void __thiscall CCDIKSolverUtil::Joint::internalRotate(Joint *this,Vector3 *param_1,float param_2)

{
  undefined8 *puVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined4 uVar22;
  float local_48;
  float fStack_44;
  
  fVar11 = *(float *)param_1;
  fVar9 = *(float *)(param_1 + 4);
  fVar10 = *(float *)(param_1 + 8);
  fVar16 = 0.0;
  fVar8 = 0.0;
  fVar19 = 0.0;
  fVar14 = 0.0;
  fVar2 = 0.0;
  fVar6 = 1.0;
  fVar13 = 1.0;
  fVar4 = 1.0;
  uVar3 = NEON_fmadd(fVar11,fVar11,fVar9 * fVar9);
  fVar12 = (float)NEON_fmadd(fVar10,fVar10,uVar3);
  fVar18 = 0.0;
  if (fVar12 != 0.0) {
    sincosf(param_2 * 0.5,&fStack_44,&local_48);
    fStack_44 = fStack_44 / SQRT(fVar12);
    fVar11 = fVar11 * fStack_44;
    fVar9 = fVar9 * fStack_44;
    fVar10 = fVar10 * fStack_44;
    fVar16 = fVar11 * fVar9 + local_48 * fVar10;
    fVar8 = fVar11 * fVar9 - local_48 * fVar10;
    fVar18 = fVar11 * fVar10 - local_48 * fVar9;
    fVar14 = fVar11 * fVar10 + local_48 * fVar9;
    fVar19 = fVar9 * fVar10 + local_48 * fVar11;
    fVar2 = fVar9 * fVar10 - local_48 * fVar11;
    fVar16 = fVar16 + fVar16;
    fVar8 = fVar8 + fVar8;
    fVar18 = fVar18 + fVar18;
    fVar6 = (float)NEON_fmadd(fVar9 * fVar9 + fVar10 * fVar10,0xc0000000,0x3f800000);
    fVar13 = (float)NEON_fmadd(fVar11 * fVar11 + fVar10 * fVar10,0xc0000000,0x3f800000);
    fVar19 = fVar19 + fVar19;
    fVar14 = fVar14 + fVar14;
    fVar2 = fVar2 + fVar2;
    fVar4 = (float)NEON_fmadd(fVar11 * fVar11 + fVar9 * fVar9,0xc0000000,0x3f800000);
  }
  fVar9 = *(float *)(this + 0x38);
  uVar17 = *(undefined4 *)(this + 0x28);
  fVar10 = (float)*(undefined8 *)(this + 0x30);
  fVar11 = (float)((ulong)*(undefined8 *)(this + 0x30) >> 0x20);
  puVar1 = (undefined8 *)(this + 0x20);
  *(undefined4 *)(this + 0x2c) = 0;
  uVar22 = *(undefined4 *)(this + 0x48);
  *(undefined4 *)(this + 0x3c) = 0;
  fVar12 = (float)*puVar1;
  fVar15 = (float)((ulong)*puVar1 >> 0x20);
  uVar3 = NEON_fmadd(fVar6,uVar17,fVar16 * fVar9);
  uVar5 = NEON_fmadd(fVar8,uVar17,fVar13 * fVar9);
  fVar20 = (float)*(undefined8 *)(this + 0x40);
  fVar21 = (float)((ulong)*(undefined8 *)(this + 0x40) >> 0x20);
  uVar3 = NEON_fmadd(fVar18,uVar22,uVar3);
  uVar7 = NEON_fmadd(fVar14,uVar17,fVar2 * fVar9);
  uVar17 = NEON_fmadd(uVar17,0,fVar9 * 0.0);
  uVar5 = NEON_fmadd(fVar19,uVar22,uVar5);
  *(undefined4 *)(this + 0x28) = uVar3;
  uVar3 = NEON_fmadd(fVar4,uVar22,uVar7);
  *(undefined4 *)(this + 0x38) = uVar5;
  fVar9 = (float)NEON_fmadd(uVar22,0,uVar17);
  *(ulong *)(this + 0x30) =
       CONCAT44(fVar11 * fVar13 + fVar15 * fVar8 + fVar21 * fVar19,
                fVar10 * fVar13 + fVar12 * fVar8 + fVar20 * fVar19);
  *(ulong *)(this + 0x40) =
       CONCAT44(fVar11 * fVar2 + fVar15 * fVar14 + fVar21 * fVar4,
                fVar10 * fVar2 + fVar12 * fVar14 + fVar20 * fVar4);
  *(undefined4 *)(this + 0x48) = uVar3;
  *(undefined4 *)(this + 0x5c) = 0x3f800000;
  *(undefined4 *)(this + 0x4c) = 0;
  *(ulong *)(this + 0x50) =
       CONCAT44(fVar11 * 0.0 + fVar15 * 0.0 + fVar21 * 0.0 +
                (float)((ulong)*(undefined8 *)(this + 0x50) >> 0x20),
                fVar10 * 0.0 + fVar12 * 0.0 + fVar20 * 0.0 + (float)*(undefined8 *)(this + 0x50));
  *(float *)(this + 0x58) = fVar9 + *(float *)(this + 0x58);
  *puVar1 = CONCAT44(fVar11 * fVar16 + fVar15 * fVar6 + fVar21 * fVar18,
                     fVar10 * fVar16 + fVar12 * fVar6 + fVar20 * fVar18);
  JointLimits::bound((JointLimits *)this,(Matrix4x4 *)puVar1);
  return;
}


