// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setJointBreakListener
// Entry Point: 009265a4
// Size: 56 bytes
// Signature: undefined __thiscall setJointBreakListener(DestructionShape * this, IDestructionJointBreakListener * param_1)


/* DestructionShape::setJointBreakListener(IDestructionJointBreakListener*) */

void __thiscall
DestructionShape::setJointBreakListener
          (DestructionShape *this,IDestructionJointBreakListener *param_1)

{
  if (*(long **)(this + 0x3b8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x3b8) + 8))();
  }
  *(IDestructionJointBreakListener **)(this + 0x3b8) = param_1;
  return;
}


