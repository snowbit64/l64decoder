// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: TerrainLayerTransformGroup
// Entry Point: 00a724d4
// Size: 2892 bytes
// Signature: undefined __thiscall TerrainLayerTransformGroup(TerrainLayerTransformGroup * this, char * param_1, TerrainLayerTransformGroupDesc * param_2, TerrainTransformGroup * param_3, TerrainFillDataPlane * param_4, bool param_5)


/* TerrainLayerTransformGroup::TerrainLayerTransformGroup(char const*,
   TerrainLayerTransformGroupDesc const&, TerrainTransformGroup*, TerrainFillDataPlane*, bool) */

void __thiscall
TerrainLayerTransformGroup::TerrainLayerTransformGroup
          (TerrainLayerTransformGroup *this,char *param_1,TerrainLayerTransformGroupDesc *param_2,
          TerrainTransformGroup *param_3,TerrainFillDataPlane *param_4,bool param_5)

{
  undefined8 *puVar1;
  byte *pbVar2;
  TerrainLayerTransformGroup TVar3;
  byte bVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined auVar8 [16];
  undefined8 uVar9;
  undefined auVar10 [16];
  undefined auVar11 [16];
  undefined auVar12 [16];
  undefined8 uVar13;
  undefined auVar14 [12];
  undefined (*pauVar15) [12];
  undefined (*pauVar16) [12];
  undefined *puVar17;
  undefined *puVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  CustomShader *pCVar22;
  ulong *puVar23;
  void *__s;
  long lVar24;
  long lVar25;
  byte *pbVar26;
  long lVar27;
  uint uVar28;
  undefined (*pauVar29) [12];
  byte *__nptr;
  ulong uVar30;
  int *piVar31;
  ulong uVar32;
  uint *puVar33;
  ulong uVar34;
  undefined8 *puVar35;
  uint uVar36;
  uint uVar37;
  ulong *puVar38;
  uint uVar39;
  ulong uVar40;
  byte *pbVar41;
  uint uVar42;
  int *piVar43;
  undefined auVar44 [16];
  undefined auVar45 [16];
  undefined auVar46 [16];
  uint uVar47;
  undefined auVar48 [16];
  undefined auVar49 [16];
  undefined auVar50 [16];
  undefined auVar51 [16];
  undefined auVar52 [16];
  int iVar53;
  uint local_a8;
  undefined8 local_a4 [3];
  uint local_88;
  undefined8 local_84 [2];
  undefined8 uStack_74;
  long local_68;
  
  lVar27 = tpidr_el0;
  local_68 = *(long *)(lVar27 + 0x28);
  TerrainDetailTransformGroup::TerrainDetailTransformGroup
            ((TerrainDetailTransformGroup *)this,param_1,(TerrainDetailTransformGroupDesc *)param_2,
             param_3,(TerrainDataPlane *)param_4,param_5);
  *(TerrainFillDataPlane **)(this + 0x630) = param_4;
  *(undefined8 *)(this + 0x668) = 0;
  *(undefined8 *)(this + 0x660) = 0;
  *(undefined8 *)(this + 0x678) = 0;
  *(undefined8 *)(this + 0x670) = 0;
  *(undefined8 *)(this + 0x688) = 0;
  *(undefined8 *)(this + 0x680) = 0;
  *(undefined ***)this = &PTR__TerrainLayerTransformGroup_00fe3fc8;
  *(undefined ***)(this + 0x158) = &PTR__TerrainLayerTransformGroup_00fe4078;
  *(undefined ***)(this + 0x1e0) = &PTR__TerrainLayerTransformGroup_00fe40a0;
  *(undefined ***)(this + 0x1f0) = &PTR__TerrainLayerTransformGroup_00fe40d0;
  *(ulong *)(this + 0x10) = *(ulong *)(this + 0x10) | 0x200;
                    /* try { // try from 00a7255c to 00a7258f has its CatchHandler @ 00a73054 */
  LocalGeometryTransformGroup::configureFarDistance
            ((LocalGeometryTransformGroup *)this,*(float *)(param_2 + 0x30));
  if (*(int *)(*(long *)(this + 0x630) + 0x8c) != 0) {
    uVar19 = DensityMap::getSquareSize();
    uVar37 = 0;
    if (*(uint *)(this + 0x210) != 0) {
      uVar37 = uVar19 / *(uint *)(this + 0x210);
    }
    *(uint *)(this + 0x20c) = uVar37;
  }
  uVar19 = DensityMap::getSquareSize();
  *(uint *)(this + 0x6a8) = uVar19;
  uVar37 = 0;
  if (*(uint *)(this + 0x210) != 0) {
    uVar37 = uVar19 / *(uint *)(this + 0x210);
  }
  *(uint *)(this + 0x6ac) = uVar19;
  *(undefined8 *)(this + 0x6b4) = 0;
  *(uint *)(this + 0x6b0) = uVar37;
                    /* try { // try from 00a725b8 to 00a725cf has its CatchHandler @ 00a73050 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)(this + 0x660));
  *(undefined8 *)(this + 0x6c0) = 0;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)(this + 0x678));
  *(undefined8 *)(this + 0x6c8) = 0;
  uVar37 = *(uint *)(param_4 + 0x78);
  TVar3 = *(TerrainLayerTransformGroup *)(param_2 + 0x280);
  this[0x718] = TVar3;
  if (TVar3 == (TerrainLayerTransformGroup)0x0) {
    if (3 < uVar37) {
      uVar37 = 4;
    }
    *(uint *)(this + 0x6d0) = uVar37;
    uVar19 = uVar37;
    if (uVar37 == 0) {
      *(undefined4 *)(this + 0x6d4) = 0;
    }
    else {
      *(undefined8 *)(this + 0x6d8) = 0x100000000;
      if (((uVar37 != 1) && (*(undefined8 *)(this + 0x6e0) = 0x100000001, uVar37 != 2)) &&
         (*(undefined8 *)(this + 0x6e8) = 0x100000002, uVar37 != 3)) {
        *(undefined8 *)(this + 0x6f0) = 0x100000003;
      }
      *(undefined4 *)(this + 0x6d4) = 0;
      if (uVar37 != 0) {
        memset(this + 0x6f8,0,(ulong)(uVar37 << 3));
        uVar19 = 0;
      }
    }
  }
  else {
    uVar19 = *(uint *)(param_2 + 0x238);
    if (3 < uVar19) {
      uVar19 = 4;
    }
    *(undefined8 *)(this + 0x6e0) = 0;
    *(undefined8 *)(this + 0x6d8) = 0;
    *(undefined8 *)(this + 0x6f0) = 0;
    *(undefined8 *)(this + 0x6e8) = 0;
    *(uint *)(this + 0x6d0) = uVar19;
    if (uVar19 != 0) {
      uVar40 = 0;
      piVar31 = (int *)(param_2 + 0x244);
      piVar43 = (int *)(this + 0x6dc);
      do {
        if (uVar37 < (uint)(*piVar31 + piVar31[-1])) {
          if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
             (iVar21 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
             iVar21 != 0)) {
                    /* try { // try from 00a726ac to 00a726b3 has its CatchHandler @ 00a73024 */
            LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
            __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                         &PTR_LOOP_00fd8de0);
            __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
          }
                    /* try { // try from 00a72680 to 00a7268b has its CatchHandler @ 00a7305c */
          LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                            "Warning: Combined values channels are out of range in \'%s\'.\n",
                            *(undefined8 *)(this + 8));
          uVar19 = *(uint *)(this + 0x6d0);
        }
        else {
          piVar43[-1] = piVar31[-1];
          *piVar43 = *piVar31;
        }
        uVar40 = uVar40 + 1;
        piVar31 = piVar31 + 2;
        piVar43 = piVar43 + 2;
      } while (uVar40 < uVar19);
    }
    uVar19 = *(uint *)(param_2 + 0x23c);
    if (3 < uVar19) {
      uVar19 = 4;
    }
    *(undefined8 *)(this + 0x700) = 0;
    *(undefined8 *)(this + 0x6f8) = 0;
    *(uint *)(this + 0x6d4) = uVar19;
    *(undefined8 *)(this + 0x710) = 0;
    *(undefined8 *)(this + 0x708) = 0;
    if (uVar19 != 0) {
      uVar40 = 0;
      piVar31 = (int *)(this + 0x6fc);
      piVar43 = (int *)(param_2 + 0x264);
      do {
        if (uVar37 < (uint)(*piVar43 + piVar43[-1])) {
          if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
             (iVar21 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
             iVar21 != 0)) {
                    /* try { // try from 00a7279c to 00a727a3 has its CatchHandler @ 00a73020 */
            LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
            __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                         &PTR_LOOP_00fd8de0);
            __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
          }
                    /* try { // try from 00a72778 to 00a72783 has its CatchHandler @ 00a73058 */
          LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                            "Warning: Combined values channels are out of range in \'%s\'.\n",
                            *(undefined8 *)(this + 8));
          uVar19 = *(uint *)(this + 0x6d4);
        }
        else {
          piVar31[-1] = piVar43[-1];
          *piVar31 = *piVar43;
        }
        uVar40 = uVar40 + 1;
        piVar31 = piVar31 + 2;
        piVar43 = piVar43 + 2;
      } while (uVar40 < uVar19);
    }
  }
  *(undefined4 *)(this + 0x690) = 0;
  *(undefined4 *)(this + 0x698) = 0;
  *(undefined4 *)(this + 0x6a0) = 0;
  uVar40 = (ulong)((byte)this[0x660] >> 1);
  if (((byte)this[0x660] & 1) != 0) {
    uVar40 = *(ulong *)(this + 0x668);
  }
  if (uVar40 != 0) {
    uVar37 = *(uint *)(this + 0x6d0);
    uVar40 = (ulong)uVar37;
    *(uint *)(this + 0x690) = uVar37;
    if (uVar37 == 0) {
      iVar21 = 0;
    }
    else {
      if (uVar37 < 9) {
        uVar30 = 0;
        iVar21 = 0;
      }
      else {
        uVar30 = 8;
        if ((uVar37 & 7) != 0) {
          uVar30 = uVar40 & 7;
        }
        uVar30 = uVar40 - uVar30;
        piVar31 = (int *)(this + 0x6fc);
        uVar32 = uVar30;
        auVar46 = ZEXT816(0);
        auVar50 = ZEXT816(0);
        do {
          uVar32 = uVar32 - 8;
          auVar48._0_4_ = auVar50._0_4_ + *piVar31;
          auVar48._4_4_ = auVar50._4_4_ + piVar31[2];
          auVar48._8_4_ = auVar50._8_4_ + piVar31[4];
          auVar48._12_4_ = auVar50._12_4_ + piVar31[6];
          auVar44._0_4_ = auVar46._0_4_ + piVar31[-8];
          auVar44._4_4_ = auVar46._4_4_ + piVar31[-6];
          auVar44._8_4_ = auVar46._8_4_ + piVar31[-4];
          auVar44._12_4_ = auVar46._12_4_ + piVar31[-2];
          piVar31 = piVar31 + 0x10;
          auVar46 = auVar44;
          auVar50 = auVar48;
        } while (uVar32 != 0);
        iVar21 = auVar48._0_4_ + auVar44._0_4_ + auVar48._4_4_ + auVar44._4_4_ +
                 auVar48._8_4_ + auVar44._8_4_ + auVar48._12_4_ + auVar44._12_4_;
      }
      piVar31 = (int *)(this + uVar30 * 8 + 0x6dc);
      do {
        uVar30 = uVar30 + 1;
        iVar21 = iVar21 + *piVar31;
        piVar31 = piVar31 + 2;
      } while (uVar30 < uVar40);
      *(int *)(this + 0x698) = iVar21;
    }
    uVar47 = iVar21 + 7U >> 3;
    uVar37 = 4;
    if (uVar47 != 3) {
      uVar37 = uVar47;
    }
    *(uint *)(this + 0x6a0) = uVar37;
  }
  *(undefined4 *)(this + 0x694) = 0;
  *(undefined4 *)(this + 0x69c) = 0;
  *(undefined4 *)(this + 0x6a4) = 0;
  uVar40 = (ulong)((byte)this[0x678] >> 1);
  if (((byte)this[0x678] & 1) != 0) {
    uVar40 = *(ulong *)(this + 0x680);
  }
  if (uVar40 != 0) {
    *(uint *)(this + 0x694) = uVar19;
    if (uVar19 == 0) {
      iVar21 = 0;
    }
    else {
      uVar40 = (ulong)uVar19;
      if (uVar19 < 9) {
        uVar30 = 0;
        iVar21 = 0;
      }
      else {
        uVar30 = 8;
        if ((uVar19 & 7) != 0) {
          uVar30 = uVar40 & 7;
        }
        uVar30 = uVar40 - uVar30;
        piVar31 = (int *)(this + 0x71c);
        uVar32 = uVar30;
        auVar46 = ZEXT816(0);
        auVar50 = ZEXT816(0);
        do {
          uVar32 = uVar32 - 8;
          auVar49._0_4_ = auVar50._0_4_ + *piVar31;
          auVar49._4_4_ = auVar50._4_4_ + piVar31[2];
          auVar49._8_4_ = auVar50._8_4_ + piVar31[4];
          auVar49._12_4_ = auVar50._12_4_ + piVar31[6];
          auVar45._0_4_ = auVar46._0_4_ + piVar31[-8];
          auVar45._4_4_ = auVar46._4_4_ + piVar31[-6];
          auVar45._8_4_ = auVar46._8_4_ + piVar31[-4];
          auVar45._12_4_ = auVar46._12_4_ + piVar31[-2];
          piVar31 = piVar31 + 0x10;
          auVar46 = auVar45;
          auVar50 = auVar49;
        } while (uVar32 != 0);
        iVar21 = auVar49._0_4_ + auVar45._0_4_ + auVar49._4_4_ + auVar45._4_4_ +
                 auVar49._8_4_ + auVar45._8_4_ + auVar49._12_4_ + auVar45._12_4_;
      }
      piVar31 = (int *)(this + uVar30 * 8 + 0x6fc);
      do {
        uVar30 = uVar30 + 1;
        iVar21 = iVar21 + *piVar31;
        piVar31 = piVar31 + 2;
      } while (uVar30 < uVar40);
      *(int *)(this + 0x69c) = iVar21;
    }
    uVar19 = iVar21 + 7U >> 3;
    uVar37 = 4;
    if (uVar19 != 3) {
      uVar37 = uVar19;
    }
    *(uint *)(this + 0x6a4) = uVar37;
  }
  *(undefined4 *)(this + 0x228) = 1;
  *(float *)(this + 0x640) = *(float *)(param_2 + 0x30) - *(float *)(param_2 + 0x34);
  *(undefined4 *)(this + 0x644) = *(undefined4 *)(param_2 + 0x30);
  lVar24 = *(long *)(param_2 + 0x28);
  *(long *)(this + 0x638) = lVar24;
  if (lVar24 != 0) {
    FUN_00f276d0(1,lVar24 + 0x28);
                    /* try { // try from 00a72a20 to 00a72a27 has its CatchHandler @ 00a73044 */
    pCVar22 = (CustomShader *)GsMaterial::getCustomShader();
    if (pCVar22 != (CustomShader *)0x0) {
                    /* try { // try from 00a72a38 to 00a72a3f has its CatchHandler @ 00a7303c */
      createCustomShaderVariations(this,pCVar22,*(int *)(this + 0x694) + *(int *)(this + 0x690));
    }
  }
  *(undefined8 *)(this + 0x720) = 0;
  *(undefined4 *)(this + 0x658) = 0;
  *(undefined8 *)(this + 0x650) = 0;
  *(undefined8 *)(this + 0x648) = 0;
  lVar24 = *(long *)(param_2 + 0x290);
  uVar40 = (*(long *)(param_2 + 0x298) - lVar24 >> 3) * 0xb6db6db7;
  iVar21 = (int)uVar40;
  *(int *)(this + 0x71c) = iVar21;
  if (iVar21 != 0) {
    uVar40 = uVar40 & 0xffffffff;
                    /* try { // try from 00a72a90 to 00a72a93 has its CatchHandler @ 00a73040 */
    puVar23 = (ulong *)operator_new__(uVar40 * 0x38 + 8);
    lVar25 = uVar40 * 0x38;
    puVar38 = puVar23 + 1;
    *puVar23 = uVar40;
    puVar23 = puVar38;
    do {
      lVar25 = lVar25 + -0x38;
      puVar23[3] = 0;
      puVar23[2] = 0;
      puVar23[5] = 0;
      puVar23[4] = 0;
      puVar23[1] = 0;
      *puVar23 = 0;
      puVar23 = puVar23 + 7;
    } while (lVar25 != 0);
    lVar25 = 0;
    uVar40 = 1;
    *(ulong **)(this + 0x720) = puVar38;
    while( true ) {
                    /* try { // try from 00a72ad0 to 00a72ae7 has its CatchHandler @ 00a73060 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                ((long)puVar38 + lVar25),(basic_string *)(lVar24 + lVar25));
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                ((long)puVar38 + lVar25) + 0x18,(basic_string *)(lVar24 + lVar25) + 6);
      *(undefined4 *)((long)puVar38 + lVar25 + 0x30) = *(undefined4 *)(lVar24 + lVar25 + 0x30);
      if (*(uint *)(this + 0x71c) <= uVar40) break;
      lVar24 = *(long *)(param_2 + 0x290);
      lVar25 = lVar25 + 0x38;
      puVar38 = *(ulong **)(this + 0x720);
      uVar40 = uVar40 + 1;
    }
  }
  iVar21 = *(int *)(this + 0x6dc);
  if (iVar21 != 0) {
    local_a8 = iVar21;
    local_88 = *(uint *)(this + 0x6d8);
  }
  uVar37 = (uint)(iVar21 != 0);
  iVar21 = *(int *)(this + 0x6e4);
  if (iVar21 != 0) {
    uVar40 = (ulong)uVar37;
    uVar37 = uVar37 + 1;
    *(undefined4 *)((long)local_84 + uVar40 * 4 + -4) = *(undefined4 *)(this + 0x6e0);
    *(int *)((long)local_a4 + uVar40 * 4 + -4) = iVar21;
  }
  iVar21 = *(int *)(this + 0x6ec);
  if (iVar21 != 0) {
    uVar40 = (ulong)uVar37;
    uVar37 = uVar37 + 1;
    *(undefined4 *)((long)local_84 + uVar40 * 4 + -4) = *(undefined4 *)(this + 0x6e8);
    *(int *)((long)local_a4 + uVar40 * 4 + -4) = iVar21;
  }
  iVar21 = *(int *)(this + 0x6f4);
  if (iVar21 != 0) {
    uVar40 = (ulong)uVar37;
    uVar37 = uVar37 + 1;
    *(undefined4 *)((long)local_84 + uVar40 * 4 + -4) = *(undefined4 *)(this + 0x6f0);
    *(int *)((long)local_a4 + uVar40 * 4 + -4) = iVar21;
  }
  iVar21 = *(int *)(this + 0x6fc);
  if (iVar21 != 0) {
    uVar40 = (ulong)uVar37;
    uVar37 = uVar37 + 1;
    *(undefined4 *)((long)local_84 + uVar40 * 4 + -4) = *(undefined4 *)(this + 0x6f8);
    *(int *)((long)local_a4 + uVar40 * 4 + -4) = iVar21;
  }
  iVar21 = *(int *)(this + 0x704);
  if (iVar21 != 0) {
    uVar40 = (ulong)uVar37;
    uVar37 = uVar37 + 1;
    *(undefined4 *)((long)local_84 + uVar40 * 4 + -4) = *(undefined4 *)(this + 0x700);
    *(int *)((long)local_a4 + uVar40 * 4 + -4) = iVar21;
  }
  iVar21 = *(int *)(this + 0x70c);
  if (iVar21 != 0) {
    uVar40 = (ulong)uVar37;
    uVar37 = uVar37 + 1;
    *(undefined4 *)((long)local_84 + uVar40 * 4 + -4) = *(undefined4 *)(this + 0x708);
    *(int *)((long)local_a4 + uVar40 * 4 + -4) = iVar21;
  }
  iVar21 = *(int *)(this + 0x714);
  if (iVar21 == 0) {
    if (uVar37 == 0) {
      lVar27 = *(long *)(lVar27 + 0x28);
      goto LAB_00a72fc4;
    }
  }
  else {
    uVar40 = (ulong)uVar37;
    uVar37 = uVar37 + 1;
    *(undefined4 *)((long)local_84 + uVar40 * 4 + -4) = *(undefined4 *)(this + 0x710);
    *(int *)((long)local_a4 + uVar40 * 4 + -4) = iVar21;
  }
  uVar19 = local_a8 + local_88;
  uVar47 = local_88;
  if (uVar37 != 1) {
    uVar40 = (ulong)uVar37 - 1;
    if (uVar40 < 8) {
      uVar32 = 1;
    }
    else {
      auVar46._0_8_ = CONCAT44(uVar19,uVar19);
      auVar46._8_4_ = uVar19;
      auVar46._12_4_ = uVar19;
      auVar50._0_8_ = CONCAT44(local_88,local_88);
      auVar50._8_4_ = local_88;
      auVar50._12_4_ = local_88;
      uVar34 = uVar40 & 0xfffffffffffffff8;
      uVar32 = uVar34 | 1;
      auVar51._8_8_ = auVar46._8_8_;
      auVar51._0_8_ = auVar46._0_8_;
      pauVar29 = (undefined (*) [12])&uStack_74;
      auVar52._8_8_ = auVar50._8_8_;
      auVar52._0_8_ = auVar50._0_8_;
      puVar35 = local_a4 + 2;
      uVar30 = uVar34;
      do {
        pauVar15 = pauVar29 + -2;
        pauVar16 = pauVar29 + -1;
        iVar21 = (int)((ulong)*(undefined8 *)(*pauVar16 + 4) >> 0x20);
        uVar9 = *(undefined8 *)*(undefined (*) [12])(*pauVar15 + 8);
        puVar18 = *pauVar29;
        iVar53 = (int)((ulong)*(undefined8 *)(puVar18 + 8) >> 0x20);
        puVar17 = *pauVar29;
        auVar14 = *pauVar29;
        pauVar29 = (undefined (*) [12])(pauVar29[2] + 8);
        uVar30 = uVar30 - 8;
        auVar8._12_4_ = iVar21;
        auVar8._0_12_ = *(undefined (*) [12])(*pauVar15 + 8);
        auVar50 = NEON_umin(auVar8,auVar50,4);
        puVar1 = puVar35 + -2;
        puVar6 = puVar35 + -1;
        puVar7 = puVar35 + 1;
        uVar13 = *puVar35;
        auVar10._12_4_ = iVar53;
        auVar10._0_12_ = auVar14;
        auVar52 = NEON_umin(auVar10,auVar52,4);
        puVar35 = puVar35 + 4;
        auVar11._4_4_ = (int)((ulong)*puVar1 >> 0x20) + (int)((ulong)uVar9 >> 0x20);
        auVar11._0_4_ = (int)*puVar1 + (int)uVar9;
        auVar11._8_4_ = (int)*puVar6 + (int)*(undefined8 *)(*pauVar16 + 4);
        auVar11._12_4_ = (int)((ulong)*puVar6 >> 0x20) + iVar21;
        auVar46 = NEON_umax(auVar46,auVar11,4);
        auVar12._4_4_ = (int)((ulong)uVar13 >> 0x20) + (int)((ulong)*(undefined8 *)puVar17 >> 0x20);
        auVar12._0_4_ = (int)uVar13 + (int)*(undefined8 *)puVar17;
        auVar12._8_4_ = (int)*puVar7 + (int)*(undefined8 *)(puVar18 + 8);
        auVar12._12_4_ = (int)((ulong)*puVar7 >> 0x20) + iVar53;
        auVar51 = NEON_umax(auVar51,auVar12,4);
      } while (uVar30 != 0);
      auVar50 = NEON_umin(auVar50,auVar52,4);
      auVar46 = NEON_umax(auVar46,auVar51,4);
      uVar47 = NEON_uminv(auVar50,4);
      uVar19 = NEON_umaxv(auVar46,4);
      if (uVar40 == uVar34) goto LAB_00a72d48;
    }
    lVar24 = uVar37 - uVar32;
    puVar33 = (uint *)((long)local_84 + uVar32 * 4 + -4);
    piVar31 = (int *)((long)local_a4 + uVar32 * 4 + -4);
    uVar39 = uVar47;
    uVar28 = uVar19;
    do {
      uVar42 = *puVar33;
      uVar47 = uVar42;
      if (uVar39 <= uVar42) {
        uVar47 = uVar39;
      }
      uVar19 = *piVar31 + uVar42;
      if (*piVar31 + uVar42 <= uVar28) {
        uVar19 = uVar28;
      }
      lVar24 = lVar24 + -1;
      puVar33 = puVar33 + 1;
      piVar31 = piVar31 + 1;
      uVar39 = uVar47;
      uVar28 = uVar19;
    } while (lVar24 != 0);
  }
LAB_00a72d48:
  uVar39 = 1 << (ulong)(uVar19 - uVar47 & 0x1f);
  uVar40 = (ulong)uVar39;
                    /* try { // try from 00a72d5c to 00a72d5f has its CatchHandler @ 00a73048 */
  puVar23 = (ulong *)operator_new__(uVar40 * 0x18 + 8);
  *puVar23 = uVar40;
  memset(puVar23 + 1,0,((uVar40 * 0x18 - 0x18) / 0x18) * 0x18 + 0x18);
                    /* try { // try from 00a72da0 to 00a72da7 has its CatchHandler @ 00a7304c */
  __s = operator_new__(uVar40);
  memset(__s,0,uVar40);
  pbVar41 = *(byte **)(param_2 + 0x290);
  pbVar26 = *(byte **)(param_2 + 0x298);
  if (pbVar41 != pbVar26) {
    if (uVar37 < 2) {
      uVar37 = 1;
    }
    do {
      uVar40 = 0;
      __nptr = *(byte **)(pbVar41 + 0x10);
      uVar42 = 0;
      uVar28 = 0;
      if ((*pbVar41 & 1) == 0) {
        __nptr = pbVar41 + 1;
      }
      do {
        bVar4 = *__nptr;
        uVar36 = (uint)bVar4;
        if (uVar36 == 0x2a) {
          __nptr = __nptr + 1;
          bVar4 = *__nptr;
          if (bVar4 == 0x3b) goto LAB_00a72e04;
LAB_00a72e94:
          if (bVar4 == 0) break;
          if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
             (iVar21 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
             iVar21 != 0)) {
                    /* try { // try from 00a72edc to 00a72ee3 has its CatchHandler @ 00a73028 */
            LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
            __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                         &PTR_LOOP_00fd8de0);
            __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
          }
          pbVar2 = pbVar41 + 1;
          if ((*pbVar41 & 1) != 0) {
            pbVar2 = *(byte **)(pbVar41 + 0x10);
          }
                    /* try { // try from 00a72ebc to 00a72ecb has its CatchHandler @ 00a73064 */
          LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                             "Error: Malformed \'match\' string \'%s\' in TerrainLayerTransformGroup\n"
                             ,pbVar2);
        }
        else {
          uVar20 = atoi((char *)__nptr);
          while (0xfffffff5 < uVar36 - 0x3a) {
            __nptr = __nptr + 1;
            bVar4 = *__nptr;
            uVar36 = (uint)bVar4;
          }
          uVar36 = *(uint *)((long)local_84 + uVar40 * 4 + -4);
          uVar5 = -1 << (ulong)(*(uint *)((long)local_a4 + uVar40 * 4 + -4) & 0x1f);
          uVar28 = ~uVar5 << (ulong)(uVar36 & 0x1f) | uVar28;
          uVar42 = (uVar20 & (uVar5 ^ 0xffffffff)) << (ulong)(uVar36 & 0x1f) | uVar42;
          if (bVar4 != 0x3b) goto LAB_00a72e94;
LAB_00a72e04:
          __nptr = __nptr + 1;
        }
        uVar40 = uVar40 + 1;
      } while (uVar40 != uVar37);
      uVar36 = 0;
      do {
        uVar20 = uVar36 + uVar42;
                    /* try { // try from 00a72f24 to 00a72f2b has its CatchHandler @ 00a73068 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     *)(puVar23 + 1 + (ulong)uVar20 * 3),(basic_string *)(pbVar41 + 0x18));
        uVar36 = uVar28 + 1 + uVar36 & ~uVar28;
        *(char *)((long)__s + (ulong)uVar20) = (char)*(undefined4 *)(pbVar41 + 0x30);
      } while (uVar36 < uVar39);
      pbVar41 = pbVar41 + 0x38;
    } while (pbVar41 != pbVar26);
  }
                    /* try { // try from 00a72f8c to 00a72f9b has its CatchHandler @ 00a7304c */
  TerrainLodTexture::addDynamicLayer
            (*(TerrainLodTexture **)(*(long *)(this + 0x1f8) + 0x248),*(DensityMap **)(this + 0x218)
             ,*(uint *)(param_4 + 0x80),uVar47 + *(int *)(param_4 + 0x7c),uVar19 - uVar47,uVar39 - 1
             ,(DistanceTextureDesc *)(puVar23 + 4),false,uVar39 - 1,(uchar *)((long)__s + 1));
  for (lVar24 = *puVar23 * 0x18; lVar24 != 0; lVar24 = lVar24 + -0x18) {
    if ((*(byte *)((long)puVar23 + lVar24 + -0x10) & 1) != 0) {
      operator_delete(*(void **)((long)puVar23 + lVar24));
    }
  }
  operator_delete__(puVar23);
  operator_delete__(__s);
  lVar27 = *(long *)(lVar27 + 0x28);
LAB_00a72fc4:
  if (lVar27 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


