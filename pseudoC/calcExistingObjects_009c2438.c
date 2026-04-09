// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: calcExistingObjects
// Entry Point: 009c2438
// Size: 2368 bytes
// Signature: undefined calcExistingObjects(void)


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ProceduralPlacementCacheManager::calcExistingObjects() */

void ProceduralPlacementCacheManager::calcExistingObjects(void)

{
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementCacheManager::DistanceMatrixTypeField*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementCacheManager::DistanceMatrixTypeField*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementCacheManager::DistanceMatrixTypeField*>>>
  *this;
  byte *__s2;
  size_t sVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  long lVar5;
  undefined8 uVar6;
  bool bVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  __tree_iterator _Var11;
  uint uVar12;
  ProceduralPlacementCacheManager *in_x0;
  ProceduralPlacementManager *this_00;
  Node *pNVar13;
  ulong uVar14;
  uchar *puVar15;
  char *pcVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  void *pvVar19;
  __tree_node_base **pp_Var20;
  undefined8 *puVar21;
  size_t sVar22;
  TransformGroup *pTVar23;
  uint uVar24;
  long lVar25;
  ulong uVar26;
  undefined4 *puVar27;
  long lVar28;
  ProceduralPlacementCacheManager **ppPVar29;
  long lVar30;
  long lVar31;
  ProceduralPlacementCacheManager *pPVar32;
  int *piVar33;
  ulong uVar35;
  __tree_node **pp_Var36;
  ulong uVar37;
  long lVar38;
  int *piVar39;
  ProceduralPlacementCacheManager **ppPVar40;
  long **this_01;
  DistanceMatrixTypeField *this_02;
  uint uVar41;
  TerrainLodTexture *this_03;
  byte *pbVar42;
  uint uVar43;
  uint uVar44;
  undefined8 local_e0;
  undefined4 uStack_d8;
  uint uStack_d4;
  undefined8 *local_d0;
  undefined8 *puStack_c8;
  ulong local_a8;
  undefined8 uStack_a0;
  undefined8 *local_98;
  long *local_90;
  long *local_88;
  undefined8 local_80;
  __tree_end_node *local_78;
  long local_70;
  int *piVar34;
  
  lVar5 = tpidr_el0;
  local_70 = *(long *)(lVar5 + 0x28);
  if (in_x0[0x40] != (ProceduralPlacementCacheManager)0x0) {
    this_00 = (ProceduralPlacementManager *)ProceduralPlacementManager::getInstance();
    local_90 = (long *)0x0;
    local_88 = (long *)0x0;
    local_80 = 0;
                    /* try { // try from 009c2480 to 009c2497 has its CatchHandler @ 009c2db8 */
    EngineManager::getInstance();
    pNVar13 = (Node *)Renderer::getRootNode();
    NodeUtil::findByType(pNVar13,0x80,(vector *)&local_90);
    lVar25 = *local_90;
    this_03 = *(TerrainLodTexture **)(lVar25 + 0x248);
                    /* try { // try from 009c24ac to 009c24bf has its CatchHandler @ 009c2da8 */
    uVar8 = BaseTerrain::getLodTextureSize();
    *(undefined4 *)(in_x0 + 0x38) = uVar8;
    uVar9 = BaseTerrain::getLodTextureSize();
    *(uint *)(in_x0 + 0x3c) = uVar9;
                    /* try { // try from 009c24d0 to 009c24fb has its CatchHandler @ 009c2db0 */
    uVar14 = TerrainLodTexture::getLayersRegionMemorySize(this_03,*(uint *)(in_x0 + 0x38),uVar9);
    puVar15 = (uchar *)operator_new__(uVar14 & 0xffffffff);
    TerrainLodTexture::getLayersRegion
              (this_03,0,0,*(uint *)(in_x0 + 0x38),*(uint *)(in_x0 + 0x3c),puVar15);
    lVar30 = *(long *)(this_00 + 8);
    if ((int)((ulong)(*(long *)(this_00 + 0x10) - lVar30) >> 3) != 0) {
      uVar14 = 0;
      do {
        if ((int)((ulong)(*(long *)(lVar25 + 0x180) - *(long *)(lVar25 + 0x178)) >> 4) * -0x45d1745d
            != 0) {
          pbVar42 = *(byte **)(lVar30 + uVar14 * 8);
          uVar9 = 0;
          do {
                    /* try { // try from 009c255c to 009c2567 has its CatchHandler @ 009c2e28 */
            pcVar16 = (char *)BaseTerrain::getDetailLayerName((BaseTerrain *)(lVar25 + 0x170),uVar9)
            ;
            __s2 = pbVar42 + 1;
            if ((*pbVar42 & 1) != 0) {
              __s2 = *(byte **)(pbVar42 + 0x10);
            }
            iVar10 = strcmp(pcVar16,(char *)__s2);
            if (iVar10 == 0) {
              *(uint *)(pbVar42 + 0x30) = uVar9;
              break;
            }
            uVar9 = uVar9 + 1;
          } while (uVar9 < (uint)((int)((ulong)(*(long *)(lVar25 + 0x180) -
                                               *(long *)(lVar25 + 0x178)) >> 4) * -0x45d1745d));
        }
        lVar30 = *(long *)(this_00 + 8);
        uVar14 = uVar14 + 1;
      } while (uVar14 < ((ulong)(*(long *)(this_00 + 0x10) - lVar30) >> 3 & 0xffffffff));
    }
    uStack_d4 = uStack_d4 & 0xffffff00;
    local_e0._0_1_ = (DensityMapModifier)0x16;
    local_e0._1_7_ = 0x20747331205050;
    uStack_d8 = 0x706f6f6c;
                    /* try { // try from 009c25cc to 009c25d7 has its CatchHandler @ 009c2d94 */
    ProceduralPlacementManager::logPerformance(this_00,(basic_string *)&local_e0);
    if (((byte)local_e0._0_1_ & 1) != 0) {
      operator_delete(local_d0);
    }
    pp_Var36 = (__tree_node **)(in_x0 + 0x10);
    this_01 = (long **)(in_x0 + 8);
    std::__ndk1::
    __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementCacheManager::DistanceMatrixTypeField*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementCacheManager::DistanceMatrixTypeField*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementCacheManager::DistanceMatrixTypeField*>>>
    ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementCacheManager::DistanceMatrixTypeField*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementCacheManager::DistanceMatrixTypeField*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementCacheManager::DistanceMatrixTypeField*>>>
               *)this_01,*pp_Var36);
    *(__tree_node ***)(in_x0 + 8) = pp_Var36;
    *(undefined8 *)(in_x0 + 0x10) = 0;
    *(undefined8 *)(in_x0 + 0x18) = 0;
    if (*(int *)(in_x0 + 0x30) != 0) {
      uVar9 = 0;
      do {
                    /* try { // try from 009c2640 to 009c264b has its CatchHandler @ 009c2de4 */
        uVar17 = ProceduralPlacementDistanceMatrix::getType
                           ((ProceduralPlacementDistanceMatrix *)(in_x0 + 0x20),uVar9);
                    /* try { // try from 009c2650 to 009c265b has its CatchHandler @ 009c2ddc */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string((basic_string *)&local_a8);
                    /* try { // try from 009c265c to 009c2663 has its CatchHandler @ 009c2dd4 */
        puVar18 = (undefined8 *)operator_new(0x48);
        iVar10 = *(int *)(in_x0 + 0x38);
        *puVar18 = uVar17;
        uVar12 = iVar10 * iVar10;
        uVar37 = (ulong)uVar12;
        *(int *)(puVar18 + 8) = iVar10;
        puVar18[3] = 0;
        puVar18[2] = 0;
        puVar18[5] = 0;
        puVar18[4] = 0;
        puVar18[7] = 0;
        puVar18[6] = 0;
                    /* try { // try from 009c2688 to 009c268b has its CatchHandler @ 009c2dc8 */
        pvVar19 = operator_new__(uVar37 << 2);
        local_d0 = local_98;
        uVar17 = uStack_a0;
        uVar14 = local_a8;
        puVar18[1] = pvVar19;
        if (uVar12 != 0) {
          if (uVar12 < 8) {
            uVar26 = 0;
          }
          else {
            uVar26 = uVar37 & 0xfffffff8;
            puVar21 = (undefined8 *)((long)pvVar19 + 0x10);
            uVar35 = uVar26;
            do {
              puVar21[-1] = 0x4974240049742400;
              puVar21[-2] = 0x4974240049742400;
              puVar21[1] = 0x4974240049742400;
              *puVar21 = 0x4974240049742400;
              puVar21 = puVar21 + 4;
              uVar35 = uVar35 - 8;
            } while (uVar35 != 0);
            if (uVar26 == uVar37) goto LAB_009c26e0;
          }
          lVar30 = uVar37 - uVar26;
          puVar27 = (undefined4 *)((long)pvVar19 + uVar26 * 4);
          do {
            lVar30 = lVar30 + -1;
            *puVar27 = 0x49742400;
            puVar27 = puVar27 + 1;
          } while (lVar30 != 0);
        }
LAB_009c26e0:
        local_a8 = 0;
        uStack_a0 = 0;
        local_98 = (undefined8 *)0x0;
        uStack_d8 = (undefined4)uVar17;
        uStack_d4 = (uint)((ulong)uVar17 >> 0x20);
        local_e0._0_1_ = SUB81(uVar14,0);
        local_e0._1_7_ = (undefined7)(uVar14 >> 8);
                    /* try { // try from 009c26f8 to 009c2743 has its CatchHandler @ 009c2dec */
        puStack_c8 = puVar18;
        pp_Var20 = std::__ndk1::
                   __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementCacheManager::DistanceMatrixTypeField*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementCacheManager::DistanceMatrixTypeField*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementCacheManager::DistanceMatrixTypeField*>>>
                   ::
                   __find_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                             ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementCacheManager::DistanceMatrixTypeField*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementCacheManager::DistanceMatrixTypeField*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementCacheManager::DistanceMatrixTypeField*>>>
                               *)this_01,&local_78,(basic_string *)&local_e0);
        if (*pp_Var20 == (__tree_node_base *)0x0) {
          puVar21 = (undefined8 *)operator_new(0x40);
          puVar18 = local_d0;
          *puVar21 = 0;
          puVar21[1] = 0;
          uVar6 = CONCAT44(uStack_d4,uStack_d8);
          uVar17 = CONCAT71(local_e0._1_7_,local_e0._0_1_);
          local_e0._0_1_ = (DensityMapModifier)0x0;
          local_e0._1_7_ = 0;
          uStack_d8 = 0;
          uStack_d4 = 0;
          local_d0 = (undefined8 *)0x0;
          puVar21[6] = puVar18;
          puVar21[7] = puStack_c8;
          puVar21[5] = uVar6;
          puVar21[4] = uVar17;
          puVar21[2] = local_78;
          *pp_Var20 = (__tree_node_base *)puVar21;
          if ((long *)**this_01 != (long *)0x0) {
            *this_01 = (long *)**this_01;
            puVar21 = (undefined8 *)*pp_Var20;
          }
          std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                    (*(__tree_node_base **)(in_x0 + 0x10),(__tree_node_base *)puVar21);
          *(long *)(in_x0 + 0x18) = *(long *)(in_x0 + 0x18) + 1;
        }
        if (((byte)local_e0._0_1_ & 1) != 0) {
          operator_delete(local_d0);
        }
        if ((local_a8 & 1) != 0) {
          operator_delete(local_98);
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < *(uint *)(in_x0 + 0x30));
    }
    uStack_d4 = uStack_d4 & 0xffffff00;
    local_e0._0_1_ = (DensityMapModifier)0x16;
    local_e0._1_7_ = 0x20646e32205050;
    uStack_d8 = 0x706f6f6c;
                    /* try { // try from 009c27c8 to 009c27d3 has its CatchHandler @ 009c2d90 */
    ProceduralPlacementManager::logPerformance(this_00,(basic_string *)&local_e0);
    if (((byte)local_e0._0_1_ & 1) != 0) {
      operator_delete(local_d0);
    }
    uVar9 = *(uint *)(in_x0 + 0x3c);
    this = (__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementCacheManager::DistanceMatrixTypeField*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementCacheManager::DistanceMatrixTypeField*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementCacheManager::DistanceMatrixTypeField*>>>
            *)(in_x0 + 8);
    if (uVar9 != 0) {
      uVar24 = *(uint *)(in_x0 + 0x38);
      uVar12 = 0;
      uVar43 = uVar24;
      do {
        if (uVar43 != 0) {
          uVar9 = 0;
          do {
            lVar30 = *(long *)(this_00 + 8);
            if ((int)((ulong)(*(long *)(this_00 + 0x10) - lVar30) >> 3) == 0) {
LAB_009c28bc:
                    /* try { // try from 009c28bc to 009c28e3 has its CatchHandler @ 009c2e38 */
              _Var11 = std::__ndk1::
                       __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementCacheManager::DistanceMatrixTypeField*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementCacheManager::DistanceMatrixTypeField*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementCacheManager::DistanceMatrixTypeField*>>>
                       ::
                       find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                                 (this,(basic_string *)
                                       &ProceduralPlacementDistanceMatrix::DEFAULT_TEXTURE_TYPENAME)
              ;
              if (pp_Var36 != (__tree_node **)(ulong)_Var11) {
                DistanceMatrixTypeField::addPointForBulkAdd
                          ((DistanceMatrixTypeField *)((__tree_node **)(ulong)_Var11)[7],uVar9,
                           uVar12);
              }
            }
            else {
              uVar14 = 0;
              bVar7 = false;
              while( true ) {
                lVar30 = *(long *)(lVar30 + uVar14 * 8);
                if (puVar15[uVar9 + uVar24 * uVar12] == *(uchar *)(lVar30 + 0x30)) {
                    /* try { // try from 009c2870 to 009c2893 has its CatchHandler @ 009c2e40 */
                  _Var11 = std::__ndk1::
                           __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementCacheManager::DistanceMatrixTypeField*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementCacheManager::DistanceMatrixTypeField*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementCacheManager::DistanceMatrixTypeField*>>>
                           ::
                           find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                                     (this,(basic_string *)(lVar30 + 0x18));
                  if (pp_Var36 != (__tree_node **)(ulong)_Var11) {
                    DistanceMatrixTypeField::addPointForBulkAdd
                              ((DistanceMatrixTypeField *)((__tree_node **)(ulong)_Var11)[7],uVar9,
                               uVar12);
                  }
                  bVar7 = true;
                }
                lVar30 = *(long *)(this_00 + 8);
                uVar14 = uVar14 + 1;
                if (((ulong)(*(long *)(this_00 + 0x10) - lVar30) >> 3 & 0xffffffff) <= uVar14)
                break;
                uVar24 = *(uint *)(in_x0 + 0x38);
              }
              if (!bVar7) goto LAB_009c28bc;
            }
            uVar24 = *(uint *)(in_x0 + 0x38);
            uVar9 = uVar9 + 1;
          } while (uVar9 < uVar24);
          uVar9 = *(uint *)(in_x0 + 0x3c);
          uVar43 = uVar24;
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 < uVar9);
    }
    operator_delete__(puVar15);
                    /* try { // try from 009c28f0 to 009c28f7 has its CatchHandler @ 009c2d88 */
    local_d0 = (undefined8 *)operator_new(0x20);
    *(undefined *)((long)local_d0 + 0x19) = 0;
    local_d0[1] = 0x6572757478657420;
    *local_d0 = 0x7265746661205050;
    *(undefined8 *)((long)local_d0 + 0x11) = 0x676e697473697865;
    *(undefined8 *)((long)local_d0 + 9) = 0x2065727574786574;
    uStack_d8 = 0x19;
    uStack_d4 = 0;
    local_e0._0_1_ = (DensityMapModifier)0x21;
    local_e0._1_7_ = 0;
                    /* try { // try from 009c2928 to 009c2933 has its CatchHandler @ 009c2d84 */
    ProceduralPlacementManager::logPerformance(this_00,(basic_string *)&local_e0);
    if (((byte)local_e0._0_1_ & 1) != 0) {
      operator_delete(local_d0);
    }
    uVar9 = *(uint *)(in_x0 + 0x38);
                    /* try { // try from 009c2950 to 009c2953 has its CatchHandler @ 009c2dc0 */
    pvVar19 = operator_new__((ulong)(uVar9 * uVar9) << 2);
    memset(pvVar19,0,(ulong)uVar9 * (ulong)uVar9 * 4);
    lVar30 = *(long *)(this_00 + 0x20);
    lVar38 = *(long *)(this_00 + 0x28);
    if ((int)((ulong)(lVar38 - lVar30) >> 3) != 0) {
      uVar14 = 0;
      lVar31 = *(long *)(lVar25 + 0x548);
      lVar28 = *(long *)(lVar25 + 0x540);
      do {
        if ((int)((ulong)(lVar31 - lVar28) >> 3) != 0) {
          lVar30 = *(long *)(lVar30 + uVar14 * 8);
          uVar37 = 0;
          do {
            lVar38 = *(long *)(lVar28 + uVar37 * 8);
            pcVar16 = (char *)(lVar38 + 0x29);
            if ((*(byte *)(lVar38 + 0x28) & 1) != 0) {
              pcVar16 = *(char **)(lVar38 + 0x38);
            }
            sVar22 = strlen(pcVar16);
            sVar1 = (ulong)(*(byte *)(lVar30 + 0x18) >> 1);
            if ((*(byte *)(lVar30 + 0x18) & 1) != 0) {
              sVar1 = *(size_t *)(lVar30 + 0x20);
            }
                    /* try { // try from 009c2a48 to 009c2a5b has its CatchHandler @ 009c2e24 */
            if ((sVar22 == sVar1) &&
               (iVar10 = std::__ndk1::
                         basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                         ::compare(lVar30 + 0x18,0,(char *)0xffffffffffffffff,(ulong)pcVar16),
               iVar10 == 0)) {
                    /* try { // try from 009c2a6c to 009c2a6f has its CatchHandler @ 009c2e1c */
              uVar12 = (**(code **)(**(long **)(lVar38 + 0x50) + 0x48))();
              uVar9 = *(uint *)(in_x0 + 0x38);
                    /* try { // try from 009c2a84 to 009c2a8b has its CatchHandler @ 009c2e14 */
              DensityMapModifier::DensityMapModifier
                        ((DensityMapModifier *)&local_e0,*(DensityMap **)(lVar38 + 0x50));
              if (uVar12 != 0) {
                uVar24 = 0;
                if (uVar9 != 0) {
                  uVar24 = uVar12 / uVar9;
                }
                uVar9 = 0;
                do {
                  uVar43 = 0;
                  do {
                    /* try { // try from 009c2acc to 009c2b2b has its CatchHandler @ 009c2e48 */
                    iVar10 = DensityMapModifier::readValue
                                       ((DensityMapModifier *)&local_e0,uVar43,uVar9);
                    if (iVar10 == *(int *)(lVar30 + 0x30)) {
                      _Var11 = std::__ndk1::
                               __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementCacheManager::DistanceMatrixTypeField*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementCacheManager::DistanceMatrixTypeField*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementCacheManager::DistanceMatrixTypeField*>>>
                               ::
                               find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                                         (this,(basic_string *)(lVar30 + 0x38));
                      uVar44 = 0;
                      if (uVar24 != 0) {
                        uVar44 = uVar43 / uVar24;
                      }
                      uVar41 = 0;
                      if (uVar24 != 0) {
                        uVar41 = uVar9 / uVar24;
                      }
                      if (pp_Var36 != (__tree_node **)(ulong)_Var11) {
                        DistanceMatrixTypeField::addPointForBulkAdd
                                  ((DistanceMatrixTypeField *)((__tree_node **)(ulong)_Var11)[7],
                                   uVar44,uVar41);
                      }
                      uVar8 = 2;
LAB_009c2ab4:
                      *(undefined4 *)
                       ((long)pvVar19 + (ulong)(uVar44 + *(int *)(in_x0 + 0x38) * uVar41) * 4) =
                           uVar8;
                    }
                    else {
                      iVar10 = DensityMapModifier::readValue
                                         ((DensityMapModifier *)&local_e0,uVar43,uVar9);
                      if (iVar10 != 0) {
                        uVar44 = 0;
                        if (uVar24 != 0) {
                          uVar44 = uVar43 / uVar24;
                        }
                        uVar8 = 1;
                        uVar41 = 0;
                        if (uVar24 != 0) {
                          uVar41 = uVar9 / uVar24;
                        }
                        goto LAB_009c2ab4;
                      }
                    }
                    uVar43 = uVar43 + 1;
                  } while (uVar12 != uVar43);
                  uVar9 = uVar9 + 1;
                } while (uVar9 != uVar12);
              }
              DensityMapModifier::~DensityMapModifier((DensityMapModifier *)&local_e0);
            }
            uVar37 = uVar37 + 1;
            lVar31 = *(long *)(lVar25 + 0x548);
            lVar28 = *(long *)(lVar25 + 0x540);
          } while (uVar37 < ((ulong)(lVar31 - lVar28) >> 3 & 0xffffffff));
          lVar30 = *(long *)(this_00 + 0x20);
          lVar38 = *(long *)(this_00 + 0x28);
        }
        uVar14 = uVar14 + 1;
      } while (uVar14 < ((ulong)(lVar38 - lVar30) >> 3 & 0xffffffff));
    }
    uVar9 = *(uint *)(in_x0 + 0x3c);
    if (uVar9 != 0) {
      uVar12 = 0;
      uVar24 = *(uint *)(in_x0 + 0x38);
      do {
        if (uVar24 != 0) {
          uVar9 = 0;
          do {
            if (*(int *)((long)pvVar19 + (ulong)(uVar9 + uVar12 * uVar24) * 4) == 1) {
                    /* try { // try from 009c2b98 to 009c2bbf has its CatchHandler @ 009c2e30 */
              _Var11 = std::__ndk1::
                       __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementCacheManager::DistanceMatrixTypeField*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementCacheManager::DistanceMatrixTypeField*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementCacheManager::DistanceMatrixTypeField*>>>
                       ::
                       find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                                 (this,(basic_string *)
                                       &ProceduralPlacementDistanceMatrix::DEFAULT_FOLIAGE_TYPENAME)
              ;
              if (pp_Var36 != (__tree_node **)(ulong)_Var11) {
                DistanceMatrixTypeField::addPointForBulkAdd
                          ((DistanceMatrixTypeField *)((__tree_node **)(ulong)_Var11)[7],uVar9,
                           uVar12);
              }
            }
            uVar24 = *(uint *)(in_x0 + 0x38);
            uVar9 = uVar9 + 1;
          } while (uVar9 < uVar24);
          uVar9 = *(uint *)(in_x0 + 0x3c);
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 < uVar9);
    }
    operator_delete__(pvVar19);
                    /* try { // try from 009c2bcc to 009c2bd3 has its CatchHandler @ 009c2d7c */
    local_d0 = (undefined8 *)operator_new(0x20);
    *(undefined *)((long)local_d0 + 0x19) = 0;
    uStack_d8 = 0x19;
    uStack_d4 = 0;
    local_e0._0_1_ = (DensityMapModifier)0x21;
    local_e0._1_7_ = 0;
    local_d0[1] = 0x656761696c6f6620;
    *local_d0 = 0x7265746661205050;
    *(undefined8 *)((long)local_d0 + 0x11) = 0x676e697473697865;
    *(undefined8 *)((long)local_d0 + 9) = 0x20656761696c6f66;
                    /* try { // try from 009c2bfc to 009c2c07 has its CatchHandler @ 009c2d78 */
    ProceduralPlacementManager::logPerformance(this_00,(basic_string *)&local_e0);
    if (((byte)local_e0._0_1_ & 1) != 0) {
      operator_delete(local_d0);
    }
                    /* try { // try from 009c2c18 to 009c2c2f has its CatchHandler @ 009c2dc0 */
    EngineManager::getInstance();
    pTVar23 = (TransformGroup *)Renderer::getRootNode();
    checkExistingReferenceObjects(in_x0,pTVar23);
    ppPVar40 = *(ProceduralPlacementCacheManager ***)(in_x0 + 8);
    while (ppPVar40 != (ProceduralPlacementCacheManager **)pp_Var36) {
      this_02 = (DistanceMatrixTypeField *)ppPVar40[7];
      piVar39 = *(int **)(this_02 + 0x10);
      piVar4 = *(int **)(this_02 + 0x18);
      if (piVar39 != piVar4) {
        lVar30 = *(long *)(this_02 + 8);
        iVar10 = *(int *)(this_02 + 0x40);
        uVar14 = (long)piVar4 + (-8 - (long)piVar39);
        piVar33 = piVar39;
        if (uVar14 < 8) {
LAB_009c2cb4:
          do {
            piVar34 = piVar33 + 2;
            *(undefined4 *)(lVar30 + (ulong)(uint)(*piVar33 + piVar33[1] * iVar10) * 4) = 0;
            piVar33 = piVar34;
          } while (piVar34 != piVar4);
        }
        else {
          uVar14 = (uVar14 >> 3) + 1;
          uVar35 = uVar14 & 0x3ffffffffffffffe;
          piVar33 = piVar39 + 2;
          uVar37 = uVar35;
          do {
            iVar2 = *piVar33;
            iVar3 = piVar33[1];
            uVar37 = uVar37 - 2;
            *(undefined4 *)(lVar30 + (ulong)(uint)(piVar33[-2] + piVar33[-1] * iVar10) * 4) = 0;
            *(undefined4 *)(lVar30 + (ulong)(uint)(iVar2 + iVar3 * iVar10) * 4) = 0;
            piVar33 = piVar33 + 4;
          } while (uVar37 != 0);
          piVar33 = piVar39 + uVar35 * 2;
          if (uVar14 != uVar35) goto LAB_009c2cb4;
        }
        do {
          piVar33 = piVar39 + 2;
          DistanceMatrixTypeField::addPoint(this_02,*piVar39,piVar39[1]);
          piVar39 = piVar33;
        } while (piVar33 != piVar4);
        piVar39 = *(int **)(this_02 + 0x10);
      }
      *(int **)(this_02 + 0x18) = piVar39;
      ppPVar29 = (ProceduralPlacementCacheManager **)ppPVar40[1];
      if ((ProceduralPlacementCacheManager **)ppPVar40[1] == (ProceduralPlacementCacheManager **)0x0
         ) {
        ppPVar29 = ppPVar40 + 2;
        bVar7 = *(ProceduralPlacementCacheManager ***)*ppPVar29 != ppPVar40;
        ppPVar40 = (ProceduralPlacementCacheManager **)*ppPVar29;
        if (bVar7) {
          do {
            pPVar32 = *ppPVar29;
            ppPVar29 = (ProceduralPlacementCacheManager **)(pPVar32 + 0x10);
            ppPVar40 = (ProceduralPlacementCacheManager **)*ppPVar29;
          } while (*ppPVar40 != pPVar32);
        }
      }
      else {
        do {
          ppPVar40 = ppPVar29;
          ppPVar29 = (ProceduralPlacementCacheManager **)*ppPVar40;
        } while ((ProceduralPlacementCacheManager **)*ppPVar40 !=
                 (ProceduralPlacementCacheManager **)0x0);
      }
    }
    in_x0[0x40] = (ProceduralPlacementCacheManager)0x0;
    if (local_90 != (long *)0x0) {
      local_88 = local_90;
      operator_delete(local_90);
    }
  }
  if (*(long *)(lVar5 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


