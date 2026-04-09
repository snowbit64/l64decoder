// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007a2e8c
// Entry Point: 007a2e8c
// Size: 160 bytes
// Signature: undefined FUN_007a2e8c(void)


void FUN_007a2e8c(long param_1,uint *param_2)

{
  long lVar1;
  undefined4 uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  lVar1 = ReflectionUtil::getEntity(*param_2,0x20,"calcDistanceSquaredFrom","otherTransform");
  if (lVar1 != 0) {
    RawTransformGroup::updateWorldTransformation();
    fVar4 = *(float *)(param_1 + 0xe8);
    fVar5 = *(float *)(param_1 + 0xec);
    fVar6 = *(float *)(param_1 + 0xf0);
    RawTransformGroup::updateWorldTransformation();
    fVar4 = fVar4 - *(float *)(lVar1 + 0xe8);
    fVar5 = fVar5 - *(float *)(lVar1 + 0xec);
    fVar6 = fVar6 - *(float *)(lVar1 + 0xf0);
    param_2[0x42] = 4;
    uVar2 = NEON_fmadd(fVar5,fVar5,fVar4 * fVar4);
    uVar3 = NEON_fmadd(fVar6,fVar6,uVar2);
    param_2[0x40] = uVar3;
  }
  return;
}


