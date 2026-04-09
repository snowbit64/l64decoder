// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Iterate
// Entry Point: 00d0a668
// Size: 288 bytes
// Signature: undefined __thiscall Iterate(CFB_ModePolicy * this, uchar * param_1, uchar * param_2, CipherDir param_3, ulong param_4)


/* CryptoPP::CFB_ModePolicy::Iterate(unsigned char*, unsigned char const*, CryptoPP::CipherDir,
   unsigned long) */

void __thiscall
CryptoPP::CFB_ModePolicy::Iterate
          (CFB_ModePolicy *this,uchar *param_1,uchar *param_2,CipherDir param_3,ulong param_4)

{
  ulong __n;
  long lVar1;
  
  __n = (ulong)*(uint *)(this + 0x28);
  if (param_3 == 0) {
    (**(code **)(*(long *)(*(long *)(this + 0x10) + 8) + 0x28))
              ((long *)(*(long *)(this + 0x10) + 8),*(undefined8 *)(this + 0x30),param_2,param_1);
    lVar1 = param_4 - 1;
    if (param_4 != 0 && lVar1 != 0) {
      (**(code **)(*(long *)(*(long *)(this + 0x10) + 8) + 0x58))
                ((long *)(*(long *)(this + 0x10) + 8),param_1,param_2 + __n,param_1 + __n,
                 __n * lVar1,0);
    }
    memcpy(*(void **)(this + 0x30),param_1 + __n * lVar1,__n);
    return;
  }
  lVar1 = __n * (param_4 - 1);
  memcpy(*(void **)(this + 0x58),param_2 + lVar1,__n);
  if (1 < param_4) {
    (**(code **)(*(long *)(*(long *)(this + 0x10) + 8) + 0x58))
              ((long *)(*(long *)(this + 0x10) + 8),param_2,param_2 + __n,param_1 + __n,lVar1,8);
  }
  (**(code **)(*(long *)(*(long *)(this + 0x10) + 8) + 0x28))
            ((long *)(*(long *)(this + 0x10) + 8),*(undefined8 *)(this + 0x30),param_2,param_1);
  memcpy(*(void **)(this + 0x30),*(void **)(this + 0x58),__n);
  return;
}


