// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addToStreamQueue
// Entry Point: 0088f83c
// Size: 60 bytes
// Signature: undefined __thiscall addToStreamQueue(DensityMapEntity * this, STREAM_QUEUE param_1)


/* DensityMapEntity::addToStreamQueue(StreamManager::STREAM_QUEUE) */

void __thiscall DensityMapEntity::addToStreamQueue(DensityMapEntity *this,STREAM_QUEUE param_1)

{
  StreamManager *this_00;
  
  if (*(long *)(this + 0x20) != 0) {
    this_00 = (StreamManager *)StreamManager::getInstance();
    StreamManager::addStreamable(this_00,(Streamable *)(*(long *)(this + 0x20) + 0x10),param_1);
  }
  return;
}


