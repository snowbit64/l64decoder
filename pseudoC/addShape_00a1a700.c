// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addShape
// Entry Point: 00a1a700
// Size: 1248 bytes
// Signature: undefined __thiscall addShape(RenderList * this, GsShape * param_1, float param_2, float param_3, float param_4)


/* RenderList::addShape(GsShape const*, float, float, float) */

void __thiscall
RenderList::addShape(RenderList *this,GsShape *param_1,float param_2,float param_3,float param_4)

{
  uint uVar1;
  GsMaterial **ppGVar2;
  GsShape **ppGVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  RenderList *pRVar11;
  void *__dest;
  IndexedTriangleSet *pIVar12;
  char *pcVar13;
  TerrainPatchOccluderManager *this_00;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long **pplVar18;
  long *plVar19;
  ulong uVar20;
  void *__src;
  long lVar21;
  GeoMipMappingTerrain *this_01;
  undefined2 uVar22;
  undefined8 uVar23;
  IndexedTriangleSet *local_e0;
  GsShape *pGStack_d8;
  float local_d0;
  uint local_cc;
  uint local_c4;
  undefined8 local_c0;
  IndexedTriangleSet *local_b8;
  IndexedTriangleSet *local_b0;
  IndexedTriangleSet *local_a8;
  void *local_a0;
  GsShape *local_98;
  float local_90;
  float local_8c;
  float fStack_88;
  long local_80;
  
  lVar5 = tpidr_el0;
  local_80 = *(long *)(lVar5 + 0x28);
  local_98 = param_1;
  local_90 = param_2;
  local_8c = (float)computeDistanceBlendInverseAlpha(this,param_1,param_2,param_3);
  fStack_88 = param_4;
  if ((-1.0 < local_8c) && (local_8c < 1.0)) {
    uVar7 = *(uint *)(param_1 + 400);
    if ((uVar7 >> 10 & 1) == 0) {
      if (((*(uint *)(param_1 + 0x40) >> 0x10 & 1) == 0) ||
         ((*(byte *)(*(long *)(this + 0x28) + 0x3a8) >> 5 & 1) == 0)) {
        if (((*(uint *)(param_1 + 0x40) >> 0x12 & 1) == 0) ||
           ((*(byte *)(*(long *)(this + 0x28) + 0x3a8) >> 6 & 1) == 0)) {
LAB_00a1a800:
          pRVar11 = this + 0x58;
        }
        else {
          pRVar11 = this + 0xb8;
        }
      }
      else {
        this[0x50] = (RenderList)0x1;
        uVar14 = (ulong)*(ushort *)(param_1 + 0x196);
        if (*(ushort *)(param_1 + 0x196) != 0) {
          lVar21 = 0;
          uVar15 = 0;
          do {
            ppGVar2 = (GsMaterial **)(param_1 + 0x178);
            if ((int)uVar14 != 1) {
              ppGVar2 = (GsMaterial **)(*(GsMaterial **)(param_1 + 0x178) + lVar21);
            }
            if ((*ppGVar2)[100] != (GsMaterial)0x0) {
              lVar10 = GsMaterial::getMaterialAttributesHash(*ppGVar2,3,0);
              if (lVar10 != 0) goto LAB_00a1a800;
              uVar14 = (ulong)*(ushort *)(param_1 + 0x196);
            }
            uVar15 = uVar15 + 1;
            lVar21 = lVar21 + 8;
          } while (uVar15 < uVar14);
        }
        pRVar11 = this + 0x88;
      }
      FUN_00a19044(pRVar11,&local_98);
      if ((((byte)param_1[0x42] >> 1 & 1) != 0) &&
         ((*(byte *)(*(long *)(this + 0x28) + 0x3a8) >> 2 & 1) != 0)) {
        ppGVar3 = *(GsShape ***)(this + 0xf0);
        if (ppGVar3 == *(GsShape ***)(this + 0xf8)) {
          __src = *(void **)(this + 0xe8);
          uVar15 = (long)ppGVar3 - (long)__src;
          uVar14 = ((long)uVar15 >> 3) + 1;
          if (uVar14 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__vector_base_common<true>::__throw_length_error();
          }
          if (uVar14 <= (ulong)((long)uVar15 >> 2)) {
            uVar14 = (long)uVar15 >> 2;
          }
          if (0x7ffffffffffffff7 < uVar15) {
            uVar14 = 0x1fffffffffffffff;
          }
          if (uVar14 == 0) {
            __dest = (void *)0x0;
          }
          else {
            if (uVar14 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
            }
            __dest = operator_new(uVar14 << 3);
          }
          ppGVar3 = (GsShape **)((long)__dest + ((long)uVar15 >> 3) * 8);
          *ppGVar3 = param_1;
          if (0 < (long)uVar15) {
            memcpy(__dest,__src,uVar15);
          }
          *(void **)(this + 0xe8) = __dest;
          *(GsShape ***)(this + 0xf0) = ppGVar3 + 1;
          *(void **)(this + 0xf8) = (void *)((long)__dest + uVar14 * 8);
          if (__src != (void *)0x0) {
            operator_delete(__src);
          }
        }
        else {
          *ppGVar3 = param_1;
          *(GsShape ***)(this + 0xf0) = ppGVar3 + 1;
        }
      }
    }
    if (*(char *)(*(long *)(this + 0x28) + 0x3a8) < '\0') {
      if (((byte)param_1[0x11] >> 4 & 1) == 0) {
        if (((uVar7 >> 0xc & 1) != 0) &&
           (pIVar12 = (IndexedTriangleSet *)Geometry::getCollisionProxyMesh(),
           pIVar12 != (IndexedTriangleSet *)0x0)) {
          if (((uVar7 & 1) != 0) && (*this == (RenderList)0x0)) {
            pcVar13 = (char *)LogManager::getInstance();
            LogManager::infof(pcVar13,
                              "Warning: occluders can not be used with skinning (shape: %s)\n",
                              *(undefined8 *)(param_1 + 8));
            *this = (RenderList)0x1;
          }
          local_e0 = pIVar12;
          pGStack_d8 = param_1;
          local_d0 = param_2;
          FUN_00a1ae78(this + 0x100,&local_e0);
        }
      }
      else {
        lVar21 = *(long *)(param_1 + 0x170);
        if (lVar21 != 0) {
          uVar6 = GeoMipMappingTerrainPatch::getStartXPatch();
          uVar7 = GeoMipMappingTerrainPatch::getStartZPatch();
          uVar8 = GeoMipMappingTerrainPatch::getEndXPatch();
          uVar9 = GeoMipMappingTerrainPatch::getEndZPatch();
          if (uVar7 < uVar9) {
            this_01 = *(GeoMipMappingTerrain **)(lVar21 + 0x70);
            pRVar11 = this + 0x100;
            do {
              uVar1 = uVar6;
              if (uVar6 < uVar8) {
                do {
                  local_a0 = (void *)GeoMipMappingTerrain::getOccluderData(this_01,uVar1,uVar7);
                  if (local_a0 != (void *)0x0) {
                    uVar14 = *(ulong *)(this + 0x120);
                    if (uVar14 != 0) {
                      uVar15 = ((ulong)(uint)((int)local_a0 << 3) + 8 ^ (ulong)local_a0 >> 0x20) *
                               -0x622015f714c7d297;
                      uVar23 = NEON_cnt(uVar14,1);
                      uVar22 = NEON_uaddlv(uVar23,1);
                      uVar15 = (uVar15 ^ (ulong)local_a0 >> 0x20 ^ uVar15 >> 0x2f) *
                               -0x622015f714c7d297;
                      uVar16 = CONCAT62((int6)((ulong)uVar23 >> 0x10),uVar22) & 0xffffffff;
                      uVar15 = (uVar15 ^ uVar15 >> 0x2f) * -0x622015f714c7d297;
                      if (uVar16 < 2) {
                        uVar17 = uVar14 - 1 & uVar15;
                      }
                      else {
                        uVar17 = uVar15;
                        if (uVar14 <= uVar15) {
                          uVar17 = 0;
                          if (uVar14 != 0) {
                            uVar17 = uVar15 / uVar14;
                          }
                          uVar17 = uVar15 - uVar17 * uVar14;
                        }
                      }
                      pplVar18 = *(long ***)(*(long *)(this + 0x118) + uVar17 * 8);
                      if ((pplVar18 != (long **)0x0) &&
                         (plVar19 = *pplVar18, plVar19 != (long *)0x0)) {
                        do {
                          uVar20 = plVar19[1];
                          if (uVar15 - uVar20 == 0) {
                            if ((void *)plVar19[2] == local_a0) goto LAB_00a1a9fc;
                          }
                          else {
                            if (uVar16 < 2) {
                              uVar20 = uVar20 & uVar14 - 1;
                            }
                            else if (uVar14 <= uVar20) {
                              uVar4 = 0;
                              if (uVar14 != 0) {
                                uVar4 = uVar20 / uVar14;
                              }
                              uVar20 = uVar20 - uVar4 * uVar14;
                            }
                            if (uVar20 != uVar17) break;
                          }
                          plVar19 = (long *)*plVar19;
                        } while (plVar19 != (long *)0x0);
                      }
                    }
                    std::__ndk1::
                    __hash_table<void*,std::__ndk1::hash<void*>,std::__ndk1::equal_to<void*>,std::__ndk1::allocator<void*>>
                    ::__emplace_unique_key_args<void*,void*const&>
                              ((__hash_table<void*,std::__ndk1::hash<void*>,std::__ndk1::equal_to<void*>,std::__ndk1::allocator<void*>>
                                *)(this + 0x118),&local_a0,&local_a0);
                    local_b0 = (IndexedTriangleSet *)0x0;
                    local_a8 = (IndexedTriangleSet *)0x0;
                    local_c0 = 0;
                    local_b8 = (IndexedTriangleSet *)0x0;
                    local_c4 = 0;
                    this_00 = (TerrainPatchOccluderManager *)
                              TerrainPatchOccluderManager::getInstance();
                    RawTransformGroup::updateWorldTransformation();
                    TerrainPatchOccluderManager::getLODMeshes
                              (this_00,uVar1,uVar7,(Matrix4x4 *)(param_1 + 0xb8),
                               (Vector3 *)(*(long *)(this + 0x28) + 900),
                               *(float *)(*(long *)(this + 0x28) + 1000),&local_a8,
                               (uint *)((long)&local_c0 + 4),&local_b8,(uint *)&local_c0,&local_b0,
                               &local_c4);
                    if (local_a8 != (IndexedTriangleSet *)0x0) {
                      local_e0 = local_a8;
                      local_cc = local_c0._4_4_;
                      pGStack_d8 = param_1;
                      local_d0 = param_2;
                      FUN_00a1ae78(pRVar11,&local_e0);
                    }
                    if (local_b0 != (IndexedTriangleSet *)0x0) {
                      local_e0 = local_b0;
                      local_cc = local_c4;
                      pGStack_d8 = param_1;
                      local_d0 = param_2;
                      FUN_00a1ae78(pRVar11,&local_e0);
                    }
                    if (local_b8 != (IndexedTriangleSet *)0x0) {
                      local_e0 = local_b8;
                      local_cc = (uint)local_c0;
                      pGStack_d8 = param_1;
                      local_d0 = param_2;
                      FUN_00a1ae78(pRVar11,&local_e0);
                    }
                  }
LAB_00a1a9fc:
                  uVar1 = uVar1 + 1;
                } while (uVar1 != uVar8);
              }
              uVar7 = uVar7 + 1;
            } while (uVar7 != uVar9);
          }
        }
      }
    }
  }
  if (*(long *)(lVar5 + 0x28) != local_80) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


