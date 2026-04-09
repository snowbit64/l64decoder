// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getVectorType
// Entry Point: 00c4eb78
// Size: 108 bytes
// Signature: undefined __thiscall getVectorType(IR_TypeSet * this, GsTBasicType param_1, uint param_2)


/* IR_TypeSet::getVectorType(GsTBasicType, unsigned int) */

void __thiscall IR_TypeSet::getVectorType(IR_TypeSet *this,GsTBasicType param_1,uint param_2)

{
  undefined4 *puVar1;
  
  if (*(long *)(this + (ulong)(param_2 - 1) * 0x10 + (ulong)param_1 * 0x40 + 0xa0) == 0) {
    puVar1 = (undefined4 *)operator_new(0x20);
    puVar1[2] = param_1;
    puVar1[5] = param_2;
    *puVar1 = 1;
    *(undefined4 **)(this + (ulong)(param_2 - 1) * 0x10 + (ulong)param_1 * 0x40 + 0xa0) = puVar1;
    this[(ulong)(param_2 - 1) * 0x10 + (ulong)param_1 * 0x40 + 0xa8] = (IR_TypeSet)0x1;
  }
  return;
}


