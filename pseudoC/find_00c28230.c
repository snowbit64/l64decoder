// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: find
// Entry Point: 00c28230
// Size: 184 bytes
// Signature: undefined __thiscall find(GsTSymbolTable * this, SHC_String * param_1, bool * param_2, bool * param_3)


/* GsTSymbolTable::find(SHC_String const&, bool*, bool*) */

void __thiscall
GsTSymbolTable::find(GsTSymbolTable *this,SHC_String *param_1,bool *param_2,bool *param_3)

{
  __tree_const_iterator _Var1;
  long lVar2;
  __tree<std::__ndk1::__value_type<SHC_String,GsTSymbol*>,std::__ndk1::__map_value_compare<SHC_String,std::__ndk1::__value_type<SHC_String,GsTSymbol*>,std::__ndk1::less<SHC_String>,true>,SHC_STLPoolAllocator<std::__ndk1::__value_type<SHC_String,GsTSymbol*>>>
  *this_00;
  long lVar3;
  
  lVar2 = *(long *)this;
  lVar3 = (*(long *)(this + 8) - lVar2) * 0x20000000 >> 0x20;
  while( true ) {
    this_00 = *(__tree<std::__ndk1::__value_type<SHC_String,GsTSymbol*>,std::__ndk1::__map_value_compare<SHC_String,std::__ndk1::__value_type<SHC_String,GsTSymbol*>,std::__ndk1::less<SHC_String>,true>,SHC_STLPoolAllocator<std::__ndk1::__value_type<SHC_String,GsTSymbol*>>>
                **)(lVar2 + lVar3 * 8 + -8);
    _Var1 = std::__ndk1::
            __tree<std::__ndk1::__value_type<SHC_String,GsTSymbol*>,std::__ndk1::__map_value_compare<SHC_String,std::__ndk1::__value_type<SHC_String,GsTSymbol*>,std::__ndk1::less<SHC_String>,true>,SHC_STLPoolAllocator<std::__ndk1::__value_type<SHC_String,GsTSymbol*>>>
            ::find<SHC_String>(this_00,param_1);
    if (((this_00 + 8 !=
          (__tree<std::__ndk1::__value_type<SHC_String,GsTSymbol*>,std::__ndk1::__map_value_compare<SHC_String,std::__ndk1::__value_type<SHC_String,GsTSymbol*>,std::__ndk1::less<SHC_String>,true>,SHC_STLPoolAllocator<std::__ndk1::__value_type<SHC_String,GsTSymbol*>>>
           *)(ulong)_Var1) &&
        (*(long *)((__tree<std::__ndk1::__value_type<SHC_String,GsTSymbol*>,std::__ndk1::__map_value_compare<SHC_String,std::__ndk1::__value_type<SHC_String,GsTSymbol*>,std::__ndk1::less<SHC_String>,true>,SHC_STLPoolAllocator<std::__ndk1::__value_type<SHC_String,GsTSymbol*>>>
                    *)(ulong)_Var1 + 0x40) != 0)) || (lVar3 < 2)) break;
    lVar2 = *(long *)this;
    lVar3 = lVar3 + -1;
  }
  if (param_2 != (bool *)0x0) {
    *param_2 = (int)lVar3 == 1;
  }
  if (param_3 != (bool *)0x0) {
    *param_3 = (int)((ulong)(*(long *)(this + 8) - *(long *)this) >> 3) == (int)lVar3;
  }
  return;
}


