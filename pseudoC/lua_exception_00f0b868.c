// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~lua_exception
// Entry Point: 00f0b868
// Size: 36 bytes
// Signature: undefined __thiscall ~lua_exception(lua_exception * this)


/* lua_exception::~lua_exception() */

void __thiscall lua_exception::~lua_exception(lua_exception *this)

{
  std::exception::~exception((exception *)this);
  operator_delete(this);
  return;
}


