// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getMatching
// Entry Point: 00c58d9c
// Size: 472 bytes
// Signature: undefined __thiscall getMatching(GsTSymbolTableLevel * this, char * param_1, vector * param_2)


/* GsTSymbolTableLevel::getMatching(char const*, std::__ndk1::vector<GsTFunction*,
   std::__ndk1::allocator<GsTFunction*> >&) */

void __thiscall
GsTSymbolTableLevel::getMatching(GsTSymbolTableLevel *this,char *param_1,vector *param_2)

{
  undefined8 *puVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  size_t __n;
  ulong uVar5;
  void *__dest;
  ulong uVar6;
  GsTSymbolTableLevel **ppGVar7;
  byte *__s1;
  GsTSymbolTableLevel *pGVar8;
  ulong uVar9;
  long *plVar10;
  void *__src;
  byte *pbVar11;
  size_t sVar12;
  GsTSymbolTableLevel **ppGVar13;
  undefined8 uVar14;
  
  ppGVar13 = *(GsTSymbolTableLevel ***)this;
  do {
    if (ppGVar13 == (GsTSymbolTableLevel **)(this + 8)) {
      return;
    }
    plVar10 = (long *)ppGVar13[8];
    pbVar11 = (byte *)plVar10[1];
    __n = strlen(param_1);
    bVar2 = *pbVar11;
    sVar12 = (ulong)(bVar2 >> 1);
    if ((bVar2 & 1) != 0) {
      sVar12 = *(size_t *)(pbVar11 + 8);
    }
    if (__n == sVar12) {
      if (__n != 0) {
        if (__n == 0xffffffffffffffff) {
                    /* try { // try from 00c58f58 to 00c58f5f has its CatchHandler @ 00c58f74 */
          std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
          goto LAB_00c58f60;
        }
        __s1 = *(byte **)(pbVar11 + 0x10);
        if ((bVar2 & 1) == 0) {
          __s1 = pbVar11 + 1;
        }
        iVar4 = memcmp(__s1,param_1,__n);
        if (iVar4 != 0) goto LAB_00c58ef4;
      }
      uVar5 = (**(code **)(*plVar10 + 0x18))(plVar10);
      if ((uVar5 & 1) != 0) {
        puVar1 = *(undefined8 **)(param_2 + 8);
        uVar14 = ppGVar13[8];
        if (puVar1 < *(undefined8 **)(param_2 + 0x10)) {
          *puVar1 = uVar14;
          *(undefined8 **)(param_2 + 8) = puVar1 + 1;
        }
        else {
          __src = *(void **)param_2;
          sVar12 = (long)puVar1 - (long)__src;
          uVar5 = ((long)sVar12 >> 3) + 1;
          if (uVar5 >> 0x3d != 0) {
LAB_00c58f60:
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__vector_base_common<true>::__throw_length_error();
          }
          uVar6 = (long)*(undefined8 **)(param_2 + 0x10) - (long)__src;
          uVar9 = (long)uVar6 >> 2;
          if (uVar5 <= uVar9) {
            uVar5 = uVar9;
          }
          if (0x7ffffffffffffff7 < uVar6) {
            uVar5 = 0x1fffffffffffffff;
          }
          if (uVar5 == 0) {
            __dest = (void *)0x0;
          }
          else {
            if (uVar5 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
            }
            __dest = operator_new(uVar5 << 3);
          }
          puVar1 = (undefined8 *)((long)__dest + ((long)sVar12 >> 3) * 8);
          *puVar1 = uVar14;
          if (0 < (long)sVar12) {
            memcpy(__dest,__src,sVar12);
          }
          *(void **)param_2 = __dest;
          *(undefined8 **)(param_2 + 8) = puVar1 + 1;
          *(void **)(param_2 + 0x10) = (void *)((long)__dest + uVar5 * 8);
          if (__src != (void *)0x0) {
            operator_delete(__src);
          }
        }
      }
    }
LAB_00c58ef4:
    ppGVar7 = (GsTSymbolTableLevel **)ppGVar13[1];
    if ((GsTSymbolTableLevel **)ppGVar13[1] == (GsTSymbolTableLevel **)0x0) {
      ppGVar7 = ppGVar13 + 2;
      bVar3 = (GsTSymbolTableLevel **)*(GsTSymbolTableLevel **)*ppGVar7 != ppGVar13;
      ppGVar13 = (GsTSymbolTableLevel **)*ppGVar7;
      if (bVar3) {
        do {
          pGVar8 = *ppGVar7;
          ppGVar7 = (GsTSymbolTableLevel **)(pGVar8 + 0x10);
          ppGVar13 = (GsTSymbolTableLevel **)*ppGVar7;
        } while (*ppGVar13 != pGVar8);
      }
    }
    else {
      do {
        ppGVar13 = ppGVar7;
        ppGVar7 = (GsTSymbolTableLevel **)*ppGVar13;
      } while ((GsTSymbolTableLevel **)*ppGVar13 != (GsTSymbolTableLevel **)0x0);
    }
  } while( true );
}


