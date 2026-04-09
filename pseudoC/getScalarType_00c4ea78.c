// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getScalarType
// Entry Point: 00c4ea78
// Size: 88 bytes
// Signature: undefined __thiscall getScalarType(IR_TypeSet * this, GsTBasicType param_1)


/* IR_TypeSet::getScalarType(GsTBasicType) */

void __thiscall IR_TypeSet::getScalarType(IR_TypeSet *this,GsTBasicType param_1)

{
  undefined4 *puVar1;
  
  if (*(long *)(this + (ulong)param_1 * 0x10) == 0) {
    puVar1 = (undefined4 *)operator_new(0x20);
    *puVar1 = 0;
    puVar1[2] = param_1;
    *(undefined4 **)(this + (ulong)param_1 * 0x10) = puVar1;
    this[(ulong)param_1 * 0x10 + 8] = (IR_TypeSet)0x1;
  }
  return;
}


