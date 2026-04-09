// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b76f4
// Entry Point: 007b76f4
// Size: 96 bytes
// Signature: undefined FUN_007b76f4(void)


NetworkStream * FUN_007b76f4(void)

{
  NetworkStream *this;
  GsBitStream *this_00;
  
  this = (NetworkStream *)operator_new(0x38);
                    /* try { // try from 007b7710 to 007b7717 has its CatchHandler @ 007b7760 */
  NetworkStream::NetworkStream(this,0xffffffff);
  this_00 = (GsBitStream *)operator_new(0x20);
                    /* try { // try from 007b7724 to 007b7727 has its CatchHandler @ 007b7754 */
  GsBitStream::GsBitStream(this_00);
  NetworkStream::setWriteStream(this,this_00);
  NetworkStream::setReadStream(this,this_00);
  return this;
}


