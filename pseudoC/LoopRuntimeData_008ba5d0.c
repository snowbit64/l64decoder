// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~LoopRuntimeData
// Entry Point: 008ba5d0
// Size: 44 bytes
// Signature: undefined __thiscall ~LoopRuntimeData(LoopRuntimeData * this)


/* SteadyLoopSoundGenerator::LoopRuntimeData::~LoopRuntimeData() */

void __thiscall SteadyLoopSoundGenerator::LoopRuntimeData::~LoopRuntimeData(LoopRuntimeData *this)

{
  if (*(void **)(this + 0x18) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x18));
  }
  *(undefined8 *)(this + 0x18) = 0;
  return;
}


