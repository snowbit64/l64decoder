// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00c20b9c
// Entry Point: 00c20b9c
// Size: 336 bytes
// Signature: undefined FUN_00c20b9c(void)


void FUN_00c20b9c(SHC_String *param_1,long **param_2,long **param_3,SHC_Type *param_4)

{
  long lVar1;
  __tree_const_iterator _Var2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  undefined4 uVar6;
  SHC_String *pSVar7;
  __tree<std::__ndk1::__value_type<SHC_String,GsTSymbol*>,std::__ndk1::__map_value_compare<SHC_String,std::__ndk1::__value_type<SHC_String,GsTSymbol*>,std::__ndk1::less<SHC_String>,true>,SHC_STLPoolAllocator<std::__ndk1::__value_type<SHC_String,GsTSymbol*>>>
  *this;
  long *plVar8;
  long lVar9;
  bool local_5c [4];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  plVar8 = *param_2;
  lVar5 = *plVar8;
  lVar9 = (plVar8[1] - lVar5) * 0x20000000 >> 0x20;
  do {
    this = *(__tree<std::__ndk1::__value_type<SHC_String,GsTSymbol*>,std::__ndk1::__map_value_compare<SHC_String,std::__ndk1::__value_type<SHC_String,GsTSymbol*>,std::__ndk1::less<SHC_String>,true>,SHC_STLPoolAllocator<std::__ndk1::__value_type<SHC_String,GsTSymbol*>>>
             **)(lVar5 + lVar9 * 8 + -8);
    _Var2 = std::__ndk1::
            __tree<std::__ndk1::__value_type<SHC_String,GsTSymbol*>,std::__ndk1::__map_value_compare<SHC_String,std::__ndk1::__value_type<SHC_String,GsTSymbol*>,std::__ndk1::less<SHC_String>,true>,SHC_STLPoolAllocator<std::__ndk1::__value_type<SHC_String,GsTSymbol*>>>
            ::find<SHC_String>(this,param_1);
    if (this + 8 ==
        (__tree<std::__ndk1::__value_type<SHC_String,GsTSymbol*>,std::__ndk1::__map_value_compare<SHC_String,std::__ndk1::__value_type<SHC_String,GsTSymbol*>,std::__ndk1::less<SHC_String>,true>,SHC_STLPoolAllocator<std::__ndk1::__value_type<SHC_String,GsTSymbol*>>>
         *)(ulong)_Var2) {
      plVar3 = (long *)0x0;
    }
    else {
      plVar3 = *(long **)((__tree<std::__ndk1::__value_type<SHC_String,GsTSymbol*>,std::__ndk1::__map_value_compare<SHC_String,std::__ndk1::__value_type<SHC_String,GsTSymbol*>,std::__ndk1::less<SHC_String>,true>,SHC_STLPoolAllocator<std::__ndk1::__value_type<SHC_String,GsTSymbol*>>>
                           *)(ulong)_Var2 + 0x40);
      if (plVar3 != (long *)0x0) {
LAB_00c20c2c:
        *param_3 = plVar3;
        if ((((plVar3 == (long *)0x0) || (*(char *)(param_2 + 4) != '\0')) ||
            (uVar4 = (**(code **)(*plVar3 + 0x20))(), (uVar4 & 1) == 0)) ||
           (*(char *)(*param_3 + 0xb) == '\0')) {
          pSVar7 = *(SHC_String **)(param_1 + 0x10);
          local_5c[0] = false;
          if (((byte)*param_1 & 1) == 0) {
            pSVar7 = param_1 + 1;
          }
          uVar4 = GISLParserContext::parsePossibleType
                            ((GISLParserContext *)param_2,(char *)pSVar7,
                             (uint)((*param_2)[1] - **param_2 == 0x18),param_4,local_5c);
          uVar6 = 0x124;
          if (local_5c[0] != false) {
            uVar6 = 0x125;
          }
          if ((uVar4 & 1) == 0) {
            uVar6 = 0x12a;
          }
        }
        else {
          uVar6 = 299;
          *(undefined *)(param_2 + 4) = 1;
        }
        if (*(long *)(lVar1 + 0x28) == local_58) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(uVar6);
      }
    }
    if (lVar9 < 2) goto LAB_00c20c2c;
    lVar5 = *plVar8;
    lVar9 = lVar9 + -1;
  } while( true );
}


