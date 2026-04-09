// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: execute
// Entry Point: 00c0165c
// Size: 256 bytes
// Signature: undefined __thiscall execute(Main * this, PerItemData * param_1, uint param_2, Config * param_3)


/* DictionaryCreator::Main::execute(DictionaryCreator::PerItemData*, unsigned int, MapFold::Config
   const&) */

undefined8 __thiscall
DictionaryCreator::Main::execute(Main *this,PerItemData *param_1,uint param_2,Config *param_3)

{
  void **ppvVar1;
  ulong uVar2;
  PerItemData *pPVar3;
  PerItemData **ppPVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  uVar7 = (ulong)param_2;
  std::__ndk1::
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>>>
  ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>>>
             *)(this + 0x10),*(__tree_node **)(this + 0x18));
  *(Main **)(this + 0x10) = this + 0x18;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  ppvVar1 = (void **)operator_new__(uVar7 << 3);
  if (param_2 != 0) {
    if (param_2 < 4) {
      uVar2 = 0;
    }
    else {
      uVar2 = uVar7 & 0xfffffffc;
      ppPVar4 = (PerItemData **)(ppvVar1 + 2);
      lVar8 = 1;
      lVar5 = 0;
      uVar6 = uVar2;
      do {
        lVar9 = lVar5 * 0x20;
        lVar10 = lVar8 * 0x20;
        uVar6 = uVar6 - 4;
        lVar5 = lVar5 + 4;
        lVar8 = lVar8 + 4;
        ppPVar4[-1] = param_1 + lVar10;
        ppPVar4[-2] = param_1 + lVar9;
        ppPVar4[1] = param_1 + lVar10 + 0x40;
        *ppPVar4 = param_1 + lVar9 + 0x40;
        ppPVar4 = ppPVar4 + 4;
      } while (uVar6 != 0);
      if (uVar2 == uVar7) goto LAB_00c01728;
    }
    lVar5 = uVar7 - uVar2;
    pPVar3 = param_1 + uVar2 * 0x20;
    ppPVar4 = (PerItemData **)(ppvVar1 + uVar2);
    do {
      *ppPVar4 = pPVar3;
      lVar5 = lVar5 + -1;
      pPVar3 = pPVar3 + 0x20;
      ppPVar4 = ppPVar4 + 1;
    } while (lVar5 != 0);
  }
LAB_00c01728:
  MapFold::execute((MapFold *)this,ppvVar1,param_2,param_3);
  operator_delete__(ppvVar1);
  return *(undefined8 *)(this + 0x28);
}


