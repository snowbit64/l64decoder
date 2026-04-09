// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~Streamable
// Entry Point: 00b01d14
// Size: 68 bytes
// Signature: undefined __thiscall ~Streamable(Streamable * this)


/* Streamable::~Streamable() */

void __thiscall Streamable::~Streamable(Streamable *this)

{
  StreamManager *this_00;
  
  *(undefined ***)this = &PTR__Streamable_00fe7148;
  if (*(int *)(this + 0xc) != 0) {
                    /* try { // try from 00b01d3c to 00b01d4b has its CatchHandler @ 00b01d58 */
    this_00 = (StreamManager *)StreamManager::getInstance();
    StreamManager::removeStreamable(this_00,this,*(STREAM_QUEUE *)(this + 0xc));
  }
  return;
}


