// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: TerrainTransformGroup
// Entry Point: 00a753f0
// Size: 3336 bytes
// Signature: undefined __thiscall TerrainTransformGroup(TerrainTransformGroup * this, char * param_1, TerrainTransformGroupDesc * param_2, STREAM_QUEUE param_3)


/* WARNING: Type propagation algorithm not settling */
/* TerrainTransformGroup::TerrainTransformGroup(char const*, TerrainTransformGroupDesc const&,
   StreamManager::STREAM_QUEUE) */

void __thiscall
TerrainTransformGroup::TerrainTransformGroup
          (TerrainTransformGroup *this,char *param_1,TerrainTransformGroupDesc *param_2,
          STREAM_QUEUE param_3)

{
  int iVar1;
  GeoMipMappingTerrain *this_00;
  basic_string *pbVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  byte *pbVar6;
  TerrainTransformGroup TVar7;
  uint uVar8;
  long lVar9;
  bool bVar10;
  byte bVar11;
  uint uVar12;
  char *pcVar13;
  __tree_node *__n;
  ulong uVar14;
  TerrainPatchOccluderManager *this_01;
  StreamManager *this_02;
  basic_string_conflict *pbVar15;
  long *plVar16;
  long lVar17;
  byte *pbVar18;
  float *pfVar19;
  TerrainTransformGroup *pTVar20;
  TerrainTransformGroupDesc *pTVar21;
  ulong uVar22;
  long lVar23;
  long lVar24;
  long *plVar25;
  byte *pbVar26;
  long *this_03;
  char *pcVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  byte local_13c;
  undefined8 local_f8;
  __tree_node *p_Stack_f0;
  char *local_e8;
  long local_e0;
  undefined4 local_d8;
  __tree_node **local_d0;
  __tree_node *local_c8;
  long local_c0;
  long *local_b8;
  long *plStack_b0;
  long *local_a8;
  long *local_a0;
  char *pcStack_98;
  long *local_90;
  basic_string local_88 [4];
  void *local_78;
  long local_70;
  
  lVar9 = tpidr_el0;
  local_70 = *(long *)(lVar9 + 0x28);
  TransformGroup::TransformGroup((TransformGroup *)this,param_1);
  *(undefined ***)(this + 0x158) = &PTR__UpdateableRendered_00fe43c8;
                    /* try { // try from 00a75440 to 00a75447 has its CatchHandler @ 00a761e4 */
  Streamable::Streamable((Streamable *)(this + 0x160));
  this_00 = (GeoMipMappingTerrain *)(this + 0x170);
  *(undefined ***)this = &PTR__TerrainTransformGroup_00fe4280;
  *(undefined ***)(this + 0x158) = &PTR__TerrainTransformGroup_00fe42d8;
  *(undefined ***)(this + 0x160) = &PTR__TerrainTransformGroup_00fe4300;
                    /* try { // try from 00a7546c to 00a75473 has its CatchHandler @ 00a761dc */
  GeoMipMappingTerrain::GeoMipMappingTerrain(this_00);
  *(undefined8 *)(this + 0x4c0) = 0;
  plVar16 = (long *)(this + 0x468);
  pbVar2 = (basic_string *)(param_2 + 200);
  *(undefined8 *)(this + 0x540) = 0;
  *(undefined8 *)(this + 0x4b8) = 0;
  *(undefined8 *)(this + 0x4b0) = 0;
  *(undefined8 *)(this + 0x4a8) = 0;
  *(undefined8 *)(this + 0x4a0) = 0;
  *(undefined8 *)(this + 0x498) = 0;
  *(undefined8 *)(this + 0x490) = 0;
  *(undefined ***)(this + 0x4e0) = &PTR__ShaderPassHandler_00fe4330;
  *(undefined8 *)(this + 0x488) = 0;
  *(undefined8 *)(this + 0x480) = 0;
  *(undefined8 *)(this + 0x478) = 0;
  *(undefined8 *)(this + 0x470) = 0;
  *(undefined8 *)(this + 0x468) = 0;
  *(undefined8 *)(this + 0x460) = 0;
  *(undefined8 *)(this + 0x458) = 0;
  *(undefined8 *)(this + 0x450) = 0;
  *(undefined4 *)(this + 0x4e8) = 0xffffffff;
  *(ulong *)(this + 0x10) = *(ulong *)(this + 0x10) | 0x80;
  *(undefined8 *)(this + 0x550) = 0;
  *(undefined8 *)(this + 0x548) = 0;
                    /* try { // try from 00a754e8 to 00a754f3 has its CatchHandler @ 00a761d4 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this + 0x450),pbVar2);
                    /* try { // try from 00a754f4 to 00a75507 has its CatchHandler @ 00a761cc */
  FUN_006cadd8(&local_f8,pbVar2,".lod.type.cache");
  if ((*(byte *)plVar16 & 1) != 0) {
    operator_delete(*(void **)(this + 0x478));
  }
  *(__tree_node **)(this + 0x470) = p_Stack_f0;
  *plVar16 = (long)local_f8;
  *(char **)(this + 0x478) = local_e8;
                    /* try { // try from 00a75528 to 00a7553b has its CatchHandler @ 00a761c4 */
  FUN_006cadd8(&local_f8,pbVar2,".nmap.cache");
  if ((*(byte *)(this + 0x480) & 1) != 0) {
    operator_delete(*(void **)(this + 0x490));
  }
  *(__tree_node **)(this + 0x488) = p_Stack_f0;
  *(__tree_node ***)(this + 0x480) = local_f8;
  *(char **)(this + 0x490) = local_e8;
                    /* try { // try from 00a75564 to 00a75577 has its CatchHandler @ 00a761bc */
  FUN_006cadd8(&local_f8,pbVar2,".heightmap.png");
  if ((*(byte *)(this + 0x498) & 1) != 0) {
    operator_delete(*(void **)(this + 0x4a8));
  }
  *(__tree_node **)(this + 0x4a0) = p_Stack_f0;
  *(__tree_node ***)(this + 0x498) = local_f8;
  *(char **)(this + 0x4a8) = local_e8;
                    /* try { // try from 00a755a0 to 00a755b3 has its CatchHandler @ 00a761b4 */
  FUN_006cadd8(&local_f8,pbVar2,".occluders.cache");
  if ((*(byte *)(this + 0x4b0) & 1) != 0) {
    operator_delete(*(void **)(this + 0x4c0));
  }
  *(undefined4 *)(this + 0x448) = 0;
  *(__tree_node **)(this + 0x4b8) = p_Stack_f0;
  *(__tree_node ***)(this + 0x4b0) = local_f8;
  *(char **)(this + 0x4c0) = local_e8;
  lVar17 = *(long *)(param_2 + 0xc0);
  *(long *)(this + 0x4c8) = lVar17;
  FUN_00f276d0(1,lVar17 + 0x28);
  *(undefined8 *)(this + 0x4d8) = 0;
  *(undefined8 *)(this + 0x4d0) = 0;
                    /* try { // try from 00a755fc to 00a75683 has its CatchHandler @ 00a7621c */
  EngineManager::getInstance();
  pcVar13 = (char *)EngineManager::getTerrainLoadDirectory();
  uVar14 = (ulong)((byte)*param_2 >> 1);
  if (((byte)*param_2 & 1) != 0) {
    uVar14 = *(ulong *)(param_2 + 8);
  }
  if (uVar14 == 0) goto LAB_00a760b4;
  EngineManager::getInstance();
  uVar12 = EngineManager::getTerrainLoadFlags();
  if ((pcVar13 == (char *)0x0) || ((uVar12 >> 5 & 1) == 0)) {
    pTVar21 = *(TerrainTransformGroupDesc **)(param_2 + 0x10);
    if (((byte)*param_2 & 1) == 0) {
      pTVar21 = param_2 + 1;
    }
    uVar14 = BaseTerrain::loadHeightMapAndComputeDeltas
                       ((BaseTerrain *)this_00,(char *)pTVar21,(char *)0x0);
  }
  else {
    __n = (__tree_node *)strlen(pcVar13);
    if ((__tree_node *)0xffffffffffffffef < __n) {
                    /* try { // try from 00a760e8 to 00a760f3 has its CatchHandler @ 00a76164 */
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (__n < (__tree_node *)0x17) {
      pcVar27 = (char *)((ulong)&local_f8 | 1);
      local_f8 = (__tree_node **)CONCAT71(local_f8._1_7_,(char)((int)__n << 1));
      if (__n != (__tree_node *)0x0) goto LAB_00a756ac;
    }
    else {
                    /* try { // try from 00a75694 to 00a7569b has its CatchHandler @ 00a76164 */
      pcVar27 = (char *)operator_new((ulong)(__n + 0x10) & 0xfffffffffffffff0);
      local_f8 = (__tree_node **)((ulong)(__n + 0x10) & 0xfffffffffffffff0 | 1);
      p_Stack_f0 = __n;
      local_e8 = pcVar27;
LAB_00a756ac:
      memcpy(pcVar27,pcVar13,(size_t)__n);
    }
    pcVar27[(long)__n] = '\0';
    pTVar20 = *(TerrainTransformGroup **)(this + 0x4a8);
    if (((byte)this[0x498] & 1) == 0) {
      pTVar20 = this + 0x499;
    }
                    /* try { // try from 00a756e0 to 00a75717 has its CatchHandler @ 00a76170 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)&local_f8,(ulong)pTVar20);
    pTVar21 = *(TerrainTransformGroupDesc **)(param_2 + 0x10);
    if (((byte)*param_2 & 1) == 0) {
      pTVar21 = param_2 + 1;
    }
    pcVar27 = (char *)((ulong)&local_f8 | 1);
    if (((ulong)local_f8 & 1) != 0) {
      pcVar27 = local_e8;
    }
    uVar14 = BaseTerrain::loadHeightMapAndComputeDeltas
                       ((BaseTerrain *)this_00,(char *)pTVar21,pcVar27);
    if (((ulong)local_f8 & 1) != 0) {
      operator_delete(local_e8);
    }
  }
  if ((uVar14 & 1) == 0) goto LAB_00a760b4;
                    /* try { // try from 00a75738 to 00a75823 has its CatchHandler @ 00a7621c */
  BaseTerrain::setHeightScale((BaseTerrain *)this_00,*(float *)(param_2 + 0x1c));
  BaseTerrain::setUnitsPerPixel((BaseTerrain *)this_00,*(float *)(param_2 + 0x18));
  BaseTerrain::setLodBlendStart((BaseTerrain *)this_00,*(float *)(param_2 + 0x20));
  BaseTerrain::setLodBlendEnd((BaseTerrain *)this_00,*(float *)(param_2 + 0x24));
  BaseTerrain::setLodBlendStartDynamic((BaseTerrain *)this_00,*(float *)(param_2 + 0x28));
  BaseTerrain::setLodBlendEndDynamic((BaseTerrain *)this_00,*(float *)(param_2 + 0x2c));
  BaseTerrain::setDetailLodBlendDelta((BaseTerrain *)this_00,*(float *)(param_2 + 0x30));
  pbVar15 = (basic_string_conflict *)(ulong)(byte)param_2[0x110];
  GeoMipMappingTerrain::configureShapes(this_00,this,(bool)param_2[0x110],*(uint *)(param_2 + 0xb8))
  ;
  GeoMipMappingTerrain::initPatchStructure(this_00,*(uint *)(param_2 + 0xb0));
  *(undefined4 *)(this + 0x3d8) = *(undefined4 *)(param_2 + 0x114);
  *(undefined4 *)(this + 0x3dc) = *(undefined4 *)(param_2 + 0x118);
  uVar12 = 0;
  if (*(int *)(param_2 + 0x11c) != 0) {
    uVar12 = *(int *)(param_2 + 0x11c) - 1;
  }
  uVar12 = uVar12 >> (ulong)(*(uint *)(this + 0x308) & 0x1f);
  uVar8 = 0;
  if (uVar12 != 0) {
    uVar8 = uVar12 - 1;
  }
  uVar8 = uVar8 | uVar8 >> 1;
  uVar8 = uVar8 | uVar8 >> 2;
  uVar8 = uVar8 | uVar8 >> 4;
  uVar8 = uVar8 | uVar8 >> 8;
  uVar8 = uVar8 | uVar8 >> 0x10;
  iVar1 = uVar8 + 1;
  if (uVar8 == 0xffffffff) {
    iVar1 = 1;
  }
  *(int *)(this + 0x3e0) = iVar1;
  uVar28 = *(undefined8 *)(param_2 + 0x130);
  uVar30 = *(undefined8 *)(param_2 + 0x148);
  uVar29 = *(undefined8 *)(param_2 + 0x140);
  uVar32 = *(undefined8 *)(param_2 + 0x158);
  uVar31 = *(undefined8 *)(param_2 + 0x150);
  uVar34 = *(undefined8 *)(param_2 + 0x168);
  uVar33 = *(undefined8 *)(param_2 + 0x160);
  *(undefined8 *)(this + 0x3fc) = *(undefined8 *)(param_2 + 0x138);
  *(undefined8 *)(this + 0x3f4) = uVar28;
  *(undefined8 *)(this + 0x40c) = uVar30;
  *(undefined8 *)(this + 0x404) = uVar29;
  *(undefined8 *)(this + 0x41c) = uVar32;
  *(undefined8 *)(this + 0x414) = uVar31;
  *(undefined8 *)(this + 0x42c) = uVar34;
  *(undefined8 *)(this + 0x424) = uVar33;
  uVar28 = *(undefined8 *)(param_2 + 0x120);
  *(undefined8 *)(this + 0x3ec) = *(undefined8 *)(param_2 + 0x128);
  *(undefined8 *)(this + 0x3e4) = uVar28;
  this_01 = (TerrainPatchOccluderManager *)TerrainPatchOccluderManager::getInstance();
  TerrainPatchOccluderManager::setCurrentTerrain(this_01,this_00);
                    /* try { // try from 00a7582c to 00a75833 has its CatchHandler @ 00a76124 */
  std::__ndk1::operator+
            ((__ndk1 *)(param_2 + 0xf8),(basic_string_conflict *)(param_2 + 0xe0),pbVar15);
                    /* try { // try from 00a75834 to 00a7583b has its CatchHandler @ 00a761b0 */
  EngineManager::getInstance();
  uVar12 = EngineManager::getTerrainLoadFlags();
  if ((uVar12 >> 3 & 1) == 0) {
LAB_00a758d4:
                    /* try { // try from 00a758d4 to 00a758db has its CatchHandler @ 00a761b0 */
    GeoMipMappingTerrain::startGenerateOccluders();
  }
  else {
    local_f8 = (__tree_node **)0x0;
    p_Stack_f0 = (__tree_node *)0x0;
    local_e8 = (char *)0x0;
    if (pcVar13 == (char *)0x0) {
LAB_00a75858:
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                &local_f8,local_88);
    }
    else {
                    /* try { // try from 00a7584c to 00a758bb has its CatchHandler @ 00a76198 */
      EngineManager::getInstance();
      uVar12 = EngineManager::getTerrainLoadFlags();
      if ((uVar12 >> 8 & 1) == 0) goto LAB_00a75858;
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((char *)&local_f8);
    }
    pTVar20 = *(TerrainTransformGroup **)(this + 0x4c0);
    pbVar15 = *(basic_string_conflict **)(this + 0x4b8);
    if (((byte)this[0x4b0] & 1) == 0) {
      pTVar20 = this + 0x4b1;
      pbVar15 = (basic_string_conflict *)(ulong)((byte)this[0x4b0] >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)&local_f8,(ulong)pTVar20);
    pcVar27 = (char *)((ulong)&local_f8 | 1);
    if (((ulong)local_f8 & 1) != 0) {
      pcVar27 = local_e8;
    }
    uVar14 = GeoMipMappingTerrain::loadOccludersCache(this_00,pcVar27);
    if (((ulong)local_f8 & 1) != 0) {
      operator_delete(local_e8);
    }
    if ((uVar14 & 1) == 0) goto LAB_00a758d4;
  }
                    /* try { // try from 00a758dc to 00a758e3 has its CatchHandler @ 00a7616c */
  EngineManager::getInstance();
  uVar14 = EngineManager::getTerrainLoadFlags();
  if ((uVar14 & 1) == 0) {
    local_13c = 0;
  }
  else {
                    /* try { // try from 00a758f0 to 00a758ff has its CatchHandler @ 00a7611c */
    std::__ndk1::operator+((__ndk1 *)local_88,(basic_string_conflict *)plVar16,pbVar15);
    local_a0 = (long *)0x0;
    pcStack_98 = (char *)0x0;
    local_90 = (long *)0x0;
    if (pcVar13 == (char *)0x0) {
LAB_00a75918:
      bVar10 = false;
    }
    else {
                    /* try { // try from 00a7590c to 00a75913 has its CatchHandler @ 00a76120 */
      EngineManager::getInstance();
      uVar12 = EngineManager::getTerrainLoadFlags();
      if ((uVar12 >> 6 & 1) == 0) goto LAB_00a75918;
                    /* try { // try from 00a75920 to 00a7592f has its CatchHandler @ 00a760f8 */
      std::__ndk1::operator+(pcVar13,(basic_string *)plVar16);
      if (((ulong)local_a0 & 1) != 0) {
        operator_delete(local_90);
      }
      bVar10 = true;
      pcStack_98 = (char *)plStack_b0;
      local_a0 = local_b8;
      local_90 = local_a8;
    }
                    /* try { // try from 00a75954 to 00a759a7 has its CatchHandler @ 00a76144 */
    EngineManager::getInstance();
    uVar12 = EngineManager::getTerrainLoadFlags();
    pcVar27 = (char *)((ulong)&local_f8 | 1);
    if (((ulong)local_f8 & 1) != 0) {
      pcVar27 = local_e8;
    }
    if (bVar10) {
      plVar16 = (long *)((ulong)&local_a0 | 1);
      if (((ulong)local_a0 & 1) != 0) {
        plVar16 = local_90;
      }
    }
    else {
      plVar16 = (long *)0x0;
    }
    local_13c = BaseTerrain::loadLodTextureTypeMapSysAndComputeDeltas
                          ((BaseTerrain *)this_00,pcVar27,(char *)plVar16,
                           (bool)((byte)(uVar12 >> 1) & 1));
    if (((ulong)local_a0 & 1) != 0) {
      operator_delete(local_90);
    }
    if (((ulong)local_f8 & 1) != 0) {
      operator_delete(local_e8);
    }
  }
                    /* try { // try from 00a759c8 to 00a759cf has its CatchHandler @ 00a761ec */
  EngineManager::getInstance();
  uVar12 = EngineManager::getTerrainLoadFlags();
  if ((uVar12 >> 2 & 1) == 0) {
    bVar11 = 0;
  }
  else {
    local_f8 = (__tree_node **)0x0;
    p_Stack_f0 = (__tree_node *)0x0;
    local_e8 = (char *)0x0;
    if (pcVar13 == (char *)0x0) {
LAB_00a759f4:
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                &local_f8,local_88);
    }
    else {
                    /* try { // try from 00a759e8 to 00a75a4b has its CatchHandler @ 00a76194 */
      EngineManager::getInstance();
      uVar12 = EngineManager::getTerrainLoadFlags();
      if ((uVar12 >> 7 & 1) == 0) goto LAB_00a759f4;
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((char *)&local_f8);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)&local_f8);
    pcVar13 = (char *)((ulong)&local_f8 | 1);
    if (((ulong)local_f8 & 1) != 0) {
      pcVar13 = local_e8;
    }
    bVar11 = BaseTerrain::loadLodNormalMapSys((BaseTerrain *)this_00,pcVar13);
    if (((ulong)local_f8 & 1) != 0) {
      operator_delete(local_e8);
    }
  }
  lVar17 = *(long *)(param_2 + 0x98);
  if (*(long *)(param_2 + 0xa0) == lVar17) {
    p_Stack_f0 = (__tree_node *)0x0;
    local_e8 = (char *)0x0;
                    /* try { // try from 00a75af4 to 00a75b37 has its CatchHandler @ 00a7612c */
    local_f8 = &p_Stack_f0;
    BaseTerrain::addLayerAttribute
              ((BaseTerrain *)this_00,"color",BaseTerrain::LayerAttribute::TYPE_FLOAT_LINEAR_RGB,0.0
               ,0.0,(map *)&local_f8);
    BaseTerrain::addLayerAttribute
              ((BaseTerrain *)this_00,"softness",BaseTerrain::LayerAttribute::TYPE_FLOAT,0.0,1.0,
               (map *)&local_f8);
    local_a0 = (long *)0x0;
    pcStack_98 = "field";
                    /* try { // try from 00a75b44 to 00a75b4f has its CatchHandler @ 00a76118 */
    std::__ndk1::
    __tree<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
    ::__emplace_unique_impl<std::__ndk1::pair<int,char_const*>>((pair *)&local_f8);
    local_a0 = (long *)0x1;
    pcStack_98 = &DAT_00504780;
                    /* try { // try from 00a75b60 to 00a75b6b has its CatchHandler @ 00a76114 */
    std::__ndk1::
    __tree<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
    ::__emplace_unique_impl<std::__ndk1::pair<int,char_const*>>((pair *)&local_f8);
    local_a0 = (long *)0x2;
    pcStack_98 = "grass";
                    /* try { // try from 00a75b7c to 00a75b87 has its CatchHandler @ 00a76110 */
    std::__ndk1::
    __tree<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
    ::__emplace_unique_impl<std::__ndk1::pair<int,char_const*>>((pair *)&local_f8);
    local_a0 = (long *)0x3;
    pcStack_98 = &DAT_0050b79e;
                    /* try { // try from 00a75b98 to 00a75ba3 has its CatchHandler @ 00a7610c */
    std::__ndk1::
    __tree<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
    ::__emplace_unique_impl<std::__ndk1::pair<int,char_const*>>((pair *)&local_f8);
    local_a0 = (long *)0x4;
    pcStack_98 = "sound";
                    /* try { // try from 00a75bb4 to 00a75bbf has its CatchHandler @ 00a76108 */
    std::__ndk1::
    __tree<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
    ::__emplace_unique_impl<std::__ndk1::pair<int,char_const*>>((pair *)&local_f8);
    local_a0 = (long *)0x5;
    pcStack_98 = "leaves";
                    /* try { // try from 00a75bd0 to 00a75bdb has its CatchHandler @ 00a76104 */
    std::__ndk1::
    __tree<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
    ::__emplace_unique_impl<std::__ndk1::pair<int,char_const*>>((pair *)&local_f8);
    local_a0 = (long *)0x6;
    pcStack_98 = "gravel";
                    /* try { // try from 00a75bec to 00a75bf7 has its CatchHandler @ 00a76100 */
    std::__ndk1::
    __tree<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
    ::__emplace_unique_impl<std::__ndk1::pair<int,char_const*>>((pair *)&local_f8);
    local_a0 = (long *)0x7;
    pcStack_98 = "asphalt";
                    /* try { // try from 00a75c08 to 00a75c13 has its CatchHandler @ 00a760fc */
    std::__ndk1::
    __tree<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
    ::__emplace_unique_impl<std::__ndk1::pair<int,char_const*>>((pair *)&local_f8);
                    /* try { // try from 00a75c20 to 00a75c73 has its CatchHandler @ 00a7612c */
    BaseTerrain::addLayerAttribute
              ((BaseTerrain *)this_00,"materialId",BaseTerrain::LayerAttribute::TYPE_ENUM,0.0,0.0,
               (map *)&local_f8);
    std::__ndk1::
    __tree<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
    ::destroy((__tree<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
               *)&local_f8,p_Stack_f0);
    p_Stack_f0 = (__tree_node *)0x0;
    local_e8 = (char *)0x0;
    local_f8 = &p_Stack_f0;
    BaseTerrain::addLayerAttribute
              ((BaseTerrain *)this_00,"aiDriveCost",BaseTerrain::LayerAttribute::TYPE_FLOAT,-1.0,
               100.0,(map *)&local_f8);
    std::__ndk1::
    __tree<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
    ::destroy((__tree<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
               *)&local_f8,p_Stack_f0);
  }
  else {
    uVar14 = 0;
    do {
      pbVar18 = (byte *)(lVar17 + uVar14 * 0x50);
      pbVar26 = *(byte **)(pbVar18 + 0x10);
      if ((*pbVar18 & 1) == 0) {
        pbVar26 = pbVar18 + 1;
      }
      pbVar6 = pbVar18 + 0x19;
      if ((pbVar18[0x18] & 1) != 0) {
        pbVar6 = *(byte **)(pbVar18 + 0x28);
      }
                    /* try { // try from 00a75ab0 to 00a75ab7 has its CatchHandler @ 00a76210 */
      BaseTerrain::addLayerAttribute
                ((BaseTerrain *)this_00,(char *)pbVar26,(char *)pbVar6,*(float *)(pbVar18 + 0x30),
                 *(float *)(pbVar18 + 0x34),(map *)(pbVar18 + 0x38));
      lVar17 = *(long *)(param_2 + 0x98);
      uVar14 = (ulong)((int)uVar14 + 1);
      uVar22 = (*(long *)(param_2 + 0xa0) - lVar17 >> 4) * -0x3333333333333333;
    } while (uVar14 <= uVar22 && uVar22 - uVar14 != 0);
  }
  lVar17 = *(long *)(param_2 + 0x38);
  if (*(long *)(param_2 + 0x40) != lVar17) {
    uVar14 = 0;
    do {
      pfVar19 = (float *)(lVar17 + uVar14 * 0xa8);
      pcVar13 = (char *)((long)pfVar19 + 0x11);
      if ((*(byte *)(pfVar19 + 4) & 1) != 0) {
        pcVar13 = *(char **)(pfVar19 + 8);
      }
      pcVar27 = (char *)((long)pfVar19 + 0x29);
      if ((*(byte *)(pfVar19 + 10) & 1) != 0) {
        pcVar27 = *(char **)(pfVar19 + 0xe);
      }
      pcVar3 = (char *)((long)pfVar19 + 0x41);
      if ((*(byte *)(pfVar19 + 0x10) & 1) != 0) {
        pcVar3 = *(char **)(pfVar19 + 0x14);
      }
      pcVar4 = (char *)((long)pfVar19 + 0x59);
      if ((*(byte *)(pfVar19 + 0x16) & 1) != 0) {
        pcVar4 = *(char **)(pfVar19 + 0x1a);
      }
      pcVar5 = (char *)((long)pfVar19 + 0x71);
      if ((*(byte *)(pfVar19 + 0x1c) & 1) != 0) {
        pcVar5 = *(char **)(pfVar19 + 0x20);
      }
                    /* try { // try from 00a75d1c to 00a75d23 has its CatchHandler @ 00a7620c */
      BaseTerrain::addDetailLayer
                ((BaseTerrain *)this_00,pcVar13,pcVar27,pcVar3,pcVar4,*pfVar19,pfVar19[1],pfVar19[2]
                 ,pcVar5,pfVar19[0x22],(vector *)(pfVar19 + 0x24));
      lVar17 = *(long *)(param_2 + 0x38);
      uVar14 = (ulong)((int)uVar14 + 1);
      uVar22 = (*(long *)(param_2 + 0x40) - lVar17 >> 3) * -0x30c30c30c30c30c3;
    } while (uVar14 <= uVar22 && uVar22 - uVar14 != 0);
  }
  lVar17 = *(long *)(param_2 + 0x50);
  if (*(long *)(param_2 + 0x58) != lVar17) {
    uVar14 = 0;
    do {
      pfVar19 = (float *)(lVar17 + uVar14 * 0x90);
      pcVar13 = (char *)((long)pfVar19 + 0x11);
      if ((*(byte *)(pfVar19 + 4) & 1) != 0) {
        pcVar13 = *(char **)(pfVar19 + 8);
      }
      pcVar27 = (char *)((long)pfVar19 + 0x29);
      if ((*(byte *)(pfVar19 + 10) & 1) != 0) {
        pcVar27 = *(char **)(pfVar19 + 0xe);
      }
      pcVar3 = (char *)((long)pfVar19 + 0x41);
      if ((*(byte *)(pfVar19 + 0x10) & 1) != 0) {
        pcVar3 = *(char **)(pfVar19 + 0x14);
      }
      pcVar4 = (char *)((long)pfVar19 + 0x59);
      if ((*(byte *)(pfVar19 + 0x16) & 1) != 0) {
        pcVar4 = *(char **)(pfVar19 + 0x1a);
      }
      pcVar5 = (char *)((long)pfVar19 + 0x71);
      if ((*(byte *)(pfVar19 + 0x1c) & 1) != 0) {
        pcVar5 = *(char **)(pfVar19 + 0x20);
      }
                    /* try { // try from 00a75ddc to 00a75de3 has its CatchHandler @ 00a76208 */
      BaseTerrain::addOverlayLayer
                ((BaseTerrain *)this_00,pcVar13,pcVar27,pcVar3,pcVar4,pcVar5,*pfVar19,pfVar19[1],
                 pfVar19[2],pfVar19[0x22]);
      lVar17 = *(long *)(param_2 + 0x50);
      uVar14 = (ulong)((int)uVar14 + 1);
      uVar22 = (*(long *)(param_2 + 0x58) - lVar17 >> 4) * -0x71c71c71c71c71c7;
    } while (uVar14 <= uVar22 && uVar22 - uVar14 != 0);
  }
  lVar17 = *(long *)(param_2 + 0x68);
  if (*(long *)(param_2 + 0x70) != lVar17) {
    uVar14 = 0;
    do {
      pbVar18 = (byte *)(lVar17 + uVar14 * 0x30);
      pbVar26 = *(byte **)(pbVar18 + 0x10);
      if ((*pbVar18 & 1) == 0) {
        pbVar26 = pbVar18 + 1;
      }
                    /* try { // try from 00a75e40 to 00a75e47 has its CatchHandler @ 00a761f8 */
      BaseTerrain::addCombinedLayer
                ((BaseTerrain *)this_00,(char *)pbVar26,*(uint *)(pbVar18 + 0x18),
                 (uint *)(pbVar18 + 0x1c),*(float *)(pbVar18 + 0x2c));
      lVar17 = *(long *)(param_2 + 0x68);
      uVar14 = (ulong)((int)uVar14 + 1);
      uVar22 = (*(long *)(param_2 + 0x70) - lVar17 >> 4) * -0x5555555555555555;
    } while (uVar14 <= uVar22 && uVar22 - uVar14 != 0);
  }
  lVar17 = *(long *)(param_2 + 0x80);
  if (*(long *)(param_2 + 0x88) != lVar17) {
    uVar14 = 0;
    do {
      lVar23 = lVar17 + uVar14 * 0x50;
      local_a0 = (long *)0x0;
      pcStack_98 = (char *)0x0;
      local_90 = (long *)0x0;
      lVar24 = *(long *)(lVar23 + 0x38);
      if (*(long *)(lVar23 + 0x40) != lVar24) {
        uVar22 = 0;
        do {
          pbVar26 = (byte *)(lVar24 + uVar22 * 0x40);
          pbVar18 = *(byte **)(pbVar26 + 0x10);
          if ((*pbVar26 & 1) == 0) {
            pbVar18 = pbVar26 + 1;
          }
                    /* try { // try from 00a75f18 to 00a75f1f has its CatchHandler @ 00a76234 */
          BaseTerrain::LayerGroup::LayerGroup
                    ((LayerGroup *)&local_f8,(char *)pbVar18,*(uint *)(pbVar26 + 0x18),
                     *(uint *)(pbVar26 + 0x1c),*(uint *)(pbVar26 + 0x20),(map *)(pbVar26 + 0x28));
          if (pcStack_98 < local_90) {
            *(char **)((long)pcStack_98 + 0x10) = local_e8;
            *(__tree_node **)((long)pcStack_98 + 8) = p_Stack_f0;
            *(__tree_node ***)pcStack_98 = local_f8;
            p_Stack_f0 = (__tree_node *)0x0;
            local_e8 = (char *)0x0;
            local_f8 = (__tree_node **)0x0;
            *(long *)((long)pcStack_98 + 0x18) = local_e0;
            *(undefined4 *)((long)pcStack_98 + 0x20) = local_d8;
            *(__tree_node ***)((long)pcStack_98 + 0x28) = local_d0;
            *(__tree_node **)((long)pcStack_98 + 0x30) = local_c8;
            *(long *)((long)pcStack_98 + 0x38) = local_c0;
            if (local_c0 == 0) {
              *(long **)((long)pcStack_98 + 0x28) = (long *)((long)pcStack_98 + 0x30);
            }
            else {
              *(long **)(local_c8 + 0x10) = (long *)((long)pcStack_98 + 0x30);
              local_c8 = (__tree_node *)0x0;
              local_c0 = 0;
              local_d0 = &local_c8;
            }
            pcStack_98 = (char *)((long)pcStack_98 + 0x40);
          }
          else {
                    /* try { // try from 00a75f84 to 00a75f8f has its CatchHandler @ 00a76224 */
            std::__ndk1::
            vector<BaseTerrain::LayerGroup,std::__ndk1::allocator<BaseTerrain::LayerGroup>>::
            __push_back_slow_path<BaseTerrain::LayerGroup>
                      ((vector<BaseTerrain::LayerGroup,std::__ndk1::allocator<BaseTerrain::LayerGroup>>
                        *)&local_a0,(LayerGroup *)&local_f8);
          }
          std::__ndk1::
          __tree<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::destroy((__tree<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
                     *)&local_d0,local_c8);
          if (((ulong)local_f8 & 1) != 0) {
            operator_delete(local_e8);
          }
          lVar17 = *(long *)(param_2 + 0x80);
          uVar22 = (ulong)((int)uVar22 + 1);
          lVar23 = lVar17 + uVar14 * 0x50;
          lVar24 = *(long *)(lVar23 + 0x38);
        } while (uVar22 < (ulong)(*(long *)(lVar23 + 0x40) - lVar24 >> 6));
      }
      pbVar18 = (byte *)(lVar17 + uVar14 * 0x50);
      pbVar26 = *(byte **)(pbVar18 + 0x10);
      if ((*pbVar18 & 1) == 0) {
        pbVar26 = pbVar18 + 1;
      }
      pbVar6 = pbVar18 + 0x19;
      if ((pbVar18[0x18] & 1) != 0) {
        pbVar6 = *(byte **)(pbVar18 + 0x28);
      }
                    /* try { // try from 00a75ff4 to 00a76003 has its CatchHandler @ 00a761f4 */
      BaseTerrain::addInfoLayer
                ((BaseTerrain *)this_00,(char *)pbVar26,(char *)pbVar6,*(uint *)(pbVar18 + 0x30),
                 (bool)pbVar18[0x34],(vector *)&local_a0,param_3);
      plVar16 = local_a0;
      if (local_a0 != (long *)0x0) {
        if ((long *)pcStack_98 != local_a0) {
          this_03 = (long *)((long)pcStack_98 + -0x18);
          do {
            std::__ndk1::
            __tree<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
            ::destroy((__tree<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
                       *)this_03,(__tree_node *)this_03[1]);
            if ((*(byte *)(this_03 + -5) & 1) != 0) {
              operator_delete((void *)this_03[-3]);
            }
            plVar25 = this_03 + -5;
            this_03 = this_03 + -8;
          } while (plVar25 != plVar16);
        }
        pcStack_98 = (char *)plVar16;
        operator_delete(local_a0);
      }
      lVar17 = *(long *)(param_2 + 0x80);
      uVar14 = (ulong)((int)uVar14 + 1);
      uVar22 = (*(long *)(param_2 + 0x88) - lVar17 >> 4) * -0x3333333333333333;
    } while (uVar14 <= uVar22 && uVar22 - uVar14 != 0);
  }
                    /* try { // try from 00a76060 to 00a7609b has its CatchHandler @ 00a761ec */
  GeoMipMappingTerrain::init
            (this_00,*(float *)(param_2 + 0xb4),(bool)(local_13c & 1),(bool)(bVar11 & 1));
  TVar7 = *(TerrainTransformGroup *)(param_2 + 0xbc);
  this[0x445] = (TerrainTransformGroup)0x0;
  this[0x444] = TVar7;
  this_02 = (StreamManager *)StreamManager::getInstance();
  StreamManager::addStreamable(this_02,(Streamable *)(this + 0x2e8),param_3);
  *(undefined4 *)(this + 0x440) = 0;
  *(undefined8 *)(this + 0x558) = 0;
  if (((byte)local_88[0]._0_1_ & 1) != 0) {
    operator_delete(local_78);
  }
LAB_00a760b4:
  if (*(long *)(lVar9 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


