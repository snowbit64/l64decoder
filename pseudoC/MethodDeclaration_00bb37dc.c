// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: MethodDeclaration
// Entry Point: 00bb37dc
// Size: 36 bytes
// Signature: undefined __thiscall MethodDeclaration(MethodDeclaration * this, Type param_1, Type param_2)


/* MethodDeclaration::MethodDeclaration(Value::Type, Value::Type) */

void __thiscall
MethodDeclaration::MethodDeclaration(MethodDeclaration *this,Type param_1,Type param_2)

{
  *(Type *)(this + 8) = param_1;
  *(Type *)(this + 0xc) = param_2;
  *(undefined8 *)(this + 0x60) = 2;
  *(undefined ***)this = &PTR__MethodDeclaration_00feb4c8;
  return;
}


