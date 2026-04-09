// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~Lockable
// Entry Point: 00964a00
// Size: 68 bytes
// Signature: undefined __thiscall ~Lockable(Lockable<SmallVector<ICommandList*,5u>> * this)


/* Lockable<SmallVector<ICommandList*, 5u> >::~Lockable() */

void __thiscall
Lockable<SmallVector<ICommandList*,5u>>::~Lockable(Lockable<SmallVector<ICommandList*,5u>> *this)

{
  uint uVar1;
  void *pvVar2;
  
  uVar1 = *(uint *)(this + 0x28);
  pvVar2 = *(void **)(this + 0x58);
  *(undefined4 *)(this + 0x28) = 0;
  if (5 < uVar1) {
    *(void **)(this + 0x60) = pvVar2;
  }
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x60) = pvVar2;
    operator_delete(pvVar2);
  }
  Mutex::~Mutex((Mutex *)this);
  return;
}


