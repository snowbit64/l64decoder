// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~GenericResourceDescLoader
// Entry Point: 00754b40
// Size: 4 bytes
// Signature: undefined __thiscall ~GenericResourceDescLoader(GenericResourceDescLoader<Script,Script::ScriptDesc> * this)


/* GenericResourceDescLoader<Script, Script::ScriptDesc>::~GenericResourceDescLoader() */

void __thiscall
GenericResourceDescLoader<Script,Script::ScriptDesc>::~GenericResourceDescLoader
          (GenericResourceDescLoader<Script,Script::ScriptDesc> *this)

{
  operator_delete(this);
  return;
}


