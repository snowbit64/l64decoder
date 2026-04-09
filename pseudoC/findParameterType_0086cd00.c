// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: findParameterType
// Entry Point: 0086cd00
// Size: 80 bytes
// Signature: undefined __thiscall findParameterType(ConditionalAnimationShared * this, uint param_1, PARAMETER_TYPE * param_2)


/* ConditionalAnimationShared::findParameterType(unsigned int,
   ConditionalAnimationShared::PARAMETER_TYPE&) const */

undefined8 __thiscall
ConditionalAnimationShared::findParameterType
          (ConditionalAnimationShared *this,uint param_1,PARAMETER_TYPE *param_2)

{
  ConditionalAnimationShared **ppCVar1;
  ConditionalAnimationShared **ppCVar2;
  ConditionalAnimationShared **ppCVar3;
  
  ppCVar1 = (ConditionalAnimationShared **)(this + 8);
  ppCVar3 = (ConditionalAnimationShared **)*ppCVar1;
  ppCVar2 = ppCVar1;
  if (ppCVar3 != (ConditionalAnimationShared **)0x0) {
    do {
      if (*(uint *)(ppCVar3 + 4) >= param_1) {
        ppCVar2 = ppCVar3;
      }
      ppCVar3 = (ConditionalAnimationShared **)ppCVar3[*(uint *)(ppCVar3 + 4) < param_1];
    } while (ppCVar3 != (ConditionalAnimationShared **)0x0);
    if ((ppCVar2 != ppCVar1) && (*(uint *)(ppCVar2 + 4) <= param_1)) {
      *param_2 = *(PARAMETER_TYPE *)(ppCVar2 + 5);
      return 1;
    }
  }
  return 0;
}


