// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateEntity
// Entry Point: 008c355c
// Size: 60 bytes
// Signature: undefined __thiscall updateEntity(DecalCullingStructure * this, CullingEntity * param_1, BoundingVolume * param_2)


/* DecalCullingStructure::updateEntity(DecalCullingStructure::CullingEntity*, BoundingVolume const*)
    */

void __thiscall
DecalCullingStructure::updateEntity
          (DecalCullingStructure *this,CullingEntity *param_1,BoundingVolume *param_2)

{
  float fVar1;
  
  if (param_2 != (BoundingVolume *)0x0) {
    fVar1 = *(float *)(param_2 + 0x18);
    updateEntity(this,param_1,*(float *)(param_2 + 0xc) - fVar1,*(float *)(param_2 + 0x14) - fVar1,
                 *(float *)(param_2 + 0xc) + fVar1,fVar1 + *(float *)(param_2 + 0x14));
    return;
  }
  updateEntity(this,param_1,-3.402823e+38,-3.402823e+38,3.402823e+38,3.402823e+38);
  return;
}


