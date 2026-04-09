// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: NextPutModifiable
// Entry Point: 00cd97a0
// Size: 108 bytes
// Signature: undefined __thiscall NextPutModifiable(StreamTransformationFilter * this, uchar * param_1, ulong param_2)


/* CryptoPP::StreamTransformationFilter::NextPutModifiable(unsigned char*, unsigned long) */

void __thiscall
CryptoPP::StreamTransformationFilter::NextPutModifiable
          (StreamTransformationFilter *this,uchar *param_1,ulong param_2)

{
  long *plVar1;
  
  (**(code **)(**(long **)(this + 0xb8) + 0x48))(*(long **)(this + 0xb8),param_1,param_1,param_2);
  plVar1 = (long *)(**(code **)(*(long *)this + 0x160))(this);
                    /* WARNING: Could not recover jumptable at 0x00cd9808. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x40))(plVar1,param_1,param_2,0,1);
  return;
}


