// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: sort
// Entry Point: 00c57c04
// Size: 832 bytes
// Signature: undefined __thiscall sort(GsTSymbolTableLevel * this, vector * param_1)


/* GsTSymbolTableLevel::sort(std::__ndk1::vector<SymbolSortInfo,
   std::__ndk1::allocator<SymbolSortInfo> >&) */

void __thiscall GsTSymbolTableLevel::sort(GsTSymbolTableLevel *this,vector *param_1)

{
  long **pplVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  void *pvVar6;
  GsTSymbolTableLevel **ppGVar7;
  ulong uVar8;
  GsTSymbolTableLevel **ppGVar9;
  GsTSymbolTableLevel *pGVar10;
  ulong uVar11;
  long *plVar12;
  void *pvVar13;
  size_t sVar14;
  GsTSymbolTableLevel **ppGVar15;
  
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)param_1;
  ppGVar15 = *(GsTSymbolTableLevel ***)this;
  if (ppGVar15 != (GsTSymbolTableLevel **)(this + 8)) {
    do {
      plVar12 = (long *)ppGVar15[8];
      uVar5 = (**(code **)(*plVar12 + 0x18))(plVar12);
      if ((uVar5 & 1) == 0) {
        pplVar1 = *(long ***)(param_1 + 8);
        uVar2 = *(undefined4 *)(plVar12 + 9);
        if (pplVar1 < *(long ***)(param_1 + 0x10)) {
          *pplVar1 = plVar12;
          *(undefined *)(pplVar1 + 1) = 0;
          *(undefined4 *)((long)pplVar1 + 0xc) = uVar2;
          *(long ***)(param_1 + 8) = pplVar1 + 2;
        }
        else {
          pvVar13 = *(void **)param_1;
          sVar14 = (long)pplVar1 - (long)pvVar13;
          uVar5 = ((long)sVar14 >> 4) + 1;
          if (uVar5 >> 0x3c != 0) goto LAB_00c57f30;
          uVar8 = (long)*(long ***)(param_1 + 0x10) - (long)pvVar13;
          uVar11 = (long)uVar8 >> 3;
          if (uVar5 <= uVar11) {
            uVar5 = uVar11;
          }
          if (0x7fffffffffffffef < uVar8) {
            uVar5 = 0xfffffffffffffff;
          }
          if (uVar5 >> 0x3c != 0) goto LAB_00c57f38;
          uVar5 = uVar5 << 4;
          pvVar6 = operator_new(uVar5);
          pplVar1 = (long **)((long)pvVar6 + ((long)sVar14 >> 4) * 0x10);
          *pplVar1 = plVar12;
          *(undefined *)(pplVar1 + 1) = 0;
          *(undefined4 *)((long)pplVar1 + 0xc) = uVar2;
joined_r0x00c57de4:
          if (0 < (long)sVar14) {
            memcpy(pvVar6,pvVar13,sVar14);
          }
          *(void **)param_1 = pvVar6;
          *(long ***)(param_1 + 8) = pplVar1 + 2;
          *(ulong *)(param_1 + 0x10) = (long)pvVar6 + uVar5;
          if (pvVar13 != (void *)0x0) {
            operator_delete(pvVar13);
          }
        }
      }
      else {
        pplVar1 = *(long ***)(param_1 + 8);
        uVar2 = *(undefined4 *)(plVar12 + 0x15);
        if (pplVar1 < *(long ***)(param_1 + 0x10)) {
          *pplVar1 = plVar12;
          *(undefined *)(pplVar1 + 1) = 0;
          *(undefined4 *)((long)pplVar1 + 0xc) = uVar2;
          *(long ***)(param_1 + 8) = pplVar1 + 2;
        }
        else {
          pvVar13 = *(void **)param_1;
          sVar14 = (long)pplVar1 - (long)pvVar13;
          uVar5 = ((long)sVar14 >> 4) + 1;
          if (uVar5 >> 0x3c != 0) goto LAB_00c57f30;
          uVar8 = (long)*(long ***)(param_1 + 0x10) - (long)pvVar13;
          uVar11 = (long)uVar8 >> 3;
          if (uVar5 <= uVar11) {
            uVar5 = uVar11;
          }
          if (0x7fffffffffffffef < uVar8) {
            uVar5 = 0xfffffffffffffff;
          }
          if (uVar5 >> 0x3c != 0) goto LAB_00c57f38;
          pvVar6 = operator_new(uVar5 * 0x10);
          pplVar1 = (long **)((long)pvVar6 + ((long)sVar14 >> 4) * 0x10);
          *pplVar1 = plVar12;
          *(undefined *)(pplVar1 + 1) = 0;
          *(undefined4 *)((long)pplVar1 + 0xc) = uVar2;
          if (0 < (long)sVar14) {
            memcpy(pvVar6,pvVar13,sVar14);
          }
          *(void **)param_1 = pvVar6;
          *(long ***)(param_1 + 8) = pplVar1 + 2;
          *(void **)(param_1 + 0x10) = (void *)((long)pvVar6 + uVar5 * 0x10);
          if (pvVar13 != (void *)0x0) {
            operator_delete(pvVar13);
          }
        }
        iVar3 = *(int *)(plVar12 + 0x17);
        if (*(int *)(plVar12 + 0x15) != iVar3) {
          pplVar1 = *(long ***)(param_1 + 8);
          if (*(long ***)(param_1 + 0x10) <= pplVar1) {
            pvVar13 = *(void **)param_1;
            sVar14 = (long)pplVar1 - (long)pvVar13;
            uVar5 = ((long)sVar14 >> 4) + 1;
            if (uVar5 >> 0x3c != 0) {
LAB_00c57f30:
                    /* WARNING: Subroutine does not return */
              std::__ndk1::__vector_base_common<true>::__throw_length_error();
            }
            uVar8 = (long)*(long ***)(param_1 + 0x10) - (long)pvVar13;
            uVar11 = (long)uVar8 >> 3;
            if (uVar5 <= uVar11) {
              uVar5 = uVar11;
            }
            if (0x7fffffffffffffef < uVar8) {
              uVar5 = 0xfffffffffffffff;
            }
            if (uVar5 >> 0x3c != 0) {
LAB_00c57f38:
                    /* WARNING: Subroutine does not return */
              FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
            }
            uVar5 = uVar5 << 4;
            pvVar6 = operator_new(uVar5);
            pplVar1 = (long **)((long)pvVar6 + ((long)sVar14 >> 4) * 0x10);
            *pplVar1 = plVar12;
            *(undefined *)(pplVar1 + 1) = 1;
            *(int *)((long)pplVar1 + 0xc) = iVar3;
            goto joined_r0x00c57de4;
          }
          *pplVar1 = plVar12;
          *(int *)((long)pplVar1 + 0xc) = iVar3;
          *(undefined *)(pplVar1 + 1) = 1;
          *(long ***)(param_1 + 8) = pplVar1 + 2;
        }
      }
      ppGVar7 = (GsTSymbolTableLevel **)ppGVar15[1];
      if ((GsTSymbolTableLevel **)ppGVar15[1] == (GsTSymbolTableLevel **)0x0) {
        ppGVar7 = ppGVar15 + 2;
        ppGVar9 = (GsTSymbolTableLevel **)*ppGVar7;
        if ((GsTSymbolTableLevel **)*ppGVar9 != ppGVar15) {
          do {
            pGVar10 = *ppGVar7;
            ppGVar7 = (GsTSymbolTableLevel **)(pGVar10 + 0x10);
            ppGVar9 = (GsTSymbolTableLevel **)*ppGVar7;
          } while (*ppGVar9 != pGVar10);
        }
      }
      else {
        do {
          ppGVar9 = ppGVar7;
          ppGVar7 = (GsTSymbolTableLevel **)*ppGVar9;
        } while ((GsTSymbolTableLevel **)*ppGVar9 != (GsTSymbolTableLevel **)0x0);
      }
      ppGVar15 = ppGVar9;
    } while (ppGVar9 != (GsTSymbolTableLevel **)(this + 8));
    lVar4 = *(long *)(param_1 + 8) - (long)*(void **)param_1;
    if (lVar4 != 0) {
      qsort(*(void **)param_1,lVar4 >> 4,0x10,sortGlobals);
      return;
    }
  }
  return;
}


