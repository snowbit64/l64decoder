// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: WebResourceManager
// Entry Point: 00b04a9c
// Size: 172 bytes
// Signature: undefined __thiscall WebResourceManager(WebResourceManager * this)


/* WebResourceManager::WebResourceManager() */

void __thiscall WebResourceManager::WebResourceManager(WebResourceManager *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
                    /* try { // try from 00b04ac4 to 00b04acf has its CatchHandler @ 00b04b50 */
  Semaphore::Semaphore((Semaphore *)(this + 0x18),0);
                    /* try { // try from 00b04ad4 to 00b04adf has its CatchHandler @ 00b04b48 */
  Mutex::Mutex((Mutex *)(this + 0x28),true);
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(WebResourceManager **)(this + 0x88) = this + 0x90;
  *(undefined8 *)(this + 0x98) = 0;
  this[0xa0] = (WebResourceManager)0x0;
  while ((ulong)(*(long *)(this + 8) - *(long *)this) < 0x20) {
                    /* try { // try from 00b04b20 to 00b04b2b has its CatchHandler @ 00b04b58 */
    createThread(this,false);
  }
  return;
}


