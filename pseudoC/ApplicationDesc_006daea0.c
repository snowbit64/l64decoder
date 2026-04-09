// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ApplicationDesc
// Entry Point: 006daea0
// Size: 148 bytes
// Signature: undefined __thiscall ~ApplicationDesc(ApplicationDesc * this)


/* ApplicationDesc::~ApplicationDesc() */

void __thiscall ApplicationDesc::~ApplicationDesc(ApplicationDesc *this)

{
  ApplicationDesc AVar1;
  
  if (((byte)this[0x68] & 1) == 0) {
    AVar1 = this[0x50];
  }
  else {
    operator_delete(*(void **)(this + 0x78));
    AVar1 = this[0x50];
  }
  if (((byte)AVar1 & 1) == 0) {
    AVar1 = this[0x38];
  }
  else {
    operator_delete(*(void **)(this + 0x60));
    AVar1 = this[0x38];
  }
  if (((byte)AVar1 & 1) == 0) {
    AVar1 = this[0x20];
  }
  else {
    operator_delete(*(void **)(this + 0x48));
    AVar1 = this[0x20];
  }
  if (((byte)AVar1 & 1) == 0) {
    AVar1 = this[8];
  }
  else {
    operator_delete(*(void **)(this + 0x30));
    AVar1 = this[8];
  }
  if (((byte)AVar1 & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(this + 0x18));
  return;
}


