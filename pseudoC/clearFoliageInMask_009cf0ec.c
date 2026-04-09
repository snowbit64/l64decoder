// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: clearFoliageInMask
// Entry Point: 009cf0ec
// Size: 1716 bytes
// Signature: undefined __thiscall clearFoliageInMask(ProceduralPlacementManager * this, PPMask * param_1)


/* ProceduralPlacementManager::clearFoliageInMask(ProceduralPlacementScriptBinding::PPMask*) */

void __thiscall
ProceduralPlacementManager::clearFoliageInMask(ProceduralPlacementManager *this,PPMask *param_1)

{
  long lVar1;
  DensityMapModifier **ppDVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  Node *pNVar6;
  DensityMapModifier *this_00;
  ulong uVar7;
  DensityMapModifier **ppDVar8;
  ProceduralPlacementCacheManager *this_01;
  uint uVar9;
  long lVar10;
  long **pplVar11;
  long **pplVar12;
  long *plVar13;
  uint uVar14;
  long *plVar15;
  long lVar16;
  ulong uVar17;
  uint uVar18;
  long **pplVar19;
  uint uVar20;
  DensityMapModifier **ppDVar21;
  ulong __n;
  uint uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  uint local_134;
  long **local_f8;
  long *local_f0;
  undefined8 local_e8;
  DensityMapModifier **local_e0;
  DensityMapModifier **local_d8;
  DensityMapModifier **local_d0;
  long *local_c8;
  long *local_c0;
  undefined8 local_b8;
  long local_b0;
  
  lVar1 = tpidr_el0;
  local_b0 = *(long *)(lVar1 + 0x28);
  if (this[0x108] != (ProceduralPlacementManager)0x0) goto LAB_009cf748;
  plVar15 = *(long **)(this + 0xb0);
  uVar3 = (**(code **)(**(long **)param_1 + 0x40))();
  uVar4 = (**(code **)(*plVar15 + 0x40))(plVar15);
  if (uVar3 < uVar4) {
    uVar3 = (**(code **)(*plVar15 + 0x40))();
  }
  local_c8 = (long *)0x0;
  local_c0 = (long *)0x0;
  local_b8 = 0;
                    /* try { // try from 009cf190 to 009cf1a7 has its CatchHandler @ 009cf7b0 */
  EngineManager::getInstance();
  pNVar6 = (Node *)Renderer::getRootNode();
  NodeUtil::findByType(pNVar6,0x80,(vector *)&local_c8);
  lVar16 = *local_c8;
                    /* try { // try from 009cf1b4 to 009cf1b7 has its CatchHandler @ 009cf7a8 */
  uVar4 = BaseTerrain::getLodTextureSize();
  ppDVar21 = (DensityMapModifier **)0x0;
  lVar10 = *(long *)(lVar16 + 0x540);
  local_e0 = (DensityMapModifier **)0x0;
  local_d8 = (DensityMapModifier **)0x0;
  local_d0 = (DensityMapModifier **)0x0;
  fVar30 = (float)(ulong)uVar3;
  if ((int)((ulong)(*(long *)(lVar16 + 0x548) - lVar10) >> 3) != 0) {
    uVar17 = 0;
    do {
      lVar10 = *(long *)(lVar10 + uVar17 * 8);
                    /* try { // try from 009cf228 to 009cf22f has its CatchHandler @ 009cf7c8 */
      this_00 = (DensityMapModifier *)operator_new(0x30);
                    /* try { // try from 009cf238 to 009cf23b has its CatchHandler @ 009cf7d0 */
      DensityMapModifier::DensityMapModifier(this_00,*(DensityMap **)(lVar10 + 0x50));
                    /* try { // try from 009cf248 to 009cf24b has its CatchHandler @ 009cf7e0 */
      uVar7 = (**(code **)(**(long **)(lVar10 + 0x50) + 0x48))();
                    /* try { // try from 009cf25c to 009cf2bb has its CatchHandler @ 009cf7ec */
      uVar5 = (**(code **)(**(long **)(lVar10 + 0x50) + 0x48))();
      ppDVar2 = local_e0;
      fVar28 = (float)(uVar7 & 0xffffffff) / fVar30;
      if (ppDVar21 == local_d0) {
        __n = (long)ppDVar21 - (long)local_e0;
        uVar7 = ((long)__n >> 4) + 1;
        if (uVar7 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__vector_base_common<true>::__throw_length_error();
        }
        if (uVar7 <= (ulong)((long)__n >> 3)) {
          uVar7 = (long)__n >> 3;
        }
        if (0x7fffffffffffffef < __n) {
          uVar7 = 0xfffffffffffffff;
        }
        if (uVar7 >> 0x3c != 0) {
                    /* try { // try from 009cf788 to 009cf79b has its CatchHandler @ 009cf7c0 */
                    /* WARNING: Subroutine does not return */
          FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
        }
        ppDVar8 = (DensityMapModifier **)operator_new(uVar7 << 4);
        ppDVar21 = ppDVar8 + ((long)__n >> 4) * 2;
        *ppDVar21 = this_00;
        *(float *)(ppDVar21 + 1) = fVar28;
        *(undefined4 *)((long)ppDVar21 + 0xc) = uVar5;
        if (0 < (long)__n) {
          memcpy(ppDVar8,ppDVar2,__n);
        }
        ppDVar21 = ppDVar21 + 2;
        local_d0 = ppDVar8 + uVar7 * 2;
        local_e0 = ppDVar8;
        local_d8 = ppDVar21;
        if (ppDVar2 != (DensityMapModifier **)0x0) {
          operator_delete(ppDVar2);
        }
      }
      else {
        *ppDVar21 = this_00;
        *(float *)(ppDVar21 + 1) = fVar28;
        *(undefined4 *)((long)ppDVar21 + 0xc) = uVar5;
        ppDVar21 = ppDVar21 + 2;
        local_d8 = ppDVar21;
      }
      uVar17 = uVar17 + 1;
      lVar10 = *(long *)(lVar16 + 0x540);
    } while (uVar17 < ((ulong)(*(long *)(lVar16 + 0x548) - lVar10) >> 3 & 0xffffffff));
  }
  lVar10 = *(long *)(this + 0x20);
  local_f0 = (long *)0x0;
  local_e8 = 0;
  local_f8 = &local_f0;
  if (*(long *)(this + 0x28) != lVar10) {
    uVar17 = 0;
    do {
                    /* try { // try from 009cf338 to 009cf343 has its CatchHandler @ 009cf7e8 */
      std::__ndk1::
      __tree<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
      ::
      __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
                ((basic_string *)&local_f8,(basic_string *)(*(long *)(lVar10 + uVar17 * 8) + 0x38));
      lVar10 = *(long *)(this + 0x20);
      uVar17 = (ulong)((int)uVar17 + 1);
    } while (uVar17 < (ulong)(*(long *)(this + 0x28) - lVar10 >> 3));
  }
                    /* try { // try from 009cf364 to 009cf36b has its CatchHandler @ 009cf7a4 */
  uVar17 = (**(code **)(*plVar15 + 0x40))(plVar15);
                    /* try { // try from 009cf37c to 009cf37f has its CatchHandler @ 009cf7a0 */
  uVar7 = (**(code **)(**(long **)param_1 + 0x40))();
  uVar22 = 0;
  fVar28 = (float)(ulong)uVar4 / fVar30;
  uVar4 = uVar3;
  if (*(int *)(this + 0x130) < *(int *)(this + 0x134)) {
    local_134 = 0;
    if (*(int *)(this + 0x138) < *(int *)(this + 0x13c)) {
      uVar22 = (uint)((float)*(int *)(this + 0x138) / fVar28);
      uVar3 = (uint)((float)*(int *)(this + 0x13c) / fVar28);
      local_134 = (uint)((float)*(int *)(this + 0x130) / fVar28);
      uVar4 = (uint)((float)*(int *)(this + 0x134) / fVar28);
    }
    if (uVar22 < uVar3) {
LAB_009cf3f4:
      fVar29 = (float)(uVar17 & 0xffffffff) / fVar30;
      fVar30 = (float)(uVar7 & 0xffffffff) / fVar30;
      do {
        if (local_134 < uVar4) {
          fVar31 = (float)(ulong)uVar22;
          uVar14 = local_134;
          do {
                    /* try { // try from 009cf484 to 009cf4e7 has its CatchHandler @ 009cf7fc */
            uVar17 = (**(code **)(**(long **)param_1 + 0x58))();
            if ((uVar17 & 1) == 0) {
              fVar32 = (float)(ulong)uVar14;
              fVar23 = (float)(**(code **)(**(long **)param_1 + 0x68))
                                        (*(long **)param_1,(int)(fVar30 * fVar32),
                                         (int)(fVar30 * fVar31));
              if (fVar23 <= 0.0) goto LAB_009cf4b4;
LAB_009cf4ec:
                    /* try { // try from 009cf4fc to 009cf507 has its CatchHandler @ 009cf7f4 */
              fVar23 = (float)(**(code **)(*plVar15 + 0x68))
                                        (plVar15,(int)(fVar29 * fVar32),(int)(fVar29 * fVar31));
              if (((uint)(int)fVar23 >> 1 & 1) == 0) {
                if (local_f8 != &local_f0) {
                  pplVar19 = local_f8;
                  do {
                    /* try { // try from 009cf534 to 009cf547 has its CatchHandler @ 009cf800 */
                    this_01 = (ProceduralPlacementCacheManager *)
                              ProceduralPlacementCacheManager::getInstance();
                    ProceduralPlacementCacheManager::addTypeForRemoval
                              (this_01,(basic_string *)(pplVar19 + 4),(int)(fVar28 * fVar32),
                               (int)(fVar28 * fVar31));
                    pplVar11 = (long **)pplVar19[1];
                    if ((long **)pplVar19[1] == (long **)0x0) {
                      pplVar11 = pplVar19 + 2;
                      pplVar12 = (long **)*pplVar11;
                      if ((long **)*pplVar12 != pplVar19) {
                        do {
                          plVar13 = *pplVar11;
                          pplVar11 = (long **)(plVar13 + 2);
                          pplVar12 = (long **)*pplVar11;
                        } while (*pplVar12 != plVar13);
                      }
                    }
                    else {
                      do {
                        pplVar12 = pplVar11;
                        pplVar11 = (long **)*pplVar12;
                      } while ((long **)*pplVar12 != (long **)0x0);
                    }
                    pplVar19 = pplVar12;
                  } while (pplVar12 != &local_f0);
                }
                ppDVar2 = local_e0;
                if (ppDVar21 != local_e0) {
                  lVar10 = (long)ppDVar21 - (long)local_e0;
                  uVar17 = 0;
                  do {
                    ppDVar8 = ppDVar2 + uVar17 * 2;
                    uVar18 = 0;
                    uVar9 = (uint)*(float *)(ppDVar8 + 1);
                    if (uVar9 == 0) {
                      uVar9 = 1;
                    }
                    do {
                      uVar20 = 0;
                      do {
                        uVar5 = *(undefined4 *)(ppDVar8 + 1);
                        fVar26 = (float)NEON_fmadd(fVar31,uVar5,(float)(ulong)uVar18);
                        fVar23 = (float)NEON_ucvtf(*(undefined4 *)((long)ppDVar8 + 0xc));
                        fVar24 = (float)NEON_fmadd(fVar32,uVar5,(float)(ulong)uVar20);
                        fVar25 = fVar23;
                        if (fVar26 <= fVar23) {
                          fVar25 = fVar26;
                        }
                        fVar27 = 0.0;
                        if (0.0 <= fVar26) {
                          fVar27 = fVar25;
                        }
                        if (fVar24 <= fVar23) {
                          fVar23 = fVar24;
                        }
                        fVar25 = 0.0;
                        if (0.0 <= fVar24) {
                          fVar25 = fVar23;
                        }
                    /* try { // try from 009cf618 to 009cf61f has its CatchHandler @ 009cf804 */
                        DensityMapModifier::writeValue(*ppDVar8,(int)fVar25,(int)fVar27,0);
                        uVar20 = uVar20 + 1;
                      } while (uVar9 != uVar20);
                      uVar18 = uVar18 + 1;
                    } while (uVar18 != uVar9);
                    uVar17 = (ulong)((int)uVar17 + 1);
                  } while (uVar17 < (ulong)(lVar10 >> 4));
                }
              }
            }
            else {
LAB_009cf4b4:
              uVar17 = (**(code **)(**(long **)param_1 + 0x58))();
              if ((uVar17 & 1) != 0) {
                fVar32 = (float)(ulong)uVar14;
                uVar17 = (**(code **)(**(long **)param_1 + 0x70))
                                   (*(long **)param_1,(int)(fVar30 * fVar32),(int)(fVar30 * fVar31))
                ;
                if ((uVar17 & 1) != 0) goto LAB_009cf4ec;
              }
            }
            uVar14 = uVar14 + 1;
          } while (uVar14 != uVar4);
        }
        uVar22 = uVar22 + 1;
      } while (uVar22 != uVar3);
    }
  }
  else {
    local_134 = 0;
    if (uVar3 != 0) goto LAB_009cf3f4;
  }
  ppDVar2 = local_e0;
  lVar10 = (long)ppDVar21 - (long)local_e0;
  if (lVar10 != 0) {
    uVar17 = 0;
    do {
      pplVar19 = (long **)(ppDVar2 + uVar17 * 2);
      plVar15 = (long *)(*pplVar19)[1];
                    /* try { // try from 009cf694 to 009cf6fb has its CatchHandler @ 009cf7f8 */
      uVar3 = (**(code **)(*plVar15 + 0x48))(plVar15);
      uVar4 = (**(code **)(*(long *)(*pplVar19)[1] + 0x50))();
      uVar22 = (**(code **)(*(long *)(*pplVar19)[1] + 0x58))();
      DensityMap::markDensityRegionDirty
                ((DensityMap *)plVar15,0,0,uVar3,uVar4,0,uVar22,0xffffffff,false,true,true);
      if (*pplVar19 != (long *)0x0) {
        (**(code **)(**pplVar19 + 8))();
      }
      uVar17 = (ulong)((int)uVar17 + 1);
    } while (uVar17 < (ulong)(lVar10 >> 4));
  }
                    /* try { // try from 009cf714 to 009cf71b has its CatchHandler @ 009cf7ac */
  ProceduralPlacementCacheManager::getInstance();
  ProceduralPlacementCacheManager::removeTypes();
  std::__ndk1::
  __tree<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
  ::destroy((__tree<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
             *)&local_f8,(__tree_node *)local_f0);
  if (ppDVar2 != (DensityMapModifier **)0x0) {
    operator_delete(ppDVar2);
  }
  if (local_c8 != (long *)0x0) {
    local_c0 = local_c8;
    operator_delete(local_c8);
  }
LAB_009cf748:
  if (*(long *)(lVar1 + 0x28) != local_b0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


