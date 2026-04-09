// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: checkDistances
// Entry Point: 009c34b8
// Size: 348 bytes
// Signature: undefined __thiscall checkDistances(ProceduralPlacementCacheManager * this, ProceduralPlacementObjectDesc * param_1, uint param_2, uint param_3)


/* ProceduralPlacementCacheManager::checkDistances(ProceduralPlacementRule::ProceduralPlacementObjectDesc*,
   unsigned int, unsigned int) */

bool __thiscall
ProceduralPlacementCacheManager::checkDistances
          (ProceduralPlacementCacheManager *this,ProceduralPlacementObjectDesc *param_1,uint param_2
          ,uint param_3)

{
  ProceduralPlacementCacheManager **ppPVar1;
  long lVar2;
  bool bVar3;
  __tree_iterator _Var4;
  int iVar5;
  ProceduralPlacementCacheManager **ppPVar6;
  ProceduralPlacementCacheManager **ppPVar7;
  ProceduralPlacementCacheManager *pPVar8;
  DistanceMatrixType **ppDVar9;
  ProceduralPlacementCacheManager **ppPVar10;
  float fVar11;
  byte local_80;
  void *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  _Var4 = std::__ndk1::
          __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementCacheManager::DistanceMatrixTypeField*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementCacheManager::DistanceMatrixTypeField*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementCacheManager::DistanceMatrixTypeField*>>>
          ::
          find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                    ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementCacheManager::DistanceMatrixTypeField*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementCacheManager::DistanceMatrixTypeField*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementCacheManager::DistanceMatrixTypeField*>>>
                      *)(this + 8),(basic_string *)(param_1 + 0x10));
  ppPVar1 = (ProceduralPlacementCacheManager **)(this + 0x10);
  if ((ppPVar1 == (ProceduralPlacementCacheManager **)(ulong)_Var4) ||
     (ppPVar10 = *(ProceduralPlacementCacheManager ***)(this + 8), ppPVar10 == ppPVar1)) {
    bVar3 = true;
  }
  else {
    do {
      ppDVar9 = (DistanceMatrixType **)ppPVar10[7];
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string((basic_string *)&local_80);
      fVar11 = *(float *)(ppDVar9[1] +
                         (ulong)(uint)((int)(float)(ulong)param_2 +
                                      *(int *)(ppDVar9 + 8) * (int)(float)(ulong)param_3) * 4);
                    /* try { // try from 009c355c to 009c3563 has its CatchHandler @ 009c3614 */
      iVar5 = ProceduralPlacementDistanceMatrix::DistanceMatrixType::getDistance
                        (*ppDVar9,(basic_string *)&local_80);
      bVar3 = (float)iVar5 <= fVar11;
      if ((local_80 & 1) != 0) {
        operator_delete(local_70);
      }
      if (fVar11 < (float)iVar5) {
        bVar3 = false;
        break;
      }
      ppPVar6 = (ProceduralPlacementCacheManager **)ppPVar10[1];
      if ((ProceduralPlacementCacheManager **)ppPVar10[1] == (ProceduralPlacementCacheManager **)0x0
         ) {
        ppPVar6 = ppPVar10 + 2;
        ppPVar7 = (ProceduralPlacementCacheManager **)*ppPVar6;
        if ((ProceduralPlacementCacheManager **)*ppPVar7 != ppPVar10) {
          do {
            pPVar8 = *ppPVar6;
            ppPVar6 = (ProceduralPlacementCacheManager **)(pPVar8 + 0x10);
            ppPVar7 = (ProceduralPlacementCacheManager **)*ppPVar6;
          } while (*ppPVar7 != pPVar8);
        }
      }
      else {
        do {
          ppPVar7 = ppPVar6;
          ppPVar6 = (ProceduralPlacementCacheManager **)*ppPVar7;
        } while ((ProceduralPlacementCacheManager **)*ppPVar7 !=
                 (ProceduralPlacementCacheManager **)0x0);
      }
      ppPVar10 = ppPVar7;
    } while (ppPVar7 != ppPVar1);
  }
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar3;
}


