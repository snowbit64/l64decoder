// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~Preprocessor
// Entry Point: 00b8e510
// Size: 460 bytes
// Signature: undefined __thiscall ~Preprocessor(Preprocessor * this)


/* Preprocessor::~Preprocessor() */

void __thiscall Preprocessor::~Preprocessor(Preprocessor *this)

{
  bool bVar1;
  Preprocessor **ppPVar2;
  byte *pbVar3;
  Preprocessor *pPVar4;
  void *pvVar5;
  void *pvVar6;
  Macro *this_00;
  byte *pbVar7;
  void *pvVar8;
  byte *pbVar9;
  void *pvVar10;
  Preprocessor **ppPVar11;
  
  pvVar5 = *(void **)(this + 0x38);
  if (*(void **)((long)pvVar5 + 8) != (void *)0x0) {
    operator_delete__(*(void **)((long)pvVar5 + 8));
    pvVar5 = *(void **)(this + 0x38);
  }
  pvVar6 = *(void **)((long)pvVar5 + 0x78);
  if (pvVar6 != (void *)0x0) {
    if ((*(byte *)((long)pvVar6 + 0x10) & 1) != 0) {
      operator_delete(*(void **)((long)pvVar6 + 0x20));
    }
    operator_delete(pvVar6);
    pvVar5 = *(void **)(this + 0x38);
    if (pvVar5 == (void *)0x0) goto LAB_00b8e57c;
  }
  if ((*(byte *)((long)pvVar5 + 0x28) & 1) != 0) {
    operator_delete(*(void **)((long)pvVar5 + 0x38));
  }
  operator_delete(pvVar5);
LAB_00b8e57c:
  pvVar5 = *(void **)(this + 0x30);
  if (pvVar5 != (void *)0x0) {
    pvVar6 = *(void **)((long)pvVar5 + 0x90);
    if (pvVar6 != (void *)0x0) {
      pvVar10 = pvVar6;
      pvVar8 = *(void **)((long)pvVar5 + 0x98);
      if (*(void **)((long)pvVar5 + 0x98) != pvVar6) {
        do {
          if ((*(byte *)((long)pvVar8 + -0x28) & 1) != 0) {
            operator_delete(*(void **)((long)pvVar8 + -0x18));
          }
          pvVar10 = (void *)((long)pvVar8 + -0x40);
          if ((*(byte *)((long)pvVar8 + -0x40) & 1) != 0) {
            operator_delete(*(void **)((long)pvVar8 + -0x30));
          }
          pvVar8 = pvVar10;
        } while (pvVar10 != pvVar6);
        pvVar10 = *(void **)((long)pvVar5 + 0x90);
      }
      *(void **)((long)pvVar5 + 0x98) = pvVar6;
      operator_delete(pvVar10);
    }
    operator_delete(pvVar5);
  }
  ppPVar11 = *(Preprocessor ***)(this + 0x18);
  while (ppPVar11 != (Preprocessor **)(this + 0x20)) {
    this_00 = (Macro *)ppPVar11[7];
    if (this_00 != (Macro *)0x0) {
      Macro::~Macro(this_00);
      operator_delete(this_00);
    }
    ppPVar2 = (Preprocessor **)ppPVar11[1];
    if ((Preprocessor **)ppPVar11[1] == (Preprocessor **)0x0) {
      ppPVar2 = ppPVar11 + 2;
      bVar1 = *(Preprocessor ***)*ppPVar2 != ppPVar11;
      ppPVar11 = (Preprocessor **)*ppPVar2;
      if (bVar1) {
        do {
          pPVar4 = *ppPVar2;
          ppPVar2 = (Preprocessor **)(pPVar4 + 0x10);
          ppPVar11 = (Preprocessor **)*ppPVar2;
        } while (*ppPVar11 != pPVar4);
      }
    }
    else {
      do {
        ppPVar11 = ppPVar2;
        ppPVar2 = (Preprocessor **)*ppPVar11;
      } while ((Preprocessor **)*ppPVar11 != (Preprocessor **)0x0);
    }
  }
  pbVar7 = *(byte **)(this + 0x48);
  if (pbVar7 != (byte *)0x0) {
    pbVar3 = *(byte **)(this + 0x50);
    pbVar9 = pbVar7;
    if (pbVar3 != pbVar7) {
      do {
        pbVar9 = pbVar3 + -0x20;
        if ((*pbVar9 & 1) != 0) {
          operator_delete(*(void **)(pbVar3 + -0x10));
        }
        pbVar3 = pbVar9;
      } while (pbVar9 != pbVar7);
      pbVar9 = *(byte **)(this + 0x48);
    }
    *(byte **)(this + 0x50) = pbVar7;
    operator_delete(pbVar9);
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,Preprocessor::Macro*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,Preprocessor::Macro*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,Preprocessor::Macro*>>>
  ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,Preprocessor::Macro*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,Preprocessor::Macro*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,Preprocessor::Macro*>>>
             *)(this + 0x18),*(__tree_node **)(this + 0x20));
  std::__ndk1::
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,PreprocessorMetaMacro*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,PreprocessorMetaMacro*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,PreprocessorMetaMacro*>>>
  ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,PreprocessorMetaMacro*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,PreprocessorMetaMacro*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,PreprocessorMetaMacro*>>>
             *)this,*(__tree_node **)(this + 8));
  return;
}


