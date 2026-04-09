// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: scatterObjectsInMask
// Entry Point: 009d0550
// Size: 2916 bytes
// Signature: undefined __thiscall scatterObjectsInMask(ProceduralPlacementManager * this, basic_string * param_1, uint param_2, int * param_3, bool param_4, PPParentObjects * param_5, PPMask * param_6, basic_string * param_7)


/* ProceduralPlacementManager::scatterObjectsInMask(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, unsigned int, int*, bool,
   ProceduralPlacementScriptBinding::PPParentObjects*, ProceduralPlacementScriptBinding::PPMask*,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) */

void __thiscall
ProceduralPlacementManager::scatterObjectsInMask
          (ProceduralPlacementManager *this,basic_string *param_1,uint param_2,int *param_3,
          bool param_4,PPParentObjects *param_5,PPMask *param_6,basic_string *param_7)

{
  long **pplVar1;
  uint uVar2;
  char *__s2;
  long lVar3;
  uchar *puVar4;
  undefined8 uVar5;
  bool bVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  ProceduralPlacementRule *this_00;
  ProceduralPlacementRule *this_01;
  __tree_node_base **pp_Var15;
  undefined8 *puVar16;
  ProceduralPlacementCacheManager *this_02;
  Node *pNVar17;
  long *plVar18;
  void **ppvVar19;
  void *pvVar20;
  int *piVar21;
  long *plVar22;
  ulong uVar23;
  long lVar24;
  long **pplVar25;
  float *pfVar26;
  long lVar27;
  long **pplVar28;
  long lVar29;
  char *pcVar30;
  long lVar31;
  ScenegraphNode **ppSVar32;
  TerrainLodTexture *this_03;
  uint uVar33;
  ulong uVar34;
  long **pplVar35;
  uint uVar36;
  uint uVar37;
  TransformGroup *this_04;
  TerrainTransformGroup *pTVar38;
  float fVar39;
  uint local_194;
  uint local_18c;
  undefined4 local_158 [2];
  undefined local_150 [5];
  undefined2 uStack_14b;
  undefined uStack_149;
  undefined uStack_148;
  undefined6 uStack_147;
  undefined uStack_141;
  undefined local_140;
  undefined2 uStack_13f;
  undefined uStack_13d;
  undefined4 uStack_13c;
  uchar *local_138;
  TerrainTransformGroup **local_130;
  TerrainTransformGroup **local_128;
  undefined8 local_120;
  __tree_node_base **local_118;
  __tree_node_base *local_110;
  long local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  void *local_f0;
  undefined8 local_e8;
  void *local_d8;
  void *local_d0;
  __tree_end_node *local_b8 [7];
  long local_80;
  
  lVar3 = tpidr_el0;
  local_80 = *(long *)(lVar3 + 0x28);
  local_100 = (DistanceMatrixType *)CONCAT26(local_100._6_2_,0x3130505008);
                    /* try { // try from 009d05b4 to 009d05bf has its CatchHandler @ 009d1114 */
  logPerformance(this,(basic_string *)&local_100);
  if (((ulong)local_100 & 1) != 0) {
    operator_delete(local_f0);
  }
  plVar22 = *(long **)(this + 0xb0);
  this_00 = (ProceduralPlacementRule *)getRule(this,param_1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)&local_100);
                    /* try { // try from 009d05f8 to 009d0603 has its CatchHandler @ 009d1110 */
  this_01 = (ProceduralPlacementRule *)getRule(this,(basic_string *)&local_100);
  if (((ulong)local_100 & 1) != 0) {
    operator_delete(local_f0);
  }
  uVar8 = (**(code **)(**(long **)param_6 + 0x40))();
  if (this_00 != (ProceduralPlacementRule *)0x0) {
    ProceduralPlacementRule::addPreplacedNodes(this_00,param_2,param_3,param_4);
  }
  bVar7 = *(byte *)param_7;
  ppSVar32 = *(ScenegraphNode ***)(*(long *)(this + 0xe0) + 0x28);
  uVar34 = (ulong)(bVar7 >> 1);
  if ((bVar7 & 1) != 0) {
    uVar34 = *(ulong *)(param_7 + 2);
  }
  uVar23 = *(long *)(*(long *)(this + 0xe0) + 0x30) - (long)ppSVar32;
  iVar9 = (int)(uVar23 >> 3);
  if (uVar34 == 0) {
    if (iVar9 != 0) {
      uVar34 = uVar23 >> 3 & 0xffffffff;
      do {
        this_04 = (TransformGroup *)*ppSVar32;
        iVar9 = strcmp(*(char **)((ScenegraphNode *)this_04 + 8),"default");
        if (iVar9 == 0) goto LAB_009d0720;
        ppSVar32 = ppSVar32 + 1;
        uVar34 = uVar34 - 1;
      } while (uVar34 != 0);
    }
    this_04 = (TransformGroup *)operator_new(0x158);
                    /* try { // try from 009d06fc to 009d0707 has its CatchHandler @ 009d10b4 */
    TransformGroup::TransformGroup(this_04,"default");
  }
  else {
    pcVar30 = *(char **)(param_7 + 4);
    if ((bVar7 & 1) == 0) {
      pcVar30 = (char *)((long)param_7 + 1);
    }
    if (iVar9 != 0) {
      uVar34 = uVar23 >> 3 & 0xffffffff;
      do {
        this_04 = (TransformGroup *)*ppSVar32;
        iVar9 = strcmp(*(char **)((ScenegraphNode *)this_04 + 8),pcVar30);
        if (iVar9 == 0) goto LAB_009d0720;
        ppSVar32 = ppSVar32 + 1;
        uVar34 = uVar34 - 1;
      } while (uVar34 != 0);
    }
    this_04 = (TransformGroup *)operator_new(0x158);
                    /* try { // try from 009d06b4 to 009d06bb has its CatchHandler @ 009d10b8 */
    TransformGroup::TransformGroup(this_04,pcVar30);
  }
  (**(code **)(**(long **)(this + 0xe0) + 0x18))(*(long **)(this + 0xe0),this_04,0xffffffff);
