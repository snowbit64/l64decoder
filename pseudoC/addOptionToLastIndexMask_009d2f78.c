// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addOptionToLastIndexMask
// Entry Point: 009d2f78
// Size: 212 bytes
// Signature: undefined __thiscall addOptionToLastIndexMask(ProceduralPlacementManager * this, uint param_1, basic_string * param_2)


/* ProceduralPlacementManager::addOptionToLastIndexMask(unsigned int,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) */

void __thiscall
ProceduralPlacementManager::addOptionToLastIndexMask
          (ProceduralPlacementManager *this,uint param_1,basic_string *param_2)

{
  byte *pbVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long *this_00;
  long lVar5;
  byte *pbVar6;
  byte *pbVar7;
  
  lVar5 = *(long *)(*(long *)(this + 0x70) + -8);
  this_00 = (long *)(lVar5 + 0xd0);
  lVar3 = (long)*(byte **)(lVar5 + 0xd8) - *this_00 >> 3;
  uVar4 = lVar3 * -0x5555555555555555;
  if (uVar4 - 1 < (ulong)param_1) {
    uVar2 = (ulong)(param_1 + 1);
    if (uVar2 <= uVar4) {
      if (uVar2 <= uVar4 && uVar4 - uVar2 != 0) {
        pbVar6 = (byte *)(*this_00 + uVar2 * 0x18);
        pbVar7 = *(byte **)(lVar5 + 0xd8);
        while (pbVar1 = pbVar7, pbVar1 != pbVar6) {
          pbVar7 = pbVar1 + -0x18;
          if ((*pbVar7 & 1) != 0) {
            operator_delete(*(void **)(pbVar1 + -8));
          }
        }
        *(byte **)(lVar5 + 0xd8) = pbVar6;
      }
    }
    else {
      std::__ndk1::
      vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
      ::__append((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                  *)this_00,uVar2 + lVar3 * 0x5555555555555555);
    }
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (*this_00 + (ulong)param_1 * 0x18),param_2);
  return;
}


