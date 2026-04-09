// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: PutWord16
// Entry Point: 00c7b044
// Size: 56 bytes
// Signature: undefined __thiscall PutWord16(BufferedTransformation * this, ushort param_1, ByteOrder param_2, bool param_3)


/* CryptoPP::BufferedTransformation::PutWord16(unsigned short, CryptoPP::ByteOrder, bool) */

void __thiscall
CryptoPP::BufferedTransformation::PutWord16
          (BufferedTransformation *this,ushort param_1,ByteOrder param_2,bool param_3)

{
  if (param_2 != 0) {
    param_1 = param_1 >> 8 | (ushort)((param_1 & 0xff00ff) << 8);
  }
  *(ushort *)(this + 0x10) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00c7b078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x130))(this,&DEFAULT_CHANNEL,this + 0x10,2,0,param_3);
  return;
}


