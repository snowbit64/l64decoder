// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ProcessLastBlock
// Entry Point: 00d0b9f4
// Size: 268 bytes
// Signature: undefined __thiscall ProcessLastBlock(CBC_CTS_Decryption * this, uchar * param_1, ulong param_2, uchar * param_3, ulong param_4)


/* CryptoPP::CBC_CTS_Decryption::ProcessLastBlock(unsigned char*, unsigned long, unsigned char
   const*, unsigned long) */

ulong __thiscall
CryptoPP::CBC_CTS_Decryption::ProcessLastBlock
          (CBC_CTS_Decryption *this,uchar *param_1,ulong param_2,uchar *param_3,ulong param_4)

{
  ulong uVar1;
  uchar *__src;
  ulong __n;
  ulong __n_00;
  
  __n = (ulong)*(uint *)(this + 0x28);
  uVar1 = __n;
  __src = param_3;
  if (param_4 <= __n) {
    uVar1 = 0;
    __src = *(uchar **)(this + 0x30);
  }
  __n_00 = param_4 - uVar1;
  memcpy(*(void **)(this + 0x70),__src,__n);
  (**(code **)(*(long *)(*(long *)(this + 0x10) + 8) + 0x28))
            ((long *)(*(long *)(this + 0x10) + 8),*(undefined8 *)(this + 0x70),0,
             *(undefined8 *)(this + 0x70));
  xorbuf(*(uchar **)(this + 0x70),param_3 + uVar1,__n_00);
  if (param_4 <= __n) {
    memcpy(param_1,*(void **)(this + 0x70),__n_00);
    return param_4;
  }
  memcpy(param_1 + __n,*(void **)(this + 0x70),__n_00);
  memcpy(*(void **)(this + 0x70),param_3 + uVar1,__n_00);
  (**(code **)(*(long *)(*(long *)(this + 0x10) + 8) + 0x28))
            ((long *)(*(long *)(this + 0x10) + 8),*(undefined8 *)(this + 0x70),0,
             *(undefined8 *)(this + 0x70));
  xorbuf(param_1,*(uchar **)(this + 0x70),*(uchar **)(this + 0x30),__n);
  return param_4;
}


