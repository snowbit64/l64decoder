// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AdsBrockerManager
// Entry Point: 006f8910
// Size: 96 bytes
// Signature: undefined __thiscall AdsBrockerManager(AdsBrockerManager * this)


/* AdsBrockerManager::AdsBrockerManager() */

void __thiscall AdsBrockerManager::AdsBrockerManager(AdsBrockerManager *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
                    /* try { // try from 006f892c to 006f8933 has its CatchHandler @ 006f8970 */
  Mutex::Mutex((Mutex *)(this + 0x8b8),true);
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0xa0) = 0x101010101010101;
  *(undefined8 *)(this + 0x98) = 0x101010101010101;
  *(undefined8 *)(this + 0xb0) = 0x101010101010101;
  *(undefined8 *)(this + 0xa8) = 0x101010101010101;
  return;
}


