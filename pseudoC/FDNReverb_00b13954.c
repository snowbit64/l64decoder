// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~FDNReverb
// Entry Point: 00b13954
// Size: 156 bytes
// Signature: undefined __thiscall ~FDNReverb(FDNReverb * this)


/* FDNReverb::~FDNReverb() */

void __thiscall FDNReverb::~FDNReverb(FDNReverb *this)

{
  void *pvVar1;
  
  if (*(void **)(this + 0x68) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x68));
  }
  if (*(void **)(this + 0x78) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x78));
  }
  if (*(void **)(this + 0x88) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x88));
  }
  if (*(void **)(this + 0x98) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x98));
  }
  if (*(void **)(this + 0x38) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x38));
  }
  if (*(void **)(this + 8) != (void *)0x0) {
    operator_delete__(*(void **)(this + 8));
  }
  pvVar1 = *(void **)(this + 0xc0);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 200) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x50);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x58) = pvVar1;
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


