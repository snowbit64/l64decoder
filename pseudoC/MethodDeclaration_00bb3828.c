// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: MethodDeclaration
// Entry Point: 00bb3828
// Size: 40 bytes
// Signature: undefined __thiscall MethodDeclaration(MethodDeclaration * this, Type param_1, Type param_2, Type param_3, Type param_4)


/* MethodDeclaration::MethodDeclaration(Value::Type, Value::Type, Value::Type, Value::Type) */

void __thiscall
MethodDeclaration::MethodDeclaration
          (MethodDeclaration *this,Type param_1,Type param_2,Type param_3,Type param_4)

{
  *(Type *)(this + 8) = param_1;
  *(Type *)(this + 0xc) = param_2;
  *(Type *)(this + 0x10) = param_3;
  *(Type *)(this + 0x14) = param_4;
  *(undefined8 *)(this + 0x60) = 4;
  *(undefined ***)this = &PTR__MethodDeclaration_00feb4c8;
  return;
}


