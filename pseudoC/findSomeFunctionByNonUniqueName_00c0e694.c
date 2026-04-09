// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: findSomeFunctionByNonUniqueName
// Entry Point: 00c0e694
// Size: 272 bytes
// Signature: undefined __thiscall findSomeFunctionByNonUniqueName(GsTSymbolTableLevel * this, char * param_1)


/* GsTSymbolTableLevel::findSomeFunctionByNonUniqueName(char const*) const */

long __thiscall
GsTSymbolTableLevel::findSomeFunctionByNonUniqueName(GsTSymbolTableLevel *this,char *param_1)

{
  size_t sVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  size_t __n;
  GsTSymbolTableLevel **ppGVar6;
  byte *__s1;
  GsTSymbolTableLevel *pGVar7;
  long lVar8;
  byte *pbVar9;
  GsTSymbolTableLevel **ppGVar10;
  
  ppGVar10 = *(GsTSymbolTableLevel ***)this;
  do {
    if (ppGVar10 == (GsTSymbolTableLevel **)(this + 8)) {
      return 0;
    }
    uVar5 = (**(code **)(*(long *)ppGVar10[8] + 0x18))();
    if ((uVar5 & 1) != 0) {
      lVar8 = (long)ppGVar10[8];
      pbVar9 = *(byte **)(lVar8 + 8);
      __n = strlen(param_1);
      bVar2 = *pbVar9;
      sVar1 = (ulong)(bVar2 >> 1);
      if ((bVar2 & 1) != 0) {
        sVar1 = *(size_t *)(pbVar9 + 8);
      }
      if (__n == sVar1) {
        if (__n == 0) {
          return lVar8;
        }
        if (__n == 0xffffffffffffffff) {
                    /* try { // try from 00c0e798 to 00c0e79f has its CatchHandler @ 00c0e7a0 */
          std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00c0e798 with catch @ 00c0e7a0
                        */
          FUN_006cadc8();
        }
        __s1 = *(byte **)(pbVar9 + 0x10);
        if ((bVar2 & 1) == 0) {
          __s1 = pbVar9 + 1;
        }
        iVar4 = memcmp(__s1,param_1,__n);
        if (iVar4 == 0) {
          return lVar8;
        }
      }
    }
    ppGVar6 = (GsTSymbolTableLevel **)ppGVar10[1];
    if ((GsTSymbolTableLevel **)ppGVar10[1] == (GsTSymbolTableLevel **)0x0) {
      ppGVar6 = ppGVar10 + 2;
      bVar3 = (GsTSymbolTableLevel **)*(GsTSymbolTableLevel **)*ppGVar6 != ppGVar10;
      ppGVar10 = (GsTSymbolTableLevel **)*ppGVar6;
      if (bVar3) {
        do {
          pGVar7 = *ppGVar6;
          ppGVar6 = (GsTSymbolTableLevel **)(pGVar7 + 0x10);
          ppGVar10 = (GsTSymbolTableLevel **)*ppGVar6;
        } while (*ppGVar10 != pGVar7);
      }
    }
    else {
      do {
        ppGVar10 = ppGVar6;
        ppGVar6 = (GsTSymbolTableLevel **)*ppGVar10;
      } while ((GsTSymbolTableLevel **)*ppGVar10 != (GsTSymbolTableLevel **)0x0);
    }
  } while( true );
}


