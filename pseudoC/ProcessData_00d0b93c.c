// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ProcessData
// Entry Point: 00d0b93c
// Size: 184 bytes
// Signature: undefined __thiscall ProcessData(CBC_Decryption * this, uchar * param_1, uchar * param_2, ulong param_3)


/* non-virtual thunk to CryptoPP::CBC_Decryption::ProcessData(unsigned char*, unsigned char const*,
   unsigned long) */

void __thiscall
CryptoPP::CBC_Decryption::ProcessData
          (CBC_Decryption *this,uchar *param_1,uchar *param_2,ulong param_3)

{
  undefined8 uVar1;
  ulong __n;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_3 != 0) {
    __n = (ulong)*(uint *)(this + 0x20);
    memcpy(*(void **)(this + 0x68),param_2 + (param_3 - __n),__n);
    if (__n <= param_3 && param_3 - __n != 0) {
      (**(code **)(*(long *)(*(long *)(this + 8) + 8) + 0x58))
                ((long *)(*(long *)(this + 8) + 8),param_2 + __n,param_2,param_1 + __n,param_3 - __n
                 ,0x18);
    }
    (**(code **)(*(long *)(*(long *)(this + 8) + 8) + 0x28))
              ((long *)(*(long *)(this + 8) + 8),param_2,*(undefined8 *)(this + 0x28),param_1);
    uVar3 = *(undefined8 *)(this + 0x20);
    uVar2 = *(undefined8 *)(this + 0x18);
    uVar1 = *(undefined8 *)(this + 0x28);
    *(undefined8 *)(this + 0x20) = *(undefined8 *)(this + 0x60);
    *(undefined8 *)(this + 0x18) = *(undefined8 *)(this + 0x58);
    *(undefined8 *)(this + 0x60) = uVar3;
    *(undefined8 *)(this + 0x58) = uVar2;
    *(undefined8 *)(this + 0x28) = *(undefined8 *)(this + 0x68);
    *(undefined8 *)(this + 0x68) = uVar1;
  }
  return;
}


