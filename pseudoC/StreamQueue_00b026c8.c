// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: StreamQueue
// Entry Point: 00b026c8
// Size: 80 bytes
// Signature: undefined __thiscall StreamQueue(StreamQueue * this)


/* StreamQueue::StreamQueue() */

void __thiscall StreamQueue::StreamQueue(StreamQueue *this)

{
  Mutex::Mutex((Mutex *)this,true);
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x28) = 0;
                    /* try { // try from 00b026f4 to 00b026fb has its CatchHandler @ 00b02718 */
  Mutex::Mutex((Mutex *)(this + 0x58),true);
  *(undefined8 *)(this + 0xb4) = 0;
  *(undefined8 *)(this + 0xac) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  return;
}


