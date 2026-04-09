// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ResourceManager
// Entry Point: 00b2b320
// Size: 124 bytes
// Signature: undefined __thiscall ResourceManager(ResourceManager * this)


/* ResourceManager::ResourceManager() */

void __thiscall ResourceManager::ResourceManager(ResourceManager *this)

{
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(ResourceManager **)this = this + 8;
  *(undefined8 *)(this + 0x20) = 0;
  *(ResourceManager **)(this + 0x18) = this + 0x20;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(ResourceManager **)(this + 0x48) = this + 0x50;
  *(undefined8 *)(this + 0x58) = 0;
                    /* try { // try from 00b2b380 to 00b2b387 has its CatchHandler @ 00b2b39c */
  Mutex::Mutex((Mutex *)(this + 0x60),true);
  return;
}


