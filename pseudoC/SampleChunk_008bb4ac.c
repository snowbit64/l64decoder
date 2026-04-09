// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: SampleChunk
// Entry Point: 008bb4ac
// Size: 140 bytes
// Signature: undefined __thiscall SampleChunk(SampleChunk * this, char * param_1, uint param_2)


/* SampleChunk::SampleChunk(char const*, unsigned int) */

void __thiscall SampleChunk::SampleChunk(SampleChunk *this,char *param_1,uint param_2)

{
  Resource::Resource((Resource *)this,param_1,param_2);
  *(undefined4 *)(this + 0x50) = 2;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined ***)(this + 0x10) = &PTR__SampleChunk_00fddc60;
  *(undefined ***)this = &PTR__SampleChunk_00fddc18;
  *(undefined4 *)(this + 0x98) = 0;
  this[0x54] = (SampleChunk)0x1;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined4 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined4 *)(this + 0x70) = 0;
                    /* try { // try from 008bb510 to 008bb51f has its CatchHandler @ 008bb538 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)(this + 0x78));
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x9c) = 0x3f800000;
  return;
}


