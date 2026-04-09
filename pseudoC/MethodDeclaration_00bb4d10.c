// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: MethodDeclaration
// Entry Point: 00bb4d10
// Size: 56 bytes
// Signature: undefined __thiscall MethodDeclaration(MethodDeclaration * this, Type param_1, Type param_2, Type param_3, Type param_4, Type param_5, Type param_6, void * param_7, Type param_8)


/* MethodDeclaration::MethodDeclaration(Value::Type, Value::Type, Value::Type, Value::Type,
   Value::Type, Value::Type, void*, Value::Type) */

void __thiscall
MethodDeclaration::MethodDeclaration
          (MethodDeclaration *this,Type param_1,Type param_2,Type param_3,Type param_4,Type param_5,
          Type param_6,void *param_7,Type param_8)

{
  *(Type *)(this + 0x48) = param_1;
  *(Type *)(this + 0x4c) = param_2;
  *(Type *)(this + 0x50) = param_3;
  *(Type *)(this + 0x54) = param_4;
  *(Type *)(this + 0x58) = param_5;
  *(Type *)(this + 0x5c) = param_6;
  *(undefined8 *)(this + 0x60) = 0x600000001;
  *(undefined ***)this = &PTR__MethodDeclaration_00feb4c8;
  *(Type *)(this + 8) = param_8;
  return;
}


