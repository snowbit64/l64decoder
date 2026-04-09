// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~PersistentShadowMap
// Entry Point: 00a035e4
// Size: 108 bytes
// Signature: undefined __thiscall ~PersistentShadowMap(PersistentShadowMap * this)


/* PersistentShadowMap::~PersistentShadowMap() */

void __thiscall PersistentShadowMap::~PersistentShadowMap(PersistentShadowMap *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(this + 0x10);
  *(undefined4 *)(this + 8) = 0;
  *(undefined8 *)this = 0;
  if (pvVar1 != (void *)0x0) {
    if (*(void **)((long)pvVar1 + 0x10) != (void *)0x0) {
      operator_delete__(*(void **)((long)pvVar1 + 0x10));
    }
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x38);
  *(undefined8 *)(this + 0x10) = 0;
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x40) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x20);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x28) = pvVar1;
    operator_delete(pvVar1);
    return;
  }
  return;
}


