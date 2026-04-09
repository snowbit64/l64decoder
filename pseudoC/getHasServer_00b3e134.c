// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getHasServer
// Entry Point: 00b3e134
// Size: 44 bytes
// Signature: undefined __thiscall getHasServer(MasterServerManager * this, uint param_1, uint param_2)


/* MasterServerManager::getHasServer(unsigned int, unsigned int) const */

bool __thiscall
MasterServerManager::getHasServer(MasterServerManager *this,uint param_1,uint param_2)

{
  bool bVar1;
  
  bVar1 = false;
  if ((this[0x38] != (MasterServerManager)0x0) && (*(uint *)(this + 0x18c) == param_1)) {
    bVar1 = *(uint *)(this + 0xcc) == param_2;
  }
  return bVar1;
}


