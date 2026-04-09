// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: I3DStreamingManager
// Entry Point: 00942e2c
// Size: 200 bytes
// Signature: undefined __thiscall I3DStreamingManager(I3DStreamingManager * this)


/* I3DStreamingManager::I3DStreamingManager() */

void __thiscall I3DStreamingManager::I3DStreamingManager(I3DStreamingManager *this)

{
  Thread *this_00;
  
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined ***)this = &PTR__I3DStreamingManager_00fe0358;
                    /* try { // try from 00942e6c to 00942e77 has its CatchHandler @ 00942f10 */
  Mutex::Mutex((Mutex *)(this + 0x3c),true);
                    /* try { // try from 00942e7c to 00942e8b has its CatchHandler @ 00942f08 */
  Event::Event((Event *)(this + 0x88),false,false);
  *(undefined8 *)(this + 0x78) = 0;
  this[0x38] = (I3DStreamingManager)0x1;
  *(undefined4 *)(this + 100) = 1;
  *(undefined8 *)(this + 0x68) = 0;
  this[0x70] = (I3DStreamingManager)0x0;
                    /* try { // try from 00942ea4 to 00942eab has its CatchHandler @ 00942f18 */
  this_00 = (Thread *)operator_new(0x48);
                    /* try { // try from 00942eb0 to 00942eb3 has its CatchHandler @ 00942ef4 */
  Thread::Thread(this_00);
  *(Thread **)(this + 0x78) = this_00;
                    /* try { // try from 00942eb8 to 00942edf has its CatchHandler @ 00942f18 */
  Thread::start(this_00,streamingThreadFunction,this,0xffffffff,"GIANTS Streaming Manager",2,0x80000
               );
  return;
}


