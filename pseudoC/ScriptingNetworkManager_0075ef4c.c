// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ScriptingNetworkManager
// Entry Point: 0075ef4c
// Size: 88 bytes
// Signature: undefined __thiscall ScriptingNetworkManager(ScriptingNetworkManager * this)


/* ScriptingNetworkManager::ScriptingNetworkManager() */

void __thiscall ScriptingNetworkManager::ScriptingNetworkManager(ScriptingNetworkManager *this)

{
  long lVar1;
  
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(ScriptingNetworkManager **)(this + 8) = this + 0x10;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined ***)this = &PTR__ScriptingNetworkManager_00fdb4c0;
                    /* try { // try from 0075ef8c to 0075ef8f has its CatchHandler @ 0075efa4 */
  lVar1 = ENetNetworkManager::getInstance();
  *(ScriptingNetworkManager **)(lVar1 + 0x1c8) = this;
  return;
}


