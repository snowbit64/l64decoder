// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~FoliageLayerGraphics
// Entry Point: 00a61384
// Size: 556 bytes
// Signature: undefined __thiscall ~FoliageLayerGraphics(FoliageLayerGraphics * this)


/* FoliageLayerGraphics::~FoliageLayerGraphics() */

void __thiscall FoliageLayerGraphics::~FoliageLayerGraphics(FoliageLayerGraphics *this)

{
  long lVar1;
  MaterialManager *this_00;
  void *pvVar2;
  void **ppvVar3;
  void *pvVar4;
  __vector_base<FoliageLayerGraphics::State,std::__ndk1::allocator<FoliageLayerGraphics::State>>
  *p_Var5;
  ulong uVar6;
  void **ppvVar7;
  void *pvVar8;
  __vector_base<FoliageLayerGraphics::State,std::__ndk1::allocator<FoliageLayerGraphics::State>>
  *p_Var9;
  void **ppvVar10;
  ulong uVar11;
  long lVar12;
  void **ppvVar13;
  __vector_base<FoliageLayerGraphics::State,std::__ndk1::allocator<FoliageLayerGraphics::State>>
  *p_Var14;
  void *pvVar15;
  
  ppvVar10 = (void **)(this + 0x50);
  *(undefined ***)this = &PTR__FoliageLayerGraphics_00fe3a68;
  if (*(void **)(this + 0x58) != *ppvVar10) {
    uVar11 = 0;
    do {
                    /* try { // try from 00a613d8 to 00a613ef has its CatchHandler @ 00a615b0 */
      this_00 = (MaterialManager *)MaterialManager::getInstance();
      MaterialManager::releaseMaterial
                (this_00,*(GsMaterial **)((long)*ppvVar10 + uVar11 * 0x98 + 8));
      uVar11 = (ulong)((int)uVar11 + 1);
      uVar6 = (*(long *)(this + 0x58) - *(long *)(this + 0x50) >> 3) * -0x79435e50d79435e5;
    } while (uVar11 <= uVar6 && uVar6 - uVar11 != 0);
  }
  lVar1 = *(long *)(this + 0x28);
  for (lVar12 = *(long *)(this + 0x20); lVar12 != lVar1; lVar12 = lVar12 + 0x18) {
    if (*(void **)(lVar12 + 8) != (void *)0x0) {
      operator_delete__(*(void **)(lVar12 + 8));
    }
    if (*(void **)(lVar12 + 0x10) != (void *)0x0) {
      operator_delete__(*(void **)(lVar12 + 0x10));
    }
  }
  lVar1 = *(long *)(this + 0x10);
  for (lVar12 = *(long *)(this + 8); lVar12 != lVar1; lVar12 = lVar12 + 0x58) {
    if (*(void **)(lVar12 + 0x48) != (void *)0x0) {
      operator_delete__(*(void **)(lVar12 + 0x48));
    }
  }
  ppvVar13 = *(void ***)(this + 0x80);
  if (ppvVar13 != (void **)0x0) {
    ppvVar7 = *(void ***)(this + 0x88);
    ppvVar3 = ppvVar13;
    if (ppvVar7 != ppvVar13) {
      do {
        ppvVar3 = ppvVar7 + -3;
        pvVar2 = *ppvVar3;
        if (pvVar2 != (void *)0x0) {
          ppvVar7[-2] = pvVar2;
          operator_delete(pvVar2);
        }
        ppvVar7 = ppvVar3;
      } while (ppvVar3 != ppvVar13);
      ppvVar3 = *(void ***)(this + 0x80);
    }
    *(void ***)(this + 0x88) = ppvVar13;
    operator_delete(ppvVar3);
  }
  pvVar2 = *(void **)(this + 0x68);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x70) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *ppvVar10;
  if (pvVar2 != (void *)0x0) {
    pvVar4 = pvVar2;
    pvVar8 = *(void **)(this + 0x58);
    if (*(void **)(this + 0x58) != pvVar2) {
      do {
        pvVar4 = *(void **)((long)pvVar8 + -0x20);
        pvVar15 = (void *)((long)pvVar8 + -0x98);
        if (pvVar4 != (void *)0x0) {
          *(void **)((long)pvVar8 + -0x18) = pvVar4;
          operator_delete(pvVar4);
        }
        pvVar8 = pvVar15;
      } while (pvVar15 != pvVar2);
      pvVar4 = *ppvVar10;
    }
    *(void **)(this + 0x58) = pvVar2;
    operator_delete(pvVar4);
  }
  pvVar2 = *(void **)(this + 0x38);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x40) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 0x20);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x28) = pvVar2;
    operator_delete(pvVar2);
  }
  p_Var14 = *(__vector_base<FoliageLayerGraphics::State,std::__ndk1::allocator<FoliageLayerGraphics::State>>
              **)(this + 8);
  if (p_Var14 ==
      (__vector_base<FoliageLayerGraphics::State,std::__ndk1::allocator<FoliageLayerGraphics::State>>
       *)0x0) {
    return;
  }
  p_Var5 = p_Var14;
  if (*(__vector_base<FoliageLayerGraphics::State,std::__ndk1::allocator<FoliageLayerGraphics::State>>
        **)(this + 0x10) != p_Var14) {
    p_Var5 = *(__vector_base<FoliageLayerGraphics::State,std::__ndk1::allocator<FoliageLayerGraphics::State>>
               **)(this + 0x10) + -0x28;
    do {
      std::__ndk1::
      __vector_base<FoliageLayerGraphics::State,std::__ndk1::allocator<FoliageLayerGraphics::State>>
      ::~__vector_base(p_Var5);
      if (((byte)p_Var5[-0x28] & 1) != 0) {
        operator_delete(*(void **)(p_Var5 + -0x18));
      }
      p_Var9 = p_Var5 + -0x30;
      p_Var5 = p_Var5 + -0x58;
    } while (p_Var9 != p_Var14);
    p_Var5 = *(__vector_base<FoliageLayerGraphics::State,std::__ndk1::allocator<FoliageLayerGraphics::State>>
               **)(this + 8);
  }
  *(__vector_base<FoliageLayerGraphics::State,std::__ndk1::allocator<FoliageLayerGraphics::State>>
    **)(this + 0x10) = p_Var14;
  operator_delete(p_Var5);
  return;
}


