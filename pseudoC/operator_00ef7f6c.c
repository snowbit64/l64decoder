// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: operator()
// Entry Point: 00ef7f6c
// Size: 8 bytes
// Signature: undefined __thiscall operator()(StringRefHash * this, StringRef * param_1)


/* Luau::BytecodeBuilder::StringRefHash::TEMPNAMEPLACEHOLDERVALUE(Luau::BytecodeBuilder::StringRef
   const&) const */

void __thiscall
Luau::BytecodeBuilder::StringRefHash::operator()(StringRefHash *this,StringRef *param_1)

{
  hashRange(*(char **)param_1,*(ulong *)(param_1 + 8));
  return;
}


