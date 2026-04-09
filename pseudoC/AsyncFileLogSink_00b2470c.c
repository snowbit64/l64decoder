// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~AsyncFileLogSink
// Entry Point: 00b2470c
// Size: 220 bytes
// Signature: undefined __thiscall ~AsyncFileLogSink(AsyncFileLogSink * this)


/* AsyncFileLogSink::~AsyncFileLogSink() */

void __thiscall AsyncFileLogSink::~AsyncFileLogSink(AsyncFileLogSink *this)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  *(undefined ***)this = &PTR__AsyncFileLogSink_00fe9118;
                    /* try { // try from 00b24730 to 00b24753 has its CatchHandler @ 00b247e8 */
  writePendings();
  Thread::cancel();
  Semaphore::post();
  Thread::join();
  Semaphore::~Semaphore((Semaphore *)(this + 0xb0));
  Thread::~Thread((Thread *)(this + 0x68));
  pbVar2 = *(byte **)(this + 0x50);
  if (pbVar2 != (byte *)0x0) {
    pbVar1 = *(byte **)(this + 0x58);
    pbVar3 = pbVar2;
    if (pbVar1 != pbVar2) {
      do {
        pbVar3 = pbVar1 + -0x18;
        if ((*pbVar3 & 1) != 0) {
          operator_delete(*(void **)(pbVar1 + -8));
        }
        pbVar1 = pbVar3;
      } while (pbVar3 != pbVar2);
      pbVar3 = *(byte **)(this + 0x50);
    }
    *(byte **)(this + 0x58) = pbVar2;
    operator_delete(pbVar3);
  }
  Mutex::~Mutex((Mutex *)(this + 0x28));
  if (((byte)this[8] & 1) != 0) {
    operator_delete(*(void **)(this + 0x18));
    return;
  }
  return;
}


