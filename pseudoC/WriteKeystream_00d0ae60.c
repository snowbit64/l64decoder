// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: WriteKeystream
// Entry Point: 00d0ae60
// Size: 144 bytes
// Signature: undefined __thiscall WriteKeystream(OFB_ModePolicy * this, uchar * param_1, ulong param_2)


/* non-virtual thunk to CryptoPP::OFB_ModePolicy::WriteKeystream(unsigned char*, unsigned long) */

void __thiscall
CryptoPP::OFB_ModePolicy::WriteKeystream(OFB_ModePolicy *this,uchar *param_1,ulong param_2)

{
  long lVar1;
  ulong __n;
  
  __n = (ulong)*(uint *)(this + -0x10);
  (**(code **)(*(long *)(*(long *)(this + -0x28) + 8) + 0x28))
            ((long *)(*(long *)(this + -0x28) + 8),*(undefined8 *)(this + -8),0,param_1);
  lVar1 = param_2 - 1;
  if (param_2 != 0 && lVar1 != 0) {
    (**(code **)(*(long *)(*(long *)(this + -0x28) + 8) + 0x58))
              ((long *)(*(long *)(this + -0x28) + 8),param_1,0,param_1 + __n,__n * lVar1,0);
  }
  memcpy(*(void **)(this + -8),param_1 + __n * lVar1,__n);
  return;
}


