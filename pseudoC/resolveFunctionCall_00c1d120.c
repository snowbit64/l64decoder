// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: resolveFunctionCall
// Entry Point: 00c1d120
// Size: 240 bytes
// Signature: undefined __thiscall resolveFunctionCall(GISLParserContext * this, SHC_String * param_1, IR_Type * param_2)


/* GISLParserContext::resolveFunctionCall(SHC_String const*, IR_Type*) */

void __thiscall
GISLParserContext::resolveFunctionCall(GISLParserContext *this,SHC_String *param_1,IR_Type *param_2)

{
  __tree_const_iterator _Var1;
  char *pcVar2;
  byte *pbVar3;
  GsTFunction *pGVar4;
  SHC_PoolAllocator *pSVar5;
  long lVar6;
  SHC_String *pSVar7;
  __tree<std::__ndk1::__value_type<SHC_String,GsTSymbol*>,std::__ndk1::__map_value_compare<SHC_String,std::__ndk1::__value_type<SHC_String,GsTSymbol*>,std::__ndk1::less<SHC_String>,true>,SHC_STLPoolAllocator<std::__ndk1::__value_type<SHC_String,GsTSymbol*>>>
  *this_00;
  long *plVar8;
  long lVar9;
  
  pSVar7 = *(SHC_String **)(param_1 + 0x10);
  if (((byte)*param_1 & 1) == 0) {
    pSVar7 = param_1 + 1;
  }
  pcVar2 = strchr((char *)pSVar7,0x3f);
  if (pcVar2 != (char *)0x0) {
    plVar8 = *(long **)this;
    lVar6 = *plVar8;
    lVar9 = (plVar8[1] - lVar6) * 0x20000000 >> 0x20;
    do {
      this_00 = *(__tree<std::__ndk1::__value_type<SHC_String,GsTSymbol*>,std::__ndk1::__map_value_compare<SHC_String,std::__ndk1::__value_type<SHC_String,GsTSymbol*>,std::__ndk1::less<SHC_String>,true>,SHC_STLPoolAllocator<std::__ndk1::__value_type<SHC_String,GsTSymbol*>>>
                  **)(lVar6 + lVar9 * 8 + -8);
      _Var1 = std::__ndk1::
              __tree<std::__ndk1::__value_type<SHC_String,GsTSymbol*>,std::__ndk1::__map_value_compare<SHC_String,std::__ndk1::__value_type<SHC_String,GsTSymbol*>,std::__ndk1::less<SHC_String>,true>,SHC_STLPoolAllocator<std::__ndk1::__value_type<SHC_String,GsTSymbol*>>>
              ::find<SHC_String>(this_00,param_1);
      if (this_00 + 8 ==
          (__tree<std::__ndk1::__value_type<SHC_String,GsTSymbol*>,std::__ndk1::__map_value_compare<SHC_String,std::__ndk1::__value_type<SHC_String,GsTSymbol*>,std::__ndk1::less<SHC_String>,true>,SHC_STLPoolAllocator<std::__ndk1::__value_type<SHC_String,GsTSymbol*>>>
           *)(ulong)_Var1) {
        pGVar4 = (GsTFunction *)0x0;
      }
      else {
        pGVar4 = *(GsTFunction **)
                  ((__tree<std::__ndk1::__value_type<SHC_String,GsTSymbol*>,std::__ndk1::__map_value_compare<SHC_String,std::__ndk1::__value_type<SHC_String,GsTSymbol*>,std::__ndk1::less<SHC_String>,true>,SHC_STLPoolAllocator<std::__ndk1::__value_type<SHC_String,GsTSymbol*>>>
                    *)(ulong)_Var1 + 0x40);
        if (pGVar4 != (GsTFunction *)0x0) goto LAB_00c1d1b4;
      }
      if (lVar9 < 2) goto LAB_00c1d1b4;
      lVar6 = *plVar8;
      lVar9 = lVar9 + -1;
    } while( true );
  }
  pSVar5 = *(SHC_PoolAllocator **)(this + 0x58);
  pSVar7 = param_1 + 1;
  if (((byte)*param_1 & 1) != 0) {
    pSVar7 = *(SHC_String **)(param_1 + 0x10);
  }
LAB_00c1d1fc:
  SHC_String::New((char *)pSVar7,pSVar5);
  return;
LAB_00c1d1b4:
  plVar8 = (long *)resolveTemplatedFunction(this,pGVar4,param_2);
  pbVar3 = (byte *)(**(code **)(*plVar8 + 0x10))();
  pSVar7 = *(SHC_String **)(pbVar3 + 0x10);
  pSVar5 = *(SHC_PoolAllocator **)(this + 0x58);
  if ((*pbVar3 & 1) == 0) {
    pSVar7 = (SHC_String *)(pbVar3 + 1);
  }
  goto LAB_00c1d1fc;
}


