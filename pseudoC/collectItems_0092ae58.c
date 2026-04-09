// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: collectItems
// Entry Point: 0092ae58
// Size: 5224 bytes
// Signature: undefined __cdecl collectItems(ScenegraphNode * param_1, map * param_2, map * param_3, map * param_4, map * param_5, map * param_6, map * param_7, map * param_8, map * param_9, map * param_10, set * param_11, map * param_12, set * param_13, set * param_14, vector * param_15, uint * param_16, uint * param_17, ulonglong param_18, bool param_19, bool param_20)


/* WARNING: Type propagation algorithm not settling */
/* SceneSave::collectItems(ScenegraphNode*, std::__ndk1::map<Geometry*, unsigned int,
   std::__ndk1::less<Geometry*>, std::__ndk1::allocator<std::__ndk1::pair<Geometry* const, unsigned
   int> > >&, std::__ndk1::map<IndexedTriangleSet*, SceneSave::I3DShapeObject,
   std::__ndk1::less<IndexedTriangleSet*>,
   std::__ndk1::allocator<std::__ndk1::pair<IndexedTriangleSet* const, SceneSave::I3DShapeObject> >
   >&, std::__ndk1::map<DestructionGeometryShared*, SceneSave::I3DShapeObject,
   std::__ndk1::less<DestructionGeometryShared*>,
   std::__ndk1::allocator<std::__ndk1::pair<DestructionGeometryShared* const,
   SceneSave::I3DShapeObject> > >&, std::__ndk1::map<NavigationMeshScenegraphNode*, unsigned int,
   std::__ndk1::less<NavigationMeshScenegraphNode*>,
   std::__ndk1::allocator<std::__ndk1::pair<NavigationMeshScenegraphNode* const, unsigned int> > >&,
   std::__ndk1::map<SceneSave::TriangleGeometryHash, unsigned int,
   std::__ndk1::less<SceneSave::TriangleGeometryHash>,
   std::__ndk1::allocator<std::__ndk1::pair<SceneSave::TriangleGeometryHash const, unsigned int> >
   >&, std::__ndk1::map<SceneSave::SplitAttachmentsHash, unsigned int,
   std::__ndk1::less<SceneSave::SplitAttachmentsHash>,
   std::__ndk1::allocator<std::__ndk1::pair<SceneSave::SplitAttachmentsHash const, unsigned int> >
   >&, std::__ndk1::map<SceneSave::TriangleGeometryHash, unsigned int,
   std::__ndk1::less<SceneSave::TriangleGeometryHash>,
   std::__ndk1::allocator<std::__ndk1::pair<SceneSave::TriangleGeometryHash const, unsigned int> >
   >&, std::__ndk1::map<SharedParticleSystemDesc, unsigned int,
   std::__ndk1::less<SharedParticleSystemDesc>,
   std::__ndk1::allocator<std::__ndk1::pair<SharedParticleSystemDesc const, unsigned int> > >&,
   std::__ndk1::map<unsigned int, SceneSave::ShapeCooking, std::__ndk1::less<unsigned int>,
   std::__ndk1::allocator<std::__ndk1::pair<unsigned int const, SceneSave::ShapeCooking> > >&,
   std::__ndk1::set<GsMaterial*, std::__ndk1::less<GsMaterial*>, std::__ndk1::allocator<GsMaterial*>
   >&, std::__ndk1::map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, SceneSave::SerializeFile,
   std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, SceneSave::SerializeFile> >
   >&, std::__ndk1::set<CharacterSet*, std::__ndk1::less<CharacterSet*>,
   std::__ndk1::allocator<CharacterSet*> >&, std::__ndk1::set<TransformGroup*,
   std::__ndk1::less<TransformGroup*>, std::__ndk1::allocator<TransformGroup*> >&,
   std::__ndk1::vector<TransformGroup*, std::__ndk1::allocator<TransformGroup*> >&, unsigned int&,
   unsigned int&, unsigned long long, bool, bool) */

void SceneSave::collectItems
               (ScenegraphNode *param_1,map *param_2,map *param_3,map *param_4,map *param_5,
               map *param_6,map *param_7,map *param_8,map *param_9,map *param_10,set *param_11,
               map *param_12,set *param_13,set *param_14,vector *param_15,uint *param_16,
               uint *param_17,ulonglong param_18,bool param_19,bool param_20)

