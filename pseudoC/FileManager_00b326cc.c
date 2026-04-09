// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FileManager
// Entry Point: 00b326cc
// Size: 108 bytes
// Signature: undefined __thiscall FileManager(FileManager * this)


/* FileManager::FileManager() */

void __thiscall FileManager::FileManager(FileManager *this)

{
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
                    /* try { // try from 00b326f4 to 00b326ff has its CatchHandler @ 00b3275c */
  Mutex::Mutex((Mutex *)(this + 100),true);
                    /* try { // try from 00b32704 to 00b3270f has its CatchHandler @ 00b3274c */
  Mutex::Mutex((Mutex *)(this + 0x8c),true);
                    /* try { // try from 00b32714 to 00b3271b has its CatchHandler @ 00b32738 */
  Mutex::Mutex((Mutex *)(this + 0xb8),true);
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(FileManager **)(this + 0xe0) = this + 0xe8;
  this[0x60] = (FileManager)0x0;
  return;
}


