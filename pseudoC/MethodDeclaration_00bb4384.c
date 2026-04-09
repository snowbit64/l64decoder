// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: MethodDeclaration
// Entry Point: 00bb4384
// Size: 44 bytes
// Signature: undefined __thiscall MethodDeclaration(MethodDeclaration * this, Type param_1, Type param_2, Type param_3, void * param_4, Type param_5, Type param_6, Type param_7)


/* MethodDeclaration::MethodDeclaration(Value::Type, Value::Type, Value::Type, void*, Value::Type,
   Value::Type, Value::Type) */

void __thiscall
MethodDeclaration::MethodDeclaration
          (MethodDeclaration *this,Type param_1,Type param_2,Type param_3,void *param_4,Type param_5
          ,Type param_6,Type param_7)

{
  *(Type *)(this + 0x48) = param_1;
  *(Type *)(this + 0x4c) = param_2;
  *(Type *)(this + 0x50) = param_3;
  *(Type *)(this + 8) = param_5;
  *(Type *)(this + 0xc) = param_6;
  *(Type *)(this + 0x10) = param_7;
  *(undefined8 *)(this + 0x60) = 0x300000003;
  *(undefined ***)this = &PTR__MethodDeclaration_00feb4c8;
  return;
}


