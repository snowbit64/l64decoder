// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setLocalJointLimits
// Entry Point: 00789864
// Size: 564 bytes
// Signature: undefined __thiscall setLocalJointLimits(JointLimits * this, float param_1, float param_2, float param_3, float param_4, float param_5, float param_6, GsQuaternion * param_7)


/* CCDIKSolverUtil::JointLimits::setLocalJointLimits(float, float, float, float, float, float,
   GsQuaternion const&) */

void __thiscall
CCDIKSolverUtil::JointLimits::setLocalJointLimits
          (JointLimits *this,float param_1,float param_2,float param_3,float param_4,float param_5,
          float param_6,GsQuaternion *param_7)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  undefined4 uVar15;
  float local_78;
  float fStack_74;
  float local_70;
  float fStack_6c;
  float local_68;
  float fStack_64;
  
  fVar1 = (param_1 + param_2) * 0.5;
  fVar4 = (param_5 + param_6) * 0.5;
  fVar14 = (param_3 + param_4) * 0.5;
  sincosf(fVar1 * 0.5,&fStack_64,&local_68);
  uVar5 = *(undefined4 *)param_7;
  fVar12 = fStack_64 * 0.0;
  uVar6 = *(undefined4 *)(param_7 + 8);
  fVar10 = *(float *)(param_7 + 0xc);
  uVar2 = NEON_fmadd(uVar5,fStack_64,local_68 * *(float *)(param_7 + 4));
  fVar3 = (float)NEON_fmadd(uVar6,fVar12,uVar2);
  fVar11 = (float)NEON_fmsub(fVar10,fVar12,fVar3);
  *(float *)(this + 0xc) = fVar11;
  fVar7 = -*(float *)(param_7 + 4);
  uVar2 = NEON_fmadd(uVar5,fVar12,fVar12 * *(float *)(param_7 + 4));
  uVar8 = NEON_fmadd(uVar5,fVar12,fVar12 * fVar7);
  uVar6 = NEON_fmadd(uVar6,local_68,uVar8);
  uVar13 = NEON_fmadd(fVar10,fStack_64,uVar6);
  *(undefined4 *)(this + 0x10) = uVar13;
  uVar6 = *(undefined4 *)(param_7 + 8);
  fVar9 = (float)NEON_fmsub(uVar6,fStack_64,uVar2);
  uVar8 = NEON_fmadd(fVar10,local_68,fVar9);
  uVar2 = NEON_fmadd(uVar5,local_68,fStack_64 * fVar7);
  *(undefined4 *)(this + 0x14) = uVar8;
  uVar2 = NEON_fmsub(uVar6,fVar12,uVar2);
  uVar15 = NEON_fmsub(*(undefined4 *)(param_7 + 0xc),fVar12,uVar2);
  sincosf(fVar14 * 0.5,&fStack_6c,&local_70);
  fVar3 = (float)NEON_fnmadd(-fVar10,fVar12,-fVar3);
  fVar7 = fStack_6c * 0.0;
  uVar2 = NEON_fmadd(uVar15,fVar7,local_70 * fVar11);
  uVar5 = NEON_fmadd(uVar15,fVar7,fStack_6c * fVar11);
  uVar6 = NEON_fmadd(uVar15,fStack_6c,fVar7 * fVar3);
  fVar11 = (float)NEON_fmadd(uVar13,fVar7,uVar2);
  uVar5 = NEON_fmsub(uVar13,fVar7,uVar5);
  uVar2 = NEON_fmadd(uVar15,local_70,fVar7 * fVar3);
  uVar6 = NEON_fmadd(uVar13,local_70,uVar6);
  uVar15 = NEON_fmadd(uVar8,local_70,uVar5);
  uVar2 = NEON_fmsub(uVar13,fStack_6c,uVar2);
  uVar5 = NEON_fnmadd(fVar10,local_68,-fVar9);
  fVar9 = (float)NEON_fmsub(uVar8,fStack_6c,fVar11);
  uVar13 = NEON_fmadd(uVar8,fVar7,uVar6);
  uVar8 = NEON_fmsub(uVar8,fVar7,uVar2);
  sincosf(fVar4 * 0.5,&fStack_74,&local_78);
  fVar3 = (float)NEON_fnmadd(uVar5,fStack_6c,-fVar11);
  fVar7 = fStack_74 * 0.0;
  uVar6 = NEON_fmadd(uVar8,fVar7,local_78 * fVar9);
  uVar5 = NEON_fmadd(uVar8,local_78,fVar7 * fVar3);
  uVar2 = NEON_fmadd(uVar8,fVar7,fStack_74 * fVar3);
  uVar8 = NEON_fmadd(uVar8,fStack_74,fVar7 * fVar9);
  uVar6 = NEON_fmadd(uVar13,fStack_74,uVar6);
  uVar5 = NEON_fmsub(uVar13,fVar7,uVar5);
  uVar2 = NEON_fmadd(uVar13,local_78,uVar2);
  uVar13 = NEON_fmsub(uVar13,fVar7,uVar8);
  uVar8 = NEON_fmsub(uVar15,fVar7,uVar6);
  uVar6 = NEON_fmsub(uVar15,fStack_74,uVar5);
  uVar2 = NEON_fmadd(uVar15,fVar7,uVar2);
  uVar5 = NEON_fmadd(uVar15,local_78,uVar13);
  *(undefined4 *)(this + 8) = uVar6;
  *(undefined4 *)(this + 0xc) = uVar8;
  *(undefined4 *)(this + 0x10) = uVar2;
  *(undefined4 *)(this + 0x14) = uVar5;
  fVar1 = sinf((param_2 - fVar1) * 0.5);
  *(float *)this = -fVar1;
  *(float *)(this + 4) = fVar1;
  fVar1 = sinf((param_4 - fVar14) * 0.5);
  fVar3 = sinf((param_6 - fVar4) * 0.5);
  *(float *)(this + 0x18) = fVar1;
  *(float *)(this + 0x1c) = fVar3;
  return;
}


