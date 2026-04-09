// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: operator()
// Entry Point: 00ee5f4c
// Size: 64 bytes
// Signature: undefined __thiscall operator()(EntryHash * this, Entry * param_1)


/* Luau::AstNameTable::EntryHash::TEMPNAMEPLACEHOLDERVALUE(Luau::AstNameTable::Entry const&) const
    */

uint __thiscall Luau::AstNameTable::EntryHash::operator()(EntryHash *this,Entry *param_1)

{
  uint uVar1;
  ulong uVar2;
  byte *pbVar3;
  
  uVar2 = (ulong)*(uint *)(param_1 + 8);
  if (*(uint *)(param_1 + 8) != 0) {
    uVar1 = 0x811c9dc5;
    pbVar3 = *(byte **)param_1;
    do {
      uVar2 = uVar2 - 1;
      uVar1 = (uVar1 ^ *pbVar3) * 0x1000193;
      pbVar3 = pbVar3 + 1;
    } while (uVar2 != 0);
    return uVar1;
  }
  return 0x811c9dc5;
}


