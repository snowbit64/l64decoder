// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007a2de8
// Entry Point: 007a2de8
// Size: 164 bytes
// Signature: undefined FUN_007a2de8(void)


void FUN_007a2de8(long param_1,uint *param_2)

{
  long lVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  lVar1 = ReflectionUtil::getEntity(*param_2,0x20,"calcDistanceFrom","otherTransform");
  if (lVar1 != 0) {
    RawTransformGroup::updateWorldTransformation();
    fVar3 = *(float *)(param_1 + 0xe8);
    fVar4 = *(float *)(param_1 + 0xec);
    fVar5 = *(float *)(param_1 + 0xf0);
    RawTransformGroup::updateWorldTransformation();
    fVar3 = fVar3 - *(float *)(lVar1 + 0xe8);
    fVar4 = fVar4 - *(float *)(lVar1 + 0xec);
    fVar5 = fVar5 - *(float *)(lVar1 + 0xf0);
    param_2[0x42] = 4;
    uVar2 = NEON_fmadd(fVar4,fVar4,fVar3 * fVar3);
    fVar3 = (float)NEON_fmadd(fVar5,fVar5,uVar2);
    param_2[0x40] = (uint)SQRT(fVar3);
  }
  return;
}


