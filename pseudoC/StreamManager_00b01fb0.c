// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: StreamManager
// Entry Point: 00b01fb0
// Size: 52 bytes
// Signature: undefined __thiscall StreamManager(StreamManager * this)


/* StreamManager::StreamManager() */

void __thiscall StreamManager::StreamManager(StreamManager *this)

{
  StreamQueue::StreamQueue((StreamQueue *)this);
                    /* try { // try from 00b01fc8 to 00b01fcf has its CatchHandler @ 00b01fe4 */
  Mutex::Mutex((Mutex *)(this + 0xc0),true);
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  return;
}


