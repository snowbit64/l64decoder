// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: findStateId
// Entry Point: 00704488
// Size: 72 bytes
// Signature: undefined __thiscall findStateId(AnimalAnimationSystem * this, uint param_1)


/* AnimalAnimationSystem::findStateId(unsigned int) */

ulong __thiscall AnimalAnimationSystem::findStateId(AnimalAnimationSystem *this,uint param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  lVar1 = *(long *)(this + 8) - *(long *)this;
  if (lVar1 != 0) {
    uVar2 = 0;
    uVar3 = (lVar1 >> 3) * -0x3333333333333333;
    do {
      if (*(uint *)(*(long *)this + uVar2 * 0x28) == param_1) {
        return uVar2;
      }
      uVar2 = (ulong)((int)uVar2 + 1);
    } while (uVar2 <= uVar3 && uVar3 - uVar2 != 0);
  }
  return 0xffffffff;
}


