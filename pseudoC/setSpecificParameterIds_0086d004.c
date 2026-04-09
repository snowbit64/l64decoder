// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setSpecificParameterIds
// Entry Point: 0086d004
// Size: 20 bytes
// Signature: undefined __thiscall setSpecificParameterIds(ConditionalAnimationInformation * this, uint * param_1, uint * param_2)


/* ConditionalAnimationInformation::setSpecificParameterIds(unsigned int const&, unsigned int
   const&) */

void __thiscall
ConditionalAnimationInformation::setSpecificParameterIds
          (ConditionalAnimationInformation *this,uint *param_1,uint *param_2)

{
  *(uint *)(this + 0x18) = *param_1;
  *(uint *)(this + 0x1c) = *param_2;
  return;
}


