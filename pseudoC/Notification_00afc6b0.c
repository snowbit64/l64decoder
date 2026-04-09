// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~Notification
// Entry Point: 00afc6b0
// Size: 148 bytes
// Signature: undefined __thiscall ~Notification(Notification * this)


/* GiantsNotificationManager::Notification::~Notification() */

void __thiscall GiantsNotificationManager::Notification::~Notification(Notification *this)

{
  Notification NVar1;
  
  if (((byte)this[0x70] & 1) == 0) {
    NVar1 = this[0x58];
  }
  else {
    operator_delete(*(void **)(this + 0x80));
    NVar1 = this[0x58];
  }
  if (((byte)NVar1 & 1) == 0) {
    NVar1 = this[0x40];
  }
  else {
    operator_delete(*(void **)(this + 0x68));
    NVar1 = this[0x40];
  }
  if (((byte)NVar1 & 1) == 0) {
    NVar1 = this[0x28];
  }
  else {
    operator_delete(*(void **)(this + 0x50));
    NVar1 = this[0x28];
  }
  if (((byte)NVar1 & 1) == 0) {
    NVar1 = this[0x10];
  }
  else {
    operator_delete(*(void **)(this + 0x38));
    NVar1 = this[0x10];
  }
  if (((byte)NVar1 & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(this + 0x20));
  return;
}


