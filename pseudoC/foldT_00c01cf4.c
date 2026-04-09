// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: foldT
// Entry Point: 00c01cf4
// Size: 224 bytes
// Signature: undefined __thiscall foldT(Main * this, PerThreadData * param_1)


/* DictionaryCreator::Main::foldT(DictionaryCreator::PerThreadData*) */

undefined8 __thiscall DictionaryCreator::Main::foldT(Main *this,PerThreadData *param_1)

{
  __tree_iterator _Var1;
  PerThreadData **ppPVar3;
  PerThreadData **ppPVar4;
  PerThreadData *pPVar5;
  PerThreadData **ppPVar6;
  Main *pMVar2;
  
  if (*(PerThreadData ***)param_1 != (PerThreadData **)(param_1 + 8)) {
    ppPVar6 = *(PerThreadData ***)param_1;
    do {
      ppPVar3 = ppPVar6 + 4;
      _Var1 = std::__ndk1::
              __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>>>
              ::
              find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                        ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>>>
                          *)(this + 0x10),(basic_string *)ppPVar3);
      pMVar2 = (Main *)(ulong)_Var1;
      if (this + 0x18 == pMVar2) {
        std::__ndk1::
        __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>>>
        ::
        __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,unsigned_int>const&>
                  ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>>>
                    *)(this + 0x10),(basic_string *)ppPVar3,(pair *)ppPVar3);
        ppPVar3 = (PerThreadData **)ppPVar6[1];
        if ((PerThreadData **)ppPVar6[1] == (PerThreadData **)0x0) goto LAB_00c01d8c;
LAB_00c01d7c:
        do {
          ppPVar4 = ppPVar3;
          ppPVar3 = (PerThreadData **)*ppPVar4;
        } while ((PerThreadData **)*ppPVar4 != (PerThreadData **)0x0);
      }
      else {
        *(int *)(pMVar2 + 0x38) = *(int *)(pMVar2 + 0x38) + *(int *)(ppPVar6 + 7);
        ppPVar3 = (PerThreadData **)ppPVar6[1];
        if ((PerThreadData **)ppPVar6[1] != (PerThreadData **)0x0) goto LAB_00c01d7c;
LAB_00c01d8c:
        ppPVar3 = ppPVar6 + 2;
        ppPVar4 = (PerThreadData **)*ppPVar3;
        if ((PerThreadData **)*ppPVar4 != ppPVar6) {
          do {
            pPVar5 = *ppPVar3;
            ppPVar3 = (PerThreadData **)(pPVar5 + 0x10);
            ppPVar4 = (PerThreadData **)*ppPVar3;
          } while (*ppPVar4 != pPVar5);
        }
      }
      ppPVar6 = ppPVar4;
    } while (ppPVar4 != (PerThreadData **)(param_1 + 8));
  }
  return 1;
}


