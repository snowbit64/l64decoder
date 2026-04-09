// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: NextPutMultiple
// Entry Point: 00cd83d0
// Size: 84 bytes
// Signature: undefined __thiscall NextPutMultiple(FilterWithBufferedInput * this, uchar * param_1, ulong param_2)


/* CryptoPP::FilterWithBufferedInput::NextPutMultiple(unsigned char const*, unsigned long) */

void __thiscall
CryptoPP::FilterWithBufferedInput::NextPutMultiple
          (FilterWithBufferedInput *this,uchar *param_1,ulong param_2)

{
  if (param_2 != 0) {
    do {
      (**(code **)(*(long *)this + 0x1d0))(this,param_1);
      param_1 = param_1 + *(long *)(this + 0x38);
      param_2 = param_2 - *(long *)(this + 0x38);
    } while (param_2 != 0);
  }
  return;
}


