// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~UserId
// Entry Point: 00c66a08
// Size: 68 bytes
// Signature: undefined __thiscall ~UserId(UserId * this)


/* UserBlockManager::UserId::~UserId() */

void __thiscall UserBlockManager::UserId::~UserId(UserId *this)

{
  if (((byte)this[0x18] & 1) != 0) {
    operator_delete(*(void **)(this + 0x28));
  }
  if (((byte)*this & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(this + 0x10));
  return;
}


