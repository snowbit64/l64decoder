// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setRootNode
// Entry Point: 008c2784
// Size: 108 bytes
// Signature: undefined __thiscall setRootNode(CullingManager * this, RawTransformGroup * param_1)


/* CullingManager::setRootNode(RawTransformGroup*) */

void __thiscall CullingManager::setRootNode(CullingManager *this,RawTransformGroup *param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 0x158);
  if (plVar1 != (long *)param_1) {
    *(RawTransformGroup **)(this + 0x158) = param_1;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x28))(plVar1,2,0);
      param_1 = *(RawTransformGroup **)(this + 0x158);
    }
    if ((long *)param_1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x008c27e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)param_1 + 0x28))(param_1,2,0);
      return;
    }
  }
  return;
}


