// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~VHACD
// Entry Point: 00eaa80c
// Size: 112 bytes
// Signature: undefined __thiscall ~VHACD(VHACD * this)


/* VHACD::VHACD::~VHACD() */

void __thiscall VHACD::VHACD::~VHACD(VHACD *this)

{
  VHACD VVar1;
  void *pvVar2;
  
  *(undefined ***)this = &PTR_Cancel_01014320;
  if (((byte)this[0x240] & 1) == 0) {
    VVar1 = this[0x228];
  }
  else {
    operator_delete(*(void **)(this + 0x250));
    VVar1 = this[0x228];
  }
  if (((byte)VVar1 & 1) == 0) {
    pvVar2 = *(void **)(this + 0x210);
  }
  else {
    operator_delete(*(void **)(this + 0x238));
    pvVar2 = *(void **)(this + 0x210);
  }
  if (pvVar2 != (void *)0x0) {
    operator_delete__(pvVar2);
  }
  operator_delete(this);
  return;
}


