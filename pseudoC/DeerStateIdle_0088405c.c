// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DeerStateIdle
// Entry Point: 0088405c
// Size: 68 bytes
// Signature: undefined __thiscall ~DeerStateIdle(DeerStateIdle * this)


/* DeerStateIdle::~DeerStateIdle() */

void __thiscall DeerStateIdle::~DeerStateIdle(DeerStateIdle *this)

{
  *(undefined ***)this = &PTR__DeerStateIdle_00fdc5e8;
  if (*(long **)(this + 0x18) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x18) + 8))();
  }
  operator_delete(this);
  return;
}


