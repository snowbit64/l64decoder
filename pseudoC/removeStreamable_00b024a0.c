// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeStreamable
// Entry Point: 00b024a0
// Size: 16 bytes
// Signature: undefined __thiscall removeStreamable(StreamManager * this, Streamable * param_1, STREAM_QUEUE param_2)


/* StreamManager::removeStreamable(Streamable&, StreamManager::STREAM_QUEUE) */

void __thiscall
StreamManager::removeStreamable(StreamManager *this,Streamable *param_1,STREAM_QUEUE param_2)

{
  if (param_2 == 2) {
    StreamQueue::removeStreamable((StreamQueue *)this,param_1);
    return;
  }
  return;
}


