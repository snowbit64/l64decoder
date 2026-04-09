// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~GsTSymbolTable
// Entry Point: 00c1ee18
// Size: 128 bytes
// Signature: undefined __thiscall ~GsTSymbolTable(GsTSymbolTable * this)


/* GsTSymbolTable::~GsTSymbolTable() */

void __thiscall GsTSymbolTable::~GsTSymbolTable(GsTSymbolTable *this)

{
  void *pvVar1;
  ulong uVar2;
  GsTSymbolTableLevel *this_00;
  long lVar3;
  
  pvVar1 = *(void **)this;
  lVar3 = *(long *)(this + 8);
  uVar2 = lVar3 - (long)pvVar1;
  while (8 < uVar2) {
    this_00 = *(GsTSymbolTableLevel **)
               ((long)pvVar1 + ((lVar3 - (long)pvVar1) * 0x20000000 + -0x100000000 >> 0x20) * 8);
    if (this_00 != (GsTSymbolTableLevel *)0x0) {
      GsTSymbolTableLevel::~GsTSymbolTableLevel(this_00);
      pvVar1 = *(void **)this;
      lVar3 = *(long *)(this + 8);
    }
    lVar3 = lVar3 + -8;
    *(long *)(this + 8) = lVar3;
    uVar2 = lVar3 - (long)pvVar1;
  }
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 8) = pvVar1;
    operator_delete(pvVar1);
    return;
  }
  return;
}


