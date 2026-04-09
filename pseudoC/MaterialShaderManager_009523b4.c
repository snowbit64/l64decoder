// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: MaterialShaderManager
// Entry Point: 009523b4
// Size: 188 bytes
// Signature: undefined __thiscall MaterialShaderManager(MaterialShaderManager * this)


/* MaterialShaderManager::MaterialShaderManager() */

void __thiscall MaterialShaderManager::MaterialShaderManager(MaterialShaderManager *this)

{
  *(undefined8 *)(this + 0x68) = 0;
  *(MaterialShaderManager **)(this + 0x60) = this + 0x68;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(MaterialShaderManager **)(this + 0x78) = this + 0x80;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(MaterialShaderManager **)(this + 0x90) = this + 0x98;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
                    /* try { // try from 00952420 to 0095242b has its CatchHandler @ 00952494 */
  Mutex::Mutex((Mutex *)(this + 0xa8),true);
  *(undefined8 *)(this + 0xe0) = 0;
  *(MaterialShaderManager **)(this + 0xd8) = this + 0xe0;
  *(undefined8 *)(this + 0xe8) = 0;
                    /* try { // try from 00952444 to 0095244b has its CatchHandler @ 00952470 */
  Mutex::Mutex((Mutex *)(this + 0xf0),true);
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined4 *)(this + 0x120) = 0;
  return;
}


