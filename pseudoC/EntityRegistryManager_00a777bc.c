// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: EntityRegistryManager
// Entry Point: 00a777bc
// Size: 64 bytes
// Signature: undefined __thiscall EntityRegistryManager(EntityRegistryManager * this)


/* EntityRegistryManager::EntityRegistryManager() */

void __thiscall EntityRegistryManager::EntityRegistryManager(EntityRegistryManager *this)

{
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x20) = 0x3f800000;
                    /* try { // try from 00a777e0 to 00a777eb has its CatchHandler @ 00a777fc */
  Mutex::Mutex((Mutex *)(this + 0x2c),true);
  *(undefined4 *)(this + 0x28) = 1;
  return;
}


