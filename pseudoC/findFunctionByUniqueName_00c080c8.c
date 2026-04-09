// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: findFunctionByUniqueName
// Entry Point: 00c080c8
// Size: 284 bytes
// Signature: undefined __thiscall findFunctionByUniqueName(GsTSymbolTableLevel * this, char * param_1)


/* GsTSymbolTableLevel::findFunctionByUniqueName(char const*) const */

GsTSymbolTableLevel * __thiscall
GsTSymbolTableLevel::findFunctionByUniqueName(GsTSymbolTableLevel *this,char *param_1)

{
  bool bVar1;
  size_t sVar2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  size_t __n;
  GsTSymbolTableLevel **ppGVar6;
  byte *__s1;
  GsTSymbolTableLevel **ppGVar7;
  GsTSymbolTableLevel *pGVar8;
  byte *pbVar9;
  GsTSymbolTableLevel **ppGVar10;
  GsTSymbolTableLevel *pGVar11;
  
  if (*(GsTSymbolTableLevel ***)this == (GsTSymbolTableLevel **)(this + 8)) {
LAB_00c081bc:
    pGVar8 = (GsTSymbolTableLevel *)0x0;
  }
  else {
    pGVar8 = (GsTSymbolTableLevel *)0x0;
    ppGVar10 = *(GsTSymbolTableLevel ***)this;
    do {
      uVar5 = (**(code **)(*(long *)ppGVar10[8] + 0x18))();
      if ((uVar5 & 1) != 0) {
        pGVar11 = ppGVar10[8];
        pbVar9 = *(byte **)(pGVar11 + 8);
        __n = strlen(param_1);
        bVar3 = *pbVar9;
        sVar2 = (ulong)(bVar3 >> 1);
        if ((bVar3 & 1) != 0) {
          sVar2 = *(size_t *)(pbVar9 + 8);
        }
        if (__n == sVar2) {
          if (__n != 0) {
            if (__n == 0xffffffffffffffff) {
                    /* try { // try from 00c081d8 to 00c081df has its CatchHandler @ 00c081e0 */
              std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00c081d8 with catch @ 00c081e0
                        */
              FUN_006cadc8();
            }
            __s1 = *(byte **)(pbVar9 + 0x10);
            if ((bVar3 & 1) == 0) {
              __s1 = pbVar9 + 1;
            }
            iVar4 = memcmp(__s1,param_1,__n);
            if (iVar4 != 0) goto LAB_00c08174;
          }
          bVar1 = pGVar8 != (GsTSymbolTableLevel *)0x0;
          pGVar8 = pGVar11;
          if (bVar1) goto LAB_00c081bc;
        }
      }
LAB_00c08174:
      ppGVar6 = (GsTSymbolTableLevel **)ppGVar10[1];
      if ((GsTSymbolTableLevel **)ppGVar10[1] == (GsTSymbolTableLevel **)0x0) {
        ppGVar6 = ppGVar10 + 2;
        ppGVar7 = (GsTSymbolTableLevel **)*ppGVar6;
        if ((GsTSymbolTableLevel **)*ppGVar7 != ppGVar10) {
          do {
            pGVar11 = *ppGVar6;
            ppGVar6 = (GsTSymbolTableLevel **)(pGVar11 + 0x10);
            ppGVar7 = (GsTSymbolTableLevel **)*ppGVar6;
          } while (*ppGVar7 != pGVar11);
        }
      }
      else {
        do {
          ppGVar7 = ppGVar6;
          ppGVar6 = (GsTSymbolTableLevel **)*ppGVar7;
        } while ((GsTSymbolTableLevel **)*ppGVar7 != (GsTSymbolTableLevel **)0x0);
      }
      ppGVar10 = ppGVar7;
    } while (ppGVar7 != (GsTSymbolTableLevel **)(this + 8));
  }
  return pGVar8;
}


