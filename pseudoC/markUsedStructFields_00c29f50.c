// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: markUsedStructFields
// Entry Point: 00c29f50
// Size: 116 bytes
// Signature: undefined __thiscall markUsedStructFields(IR_Function * this, uint param_1, uint param_2, bool param_3)


/* IR_Function::markUsedStructFields(unsigned int, unsigned int, bool) const */

void __thiscall
IR_Function::markUsedStructFields(IR_Function *this,uint param_1,uint param_2,bool param_3)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = *(long *)(this + 0xb8);
  if (*(long *)(this + 0xc0) != lVar1) {
    uVar2 = 0;
    do {
      IR_Section::markUsedStructFields
                (*(IR_Section **)(lVar1 + uVar2 * 8),*(IR_TypeSet **)(this + 0x38),param_1,param_2,
                 param_3);
      lVar1 = *(long *)(this + 0xb8);
      uVar2 = (ulong)((int)uVar2 + 1);
    } while (uVar2 < (ulong)(*(long *)(this + 0xc0) - lVar1 >> 3));
  }
  return;
}


