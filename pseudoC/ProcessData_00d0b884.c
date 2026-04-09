// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ProcessData
// Entry Point: 00d0b884
// Size: 184 bytes
// Signature: undefined __thiscall ProcessData(CBC_Decryption * this, uchar * param_1, uchar * param_2, ulong param_3)


/* CryptoPP::CBC_Decryption::ProcessData(unsigned char*, unsigned char const*, unsigned long) */

void __thiscall
CryptoPP::CBC_Decryption::ProcessData
          (CBC_Decryption *this,uchar *param_1,uchar *param_2,ulong param_3)

{
  undefined8 uVar1;
  ulong __n;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_3 != 0) {
    __n = (ulong)*(uint *)(this + 0x28);
    memcpy(*(void **)(this + 0x70),param_2 + (param_3 - __n),__n);
    if (__n <= param_3 && param_3 - __n != 0) {
      (**(code **)(*(long *)(*(long *)(this + 0x10) + 8) + 0x58))
                ((long *)(*(long *)(this + 0x10) + 8),param_2 + __n,param_2,param_1 + __n,
                 param_3 - __n,0x18);
    }
    (**(code **)(*(long *)(*(long *)(this + 0x10) + 8) + 0x28))
              ((long *)(*(long *)(this + 0x10) + 8),param_2,*(undefined8 *)(this + 0x30),param_1);
    uVar3 = *(undefined8 *)(this + 0x28);
    uVar2 = *(undefined8 *)(this + 0x20);
    uVar1 = *(undefined8 *)(this + 0x30);
    *(undefined8 *)(this + 0x28) = *(undefined8 *)(this + 0x68);
    *(undefined8 *)(this + 0x20) = *(undefined8 *)(this + 0x60);
    *(undefined8 *)(this + 0x68) = uVar3;
    *(undefined8 *)(this + 0x60) = uVar2;
    *(undefined8 *)(this + 0x30) = *(undefined8 *)(this + 0x70);
    *(undefined8 *)(this + 0x70) = uVar1;
  }
  return;
}


