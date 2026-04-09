// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~IR_RegisterSet
// Entry Point: 00c287b8
// Size: 124 bytes
// Signature: undefined __thiscall ~IR_RegisterSet(IR_RegisterSet * this)


/* IR_RegisterSet::~IR_RegisterSet() */

void __thiscall IR_RegisterSet::~IR_RegisterSet(IR_RegisterSet *this)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  
  pvVar2 = *(void **)(this + 8);
  if (pvVar2 == (void *)0x0) {
    return;
  }
  pvVar3 = pvVar2;
  pvVar1 = *(void **)(this + 0x10);
  if (*(void **)(this + 0x10) != pvVar2) {
    do {
      pvVar3 = (void *)((long)pvVar1 + -0x28);
      if ((*(byte *)((long)pvVar1 + -0x20) & 1) != 0) {
        operator_delete(*(void **)((long)pvVar1 + -0x10));
      }
      pvVar1 = pvVar3;
    } while (pvVar3 != pvVar2);
    pvVar3 = *(void **)(this + 8);
  }
  *(void **)(this + 0x10) = pvVar2;
  operator_delete(pvVar3);
  return;
}


