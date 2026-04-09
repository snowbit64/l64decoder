// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GenerateIntoBufferedTransformation
// Entry Point: 00d200f8
// Size: 172 bytes
// Signature: undefined __thiscall GenerateIntoBufferedTransformation(OldRandomPool * this, BufferedTransformation * param_1, basic_string * param_2, ulong param_3)


/* CryptoPP::OldRandomPool::GenerateIntoBufferedTransformation(CryptoPP::BufferedTransformation&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, unsigned long) */

void __thiscall
CryptoPP::OldRandomPool::GenerateIntoBufferedTransformation
          (OldRandomPool *this,BufferedTransformation *param_1,basic_string *param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  if (param_3 != 0) {
    lVar2 = *(long *)(this + 0x50);
    do {
      lVar3 = *(long *)(this + 0x18);
      if (lVar2 == lVar3) {
        Stir();
        lVar3 = *(long *)(this + 0x18);
        lVar2 = *(long *)(this + 0x50);
      }
      uVar1 = param_3;
      if ((ulong)(lVar3 - lVar2) <= param_3) {
        uVar1 = lVar3 - lVar2;
      }
      (**(code **)(*(long *)param_1 + 0x130))
                (param_1,param_2,*(long *)(this + 0x20) + lVar2,uVar1,0,1);
      param_3 = param_3 - uVar1;
      lVar2 = *(long *)(this + 0x50) + uVar1;
      *(long *)(this + 0x50) = lVar2;
    } while (param_3 != 0);
  }
  return;
}


