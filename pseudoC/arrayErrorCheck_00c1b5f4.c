// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: arrayErrorCheck
// Entry Point: 00c1b5f4
// Size: 572 bytes
// Signature: undefined __thiscall arrayErrorCheck(GISLParserContext * this, GsTSourceLoc * param_1, SHC_String * param_2, SHC_String * param_3, SHC_Type * param_4, GsTVariable * * param_5)


/* GISLParserContext::arrayErrorCheck(GsTSourceLoc const&, SHC_String const*, SHC_String const*,
   SHC_Type&, GsTVariable*&) */

undefined8 __thiscall
GISLParserContext::arrayErrorCheck
          (GISLParserContext *this,GsTSourceLoc *param_1,SHC_String *param_2,SHC_String *param_3,
          SHC_Type *param_4,GsTVariable **param_5)

{
  int iVar1;
  __tree_const_iterator _Var2;
  ulong uVar3;
  undefined8 *puVar4;
  GsTSymbolTableLevel *this_00;
  char *pcVar5;
  long lVar6;
  int *piVar7;
  int *piVar8;
  SHC_String *pSVar9;
  int *piVar10;
  __tree<std::__ndk1::__value_type<SHC_String,GsTSymbol*>,std::__ndk1::__map_value_compare<SHC_String,std::__ndk1::__value_type<SHC_String,GsTSymbol*>,std::__ndk1::less<SHC_String>,true>,SHC_STLPoolAllocator<std::__ndk1::__value_type<SHC_String,GsTSymbol*>>>
  *this_01;
  long *plVar11;
  long *plVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  plVar12 = *(long **)this;
  lVar6 = *plVar12;
  lVar13 = (plVar12[1] - lVar6) * 0x20000000 >> 0x20;
  do {
    this_01 = *(__tree<std::__ndk1::__value_type<SHC_String,GsTSymbol*>,std::__ndk1::__map_value_compare<SHC_String,std::__ndk1::__value_type<SHC_String,GsTSymbol*>,std::__ndk1::less<SHC_String>,true>,SHC_STLPoolAllocator<std::__ndk1::__value_type<SHC_String,GsTSymbol*>>>
                **)(lVar6 + lVar13 * 8 + -8);
    _Var2 = std::__ndk1::
            __tree<std::__ndk1::__value_type<SHC_String,GsTSymbol*>,std::__ndk1::__map_value_compare<SHC_String,std::__ndk1::__value_type<SHC_String,GsTSymbol*>,std::__ndk1::less<SHC_String>,true>,SHC_STLPoolAllocator<std::__ndk1::__value_type<SHC_String,GsTSymbol*>>>
            ::find<SHC_String>(this_01,param_2);
    if (this_01 + 8 ==
        (__tree<std::__ndk1::__value_type<SHC_String,GsTSymbol*>,std::__ndk1::__map_value_compare<SHC_String,std::__ndk1::__value_type<SHC_String,GsTSymbol*>,std::__ndk1::less<SHC_String>,true>,SHC_STLPoolAllocator<std::__ndk1::__value_type<SHC_String,GsTSymbol*>>>
         *)(ulong)_Var2) {
      plVar11 = (long *)0x0;
    }
    else {
      plVar11 = *(long **)((__tree<std::__ndk1::__value_type<SHC_String,GsTSymbol*>,std::__ndk1::__map_value_compare<SHC_String,std::__ndk1::__value_type<SHC_String,GsTSymbol*>,std::__ndk1::less<SHC_String>,true>,SHC_STLPoolAllocator<std::__ndk1::__value_type<SHC_String,GsTSymbol*>>>
                            *)(ulong)_Var2 + 0x40);
      if (plVar11 != (long *)0x0) break;
    }
    if (lVar13 < 2) break;
    lVar6 = *plVar12;
    lVar13 = lVar13 + -1;
  } while( true );
  if ((plVar11 == (long *)0x0) || ((int)((ulong)(plVar12[1] - *plVar12) >> 3) != (int)lVar13)) {
    uVar3 = reservedErrorCheck(this,param_1,param_2);
    if ((uVar3 & 1) != 0) {
      return 1;
    }
    puVar4 = (undefined8 *)SHC_PoolAllocator::allocate(*(SHC_PoolAllocator **)(this + 0x58),0x98);
    puVar4[1] = param_2;
    puVar4[2] = param_3;
    puVar4[4] = 0;
    *puVar4 = &PTR__GsTSymbol_00fee830;
    uVar17 = *(undefined8 *)(param_4 + 0x18);
    uVar16 = *(undefined8 *)(param_4 + 0x10);
    uVar15 = *(undefined8 *)(param_4 + 0x28);
    uVar14 = *(undefined8 *)(param_4 + 0x20);
    uVar19 = *(undefined8 *)(param_4 + 8);
    uVar18 = *(undefined8 *)param_4;
    *(undefined2 *)(puVar4 + 0xb) = 0;
    puVar4[10] = uVar15;
    puVar4[9] = uVar14;
    puVar4[8] = uVar17;
    puVar4[7] = uVar16;
    puVar4[6] = uVar19;
    puVar4[5] = uVar18;
    *param_5 = (GsTVariable *)puVar4;
    plVar12 = *(long **)this;
    iVar1 = *(int *)(plVar12 + 3);
    this_00 = *(GsTSymbolTableLevel **)
               (*plVar12 + ((plVar12[1] - *plVar12) * 0x20000000 + -0x100000000 >> 0x20) * 8);
    *(int *)(plVar12 + 3) = iVar1 + 1;
    *(int *)(puVar4 + 3) = iVar1 + 1;
    uVar3 = GsTSymbolTableLevel::insert(this_00,(GsTSymbol *)puVar4);
    if ((uVar3 & 1) == 0) {
      pcVar5 = "INTERNAL ERROR inserting new symbol";
      goto LAB_00c1b7a0;
    }
  }
  else {
    uVar3 = (**(code **)(*plVar11 + 0x20))(plVar11);
    if ((uVar3 & 1) == 0) {
      pcVar5 = "variable expected";
      goto LAB_00c1b7a0;
    }
    *param_5 = (GsTVariable *)plVar11;
    piVar8 = (int *)plVar11[6];
    if (*piVar8 != 4) {
      pcVar5 = "redeclaring non-array as array";
      goto LAB_00c1b7a0;
    }
    if (piVar8[4] != 0) {
      pcVar5 = "redeclaration of array with size";
      goto LAB_00c1b7a0;
    }
    piVar7 = *(int **)(param_4 + 8);
    piVar10 = piVar7;
    if (*piVar7 == 4) {
      piVar10 = *(int **)(piVar7 + 2);
    }
    if (*(int **)(piVar8 + 2) != piVar10) {
      pcVar5 = "redeclaration of array with a different type";
      goto LAB_00c1b7a0;
    }
    if (piVar7[4] != 0) {
      SHC_Type::updateArraySize((SHC_Type *)(plVar11 + 5),piVar7[4]);
    }
  }
  if ((**(uint **)(param_4 + 8) | (*(uint **)(param_4 + 8))[2]) != 0) {
    return 0;
  }
  pcVar5 = "illegal use of type \'void\'";
LAB_00c1b7a0:
  pSVar9 = *(SHC_String **)(param_2 + 0x10);
  if (((byte)*param_2 & 1) == 0) {
    pSVar9 = param_2 + 1;
  }
  error((GsTSourceLoc)this,*(char **)param_1,*(char **)(param_1 + 2),pcVar5,pSVar9,&DAT_0050a39f);
  return 1;
}


