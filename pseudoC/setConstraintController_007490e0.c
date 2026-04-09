// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setConstraintController
// Entry Point: 007490e0
// Size: 8 bytes
// Signature: undefined __thiscall setConstraintController(CharacterSet * this, IConstraintController * param_1)


/* CharacterSet::setConstraintController(CharacterSet::IConstraintController*) */

void __thiscall
CharacterSet::setConstraintController(CharacterSet *this,IConstraintController *param_1)

{
  *(IConstraintController **)(this + 0x48) = param_1;
  return;
}


