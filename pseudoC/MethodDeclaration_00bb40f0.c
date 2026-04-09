// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: MethodDeclaration
// Entry Point: 00bb40f0
// Size: 64 bytes
// Signature: undefined __thiscall MethodDeclaration(MethodDeclaration * this, Type param_1, Type param_2, void * param_3, Type param_4, Type param_5, Type param_6, Type param_7, Type param_8, Type param_9, Type param_10)


/* MethodDeclaration::MethodDeclaration(Value::Type, Value::Type, void*, Value::Type, Value::Type,
   Value::Type, Value::Type, Value::Type, Value::Type, Value::Type) */

void __thiscall
MethodDeclaration::MethodDeclaration
          (MethodDeclaration *this,Type param_1,Type param_2,void *param_3,Type param_4,Type param_5
          ,Type param_6,Type param_7,Type param_8,Type param_9,Type param_10)

{
  *(Type *)(this + 0x48) = param_1;
  *(Type *)(this + 0x4c) = param_2;
  *(Type *)(this + 8) = param_4;
  *(Type *)(this + 0xc) = param_5;
  *(Type *)(this + 0x10) = param_6;
  *(Type *)(this + 0x14) = param_7;
  *(Type *)(this + 0x18) = param_8;
  *(Type *)(this + 0x1c) = param_9;
  *(Type *)(this + 0x20) = param_10;
  *(undefined ***)this = &PTR__MethodDeclaration_00feb4c8;
  *(undefined8 *)(this + 0x60) = 0x200000007;
  return;
}


