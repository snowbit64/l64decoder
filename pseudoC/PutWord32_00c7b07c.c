// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: PutWord32
// Entry Point: 00c7b07c
// Size: 52 bytes
// Signature: undefined __thiscall PutWord32(BufferedTransformation * this, uint param_1, ByteOrder param_2, bool param_3)


/* CryptoPP::BufferedTransformation::PutWord32(unsigned int, CryptoPP::ByteOrder, bool) */

void __thiscall
CryptoPP::BufferedTransformation::PutWord32
          (BufferedTransformation *this,uint param_1,ByteOrder param_2,bool param_3)

{
  uint uVar1;
  
  uVar1 = (param_1 & 0xff00ff00) >> 8 | (param_1 & 0xff00ff) << 8;
  if (param_2 != 0) {
    param_1 = uVar1 >> 0x10 | uVar1 << 0x10;
  }
  *(uint *)(this + 0x10) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00c7b0ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x130))(this,&DEFAULT_CHANNEL,this + 0x10,4,0,param_3);
  return;
}


