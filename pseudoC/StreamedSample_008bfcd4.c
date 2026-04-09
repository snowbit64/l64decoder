// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~StreamedSample
// Entry Point: 008bfcd4
// Size: 148 bytes
// Signature: undefined __thiscall ~StreamedSample(StreamedSample * this)


/* non-virtual thunk to StreamedSample::~StreamedSample() */

void __thiscall StreamedSample::~StreamedSample(StreamedSample *this)

{
  long *plVar1;
  undefined8 *this_00;
  
  *(undefined ***)this = &PTR__StreamedSample_00fdddb0;
  this_00 = (undefined8 *)(this + -0x20);
  *this_00 = &PTR__StreamedSample_00fddd78;
  if (*(long **)(this + 0x18) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x18) + 8))();
  }
  *(undefined8 *)(this + 0x18) = 0;
  if (*(long **)(this + 0x10) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x10) + 8))();
  }
  plVar1 = *(long **)(this + 0x20);
  *(undefined8 *)(this + 0x10) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  this[8] = (StreamedSample)0x0;
  *(long **)(this + 0x20) = (long *)0x0;
  *(undefined8 *)(this + 0x28) = 0;
  Entity::~Entity((Entity *)this_00);
  operator_delete(this_00);
  return;
}


