// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: deleteJoint
// Entry Point: 00924378
// Size: 64 bytes
// Signature: undefined __thiscall deleteJoint(DestructionShape * this, uint param_1, bool param_2)


/* DestructionShape::deleteJoint(unsigned int, bool) */

void __thiscall DestructionShape::deleteJoint(DestructionShape *this,uint param_1,bool param_2)

{
  Bt2ScenegraphPhysicsContext::enqueueRemoveLightJoint
            (*(Bt2ScenegraphPhysicsContext **)(this + 0x290),param_1);
  onJointRemoved(this,param_1,param_2);
  return;
}


