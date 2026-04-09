// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: MethodDeclaration
// Entry Point: 00bb37b8
// Size: 36 bytes
// Signature: undefined __thiscall MethodDeclaration(MethodDeclaration * this, Type param_1)


/* MethodDeclaration::MethodDeclaration(Value::Type) */

void __thiscall MethodDeclaration::MethodDeclaration(MethodDeclaration *this,Type param_1)

{
  *(Type *)(this + 8) = param_1;
  *(undefined8 *)(this + 0x60) = 1;
  *(undefined ***)this = &PTR__MethodDeclaration_00feb4c8;
  return;
}


