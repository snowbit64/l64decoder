// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~UserDetails
// Entry Point: 00c66a4c
// Size: 100 bytes
// Signature: undefined __thiscall ~UserDetails(UserDetails * this)


/* UserBlockManager::UserDetails::~UserDetails() */

void __thiscall UserBlockManager::UserDetails::~UserDetails(UserDetails *this)

{
  UserDetails UVar1;
  
  if (((byte)this[0x38] & 1) == 0) {
    UVar1 = this[0x18];
  }
  else {
    operator_delete(*(void **)(this + 0x48));
    UVar1 = this[0x18];
  }
  if (((byte)UVar1 & 1) == 0) {
    UVar1 = *this;
  }
  else {
    operator_delete(*(void **)(this + 0x28));
    UVar1 = *this;
  }
  if (((byte)UVar1 & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(this + 0x10));
  return;
}


