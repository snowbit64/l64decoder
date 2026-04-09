// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007a7310
// Entry Point: 007a7310
// Size: 336 bytes
// Signature: undefined FUN_007a7310(void)


void FUN_007a7310(long param_1,long param_2)

{
  uint uVar1;
  LODTransformGroup **ppLVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  
  uVar4 = *(undefined4 *)(param_1 + 0x128);
  fVar5 = *(float *)(param_1 + 0x124);
  uVar1 = (uint)*(undefined8 *)(param_1 + 0x10);
  if ((uVar1 >> 0xb & 1) == 0) {
    if ((uVar1 >> 0xe & 1) == 0) {
      if ((uVar1 >> 0xd & 1) == 0) goto LAB_007a7438;
      LightSource::updateLODTransformGroup();
      if (*(LODTransformGroup **)(param_1 + 0x160) == (LODTransformGroup *)0x0) goto LAB_007a7438;
      ppLVar2 = (LODTransformGroup **)(param_1 + 0x160);
      fVar5 = *(float *)(param_1 + 0x124);
      fVar3 = (float)LODTransformGroup::getDistance
                               (*(LODTransformGroup **)(param_1 + 0x160),
                                *(int *)(param_1 + 0x168) + 1);
      uVar1 = *(uint *)(param_1 + 0x168);
    }
    else {
      AudioSource::updateLODTransformGroup();
      if (*(LODTransformGroup **)(param_1 + 0x290) == (LODTransformGroup *)0x0) goto LAB_007a7438;
      ppLVar2 = (LODTransformGroup **)(param_1 + 0x290);
      fVar5 = *(float *)(param_1 + 0x124);
      fVar3 = (float)LODTransformGroup::getDistance
                               (*(LODTransformGroup **)(param_1 + 0x290),
                                *(int *)(param_1 + 0x28c) + 1);
      uVar1 = *(uint *)(param_1 + 0x28c);
    }
    if ((fVar3 != 0.0) &&
       (uVar1 + 1 < (uint)((ulong)(*(long *)(*ppLVar2 + 0x30) - *(long *)(*ppLVar2 + 0x28)) >> 3)))
    {
LAB_007a7410:
      if (fVar3 <= fVar5) {
        fVar5 = fVar3;
      }
    }
  }
  else {
    GsShape::updateLODTransformGroup();
    if (*(LODTransformGroup **)(param_1 + 0x188) == (LODTransformGroup *)0x0) goto LAB_007a7438;
    uVar1 = (uint)*(ushort *)(param_1 + 0x194);
    ppLVar2 = (LODTransformGroup **)(param_1 + 0x188);
    fVar5 = *(float *)(param_1 + 0x124);
    fVar3 = (float)LODTransformGroup::getDistance
                             (*(LODTransformGroup **)(param_1 + 0x188),uVar1 + 1);
    if ((fVar3 != 0.0) &&
       (uVar1 + 1 < (uint)((ulong)(*(long *)(*ppLVar2 + 0x30) - *(long *)(*ppLVar2 + 0x28)) >> 3)))
    goto LAB_007a7410;
  }
  if (uVar1 == 0) {
    uVar4 = 0xff7fffff;
  }
  else {
    uVar4 = LODTransformGroup::getDistance(*ppLVar2,uVar1);
  }
LAB_007a7438:
  *(undefined4 *)(param_2 + 0x100) = uVar4;
  *(float *)(param_2 + 0x110) = fVar5;
  *(undefined4 *)(param_2 + 0x108) = 4;
  *(undefined4 *)(param_2 + 0x118) = 4;
  return;
}