{
  ushort *puVar1;
  byte bVar2;
  GsMaterial **ppGVar3;
  ScenegraphNode **ppSVar4;
  ushort uVar5;
  long lVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  long *plVar10;
  map *pmVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 uVar14;
  size_t sVar15;
  void *pvVar16;
  GsMaterial *pGVar17;
  char *pcVar18;
  bool bVar19;
  map **ppmVar20;
  long *plVar21;
  ulong uVar22;
  long *plVar23;
  long **pplVar24;
  map **ppmVar25;
  map **ppmVar26;
  long lVar27;
  long lVar28;
  uint uVar29;
  long **pplVar30;
  long lVar31;
  long **pplVar32;
  ulong uVar33;
  void *pvVar34;
  uint uVar35;
  undefined4 uVar36;
  ulonglong local_218;
  long *local_208;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  long *local_1f8;
  long *local_1f0;
  undefined8 uStack_1e8;
  void *local_1e0;
  uint local_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  void *local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  byte local_150;
  void *local_140;
  undefined8 local_138;
  long *plStack_130;
  uint local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  void *local_110;
  uint local_108;
  undefined4 uStack_104;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  byte local_a0;
  void *local_90;
  undefined8 local_88;
  long *plStack_80;
  long local_78;
  
  lVar6 = tpidr_el0;
  local_78 = *(long *)(lVar6 + 0x28);
  local_218 = param_18;
  if ((*(ulong *)(param_1 + 0x10) & param_18) == 0) goto LAB_0092bfd0;
  uVar35 = (uint)*(ulong *)(param_1 + 0x10);
  if ((uVar35 >> 5 & 1) != 0) {
    if (((byte)param_1[0x41] >> 3 & 1) != 0) {
      TransformGroup::updateEulerFromMatrix();
    }
    bVar19 = true;
    bVar7 = !param_19;
    param_19 = bVar19;
    if (((bVar7) && (*(float *)(param_1 + 0x148) == 1.0)) && (*(float *)(param_1 + 0x14c) == 1.0)) {
      param_19 = *(float *)(param_1 + 0x150) != 1.0;
    }
    lVar13 = RawTransformGroup::getPhysicsObject();
    if ((lVar13 != 0) && ((*(uint *)(lVar13 + 8) >> 9 & 1) != 0)) {
      param_20 = (*(uint *)(lVar13 + 8) & 0x1180) != 0;
    }
  }
  if ((uVar35 >> 0xb & 1) != 0) {
    plVar23 = *(long **)(param_1 + 0x170);
    if (plVar23 != (long *)0x0) {
      uVar9 = *(uint *)(plVar23 + 6);
      if ((uVar9 >> 7 & 1) == 0) {
        pplVar32 = (long **)(param_2 + 8);
        pplVar24 = (long **)*pplVar32;
        pplVar30 = pplVar32;
        if (pplVar24 != (long **)0x0) {
          do {
            if (pplVar24[4] >= plVar23) {
              pplVar30 = pplVar24;
            }
            pplVar24 = (long **)pplVar24[pplVar24[4] < plVar23];
          } while (pplVar24 != (long **)0x0);
          if ((pplVar30 != pplVar32) && (pplVar30[4] <= plVar23)) goto LAB_0092b624;
        }
        if ((uVar9 >> 10 & 1) == 0) {
          if ((uVar9 >> 9 & 1) == 0) {
            if ((uVar9 & 1) == 0) {
              if ((uVar9 >> 1 & 1) == 0) {
                uVar29 = *param_16;
                *param_16 = uVar29 + 1;
              }
              else {
                ParticleSystemDesc::ParticleSystemDesc((ParticleSystemDesc *)&local_120);
                    /* try { // try from 0092b434 to 0092b447 has its CatchHandler @ 0092c324 */
                ParticleSystemDesc::setToDefault();
                ParticleSystem::saveToDesc
                          ((ParticleSystem *)plVar23,(ParticleSystemDesc *)&local_120);
                if (plStack_80 != (long *)0x0) {
                  ppmVar25 = (map **)(param_3 + 8);
                  ppmVar26 = (map **)*ppmVar25;
                  ppmVar20 = ppmVar25;
                  if (ppmVar26 != (map **)0x0) {
                    do {
                      if (ppmVar26[4] >= plStack_80) {
                        ppmVar20 = ppmVar26;
                      }
                      ppmVar26 = (map **)ppmVar26[ppmVar26[4] < plStack_80];
                    } while (ppmVar26 != (map **)0x0);
                    if ((ppmVar20 != ppmVar25) && (ppmVar20[4] <= plStack_80)) goto LAB_0092c1f8;
                  }
                  CRC64::initTable();
                  local_1f8 = (long *)0xffffffffffffffff;
                    /* try { // try from 0092b4a8 to 0092b4af has its CatchHandler @ 0092c304 */
                  (**(code **)(*plStack_80 + 0x10))(plStack_80,&local_1f8);
                  local_208 = local_1f8;
                    /* try { // try from 0092b4bc to 0092b4bf has its CatchHandler @ 0092c300 */
                  uVar22 = IndexedTriangleSet::getNumIndices();
                  uStack_200 = (undefined4)((uVar22 & 0xffffffff) / 3);
                    /* try { // try from 0092b4d4 to 0092b4e3 has its CatchHandler @ 0092c2fc */
                  pmVar11 = (map *)FUN_0092c394(param_8,&local_208);
                  if (param_8 + 8 == pmVar11) {
                    uVar9 = *param_16;
                    uStack_1c8 = CONCAT44(uStack_1fc,uStack_200);
                    local_1c0 = (void *)CONCAT44(local_1c0._4_4_,uVar9);
                    local_1d0 = local_208;
                    *param_16 = uVar9 + 1;
                    /* try { // try from 0092c164 to 0092c173 has its CatchHandler @ 0092c2c0 */
                    std::__ndk1::
                    __tree<std::__ndk1::__value_type<SceneSave::TriangleGeometryHash,unsigned_int>,std::__ndk1::__map_value_compare<SceneSave::TriangleGeometryHash,std::__ndk1::__value_type<SceneSave::TriangleGeometryHash,unsigned_int>,std::__ndk1::less<SceneSave::TriangleGeometryHash>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<SceneSave::TriangleGeometryHash,unsigned_int>>>
                    ::
                    __emplace_unique_key_args<SceneSave::TriangleGeometryHash,std::__ndk1::pair<SceneSave::TriangleGeometryHash,unsigned_int>>
                              ((__tree<std::__ndk1::__value_type<SceneSave::TriangleGeometryHash,unsigned_int>,std::__ndk1::__map_value_compare<SceneSave::TriangleGeometryHash,std::__ndk1::__value_type<SceneSave::TriangleGeometryHash,unsigned_int>,std::__ndk1::less<SceneSave::TriangleGeometryHash>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<SceneSave::TriangleGeometryHash,unsigned_int>>>
                                *)param_8,(TriangleGeometryHash *)&local_1d0,(pair *)&local_1d0);
                  }
                  else {
                    uVar9 = *(uint *)(pmVar11 + 0x30);
                  }
                  local_1d8 = 0;
                  local_1f0 = (long *)0x0;
                  uStack_1e8 = 0;
                  local_1e0 = (void *)0x0;
                    /* try { // try from 0092c188 to 0092c19f has its CatchHandler @ 0092c30c */
                  std::__ndk1::
                  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                  assign((char *)&local_1f0);
                  std::__ndk1::
                  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                  append((char *)&local_1f0);
                  local_1d0 = plStack_80;
                  local_1d8 = uVar9;
                    /* try { // try from 0092c1b4 to 0092c1bb has its CatchHandler @ 0092c2f8 */
                  std::__ndk1::
                  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                  basic_string((basic_string *)&uStack_1c8);
                  local_1b0 = CONCAT44(local_1b0._4_4_,local_1d8);
                    /* try { // try from 0092c1c4 to 0092c1d3 has its CatchHandler @ 0092c2e0 */
                  std::__ndk1::
                  __tree<std::__ndk1::__value_type<IndexedTriangleSet*,SceneSave::I3DShapeObject>,std::__ndk1::__map_value_compare<IndexedTriangleSet*,std::__ndk1::__value_type<IndexedTriangleSet*,SceneSave::I3DShapeObject>,std::__ndk1::less<IndexedTriangleSet*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<IndexedTriangleSet*,SceneSave::I3DShapeObject>>>
                  ::
                  __emplace_unique_key_args<IndexedTriangleSet*,std::__ndk1::pair<IndexedTriangleSet*,SceneSave::I3DShapeObject>>
                            ((__tree<std::__ndk1::__value_type<IndexedTriangleSet*,SceneSave::I3DShapeObject>,std::__ndk1::__map_value_compare<IndexedTriangleSet*,std::__ndk1::__value_type<IndexedTriangleSet*,SceneSave::I3DShapeObject>,std::__ndk1::less<IndexedTriangleSet*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<IndexedTriangleSet*,SceneSave::I3DShapeObject>>>
                              *)param_3,(IndexedTriangleSet **)&local_1d0,(pair *)&local_1d0);
                  if ((uStack_1c8 & 1) != 0) {
                    operator_delete(local_1b8);
                  }
                  if (((ulong)local_1f0 & 1) != 0) {
                    operator_delete(local_1e0);
                  }
                }
LAB_0092c1f8:
                    /* try { // try from 0092c1f8 to 0092c203 has its CatchHandler @ 0092c308 */
                pmVar11 = (map *)FUN_0092c544(param_9,&local_120);
                if (param_9 + 8 == pmVar11) {
                  uVar29 = *param_16;
                  *param_16 = uVar29 + 1;
                  uStack_178 = uStack_c8;
                  local_180 = uStack_d0;
                  uStack_168 = uStack_b8;
                  uStack_170 = local_c0;
                  uStack_158 = uStack_a8;
                  local_160 = uStack_b0;
                  local_1b8 = (void *)CONCAT44(uStack_104,local_108);
                  uStack_1c8 = uStack_118;
                  local_1d0 = local_120;
                  local_1c0 = local_110;
                  uStack_1a8 = uStack_f8;
                  local_1b0 = local_100;
                  uStack_198 = uStack_e8;
                  local_1a0 = uStack_f0;
                  uStack_188 = uStack_d8;
                  uStack_190 = local_e0;
                    /* try { // try from 0092c25c to 0092c25f has its CatchHandler @ 0092c2dc */
                  std::__ndk1::
                  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                  basic_string((basic_string *)&local_150);
                  plStack_130 = plStack_80;
                  local_138 = local_88;
                    /* try { // try from 0092c26c to 0092c277 has its CatchHandler @ 0092c2c4 */
                  local_128 = uVar29;
                  std::__ndk1::
                  __tree<std::__ndk1::__value_type<SharedParticleSystemDesc,unsigned_int>,std::__ndk1::__map_value_compare<SharedParticleSystemDesc,std::__ndk1::__value_type<SharedParticleSystemDesc,unsigned_int>,std::__ndk1::less<SharedParticleSystemDesc>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<SharedParticleSystemDesc,unsigned_int>>>
                  ::__emplace_unique_impl<std::__ndk1::pair<ParticleSystemDesc,unsigned_int>>
                            ((__tree<std::__ndk1::__value_type<SharedParticleSystemDesc,unsigned_int>,std::__ndk1::__map_value_compare<SharedParticleSystemDesc,std::__ndk1::__value_type<SharedParticleSystemDesc,unsigned_int>,std::__ndk1::less<SharedParticleSystemDesc>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<SharedParticleSystemDesc,unsigned_int>>>
                              *)param_9,(pair *)&local_1d0);
                  if ((local_150 & 1) != 0) {
                    operator_delete(local_140);
                  }
                }
                else {
                  uVar29 = *(uint *)(pmVar11 + 0xa0);
                }
                if ((local_a0 & 1) != 0) {
                  operator_delete(local_90);
                }
              }
            }
            else {
              CRC64::initTable();
              plVar21 = (long *)0xffffffffffffffff;
              local_1f0 = (long *)0xffffffffffffffff;
              plVar10 = (long *)Geometry::getCollisionProxyMesh();
              if (plVar10 == (long *)0x0) {
                uVar36 = 0;
              }
              else {
                uVar22 = IndexedTriangleSet::getNumIndices();
                uVar36 = (undefined4)((uVar22 & 0xffffffff) / 3);
                (**(code **)(*plVar10 + 0x10))(plVar10,&local_1f0);
                plVar21 = local_1f0;
              }
              uStack_118 = CONCAT44(uStack_118._4_4_,uVar36);
              local_120 = plVar21;
              pmVar11 = (map *)FUN_0092c394(param_8,&local_120);
              if (param_8 + 8 == pmVar11) {
                uVar29 = *param_16;
                local_1c0 = (void *)CONCAT44(local_1c0._4_4_,uVar29);
                uStack_1c8 = uStack_118;
                local_1d0 = local_120;
                *param_16 = uVar29 + 1;
                std::__ndk1::
                __tree<std::__ndk1::__value_type<SceneSave::TriangleGeometryHash,unsigned_int>,std::__ndk1::__map_value_compare<SceneSave::TriangleGeometryHash,std::__ndk1::__value_type<SceneSave::TriangleGeometryHash,unsigned_int>,std::__ndk1::less<SceneSave::TriangleGeometryHash>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<SceneSave::TriangleGeometryHash,unsigned_int>>>
                ::
                __emplace_unique_key_args<SceneSave::TriangleGeometryHash,std::__ndk1::pair<SceneSave::TriangleGeometryHash,unsigned_int>>
                          ((__tree<std::__ndk1::__value_type<SceneSave::TriangleGeometryHash,unsigned_int>,std::__ndk1::__map_value_compare<SceneSave::TriangleGeometryHash,std::__ndk1::__value_type<SceneSave::TriangleGeometryHash,unsigned_int>,std::__ndk1::less<SceneSave::TriangleGeometryHash>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<SceneSave::TriangleGeometryHash,unsigned_int>>>
                            *)param_8,(TriangleGeometryHash *)&local_1d0,(pair *)&local_1d0);
              }
              else {
                uVar29 = *(uint *)(pmVar11 + 0x30);
              }
            }
          }
          else {
            lVar13 = plVar23[0x12];
            lVar31 = plVar23[0x13];
            CRC64::initTable();
            local_1f0 = (long *)0xffffffffffffffff;
            iVar8 = (int)((ulong)(lVar31 - lVar13) >> 2);
            if (iVar8 == 0) {
              lVar27 = plVar23[0xd];
            }
            else {
              lVar27 = plVar23[0xd];
              uVar22 = 0;
              local_1f0 = (long *)0xffffffffffffffff;
              do {
                puVar1 = (ushort *)(plVar23[0x12] + uVar22 * 4);
                lVar28 = 0;
                uVar5 = *puVar1;
                uVar33 = *(ulong *)(CRC64::s_t + ((ulong)((uint)local_1f0 ^ (uint)uVar5) & 0xff) * 8
                                   ) ^ (ulong)local_1f0 >> 8;
                local_1f0 = (long *)(*(ulong *)(CRC64::s_t +
                                               (uVar33 & 0xff ^ (ulong)(uVar5 >> 8)) * 8) ^
                                    uVar33 >> 8);
                do {
                  uVar9 = *(uint *)(*(long *)(lVar27 + 0x10) + (ulong)puVar1[1] * 0x50 + lVar28);
                  lVar28 = lVar28 + 4;
                  uVar33 = *(ulong *)(CRC64::s_t + ((ulong)((uint)local_1f0 ^ uVar9) & 0xff) * 8) ^
                           (ulong)local_1f0 >> 8;
                  uVar33 = *(ulong *)(CRC64::s_t + ((ulong)((uint)uVar33 ^ uVar9 >> 8) & 0xff) * 8)
                           ^ uVar33 >> 8;
                  uVar33 = *(ulong *)(CRC64::s_t +
                                     ((ulong)((uint)uVar33 ^ uVar9 >> 0x10) & 0xff) * 8) ^
                           uVar33 >> 8;
                  local_1f0 = (long *)(*(ulong *)(CRC64::s_t +
                                                 (uVar33 & 0xff ^ (ulong)(uVar9 >> 0x18)) * 8) ^
                                      uVar33 >> 8);
                } while ((int)lVar28 != 0x40);
                uVar22 = uVar22 + 1;
              } while (uVar22 != ((ulong)(lVar31 - lVar13) >> 2 & 0xffffffff));
            }
            (**(code **)(**(long **)(lVar27 + 0x28) + 0x10))(*(long **)(lVar27 + 0x28),&local_1f0);
            uStack_118 = CONCAT44(uStack_118._4_4_,iVar8);
            local_120 = local_1f0;
            pmVar11 = (map *)FUN_0092c414(param_7,&local_120);
            if (param_7 + 8 == pmVar11) {
              uVar29 = *param_16;
              local_1c0 = (void *)CONCAT44(local_1c0._4_4_,uVar29);
              uStack_1c8 = uStack_118;
              local_1d0 = local_120;
              *param_16 = uVar29 + 1;
              std::__ndk1::
              __tree<std::__ndk1::__value_type<SceneSave::SplitAttachmentsHash,unsigned_int>,std::__ndk1::__map_value_compare<SceneSave::SplitAttachmentsHash,std::__ndk1::__value_type<SceneSave::SplitAttachmentsHash,unsigned_int>,std::__ndk1::less<SceneSave::SplitAttachmentsHash>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<SceneSave::SplitAttachmentsHash,unsigned_int>>>
              ::
              __emplace_unique_key_args<SceneSave::SplitAttachmentsHash,std::__ndk1::pair<SceneSave::SplitAttachmentsHash,unsigned_int>>
                        ((__tree<std::__ndk1::__value_type<SceneSave::SplitAttachmentsHash,unsigned_int>,std::__ndk1::__map_value_compare<SceneSave::SplitAttachmentsHash,std::__ndk1::__value_type<SceneSave::SplitAttachmentsHash,unsigned_int>,std::__ndk1::less<SceneSave::SplitAttachmentsHash>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<SceneSave::SplitAttachmentsHash,unsigned_int>>>
                          *)param_7,(SplitAttachmentsHash *)&local_1d0,(pair *)&local_1d0);
            }
            else {
              uVar29 = *(uint *)(pmVar11 + 0x30);
            }
          }
        }
        else {
          CRC64::initTable();
          plVar21 = (long *)0xffffffffffffffff;
          local_120 = (long *)0xffffffffffffffff;
          plVar10 = (long *)Geometry::getCollisionProxyMesh();
          if (plVar10 == (long *)0x0) {
            uVar9 = 0;
          }
          else {
            uVar22 = IndexedTriangleSet::getNumIndices();
            uVar9 = (uint)((uVar22 & 0xffffffff) / 3);
            (**(code **)(*plVar10 + 0x10))(plVar10,&local_120);
            plVar21 = local_120;
          }
          ppmVar25 = (map **)(param_6 + 8);
          ppmVar26 = (map **)*ppmVar25;
          ppmVar20 = ppmVar25;
          if (ppmVar26 != (map **)0x0) {
            do {
              bVar7 = *(uint *)(ppmVar26 + 5) < uVar9;
              if ((long *)ppmVar26[4] != plVar21) {
                bVar7 = ppmVar26[4] < plVar21;
              }
              lVar13 = 8;
              if (!bVar7) {
                lVar13 = 0;
                ppmVar20 = ppmVar26;
              }
              ppmVar26 = *(map ***)((long)ppmVar26 + lVar13);
            } while (ppmVar26 != (map **)0x0);
            if (ppmVar20 != ppmVar25) {
              bVar7 = *(uint *)(ppmVar20 + 5) <= uVar9;
              if (plVar21 != (long *)ppmVar20[4]) {
                bVar7 = ppmVar20[4] <= plVar21;
              }
              if (bVar7) {
                uVar29 = *(uint *)(ppmVar20 + 6);
                goto LAB_0092b564;
              }
            }
          }
          uVar29 = *param_16;
          uStack_1c8 = CONCAT44(uStack_1c8._4_4_,uVar9);
          local_1c0 = (void *)CONCAT44(local_1c0._4_4_,uVar29);
          *param_16 = uVar29 + 1;
          local_1d0 = plVar21;
          std::__ndk1::
          __tree<std::__ndk1::__value_type<SceneSave::TriangleGeometryHash,unsigned_int>,std::__ndk1::__map_value_compare<SceneSave::TriangleGeometryHash,std::__ndk1::__value_type<SceneSave::TriangleGeometryHash,unsigned_int>,std::__ndk1::less<SceneSave::TriangleGeometryHash>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<SceneSave::TriangleGeometryHash,unsigned_int>>>
          ::
          __emplace_unique_key_args<SceneSave::TriangleGeometryHash,std::__ndk1::pair<SceneSave::TriangleGeometryHash,unsigned_int>>
                    ((__tree<std::__ndk1::__value_type<SceneSave::TriangleGeometryHash,unsigned_int>,std::__ndk1::__map_value_compare<SceneSave::TriangleGeometryHash,std::__ndk1::__value_type<SceneSave::TriangleGeometryHash,unsigned_int>,std::__ndk1::less<SceneSave::TriangleGeometryHash>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<SceneSave::TriangleGeometryHash,unsigned_int>>>
                      *)param_6,(TriangleGeometryHash *)&local_1d0,(pair *)&local_1d0);
        }
LAB_0092b564:
        if (*pplVar32 == (long *)0x0) {
          plVar21 = *pplVar32;
          pplVar30 = pplVar32;
        }
        else {
          pplVar24 = (long **)*pplVar32;
          pplVar30 = (long **)(param_2 + 8);
          do {
            while (pplVar32 = pplVar24, plVar23 < pplVar32[4]) {
              pplVar24 = (long **)*pplVar32;
              pplVar30 = pplVar32;
              if ((long **)*pplVar32 == (long **)0x0) {
                plVar21 = *pplVar32;
                goto joined_r0x0092b5ac;
              }
            }
            if (plVar23 <= pplVar32[4]) break;
            pplVar30 = pplVar32 + 1;
            pplVar24 = (long **)*pplVar30;
          } while (*pplVar30 != (long *)0x0);
          plVar21 = *pplVar30;
        }
joined_r0x0092b5ac:
        if (plVar21 == (long *)0x0) {
          puVar12 = (undefined8 *)operator_new(0x30);
          *(uint *)(puVar12 + 5) = uVar29;
          *puVar12 = 0;
          puVar12[1] = 0;
          puVar12[2] = pplVar32;
          puVar12[4] = plVar23;
          *pplVar30 = puVar12;
          if (**(long **)param_2 != 0) {
            *(long *)param_2 = **(long **)param_2;
            puVar12 = *pplVar30;
          }
          std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                    (*(__tree_node_base **)(param_2 + 8),(__tree_node_base *)puVar12);
          *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + 1;
        }
      }
      else {
        plVar21 = (long *)DestructionGeometry::getShared();
        pplVar32 = (long **)(param_4 + 8);
        pplVar24 = (long **)*pplVar32;
        pplVar30 = pplVar32;
        if (pplVar24 != (long **)0x0) {
          do {
            if (pplVar24[4] >= plVar21) {
              pplVar30 = pplVar24;
            }
            pplVar24 = (long **)pplVar24[pplVar24[4] < plVar21];
          } while (pplVar24 != (long **)0x0);
          if ((pplVar30 != pplVar32) && (pplVar30[4] <= plVar21)) goto LAB_0092b624;
        }
        local_108 = 0;
        local_120 = (long *)0x0;
        uStack_118 = 0;
        local_110 = (void *)0x0;
                    /* try { // try from 0092b050 to 0092b057 has its CatchHandler @ 0092c354 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign((char *)&local_120);
        local_108 = *param_16;
        *param_16 = local_108 + 1;
                    /* try { // try from 0092b068 to 0092b087 has its CatchHandler @ 0092c35c */
        local_1d0 = (long *)DestructionGeometry::getShared();
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string((basic_string *)&uStack_1c8);
        uVar9 = local_108;
        local_1b0 = CONCAT44(local_1b0._4_4_,local_108);
        if (*pplVar32 == (long *)0x0) {
          plVar21 = *pplVar32;
          pplVar30 = pplVar32;
        }
        else {
          pplVar24 = (long **)*pplVar32;
          pplVar30 = (long **)(param_4 + 8);
          do {
            while (pplVar32 = pplVar24, local_1d0 < pplVar32[4]) {
              pplVar24 = (long **)*pplVar32;
              pplVar30 = pplVar32;
              if ((long **)*pplVar32 == (long **)0x0) {
                plVar21 = *pplVar32;
                goto joined_r0x0092b0e0;
              }
            }
            if (local_1d0 <= pplVar32[4]) break;
            pplVar30 = pplVar32 + 1;
            pplVar24 = (long **)*pplVar30;
          } while ((long **)*pplVar30 != (long **)0x0);
          plVar21 = *pplVar30;
        }
joined_r0x0092b0e0:
        if (plVar21 == (long *)0x0) {
                    /* try { // try from 0092b230 to 0092b23b has its CatchHandler @ 0092c338 */
          puVar12 = (undefined8 *)operator_new(0x48);
          pvVar16 = local_1b8;
          pvVar34 = local_1c0;
          sVar15 = uStack_1c8;
          *(uint *)(puVar12 + 8) = uVar9;
          *puVar12 = 0;
          puVar12[1] = 0;
          puVar12[4] = local_1d0;
          uStack_1c8 = 0;
          local_1c0 = (void *)0x0;
          local_1b8 = (void *)0x0;
          puVar12[6] = pvVar34;
          puVar12[5] = sVar15;
          puVar12[7] = pvVar16;
          puVar12[2] = pplVar32;
          *pplVar30 = puVar12;
          if (**(long **)param_4 != 0) {
            *(long *)param_4 = **(long **)param_4;
            puVar12 = *pplVar30;
          }
          std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                    (*(__tree_node_base **)(param_4 + 8),(__tree_node_base *)puVar12);
          *(long *)(param_4 + 0x10) = *(long *)(param_4 + 0x10) + 1;
        }
        if ((uStack_1c8 & 1) != 0) {
          operator_delete(local_1b8);
        }
        if (((ulong)local_120 & 1) != 0) {
          operator_delete(local_110);
        }
      }
LAB_0092b624:
      if ((((*(uint *)(plVar23 + 6) & 0x401) == 1) &&
          (lVar13 = RawTransformGroup::getPhysicsObject(), lVar13 != 0)) &&
         (uVar9 = *(uint *)(lVar13 + 8), (uVar9 >> 3 & 1) != 0)) {
        bVar2 = (uVar9 & 0x1180) != 0;
        if ((uVar9 & 0x400) != 0) {
          bVar2 = param_20;
        }
        RawTransformGroup::updateWorldTransformation();
        Matrix4x4::copyScale((Matrix4x4 *)(param_1 + 0xb8),(Vector3 *)&local_1d0);
        ppmVar25 = (map **)(param_2 + 8);
        ppmVar26 = (map **)*ppmVar25;
        ppmVar20 = ppmVar25;
        if (ppmVar26 != (map **)0x0) {
          do {
            if (ppmVar26[4] >= plVar23) {
              ppmVar20 = ppmVar26;
            }
            ppmVar26 = (map **)ppmVar26[ppmVar26[4] < plVar23];
          } while (ppmVar26 != (map **)0x0);
          if ((ppmVar20 != ppmVar25) && (ppmVar20[4] <= plVar23)) {
            uVar14 = std::__ndk1::
                     map<unsigned_int,SceneSave::ShapeCooking,std::__ndk1::less<unsigned_int>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_int_const,SceneSave::ShapeCooking>>>
                     ::operator[]((map<unsigned_int,SceneSave::ShapeCooking,std::__ndk1::less<unsigned_int>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_int_const,SceneSave::ShapeCooking>>>
                                   *)param_10,(uint *)(ppmVar20 + 5));
            local_120 = (long *)(CONCAT71(local_120._1_7_,bVar2) & 0xffffffffffffff01);
            FUN_0092c7a4(uVar14,&local_120);
          }
        }
      }
    }
    uVar22 = (ulong)*(ushort *)(param_1 + 0x196);
    if (*(ushort *)(param_1 + 0x196) != 0) {
      lVar13 = 0;
      uVar33 = 0;
      do {
        ppGVar3 = (GsMaterial **)(param_1 + 0x178);
        if ((int)uVar22 != 1) {
          ppGVar3 = (GsMaterial **)(*(GsMaterial **)(param_1 + 0x178) + lVar13);
        }
        if (*ppGVar3 != (GsMaterial *)0x0) {
          collectMaterial(*ppGVar3,param_11,param_12,param_17);
          uVar22 = (ulong)*(ushort *)(param_1 + 0x196);
        }
        uVar33 = uVar33 + 1;
        lVar13 = lVar13 + 8;
      } while (uVar33 < uVar22);
    }
  }
  if ((uVar35 >> 5 & 1) != 0) {
    pplVar30 = (long **)(param_14 + 8);
    pplVar24 = (long **)*pplVar30;
    pplVar32 = pplVar30;
    if (pplVar24 != (long **)0x0) {
      pplVar30 = (long **)(param_14 + 8);
      do {
        while (pplVar32 = pplVar24, param_1 < pplVar32[4]) {
          pplVar30 = pplVar32;
          pplVar24 = (long **)*pplVar32;
          if ((long **)*pplVar32 == (long **)0x0) {
            plVar23 = *pplVar32;
            goto joined_r0x0092b7c0;
          }
        }
        if (param_1 <= pplVar32[4]) break;
        pplVar30 = pplVar32 + 1;
        pplVar24 = (long **)*pplVar30;
      } while ((long **)*pplVar30 != (long **)0x0);
    }
    plVar23 = *pplVar30;
joined_r0x0092b7c0:
    if (plVar23 == (long *)0x0) {
      plVar23 = (long *)operator_new(0x28);
      plVar23[4] = (long)param_1;
      *plVar23 = 0;
      plVar23[1] = 0;
      plVar23[2] = (long)pplVar32;
      *pplVar30 = plVar23;
      if (**(long **)param_14 != 0) {
        *(long *)param_14 = **(long **)param_14;
        plVar23 = *pplVar30;
      }
      std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                (*(__tree_node_base **)(param_14 + 8),(__tree_node_base *)plVar23);
      *(long *)(param_14 + 0x10) = *(long *)(param_14 + 0x10) + 1;
      pcVar18 = "";
      if (*(char **)(param_1 + 0x100) != (char *)0x0) {
        pcVar18 = *(char **)(param_1 + 0x100);
      }
      if (*pcVar18 != '\0') {
        sVar15 = strlen(pcVar18);
        if (0xffffffffffffffef < sVar15) goto LAB_0092c2a0;
        if (sVar15 < 0x17) {
          pvVar34 = (void *)((ulong)&local_1d0 | 1);
          local_1d0 = (long *)CONCAT71(local_1d0._1_7_,(char)((int)sVar15 << 1));
          if (sVar15 != 0) goto LAB_0092b854;
        }
        else {
          uVar22 = sVar15 + 0x10 & 0xfffffffffffffff0;
          pvVar34 = operator_new(uVar22);
          local_1d0 = (long *)(uVar22 | 1);
          uStack_1c8 = sVar15;
          local_1c0 = pvVar34;
LAB_0092b854:
          memcpy(pvVar34,pcVar18,sVar15);
        }
        *(undefined *)((long)pvVar34 + sVar15) = 0;
                    /* try { // try from 0092b868 to 0092b87f has its CatchHandler @ 0092c350 */
        addToFileMap(param_12,(basic_string *)&local_1d0,4,false,param_17);
        if (((ulong)local_1d0 & 1) != 0) {
          operator_delete(local_1c0);
        }
      }
      ppSVar4 = *(ScenegraphNode ***)(param_15 + 8);
      if (ppSVar4 == *(ScenegraphNode ***)(param_15 + 0x10)) {
        pvVar34 = *(void **)param_15;
        uVar33 = (long)ppSVar4 - (long)pvVar34;
        uVar22 = ((long)uVar33 >> 3) + 1;
        if (uVar22 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__vector_base_common<true>::__throw_length_error();
        }
        if (uVar22 <= (ulong)((long)uVar33 >> 2)) {
          uVar22 = (long)uVar33 >> 2;
        }
        if (0x7ffffffffffffff7 < uVar33) {
          uVar22 = 0x1fffffffffffffff;
        }
        if (uVar22 == 0) {
          pvVar16 = (void *)0x0;
        }
        else {
          if (uVar22 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
          }
          pvVar16 = operator_new(uVar22 << 3);
        }
        ppSVar4 = (ScenegraphNode **)((long)pvVar16 + ((long)uVar33 >> 3) * 8);
        *ppSVar4 = param_1;
        if (0 < (long)uVar33) {
          memcpy(pvVar16,pvVar34,uVar33);
        }
        *(void **)param_15 = pvVar16;
        *(ScenegraphNode ***)(param_15 + 8) = ppSVar4 + 1;
        *(void **)(param_15 + 0x10) = (void *)((long)pvVar16 + uVar22 * 8);
        if (pvVar34 != (void *)0x0) {
          operator_delete(pvVar34);
        }
      }
      else {
        *ppSVar4 = param_1;
        *(ScenegraphNode ***)(param_15 + 8) = ppSVar4 + 1;
      }
    }
    plVar23 = (long *)(*(long *)(param_1 + 0x110) - 0x20);
    if (*(long *)(param_1 + 0x110) != 0) {
      pplVar30 = (long **)(param_13 + 8);
      pplVar24 = (long **)*pplVar30;
      pplVar32 = pplVar30;
      if (pplVar24 != (long **)0x0) {
        pplVar30 = (long **)(param_13 + 8);
        do {
          while (pplVar32 = pplVar24, plVar23 < pplVar32[4]) {
            pplVar30 = pplVar32;
            pplVar24 = (long **)*pplVar32;
            if ((long **)*pplVar32 == (long **)0x0) {
              plVar21 = *pplVar32;
              goto joined_r0x0092bc24;
            }
          }
          if (plVar23 <= pplVar32[4]) break;
          pplVar30 = pplVar32 + 1;
          pplVar24 = (long **)*pplVar30;
        } while ((long **)*pplVar30 != (long **)0x0);
      }
      plVar21 = *pplVar30;
joined_r0x0092bc24:
      if (plVar21 == (long *)0x0) {
        plVar21 = (long *)operator_new(0x28);
        plVar21[4] = (long)plVar23;
        *plVar21 = 0;
        plVar21[1] = 0;
        plVar21[2] = (long)pplVar32;
        *pplVar30 = plVar21;
        if (**(long **)param_13 != 0) {
          *(long *)param_13 = **(long **)param_13;
          plVar21 = *pplVar30;
        }
        std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                  (*(__tree_node_base **)(param_13 + 8),(__tree_node_base *)plVar21);
        *(long *)(param_13 + 0x10) = *(long *)(param_13 + 0x10) + 1;
      }
    }
  }
  if ((uVar35 >> 7 & 1) == 0) {
    if ((uVar35 >> 8 & 1) == 0) {
      if ((uVar35 >> 0xe & 1) == 0) {
        if (((uVar35 >> 0x10 & 1) != 0) &&
           (lVar13 = NavigationMeshScenegraphNode::getNavigationMesh(), lVar13 != 0)) {
          uVar35 = *param_16;
          *param_16 = uVar35 + 1;
          pplVar32 = (long **)(param_5 + 8);
          pplVar30 = pplVar32;
          if ((long **)*pplVar32 != (long **)0x0) {
            pplVar30 = (long **)(param_5 + 8);
            pplVar24 = (long **)*pplVar32;
            do {
              while (pplVar32 = pplVar24, pplVar32[4] <= param_1) {
                if (param_1 <= pplVar32[4]) goto LAB_0092c0e8;
                pplVar30 = pplVar32 + 1;
                pplVar24 = (long **)*pplVar30;
                if ((long **)*pplVar30 == (long **)0x0) goto LAB_0092c0e8;
              }
              pplVar30 = pplVar32;
              pplVar24 = (long **)*pplVar32;
            } while ((long **)*pplVar32 != (long **)0x0);
          }
LAB_0092c0e8:
          if (*pplVar30 == (long *)0x0) {
            plVar23 = (long *)operator_new(0x30);
            plVar23[4] = (long)param_1;
            *(uint *)(plVar23 + 5) = uVar35;
            *plVar23 = 0;
            plVar23[1] = 0;
            plVar23[2] = (long)pplVar32;
            *pplVar30 = plVar23;
            if (**(long **)param_5 != 0) {
              *(long *)param_5 = **(long **)param_5;
              plVar23 = *pplVar30;
            }
            std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                      (*(__tree_node_base **)(param_5 + 8),(__tree_node_base *)plVar23);
            *(long *)(param_5 + 0x10) = *(long *)(param_5 + 0x10) + 1;
          }
        }
      }
      else {
        iVar8 = AudioSourceSample::getNumElements();
        if (iVar8 != 0) {
          uVar35 = 0;
          do {
            pcVar18 = (char *)AudioSource::getSampleElementFilenameAt((AudioSource *)param_1,uVar35)
            ;
            sVar15 = strlen(pcVar18);
            if (0xffffffffffffffef < sVar15) goto LAB_0092c2a0;
            if (sVar15 < 0x17) {
              local_1d0 = (long *)CONCAT71(local_1d0._1_7_,(char)((int)sVar15 << 1));
              pvVar34 = (void *)((ulong)&local_1d0 | 1);
              if (sVar15 != 0) goto LAB_0092bb00;
            }
            else {
              uVar22 = sVar15 + 0x10 & 0xfffffffffffffff0;
              pvVar34 = operator_new(uVar22);
              local_1d0 = (long *)(uVar22 | 1);
              uStack_1c8 = sVar15;
              local_1c0 = pvVar34;
LAB_0092bb00:
              memcpy(pvVar34,pcVar18,sVar15);
            }
            *(undefined *)((long)pvVar34 + sVar15) = 0;
                    /* try { // try from 0092bb14 to 0092bb2b has its CatchHandler @ 0092c374 */
            addToFileMap(param_12,(basic_string *)&local_1d0,2,false,param_17);
            if (((ulong)local_1d0 & 1) != 0) {
              operator_delete(local_1c0);
            }
            uVar35 = uVar35 + 1;
            uVar9 = AudioSourceSample::getNumElements();
          } while (uVar35 < uVar9);
        }
      }
      goto LAB_0092bfd0;
    }
    pcVar18 = (char *)DensityMap::getFilename();
    if (pcVar18 != (char *)0x0) {
      sVar15 = strlen(pcVar18);
      if (0xffffffffffffffef < sVar15) goto LAB_0092c2a0;
      if (sVar15 < 0x17) {
        pvVar34 = (void *)((ulong)&local_1d0 | 1);
        local_1d0 = (long *)CONCAT71(local_1d0._1_7_,(char)((int)sVar15 << 1));
        if (sVar15 != 0) goto LAB_0092bb68;
      }
      else {
        uVar22 = sVar15 + 0x10 & 0xfffffffffffffff0;
        pvVar34 = operator_new(uVar22);
        local_1d0 = (long *)(uVar22 | 1);
        uStack_1c8 = sVar15;
        local_1c0 = pvVar34;
LAB_0092bb68:
        memcpy(pvVar34,pcVar18,sVar15);
      }
      *(undefined *)((long)pvVar34 + sVar15) = 0;
                    /* try { // try from 0092bb7c to 0092bb93 has its CatchHandler @ 0092c358 */
      addToFileMap(param_12,(basic_string *)&local_1d0,1,true,param_17);
      if (((ulong)local_1d0 & 1) != 0) {
        operator_delete(local_1c0);
      }
    }
    if ((uVar35 >> 9 & 1) != 0) {
      lVar13 = TerrainLayerTransformGroup::getMaterial();
      if (lVar13 != 0) {
        pGVar17 = (GsMaterial *)TerrainLayerTransformGroup::getMaterial();
        collectMaterial(pGVar17,param_11,param_12,param_17);
      }
      iVar8 = TerrainLayerTransformGroup::getNumDistanceTextures();
      if (iVar8 != 0) {
        uVar35 = 0;
        do {
          lVar13 = TerrainLayerTransformGroup::getDistanceTextureDesc
                             ((TerrainLayerTransformGroup *)param_1,uVar35);
          addToFileMap(param_12,(basic_string *)(lVar13 + 0x18),4,false,param_17);
          uVar35 = uVar35 + 1;
          uVar9 = TerrainLayerTransformGroup::getNumDistanceTextures();
        } while (uVar35 < uVar9);
      }
    }
    goto LAB_0092bfd0;
  }
  pcVar18 = (char *)BaseTerrain::getHeightMapFilename();
  sVar15 = strlen(pcVar18);
  if (0xffffffffffffffef < sVar15) {
LAB_0092c2a0:
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar15 < 0x17) {
    pvVar34 = (void *)((ulong)&local_1d0 | 1);
    local_1d0 = (long *)CONCAT71(local_1d0._1_7_,(char)((int)sVar15 << 1));
    if (sVar15 != 0) goto LAB_0092bce0;
  }
  else {
    uVar22 = sVar15 + 0x10 & 0xfffffffffffffff0;
    pvVar34 = operator_new(uVar22);
    local_1d0 = (long *)(uVar22 | 1);
    uStack_1c8 = sVar15;
    local_1c0 = pvVar34;
LAB_0092bce0:
    memcpy(pvVar34,pcVar18,sVar15);
  }
  *(undefined *)((long)pvVar34 + sVar15) = 0;
                    /* try { // try from 0092bcf4 to 0092bd0b has its CatchHandler @ 0092c370 */
  addToFileMap(param_12,(basic_string *)&local_1d0,4,true,param_17);
  if (((ulong)local_1d0 & 1) != 0) {
    operator_delete(local_1c0);
  }
  collectMaterial(*(GsMaterial **)(param_1 + 0x4c8),param_11,param_12,param_17);
  lVar13 = *(long *)(param_1 + 0x178);
  uVar22 = (*(long *)(param_1 + 0x180) - lVar13 >> 4) * 0xba2e8ba3;
  if ((int)uVar22 != 0) {
    lVar31 = 0xb0;
    while( true ) {
      lVar13 = lVar13 + lVar31;
      addToFileMap(param_12,(basic_string *)(lVar13 + -0x40),4,true,param_17);
      addToFileMap(param_12,(basic_string *)(lVar13 + -0x88),4,false,param_17);
      addToFileMap(param_12,(basic_string *)(lVar13 + -0x70),4,false,param_17);
      addToFileMap(param_12,(basic_string *)(lVar13 + -0x58),4,false,param_17);
      if ((uVar22 & 0xffffffff) * 0xb0 - lVar31 == 0) break;
      lVar13 = *(long *)(param_1 + 0x178);
      lVar31 = lVar31 + 0xb0;
    }
  }
  lVar13 = *(long *)(param_1 + 400);
  uVar22 = (*(long *)(param_1 + 0x198) - lVar13 >> 3) * 0x286bca1b;
  if ((int)uVar22 != 0) {
    lVar31 = 0x98;
    while( true ) {
      lVar13 = lVar13 + lVar31;
      addToFileMap(param_12,(basic_string *)(lVar13 + -0x50),4,false,param_17);
      addToFileMap(param_12,(basic_string *)(lVar13 + -0x38),4,false,param_17);
      addToFileMap(param_12,(basic_string *)(lVar13 + -0x20),4,false,param_17);
      if ((uVar22 & 0xffffffff) * 0x98 - lVar31 == 0) break;
      lVar13 = *(long *)(param_1 + 400);
      lVar31 = lVar31 + 0x98;
    }
  }
  iVar8 = BaseTerrain::getNumInfoLayers();
  if (iVar8 != 0) {
    uVar35 = 0;
    do {
      lVar13 = BaseTerrain::getInfoLayer((BaseTerrain *)(param_1 + 0x170),uVar35);
      addToFileMap(param_12,(basic_string *)(lVar13 + 0x18),4,true,param_17);
      uVar35 = uVar35 + 1;
      uVar9 = BaseTerrain::getNumInfoLayers();
    } while (uVar35 < uVar9);
  }
  lVar13 = *(long *)(param_1 + 0x548);
  lVar31 = *(long *)(param_1 + 0x540);
  if ((int)((ulong)(lVar13 - lVar31) >> 3) != 0) {
    uVar22 = 0;
    do {
      lVar27 = *(long *)(lVar31 + uVar22 * 8);
      if ((*(byte *)(lVar27 + 0x16) >> 1 & 1) != 0) {
        pcVar18 = (char *)(lVar27 + 0x89);
        uVar33 = (ulong)(*(byte *)(lVar27 + 0x88) >> 1);
        if ((*(byte *)(lVar27 + 0x88) & 1) != 0) {
          pcVar18 = *(char **)(lVar27 + 0x98);
          uVar33 = *(ulong *)(lVar27 + 0x90);
        }
        if (uVar33 != 0 && pcVar18 != (char *)0x0) {
          sVar15 = strlen(pcVar18);
          if (0xffffffffffffffef < sVar15) goto LAB_0092c2a0;
          if (sVar15 < 0x17) {
            local_1d0 = (long *)CONCAT71(local_1d0._1_7_,(char)((int)sVar15 << 1));
            pvVar34 = (void *)((ulong)&local_1d0 | 1);
            if (sVar15 != 0) goto LAB_0092bf88;
          }
          else {
            uVar33 = sVar15 + 0x10 & 0xfffffffffffffff0;
            pvVar34 = operator_new(uVar33);
            local_1d0 = (long *)(uVar33 | 1);
            uStack_1c8 = sVar15;
            local_1c0 = pvVar34;
LAB_0092bf88:
            memcpy(pvVar34,pcVar18,sVar15);
          }
          *(undefined *)((long)pvVar34 + sVar15) = 0;
                    /* try { // try from 0092bf9c to 0092bfb3 has its CatchHandler @ 0092c378 */
          addToFileMap(param_12,(basic_string *)&local_1d0,4,false,param_17);
          if (((ulong)local_1d0 & 1) != 0) {
            operator_delete(local_1c0);
          }
          lVar13 = *(long *)(param_1 + 0x548);
          lVar31 = *(long *)(param_1 + 0x540);
        }
      }
      uVar22 = uVar22 + 1;
    } while (uVar22 < ((ulong)(lVar13 - lVar31) >> 3 & 0xffffffff));
  }
  local_218 = 0x500;
LAB_0092bfd0:
  lVar13 = *(long *)(param_1 + 0x28);
  if ((int)((ulong)(*(long *)(param_1 + 0x30) - lVar13) >> 3) != 0) {
    uVar22 = 0;
    do {
      collectItems(*(ScenegraphNode **)(lVar13 + uVar22 * 8),param_2,param_3,param_4,param_5,param_6
                   ,param_7,param_8,param_9,param_10,param_11,param_12,param_13,param_14,param_15,
                   param_16,param_17,local_218,(bool)(param_19 & 1),(bool)(param_20 & 1));
      uVar22 = uVar22 + 1;
      lVar13 = *(long *)(param_1 + 0x28);
    } while (uVar22 < ((ulong)(*(long *)(param_1 + 0x30) - lVar13) >> 3 & 0xffffffff));
  }
  if (*(long *)(lVar6 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


