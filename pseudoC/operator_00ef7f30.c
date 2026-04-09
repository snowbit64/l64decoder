// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: operator==
// Entry Point: 00ef7f30
// Size: 60 bytes
// Signature: undefined __thiscall operator==(TableShape * this, TableShape * param_1)


/* Luau::BytecodeBuilder::TableShape::TEMPNAMEPLACEHOLDERVALUE(Luau::BytecodeBuilder::TableShape
   const&) const */

bool __thiscall Luau::BytecodeBuilder::TableShape::operator==(TableShape *this,TableShape *param_1)

{
  int iVar1;
  
  if (*(uint *)(this + 0x80) == *(uint *)(param_1 + 0x80)) {
    iVar1 = memcmp(this,param_1,(ulong)*(uint *)(this + 0x80) << 2);
    return iVar1 == 0;
  }
  return false;
}


