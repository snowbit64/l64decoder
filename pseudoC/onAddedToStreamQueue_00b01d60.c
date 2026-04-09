// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onAddedToStreamQueue
// Entry Point: 00b01d60
// Size: 8 bytes
// Signature: undefined __thiscall onAddedToStreamQueue(Streamable * this, STREAM_QUEUE param_1)


/* Streamable::onAddedToStreamQueue(StreamManager::STREAM_QUEUE) */

void __thiscall Streamable::onAddedToStreamQueue(Streamable *this,STREAM_QUEUE param_1)

{
  *(STREAM_QUEUE *)(this + 0xc) = param_1;
  return;
}


