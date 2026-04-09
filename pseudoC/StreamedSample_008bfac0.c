// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~StreamedSample
// Entry Point: 008bfac0
// Size: 136 bytes
// Signature: undefined __thiscall ~StreamedSample(StreamedSample * this)


/* StreamedSample::~StreamedSample() */

void __thiscall StreamedSample::~StreamedSample(StreamedSample *this)

{
  long *plVar1;
  
  *(undefined ***)this = &PTR__StreamedSample_00fddd78;
  *(undefined ***)(this + 0x20) = &PTR__StreamedSample_00fdddb0;
  if (*(long **)(this + 0x38) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x38) + 8))();
  }
  *(undefined8 *)(this + 0x38) = 0;
  if (*(long **)(this + 0x30) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x30) + 8))();
  }
  plVar1 = *(long **)(this + 0x40);
  *(undefined8 *)(this + 0x30) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  this[0x28] = (StreamedSample)0x0;
  *(long **)(this + 0x40) = (long *)0x0;
  *(undefined8 *)(this + 0x48) = 0;
  Entity::~Entity((Entity *)this);
  return;
}


