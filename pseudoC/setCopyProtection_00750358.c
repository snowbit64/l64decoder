// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setCopyProtection
// Entry Point: 00750358
// Size: 8 bytes
// Signature: undefined __thiscall setCopyProtection(EngineManager * this, CopyProtection * param_1)


/* EngineManager::setCopyProtection(CopyProtection*) */

void __thiscall EngineManager::setCopyProtection(EngineManager *this,CopyProtection *param_1)

{
  *(CopyProtection **)(this + 0x2e0) = param_1;
  return;
}


