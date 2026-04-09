// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: moveToState
// Entry Point: 00b39ed0
// Size: 8 bytes
// Signature: undefined __thiscall moveToState(MasterServerManager * this, STATE param_1)


/* MasterServerManager::moveToState(MasterServerManager::STATE) */

void __thiscall MasterServerManager::moveToState(MasterServerManager *this,STATE param_1)

{
  *(STATE *)(this + 0x178) = param_1;
  return;
}


