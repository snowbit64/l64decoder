// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~RenderPathManager
// Entry Point: 00a1e964
// Size: 336 bytes
// Signature: undefined __thiscall ~RenderPathManager(RenderPathManager * this)


/* RenderPathManager::~RenderPathManager() */

void __thiscall RenderPathManager::~RenderPathManager(RenderPathManager *this)

{
  long lVar1;
  
  lVar1 = 0;
  do {
    if (*(long **)(this + lVar1 + 0x130) != (long *)0x0) {
      (**(code **)(**(long **)(this + lVar1 + 0x130) + 8))();
    }
    lVar1 = lVar1 + 8;
  } while (lVar1 != 0xc0);
  if (*(long **)(this + 0x1f0) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x1f0) + 8))();
  }
  if (*(long **)(this + 0x1f8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x1f8) + 8))();
  }
  if (*(long **)(this + 0x200) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x200) + 8))();
  }
  if (*(long **)(this + 0x208) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x208) + 8))();
  }
  if (*(long **)(this + 0xe8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0xe8) + 8))();
  }
  if (*(long **)(this + 200) != (long *)0x0) {
    (**(code **)(**(long **)(this + 200) + 8))();
  }
  if (*(long **)(this + 0xa8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0xa8) + 8))();
  }
  if (*(long **)(this + 0x88) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x88) + 8))();
  }
  if (*(long **)(this + 0x68) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x68) + 8))();
  }
  if (*(long **)(this + 0x48) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x48) + 8))();
  }
  if (*(long **)(this + 0x28) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x28) + 8))();
  }
  if (*(long **)(this + 8) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00a1eaa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 8) + 8))();
    return;
  }
  return;
}


