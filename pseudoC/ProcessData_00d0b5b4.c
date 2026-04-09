// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ProcessData
// Entry Point: 00d0b5b4
// Size: 172 bytes
// Signature: undefined __thiscall ProcessData(CBC_Encryption * this, uchar * param_1, uchar * param_2, ulong param_3)


/* non-virtual thunk to CryptoPP::CBC_Encryption::ProcessData(unsigned char*, unsigned char const*,
   unsigned long) */

void __thiscall
CryptoPP::CBC_Encryption::ProcessData
          (CBC_Encryption *this,uchar *param_1,uchar *param_2,ulong param_3)

{
  ulong __n;
  long lVar1;
  
  if (param_3 != 0) {
    __n = (ulong)*(uint *)(this + 0x20);
    (**(code **)(*(long *)(*(long *)(this + 8) + 8) + 0x58))
              ((long *)(*(long *)(this + 8) + 8),param_2,*(undefined8 *)(this + 0x28),param_1,__n,4)
    ;
    if (__n < param_3) {
      lVar1 = param_3 - __n;
      (**(code **)(*(long *)(*(long *)(this + 8) + 8) + 0x58))
                ((long *)(*(long *)(this + 8) + 8),param_2 + __n,param_1,param_1 + __n,lVar1,4);
    }
    else {
      lVar1 = param_3 - __n;
    }
    memcpy(*(void **)(this + 0x28),param_1 + lVar1,__n);
    return;
  }
  return;
}


