// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~Brep
// Entry Point: 00b63b94
// Size: 244 bytes
// Signature: undefined __thiscall ~Brep(Brep * this)


/* Brep::~Brep() */

void __thiscall Brep::~Brep(Brep *this)

{
  void *pvVar1;
  void **ppvVar2;
  long lVar3;
  
  pvVar1 = *(void **)(this + 0x2f98);
  *(undefined ***)this = &PTR__Brep_00fea478;
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x2fa0) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x2f80);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x2f88) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x2f68);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x2f70) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x2f50);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x2f58) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x2f38);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x2f40) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x2f20);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x2f28) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x2f08);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x2f10) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x2ef0);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x2ef8) = pvVar1;
    operator_delete(pvVar1);
  }
  lVar3 = -12000;
  ppvVar2 = (void **)(this + 12000);
  do {
    pvVar1 = ppvVar2[-1];
    if (pvVar1 != (void *)0x0) {
      *ppvVar2 = pvVar1;
      operator_delete(pvVar1);
    }
    ppvVar2 = ppvVar2 + -3;
    lVar3 = lVar3 + 0x18;
  } while (lVar3 != 0);
  *(undefined ***)this = &PTR__AtomicRefCounted_00fda810;
  return;
}


