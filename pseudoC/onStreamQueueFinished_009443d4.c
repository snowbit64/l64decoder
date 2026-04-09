// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onStreamQueueFinished
// Entry Point: 009443d4
// Size: 12 bytes
// Signature: undefined __thiscall onStreamQueueFinished(I3DStreamingManager * this, STREAM_QUEUE param_1, void * param_2)


/* I3DStreamingManager::onStreamQueueFinished(StreamManager::STREAM_QUEUE, void*) */

void __thiscall
I3DStreamingManager::onStreamQueueFinished
          (I3DStreamingManager *this,STREAM_QUEUE param_1,void *param_2)

{
  *(undefined4 *)((long)param_2 + 0x4d0) = 6;
  return;
}


