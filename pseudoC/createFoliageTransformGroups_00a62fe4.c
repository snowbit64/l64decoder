// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createFoliageTransformGroups
// Entry Point: 00a62fe4
// Size: 1180 bytes
// Signature: undefined __thiscall createFoliageTransformGroups(FoliageSystem * this, STREAM_QUEUE param_1)


/* FoliageSystem::createFoliageTransformGroups(StreamManager::STREAM_QUEUE) */

void __thiscall
FoliageSystem::createFoliageTransformGroups(FoliageSystem *this,STREAM_QUEUE param_1)

{
  uint uVar1;
  FoliageDataPlane **ppFVar2;
  char *pcVar3;
  long lVar4;
  FoliageDataPlane **ppFVar5;
  int iVar6;
  uint uVar7;
  FoliageSystemDesc *this_00;
  long *plVar8;
  FoliageLayerGraphics *this_01;
  TerrainDataPlane *this_02;
  FoliageTransformGroup *this_03;
  StreamManager *this_04;
  Layer *pLVar9;
  FoliageDataPlane *this_05;
  FoliageDataPlane **ppFVar10;
  void *__dest;
  long lVar11;
  Layer *pLVar12;
  size_t __n;
  uint uVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  long local_100;
  uint local_f8;
  FoliageDataPlane **local_f0;
  FoliageDataPlane **local_e8;
  FoliageDataPlane **local_e0;
  FoliageLayerGraphics *local_d8;
  undefined4 local_d0;
  undefined *local_cc;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined *local_a4;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  long local_80;
  
  lVar4 = tpidr_el0;
  local_80 = *(long *)(lVar4 + 0x28);
  this_00 = *(FoliageSystemDesc **)this;
  if (*(long *)(this_00 + 0x18) != *(long *)(this_00 + 0x10)) {
    uVar14 = 0;
    do {
      uVar13 = (uint)uVar14;
      plVar8 = (long *)FoliageSystemDesc::getMultiLayer(this_00,uVar13,true);
      local_f0 = (FoliageDataPlane **)0x0;
      local_e8 = (FoliageDataPlane **)0x0;
      local_e0 = (FoliageDataPlane **)0x0;
      local_100 = *plVar8;
      uVar15 = (int)**(float **)this - 1U | (int)**(float **)this - 1U >> 1;
      uVar15 = uVar15 | uVar15 >> 2;
      uVar15 = uVar15 | uVar15 >> 4;
      uVar15 = uVar15 | uVar15 >> 8;
      uVar15 = uVar15 | uVar15 >> 0x10;
      uVar1 = uVar15 + 1;
      if (uVar15 == 0xffffffff) {
        uVar1 = 1;
      }
                    /* try { // try from 00a630d4 to 00a630e3 has its CatchHandler @ 00a634d4 */
      iVar6 = BaseTerrain::getHeightMapSize();
      uVar7 = DensityMap::getSquareSize();
      uVar15 = 0;
      if (uVar1 != 0) {
        uVar15 = (iVar6 - 1U) / uVar1;
      }
      uVar1 = 0;
      if (uVar15 != 0) {
        uVar1 = uVar7 / uVar15;
      }
      local_f8 = uVar1;
                    /* try { // try from 00a630f4 to 00a630fb has its CatchHandler @ 00a634a0 */
      this_01 = (FoliageLayerGraphics *)operator_new(0xb0);
                    /* try { // try from 00a63104 to 00a63117 has its CatchHandler @ 00a634a4 */
      FoliageLayerGraphics::FoliageLayerGraphics
                (this_01,uVar1,2,*(FoliageSystemDesc **)this,uVar13,
                 *(TerrainTransformGroup **)(this + 8),param_1);
      local_a4 = &DAT_00ff00ff;
      local_a8 = 0x42800000;
      local_98 = 0;
      local_90 = 0x100000000;
      local_88 = 0xffffffff;
                    /* try { // try from 00a6313c to 00a6314b has its CatchHandler @ 00a634a8 */
      local_d8 = this_01;
      FoliageSystemDesc::createTerrainDetailTransformGroupDesc
                (*(FoliageSystemDesc **)this,uVar13,2,(TerrainDetailTransformGroupDesc *)&local_a8);
                    /* try { // try from 00a6314c to 00a63153 has its CatchHandler @ 00a634ac */
      this_02 = (TerrainDataPlane *)operator_new(0x88);
      lVar11 = *plVar8;
      pcVar3 = (char *)(lVar11 + 0x31);
      if ((*(byte *)(lVar11 + 0x30) & 1) != 0) {
        pcVar3 = *(char **)(lVar11 + 0x40);
      }
                    /* try { // try from 00a63174 to 00a6317f has its CatchHandler @ 00a634b0 */
      TerrainDataPlane::TerrainDataPlane
                (this_02,0,pcVar3,(TerrainDetailTransformGroupDesc *)&local_a8,
                 *(TerrainTransformGroup **)(this + 8));
                    /* try { // try from 00a63180 to 00a63187 has its CatchHandler @ 00a634d8 */
      this_03 = (FoliageTransformGroup *)operator_new(0x278);
      lVar11 = *plVar8;
      pcVar3 = (char *)(lVar11 + 0x31);
      if ((*(byte *)(lVar11 + 0x30) & 1) != 0) {
        pcVar3 = *(char **)(lVar11 + 0x40);
      }
                    /* try { // try from 00a631a8 to 00a631bb has its CatchHandler @ 00a634c0 */
      FoliageTransformGroup::FoliageTransformGroup
                (this_03,pcVar3,(TerrainDetailTransformGroupDesc *)&local_a8,
                 *(TerrainTransformGroup **)(this + 8),this_02,this_01,2);
                    /* try { // try from 00a631bc to 00a631e3 has its CatchHandler @ 00a634d8 */
      this_04 = (StreamManager *)StreamManager::getInstance();
      StreamManager::addStreamable(this_04,(Streamable *)(this_03 + 0x1e0),param_1);
      (**(code **)(**(long **)(this + 8) + 0x18))(*(long **)(this + 8),this_03,0xffffffff);
                    /* try { // try from 00a631e8 to 00a631f3 has its CatchHandler @ 00a634d0 */
      lVar11 = FoliageSystemDesc::getMultiLayer(*(FoliageSystemDesc **)this,uVar13,true);
      uVar1 = (int)((ulong)(*(long *)(lVar11 + 0x10) - *(long *)(lVar11 + 8)) >> 4) * -0x49249249;
      if (uVar1 != 0) {
        uVar15 = 0;
        do {
                    /* try { // try from 00a6323c to 00a6324b has its CatchHandler @ 00a634f4 */
          pLVar9 = (Layer *)FoliageSystemDesc::getLayer
                                      (*(FoliageSystemDesc **)this,uVar13,uVar15,true);
          local_cc = &DAT_00ff00ff;
          local_c0 = 0;
          local_d0 = 0x42800000;
          local_b8 = 0x100000000;
          local_b0 = 0xffffffff;
                    /* try { // try from 00a63270 to 00a63283 has its CatchHandler @ 00a634e0 */
          FoliageSystemDesc::createTerrainDetailTransformGroupDesc
                    (*(FoliageSystemDesc **)this,uVar13,uVar15,2,
                     (TerrainDetailTransformGroupDesc *)&local_d0);
                    /* try { // try from 00a63284 to 00a6328f has its CatchHandler @ 00a634f8 */
          this_05 = (FoliageDataPlane *)operator_new(0xd8);
          pLVar12 = *(Layer **)(pLVar9 + 0x10);
          if (((byte)*pLVar9 & 1) == 0) {
            pLVar12 = pLVar9 + 1;
          }
                    /* try { // try from 00a632a8 to 00a632bb has its CatchHandler @ 00a634e4 */
          FoliageDataPlane::FoliageDataPlane
                    (this_05,(char *)pLVar12,pLVar9,(TerrainDetailTransformGroupDesc *)&local_d0,
                     *(TerrainTransformGroup **)(this + 8),this_03,uVar15);
                    /* try { // try from 00a632bc to 00a63327 has its CatchHandler @ 00a634f8 */
          TerrainDataPlane::setAssociatedTransformGroup
                    ((TerrainDataPlane *)this_05,(TerrainDetailTransformGroup *)this_03);
          TerrainTransformGroup::addDataPlane
                    (*(TerrainTransformGroup **)(this + 8),(TerrainDataPlane *)this_05);
          ppFVar5 = local_f0;
          if (local_e8 == local_e0) {
            uVar16 = (long)local_e8 - (long)local_f0;
            uVar14 = ((long)uVar16 >> 3) + 1;
            if (uVar14 >> 0x3d != 0) {
                    /* try { // try from 00a63460 to 00a63473 has its CatchHandler @ 00a634dc */
                    /* WARNING: Subroutine does not return */
              std::__ndk1::__vector_base_common<true>::__throw_length_error();
            }
            if (uVar14 <= (ulong)((long)uVar16 >> 2)) {
              uVar14 = (long)uVar16 >> 2;
            }
            if (0x7ffffffffffffff7 < uVar16) {
              uVar14 = 0x1fffffffffffffff;
            }
            if (uVar14 == 0) {
              ppFVar10 = (FoliageDataPlane **)0x0;
            }
            else {
              if (uVar14 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
                FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                            );
              }
              ppFVar10 = (FoliageDataPlane **)operator_new(uVar14 << 3);
            }
            ppFVar2 = ppFVar10 + ((long)uVar16 >> 3);
            *ppFVar2 = this_05;
            if (0 < (long)uVar16) {
              memcpy(ppFVar10,ppFVar5,uVar16);
            }
            local_e0 = ppFVar10 + uVar14;
            local_f0 = ppFVar10;
            local_e8 = ppFVar2 + 1;
            if (ppFVar5 != (FoliageDataPlane **)0x0) {
              operator_delete(ppFVar5);
            }
          }
          else {
            *local_e8 = this_05;
            local_e8 = local_e8 + 1;
          }
          uVar15 = uVar15 + 1;
        } while (uVar1 != uVar15);
      }
      plVar8 = *(long **)(this + 0x18);
      if (plVar8 == *(long **)(this + 0x20)) {
                    /* try { // try from 00a63404 to 00a6340f has its CatchHandler @ 00a634d0 */
        std::__ndk1::
        vector<FoliageSystem::MultiLayer,std::__ndk1::allocator<FoliageSystem::MultiLayer>>::
        __push_back_slow_path<FoliageSystem::MultiLayer_const&>
                  ((vector<FoliageSystem::MultiLayer,std::__ndk1::allocator<FoliageSystem::MultiLayer>>
                    *)(this + 0x10),(MultiLayer *)&local_100);
        ppFVar10 = local_f0;
        ppFVar5 = local_e8;
      }
      else {
        plVar8[3] = 0;
        plVar8[4] = 0;
        *(uint *)(plVar8 + 1) = local_f8;
        *plVar8 = local_100;
        plVar8[2] = 0;
        uVar14 = (long)local_e8 - (long)local_f0;
        ppFVar10 = local_f0;
        if (uVar14 != 0) {
          if ((long)uVar14 < 0) {
                    /* try { // try from 00a63474 to 00a6347b has its CatchHandler @ 00a63480 */
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__vector_base_common<true>::__throw_length_error();
          }
                    /* try { // try from 00a633a8 to 00a633af has its CatchHandler @ 00a63484 */
          __dest = operator_new(uVar14);
          ppFVar10 = local_f0;
          plVar8[2] = (long)__dest;
          plVar8[3] = (long)__dest;
          plVar8[4] = (long)((long)__dest + ((long)uVar14 >> 3) * 8);
          __n = (long)local_e8 - (long)local_f0;
          if (0 < (long)__n) {
            memcpy(__dest,local_f0,__n);
            __dest = (void *)((long)__dest + __n);
          }
          plVar8[3] = (long)__dest;
        }
        plVar8[5] = (long)local_d8;
        *(long **)(this + 0x18) = plVar8 + 6;
        ppFVar5 = local_e8;
      }
      local_e8 = ppFVar10;
      if (local_e8 != (FoliageDataPlane **)0x0) {
        operator_delete(local_e8);
        ppFVar5 = local_e8;
      }
      local_e8 = ppFVar5;
      this_00 = *(FoliageSystemDesc **)this;
      uVar14 = (ulong)(uVar13 + 1);
      uVar16 = (*(long *)(this_00 + 0x18) - *(long *)(this_00 + 0x10) >> 3) * -0x3333333333333333;
    } while (uVar14 <= uVar16 && uVar16 - uVar14 != 0);
  }
  if (*(long *)(lVar4 + 0x28) == local_80) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


