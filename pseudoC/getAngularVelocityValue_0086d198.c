// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getAngularVelocityValue
// Entry Point: 0086d198
// Size: 132 bytes
// Signature: undefined __thiscall getAngularVelocityValue(ConditionalAnimationInformation * this, ConditionalAnimationValue * param_1)


/* ConditionalAnimationInformation::getAngularVelocityValue(ConditionalAnimationValue&) const */

undefined8 __thiscall
ConditionalAnimationInformation::getAngularVelocityValue
          (ConditionalAnimationInformation *this,ConditionalAnimationValue *param_1)

{
  uint uVar1;
  bool bVar2;
  ConditionalAnimationInformation **ppCVar3;
  ConditionalAnimationInformation **ppCVar4;
  ConditionalAnimationInformation **ppCVar5;
  
  uVar1 = *(uint *)(this + 0x1c);
  ConditionalAnimationValue::reset();
  ppCVar5 = (ConditionalAnimationInformation **)(this + 8);
  ppCVar4 = (ConditionalAnimationInformation **)*ppCVar5;
  ppCVar3 = ppCVar5;
  if (ppCVar4 != (ConditionalAnimationInformation **)0x0) {
    do {
      bVar2 = *(uint *)((long)ppCVar4 + 0x1c) < uVar1;
      if (!bVar2) {
        ppCVar3 = ppCVar4;
      }
      ppCVar4 = (ConditionalAnimationInformation **)ppCVar4[bVar2];
    } while (ppCVar4 != (ConditionalAnimationInformation **)0x0);
    if ((ppCVar3 != ppCVar5) && (*(uint *)((long)ppCVar3 + 0x1c) <= uVar1)) {
      ConditionalAnimationValue::operator=(param_1,(ConditionalAnimationValue *)(ppCVar3 + 4));
      return 1;
    }
  }
  return 0;
}


