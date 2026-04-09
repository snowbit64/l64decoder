// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: relateToOperator
// Entry Point: 00c58238
// Size: 288 bytes
// Signature: undefined __thiscall relateToOperator(GsTSymbolTableLevel * this, char * param_1, GsTOperator param_2)


/* GsTSymbolTableLevel::relateToOperator(char const*, GsTOperator) */

void __thiscall
GsTSymbolTableLevel::relateToOperator(GsTSymbolTableLevel *this,char *param_1,GsTOperator param_2)

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
  byte *pbVar8;
  GsTSymbolTableLevel **ppGVar9;
  long lVar10;
  
  ppGVar9 = *(GsTSymbolTableLevel ***)this;
  do {
    while( true ) {
      if (ppGVar9 == (GsTSymbolTableLevel **)(this + 8)) {
        return;
      }
      uVar5 = (**(code **)(*(long *)ppGVar9[8] + 0x18))();
      if ((uVar5 & 1) == 0) break;
      lVar10 = (long)ppGVar9[8];
      pbVar8 = *(byte **)(lVar10 + 8);
      __n = strlen(param_1);
      bVar2 = *pbVar8;
      sVar1 = (ulong)(bVar2 >> 1);
      if ((bVar2 & 1) != 0) {
        sVar1 = *(size_t *)(pbVar8 + 8);
      }
      if (__n != sVar1) break;
      if (__n != 0) {
        if (__n == 0xffffffffffffffff) {
                    /* try { // try from 00c5834c to 00c58353 has its CatchHandler @ 00c58354 */
          std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00c5834c with catch @ 00c58354
                        */
          FUN_006cadc8();
        }
        __s1 = *(byte **)(pbVar8 + 0x10);
        if ((bVar2 & 1) == 0) {
          __s1 = pbVar8 + 1;
        }
        iVar4 = memcmp(__s1,param_1,__n);
        if (iVar4 != 0) break;
      }
      if (*(long *)(lVar10 + 0x98) != 0) break;
      *(GsTOperator *)(lVar10 + 0x90) = param_2;
      ppGVar6 = (GsTSymbolTableLevel **)ppGVar9[1];
      if ((GsTSymbolTableLevel **)ppGVar9[1] == (GsTSymbolTableLevel **)0x0) goto LAB_00c58308;
LAB_00c582ec:
      do {
        ppGVar9 = ppGVar6;
        ppGVar6 = (GsTSymbolTableLevel **)*ppGVar9;
      } while ((GsTSymbolTableLevel **)*ppGVar9 != (GsTSymbolTableLevel **)0x0);
    }
    ppGVar6 = (GsTSymbolTableLevel **)ppGVar9[1];
    if ((GsTSymbolTableLevel **)ppGVar9[1] != (GsTSymbolTableLevel **)0x0) goto LAB_00c582ec;
LAB_00c58308:
    ppGVar6 = ppGVar9 + 2;
    bVar3 = (GsTSymbolTableLevel **)*(GsTSymbolTableLevel **)*ppGVar6 != ppGVar9;
    ppGVar9 = (GsTSymbolTableLevel **)*ppGVar6;
    if (bVar3) {
      do {
        pGVar7 = *ppGVar6;
        ppGVar6 = (GsTSymbolTableLevel **)(pGVar7 + 0x10);
        ppGVar9 = (GsTSymbolTableLevel **)*ppGVar6;
      } while (*ppGVar9 != pGVar7);
    }
  } while( true );
}


