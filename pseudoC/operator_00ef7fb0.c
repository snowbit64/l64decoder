// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: operator()
// Entry Point: 00ef7fb0
// Size: 60 bytes
// Signature: undefined __thiscall operator()(TableShapeHash * this, TableShape * param_1)


/* Luau::BytecodeBuilder::TableShapeHash::TEMPNAMEPLACEHOLDERVALUE(Luau::BytecodeBuilder::TableShape
   const&) const */

uint __thiscall
Luau::BytecodeBuilder::TableShapeHash::operator()(TableShapeHash *this,TableShape *param_1)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = (ulong)*(uint *)(param_1 + 0x80);
  if (*(uint *)(param_1 + 0x80) != 0) {
    uVar1 = 0x811c9dc5;
    do {
      uVar2 = uVar2 - 1;
      uVar1 = (*(uint *)param_1 ^ uVar1) * 0x1000193;
      param_1 = (TableShape *)((long)param_1 + 4);
    } while (uVar2 != 0);
    return uVar1;
  }
  return 0x811c9dc5;
}


