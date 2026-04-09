// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: operator==
// Entry Point: 00ef7ed0
// Size: 96 bytes
// Signature: undefined __thiscall operator==(StringRef * this, StringRef * param_1)


/* Luau::BytecodeBuilder::StringRef::TEMPNAMEPLACEHOLDERVALUE(Luau::BytecodeBuilder::StringRef
   const&) const */

bool __thiscall Luau::BytecodeBuilder::StringRef::operator==(StringRef *this,StringRef *param_1)

{
  int iVar1;
  void *__s1;
  void *__s2;
  
  __s1 = *(void **)this;
  __s2 = *(void **)param_1;
  if ((__s1 != (void *)0x0) && (__s2 != (void *)0x0)) {
    if (*(size_t *)(this + 8) == *(size_t *)(param_1 + 8)) {
      iVar1 = memcmp(__s1,__s2,*(size_t *)(this + 8));
      return iVar1 == 0;
    }
    return false;
  }
  return __s1 == __s2;
}


