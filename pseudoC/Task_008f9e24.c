// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~Task
// Entry Point: 008f9e24
// Size: 64 bytes
// Signature: undefined __thiscall ~Task(Task * this)


/* TerrainPatchOccluderManager::Task::~Task() */

void __thiscall TerrainPatchOccluderManager::Task::~Task(Task *this)

{
  *(undefined ***)this = &PTR__Task_00fde908;
  if (((byte)this[0x10] & 1) != 0) {
    operator_delete(*(void **)(this + 0x20));
  }
  operator_delete(this);
  return;
}


