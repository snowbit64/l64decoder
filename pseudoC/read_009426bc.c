// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: read
// Entry Point: 009426bc
// Size: 4 bytes
// Signature: undefined __cdecl read(void * param_1, uint param_2)


/* BufferedFileReader::read(void*, unsigned int) */

void BufferedFileReader::read(void *param_1,uint param_2)

{
  uint in_w2;
  
  readInlined((BufferedFileReader *)param_1,(void *)(ulong)param_2,in_w2);
  return;
}


