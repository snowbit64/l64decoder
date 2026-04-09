// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: MethodDeclaration
// Entry Point: 00bb3e50
// Size: 112 bytes
// Signature: undefined __thiscall MethodDeclaration(MethodDeclaration * this, Type param_1, void * param_2, Type param_3, Type param_4, Type param_5, Type param_6, Type param_7, Type param_8, Type param_9, Type param_10, Type param_11, Type param_12, Type param_13, Type param_14, Type param_15, Type param_16)


/* MethodDeclaration::MethodDeclaration(Value::Type, void*, Value::Type, Value::Type, Value::Type,
   Value::Type, Value::Type, Value::Type, Value::Type, Value::Type, Value::Type, Value::Type,
   Value::Type, Value::Type, Value::Type, Value::Type) */

void __thiscall
MethodDeclaration::MethodDeclaration
          (MethodDeclaration *this,Type param_1,void *param_2,Type param_3,Type param_4,Type param_5
          ,Type param_6,Type param_7,Type param_8,Type param_9,Type param_10,Type param_11,
          Type param_12,Type param_13,Type param_14,Type param_15,Type param_16)

{
  *(Type *)(this + 0x48) = param_1;
  *(Type *)(this + 0x24) = param_10;
  *(Type *)(this + 0x28) = param_11;
  *(Type *)(this + 0x20) = param_9;
  *(Type *)(this + 8) = param_3;
  *(Type *)(this + 0xc) = param_4;
  *(Type *)(this + 0x10) = param_5;
  *(undefined ***)this = &PTR__MethodDeclaration_00feb4c8;
  *(Type *)(this + 0x14) = param_6;
  *(Type *)(this + 0x18) = param_7;
  *(Type *)(this + 0x1c) = param_8;
  *(Type *)(this + 0x30) = param_13;
  *(Type *)(this + 0x34) = param_14;
  *(undefined8 *)(this + 0x60) = 0x10000000e;
  *(Type *)(this + 0x2c) = param_12;
  *(Type *)(this + 0x38) = param_15;
  *(Type *)(this + 0x3c) = param_16;
  return;
}


