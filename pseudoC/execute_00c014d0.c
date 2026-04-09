// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: execute
// Entry Point: 00c014d0
// Size: 368 bytes
// Signature: undefined __thiscall execute(DictionaryCreator * this, PerItemData * param_1, uint param_2, Config * param_3)


/* DictionaryCreator::execute(DictionaryCreator::PerItemData*, unsigned int, MapFold::Config const&)
    */

undefined8 __thiscall
DictionaryCreator::execute
          (DictionaryCreator *this,PerItemData *param_1,uint param_2,Config *param_3)

{
  long lVar1;
  undefined8 uVar2;
  void **ppvVar3;
  ulong uVar4;
  PerItemData *pPVar5;
  PerItemData **ppPVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined **local_98 [2];
  __tree_node **local_88;
  __tree_node *local_80;
  undefined8 local_78;
  undefined8 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  uVar9 = (ulong)param_2;
  local_98[0] = &PTR_createPerThreadData_00fecfc8;
  local_80 = (__tree_node *)0x0;
  local_78 = 0;
  local_88 = &local_80;
  std::__ndk1::
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>>>
  ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>>>
             *)&local_88,(__tree_node *)0x0);
  local_80 = (__tree_node *)0x0;
  local_78 = 0;
  local_70 = 0;
  local_88 = &local_80;
                    /* try { // try from 00c01548 to 00c015e7 has its CatchHandler @ 00c01640 */
  ppvVar3 = (void **)operator_new__(uVar9 << 3);
  if (param_2 != 0) {
    if (param_2 < 4) {
      uVar4 = 0;
    }
    else {
      uVar4 = uVar9 & 0xfffffffc;
      ppPVar6 = (PerItemData **)(ppvVar3 + 2);
      lVar10 = 1;
      lVar7 = 0;
      uVar8 = uVar4;
      do {
        lVar11 = lVar7 * 0x20;
        lVar12 = lVar10 * 0x20;
        uVar8 = uVar8 - 4;
        lVar7 = lVar7 + 4;
        lVar10 = lVar10 + 4;
        ppPVar6[-1] = param_1 + lVar12;
        ppPVar6[-2] = param_1 + lVar11;
        ppPVar6[1] = param_1 + lVar12 + 0x40;
        *ppPVar6 = param_1 + lVar11 + 0x40;
        ppPVar6 = ppPVar6 + 4;
      } while (uVar8 != 0);
      if (uVar4 == uVar9) goto LAB_00c015d0;
    }
    lVar7 = uVar9 - uVar4;
    pPVar5 = param_1 + uVar4 * 0x20;
    ppPVar6 = (PerItemData **)(ppvVar3 + uVar4);
    do {
      *ppPVar6 = pPVar5;
      lVar7 = lVar7 + -1;
      pPVar5 = pPVar5 + 0x20;
      ppPVar6 = ppPVar6 + 1;
    } while (lVar7 != 0);
  }
LAB_00c015d0:
  MapFold::execute((MapFold *)local_98,ppvVar3,param_2,param_3);
  operator_delete__(ppvVar3);
  uVar2 = local_70;
  local_98[0] = &PTR_createPerThreadData_00fecfc8;
  std::__ndk1::
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>>>
  ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>>>
             *)&local_88,local_80);
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


