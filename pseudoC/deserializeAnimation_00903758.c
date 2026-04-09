// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: deserializeAnimation
// Entry Point: 00903758
// Size: 1964 bytes
// Signature: undefined __cdecl deserializeAnimation(map * param_1, uint param_2, uchar * param_3)


/* WARNING: Type propagation algorithm not settling */
/* AnimSerializationHelper::deserializeAnimation(std::__ndk1::map<unsigned int, TransformGroup*,
   std::__ndk1::less<unsigned int>, std::__ndk1::allocator<std::__ndk1::pair<unsigned int const,
   TransformGroup*> > >&, unsigned int, unsigned char*) */

void AnimSerializationHelper::deserializeAnimation(map *param_1,uint param_2,uchar *param_3)

{
  long ********pppppppplVar1;
  map **ppmVar2;
  uint *puVar3;
  float *pfVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  TransformGroup **ppTVar11;
  bool bVar12;
  int iVar13;
  CharacterSet *this;
  Clip *this_00;
  KeyframedTransformation *this_01;
  CompressedTransformationKeyFrame *__ptr;
  ulong uVar14;
  uchar *puVar15;
  TransformGroup **__dest;
  long ********pppppppplVar16;
  long ********pppppppplVar17;
  long *******ppppppplVar18;
  map **ppmVar19;
  long ********pppppppplVar20;
  uint *puVar21;
  undefined8 *puVar22;
  uint uVar23;
  float fVar24;
  map **ppmVar25;
  ulong uVar26;
  map **ppmVar27;
  undefined8 *puVar28;
  uint uVar29;
  uint *puVar30;
  CompressedTransformationKeyFrame *pCVar31;
  long lVar32;
  float fVar33;
  float fVar34;
  uint local_17c;
  GsQuaternion local_130;
  undefined7 uStack_12f;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  TransformGroup **local_110;
  map **local_108;
  map **local_100;
  ulong local_f8;
  undefined8 uStack_f0;
  char *local_e8;
  long ********local_e0;
  long ********local_d8;
  long local_d0;
  uint *local_c8;
  uint *local_c0;
  uint *local_b8;
  undefined8 local_b0;
  uint local_a8;
  undefined8 local_a0;
  uint local_98;
  undefined8 local_90;
  uint local_88;
  long local_80;
  
  lVar10 = tpidr_el0;
  local_80 = *(long *)(lVar10 + 0x28);
  uVar6 = *(uint *)param_3;
  local_c8 = (uint *)0x0;
  local_c0 = (uint *)0x0;
  local_b8 = (uint *)0x0;
  local_d8 = (long ********)0x0;
  local_d0 = 0;
  local_e0 = (long ********)&local_d8;
  if (uVar6 == 0) {
    std::__ndk1::
    __tree<std::__ndk1::__value_type<unsigned_int,unsigned_int>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,unsigned_int>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,unsigned_int>>>
    ::destroy((__tree<std::__ndk1::__value_type<unsigned_int,unsigned_int>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,unsigned_int>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,unsigned_int>>>
               *)&local_e0,(__tree_node *)0x0);
  }
  else {
    puVar21 = (uint *)0x0;
    puVar30 = (uint *)0x0;
    puVar22 = (undefined8 *)(param_3 + 4);
    ppmVar2 = (map **)(param_1 + 8);
    local_17c = 0;
    do {
      local_f8 = 0;
      uStack_f0 = 0;
      local_e8 = (char *)0x0;
      uVar9 = *(uint *)puVar22;
                    /* try { // try from 00903804 to 00903813 has its CatchHandler @ 00903f28 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((char *)&local_f8,(ulong)(uint *)((long)puVar22 + 4));
                    /* try { // try from 00903814 to 0090381b has its CatchHandler @ 00903f30 */
      this = (CharacterSet *)operator_new(0xf0);
      pcVar5 = (char *)((ulong)&local_f8 | 1);
      if ((local_f8 & 1) != 0) {
        pcVar5 = local_e8;
      }
                    /* try { // try from 00903834 to 0090383b has its CatchHandler @ 00903f1c */
      CharacterSet::CharacterSet(this,pcVar5,(CharacterSetSource *)0x0);
      puVar3 = (uint *)((long)(uint *)((long)puVar22 + 4) + (ulong)(uVar9 + 3 & 0xfffffffc));
      puVar22 = (undefined8 *)(puVar3 + 1);
      uVar9 = *puVar3;
      if (uVar9 != 0) {
        uVar23 = 0;
        do {
          local_110 = (TransformGroup **)0x0;
          local_108 = (map **)0x0;
          local_100 = (map **)0x0;
          uVar29 = *(uint *)puVar22;
                    /* try { // try from 00903880 to 0090388f has its CatchHandler @ 00903f58 */
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    ((char *)&local_110,(ulong)(uint *)((long)puVar22 + 4));
          pfVar4 = (float *)((long)(uint *)((long)puVar22 + 4) + ((ulong)(uVar29 + 3) & 0xfffffffc))
          ;
          fVar33 = *pfVar4;
                    /* try { // try from 009038a0 to 009038a7 has its CatchHandler @ 00903f5c */
          this_00 = (Clip *)operator_new(0x38);
          pcVar5 = (char *)((ulong)&local_110 | 1);
          if (((ulong)local_110 & 1) != 0) {
            pcVar5 = (char *)local_100;
          }
                    /* try { // try from 009038c0 to 009038cb has its CatchHandler @ 00903f60 */
          Clip::Clip(this_00,pcVar5,0.0,fVar33);
          puVar22 = (undefined8 *)(pfVar4 + 2);
          fVar33 = pfVar4[1];
          if (fVar33 != 0.0) {
            fVar24 = 0.0;
            do {
              uVar29 = *(uint *)((long)puVar22 + 4);
              puVar28 = puVar22 + 1;
              if (uVar29 != 0) {
                uVar7 = *(uint *)puVar22;
                    /* try { // try from 0090390c to 00903913 has its CatchHandler @ 00903f7c */
                this_01 = (KeyframedTransformation *)operator_new(0xd0);
                    /* try { // try from 00903918 to 0090391f has its CatchHandler @ 00903f80 */
                KeyframedTransformation::KeyframedTransformation(this_01,0);
                    /* try { // try from 00903920 to 00903923 has its CatchHandler @ 00903f78 */
                iVar13 = CompressedTransformationKeyFrame::getMaxSize();
                __ptr = (CompressedTransformationKeyFrame *)malloc((ulong)(uVar29 * iVar13));
                pCVar31 = __ptr;
                do {
                  uVar8 = *(uint *)((long)puVar28 + 4);
                  fVar34 = *(float *)puVar28;
                  local_120 = 0;
                  uStack_118 = 0;
                  if ((uVar8 & 1) == 0) {
                    puVar28 = puVar28 + 1;
                  }
                  else {
                    local_90 = puVar28[1];
                    local_88 = *(uint *)(puVar28 + 2);
                    puVar28 = (undefined8 *)((long)puVar28 + 0x14);
                  }
                  if ((uVar8 >> 1 & 1) != 0) {
                    local_b0 = *puVar28;
                    local_a8 = *(uint *)(puVar28 + 1);
                    /* try { // try from 009039e0 to 009039eb has its CatchHandler @ 00903f98 */
                    GsQuaternion::GsQuaternion(&local_130,(Vector3 *)&local_b0);
                    local_120 = CONCAT71(uStack_12f,local_130);
                    puVar28 = (undefined8 *)((long)puVar28 + 0xc);
                    uStack_118 = uStack_128;
                  }
                  if ((uVar8 >> 2 & 1) != 0) {
                    local_a0 = *puVar28;
                    local_98 = *(uint *)(puVar28 + 1);
                    puVar28 = (undefined8 *)((long)puVar28 + 0xc);
                  }
                    /* try { // try from 00903968 to 00903983 has its CatchHandler @ 00903f9c */
                  uVar14 = CompressedTransformationKeyFrame::createInPlace
                                     (pCVar31,fVar34,uVar8,(float *)&local_90,
                                      (GsQuaternion *)&local_120,(float *)&local_a0,
                                      (bool)((byte)(uVar8 >> 0xf) & 1));
                    /* try { // try from 00903988 to 00903997 has its CatchHandler @ 00903fa0 */
                  KeyframedTransformation::addKey(this_01,pCVar31,(bool *)&local_130);
                  uVar26 = 0;
                  if (local_130 != (GsQuaternion)0x0) {
                    uVar26 = uVar14 & 0xffffffff;
                  }
                  uVar29 = uVar29 - 1;
                  pCVar31 = pCVar31 + uVar26;
                } while (uVar29 != 0);
                puVar15 = (uchar *)realloc(__ptr,(long)pCVar31 - (long)__ptr);
                    /* try { // try from 00903a10 to 00903a33 has its CatchHandler @ 00903f94 */
                KeyframedTransformation::offsetAllKeyPointers(this_01,puVar15,(uchar *)__ptr);
                KeyframedTransformation::registerKeyStorageArea(this_01,puVar15);
                KeyframedTransformation::finalize();
                puVar30 = local_c8;
                pppppppplVar17 = local_d8;
                pppppppplVar16 = (long ********)&local_d8;
                pppppppplVar20 = local_d8;
                if (local_d8 == (long ********)0x0) {
LAB_00903a74:
                  uVar26 = (long)local_c0 - (long)local_c8;
                  lVar32 = (long)uVar26 >> 2;
                  if (local_c0 == local_b8) {
                    uVar14 = lVar32 + 1;
                    if (uVar14 >> 0x3e != 0) {
                    /* try { // try from 00903ed8 to 00903eeb has its CatchHandler @ 00903f74 */
                    /* WARNING: Subroutine does not return */
                      std::__ndk1::__vector_base_common<true>::__throw_length_error();
                    }
                    if (uVar14 <= (ulong)((long)uVar26 >> 1)) {
                      uVar14 = (long)uVar26 >> 1;
                    }
                    if (0x7ffffffffffffffb < uVar26) {
                      uVar14 = 0x3fffffffffffffff;
                    }
                    if (uVar14 == 0) {
                      puVar21 = (uint *)0x0;
                    }
                    else {
                      if (uVar14 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_006d1f18(
                                    "allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                                    );
                      }
                    /* try { // try from 00903ad0 to 00903ad3 has its CatchHandler @ 00903f90 */
                      puVar21 = (uint *)operator_new(uVar14 << 2);
                    }
                    puVar3 = puVar21 + lVar32;
                    *puVar3 = uVar7;
                    if (0 < (long)uVar26) {
                      memcpy(puVar21,puVar30,uVar26);
                    }
                    local_b8 = puVar21 + uVar14;
                    local_c8 = puVar21;
                    local_c0 = puVar3 + 1;
                    if (puVar30 != (uint *)0x0) {
                      operator_delete(puVar30);
                      pppppppplVar17 = local_d8;
                    }
                  }
                  else {
                    *local_c0 = uVar7;
                    local_c0 = local_c0 + 1;
                  }
                  uVar29 = (uint)lVar32;
                  pppppppplVar16 = (long ********)&local_d8;
                  pppppppplVar20 = (long ********)&local_d8;
                  while (pppppppplVar17 != (long ********)0x0) {
                    while (pppppppplVar20 = pppppppplVar17,
                          uVar7 < *(uint *)((long)pppppppplVar20 + 0x1c)) {
                      pppppppplVar16 = pppppppplVar20;
                      pppppppplVar17 = (long ********)*pppppppplVar20;
                      if ((long ********)*pppppppplVar20 == (long ********)0x0) {
                        ppppppplVar18 = *pppppppplVar20;
                        goto joined_r0x00903bd0;
                      }
                    }
                    if (uVar7 <= *(uint *)((long)pppppppplVar20 + 0x1c)) break;
                    pppppppplVar16 = pppppppplVar20 + 1;
                    pppppppplVar17 = (long ********)*pppppppplVar16;
                  }
                  ppppppplVar18 = *pppppppplVar16;
joined_r0x00903bd0:
                  if (ppppppplVar18 == (long *******)0x0) {
                    /* try { // try from 00903b80 to 00903b8b has its CatchHandler @ 00903f70 */
                    ppppppplVar18 = (long *******)operator_new(0x28);
                    *(uint *)((long)ppppppplVar18 + 0x1c) = uVar7;
                    *(uint *)(ppppppplVar18 + 4) = uVar29;
                    *ppppppplVar18 = (long ******)0x0;
                    ppppppplVar18[1] = (long ******)0x0;
                    ppppppplVar18[2] = (long ******)pppppppplVar20;
                    *pppppppplVar16 = ppppppplVar18;
                    if ((long ********)*local_e0 != (long ********)0x0) {
                      ppppppplVar18 = *pppppppplVar16;
                      local_e0 = (long ********)*local_e0;
                    }
                    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                              ((__tree_node_base *)local_d8,(__tree_node_base *)ppppppplVar18);
                    local_d0 = local_d0 + 1;
                  }
                }
                else {
                  do {
                    bVar12 = *(uint *)((long)pppppppplVar20 + 0x1c) < uVar7;
                    if (!bVar12) {
                      pppppppplVar16 = pppppppplVar20;
                    }
                    pppppppplVar1 = pppppppplVar20 + bVar12;
                    pppppppplVar20 = (long ********)*pppppppplVar1;
                  } while ((long ********)*pppppppplVar1 != (long ********)0x0);
                  if (((long *********)pppppppplVar16 == &local_d8) ||
                     (uVar7 < *(uint *)((long)pppppppplVar16 + 0x1c))) goto LAB_00903a74;
                  uVar29 = *(uint *)(pppppppplVar16 + 4);
                }
                    /* try { // try from 00903bd4 to 00903beb has its CatchHandler @ 00903f90 */
                KeyframedTransformation::setTransformIndex(this_01,uVar29);
                Clip::addKeyedTransformation(this_00,this_01);
              }
              puVar22 = puVar28;
              fVar24 = (float)((int)fVar24 + 1);
            } while (fVar24 != fVar33);
          }
                    /* try { // try from 00903bf4 to 00903bff has its CatchHandler @ 00903f54 */
          CharacterSet::addClip(this,this_00);
          if (((ulong)local_110 & 1) != 0) {
            operator_delete(local_100);
          }
          uVar23 = uVar23 + 1;
          puVar21 = local_c0;
          puVar30 = local_c8;
        } while (uVar23 < uVar9);
      }
      local_110 = (TransformGroup **)0x0;
      local_108 = (map **)0x0;
      local_100 = (map **)0x0;
      if (puVar30 == puVar21) {
        ppmVar19 = (map **)0x0;
      }
      else {
        ppmVar25 = (map **)0x0;
        do {
          ppTVar11 = local_110;
          uVar9 = *puVar30;
          ppmVar19 = (map **)*ppmVar2;
          ppmVar27 = ppmVar2;
          if (ppmVar19 == (map **)0x0) {
LAB_00903d2c:
            if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
               (iVar13 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
               iVar13 != 0)) {
                    /* try { // try from 00903e40 to 00903e4b has its CatchHandler @ 00903f04 */
              LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
              __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                           &PTR_LOOP_00fd8de0);
              __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
            }
                    /* try { // try from 00903d44 to 00903d5b has its CatchHandler @ 00903f18 */
            LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                              "Warning: Animation set %s skipped. Transform group id %u not found.\n"
                              ,*(undefined8 *)(this + 8),(ulong)uVar9);
            FUN_00f276d0(1,this + 0x28);
            goto LAB_00903dc0;
          }
          do {
            if (*(uint *)(ppmVar19 + 4) >= uVar9) {
              ppmVar27 = ppmVar19;
            }
            ppmVar19 = (map **)ppmVar19[*(uint *)(ppmVar19 + 4) < uVar9];
          } while (ppmVar19 != (map **)0x0);
          if ((ppmVar27 == ppmVar2) || (uVar9 < *(uint *)(ppmVar27 + 4))) goto LAB_00903d2c;
          if (ppmVar25 == local_100) {
            uVar14 = (long)ppmVar25 - (long)local_110;
            uVar26 = ((long)uVar14 >> 3) + 1;
            if (uVar26 >> 0x3d != 0) {
                    /* try { // try from 00903eec to 00903eff has its CatchHandler @ 00903f40 */
                    /* WARNING: Subroutine does not return */
              std::__ndk1::__vector_base_common<true>::__throw_length_error();
            }
            if (uVar26 <= (ulong)((long)uVar14 >> 2)) {
              uVar26 = (long)uVar14 >> 2;
            }
            if (0x7ffffffffffffff7 < uVar14) {
              uVar26 = 0x1fffffffffffffff;
            }
            if (uVar26 == 0) {
              __dest = (TransformGroup **)0x0;
            }
            else {
              if (uVar26 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
                FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                            );
              }
                    /* try { // try from 00903cdc to 00903cdf has its CatchHandler @ 00903f3c */
              __dest = (TransformGroup **)operator_new(uVar26 << 3);
            }
            ppmVar19 = (map **)(__dest + ((long)uVar14 >> 3) + 1);
            __dest[(long)uVar14 >> 3] = (TransformGroup *)ppmVar27[5];
            if (0 < (long)uVar14) {
              memcpy(__dest,ppTVar11,uVar14);
            }
            local_100 = (map **)(__dest + uVar26);
            local_110 = __dest;
            local_108 = ppmVar19;
            if (ppTVar11 != (TransformGroup **)0x0) {
              operator_delete(ppTVar11);
            }
          }
          else {
            ppmVar19 = ppmVar25 + 1;
            *ppmVar25 = ppmVar27[5];
            local_108 = ppmVar19;
          }
          puVar30 = puVar30 + 1;
          ppmVar25 = ppmVar19;
        } while (puVar30 != puVar21);
      }
      ppTVar11 = local_110;
      FUN_00f276d0(1,this + 0x28);
      uVar26 = (long)ppmVar19 - (long)ppTVar11;
      if (uVar26 == 0) {
        CharacterSet::bindTransforms(this,(TransformGroup **)0x0,0);
      }
      else {
                    /* try { // try from 00903d98 to 00903dbb has its CatchHandler @ 00903f38 */
        CharacterSet::bindTransforms(this,ppTVar11,(uint)(uVar26 >> 3));
      }
