// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: MethodDeclaration
// Entry Point: 00bb39d8
// Size: 84 bytes
// Signature: undefined __thiscall MethodDeclaration(MethodDeclaration * this, Type param_1, Type param_2, Type param_3, Type param_4, Type param_5, Type param_6, Type param_7, Type param_8, Type param_9, Type param_10, Type param_11, Type param_12)


/* MethodDeclaration::MethodDeclaration(Value::Type, Value::Type, Value::Type, Value::Type,
   Value::Type, Value::Type, Value::Type, Value::Type, Value::Type, Value::Type, Value::Type,
   Value::Type) */

void __thiscall
MethodDeclaration::MethodDeclaration
          (MethodDeclaration *this,Type param_1,Type param_2,Type param_3,Type param_4,Type param_5,
          Type param_6,Type param_7,Type param_8,Type param_9,Type param_10,Type param_11,
          Type param_12)

{
  *(Type *)(this + 0x24) = param_8;
  *(Type *)(this + 8) = param_1;
  *(Type *)(this + 0xc) = param_2;
  *(Type *)(this + 0x10) = param_3;
  *(Type *)(this + 0x14) = param_4;
  *(Type *)(this + 0x18) = param_5;
  *(Type *)(this + 0x1c) = param_6;
  *(Type *)(this + 0x20) = param_7;
  *(undefined ***)this = &PTR__MethodDeclaration_00feb4c8;
  *(Type *)(this + 0x30) = param_11;
  *(Type *)(this + 0x34) = param_12;
  *(undefined8 *)(this + 0x60) = 0xc;
  *(Type *)(this + 0x28) = param_9;
  *(Type *)(this + 0x2c) = param_10;
  return;
}


