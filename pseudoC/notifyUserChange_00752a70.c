// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: notifyUserChange
// Entry Point: 00752a70
// Size: 36 bytes
// Signature: undefined __thiscall notifyUserChange(EngineManager * this)


/* non-virtual thunk to EngineManager::notifyUserChange() */

void __thiscall EngineManager::notifyUserChange(EngineManager *this)

{
  if (((byte)this[0x2f0] & 1) == 0) {
    *(undefined2 *)(this + 0x2f0) = 0;
    updateUniqueUserId();
    return;
  }
  **(undefined **)(this + 0x300) = 0;
  *(undefined8 *)(this + 0x2f8) = 0;
  updateUniqueUserId();
  return;
}


