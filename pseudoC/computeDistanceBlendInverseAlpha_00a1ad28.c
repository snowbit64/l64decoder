// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: computeDistanceBlendInverseAlpha
// Entry Point: 00a1ad28
// Size: 336 bytes
// Signature: undefined __thiscall computeDistanceBlendInverseAlpha(RenderList * this, GsShape * param_1, float param_2, float param_3)


/* RenderList::computeDistanceBlendInverseAlpha(GsShape const*, float, float) const */

float __thiscall
RenderList::computeDistanceBlendInverseAlpha
          (RenderList *this,GsShape *param_1,float param_2,float param_3)

{
  uint uVar1;
  ushort uVar2;
  LODTransformGroup *this_00;
  float fVar3;
  float fVar4;
  
  this_00 = *(LODTransformGroup **)(param_1 + 0x188);
  if (this_00 == (LODTransformGroup *)0x0) {
    if (((byte)param_1[0x191] >> 3 & 1) == 0) {
      return 0.0;
    }
    fVar4 = *(float *)(param_1 + 0x124) * *(float *)(*(long *)(this + 0x28) + 0x3e0) +
            *(float *)(param_1 + 0x1b0);
    if (fVar4 < param_3) {
      fVar4 = param_3 - fVar4;
      goto LAB_00a1ae50;
    }
    fVar4 = *(float *)(param_1 + 0x128) * *(float *)(*(long *)(this + 0x28) + 0x3e0) -
            *(float *)(param_1 + 0x1b0);
  }
  else {
    if (((byte)this_00[0x41] >> 4 & 1) == 0) {
      return 0.0;
    }
    uVar2 = *(ushort *)(param_1 + 0x194);
    fVar4 = *(float *)(param_1 + 0x124);
    uVar1 = uVar2 + 1;
    fVar3 = (float)LODTransformGroup::getDistance(this_00,uVar1);
    if (((fVar3 != 0.0) &&
        (uVar1 < (uint)((ulong)(*(long *)(*(long *)(param_1 + 0x188) + 0x30) -
                               *(long *)(*(long *)(param_1 + 0x188) + 0x28)) >> 3))) &&
       (fVar3 <= fVar4)) {
      fVar4 = fVar3;
    }
    if (uVar2 == 0) {
      fVar3 = -3.402823e+38;
    }
    else {
      fVar3 = (float)LODTransformGroup::getDistance
                               (*(LODTransformGroup **)(param_1 + 0x188),(uint)uVar2);
    }
    fVar4 = fVar4 * *(float *)(*(long *)(this + 0x28) + 0x3e4) - 1.5;
    if (fVar4 < param_3) {
      fVar4 = param_3 - fVar4;
      goto LAB_00a1ae50;
    }
    fVar4 = fVar3 * *(float *)(*(long *)(this + 0x28) + 0x3e4) + 1.5;
  }
  if (fVar4 <= param_3) {
    return 0.0;
  }
  fVar4 = param_3 - fVar4;
LAB_00a1ae50:
  return fVar4 * 0.3333333;
}


