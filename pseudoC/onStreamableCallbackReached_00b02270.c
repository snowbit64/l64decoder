// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onStreamableCallbackReached
// Entry Point: 00b02270
// Size: 4 bytes
// Signature: undefined __cdecl onStreamableCallbackReached(StreamableCallback * param_1)


/* StreamManager::onStreamableCallbackReached(StreamableCallback*) */

void StreamManager::onStreamableCallbackReached(StreamableCallback *param_1)

{
  StreamableCallback *in_x1;
  
  releaseCallback((StreamManager *)param_1,in_x1);
  return;
}


