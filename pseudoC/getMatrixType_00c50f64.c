// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getMatrixType
// Entry Point: 00c50f64
// Size: 128 bytes
// Signature: undefined __thiscall getMatrixType(IR_TypeSet * this, GsTBasicType param_1, uint param_2, uint param_3)


/* IR_TypeSet::getMatrixType(GsTBasicType, unsigned int, unsigned int) */

void __thiscall
IR_TypeSet::getMatrixType(IR_TypeSet *this,GsTBasicType param_1,uint param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  undefined4 *puVar3;
  
  lVar1 = (ulong)(param_2 - 1) * 0x40 + (ulong)param_1 * 0x100;
  lVar2 = (ulong)(param_3 - 1) * 0x10 + lVar1;
  if (*(long *)(this + lVar2 + 800) == 0) {
    puVar3 = (undefined4 *)operator_new(0x20);
    puVar3[2] = param_1;
    puVar3[4] = param_2;
    puVar3[5] = param_3;
    *puVar3 = 2;
    *(undefined4 **)(this + lVar2 + 800) = puVar3;
    this[(ulong)(param_3 - 1) * 0x10 + lVar1 + 0x328] = (IR_TypeSet)0x1;
  }
  return;
}


