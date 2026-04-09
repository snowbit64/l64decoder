// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~NetworkAvailability
// Entry Point: 00c62ac8
// Size: 104 bytes
// Signature: undefined __thiscall ~NetworkAvailability(NetworkAvailability * this)


/* NetworkAvailability::~NetworkAvailability() */

void __thiscall NetworkAvailability::~NetworkAvailability(NetworkAvailability *this)

{
  void *pvVar1;
  AndroidJNICall *this_00;
  
  this_00 = *(AndroidJNICall **)(this + 0x40);
  if (this_00 != (AndroidJNICall *)0x0) {
    AndroidJNICall::~AndroidJNICall(this_00);
    operator_delete(this_00);
    *(undefined8 *)(this + 0x40) = 0;
  }
  pvVar1 = *(void **)(this + 0x50);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x58) = pvVar1;
    operator_delete(pvVar1);
  }
  Mutex::~Mutex((Mutex *)(this + 0x18));
  pvVar1 = *(void **)this;
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 8) = pvVar1;
    operator_delete(pvVar1);
    return;
  }
  return;
}


