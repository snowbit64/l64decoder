// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~BackendData
// Entry Point: 00e395c8
// Size: 164 bytes
// Signature: undefined __thiscall ~BackendData(BackendData * this)


/* SoLoud::BackendData::~BackendData() */

void __thiscall SoLoud::BackendData::~BackendData(BackendData *this)

{
  int iVar1;
  
  *(int *)(this + 0x80) = *(int *)(this + 0x80) + 1;
  iVar1 = *(int *)(this + 0x80);
  while (iVar1 == 1) {
    Thread::sleep(10);
    iVar1 = *(int *)(this + 0x80);
  }
  if (*(long **)(this + 0x40) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x40) + 0x30))();
  }
  if (*(long **)(this + 0x10) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x10) + 0x30))();
  }
  if (*(long **)this != (long *)0x0) {
    (**(code **)(**(long **)this + 0x30))();
  }
  if (*(void **)(this + 0x68) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x68));
  }
  if (*(void **)(this + 0x70) == (void *)0x0) {
    return;
  }
  operator_delete__(*(void **)(this + 0x70));
  return;
}


