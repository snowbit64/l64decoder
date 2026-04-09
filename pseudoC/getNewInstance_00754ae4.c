// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getNewInstance
// Entry Point: 00754ae4
// Size: 68 bytes
// Signature: undefined __cdecl getNewInstance(char * param_1, ResourceDesc * param_2)


/* GenericResourceLoader<LoopSynthesisResource>::getNewInstance(char const*, ResourceDesc*) */

LoopSynthesisResource *
GenericResourceLoader<LoopSynthesisResource>::getNewInstance(char *param_1,ResourceDesc *param_2)

{
  LoopSynthesisResource *this;
  
  this = (LoopSynthesisResource *)operator_new(0x2b8);
                    /* try { // try from 00754b0c to 00754b13 has its CatchHandler @ 00754b28 */
  LoopSynthesisResource::LoopSynthesisResource(this,(char *)param_2,*(uint *)(param_1 + 8));
  return this;
}


