// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: resolveTemplatedFunction
// Entry Point: 00c1cabc
// Size: 816 bytes
// Signature: undefined __thiscall resolveTemplatedFunction(GISLParserContext * this, GsTFunction * param_1, IR_Type * param_2)


/* GISLParserContext::resolveTemplatedFunction(GsTFunction*, IR_Type*) */

long * __thiscall
GISLParserContext::resolveTemplatedFunction
          (GISLParserContext *this,GsTFunction *param_1,IR_Type *param_2)

{
  byte **ppbVar1;
  long lVar2;
  __tree_const_iterator _Var3;
  long *this_00;
  SHC_Type *this_01;
  long *plVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  SHC_String *pSVar9;
  ulong uVar10;
  byte *pbVar11;
  undefined8 *puVar12;
  byte *pbVar13;
  __tree<std::__ndk1::__value_type<SHC_String,GsTSymbol*>,std::__ndk1::__map_value_compare<SHC_String,std::__ndk1::__value_type<SHC_String,GsTSymbol*>,std::__ndk1::less<SHC_String>,true>,SHC_STLPoolAllocator<std::__ndk1::__value_type<SHC_String,GsTSymbol*>>>
  *this_02;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 local_c8;
  undefined8 uStack_c0;
  SHC_Type *local_b8;
  SHC_Type aSStack_b0 [48];
  long local_80;
  long lStack_78;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if (param_2 != (IR_Type *)0x0) {
    lStack_78 = *(long *)(param_1 + 0xb8);
    local_80 = *(long *)(param_1 + 0xb0);
    SHC_Type::resolveType
              (aSStack_b0,(SHC_Type *)(param_1 + 0x40),*(SHC_PoolAllocator **)(this + 0x58),param_2)
    ;
    this_00 = (long *)SHC_PoolAllocator::allocate(*(SHC_PoolAllocator **)(this + 0x58),0xd0);
    GsTFunction::GsTFunction
              ((GsTFunction *)this_00,*(SHC_String **)(param_1 + 8),aSStack_b0,0,
               *(SHC_PoolAllocator **)(this + 0x58));
    this_00[0x15] = lStack_78;
    this_00[0x14] = local_80;
    this_00[0x17] = lStack_78;
    this_00[0x16] = local_80;
    if (*(int *)(param_1 + 0x90) != 0) {
      *(int *)(this_00 + 0x12) = *(int *)(param_1 + 0x90);
    }
    lVar5 = *(long *)(param_1 + 0x20);
    if (0 < (int)((ulong)(*(long *)(param_1 + 0x28) - lVar5) >> 3) * -0x55555555) {
      lVar14 = 0;
      lVar16 = 0;
      do {
        this_01 = (SHC_Type *)SHC_PoolAllocator::allocate(*(SHC_PoolAllocator **)(this + 0x58),0x30)
        ;
        ppbVar1 = (byte **)(lVar5 + lVar14);
        SHC_Type::resolveType
                  (this_01,(SHC_Type *)ppbVar1[2],*(SHC_PoolAllocator **)(this + 0x58),param_2);
        *(undefined4 *)(this_01 + 0x10) = *(undefined4 *)(ppbVar1[2] + 0x10);
        pbVar11 = *ppbVar1;
        if (pbVar11 == (byte *)0x0) {
          local_c8 = 0;
        }
        else {
          pbVar13 = *(byte **)(pbVar11 + 0x10);
          if ((*pbVar11 & 1) == 0) {
            pbVar13 = pbVar11 + 1;
          }
          local_c8 = SHC_String::New((char *)pbVar13,*(SHC_PoolAllocator **)(this + 0x58));
        }
        uStack_c0 = 0;
        local_b8 = this_01;
        GsTFunction::addParameter((GsTFunction *)this_00,(Parameter *)&local_c8);
        lVar5 = *(long *)(param_1 + 0x20);
        lVar16 = lVar16 + 1;
        lVar14 = lVar14 + 0x18;
      } while (lVar16 < (int)((ulong)(*(long *)(param_1 + 0x28) - lVar5) >> 3) * -0x55555555);
    }
    plVar4 = *(long **)(param_1 + 0x98);
    if (plVar4 != (long *)0x0) {
      plVar4 = (long *)(**(code **)(*plVar4 + 8))(plVar4,*(undefined8 *)(this + 0x58));
      lVar5 = (**(code **)(*plVar4 + 0x30))();
      lVar16 = (**(code **)(***(long ***)(lVar5 + 0x50) + 0x30))();
      if (0 < (int)((ulong)(*(long *)(param_1 + 0x28) - *(long *)(param_1 + 0x20)) >> 3) *
              -0x55555555) {
        lVar14 = 0;
        lVar15 = 0x10;
        do {
          lVar6 = (**(code **)(**(long **)(*(long *)(lVar16 + 0x50) + lVar14 * 8) + 0x18))();
          lVar14 = lVar14 + 1;
          puVar12 = *(undefined8 **)(this_00[4] + lVar15);
          lVar15 = lVar15 + 0x18;
          uVar18 = puVar12[3];
          uVar17 = puVar12[2];
          uVar8 = puVar12[4];
          uVar20 = puVar12[1];
          uVar19 = *puVar12;
          *(undefined8 *)(lVar6 + 0x40) = puVar12[5];
          *(undefined8 *)(lVar6 + 0x38) = uVar8;
          *(undefined8 *)(lVar6 + 0x30) = uVar18;
          *(undefined8 *)(lVar6 + 0x28) = uVar17;
          *(undefined8 *)(lVar6 + 0x20) = uVar20;
          *(undefined8 *)(lVar6 + 0x18) = uVar19;
        } while (lVar14 < (int)((ulong)(*(long *)(param_1 + 0x28) - *(long *)(param_1 + 0x20)) >> 3)
                          * -0x55555555);
      }
      lVar16 = (**(code **)(**(long **)(*(long *)(lVar5 + 0x50) + 8) + 0x48))();
      if (lVar16 == 0) {
        plVar7 = *(long **)(*(long *)(lVar5 + 0x50) + 8);
        uVar8 = (**(code **)(*plVar7 + 0x10))(plVar7,*(undefined8 *)(this + 0x58),this,param_2);
        *(undefined8 *)(*(long *)(lVar5 + 0x50) + 8) = uVar8;
      }
      this_00[0x13] = (long)plVar4;
      this_00[0x19] = (long)param_2;
    }
    plVar4 = *(long **)this;
    pSVar9 = (SHC_String *)(**(code **)(*this_00 + 0x10))(this_00);
    lVar5 = *plVar4;
    lVar16 = (plVar4[1] - lVar5) * 0x20000000 >> 0x20;
    do {
      this_02 = *(__tree<std::__ndk1::__value_type<SHC_String,GsTSymbol*>,std::__ndk1::__map_value_compare<SHC_String,std::__ndk1::__value_type<SHC_String,GsTSymbol*>,std::__ndk1::less<SHC_String>,true>,SHC_STLPoolAllocator<std::__ndk1::__value_type<SHC_String,GsTSymbol*>>>
                  **)(lVar5 + lVar16 * 8 + -8);
      _Var3 = std::__ndk1::
              __tree<std::__ndk1::__value_type<SHC_String,GsTSymbol*>,std::__ndk1::__map_value_compare<SHC_String,std::__ndk1::__value_type<SHC_String,GsTSymbol*>,std::__ndk1::less<SHC_String>,true>,SHC_STLPoolAllocator<std::__ndk1::__value_type<SHC_String,GsTSymbol*>>>
              ::find<SHC_String>(this_02,pSVar9);
      if (this_02 + 8 ==
          (__tree<std::__ndk1::__value_type<SHC_String,GsTSymbol*>,std::__ndk1::__map_value_compare<SHC_String,std::__ndk1::__value_type<SHC_String,GsTSymbol*>,std::__ndk1::less<SHC_String>,true>,SHC_STLPoolAllocator<std::__ndk1::__value_type<SHC_String,GsTSymbol*>>>
           *)(ulong)_Var3) {
        param_1 = (GsTFunction *)0x0;
      }
      else {
        param_1 = *(GsTFunction **)
                   ((__tree<std::__ndk1::__value_type<SHC_String,GsTSymbol*>,std::__ndk1::__map_value_compare<SHC_String,std::__ndk1::__value_type<SHC_String,GsTSymbol*>,std::__ndk1::less<SHC_String>,true>,SHC_STLPoolAllocator<std::__ndk1::__value_type<SHC_String,GsTSymbol*>>>
                     *)(ulong)_Var3 + 0x40);
        if ((long *)param_1 != (long *)0x0) goto LAB_00c1cd78;
      }
      if (lVar16 < 2) goto LAB_00c1cd78;
      lVar5 = *plVar4;
      lVar16 = lVar16 + -1;
    } while( true );
  }
LAB_00c1cdb4:
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return (long *)param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00c1cd78:
  if (((long *)param_1 == (long *)0x0) ||
     (uVar10 = (**(code **)(*(long *)param_1 + 0x18))(param_1), (uVar10 & 1) == 0)) {
    GsTSymbolTableLevel::insert
              (*(GsTSymbolTableLevel **)(**(long **)this + 0x10),(GsTSymbol *)this_00);
    param_1 = (GsTFunction *)this_00;
  }
  goto LAB_00c1cdb4;
}


