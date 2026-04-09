// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ProductInfo
// Entry Point: 00b07544
// Size: 172 bytes
// Signature: undefined __thiscall ~ProductInfo(ProductInfo * this)


/* StoreUtilBase::ProductInfo::~ProductInfo() */

void __thiscall StoreUtilBase::ProductInfo::~ProductInfo(ProductInfo *this)

{
  ProductInfo PVar1;
  
  if (((byte)this[0x78] & 1) == 0) {
    PVar1 = this[0x60];
  }
  else {
    operator_delete(*(void **)(this + 0x88));
    PVar1 = this[0x60];
  }
  if (((byte)PVar1 & 1) == 0) {
    PVar1 = this[0x48];
  }
  else {
    operator_delete(*(void **)(this + 0x70));
    PVar1 = this[0x48];
  }
  if (((byte)PVar1 & 1) == 0) {
    PVar1 = this[0x30];
  }
  else {
    operator_delete(*(void **)(this + 0x58));
    PVar1 = this[0x30];
  }
  if (((byte)PVar1 & 1) == 0) {
    PVar1 = this[0x18];
  }
  else {
    operator_delete(*(void **)(this + 0x40));
    PVar1 = this[0x18];
  }
  if (((byte)PVar1 & 1) == 0) {
    PVar1 = *this;
  }
  else {
    operator_delete(*(void **)(this + 0x28));
    PVar1 = *this;
  }
  if (((byte)PVar1 & 1) != 0) {
    operator_delete(*(void **)(this + 0x10));
    return;
  }
  return;
}


