// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~BTParallel
// Entry Point: 00886ec0
// Size: 132 bytes
// Signature: undefined __thiscall ~BTParallel(BTParallel * this)


/* BTParallel::~BTParallel() */

void __thiscall BTParallel::~BTParallel(BTParallel *this)

{
  void *pvVar1;
  void *pvVar2;
  long *plVar3;
  void *pvVar4;
  ulong uVar5;
  
  pvVar2 = *(void **)(this + 0x30);
  *(undefined ***)this = &PTR__BTComposite_00fda1a8;
  if (pvVar2 != *(void **)(this + 0x28)) {
    uVar5 = 0;
    pvVar1 = *(void **)(this + 0x28);
    pvVar4 = pvVar2;
    do {
      pvVar2 = pvVar1;
      plVar3 = *(long **)((long)pvVar2 + uVar5 * 8);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))(plVar3);
        pvVar2 = *(void **)(this + 0x28);
        pvVar4 = *(void **)(this + 0x30);
      }
      uVar5 = (ulong)((int)uVar5 + 1);
      pvVar1 = pvVar2;
    } while (uVar5 < (ulong)((long)pvVar4 - (long)pvVar2 >> 3));
  }
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x30) = pvVar2;
    operator_delete(pvVar2);
  }
  operator_delete(this);
  return;
}


