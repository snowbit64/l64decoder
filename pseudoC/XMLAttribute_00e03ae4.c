// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~XMLAttribute
// Entry Point: 00e03ae4
// Size: 100 bytes
// Signature: undefined __thiscall ~XMLAttribute(XMLAttribute * this)


/* tinyxml2::XMLAttribute::~XMLAttribute() */

void __thiscall tinyxml2::XMLAttribute::~XMLAttribute(XMLAttribute *this)

{
  *(undefined ***)this = &PTR__XMLAttribute_01013818;
  if ((((byte)this[0x21] >> 1 & 1) != 0) && (*(void **)(this + 0x28) != (void *)0x0)) {
    operator_delete__(*(void **)(this + 0x28));
  }
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  if ((((byte)this[9] >> 1 & 1) != 0) && (*(void **)(this + 0x10) != (void *)0x0)) {
    operator_delete__(*(void **)(this + 0x10));
  }
  *(undefined4 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  return;
}


