// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: LoopSynthesisResource
// Entry Point: 008a33f0
// Size: 64 bytes
// Signature: undefined __thiscall LoopSynthesisResource(LoopSynthesisResource * this, char * param_1, uint param_2)


/* LoopSynthesisResource::LoopSynthesisResource(char const*, unsigned int) */

void __thiscall
LoopSynthesisResource::LoopSynthesisResource(LoopSynthesisResource *this,char *param_1,uint param_2)

{
  Resource::Resource((Resource *)this,param_1,param_2);
  *(undefined ***)this = &PTR__LoopSynthesisResource_00fdd418;
  *(undefined ***)(this + 0x10) = &PTR__LoopSynthesisResource_00fdd460;
                    /* try { // try from 008a3420 to 008a3423 has its CatchHandler @ 008a3430 */
  LoopSynthesisDataExchanger::LoopSynthesisDataExchanger
            ((LoopSynthesisDataExchanger *)(this + 0x48));
  return;
}


