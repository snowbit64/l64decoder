// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: MethodDeclaration
// Entry Point: 00bb3b10
// Size: 36 bytes
// Signature: undefined __thiscall MethodDeclaration(MethodDeclaration * this, Type param_1, void * param_2, Type param_3)


/* MethodDeclaration::MethodDeclaration(Value::Type, void*, Value::Type) */

void __thiscall
MethodDeclaration::MethodDeclaration
          (MethodDeclaration *this,Type param_1,void *param_2,Type param_3)

{
  *(Type *)(this + 0x48) = param_1;
  *(Type *)(this + 8) = param_3;
  *(undefined8 *)(this + 0x60) = 0x100000001;
  *(undefined ***)this = &PTR__MethodDeclaration_00feb4c8;
  return;
}


