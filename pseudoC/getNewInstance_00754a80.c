// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getNewInstance
// Entry Point: 00754a80
// Size: 68 bytes
// Signature: undefined __cdecl getNewInstance(char * param_1, ResourceDesc * param_2)


/* GenericResourceLoader<SampleChunk>::getNewInstance(char const*, ResourceDesc*) */

SampleChunk *
GenericResourceLoader<SampleChunk>::getNewInstance(char *param_1,ResourceDesc *param_2)

{
  SampleChunk *this;
  
  this = (SampleChunk *)operator_new(0xa8);
                    /* try { // try from 00754aa8 to 00754aaf has its CatchHandler @ 00754ac4 */
  SampleChunk::SampleChunk(this,(char *)param_2,*(uint *)(param_1 + 8));
  return this;
}


