// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: insert
// Entry Point: 00c27e98
// Size: 48 bytes
// Signature: undefined __thiscall insert(GsTSymbolTable * this, GsTSymbol * param_1)


/* GsTSymbolTable::insert(GsTSymbol*) */

void __thiscall GsTSymbolTable::insert(GsTSymbolTable *this,GsTSymbol *param_1)

{
  int iVar1;
  GsTSymbolTableLevel *this_00;
  
  iVar1 = *(int *)(this + 0x18);
  this_00 = *(GsTSymbolTableLevel **)
             (*(long *)this +
             ((*(long *)(this + 8) - *(long *)this) * 0x20000000 + -0x100000000 >> 0x20) * 8);
  *(int *)(this + 0x18) = iVar1 + 1;
  *(int *)(param_1 + 0x18) = iVar1 + 1;
  GsTSymbolTableLevel::insert(this_00,param_1);
  return;
}


