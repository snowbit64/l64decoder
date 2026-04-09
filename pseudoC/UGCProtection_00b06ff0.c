// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~UGCProtection
// Entry Point: 00b06ff0
// Size: 96 bytes
// Signature: undefined __thiscall ~UGCProtection(UGCProtection * this)


/* UGCProtection::~UGCProtection() */

void __thiscall UGCProtection::~UGCProtection(UGCProtection *this)

{
  *(undefined ***)this = &PTR__UGCProtection_00fe71d0;
  if (this[0x10] != (UGCProtection)0x0) {
    if (*(long **)(this + 8) != (long *)0x0) {
      (**(code **)(**(long **)(this + 8) + 8))();
    }
    *(undefined8 *)(this + 8) = 0;
  }
  if (*(void **)(this + 0x18) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x18));
  }
  *(undefined8 *)(this + 0x18) = 0;
  File::~File((File *)this);
  return;
}


