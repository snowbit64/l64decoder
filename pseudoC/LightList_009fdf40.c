// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~LightList
// Entry Point: 009fdf40
// Size: 128 bytes
// Signature: undefined __thiscall ~LightList(LightList * this)


/* LightList::~LightList() */

void __thiscall LightList::~LightList(LightList *this)

{
  void *pvVar1;
  
  if (*(void **)(this + 0x10) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x10));
  }
  pvVar1 = *(void **)(this + 0x98);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0xa0) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x80);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x88) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x68);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x70) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x50);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x58) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x18);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x20) = pvVar1;
    operator_delete(pvVar1);
    return;
  }
  return;
}


