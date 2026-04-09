// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: deactivate
// Entry Point: 008dbe90
// Size: 120 bytes
// Signature: undefined __thiscall deactivate(Precipitation * this)


/* non-virtual thunk to Precipitation::deactivate() */

void __thiscall Precipitation::deactivate(Precipitation *this)

{
  long *plVar1;
  
  if (*(long **)(this + 0x78) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x78) + 8))();
  }
  plVar1 = *(long **)(this + 0x70);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (*(long **)(this + 0x80) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x80) + 8))();
  }
  if (*(void **)(this + 0x50) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x50));
  }
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(long **)(this + 0x70) = (long *)0x0;
  return;
}


