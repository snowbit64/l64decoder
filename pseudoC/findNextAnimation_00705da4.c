// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: findNextAnimation
// Entry Point: 00705da4
// Size: 48 bytes
// Signature: undefined __thiscall findNextAnimation(AnimalAnimationSystem * this, uint param_1, uint * param_2)


/* AnimalAnimationSystem::findNextAnimation(unsigned int, unsigned int&) */

void __thiscall
AnimalAnimationSystem::findNextAnimation(AnimalAnimationSystem *this,uint param_1,uint *param_2)

{
  ulong uVar1;
  
  uVar1 = AnimalAnimationSystemSource::findRandomAnimation
                    (*(AnimalAnimationSystemSource **)(this + 0x288),param_1,param_2);
  if ((uVar1 & 1) == 0) {
    *param_2 = 0xffffffff;
  }
  return;
}


