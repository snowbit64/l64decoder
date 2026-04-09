// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b84d8
// Entry Point: 007b84d8
// Size: 36 bytes
// Signature: undefined FUN_007b84d8(void)


void FUN_007b84d8(undefined8 param_1,uint *param_2)

{
  GsBitStream *this;
  
  this = (GsBitStream *)NetworkStream::getReadStream();
  GsBitStream::setReadOffset(this,*param_2);
  return;
}


