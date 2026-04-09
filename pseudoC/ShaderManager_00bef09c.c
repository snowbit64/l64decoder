// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ShaderManager
// Entry Point: 00bef09c
// Size: 180 bytes
// Signature: undefined __thiscall ShaderManager(ShaderManager * this)


/* ShaderManager::ShaderManager() */

void __thiscall ShaderManager::ShaderManager(ShaderManager *this)

{
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x38) = 0;
                    /* try { // try from 00bef0cc to 00bef0d7 has its CatchHandler @ 00bef174 */
  Mutex::Mutex((Mutex *)(this + 0x94),true);
                    /* try { // try from 00bef0dc to 00bef0e7 has its CatchHandler @ 00bef164 */
  Semaphore::Semaphore((Semaphore *)(this + 0xbc),0);
                    /* try { // try from 00bef0ec to 00bef0f7 has its CatchHandler @ 00bef150 */
  Event::Event((Event *)(this + 0xcc),false,false);
  this[0x24] = (ShaderManager)0x0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 0x130) = 0;
  *(undefined8 *)(this + 0x128) = 0;
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined8 *)(this + 0x150) = 0;
  *(undefined8 *)(this + 0x148) = 0;
  *(undefined8 *)(this + 0x160) = 0;
  *(undefined8 *)(this + 0x158) = 0;
  *(undefined8 *)(this + 0x168) = 0;
  *(undefined4 *)(this + 0x170) = 0;
  this[0x90] = (ShaderManager)0x0;
  *(undefined8 *)(this + 0x178) = 0;
  *(undefined4 *)(this + 0x180) = 0;
  *(undefined8 *)(this + 0x188) = 0;
  *(undefined4 *)(this + 400) = 0;
  *(undefined8 *)(this + 0x198) = 0;
  *(undefined4 *)(this + 0x1a0) = 0;
  *(undefined8 *)(this + 0x1a8) = 0;
  *(undefined4 *)(this + 0x1b0) = 0;
  return;
}


