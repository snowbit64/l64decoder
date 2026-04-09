// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setSpecificParameterIds
// Entry Point: 008641a8
// Size: 8 bytes
// Signature: undefined __thiscall setSpecificParameterIds(ConditionalAnimationEntity * this, uint * param_1, uint * param_2)


/* ConditionalAnimationEntity::setSpecificParameterIds(unsigned int const&, unsigned int const&) */

void __thiscall
ConditionalAnimationEntity::setSpecificParameterIds
          (ConditionalAnimationEntity *this,uint *param_1,uint *param_2)

{
  ConditionalAnimationInformation::setSpecificParameterIds
            ((ConditionalAnimationInformation *)(this + 0x88),param_1,param_2);
  return;
}


