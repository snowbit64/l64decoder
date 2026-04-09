// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~GsTSymbolTableLevel
// Entry Point: 00c58198
// Size: 160 bytes
// Signature: undefined __thiscall ~GsTSymbolTableLevel(GsTSymbolTableLevel * this)


/* GsTSymbolTableLevel::~GsTSymbolTableLevel() */

void __thiscall GsTSymbolTableLevel::~GsTSymbolTableLevel(GsTSymbolTableLevel *this)

{
  bool bVar1;
  GsTSymbolTableLevel **ppGVar2;
  GsTSymbolTableLevel *pGVar3;
  GsTSymbolTableLevel **ppGVar4;
  
  ppGVar4 = *(GsTSymbolTableLevel ***)this;
  while (ppGVar4 != (GsTSymbolTableLevel **)(this + 8)) {
    if ((long *)ppGVar4[8] != (long *)0x0) {
      (**(code **)(*(long *)ppGVar4[8] + 8))();
    }
    ppGVar2 = (GsTSymbolTableLevel **)ppGVar4[1];
    if ((GsTSymbolTableLevel **)ppGVar4[1] == (GsTSymbolTableLevel **)0x0) {
      ppGVar2 = ppGVar4 + 2;
      bVar1 = *(GsTSymbolTableLevel ***)*ppGVar2 != ppGVar4;
      ppGVar4 = (GsTSymbolTableLevel **)*ppGVar2;
      if (bVar1) {
        do {
          pGVar3 = *ppGVar2;
          ppGVar2 = (GsTSymbolTableLevel **)(pGVar3 + 0x10);
          ppGVar4 = (GsTSymbolTableLevel **)*ppGVar2;
        } while (*ppGVar4 != pGVar3);
      }
    }
    else {
      do {
        ppGVar4 = ppGVar2;
        ppGVar2 = (GsTSymbolTableLevel **)*ppGVar4;
      } while ((GsTSymbolTableLevel **)*ppGVar4 != (GsTSymbolTableLevel **)0x0);
    }
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<SHC_String,GsTSymbol*>,std::__ndk1::__map_value_compare<SHC_String,std::__ndk1::__value_type<SHC_String,GsTSymbol*>,std::__ndk1::less<SHC_String>,true>,SHC_STLPoolAllocator<std::__ndk1::__value_type<SHC_String,GsTSymbol*>>>
  ::destroy((__tree<std::__ndk1::__value_type<SHC_String,GsTSymbol*>,std::__ndk1::__map_value_compare<SHC_String,std::__ndk1::__value_type<SHC_String,GsTSymbol*>,std::__ndk1::less<SHC_String>,true>,SHC_STLPoolAllocator<std::__ndk1::__value_type<SHC_String,GsTSymbol*>>>
             *)this,*(__tree_node **)(this + 8));
  return;
}


