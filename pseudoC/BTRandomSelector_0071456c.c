// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~BTRandomSelector
// Entry Point: 0071456c
// Size: 168 bytes
// Signature: undefined __thiscall ~BTRandomSelector(BTRandomSelector * this)


/* BTRandomSelector::~BTRandomSelector() */

void __thiscall BTRandomSelector::~BTRandomSelector(BTRandomSelector *this)

{
  void *pvVar1;
  void *pvVar2;
  long *plVar3;
  void *pvVar4;
  ulong uVar5;
  
  pvVar2 = *(void **)(this + 0x48);
  *(undefined ***)this = &PTR__BTRandomSelector_00fda140;
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x50) = pvVar2;
    operator_delete(pvVar2);
  }
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
  if (pvVar2 == (void *)0x0) {
    return;
  }
  *(void **)(this + 0x30) = pvVar2;
  operator_delete(pvVar2);
  return;
}


