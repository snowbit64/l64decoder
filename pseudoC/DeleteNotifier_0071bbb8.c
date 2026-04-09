// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DeleteNotifier
// Entry Point: 0071bbb8
// Size: 36 bytes
// Signature: undefined __thiscall ~DeleteNotifier(DeleteNotifier * this)


/* DeleteNotifier::~DeleteNotifier() */

void __thiscall DeleteNotifier::~DeleteNotifier(DeleteNotifier *this)

{
  ~DeleteNotifier(this);
  operator_delete(this);
  return;
}


