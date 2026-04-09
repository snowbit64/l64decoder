// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~NullVertexDeclaration
// Entry Point: 00aac890
// Size: 60 bytes
// Signature: undefined __thiscall ~NullVertexDeclaration(NullVertexDeclaration * this)


/* NullVertexDeclaration::~NullVertexDeclaration() */

void __thiscall NullVertexDeclaration::~NullVertexDeclaration(NullVertexDeclaration *this)

{
  *(undefined ***)this = &PTR__NullVertexDeclaration_00fe5e50;
  if (*(void **)(this + 8) != (void *)0x0) {
    operator_delete__(*(void **)(this + 8));
    *(undefined8 *)(this + 8) = 0;
  }
  return;
}


