// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: TransferTo2
// Entry Point: 00cdcdbc
// Size: 192 bytes
// Signature: undefined __thiscall TransferTo2(NullStore * this, BufferedTransformation * param_1, ulong * param_2, basic_string * param_3, bool param_4)


/* CryptoPP::NullStore::TransferTo2(CryptoPP::BufferedTransformation&, unsigned long&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, bool) */

long __thiscall
CryptoPP::NullStore::TransferTo2
          (NullStore *this,BufferedTransformation *param_1,ulong *param_2,basic_string *param_3,
          bool param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = *param_2;
  if (uVar4 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    do {
      uVar2 = uVar4 - uVar3;
      if (0x7f < uVar2) {
        uVar2 = 0x80;
      }
      lVar1 = (**(code **)(*(long *)param_1 + 0x130))(param_1,param_3,&DAT_0054364b,uVar2,0,param_4)
      ;
      if (lVar1 != 0) goto LAB_00cdce50;
      uVar3 = uVar2 + uVar3;
    } while (uVar3 < uVar4);
  }
  lVar1 = 0;
LAB_00cdce50:
  *param_2 = uVar3;
  *(ulong *)(this + 0x20) = *(long *)(this + 0x20) - uVar3;
  return lVar1;
}


