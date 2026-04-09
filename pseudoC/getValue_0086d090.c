// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getValue
// Entry Point: 0086d090
// Size: 132 bytes
// Signature: undefined __thiscall getValue(ConditionalAnimationInformation * this, uint param_1, ConditionalAnimationValue * param_2)


/* ConditionalAnimationInformation::getValue(unsigned int, ConditionalAnimationValue&) const */

undefined8 __thiscall
ConditionalAnimationInformation::getValue
          (ConditionalAnimationInformation *this,uint param_1,ConditionalAnimationValue *param_2)

{
  bool bVar1;
  ConditionalAnimationInformation **ppCVar2;
  ConditionalAnimationInformation **ppCVar3;
  ConditionalAnimationInformation **ppCVar4;
  
  ConditionalAnimationValue::reset();
  ppCVar4 = (ConditionalAnimationInformation **)(this + 8);
  ppCVar3 = (ConditionalAnimationInformation **)*ppCVar4;
  ppCVar2 = ppCVar4;
  if (ppCVar3 != (ConditionalAnimationInformation **)0x0) {
    do {
      bVar1 = *(uint *)((long)ppCVar3 + 0x1c) < param_1;
      if (!bVar1) {
        ppCVar2 = ppCVar3;
      }
      ppCVar3 = (ConditionalAnimationInformation **)ppCVar3[bVar1];
    } while (ppCVar3 != (ConditionalAnimationInformation **)0x0);
    if ((ppCVar2 != ppCVar4) && (*(uint *)((long)ppCVar2 + 0x1c) <= param_1)) {
      ConditionalAnimationValue::operator=(param_2,(ConditionalAnimationValue *)(ppCVar2 + 4));
      return 1;
    }
  }
  return 0;
}


