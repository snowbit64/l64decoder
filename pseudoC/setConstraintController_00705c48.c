// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setConstraintController
// Entry Point: 00705c48
// Size: 16 bytes
// Signature: undefined __thiscall setConstraintController(AnimalAnimationSystem * this, IConstraintController * param_1)


/* AnimalAnimationSystem::setConstraintController(CharacterSet::IConstraintController*) */

void __thiscall
AnimalAnimationSystem::setConstraintController
          (AnimalAnimationSystem *this,IConstraintController *param_1)

{
  if (*(CharacterSet **)(this + 0x298) != (CharacterSet *)0x0) {
    CharacterSet::setConstraintController(*(CharacterSet **)(this + 0x298),param_1);
    return;
  }
  return;
}