LAB_00903dc0:
      iVar13 = FUN_00f27700(0xffffffff,this + 0x28);
      if (iVar13 < 2) {
                    /* try { // try from 00903de0 to 00903de3 has its CatchHandler @ 00903f38 */
        (**(code **)(*(long *)(this + 0x20) + 0x10))();
      }
      std::__ndk1::
      __tree<std::__ndk1::__value_type<unsigned_int,unsigned_int>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,unsigned_int>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,unsigned_int>>>
      ::destroy((__tree<std::__ndk1::__value_type<unsigned_int,unsigned_int>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,unsigned_int>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,unsigned_int>>>
                 *)&local_e0,(__tree_node *)local_d8);
      puVar30 = local_c8;
      local_d8 = (long ********)0x0;
      local_d0 = 0;
      if (local_c0 != local_c8) {
        local_c0 = local_c8;
      }
      puVar21 = local_c0;
      local_e0 = (long ********)&local_d8;
      if (local_110 != (TransformGroup **)0x0) {
        operator_delete(local_110);
      }
      if ((local_f8 & 1) != 0) {
        operator_delete(local_e8);
      }
      local_17c = local_17c + 1;
    } while (local_17c < uVar6);
    std::__ndk1::
    __tree<std::__ndk1::__value_type<unsigned_int,unsigned_int>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,unsigned_int>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,unsigned_int>>>
    ::destroy((__tree<std::__ndk1::__value_type<unsigned_int,unsigned_int>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,unsigned_int>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,unsigned_int>>>
               *)&local_e0,(__tree_node *)local_d8);
    if (puVar30 != (uint *)0x0) {
      operator_delete(puVar30);
    }
  }
  if (*(long *)(lVar10 + 0x28) == local_80) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


