// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: operator==
// Entry Point: 00ee5f0c
// Size: 64 bytes
// Signature: undefined __thiscall operator==(Entry * this, Entry * param_1)


/* Luau::AstNameTable::Entry::TEMPNAMEPLACEHOLDERVALUE(Luau::AstNameTable::Entry const&) const */

bool __thiscall Luau::AstNameTable::Entry::operator==(Entry *this,Entry *param_1)

{
  int iVar1;
  
  if (*(uint *)(this + 8) == *(uint *)(param_1 + 8)) {
    iVar1 = memcmp(*(void **)this,*(void **)param_1,(ulong)*(uint *)(this + 8));
    return iVar1 == 0;
  }
  return false;
}


