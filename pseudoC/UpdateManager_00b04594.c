// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: UpdateManager
// Entry Point: 00b04594
// Size: 56 bytes
// Signature: undefined __thiscall UpdateManager(UpdateManager * this)


/* UpdateManager::UpdateManager() */

void __thiscall UpdateManager::UpdateManager(UpdateManager *this)

{
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)this = 0;
                    /* try { // try from 00b045b4 to 00b045bb has its CatchHandler @ 00b045cc */
  Mutex::Mutex((Mutex *)(this + 0x30),true);
  *(undefined8 *)(this + 0x58) = 0;
  return;
}