LAB_009d0720:
  local_110 = (__tree_node_base *)0x0;
  local_108 = 0;
  uVar12 = *(uint *)(this_00 + 0x44);
  local_118 = &local_110;
  if ((int)((ulong)(*(long *)(this_00 + 0x70) - *(long *)(this_00 + 0x68)) >> 3) != 0) {
    uVar10 = 0;
    do {
                    /* try { // try from 009d0768 to 009d0773 has its CatchHandler @ 009d116c */
      ProceduralPlacementRule::getObject(this_00,uVar10);
                    /* try { // try from 009d0778 to 009d077f has its CatchHandler @ 009d1164 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string((basic_string *)&local_100);
      local_e8 = (void *)CONCAT71(local_e8._1_7_,1);
                    /* try { // try from 009d0784 to 009d07b7 has its CatchHandler @ 009d1178 */
      pp_Var15 = std::__ndk1::
                 __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,bool>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,bool>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,bool>>>
                 ::
                 __find_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                           ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,bool>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,bool>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,bool>>>
                             *)&local_118,local_b8,(basic_string *)&local_100);
      if (*pp_Var15 == (__tree_node_base *)0x0) {
        puVar16 = (undefined8 *)operator_new(0x40);
        pvVar20 = local_f0;
        uVar5 = uStack_f8;
        uVar34 = (ulong)local_100;
        *puVar16 = 0;
        puVar16[1] = 0;
        uStack_f8 = 0;
        local_f0 = (void *)0x0;
        local_100 = (DistanceMatrixType *)0x0;
        puVar16[6] = pvVar20;
        puVar16[5] = uVar5;
        puVar16[4] = uVar34;
        *(undefined *)(puVar16 + 7) = (undefined)local_e8;
        puVar16[2] = local_b8[0];
        *pp_Var15 = (__tree_node_base *)puVar16;
        if ((__tree_node_base **)*local_118 != (__tree_node_base **)0x0) {
          puVar16 = (undefined8 *)*pp_Var15;
          local_118 = (__tree_node_base **)*local_118;
        }
        std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                  (local_110,(__tree_node_base *)puVar16);
        local_108 = local_108 + 1;
      }
      if (((ulong)local_100 & 1) != 0) {
        operator_delete(local_f0);
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < (uint)((ulong)(*(long *)(this_00 + 0x70) - *(long *)(this_00 + 0x68)) >> 3));
  }
                    /* try { // try from 009d0824 to 009d082f has its CatchHandler @ 009d1138 */
  this_02 = (ProceduralPlacementCacheManager *)ProceduralPlacementCacheManager::getInstance();
  uVar10 = ProceduralPlacementCacheManager::getMaximumMinDistance(this_02,(map *)&local_118);
  if (uVar10 <= uVar12) {
    uVar10 = uVar12;
  }
                    /* try { // try from 009d0848 to 009d086f has its CatchHandler @ 009d1130 */
  uVar11 = (**(code **)(*plVar22 + 0x40))(plVar22);
  uVar12 = uVar8;
  if (uVar11 < uVar8) {
    uVar12 = (**(code **)(*plVar22 + 0x40))();
  }
  local_130 = (TerrainTransformGroup **)0x0;
  local_128 = (TerrainTransformGroup **)0x0;
  local_120 = 0;
                    /* try { // try from 009d087c to 009d0893 has its CatchHandler @ 009d114c */
  EngineManager::getInstance();
  pNVar17 = (Node *)Renderer::getRootNode();
  NodeUtil::findByType(pNVar17,0x80,(vector *)&local_130);
  pTVar38 = *local_130;
  this_03 = *(TerrainLodTexture **)(pTVar38 + 0x248);
                    /* try { // try from 009d08a4 to 009d08ab has its CatchHandler @ 009d1108 */
  uVar13 = BaseTerrain::getLodTextureSize();
                    /* try { // try from 009d08b0 to 009d08e7 has its CatchHandler @ 009d1144 */
  uVar34 = TerrainLodTexture::getLayersRegionMemorySize(this_03,uVar13,uVar13);
  local_138 = (uchar *)operator_new__(uVar34 & 0xffffffff);
  TerrainLodTexture::getLayersRegion(this_03,0,0,uVar13,uVar13,local_138);
  lVar29 = *(long *)(pTVar38 + 0x548);
  lVar31 = *(long *)(pTVar38 + 0x540);
  uVar33 = 1000000;
  uVar11 = uVar13;
  if (uVar12 <= uVar13) {
    uVar11 = uVar12;
  }
  if ((int)((ulong)(lVar29 - lVar31) >> 3) != 0) {
    lVar27 = *(long *)(this_00 + 0x68);
    lVar24 = *(long *)(this_00 + 0x70);
    uVar34 = 0;
    do {
      if ((int)((ulong)(lVar24 - lVar27) >> 3) != 0) {
        uVar12 = 0;
        do {
                    /* try { // try from 009d0978 to 009d0993 has its CatchHandler @ 009d119c */
          plVar18 = (long *)ProceduralPlacementRule::getObject(this_00,uVar12);
          iVar9 = (**(code **)(*plVar18 + 0x10))();
          uVar14 = uVar33;
          if (iVar9 == 1) {
            lVar29 = *(long *)(*(long *)(pTVar38 + 0x540) + uVar34 * 8);
            pcVar30 = (char *)(lVar29 + 0x29);
            if ((*(byte *)(lVar29 + 0x28) & 1) != 0) {
              pcVar30 = *(char **)(lVar29 + 0x38);
            }
            __s2 = (char *)((long)plVar18 + 0x79);
            if ((*(byte *)(plVar18 + 0xf) & 1) != 0) {
              __s2 = (char *)plVar18[0x11];
            }
            iVar9 = strcmp(pcVar30,__s2);
                    /* try { // try from 009d09e0 to 009d09e3 has its CatchHandler @ 009d1190 */
            if ((iVar9 == 0) &&
               (uVar14 = (**(code **)(**(long **)(lVar29 + 0x50) + 0x48))(), uVar33 <= uVar14)) {
              uVar14 = uVar33;
            }
          }
          uVar33 = uVar14;
          lVar27 = *(long *)(this_00 + 0x68);
          lVar24 = *(long *)(this_00 + 0x70);
          uVar12 = uVar12 + 1;
        } while (uVar12 < (uint)((ulong)(lVar24 - lVar27) >> 3));
        lVar29 = *(long *)(pTVar38 + 0x548);
        lVar31 = *(long *)(pTVar38 + 0x540);
      }
      uVar34 = uVar34 + 1;
    } while (uVar34 < ((ulong)(lVar29 - lVar31) >> 3 & 0xffffffff));
  }
  if (uVar11 <= uVar33) {
    uVar33 = uVar11;
  }
  uVar34 = (ulong)local_100 >> 0x28;
  local_100 = (DistanceMatrixType *)CONCAT35((uint3)uVar34 & 0xffff00,0x3430505008);
                    /* try { // try from 009d0a0c to 009d0a17 has its CatchHandler @ 009d10f0 */
  logPerformance(this,(basic_string *)&local_100);
  if (((ulong)local_100 & 1) != 0) {
    operator_delete(local_f0);
  }
  local_100 = (DistanceMatrixType *)CONCAT17(local_100._7_1_,0x796d6d75640a);
                    /* try { // try from 009d0a44 to 009d0a4f has its CatchHandler @ 009d10ec */
  ProceduralPlacementDistanceMatrix::DistanceMatrixType::DistanceMatrixType
            ((DistanceMatrixType *)local_b8,(basic_string *)&local_100);
  if (((ulong)local_100 & 1) != 0) {
    operator_delete(local_f0);
  }
                    /* try { // try from 009d0a60 to 009d0a6f has its CatchHandler @ 009d10e4 */
  ProceduralPlacementCacheManager::DistanceMatrixTypeField::DistanceMatrixTypeField
            ((DistanceMatrixTypeField *)&local_100,(DistanceMatrixType *)local_b8,uVar13);
  local_150[0] = (PoissonDiskUtil)0xa;
  local_150._1_4_ = 0x6d6d7564;
  uStack_14b = 0x79;
                    /* try { // try from 009d0a94 to 009d0a9b has its CatchHandler @ 009d10cc */
  ProceduralPlacementDistanceMatrix::DistanceMatrixType::addMinDistanceToType
            (local_100,(basic_string *)local_150,*(int *)(this_00 + 0x44));
  if (((byte)local_150[0] & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_13c,CONCAT13(uStack_13d,CONCAT21(uStack_13f,local_140)))
                   );
  }
  if (this_01 == (ProceduralPlacementRule *)0x0) {
    local_194 = 0;
  }
  else {
                    /* try { // try from 009d0ab8 to 009d0ac3 has its CatchHandler @ 009d1140 */
    local_194 = ProceduralPlacementRule::getNumParentObjects(this_01,*(int *)(param_5 + 0x18));
  }
  fVar39 = (float)(ulong)uVar33;
  uVar12 = 0;
  pplVar1 = (long **)(this + 0x120);
  uVar11 = 0;
  if (uVar10 + 1 != 0) {
    uVar11 = uVar33 / (uVar10 + 1);
  }
  uVar11 = uVar11 * uVar11;
  do {
    if (this_01 == (ProceduralPlacementRule *)0x0) {
      uVar36 = 0;
      uVar14 = 0;
      uVar37 = uVar33;
      local_18c = uVar33;
      if (uVar10 != 0) goto LAB_009d0b54;
LAB_009d0c54:
      if (uVar14 < local_18c) {
        do {
          uVar2 = uVar36;
          if (uVar36 < uVar37) {
            do {
              if (this_01 == (ProceduralPlacementRule *)0x0) {
                piVar21 = (int *)0x0;
LAB_009d0cc4:
                bVar7 = fillMask(this,uVar2,uVar14,false,(ProceduralPlacementMask *)plVar22,uVar33,
                                 param_6,this_00,(DistanceMatrixTypeField *)&local_100,uVar13,
                                 &local_138,pTVar38,(ScenegraphNode *)this_04);
                if ((piVar21 == (int *)0x0 | (bVar7 ^ 0xff) & 1) == 0) {
                  *piVar21 = *piVar21 + 1;
                }
              }
              else {
                    /* try { // try from 009d0c9c to 009d0d03 has its CatchHandler @ 009d11a4 */
                piVar21 = (int *)ProceduralPlacementRule::getParentObjects
                                           (this_01,*(int *)(param_5 + 0x18),uVar12);
                uVar34 = ProceduralPlacementRule::ParentObject::checkPositionAndCount
                                   ((ParentObject *)piVar21,uVar2,uVar14);
                if ((uVar34 & 1) != 0) goto LAB_009d0cc4;
              }
              uVar2 = uVar2 + 1;
            } while (uVar37 != uVar2);
          }
          uVar14 = uVar14 + 1;
        } while (uVar14 != local_18c);
      }
    }
    else {
                    /* try { // try from 009d0b08 to 009d0b13 has its CatchHandler @ 009d1160 */
      lVar29 = ProceduralPlacementRule::getParentObjects(this_01,*(int *)(param_5 + 0x18),uVar12);
      if (lVar29 != 0) {
        iVar9 = *(int *)(*(long *)(lVar29 + 0x10) + 0x6c);
        uVar36 = *(int *)(lVar29 + 4) - iVar9;
        uVar14 = iVar9 + *(int *)(lVar29 + 4);
        uVar2 = *(int *)(lVar29 + 8) + iVar9;
        uVar37 = uVar8;
        if (uVar14 <= uVar8) {
          uVar37 = uVar14;
        }
        uVar14 = *(int *)(lVar29 + 8) - iVar9;
        local_18c = uVar8;
        if (uVar2 <= uVar8) {
          local_18c = uVar2;
        }
        if (uVar10 == 0) goto LAB_009d0c54;
LAB_009d0b54:
        pplVar28 = (long **)*pplVar1;
        pplVar25 = pplVar1;
        if (pplVar28 == (long **)0x0) {
LAB_009d0b94:
          local_158[0] = 0x6cd7ef;
                    /* try { // try from 009d0ba0 to 009d0ba7 has its CatchHandler @ 009d115c */
          ppvVar19 = (void **)operator_new(0x18);
          *ppvVar19 = (void *)0x0;
          ppvVar19[1] = (void *)0x0;
          ppvVar19[2] = (void *)0x0;
                    /* try { // try from 009d0bb4 to 009d0bcf has its CatchHandler @ 009d1158 */
          PoissonDiskUtil::generatePoissonPoints<PoissonDiskUtil::DefaultPRNG>
                    ((PoissonDiskUtil *)local_150,(float)(ulong)uVar10 / fVar39,uVar11,local_158,0,
                     0x1e);
          pvVar20 = *ppvVar19;
          if (pvVar20 != (void *)0x0) {
            ppvVar19[1] = pvVar20;
            operator_delete(pvVar20);
            *ppvVar19 = (void *)0x0;
            ppvVar19[1] = (void *)0x0;
            ppvVar19[2] = (void *)0x0;
          }
          pplVar35 = (long **)*pplVar1;
          ppvVar19[1] = (void *)CONCAT17(uStack_141,CONCAT61(uStack_147,uStack_148));
          *ppvVar19 = (void *)CONCAT17(uStack_149,
                                       CONCAT25(uStack_14b,CONCAT41(local_150._1_4_,local_150[0])));
          ppvVar19[2] = (void *)CONCAT44(uStack_13c,
                                         CONCAT13(uStack_13d,CONCAT21(uStack_13f,local_140)));
          pplVar25 = pplVar1;
          pplVar28 = pplVar1;
          while (pplVar35 != (long **)0x0) {
            while (pplVar28 = pplVar35, uVar11 < *(uint *)(pplVar28 + 4)) {
              pplVar25 = pplVar28;
              pplVar35 = (long **)*pplVar28;
              if ((long **)*pplVar28 == (long **)0x0) {
                plVar18 = *pplVar28;
                goto joined_r0x009d0d90;
              }
            }
            if (uVar11 <= *(uint *)(pplVar28 + 4)) break;
            pplVar25 = pplVar28 + 1;
            pplVar35 = (long **)*pplVar25;
          }
          plVar18 = *pplVar25;
joined_r0x009d0d90:
          if (plVar18 == (long *)0x0) {
                    /* try { // try from 009d0d30 to 009d0d3b has its CatchHandler @ 009d1154 */
            plVar18 = (long *)operator_new(0x30);
            plVar18[2] = (long)pplVar28;
            *(uint *)(plVar18 + 4) = uVar11;
            plVar18[5] = (long)ppvVar19;
            *plVar18 = 0;
            plVar18[1] = 0;
            *pplVar25 = plVar18;
            if (**(long **)(this + 0x118) != 0) {
              *(long *)(this + 0x118) = **(long **)(this + 0x118);
              plVar18 = *pplVar25;
            }
            std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                      (*(__tree_node_base **)(this + 0x120),(__tree_node_base *)plVar18);
            *(long *)(this + 0x128) = *(long *)(this + 0x128) + 1;
          }
        }
        else {
          do {
            if (*(uint *)(pplVar28 + 4) >= uVar11) {
              pplVar25 = pplVar28;
            }
            pplVar28 = (long **)pplVar28[*(uint *)(pplVar28 + 4) < uVar11];
          } while (pplVar28 != (long **)0x0);
          if ((pplVar25 == pplVar1) || (uVar11 < *(uint *)(pplVar25 + 4))) goto LAB_009d0b94;
          ppvVar19 = (void **)pplVar25[5];
        }
        pvVar20 = *ppvVar19;
        if (ppvVar19[1] != pvVar20) {
          uVar34 = 0;
          do {
            pfVar26 = (float *)((long)pvVar20 + uVar34 * 0xc);
            uVar37 = (uint)(*pfVar26 * fVar39);
            uVar14 = (uint)(pfVar26[1] * fVar39);
            if (this_01 == (ProceduralPlacementRule *)0x0) {
              piVar21 = (int *)0x0;
LAB_009d0e1c:
              bVar7 = fillMask(this,uVar37,uVar14,true,(ProceduralPlacementMask *)plVar22,uVar33,
                               param_6,this_00,(DistanceMatrixTypeField *)&local_100,uVar13,
                               &local_138,pTVar38,(ScenegraphNode *)this_04);
              if ((piVar21 == (int *)0x0 | (bVar7 ^ 0xff) & 1) == 0) {
                *piVar21 = *piVar21 + 1;
              }
            }
            else {
                    /* try { // try from 009d0df4 to 009d0e5b has its CatchHandler @ 009d1198 */
              piVar21 = (int *)ProceduralPlacementRule::getParentObjects
                                         (this_01,*(int *)(param_5 + 0x18),uVar12);
              uVar23 = ProceduralPlacementRule::ParentObject::checkPositionAndCount
                                 ((ParentObject *)piVar21,uVar37,uVar14);
              if ((uVar23 & 1) != 0) goto LAB_009d0e1c;
            }
            pvVar20 = *ppvVar19;
            uVar34 = (ulong)((int)uVar34 + 1);
            uVar23 = ((long)ppvVar19[1] - (long)pvVar20 >> 2) * -0x5555555555555555;
          } while (uVar34 <= uVar23 && uVar23 - uVar34 != 0);
        }
      }
    }
    bVar6 = uVar12 != 0xffffffff;
    uVar12 = uVar12 + 1;
    if ((bVar6) && (local_194 <= uVar12)) {
      uStack_13d = 0;
      local_150[0] = (PoissonDiskUtil)0x24;
      uStack_13f = 0x706f;
      uStack_147 = 0x206e69616d20;
      uStack_141 = 0x6c;
      local_140 = 0x6f;
      local_150._1_4_ = 0x61205050;
      uStack_14b = 0x7466;
      uStack_149 = 0x65;
      uStack_148 = 0x72;
                    /* try { // try from 009d0eb8 to 009d0ec3 has its CatchHandler @ 009d10c8 */
      logPerformance(this,(basic_string *)local_150);
      if (((byte)local_150[0] & 1) != 0) {
        operator_delete((void *)CONCAT44(uStack_13c,
                                         CONCAT13(uStack_13d,CONCAT21(uStack_13f,local_140))));
      }
      puVar4 = local_138;
                    /* try { // try from 009d0edc to 009d0f0f has its CatchHandler @ 009d1140 */
      BaseTerrain::setLayersRegion((BaseTerrain *)(pTVar38 + 0x170),0,0,uVar13,uVar13,local_138);
      BaseTerrain::markLayersRegionDirty((BaseTerrain *)(pTVar38 + 0x170),0,0,uVar13,uVar13);
      if (puVar4 != (uchar *)0x0) {
        operator_delete__(puVar4);
      }
      if ((int)((ulong)(*(long *)(this_00 + 0x70) - *(long *)(this_00 + 0x68)) >> 3) != 0) {
        uVar8 = 0;
        do {
                    /* try { // try from 009d0f54 to 009d0f6f has its CatchHandler @ 009d118c */
          plVar22 = (long *)ProceduralPlacementRule::getObject(this_00,uVar8);
          iVar9 = (**(code **)(*plVar22 + 0x10))();
          if ((iVar9 == 1) && (plVar22[0x13] != 0)) {
            plVar18 = *(long **)(plVar22[0x13] + 8);
                    /* try { // try from 009d0f8c to 009d0ff3 has its CatchHandler @ 009d1174 */
            uVar12 = (**(code **)(*plVar18 + 0x48))(plVar18);
            uVar10 = (**(code **)(**(long **)(plVar22[0x13] + 8) + 0x50))();
            uVar11 = (**(code **)(**(long **)(plVar22[0x13] + 8) + 0x58))();
            DensityMap::markDensityRegionDirty
                      ((DensityMap *)plVar18,0,0,uVar12,uVar10,0,uVar11,0xffffffff,false,true,true);
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < (uint)((ulong)(*(long *)(this_00 + 0x70) - *(long *)(this_00 + 0x68)) >> 3)
                );
      }
      uStack_141 = 0;
      local_150[0] = (PoissonDiskUtil)0x1c;
      local_150._1_4_ = 0x65205050;
      uStack_14b = 0x646e;
      uStack_149 = 0x20;
      uStack_148 = 0x73;
      uStack_147 = 0x726574746163;
                    /* try { // try from 009d101c to 009d1027 has its CatchHandler @ 009d10c4 */
      logPerformance(this,(basic_string *)local_150);
      if (((byte)local_150[0] & 1) != 0) {
        operator_delete((void *)CONCAT44(uStack_13c,
                                         CONCAT13(uStack_13d,CONCAT21(uStack_13f,local_140))));
      }
      if (local_d8 != (void *)0x0) {
        local_d0 = local_d8;
        operator_delete(local_d8);
      }
      if (local_f0 != (void *)0x0) {
        local_e8 = local_f0;
        operator_delete(local_f0);
      }
      ProceduralPlacementDistanceMatrix::DistanceMatrixType::~DistanceMatrixType
                ((DistanceMatrixType *)local_b8);
      if (local_130 != (TerrainTransformGroup **)0x0) {
        local_128 = local_130;
        operator_delete(local_130);
      }
      std::__ndk1::
      __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,bool>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,bool>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,bool>>>
      ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,bool>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,bool>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,bool>>>
                 *)&local_118,(__tree_node *)local_110);
      if (*(long *)(lVar3 + 0x28) == local_80) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  } while( true );
}


