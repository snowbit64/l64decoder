// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b852c
// Entry Point: 007b852c
// Size: 36 bytes
// Signature: undefined FUN_007b852c(void)


void FUN_007b852c(undefined8 param_1,uint *param_2)

{
  GsBitStream *this;
  
  this = (GsBitStream *)NetworkStream::getWriteStream();
  GsBitStream::setWriteOffset(this,*param_2);
  return;
}


