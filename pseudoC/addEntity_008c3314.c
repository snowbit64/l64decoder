// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addEntity
// Entry Point: 008c3314
// Size: 60 bytes
// Signature: undefined __thiscall addEntity(DecalCullingStructure * this, CullingEntity * param_1, BoundingVolume * param_2)


/* DecalCullingStructure::addEntity(DecalCullingStructure::CullingEntity*, BoundingVolume const*) */

void __thiscall
DecalCullingStructure::addEntity
          (DecalCullingStructure *this,CullingEntity *param_1,BoundingVolume *param_2)

{
  float fVar1;
  
  if (param_2 != (BoundingVolume *)0x0) {
    fVar1 = *(float *)(param_2 + 0x18);
    addEntity(this,param_1,*(float *)(param_2 + 0xc) - fVar1,*(float *)(param_2 + 0x14) - fVar1,
              *(float *)(param_2 + 0xc) + fVar1,fVar1 + *(float *)(param_2 + 0x14));
    return;
  }
  addEntity(this,param_1,-3.402823e+38,-3.402823e+38,3.402823e+38,3.402823e+38);
  return;
}


