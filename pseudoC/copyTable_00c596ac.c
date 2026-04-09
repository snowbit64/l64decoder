// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: copyTable
// Entry Point: 00c596ac
// Size: 472 bytes
// Signature: undefined __thiscall copyTable(GsTSymbolTable * this, GsTSymbolTable * param_1, SHC_PoolAllocator * param_2)


/* GsTSymbolTable::copyTable(GsTSymbolTable const&, SHC_PoolAllocator&) */

void __thiscall
GsTSymbolTable::copyTable(GsTSymbolTable *this,GsTSymbolTable *param_1,SHC_PoolAllocator *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  bool bVar4;
  undefined8 *this_00;
  void *__dest;
  GsTSymbol *pGVar5;
  long lVar6;
  ulong uVar7;
  long **pplVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  void *__src;
  size_t __n;
  long **pplVar12;
  ulong uVar13;
  
  lVar6 = *(long *)param_1;
  lVar3 = *(long *)(param_1 + 8);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  if (lVar3 != lVar6) {
    uVar13 = 0;
    do {
      plVar11 = *(long **)(lVar6 + uVar13 * 8);
      this_00 = (undefined8 *)SHC_PoolAllocator::allocate(param_2,0x20);
      this_00[2] = param_2;
      this_00[3] = 0;
      this_00[1] = 0;
      *this_00 = this_00 + 1;
      pplVar12 = (long **)*plVar11;
      while (pplVar12 != (long **)(plVar11 + 1)) {
        pGVar5 = (GsTSymbol *)(**(code **)(*pplVar12[8] + 0x30))(pplVar12[8],param_2);
        GsTSymbolTableLevel::insert((GsTSymbolTableLevel *)this_00,pGVar5);
        pplVar8 = (long **)pplVar12[1];
        if ((long **)pplVar12[1] == (long **)0x0) {
          pplVar8 = pplVar12 + 2;
          bVar4 = (long **)**pplVar8 != pplVar12;
          pplVar12 = (long **)*pplVar8;
          if (bVar4) {
            do {
              plVar9 = *pplVar8;
              pplVar8 = (long **)(plVar9 + 2);
              pplVar12 = (long **)*pplVar8;
            } while (*pplVar12 != plVar9);
          }
        }
        else {
          do {
            pplVar12 = pplVar8;
            pplVar8 = (long **)*pplVar12;
          } while ((long **)*pplVar12 != (long **)0x0);
        }
      }
      puVar2 = *(undefined8 **)(this + 8);
      if (puVar2 < *(undefined8 **)(this + 0x10)) {
        *puVar2 = this_00;
        *(undefined8 **)(this + 8) = puVar2 + 1;
      }
      else {
        __src = *(void **)this;
        __n = (long)puVar2 - (long)__src;
        uVar1 = ((long)__n >> 3) + 1;
        if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__vector_base_common<true>::__throw_length_error();
        }
        uVar7 = (long)*(undefined8 **)(this + 0x10) - (long)__src;
        uVar10 = (long)uVar7 >> 2;
        if (uVar1 <= uVar10) {
          uVar1 = uVar10;
        }
        if (0x7ffffffffffffff7 < uVar7) {
          uVar1 = 0x1fffffffffffffff;
        }
        if (uVar1 == 0) {
          __dest = (void *)0x0;
        }
        else {
          if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
          }
          __dest = operator_new(uVar1 << 3);
        }
        puVar2 = (undefined8 *)((long)__dest + ((long)__n >> 3) * 8);
        *puVar2 = this_00;
        if (0 < (long)__n) {
          memcpy(__dest,__src,__n);
        }
        *(void **)this = __dest;
        *(undefined8 **)(this + 8) = puVar2 + 1;
        *(void **)(this + 0x10) = (void *)((long)__dest + uVar1 * 8);
        if (__src != (void *)0x0) {
          operator_delete(__src);
        }
      }
      lVar6 = *(long *)param_1;
      uVar13 = (ulong)((int)uVar13 + 1);
    } while (uVar13 < (ulong)(*(long *)(param_1 + 8) - lVar6 >> 3));
  }
  return;
}


