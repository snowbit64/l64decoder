// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: findFunction
// Entry Point: 00c1c3ac
// Size: 1548 bytes
// Signature: undefined __thiscall findFunction(GISLParserContext * this, GsTSourceLoc * param_1, GsTFunction * param_2, bool * param_3, IR_Type * * param_4)


/* GISLParserContext::findFunction(GsTSourceLoc const&, GsTFunction*, bool*, IR_Type*&) */

long * __thiscall
GISLParserContext::findFunction
          (GISLParserContext *this,GsTSourceLoc *param_1,GsTFunction *param_2,bool *param_3,
          IR_Type **param_4)

{
  char *pcVar1;
  void *pvVar2;
  char *pcVar3;
  byte bVar4;
  long lVar5;
  GsTFunction **ppGVar6;
  GsTFunction **ppGVar7;
  __tree_const_iterator _Var8;
  GsTSourceLoc GVar9;
  ulong *puVar10;
  void *pvVar11;
  ulong uVar12;
  IR_Type *pIVar13;
  byte *pbVar14;
  long lVar15;
  byte *pbVar16;
  __tree<std::__ndk1::__value_type<SHC_String,GsTSymbol*>,std::__ndk1::__map_value_compare<SHC_String,std::__ndk1::__value_type<SHC_String,GsTSymbol*>,std::__ndk1::less<SHC_String>,true>,SHC_STLPoolAllocator<std::__ndk1::__value_type<SHC_String,GsTSymbol*>>>
  *this_00;
  GsTFunction **ppGVar17;
  long *plVar18;
  GsTFunction **ppGVar19;
  long lVar20;
  ulong uVar21;
  long *plVar22;
  long lVar23;
  byte local_b8 [16];
  void *local_a8;
  undefined8 local_a0;
  ulong uStack_98;
  void *local_90;
  SHC_PoolAllocator *local_88;
  GsTFunction **local_80;
  GsTFunction **local_78;
  void *local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  puVar10 = (ulong *)(**(code **)(*(long *)param_2 + 0x10))(param_2);
  local_88 = (SHC_PoolAllocator *)puVar10[3];
  if ((*(byte *)puVar10 & 1) == 0) {
    local_90 = (void *)puVar10[2];
    uStack_98 = puVar10[1];
    local_a0 = *puVar10;
  }
  else {
    uVar12 = puVar10[1];
    pvVar2 = (void *)puVar10[2];
    if (uVar12 < 0x17) {
      pvVar11 = (void *)((ulong)&local_a0 | 1);
      local_a0 = CONCAT71(local_a0._1_7_,(char)((int)uVar12 << 1));
    }
    else {
      if (0xffffffffffffffef < uVar12) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__basic_string_common<true>::__throw_length_error();
      }
      uVar21 = uVar12 + 0x10 & 0xfffffffffffffff0;
      pvVar11 = (void *)SHC_PoolAllocator::allocate(local_88,uVar21);
      local_a0 = uVar21 | 1;
      uStack_98 = uVar12;
      local_90 = pvVar11;
    }
    memcpy(pvVar11,pvVar2,uVar12 + 1);
  }
  *param_4 = (IR_Type *)0x0;
  plVar18 = *(long **)this;
  lVar15 = *plVar18;
  lVar20 = (plVar18[1] - lVar15) * 0x20000000 >> 0x20;
  do {
    lVar23 = lVar20 + -1;
    this_00 = *(__tree<std::__ndk1::__value_type<SHC_String,GsTSymbol*>,std::__ndk1::__map_value_compare<SHC_String,std::__ndk1::__value_type<SHC_String,GsTSymbol*>,std::__ndk1::less<SHC_String>,true>,SHC_STLPoolAllocator<std::__ndk1::__value_type<SHC_String,GsTSymbol*>>>
                **)(lVar15 + lVar23 * 8);
    _Var8 = std::__ndk1::
            __tree<std::__ndk1::__value_type<SHC_String,GsTSymbol*>,std::__ndk1::__map_value_compare<SHC_String,std::__ndk1::__value_type<SHC_String,GsTSymbol*>,std::__ndk1::less<SHC_String>,true>,SHC_STLPoolAllocator<std::__ndk1::__value_type<SHC_String,GsTSymbol*>>>
            ::find<SHC_String>(this_00,(SHC_String *)&local_a0);
    if (this_00 + 8 ==
        (__tree<std::__ndk1::__value_type<SHC_String,GsTSymbol*>,std::__ndk1::__map_value_compare<SHC_String,std::__ndk1::__value_type<SHC_String,GsTSymbol*>,std::__ndk1::less<SHC_String>,true>,SHC_STLPoolAllocator<std::__ndk1::__value_type<SHC_String,GsTSymbol*>>>
         *)(ulong)_Var8) {
      plVar22 = (long *)0x0;
    }
    else {
      plVar22 = *(long **)((__tree<std::__ndk1::__value_type<SHC_String,GsTSymbol*>,std::__ndk1::__map_value_compare<SHC_String,std::__ndk1::__value_type<SHC_String,GsTSymbol*>,std::__ndk1::less<SHC_String>,true>,SHC_STLPoolAllocator<std::__ndk1::__value_type<SHC_String,GsTSymbol*>>>
                            *)(ulong)_Var8 + 0x40);
      if (plVar22 != (long *)0x0) break;
    }
    if (lVar20 < 2) break;
    lVar15 = *plVar18;
    lVar20 = lVar23;
  } while( true );
  if (param_3 != (bool *)0x0) {
    *param_3 = (int)lVar23 == 0;
  }
  GVar9 = (GsTSourceLoc)this;
  if (plVar22 != (long *)0x0) {
    uVar12 = (**(code **)(*plVar22 + 0x18))(plVar22);
    if ((uVar12 & 1) == 0) {
      pbVar14 = *(byte **)(param_2 + 8);
      pbVar16 = *(byte **)(pbVar14 + 0x10);
      if ((*pbVar14 & 1) == 0) {
        pbVar16 = pbVar14 + 1;
      }
      error(GVar9,*(char **)param_1,*(char **)(param_1 + 2),"function name expected",pbVar16,
            &DAT_0050a39f);
      plVar22 = (long *)0x0;
    }
    goto LAB_00c1c974;
  }
  plVar18 = *(long **)this;
  lVar15 = *plVar18;
  ppGVar19 = (GsTFunction **)0x0;
  lVar20 = (plVar18[1] - lVar15) * 0x20000000 >> 0x20;
  while( true ) {
    lVar23 = lVar20 + -1;
                    /* try { // try from 00c1c55c to 00c1c567 has its CatchHandler @ 00c1cab0 */
    GsTSymbolTableLevel::findCompatible(*(GsTFunction **)(lVar15 + lVar23 * 8));
    if (ppGVar19 != (GsTFunction **)0x0) {
      operator_delete(ppGVar19);
    }
    ppGVar7 = local_78;
    ppGVar19 = local_80;
    if ((lVar20 < 2) || (local_78 != local_80)) break;
    lVar15 = *plVar18;
    lVar20 = lVar23;
  }
  if (param_3 != (bool *)0x0) {
    *param_3 = (int)lVar23 == 0;
  }
  lVar15 = (long)local_78 - (long)local_80 >> 4;
  if (lVar15 == 0) {
    local_80 = (GsTFunction **)0x0;
    local_78 = (GsTFunction **)0x0;
    pbVar14 = *(byte **)(param_2 + 8);
    local_70 = (void *)0x0;
    plVar18 = *(long **)this;
    pbVar16 = *(byte **)(pbVar14 + 0x10);
    lVar15 = *plVar18;
    if ((*pbVar14 & 1) == 0) {
      pbVar16 = pbVar14 + 1;
    }
                    /* try { // try from 00c1c614 to 00c1c61f has its CatchHandler @ 00c1ca80 */
    for (lVar20 = (plVar18[1] - lVar15) * 0x20000000 >> 0x20;
        GsTSymbolTableLevel::getMatching
                  (*(GsTSymbolTableLevel **)(lVar15 + lVar20 * 8 + -8),(char *)pbVar16,
                   (vector *)&local_80), 1 < lVar20; lVar20 = lVar20 + -1) {
      lVar15 = *plVar18;
    }
    pbVar14 = *(byte **)(param_2 + 8);
    pbVar16 = *(byte **)(pbVar14 + 0x10);
    if ((*pbVar14 & 1) == 0) {
      pbVar16 = pbVar14 + 1;
    }
    if (local_78 == local_80) {
                    /* try { // try from 00c1c934 to 00c1c94b has its CatchHandler @ 00c1c9c0 */
      error(GVar9,*(char **)param_1,*(char **)(param_1 + 2),"function not declared",pbVar16,
            &DAT_0050a39f);
    }
    else {
                    /* try { // try from 00c1c81c to 00c1c833 has its CatchHandler @ 00c1c9c0 */
      error(GVar9,*(char **)param_1,*(char **)(param_1 + 2),"no matching overloaded function found",
            pbVar16,&DAT_0050a39f);
      pbVar14 = *(byte **)(param_2 + 8);
      pcVar1 = *(char **)param_1;
      pcVar3 = *(char **)(param_1 + 2);
      bVar4 = *pbVar14;
      pbVar16 = *(byte **)(pbVar14 + 0x10);
                    /* try { // try from 00c1c848 to 00c1c857 has its CatchHandler @ 00c1c9bc */
      GsTFunction::getSignature();
      if ((bVar4 & 1) == 0) {
        pbVar16 = pbVar14 + 1;
      }
      pvVar2 = (void *)((ulong)local_b8 | 1);
      if ((local_b8[0] & 1) != 0) {
        pvVar2 = local_a8;
      }
                    /* try { // try from 00c1c874 to 00c1c893 has its CatchHandler @ 00c1c9b8 */
      error(GVar9,pcVar1,pcVar3,"",pbVar16,"call : %s",pvVar2);
      if ((local_b8[0] & 1) != 0) {
        operator_delete(local_a8);
      }
      ppGVar7 = local_78;
      if (local_80 != local_78) {
        ppGVar17 = local_80;
        do {
          pbVar14 = *(byte **)(param_2 + 8);
          pcVar1 = *(char **)param_1;
          pcVar3 = *(char **)(param_1 + 2);
          bVar4 = *pbVar14;
          pbVar16 = *(byte **)(pbVar14 + 0x10);
                    /* try { // try from 00c1c8e0 to 00c1c8e7 has its CatchHandler @ 00c1ca28 */
          GsTFunction::getSignature();
          if ((bVar4 & 1) == 0) {
            pbVar16 = pbVar14 + 1;
          }
          pvVar2 = (void *)((ulong)local_b8 | 1);
          if ((local_b8[0] & 1) != 0) {
            pvVar2 = local_a8;
          }
                    /* try { // try from 00c1c900 to 00c1c91f has its CatchHandler @ 00c1c9fc */
          error(GVar9,pcVar1,pcVar3,"",pbVar16," - candidate : %s",pvVar2);
          if ((local_b8[0] & 1) != 0) {
            operator_delete(local_a8);
          }
          ppGVar17 = ppGVar17 + 1;
        } while (ppGVar17 != ppGVar7);
      }
    }
    if (local_80 != (GsTFunction **)0x0) {
      local_78 = local_80;
      operator_delete(local_80);
    }
LAB_00c1c95c:
    plVar18 = (long *)0x0;
    plVar22 = (long *)0x0;
    if (ppGVar19 == (GsTFunction **)0x0) goto LAB_00c1c974;
  }
  else {
    if (lVar15 != 1) {
      pbVar14 = *(byte **)(param_2 + 8);
      pbVar16 = *(byte **)(pbVar14 + 0x10);
      if ((*pbVar14 & 1) == 0) {
        pbVar16 = pbVar14 + 1;
      }
                    /* try { // try from 00c1c64c to 00c1c663 has its CatchHandler @ 00c1c9d4 */
      error(GVar9,*(char **)param_1,*(char **)(param_1 + 2),
            "cannot resolve function call unambiguously",pbVar16,&DAT_0050a39f);
      pbVar14 = *(byte **)(param_2 + 8);
      pcVar1 = *(char **)param_1;
      pcVar3 = *(char **)(param_1 + 2);
      bVar4 = *pbVar14;
      pbVar16 = *(byte **)(pbVar14 + 0x10);
                    /* try { // try from 00c1c674 to 00c1c683 has its CatchHandler @ 00c1c9c8 */
      GsTFunction::getSignature();
      if ((bVar4 & 1) == 0) {
        pbVar16 = pbVar14 + 1;
      }
      pvVar2 = (void *)((ulong)&local_80 | 1);
      if (((ulong)local_80 & 1) != 0) {
        pvVar2 = local_70;
      }
                    /* try { // try from 00c1c6a0 to 00c1c6bf has its CatchHandler @ 00c1c9c4 */
      error(GVar9,pcVar1,pcVar3,"",pbVar16,"call : %s",pvVar2);
      if (((ulong)local_80 & 1) != 0) {
        operator_delete(local_70);
      }
      if (ppGVar7 != ppGVar19) {
        ppGVar17 = ppGVar19;
        do {
          pbVar16 = *(byte **)(param_2 + 8);
          pcVar1 = *(char **)param_1;
          pcVar3 = *(char **)(param_1 + 2);
          bVar4 = *pbVar16;
          if (ppGVar17[1] == (GsTFunction *)0x0) {
            pbVar14 = *(byte **)(pbVar16 + 0x10);
                    /* try { // try from 00c1c7a0 to 00c1c7a7 has its CatchHandler @ 00c1c9f0 */
            GsTFunction::getSignature();
            if ((bVar4 & 1) == 0) {
              pbVar14 = pbVar16 + 1;
            }
            pvVar2 = (void *)((ulong)&local_80 | 1);
            if (((ulong)local_80 & 1) != 0) {
              pvVar2 = local_70;
            }
                    /* try { // try from 00c1c7c4 to 00c1c7e3 has its CatchHandler @ 00c1c9d8 */
            error(GVar9,pcVar1,pcVar3,"",pbVar14," - candidate : %s",pvVar2);
          }
          else {
            pbVar14 = *(byte **)(pbVar16 + 0x10);
            if ((bVar4 & 1) == 0) {
              pbVar14 = pbVar16 + 1;
            }
                    /* try { // try from 00c1c728 to 00c1c72f has its CatchHandler @ 00c1ca58 */
            GsTFunction::getSignature();
            pvVar11 = local_70;
            ppGVar6 = local_80;
                    /* try { // try from 00c1c738 to 00c1c743 has its CatchHandler @ 00c1ca64 */
            IR_Type::getUserString();
            pvVar2 = (void *)((ulong)&local_80 | 1);
            if (((ulong)ppGVar6 & 1) != 0) {
              pvVar2 = pvVar11;
            }
            pvVar11 = (void *)((ulong)local_b8 | 1);
            if ((local_b8[0] & 1) != 0) {
              pvVar11 = local_a8;
            }
                    /* try { // try from 00c1c764 to 00c1c787 has its CatchHandler @ 00c1ca2c */
            error(GVar9,pcVar1,pcVar3,"",pbVar14," - candidate : %s with AnyType = %s",pvVar2,
                  pvVar11);
            if ((local_b8[0] & 1) != 0) {
              operator_delete(local_a8);
            }
          }
          if (((ulong)local_80 & 1) != 0) {
            operator_delete(local_70);
          }
          ppGVar17 = ppGVar17 + 2;
        } while (ppGVar17 != ppGVar7);
      }
      goto LAB_00c1c95c;
    }
    pIVar13 = (IR_Type *)local_80[1];
    *param_4 = pIVar13;
                    /* try { // try from 00c1c5cc to 00c1c5d3 has its CatchHandler @ 00c1c9d4 */
    plVar18 = (long *)resolveTemplatedFunction(this,*local_80,pIVar13);
  }
  operator_delete(ppGVar19);
  plVar22 = plVar18;
LAB_00c1c974:
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return plVar22;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


