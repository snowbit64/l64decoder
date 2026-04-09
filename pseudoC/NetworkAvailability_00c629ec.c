// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: NetworkAvailability
// Entry Point: 00c629ec
// Size: 140 bytes
// Signature: undefined __thiscall NetworkAvailability(NetworkAvailability * this)


/* NetworkAvailability::NetworkAvailability() */

void __thiscall NetworkAvailability::NetworkAvailability(NetworkAvailability *this)

{
  undefined4 uVar1;
  AndroidJNICall *this_00;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
                    /* try { // try from 00c62a0c to 00c62a17 has its CatchHandler @ 00c62a8c */
  Mutex::Mutex((Mutex *)(this + 0x18),true);
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
                    /* try { // try from 00c62a24 to 00c62a2b has its CatchHandler @ 00c62a94 */
  this_00 = (AndroidJNICall *)operator_new(0x78);
                    /* try { // try from 00c62a30 to 00c62a37 has its CatchHandler @ 00c62a78 */
  AndroidJNICall::AndroidJNICall(this_00,7);
  *(AndroidJNICall **)(this + 0x40) = this_00;
                    /* try { // try from 00c62a3c to 00c62a67 has its CatchHandler @ 00c62a94 */
  uVar1 = AndroidJNICall::callInt(this_00,"getNetworkStatus");
  *(undefined4 *)(this + 0x48) = uVar1;
  AndroidJNICall::callVoidFromLong(*(AndroidJNICall **)(this + 0x40),"init",(ulonglong)this);
  return;
}


