// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DogStateSleep
// Entry Point: 0088dce4
// Size: 68 bytes
// Signature: undefined __thiscall ~DogStateSleep(DogStateSleep * this)


/* DogStateSleep::~DogStateSleep() */

void __thiscall DogStateSleep::~DogStateSleep(DogStateSleep *this)

{
  *(undefined ***)this = &PTR__DogStateSleep_00fdcf38;
  if (*(long **)(this + 0x18) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x18) + 8))();
  }
  *(undefined8 *)(this + 0x18) = 0;
  return;
}


