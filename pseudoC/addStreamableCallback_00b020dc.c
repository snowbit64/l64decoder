// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addStreamableCallback
// Entry Point: 00b020dc
// Size: 112 bytes
// Signature: undefined __thiscall addStreamableCallback(StreamManager * this, StreamQueueCallback * param_1, void * param_2, STREAM_QUEUE param_3)


/* StreamManager::addStreamableCallback(StreamManager::StreamQueueCallback&, void*,
   StreamManager::STREAM_QUEUE) */

void __thiscall
StreamManager::addStreamableCallback
          (StreamManager *this,StreamQueueCallback *param_1,void *param_2,STREAM_QUEUE param_3)

{
  Streamable *this_00;
  
  if (param_3 == 2) {
    this_00 = (Streamable *)getStreamableCallback(this,param_1,param_2);
    StreamQueue::addStreamable((StreamQueue *)this,this_00);
    Streamable::onAddedToStreamQueue(this_00,2);
    return;
  }
  if (param_3 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00b02110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1 + 0x10))(param_1,1);
    return;
  }
  return;
}


