// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FileHashManager
// Entry Point: 00afb104
// Size: 76 bytes
// Signature: undefined __thiscall FileHashManager(FileHashManager * this)


/* FileHashManager::FileHashManager() */

void __thiscall FileHashManager::FileHashManager(FileHashManager *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(FileHashManager **)(this + 0x18) = this + 0x20;
  *(undefined8 *)(this + 0x28) = 0;
                    /* try { // try from 00afb138 to 00afb13f has its CatchHandler @ 00afb150 */
  Mutex::Mutex((Mutex *)(this + 0x30),true);
  return;
}


