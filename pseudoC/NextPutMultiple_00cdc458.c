// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: NextPutMultiple
// Entry Point: 00cdc458
// Size: 112 bytes
// Signature: undefined __thiscall NextPutMultiple(SignatureVerificationFilter * this, uchar * param_1, ulong param_2)


/* CryptoPP::SignatureVerificationFilter::NextPutMultiple(unsigned char const*, unsigned long) */

void __thiscall
CryptoPP::SignatureVerificationFilter::NextPutMultiple
          (SignatureVerificationFilter *this,uchar *param_1,ulong param_2)

{
  long *plVar1;
  
  (**(code **)(**(long **)(this + 0x98) + 0x28))();
  if (((byte)this[0xa0] >> 1 & 1) != 0) {
    plVar1 = (long *)(**(code **)(*(long *)this + 0x160))(this);
    (**(code **)(*plVar1 + 0x38))(plVar1,param_1,param_2,0,1);
  }
  return;
}


