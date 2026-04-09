// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~OID
// Entry Point: 00be9ae8
// Size: 64 bytes
// Signature: undefined __thiscall ~OID(OID * this)


/* CryptoPP::OID::~OID() */

void __thiscall CryptoPP::OID::~OID(OID *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(this + 8);
  *(undefined ***)this = &PTR__OID_00fecd98;
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x10) = pvVar1;
    operator_delete(pvVar1);
  }
  operator_delete(this);
  return;
}


