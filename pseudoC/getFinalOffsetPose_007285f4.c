// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getFinalOffsetPose
// Entry Point: 007285f4
// Size: 148 bytes
// Signature: undefined __thiscall getFinalOffsetPose(StoppingPath * this, PlanarPose * param_1, float * param_2)


/* StoppingPath::getFinalOffsetPose(PlanarPose&, float&) const */

void __thiscall
StoppingPath::getFinalOffsetPose(StoppingPath *this,PlanarPose *param_1,float *param_2)

{
  long lVar1;
  undefined8 uVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  
  lVar1 = *(long *)(this + 8);
  fVar3 = *(float *)(lVar1 + -8);
  if (this[0x20] == (StoppingPath)0x0) {
    fVar5 = *(float *)(lVar1 + -4);
  }
  else {
    fVar3 = -fVar3;
    fVar5 = -*(float *)(lVar1 + -4);
  }
  fVar8 = (float)NEON_fmadd(fVar3,fVar3,fVar5 * fVar5);
  uVar2 = *(undefined8 *)(lVar1 + -0x10);
  fVar7 = 1.0;
  *(undefined8 *)param_1 = uVar2;
  if (1e-06 < fVar8) {
    fVar7 = 1.0 / SQRT(fVar8);
  }
  *(float *)(param_1 + 8) = fVar3 * fVar7;
  *(float *)(param_1 + 0xc) = fVar5 * fVar7;
  uVar4 = NEON_fmadd(fVar3 * fVar7,*(undefined4 *)(this + 0x18),(int)uVar2);
  uVar6 = NEON_fmadd(fVar5 * fVar7,*(undefined4 *)(this + 0x18),(int)((ulong)uVar2 >> 0x20));
  *(undefined4 *)param_1 = uVar4;
  *(undefined4 *)(param_1 + 4) = uVar6;
  *param_2 = *(float *)(lVar1 + -0x14);
  return;
}


