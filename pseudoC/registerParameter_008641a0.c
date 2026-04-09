// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: registerParameter
// Entry Point: 008641a0
// Size: 8 bytes
// Signature: undefined __thiscall registerParameter(ConditionalAnimationEntity * this, uint param_1, PARAMETER_TYPE param_2, char * param_3)


/* ConditionalAnimationEntity::registerParameter(unsigned int,
   ConditionalAnimationShared::PARAMETER_TYPE, char const*) */

void __thiscall
ConditionalAnimationEntity::registerParameter
          (ConditionalAnimationEntity *this,uint param_1,PARAMETER_TYPE param_2,char *param_3)

{
  ConditionalAnimationShared::registerParameter
            ((ConditionalAnimationShared *)(this + 0xa8),param_1,param_2,param_3);
  return;
}


