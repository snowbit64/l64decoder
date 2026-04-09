// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~UserAttribute
// Entry Point: 00a5d054
// Size: 56 bytes
// Signature: undefined __thiscall ~UserAttribute(UserAttribute * this)


/* UserAttribute::~UserAttribute() */

void __thiscall UserAttribute::~UserAttribute(UserAttribute *this)

{
  if (*(int *)(this + 8) == 3) {
    if (*(void **)this != (void *)0x0) {
      operator_delete__(*(void **)this);
    }
    *(undefined8 *)this = 0;
  }
  return;
}


