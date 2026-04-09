// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: exportScenegraph
// Entry Point: 0090ba7c
// Size: 39040 bytes
// Signature: undefined __cdecl exportScenegraph(ScenegraphNode * param_1, uint param_2, set * param_3, map * param_4, map * param_5, map * param_6, map * param_7, map * param_8, map * param_9, basic_string * param_10, char * param_11, basic_string * param_12, bool param_13, FileOutputStream * param_14)


/* WARNING: Type propagation algorithm not settling */
/* I3DSave::exportScenegraph(ScenegraphNode*, unsigned int, std::__ndk1::set<TransformGroup*,
   std::__ndk1::less<TransformGroup*>, std::__ndk1::allocator<TransformGroup*> >&,
   std::__ndk1::map<TransformGroup*, I3DSave::I3DTransformPoseObject,
   std::__ndk1::less<TransformGroup*>, std::__ndk1::allocator<std::__ndk1::pair<TransformGroup*
   const, I3DSave::I3DTransformPoseObject> > >&, std::__ndk1::map<Geometry*, unsigned int,
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
   std::__ndk1::map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, SceneSave::SerializeFile,
   std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, SceneSave::SerializeFile> >
   >&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   > const&, char const*, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, bool, FileOutputStream&) */

void I3DSave::exportScenegraph
               (ScenegraphNode *param_1,uint param_2,set *param_3,map *param_4,map *param_5,
               map *param_6,map *param_7,map *param_8,map *param_9,basic_string *param_10,
               char *param_11,basic_string *param_12,bool param_13,FileOutputStream *param_14)

{
  FileOutputStream *pFVar1;
  long **pplVar2;
  BaseTerrain *this;
  ScenegraphNode *pSVar3;
  __tree<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
  *p_Var4;
  FileOutputStream FVar5;
  ScenegraphNode SVar6;
  byte bVar7;
  long lVar8;
  void *pvVar9;
  undefined8 *puVar10;
  void *pvVar11;
  bool bVar12;
  int iVar13;
  uint uVar14;
  undefined4 uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  __tree_iterator _Var21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  size_t sVar27;
  char *pcVar28;
  char *pcVar29;
  FileOutputStream *pFVar30;
  void *pvVar31;
  ulong uVar32;
  long lVar33;
  long lVar34;
  byte *pbVar35;
  undefined8 *puVar36;
  basic_ostream *pbVar37;
  char *pcVar38;
  undefined **ppuVar39;
  char *pcVar40;
  undefined **ppuVar41;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  undefined8 extraout_x1_08;
  undefined8 extraout_x1_09;
  undefined8 extraout_x1_10;
  undefined8 extraout_x1_11;
  undefined8 extraout_x1_12;
  undefined8 extraout_x1_13;
  undefined8 extraout_x1_14;
  undefined8 extraout_x1_15;
  undefined8 extraout_x1_16;
  undefined8 extraout_x1_17;
  undefined8 extraout_x1_18;
  undefined8 extraout_x1_19;
  undefined8 extraout_x1_20;
  undefined8 extraout_x1_21;
  undefined8 extraout_x1_22;
  undefined8 extraout_x1_23;
  undefined8 extraout_x1_24;
  undefined8 extraout_x1_25;
  undefined8 extraout_x1_26;
  undefined8 extraout_x1_27;
  undefined8 extraout_x1_28;
  undefined8 extraout_x1_29;
  undefined8 extraout_x1_30;
  undefined8 extraout_x1_31;
  undefined8 extraout_x1_32;
  undefined8 extraout_x1_33;
  undefined8 extraout_x1_34;
  undefined8 extraout_x1_35;
  undefined8 extraout_x1_36;
  undefined8 extraout_x1_37;
  undefined8 extraout_x1_38;
  undefined8 extraout_x1_39;
  undefined8 extraout_x1_40;
  undefined8 extraout_x1_41;
  undefined8 extraout_x1_42;
  undefined8 extraout_x1_43;
  undefined8 extraout_x1_44;
  undefined8 extraout_x1_45;
  undefined8 extraout_x1_46;
  undefined8 extraout_x1_47;
  undefined8 extraout_x1_48;
  undefined8 extraout_x1_49;
  undefined8 extraout_x1_50;
  undefined8 extraout_x1_51;
  undefined8 extraout_x1_52;
  undefined8 extraout_x1_53;
  undefined8 extraout_x1_54;
  undefined8 extraout_x1_55;
  undefined8 extraout_x1_56;
  undefined8 extraout_x1_57;
  undefined8 extraout_x1_58;
  undefined8 extraout_x1_59;
  undefined8 extraout_x1_60;
  undefined8 extraout_x1_61;
  undefined8 extraout_x1_62;
  undefined8 extraout_x1_63;
  undefined8 extraout_x1_64;
  undefined8 extraout_x1_65;
  undefined8 extraout_x1_66;
  undefined8 extraout_x1_67;
  undefined8 extraout_x1_68;
  undefined8 extraout_x1_69;
  undefined8 extraout_x1_70;
  undefined8 extraout_x1_71;
  undefined8 extraout_x1_72;
  undefined8 extraout_x1_73;
  undefined8 extraout_x1_74;
  undefined8 extraout_x1_75;
  undefined8 extraout_x1_76;
  undefined8 extraout_x1_77;
  undefined8 extraout_x1_78;
  undefined8 extraout_x1_79;
  undefined8 extraout_x1_80;
  undefined8 extraout_x1_81;
  undefined8 extraout_x1_82;
  undefined8 extraout_x1_83;
  undefined8 extraout_x1_84;
  undefined8 extraout_x1_85;
  undefined8 extraout_x1_86;
  undefined8 extraout_x1_87;
  undefined8 extraout_x1_88;
  undefined8 extraout_x1_89;
  undefined8 extraout_x1_90;
  undefined8 extraout_x1_91;
  undefined8 extraout_x1_92;
  undefined8 extraout_x1_93;
  undefined8 extraout_x1_94;
  undefined8 extraout_x1_95;
  undefined8 extraout_x1_96;
  undefined8 extraout_x1_97;
  undefined8 extraout_x1_98;
  undefined8 extraout_x1_99;
  undefined8 extraout_x1_x00100;
  undefined8 extraout_x1_x00101;
  undefined8 extraout_x1_x00102;
  undefined8 extraout_x1_x00103;
  undefined8 extraout_x1_x00104;
  undefined8 extraout_x1_x00105;
  undefined8 extraout_x1_x00106;
  undefined8 extraout_x1_x00107;
  undefined8 extraout_x1_x00108;
  undefined8 extraout_x1_x00109;
  undefined8 extraout_x1_x00110;
  undefined8 extraout_x1_x00111;
  undefined8 extraout_x1_x00112;
  undefined8 extraout_x1_x00113;
  undefined8 extraout_x1_x00114;
  undefined8 extraout_x1_x00115;
  undefined8 extraout_x1_x00116;
  undefined8 extraout_x1_x00117;
  undefined8 extraout_x1_x00118;
  undefined8 extraout_x1_x00119;
  undefined8 extraout_x1_x00120;
  undefined8 extraout_x1_x00121;
  undefined8 extraout_x1_x00122;
  undefined8 extraout_x1_x00123;
  undefined8 extraout_x1_x00124;
  undefined8 extraout_x1_x00125;
  undefined8 extraout_x1_x00126;
  undefined8 extraout_x1_x00127;
  undefined8 extraout_x1_x00128;
  undefined8 extraout_x1_x00129;
  undefined8 extraout_x1_x00130;
  undefined8 extraout_x1_x00131;
  undefined8 extraout_x1_x00132;
  undefined8 extraout_x1_x00133;
  undefined8 extraout_x1_x00134;
  undefined8 extraout_x1_x00135;
  undefined8 extraout_x1_x00136;
  undefined8 extraout_x1_x00137;
  undefined8 extraout_x1_x00138;
  undefined8 extraout_x1_x00139;
  undefined8 extraout_x1_x00140;
  undefined8 extraout_x1_x00141;
  undefined8 extraout_x1_x00142;
  undefined8 extraout_x1_x00143;
  undefined8 extraout_x1_x00144;
  undefined8 extraout_x1_x00145;
  undefined8 extraout_x1_x00146;
  undefined8 extraout_x1_x00147;
  undefined8 extraout_x1_x00148;
  undefined8 extraout_x1_x00149;
  undefined8 extraout_x1_x00150;
  undefined8 extraout_x1_x00151;
  undefined8 extraout_x1_x00152;
  undefined8 extraout_x1_x00153;
  undefined8 extraout_x1_x00154;
  undefined8 extraout_x1_x00155;
  undefined8 extraout_x1_x00156;
  undefined8 extraout_x1_x00157;
  undefined8 extraout_x1_x00158;
  undefined8 extraout_x1_x00159;
  undefined8 extraout_x1_x00160;
  undefined8 extraout_x1_x00161;
  undefined8 extraout_x1_x00162;
  undefined8 extraout_x1_x00163;
  undefined8 extraout_x1_x00164;
  undefined8 extraout_x1_x00165;
  undefined8 extraout_x1_x00166;
  undefined8 extraout_x1_x00167;
  undefined8 extraout_x1_x00168;
  undefined8 extraout_x1_x00169;
  undefined8 extraout_x1_x00170;
  undefined8 extraout_x1_x00171;
  undefined8 extraout_x1_x00172;
  undefined8 extraout_x1_x00173;
  undefined8 extraout_x1_x00174;
  undefined8 extraout_x1_x00175;
  undefined *puVar42;
  undefined8 extraout_x1_x00176;
  undefined8 uVar43;
  map *pmVar44;
  bool bVar45;
  uint uVar46;
  ulong uVar47;
  map *pmVar48;
  map **ppmVar49;
  long lVar50;
  long **pplVar51;
  ulong uVar52;
  float *this_00;
  map **ppmVar53;
  long lVar54;
  __tree<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
  *p_Var55;
  map **ppmVar56;
  long *plVar57;
  uint *puVar58;
  __tree<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
  *p_Var59;
  long *plVar60;
  DensityMap *this_01;
  byte **ppbVar61;
  byte *pbVar62;
  byte *pbVar63;
  long *plVar64;
  undefined4 uVar65;
  byte *pbVar66;
  long *plVar67;
  undefined4 uVar68;
  byte *pbVar69;
  long **pplVar70;
  TerrainLayerTransformGroup *this_02;
  float fVar71;
  undefined auVar72 [16];
  undefined8 *local_500;
  ulong local_4e8;
  undefined8 uStack_4e0;
  char *local_4d8;
  FileOutputStream *local_4d0;
  undefined8 uStack_4c8;
  void *local_4c0;
  ulong local_4b8;
  undefined8 uStack_4b0;
  char *local_4a8;
  undefined8 local_4a0;
  undefined8 *local_498;
  char *local_490;
  undefined8 local_488;
  undefined **local_480;
  char *local_478;
  byte local_440;
  undefined8 uStack_438;
  void *local_430;
  undefined8 uStack_428;
  undefined4 local_420;
  undefined **local_418 [17];
  undefined8 local_390;
  undefined4 local_388;
  undefined8 local_380;
  undefined8 uStack_378;
  char *local_370;
  undefined8 uStack_368;
  undefined8 local_360;
  long local_358;
  undefined8 local_350;
  ulong uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined7 uStack_298;
  undefined local_291;
  undefined7 uStack_290;
  undefined8 uStack_289;
  char local_248 [256];
  uint local_148;
  uint uStack_144;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined uStack_110;
  undefined7 local_10f;
  undefined uStack_108;
  char cStack_100;
  undefined4 local_fc;
  uint uStack_f8;
  float local_f4;
  void *local_f0;
  void *pvStack_e8;
  undefined8 local_e0;
  __tree<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
  *p_Stack_d8;
  __tree<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
  *local_d0;
  undefined8 uStack_c8;
  undefined8 local_b8;
  char *local_b0;
  void *local_a8;
  undefined8 local_a0;
  size_t local_98;
  char *local_90;
  long local_88;
  
  lVar8 = tpidr_el0;
  pFVar1 = param_14 + 0x10;
  local_88 = *(long *)(lVar8 + 0x28);
  uVar47 = *(ulong *)(param_1 + 0x10);
  pplVar2 = (long **)(param_14 + 8);
  pmVar44 = param_6;
  uVar46 = param_2;
  if (param_2 != 0) {
    do {
      while( true ) {
        uVar16 = uVar46;
        if (0x59 < uVar46) {
          uVar16 = 0x5a;
        }
        FVar5 = *pFVar1;
        pcVar28 = &UNK_00501a54 + -(ulong)(uVar16 << 1);
        plVar60 = *pplVar2;
        sVar27 = strlen(pcVar28);
        if (FVar5 == (FileOutputStream)0x0) break;
        File::writeDosEOLExpand((File *)plVar60,pcVar28,(uint)sVar27);
        uVar46 = uVar46 - uVar16;
        if (uVar46 == 0) goto LAB_0090bb5c;
      }
      (**(code **)(*plVar60 + 0x30))(plVar60,pcVar28);
      uVar46 = uVar46 - uVar16;
    } while (uVar46 != 0);
  }
LAB_0090bb5c:
  pcVar28 = (char *)I3DSaveUtil::getNodeTypeName(param_1);
  iVar13 = strcmp(pcVar28,"Dynamic");
  plVar60 = *pplVar2;
  if (*pFVar1 == (FileOutputStream)0x0) {
    (**(code **)(*plVar60 + 0x30))(plVar60,&DAT_004c7e9d,1);
  }
  else {
    File::writeDosEOLExpand((File *)plVar60,&DAT_004c7e9d,1);
  }
  FVar5 = *pFVar1;
  plVar60 = *pplVar2;
  sVar27 = strlen(pcVar28);
  if (FVar5 == (FileOutputStream)0x0) {
    (**(code **)(*plVar60 + 0x30))(plVar60,pcVar28);
  }
  else {
    File::writeDosEOLExpand((File *)plVar60,pcVar28,(uint)sVar27);
  }
  uVar46 = (uint)uVar47;
  if ((uVar46 >> 0xb & 1) == 0) {
joined_r0x0090bd38:
    bVar12 = false;
  }
  else if ((uVar46 >> 0x11 & 1) == 0) {
    ppmVar53 = (map **)(param_5 + 8);
    ppmVar56 = (map **)*ppmVar53;
    if (ppmVar56 == (map **)0x0) goto joined_r0x0090bd38;
    pmVar48 = *(map **)(param_1 + 0x170);
    ppmVar49 = ppmVar53;
    do {
      if (ppmVar56[4] >= pmVar48) {
        ppmVar49 = ppmVar56;
      }
      ppmVar56 = (map **)ppmVar56[ppmVar56[4] < pmVar48];
    } while (ppmVar56 != (map **)0x0);
    if ((ppmVar49 != ppmVar53) && (ppmVar49[4] <= pmVar48)) {
      ppmVar49 = ppmVar49 + 5;
      goto LAB_0090bec0;
    }
LAB_0090bd1c:
    bVar12 = false;
  }
  else {
    pmVar48 = (map *)DestructionGeometry::getShared();
    ppmVar53 = (map **)(param_7 + 8);
    ppmVar56 = (map **)*ppmVar53;
    ppmVar49 = ppmVar53;
    if (ppmVar56 == (map **)0x0) goto joined_r0x0090bd38;
    do {
      if (ppmVar56[4] >= pmVar48) {
        ppmVar49 = ppmVar56;
      }
      ppmVar56 = (map **)ppmVar56[ppmVar56[4] < pmVar48];
    } while (ppmVar56 != (map **)0x0);
    if ((ppmVar49 == ppmVar53) || (pmVar48 < ppmVar49[4])) goto LAB_0090bd1c;
    ppmVar49 = ppmVar49 + 8;
LAB_0090bec0:
    uVar16 = *(uint *)ppmVar49;
    local_380 = param_14;
    if (iVar13 == 0) {
      I3DWriter::writeUint32Attribute((I3DWriter *)&local_380,"dynamicId",uVar16);
      lVar54 = ParticleSystem::getEmitterShape();
      if (lVar54 != 0) {
        uVar16 = *(uint *)(lVar54 + 0x18);
        pcVar29 = "emitterShapeNodeId";
        goto LAB_0090cacc;
      }
    }
    else {
      pcVar29 = "shapeId";
LAB_0090cacc:
      I3DWriter::writeUint32Attribute((I3DWriter *)&local_380,pcVar29,uVar16);
    }
    bVar12 = true;
  }
  if ((uVar46 >> 5 & 1) != 0) {
    exportTransformAttributes((TransformGroup *)param_1,param_4,param_9,param_14);
  }
  if ((uVar46 >> 6 & 1) != 0) {
    uVar14 = LODTransformGroup::getNumLevels();
    uVar16 = (uint)((ulong)(*(long *)(param_1 + 0x30) - *(long *)(param_1 + 0x28)) >> 3);
    if (uVar14 <= uVar16) {
      uVar16 = uVar14;
    }
    if (1 < uVar16) {
      plVar60 = *pplVar2;
      if (*pFVar1 == (FileOutputStream)0x0) {
        (**(code **)(*plVar60 + 0x30))(plVar60," lodDistance=\"",0xe);
      }
      else {
        File::writeDosEOLExpand((File *)plVar60," lodDistance=\"",0xe);
      }
      uVar14 = LODTransformGroup::getNumLevels();
      uVar16 = (uint)((ulong)(*(long *)(param_1 + 0x30) - *(long *)(param_1 + 0x28)) >> 3);
      if (uVar14 <= uVar16) {
        uVar16 = uVar14;
      }
      if (uVar16 != 0) {
        fVar71 = (float)LODTransformGroup::getDistance((LODTransformGroup *)param_1,0);
        uVar15 = FUN_0091faa0((double)fVar71,&local_380,extraout_x1,&DAT_0050d9a5);
        (**(code **)(**pplVar2 + 0x30))(*pplVar2,&local_380,uVar15);
        if (uVar16 != 1) {
          uVar14 = 1;
          do {
            plVar60 = *pplVar2;
            if (*pFVar1 == (FileOutputStream)0x0) {
              (**(code **)(*plVar60 + 0x30))(plVar60,&DAT_004d3339,1);
            }
            else {
              File::writeDosEOLExpand((File *)plVar60,&DAT_004d3339,1);
            }
            fVar71 = (float)LODTransformGroup::getDistance((LODTransformGroup *)param_1,uVar14);
            uVar15 = FUN_0091faa0((double)fVar71,&local_380,extraout_x1_00,&DAT_0050d9a5);
            (**(code **)(**pplVar2 + 0x30))(*pplVar2,&local_380,uVar15);
            uVar14 = uVar14 + 1;
          } while (uVar16 != uVar14);
        }
      }
      plVar60 = *pplVar2;
      if (*pFVar1 == (FileOutputStream)0x0) {
        (**(code **)(*plVar60 + 0x30))(plVar60,&DAT_004e56b4,1);
      }
      else {
        File::writeDosEOLExpand((File *)plVar60,&DAT_004e56b4,1);
      }
      if (((byte)param_1[0x41] >> 4 & 1) == 0) {
        plVar60 = *pplVar2;
        if (*pFVar1 == (FileOutputStream)0x0) {
          (**(code **)(*plVar60 + 0x30))(plVar60," lodBlending=\"false\"",0x14);
        }
        else {
          File::writeDosEOLExpand((File *)plVar60," lodBlending=\"false\"",0x14);
        }
      }
    }
  }
  if ((uVar46 >> 0xb & 1) != 0) {
    if (bVar12) {
      exportShapeAttributes((GsShape *)param_1,param_3,param_14);
    }
    goto LAB_00914ee4;
  }
  if ((uVar46 >> 0xd & 1) == 0) {
    if ((uVar46 >> 7 & 1) == 0) {
      if ((uVar46 >> 0xf & 1) != 0) {
        plVar60 = *pplVar2;
        if (*pFVar1 == (FileOutputStream)0x0) {
          (**(code **)(*plVar60 + 0x30))(plVar60," fov=\"",6);
        }
        else {
          File::writeDosEOLExpand((File *)plVar60," fov=\"",6);
        }
        fVar71 = (float)Camera::getFovY();
        fVar71 = (float)MathUtil::radianToDegree(fVar71);
        uVar15 = FUN_0091faa0((double)fVar71,&local_380,extraout_x1_16,&DAT_0050d9a5);
        (**(code **)(**pplVar2 + 0x30))(*pplVar2,&local_380,uVar15);
        plVar60 = *pplVar2;
        if (*pFVar1 == (FileOutputStream)0x0) {
          (**(code **)(*plVar60 + 0x30))(plVar60,&DAT_004e56b4,1);
        }
        else {
          File::writeDosEOLExpand((File *)plVar60,&DAT_004e56b4,1);
        }
        plVar60 = *pplVar2;
        if (*pFVar1 == (FileOutputStream)0x0) {
          (**(code **)(*plVar60 + 0x30))(plVar60," nearClip=\"",0xb);
        }
        else {
          File::writeDosEOLExpand((File *)plVar60," nearClip=\"",0xb);
        }
        fVar71 = (float)Camera::getNearClip();
        uVar15 = FUN_0091faa0((double)fVar71,&local_380,extraout_x1_22,&DAT_0050d9a5);
        (**(code **)(**pplVar2 + 0x30))(*pplVar2,&local_380,uVar15);
        plVar60 = *pplVar2;
        if (*pFVar1 == (FileOutputStream)0x0) {
          (**(code **)(*plVar60 + 0x30))(plVar60,&DAT_004e56b4,1);
        }
        else {
          File::writeDosEOLExpand((File *)plVar60,&DAT_004e56b4,1);
        }
        plVar60 = *pplVar2;
        if (*pFVar1 == (FileOutputStream)0x0) {
          (**(code **)(*plVar60 + 0x30))(plVar60," farClip=\"",10);
        }
        else {
          File::writeDosEOLExpand((File *)plVar60," farClip=\"",10);
        }
        fVar71 = (float)Camera::getFarClip();
        uVar15 = FUN_0091faa0((double)fVar71,&local_380,extraout_x1_23,&DAT_0050d9a5);
        (**(code **)(**pplVar2 + 0x30))(*pplVar2,&local_380,uVar15);
        plVar60 = *pplVar2;
        if (*pFVar1 == (FileOutputStream)0x0) {
          (**(code **)(*plVar60 + 0x30))(plVar60,&DAT_004e56b4,1);
          SVar6 = param_1[0x16c];
        }
        else {
          File::writeDosEOLExpand((File *)plVar60,&DAT_004e56b4,1);
          SVar6 = param_1[0x16c];
        }
        if (SVar6 != (ScenegraphNode)0x0) {
          plVar60 = *pplVar2;
          if (*pFVar1 == (FileOutputStream)0x0) {
            (**(code **)(*plVar60 + 0x30))(plVar60," orthographic=\"true\"",0x14);
          }
          else {
            File::writeDosEOLExpand((File *)plVar60," orthographic=\"true\"",0x14);
          }
        }
        plVar60 = *pplVar2;
        if (*pFVar1 == (FileOutputStream)0x0) {
          (**(code **)(*plVar60 + 0x30))(plVar60," orthographicHeight=\"",0x15);
          uVar43 = extraout_x1_x00137;
        }
        else {
          File::writeDosEOLExpand((File *)plVar60," orthographicHeight=\"",0x15);
          uVar43 = extraout_x1_x00136;
        }
        fVar71 = *(float *)(param_1 + 0x168);
LAB_00914e8c:
        uVar15 = FUN_0091faa0((double)fVar71,&local_380,uVar43,&DAT_0050d9a5);
        (**(code **)(**pplVar2 + 0x30))(*pplVar2,&local_380,uVar15);
        plVar60 = *pplVar2;
        if (*pFVar1 != (FileOutputStream)0x0) goto LAB_00913dac;
        goto LAB_00914ecc;
      }
      if ((uVar46 >> 0xe & 1) == 0) {
        if ((uVar46 >> 0x10 & 1) == 0) {
          if ((uVar47 >> 0x3b & 1) != 0) {
            pcVar29 = (char *)NoteNode::getText();
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            basic_string<decltype(nullptr)>
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_380,pcVar29);
                    /* try { // try from 0090bf50 to 0090bf5b has its CatchHandler @ 009152fc */
            StringUtil::encodeHtmlSpecialCharactersInPlace((basic_string *)&local_380,false);
            local_488 = (undefined **)0x0;
            local_480 = (undefined **)0x0;
            local_478 = (char *)0x0;
            pcVar29 = (char *)((ulong)&local_380 | 1);
            if (((ulong)local_380 & 1) != 0) {
              pcVar29 = local_370;
            }
                    /* try { // try from 0090bf78 to 0090c003 has its CatchHandler @ 00915344 */
            StringUtil::convertUtf8ToAscii(pcVar29,(basic_string *)&local_488,false);
            pFVar30 = (FileOutputStream *)FileOutputStream::operator<<(param_14," text=\"");
            pFVar30 = FileOutputStream::operator<<(pFVar30,(basic_string *)&local_488);
            pFVar30 = (FileOutputStream *)FileOutputStream::operator<<(pFVar30,"\" color=\"");
            uVar16 = NoteNode::getColor();
            pFVar30 = (FileOutputStream *)FileOutputStream::operator<<(pFVar30,uVar16);
            pFVar30 = (FileOutputStream *)FileOutputStream::operator<<(pFVar30,"\" fixedSize=\"");
            uVar47 = NoteNode::getFixedSize();
            pcVar29 = "true";
            if ((uVar47 & 1) == 0) {
              pcVar29 = "false";
            }
            pFVar30 = (FileOutputStream *)FileOutputStream::operator<<(pFVar30,pcVar29);
            FileOutputStream::operator<<(pFVar30,"\"");
            if (((ulong)local_488 & 1) != 0) {
              operator_delete(local_478);
            }
            if (((ulong)local_380 & 1) != 0) {
              operator_delete(local_370);
            }
          }
        }
        else {
          ppmVar53 = (map **)(param_8 + 8);
          ppmVar56 = (map **)*ppmVar53;
          ppmVar49 = ppmVar53;
          if (ppmVar56 != (map **)0x0) {
            do {
              if ((ScenegraphNode *)ppmVar56[4] >= param_1) {
                ppmVar49 = ppmVar56;
              }
              ppmVar56 = (map **)ppmVar56[(ScenegraphNode *)ppmVar56[4] < param_1];
            } while (ppmVar56 != (map **)0x0);
            if ((ppmVar49 != ppmVar53) && ((ScenegraphNode *)ppmVar49[4] <= param_1)) {
              pFVar30 = (FileOutputStream *)FileOutputStream::operator<<(param_14," shapeId=\"");
              pFVar30 = (FileOutputStream *)
                        FileOutputStream::operator<<(pFVar30,*(uint *)(ppmVar49 + 5));
              FileOutputStream::operator<<(pFVar30,"\"");
            }
          }
        }
      }
      else {
        uVar16 = AudioSourceSample::getNumElements();
        plVar60 = *pplVar2;
        if (*pFVar1 == (FileOutputStream)0x0) {
          (**(code **)(*plVar60 + 0x30))(plVar60," fileIds=\"",10);
        }
        else {
          File::writeDosEOLExpand((File *)plVar60," fileIds=\"",10);
        }
        if (uVar16 != 0) {
          uVar14 = 0;
          do {
            if (uVar14 != 0) {
              plVar60 = *pplVar2;
              if (*pFVar1 == (FileOutputStream)0x0) {
                (**(code **)(*plVar60 + 0x30))(plVar60,&DAT_004d3339,1);
              }
              else {
                File::writeDosEOLExpand((File *)plVar60,&DAT_004d3339,1);
              }
            }
            pcVar29 = (char *)AudioSource::getSampleElementFilenameAt((AudioSource *)param_1,uVar14)
            ;
            ppuVar39 = (undefined **)strlen(pcVar29);
            if ((undefined **)0xffffffffffffffef < ppuVar39) {
                    /* WARNING: Subroutine does not return */
              std::__ndk1::__basic_string_common<true>::__throw_length_error();
            }
            if (ppuVar39 < (undefined **)0x17) {
              local_488 = (undefined **)CONCAT71(local_488._1_7_,(char)((int)ppuVar39 << 1));
              pcVar40 = (char *)((ulong)&local_488 | 1);
              if (ppuVar39 != (undefined **)0x0) goto LAB_00913860;
            }
            else {
              pcVar40 = (char *)operator_new((ulong)(ppuVar39 + 2) & 0xfffffffffffffff0);
              local_488 = (undefined **)((ulong)(ppuVar39 + 2) & 0xfffffffffffffff0 | 1);
              local_480 = ppuVar39;
              local_478 = pcVar40;
LAB_00913860:
              memcpy(pcVar40,pcVar29,(size_t)ppuVar39);
            }
            pcVar40[(long)ppuVar39] = '\0';
                    /* try { // try from 00913874 to 009138bb has its CatchHandler @ 00915590 */
            std::__ndk1::
            __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>>>
            ::
            find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                      ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>>>
                        *)param_9,(basic_string *)&local_488);
            uVar15 = FUN_0091faa0(&local_380);
            (**(code **)(**pplVar2 + 0x30))(*pplVar2,&local_380,uVar15);
            if (((ulong)local_488 & 1) != 0) {
              operator_delete(local_478);
            }
            uVar14 = uVar14 + 1;
          } while (uVar16 != uVar14);
        }
        plVar60 = *pplVar2;
        if (*pFVar1 == (FileOutputStream)0x0) {
          (**(code **)(*plVar60 + 0x30))(plVar60,&DAT_004e56b4,1);
        }
        else {
          File::writeDosEOLExpand((File *)plVar60,&DAT_004e56b4,1);
        }
        plVar60 = *pplVar2;
        if (*pFVar1 == (FileOutputStream)0x0) {
          (**(code **)(*plVar60 + 0x30))(plVar60," range=\"",8);
        }
        else {
          File::writeDosEOLExpand((File *)plVar60," range=\"",8);
        }
        fVar71 = (float)AudioSource::getRange();
        uVar15 = FUN_0091faa0((double)fVar71,&local_380,extraout_x1_x00156,&DAT_0050d9a5);
        (**(code **)(**pplVar2 + 0x30))(*pplVar2,&local_380,uVar15);
        plVar60 = *pplVar2;
        if (*pFVar1 == (FileOutputStream)0x0) {
          (**(code **)(*plVar60 + 0x30))(plVar60,&DAT_004e56b4,1);
        }
        else {
          File::writeDosEOLExpand((File *)plVar60,&DAT_004e56b4,1);
        }
        plVar60 = *pplVar2;
        if (*pFVar1 == (FileOutputStream)0x0) {
          (**(code **)(*plVar60 + 0x30))(plVar60," innerRange=\"",0xd);
        }
        else {
          File::writeDosEOLExpand((File *)plVar60," innerRange=\"",0xd);
        }
        fVar71 = (float)AudioSource::getInnerRange();
        uVar15 = FUN_0091faa0((double)fVar71,&local_380,extraout_x1_x00157,&DAT_0050d9a5);
        (**(code **)(**pplVar2 + 0x30))(*pplVar2,&local_380,uVar15);
        plVar60 = *pplVar2;
        if (*pFVar1 == (FileOutputStream)0x0) {
          (**(code **)(*plVar60 + 0x30))(plVar60,&DAT_004e56b4,1);
        }
        else {
          File::writeDosEOLExpand((File *)plVar60,&DAT_004e56b4,1);
        }
        plVar60 = *pplVar2;
        if (*pFVar1 == (FileOutputStream)0x0) {
          (**(code **)(*plVar60 + 0x30))(plVar60," volume=\"",9);
        }
        else {
          File::writeDosEOLExpand((File *)plVar60," volume=\"",9);
        }
        fVar71 = (float)AudioSource::getVolume();
        uVar15 = FUN_0091faa0((double)fVar71,&local_380,extraout_x1_x00158,&DAT_0050d9a5);
        (**(code **)(**pplVar2 + 0x30))(*pplVar2,&local_380,uVar15);
        plVar60 = *pplVar2;
        if (*pFVar1 == (FileOutputStream)0x0) {
          (**(code **)(*plVar60 + 0x30))(plVar60,&DAT_004e56b4,1);
        }
        else {
          File::writeDosEOLExpand((File *)plVar60,&DAT_004e56b4,1);
        }
        plVar60 = *pplVar2;
        if (*pFVar1 == (FileOutputStream)0x0) {
          (**(code **)(*plVar60 + 0x30))(plVar60," loops=\"",8);
          uVar43 = extraout_x1_x00160;
        }
        else {
          File::writeDosEOLExpand((File *)plVar60," loops=\"",8);
          uVar43 = extraout_x1_x00159;
        }
        uVar15 = FUN_0091faa0(&local_380,uVar43,&DAT_004cf2ba,*(undefined4 *)(param_1 + 0x1dc));
        (**(code **)(**pplVar2 + 0x30))(*pplVar2,&local_380,uVar15);
        plVar60 = *pplVar2;
        if (*pFVar1 == (FileOutputStream)0x0) {
          (**(code **)(*plVar60 + 0x30))(plVar60,&DAT_004e56b4,1);
        }
        else {
          File::writeDosEOLExpand((File *)plVar60,&DAT_004e56b4,1);
        }
        if (*(int *)(param_1 + 0x1c0) != AudioSource::s_defaultGroup) {
          pFVar30 = (FileOutputStream *)FileOutputStream::operator<<(param_14," audioGroup=\"");
          pcVar29 = (char *)AudioSource::getNameFromGroup(*(uint *)(param_1 + 0x1c0));
          pFVar30 = (FileOutputStream *)FileOutputStream::operator<<(pFVar30,pcVar29);
          FileOutputStream::operator<<(pFVar30,"\"");
        }
        if (((byte)param_1[0x1d0] >> 2 & 1) != 0) {
          FileOutputStream::operator<<(param_14," randomPlayback=\"true\" probabilities=\"");
          if (uVar16 != 0) {
            fVar71 = (float)AudioSource::getSampleElementProbabilityAt((AudioSource *)param_1,0);
            uVar15 = FUN_0091faa0((double)fVar71,&local_380,extraout_x1_x00161,&DAT_0050d9a5);
            (**(code **)(**pplVar2 + 0x30))(*pplVar2,&local_380,uVar15);
            if (uVar16 != 1) {
              uVar14 = 1;
              do {
                plVar60 = *pplVar2;
                if (*pFVar1 == (FileOutputStream)0x0) {
                  (**(code **)(*plVar60 + 0x30))(plVar60,&DAT_004d3339,1);
                }
                else {
                  File::writeDosEOLExpand((File *)plVar60,&DAT_004d3339,1);
                }
                fVar71 = (float)AudioSource::getSampleElementProbabilityAt
                                          ((AudioSource *)param_1,uVar14);
                uVar15 = FUN_0091faa0((double)fVar71,&local_380,extraout_x1_x00176,&DAT_0050d9a5);
                (**(code **)(**pplVar2 + 0x30))(*pplVar2,&local_380,uVar15);
                uVar14 = uVar14 + 1;
              } while (uVar16 != uVar14);
            }
          }
          FileOutputStream::operator<<(param_14,"\"");
          pFVar30 = (FileOutputStream *)FileOutputStream::operator<<(param_14," retriggerDelay=\"");
          pFVar30 = (FileOutputStream *)
                    FileOutputStream::operator<<(pFVar30,*(float *)(param_1 + 0x1d4));
          pFVar30 = (FileOutputStream *)FileOutputStream::operator<<(pFVar30," ");
          pFVar30 = (FileOutputStream *)
                    FileOutputStream::operator<<(pFVar30,*(float *)(param_1 + 0x1d8));
          FileOutputStream::operator<<(pFVar30,"\"");
        }
        if (((*(float *)(param_1 + 0x280) != 1.0) || (*(float *)(param_1 + 0x284) != 0.0)) ||
           (*(float *)(param_1 + 0x288) != 0.0)) {
          plVar60 = *pplVar2;
          if (*pFVar1 == (FileOutputStream)0x0) {
            (**(code **)(*plVar60 + 0x30))(plVar60," color=\"",8);
            uVar43 = extraout_x1_x00171;
          }
          else {
            File::writeDosEOLExpand((File *)plVar60," color=\"",8);
            uVar43 = extraout_x1_x00162;
          }
          uVar15 = FUN_0091faa0((double)*(float *)(param_1 + 0x280),&local_380,uVar43,&DAT_0050d9a5)
          ;
          (**(code **)(**pplVar2 + 0x30))(*pplVar2,&local_380,uVar15);
          plVar60 = *pplVar2;
          if (*pFVar1 == (FileOutputStream)0x0) {
            (**(code **)(*plVar60 + 0x30))(plVar60,&DAT_004d3339,1);
            uVar43 = extraout_x1_x00173;
          }
          else {
            File::writeDosEOLExpand((File *)plVar60,&DAT_004d3339,1);
            uVar43 = extraout_x1_x00172;
          }
          uVar15 = FUN_0091faa0((double)*(float *)(param_1 + 0x284),&local_380,uVar43,&DAT_0050d9a5)
          ;
          (**(code **)(**pplVar2 + 0x30))(*pplVar2,&local_380,uVar15);
          plVar60 = *pplVar2;
          if (*pFVar1 == (FileOutputStream)0x0) {
            (**(code **)(*plVar60 + 0x30))(plVar60,&DAT_004d3339,1);
            uVar43 = extraout_x1_x00175;
          }
          else {
            File::writeDosEOLExpand((File *)plVar60,&DAT_004d3339,1);
            uVar43 = extraout_x1_x00174;
          }
          fVar71 = *(float *)(param_1 + 0x288);
          goto LAB_00914e8c;
        }
      }
      goto LAB_00914ee4;
    }
    this = (BaseTerrain *)(param_1 + 0x170);
    pcVar29 = (char *)BaseTerrain::getHeightMapFilename();
    sVar27 = strlen(pcVar29);
    if (0xffffffffffffffef < sVar27) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (sVar27 < 0x17) {
      pcVar40 = (char *)((ulong)&local_a0 | 1);
      local_a0 = CONCAT71(local_a0._1_7_,(char)((int)sVar27 << 1));
      if (sVar27 != 0) goto LAB_0090c43c;
    }
    else {
      uVar47 = sVar27 + 0x10 & 0xfffffffffffffff0;
      pcVar40 = (char *)operator_new(uVar47);
      local_a0 = uVar47 | 1;
      local_98 = sVar27;
      local_90 = pcVar40;
LAB_0090c43c:
      memcpy(pcVar40,pcVar29,sVar27);
    }
    pcVar40[sVar27] = '\0';
    if (param_11 != (char *)0x0) {
      sVar27 = strlen(param_11);
      if (0xffffffffffffffef < sVar27) {
                    /* try { // try from 009152e8 to 009152ef has its CatchHandler @ 0091538c */
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__basic_string_common<true>::__throw_length_error();
      }
      if (sVar27 < 0x17) {
        pcVar29 = (char *)((ulong)&local_380 | 1);
        local_380 = (FileOutputStream *)CONCAT71(local_380._1_7_,(char)((int)sVar27 << 1));
        if (sVar27 != 0) goto LAB_0090c998;
      }
      else {
        uVar47 = sVar27 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 0090c97c to 0090c983 has its CatchHandler @ 0091538c */
        pcVar29 = (char *)operator_new(uVar47);
        local_380 = (FileOutputStream *)(uVar47 | 1);
        uStack_378 = sVar27;
        local_370 = pcVar29;
LAB_0090c998:
        memcpy(pcVar29,param_11,sVar27);
      }
      pcVar29[sVar27] = '\0';
      local_488 = (undefined **)0x0;
      local_480 = (undefined **)0x0;
      local_478 = (char *)0x0;
                    /* try { // try from 0090c9b4 to 0090c9c7 has its CatchHandler @ 00915368 */
      uVar47 = PathUtil::buildMovedAbsolutePath
                         ((basic_string *)&local_380,param_10,(basic_string *)&local_a0,
                          (basic_string *)&local_488);
      if ((uVar47 & 1) != 0) {
        local_4a0 = (undefined8 *)0x0;
        local_498 = (undefined8 *)0x0;
        local_490 = (char *)0x0;
                    /* try { // try from 0090c9d4 to 0090ca0f has its CatchHandler @ 0091537c */
        PathUtil::getBasePath((basic_string *)&local_488,(basic_string *)&local_4a0,true);
        pcVar29 = (char *)((ulong)&local_4a0 | 1);
        if (((ulong)local_4a0 & 1) != 0) {
          pcVar29 = local_490;
        }
        NativeFileUtil::createAllFolders(pcVar29,false);
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     *)&local_a0,(basic_string *)&local_488);
        if (((ulong)local_4a0 & 1) != 0) {
          operator_delete(local_490);
        }
      }
      if (((ulong)local_488 & 1) != 0) {
        operator_delete(local_478);
      }
      if (((ulong)local_380 & 1) != 0) {
        operator_delete(local_370);
      }
    }
    pcVar29 = (char *)((ulong)&local_a0 | 1);
    if ((local_a0 & 1) != 0) {
      pcVar29 = local_90;
    }
                    /* try { // try from 0090ca58 to 0090ca5f has its CatchHandler @ 009156fc */
    BaseTerrain::saveHeightMapToImage(this,pcVar29);
    if (param_13) {
      if (param_11 == (char *)0x0) {
                    /* try { // try from 0090cf24 to 0090cf3f has its CatchHandler @ 00915378 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string((basic_string *)&local_380);
      }
      else {
        sVar27 = strlen(param_11);
        if (0xffffffffffffffef < sVar27) {
                    /* try { // try from 009152f0 to 009152f7 has its CatchHandler @ 00915378 */
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__basic_string_common<true>::__throw_length_error();
        }
        if (sVar27 < 0x17) {
          pcVar29 = (char *)((ulong)&local_380 | 1);
          local_380 = (FileOutputStream *)CONCAT71(local_380._1_7_,(char)((int)sVar27 << 1));
          if (sVar27 != 0) goto LAB_0090cf54;
        }
        else {
          uVar47 = sVar27 + 0x10 & 0xfffffffffffffff0;
          pcVar29 = (char *)operator_new(uVar47);
          local_380 = (FileOutputStream *)(uVar47 | 1);
          uStack_378 = sVar27;
          local_370 = pcVar29;
LAB_0090cf54:
          memcpy(pcVar29,param_11,sVar27);
        }
        pcVar29[sVar27] = '\0';
      }
                    /* try { // try from 0090cf68 to 0090cf7f has its CatchHandler @ 00915340 */
      FUN_006cadd8(&local_488,param_12,&DAT_004ccf25);
      pcVar29 = (char *)((ulong)&local_488 | 1);
      if (((ulong)local_488 & 1) != 0) {
        pcVar29 = local_478;
      }
                    /* try { // try from 0090cf9c to 0090cfa3 has its CatchHandler @ 00915330 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((char *)&local_380,(ulong)pcVar29);
      if (((ulong)local_488 & 1) != 0) {
        operator_delete(local_478);
      }
      pSVar3 = param_1 + 0x469;
      if (((byte)param_1[0x468] & 1) != 0) {
        pSVar3 = *(ScenegraphNode **)(param_1 + 0x478);
      }
                    /* try { // try from 0090cfcc to 0090cfdb has its CatchHandler @ 0091532c */
      FUN_006cadd8(&local_488,&local_380,pSVar3);
      pcVar29 = (char *)((ulong)&local_488 | 1);
      if (((ulong)local_488 & 1) != 0) {
        pcVar29 = local_478;
      }
                    /* try { // try from 0090cff0 to 0090cff7 has its CatchHandler @ 00915328 */
      BaseTerrain::saveLodTextureTypeMapSys(this,pcVar29);
      pSVar3 = param_1 + 0x481;
      if (((byte)param_1[0x480] & 1) != 0) {
        pSVar3 = *(ScenegraphNode **)(param_1 + 0x490);
      }
                    /* try { // try from 0090d00c to 0090d01b has its CatchHandler @ 00915324 */
      FUN_006cadd8(&local_4a0,&local_380,pSVar3);
      pcVar29 = (char *)((ulong)&local_4a0 | 1);
      if (((ulong)local_4a0 & 1) != 0) {
        pcVar29 = local_490;
      }
                    /* try { // try from 0090d030 to 0090d037 has its CatchHandler @ 0091531c */
      BaseTerrain::saveLodNormalMapSys(this,pcVar29);
      pSVar3 = param_1 + 0x4b1;
      if (((byte)param_1[0x4b0] & 1) != 0) {
        pSVar3 = *(ScenegraphNode **)(param_1 + 0x4c0);
      }
                    /* try { // try from 0090d04c to 0090d05b has its CatchHandler @ 00915314 */
      FUN_006cadd8(&local_4b8,&local_380,pSVar3);
      pcVar29 = (char *)((ulong)&local_4b8 | 1);
      if ((local_4b8 & 1) != 0) {
        pcVar29 = local_4a8;
      }
                    /* try { // try from 0090d070 to 0090d077 has its CatchHandler @ 00915310 */
      GeoMipMappingTerrain::saveOccludersCache((GeoMipMappingTerrain *)this,pcVar29);
      if ((local_4b8 & 1) != 0) {
        operator_delete(local_4a8);
      }
      if (((ulong)local_4a0 & 1) != 0) {
        operator_delete(local_490);
      }
      if (((ulong)local_488 & 1) != 0) {
        operator_delete(local_478);
      }
      if (((ulong)local_380 & 1) != 0) {
        operator_delete(local_370);
      }
    }
                    /* try { // try from 0090d0a4 to 0090d0ab has its CatchHandler @ 009153ac */
    ThreadPool::ThreadPool((ThreadPool *)&local_380);
                    /* try { // try from 0090d0ac to 0090d0af has its CatchHandler @ 009153a4 */
    uVar16 = EnvUtil::getNumOfProcessors();
    if (uVar16 < 3) {
      uVar16 = 2;
    }
                    /* try { // try from 0090d0c0 to 0090d0d7 has its CatchHandler @ 0091539c */
    plVar60 = (long *)0x80000;
    ThreadPool::createFixedNumberOfRovingThreads
              ((ThreadPool *)&local_380,uVar16 - 1,"saveDetailLayers",2,0x80000);
                    /* try { // try from 0090d0d8 to 0090d0e3 has its CatchHandler @ 00915394 */
    ThreadPoolTaskManager::ThreadPoolTaskManager
              ((ThreadPoolTaskManager *)&local_488,(ThreadPool *)&local_380);
    local_4a0 = (undefined8 *)0x0;
    local_498 = (undefined8 *)0x0;
    local_490 = (char *)0x0;
    uVar47 = (*(long *)(param_1 + 0x180) - *(long *)(param_1 + 0x178) >> 4) * 0xba2e8ba3;
    iVar13 = (int)uVar47;
    uVar47 = uVar47 & 0xffffffff;
    if (uVar47 != 0) {
                    /* try { // try from 0090d118 to 0090d11f has its CatchHandler @ 009153c4 */
      std::__ndk1::
      vector<I3DSave::TerrainSaveDetailLayerTask,std::__ndk1::allocator<I3DSave::TerrainSaveDetailLayerTask>>
      ::__append((vector<I3DSave::TerrainSaveDetailLayerTask,std::__ndk1::allocator<I3DSave::TerrainSaveDetailLayerTask>>
                  *)&local_4a0,uVar47);
      iVar13 = (int)(*(long *)(param_1 + 0x180) - *(long *)(param_1 + 0x178) >> 4) * -0x45d1745d;
    }
    if (iVar13 != 0) {
      lVar54 = 0;
      uVar47 = 0;
      do {
                    /* try { // try from 0090d19c to 0090d1a3 has its CatchHandler @ 0091561c */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string((basic_string *)&local_4b8);
        if (param_11 != (char *)0x0) {
          pcVar29 = (char *)strlen(param_11);
          if ((char *)0xffffffffffffffef < pcVar29) {
                    /* try { // try from 009152b0 to 009152b7 has its CatchHandler @ 00915580 */
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_length_error();
          }
          if (pcVar29 < (char *)0x17) {
            local_b8 = (ulong *)CONCAT71(local_b8._1_7_,(char)((int)pcVar29 << 1));
            pvVar31 = (void *)((ulong)&local_b8 | 1);
            if (pcVar29 != (char *)0x0) goto LAB_0090d1f8;
          }
          else {
                    /* try { // try from 0090d1e0 to 0090d1e7 has its CatchHandler @ 009154d0 */
            pvVar31 = operator_new((ulong)(pcVar29 + 0x10) & 0xfffffffffffffff0);
            local_b8 = (ulong *)((ulong)(pcVar29 + 0x10) & 0xfffffffffffffff0 | 1);
            local_b0 = pcVar29;
            local_a8 = pvVar31;
LAB_0090d1f8:
            memcpy(pvVar31,param_11,(size_t)pcVar29);
          }
          *(char *)((long)pvVar31 + (long)pcVar29) = '\0';
          local_4d0 = (FileOutputStream *)0x0;
          uStack_4c8 = 0;
          local_4c0 = (void *)0x0;
                    /* try { // try from 0090d214 to 0090d227 has its CatchHandler @ 00915550 */
          uVar32 = PathUtil::buildMovedAbsolutePath
                             ((basic_string *)&local_b8,param_10,(basic_string *)&local_4b8,
                              (basic_string *)&local_4d0);
          if ((uVar32 & 1) != 0) {
            local_4e8 = 0;
            uStack_4e0 = 0;
            local_4d8 = (char *)0x0;
                    /* try { // try from 0090d238 to 0090d26b has its CatchHandler @ 009155b8 */
            PathUtil::getBasePath((basic_string *)&local_4d0,(basic_string *)&local_4e8,true);
            pcVar29 = (char *)((ulong)&local_4e8 | 1);
            if ((local_4e8 & 1) != 0) {
              pcVar29 = local_4d8;
            }
            NativeFileUtil::createAllFolders(pcVar29,false);
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                       *)&local_4b8,(basic_string *)&local_4d0);
            if ((local_4e8 & 1) != 0) {
              operator_delete(local_4d8);
            }
          }
          if (((ulong)local_4d0 & 1) != 0) {
            operator_delete(local_4c0);
          }
          if (((ulong)local_b8 & 1) != 0) {
            operator_delete(local_a8);
          }
        }
        *(int *)((long)local_4a0 + lVar54 + 0x28) = (int)uVar47;
        *(BaseTerrain **)((long)local_4a0 + lVar54 + 0x48) = this;
                    /* try { // try from 0090d2b4 to 0090d2cb has its CatchHandler @ 009156c8 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     *)((long)local_4a0 + lVar54 + 0x30),(basic_string *)&local_4b8);
        ThreadPoolTaskManager::issueTask
                  ((ThreadPoolTaskManager *)&local_488,(Task *)((long)local_4a0 + lVar54));
        if ((local_4b8 & 1) != 0) {
          operator_delete(local_4a8);
        }
        uVar47 = uVar47 + 1;
        lVar54 = lVar54 + 0x50;
      } while (uVar47 < (uint)((int)((ulong)(*(long *)(param_1 + 0x180) - *(long *)(param_1 + 0x178)
                                            ) >> 4) * -0x45d1745d));
    }
                    /* try { // try from 0090d2e0 to 0090d2eb has its CatchHandler @ 009153c4 */
    ThreadPoolTaskManager::waitForAllTasks((ThreadPoolTaskManager *)&local_488,true);
    puVar10 = local_4a0;
    puVar36 = local_498;
    if (local_4a0 != (undefined8 *)0x0) {
      while (puVar36 != puVar10) {
        puVar36 = puVar36 + -10;
        (**(code **)*puVar36)(puVar36);
      }
      local_498 = puVar10;
      operator_delete(local_4a0);
    }
    ThreadPoolTaskManager::~ThreadPoolTaskManager((ThreadPoolTaskManager *)&local_488);
    ThreadPool::~ThreadPool((ThreadPool *)&local_380);
                    /* try { // try from 0090d3a8 to 0090d3af has its CatchHandler @ 009156a4 */
    for (uVar16 = 0; uVar14 = BaseTerrain::getNumInfoLayers(), uVar16 < uVar14; uVar16 = uVar16 + 1)
    {
                    /* try { // try from 0090d3b8 to 0090d3cf has its CatchHandler @ 00915714 */
      BaseTerrain::getInfoLayer(this,uVar16);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string((basic_string *)&local_380);
      if (param_11 != (char *)0x0) {
        ppuVar39 = (undefined **)strlen(param_11);
        if ((undefined **)0xffffffffffffffef < ppuVar39) {
                    /* try { // try from 00915298 to 0091529f has its CatchHandler @ 009155fc */
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__basic_string_common<true>::__throw_length_error();
        }
        if (ppuVar39 < (undefined **)0x17) {
          local_488 = (undefined **)CONCAT71(local_488._1_7_,(char)((int)ppuVar39 << 1));
          pcVar29 = (char *)((ulong)&local_488 | 1);
          if (ppuVar39 != (undefined **)0x0) goto LAB_0090d424;
        }
        else {
                    /* try { // try from 0090d40c to 0090d413 has its CatchHandler @ 009154fc */
          pcVar29 = (char *)operator_new((ulong)(ppuVar39 + 2) & 0xfffffffffffffff0);
          local_488 = (undefined **)((ulong)(ppuVar39 + 2) & 0xfffffffffffffff0 | 1);
          local_480 = ppuVar39;
          local_478 = pcVar29;
LAB_0090d424:
          memcpy(pcVar29,param_11,(size_t)ppuVar39);
        }
        pcVar29[(long)ppuVar39] = '\0';
        local_4a0 = (undefined8 *)0x0;
        local_498 = (undefined8 *)0x0;
        local_490 = (char *)0x0;
                    /* try { // try from 0090d440 to 0090d453 has its CatchHandler @ 00915600 */
        uVar47 = PathUtil::buildMovedAbsolutePath
                           ((basic_string *)&local_488,param_10,(basic_string *)&local_380,
                            (basic_string *)&local_4a0);
        if ((uVar47 & 1) != 0) {
          local_4b8 = 0;
          uStack_4b0 = 0;
          local_4a8 = (char *)0x0;
                    /* try { // try from 0090d464 to 0090d497 has its CatchHandler @ 0091564c */
          PathUtil::getBasePath((basic_string *)&local_4a0,(basic_string *)&local_4b8,true);
          pcVar29 = (char *)((ulong)&local_4b8 | 1);
          if ((local_4b8 & 1) != 0) {
            pcVar29 = local_4a8;
          }
          NativeFileUtil::createAllFolders(pcVar29,false);
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::operator=
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)&local_380,(basic_string *)&local_4a0);
          if ((local_4b8 & 1) != 0) {
            operator_delete(local_4a8);
          }
        }
        if (((ulong)local_4a0 & 1) != 0) {
          operator_delete(local_490);
        }
        if (((ulong)local_488 & 1) != 0) {
          operator_delete(local_478);
        }
      }
      pcVar29 = (char *)((ulong)&local_380 | 1);
      if (((ulong)local_380 & 1) != 0) {
        pcVar29 = local_370;
      }
                    /* try { // try from 0090d4d8 to 0090d4e3 has its CatchHandler @ 00915688 */
      BaseTerrain::saveInfoLayer(this,uVar16,pcVar29);
      if (((ulong)local_380 & 1) != 0) {
        operator_delete(local_370);
      }
    }
    FVar5 = *pFVar1;
    plVar57 = *pplVar2;
                    /* try { // try from 0090d508 to 0090d54b has its CatchHandler @ 009156fc */
    uVar16 = __strlen_chk(" heightMapId=\"",0xf);
    if (FVar5 == (FileOutputStream)0x0) {
      (**(code **)(*plVar57 + 0x30))(plVar57," heightMapId=\"");
    }
    else {
      File::writeDosEOLExpand((File *)plVar57," heightMapId=\"",uVar16);
    }
                    /* try { // try from 0090d54c to 0090d597 has its CatchHandler @ 00915448 */
    pcVar29 = (char *)BaseTerrain::getHeightMapFilename();
    ppuVar39 = (undefined **)strlen(pcVar29);
    if ((undefined **)0xffffffffffffffef < ppuVar39) {
                    /* try { // try from 009152e0 to 009152e7 has its CatchHandler @ 00915448 */
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (ppuVar39 < (undefined **)0x17) {
      pcVar40 = (char *)((ulong)&local_488 | 1);
      local_488 = (undefined **)CONCAT71(local_488._1_7_,(char)((int)ppuVar39 << 1));
      if (ppuVar39 != (undefined **)0x0) goto LAB_0090d5a8;
    }
    else {
      pcVar40 = (char *)operator_new((ulong)(ppuVar39 + 2) & 0xfffffffffffffff0);
      local_488 = (undefined **)((ulong)(ppuVar39 + 2) & 0xfffffffffffffff0 | 1);
      local_480 = ppuVar39;
      local_478 = pcVar40;
LAB_0090d5a8:
      memcpy(pcVar40,pcVar29,(size_t)ppuVar39);
    }
    pcVar40[(long)ppuVar39] = '\0';
                    /* try { // try from 0090d5bc to 0090d617 has its CatchHandler @ 0091544c */
    std::__ndk1::
    __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>>>
    ::
    find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
              ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>>>
                *)param_9,(basic_string *)&local_488);
    pmVar48 = param_9 + 8;
    uVar15 = FUN_0091faa0(&local_380);
    (**(code **)(**pplVar2 + 0x30))(*pplVar2,&local_380,uVar15);
    if (((ulong)local_488 & 1) != 0) {
      operator_delete(local_478);
    }
    FVar5 = *pFVar1;
    plVar57 = *pplVar2;
                    /* try { // try from 0090d638 to 0090dc8f has its CatchHandler @ 009156fc */
    uVar16 = __strlen_chk("\" patchSize=\"",0xe);
    if (FVar5 == (FileOutputStream)0x0) {
      (**(code **)(*plVar57 + 0x30))(plVar57,"\" patchSize=\"");
      uVar43 = extraout_x1_25;
    }
    else {
      File::writeDosEOLExpand((File *)plVar57,"\" patchSize=\"",uVar16);
      uVar43 = extraout_x1_24;
    }
    uVar15 = FUN_0091faa0(&local_380,uVar43,&DAT_004cf2ba,
                          (1 << (ulong)(*(uint *)(param_1 + 0x308) & 0x1f)) + 1);
    (**(code **)(**pplVar2 + 0x30))(*pplVar2,&local_380,uVar15);
    FVar5 = *pFVar1;
    plVar57 = *pplVar2;
    uVar16 = __strlen_chk("\" maxLODDistance=\"",0x13);
    if (FVar5 == (FileOutputStream)0x0) {
      (**(code **)(*plVar57 + 0x30))(plVar57,"\" maxLODDistance=\"");
    }
    else {
      File::writeDosEOLExpand((File *)plVar57,"\" maxLODDistance=\"",uVar16);
    }
    fVar71 = (float)GeoMipMappingTerrain::getMaxLodDistance();
    uVar15 = FUN_0091faa0((double)fVar71,&local_380,extraout_x1_26,&DAT_0050d9a5);
    (**(code **)(**pplVar2 + 0x30))(*pplVar2,&local_380,uVar15);
    FVar5 = *pFVar1;
    plVar57 = *pplVar2;
    uVar16 = __strlen_chk("\" heightScale=\"",0x10);
    if (FVar5 == (FileOutputStream)0x0) {
      (**(code **)(*plVar57 + 0x30))(plVar57,"\" heightScale=\"");
      uVar43 = extraout_x1_28;
    }
    else {
      File::writeDosEOLExpand((File *)plVar57,"\" heightScale=\"",uVar16);
      uVar43 = extraout_x1_27;
    }
    uVar15 = FUN_0091faa0((double)*(float *)(param_1 + 0x210),&local_380,uVar43,&DAT_0050d9a5);
    (**(code **)(**pplVar2 + 0x30))(*pplVar2,&local_380,uVar15);
    FVar5 = *pFVar1;
    plVar57 = *pplVar2;
    uVar16 = __strlen_chk("\" unitsPerPixel=\"",0x12);
    if (FVar5 == (FileOutputStream)0x0) {
      (**(code **)(*plVar57 + 0x30))(plVar57,"\" unitsPerPixel=\"");
    }
    else {
      File::writeDosEOLExpand((File *)plVar57,"\" unitsPerPixel=\"",uVar16);
    }
    fVar71 = (float)BaseTerrain::getUnitsPerPixel();
    uVar15 = FUN_0091faa0((double)fVar71,&local_380,extraout_x1_29,&DAT_0050d9a5);
    (**(code **)(**pplVar2 + 0x30))(*pplVar2,&local_380,uVar15);
    FVar5 = *pFVar1;
    plVar57 = *pplVar2;
    uVar16 = __strlen_chk("\" lodBlendStart=\"",0x12);
    if (FVar5 == (FileOutputStream)0x0) {
      (**(code **)(*plVar57 + 0x30))(plVar57,"\" lodBlendStart=\"");
    }
    else {
      File::writeDosEOLExpand((File *)plVar57,"\" lodBlendStart=\"",uVar16);
    }
    fVar71 = (float)BaseTerrain::getLodBlendStart();
    uVar15 = FUN_0091faa0((double)fVar71,&local_380,extraout_x1_30,&DAT_0050d9a5);
    (**(code **)(**pplVar2 + 0x30))(*pplVar2,&local_380,uVar15);
    FVar5 = *pFVar1;
    plVar57 = *pplVar2;
    uVar16 = __strlen_chk("\" lodBlendEnd=\"",0x10);
    if (FVar5 == (FileOutputStream)0x0) {
      (**(code **)(*plVar57 + 0x30))(plVar57,"\" lodBlendEnd=\"");
    }
    else {
      File::writeDosEOLExpand((File *)plVar57,"\" lodBlendEnd=\"",uVar16);
    }
    fVar71 = (float)BaseTerrain::getLodBlendEnd();
    uVar15 = FUN_0091faa0((double)fVar71,&local_380,extraout_x1_31,&DAT_0050d9a5);
    (**(code **)(**pplVar2 + 0x30))(*pplVar2,&local_380,uVar15);
    FVar5 = *pFVar1;
    plVar57 = *pplVar2;
    uVar16 = __strlen_chk("\" lodTextureSize=\"",0x13);
    if (FVar5 == (FileOutputStream)0x0) {
      (**(code **)(*plVar57 + 0x30))(plVar57,"\" lodTextureSize=\"");
    }
    else {
      File::writeDosEOLExpand((File *)plVar57,"\" lodTextureSize=\"",uVar16);
    }
    auVar72 = BaseTerrain::getLodTextureSize();
    uVar15 = FUN_0091faa0(&local_380,auVar72._8_8_,&DAT_004cf2ba,auVar72._0_8_ & 0xffffffff);
    (**(code **)(**pplVar2 + 0x30))(*pplVar2,&local_380,uVar15);
    FVar5 = *pFVar1;
    plVar57 = *pplVar2;
    uVar16 = __strlen_chk("\" lodBlendStartDynamic=\"",0x19);
    if (FVar5 == (FileOutputStream)0x0) {
      (**(code **)(*plVar57 + 0x30))(plVar57,"\" lodBlendStartDynamic=\"");
    }
    else {
      File::writeDosEOLExpand((File *)plVar57,"\" lodBlendStartDynamic=\"",uVar16);
    }
    fVar71 = (float)BaseTerrain::getLodBlendStartDynamic();
    uVar15 = FUN_0091faa0((double)fVar71,&local_380,extraout_x1_32,&DAT_0050d9a5);
    (**(code **)(**pplVar2 + 0x30))(*pplVar2,&local_380,uVar15);
    FVar5 = *pFVar1;
    plVar57 = *pplVar2;
    uVar16 = __strlen_chk("\" lodBlendEndDynamic=\"",0x17);
    if (FVar5 == (FileOutputStream)0x0) {
      (**(code **)(*plVar57 + 0x30))(plVar57,"\" lodBlendEndDynamic=\"");
    }
    else {
      File::writeDosEOLExpand((File *)plVar57,"\" lodBlendEndDynamic=\"",uVar16);
    }
    fVar71 = (float)BaseTerrain::getLodBlendEndDynamic();
    uVar15 = FUN_0091faa0((double)fVar71,&local_380,extraout_x1_33,&DAT_0050d9a5);
    (**(code **)(**pplVar2 + 0x30))(*pplVar2,&local_380,uVar15);
    FVar5 = *pFVar1;
    plVar57 = *pplVar2;
    uVar16 = __strlen_chk("\" detailLodBlendDelta=\"",0x18);
    if (FVar5 == (FileOutputStream)0x0) {
      (**(code **)(*plVar57 + 0x30))(plVar57,"\" detailLodBlendDelta=\"");
    }
    else {
      File::writeDosEOLExpand((File *)plVar57,"\" detailLodBlendDelta=\"",uVar16);
    }
    fVar71 = (float)BaseTerrain::getDetailLodBlendDelta();
    uVar15 = FUN_0091faa0((double)fVar71,&local_380,extraout_x1_34,&DAT_0050d9a5);
    (**(code **)(**pplVar2 + 0x30))(*pplVar2,&local_380,uVar15);
    uVar47 = TerrainTransformGroup::getPatchVisibility();
    if ((uVar47 & 1) == 0) {
      FVar5 = *pFVar1;
      plVar57 = *pplVar2;
      uVar16 = __strlen_chk("\" patchVisibility=\"false",0x19);
      if (FVar5 == (FileOutputStream)0x0) {
        (**(code **)(*plVar57 + 0x30))(plVar57,"\" patchVisibility=\"false");
      }
      else {
        File::writeDosEOLExpand((File *)plVar57,"\" patchVisibility=\"false",uVar16);
      }
    }
    FVar5 = *pFVar1;
    plVar57 = *pplVar2;
    uVar16 = __strlen_chk("\" materialId=\"",0xf);
    if (FVar5 == (FileOutputStream)0x0) {
      (**(code **)(*plVar57 + 0x30))(plVar57,"\" materialId=\"");
      uVar43 = extraout_x1_36;
    }
    else {
      File::writeDosEOLExpand((File *)plVar57,"\" materialId=\"",uVar16);
      uVar43 = extraout_x1_35;
    }
    uVar15 = FUN_0091faa0(&local_380,uVar43,&DAT_004cf2ba,
                          *(undefined4 *)(*(long *)(param_1 + 0x4c8) + 0x18));
    (**(code **)(**pplVar2 + 0x30))(*pplVar2,&local_380,uVar15);
    if ((*(byte *)(**(long **)(param_1 + 0x28) + 0x191) & 1) != 0) {
      FVar5 = *pFVar1;
      plVar57 = *pplVar2;
                    /* try { // try from 0090dcb0 to 0090dcf3 has its CatchHandler @ 00915390 */
      uVar16 = __strlen_chk("\" castShadowMap=\"true",0x16);
      if (FVar5 == (FileOutputStream)0x0) {
        (**(code **)(*plVar57 + 0x30))(plVar57,"\" castShadowMap=\"true");
      }
      else {
        File::writeDosEOLExpand((File *)plVar57,"\" castShadowMap=\"true",uVar16);
      }
    }
    pSVar3 = param_1 + 0x451;
    if (((byte)param_1[0x450] & 1) != 0) {
      pSVar3 = *(ScenegraphNode **)(param_1 + 0x460);
    }
    iVar13 = strcmp((char *)pSVar3,*(char **)(param_1 + 8));
    if (iVar13 != 0) {
      FVar5 = *pFVar1;
      plVar57 = *pplVar2;
                    /* try { // try from 0090dd28 to 0090e0f7 has its CatchHandler @ 00915648 */
      uVar16 = __strlen_chk("\" cacheFilenamesPrefix=\"",0x19);
      if (FVar5 == (FileOutputStream)0x0) {
        (**(code **)(*plVar57 + 0x30))(plVar57,"\" cacheFilenamesPrefix=\"");
      }
      else {
        File::writeDosEOLExpand((File *)plVar57,"\" cacheFilenamesPrefix=\"",uVar16);
      }
      FVar5 = *pFVar1;
      plVar57 = *pplVar2;
      uVar16 = __strlen_chk(pSVar3,0xffffffffffffffff);
      if (FVar5 == (FileOutputStream)0x0) {
        (**(code **)(*plVar57 + 0x30))(plVar57,pSVar3);
      }
      else {
        File::writeDosEOLExpand((File *)plVar57,pSVar3,uVar16);
      }
    }
    FVar5 = *pFVar1;
    plVar57 = *pplVar2;
    uVar16 = __strlen_chk("\" occNumLODs=\"",0xf);
    if (FVar5 == (FileOutputStream)0x0) {
      (**(code **)(*plVar57 + 0x30))(plVar57,"\" occNumLODs=\"");
      uVar43 = extraout_x1_38;
    }
    else {
      File::writeDosEOLExpand((File *)plVar57,"\" occNumLODs=\"",uVar16);
      uVar43 = extraout_x1_37;
    }
    uVar15 = FUN_0091faa0(&local_380,uVar43,&DAT_004cf2ba,*(undefined4 *)(param_1 + 0x3d8));
    (**(code **)(**pplVar2 + 0x30))(*pplVar2,&local_380,uVar15);
    FVar5 = *pFVar1;
    plVar57 = *pplVar2;
    uVar16 = __strlen_chk("\" occMaxLODDistance=\"",0x16);
    if (FVar5 == (FileOutputStream)0x0) {
      (**(code **)(*plVar57 + 0x30))(plVar57,"\" occMaxLODDistance=\"");
      uVar43 = extraout_x1_40;
    }
    else {
      File::writeDosEOLExpand((File *)plVar57,"\" occMaxLODDistance=\"",uVar16);
      uVar43 = extraout_x1_39;
    }
    uVar15 = FUN_0091faa0((double)*(float *)(param_1 + 0x3dc),&local_380,uVar43,&DAT_0050d9a5);
    (**(code **)(**pplVar2 + 0x30))(*pplVar2,&local_380,uVar15);
    FVar5 = *pFVar1;
    plVar57 = *pplVar2;
    uVar16 = __strlen_chk("\" occPatchSize=\"",0x11);
    if (FVar5 == (FileOutputStream)0x0) {
      (**(code **)(*plVar57 + 0x30))(plVar57,"\" occPatchSize=\"");
      uVar43 = extraout_x1_42;
    }
    else {
      File::writeDosEOLExpand((File *)plVar57,"\" occPatchSize=\"",uVar16);
      uVar43 = extraout_x1_41;
    }
    uVar15 = FUN_0091faa0(&local_380,uVar43,&DAT_004cf2ba,
                          (*(int *)(param_1 + 0x3e0) << (ulong)(*(uint *)(param_1 + 0x308) & 0x1f))
                          + 1);
    (**(code **)(**pplVar2 + 0x30))(*pplVar2,&local_380,uVar15);
    FVar5 = *pFVar1;
    plVar57 = *pplVar2;
    uVar16 = __strlen_chk("\" occLevel=\"",0xd);
    if (FVar5 == (FileOutputStream)0x0) {
      (**(code **)(*plVar57 + 0x30))(plVar57,"\" occLevel=\"");
      uVar43 = extraout_x1_44;
    }
    else {
      File::writeDosEOLExpand((File *)plVar57,"\" occLevel=\"",uVar16);
      uVar43 = extraout_x1_43;
    }
    uVar15 = FUN_0091faa0(&local_380,uVar43,&DAT_004cf2ba,*(undefined4 *)(param_1 + 0x3e4));
    (**(code **)(**pplVar2 + 0x30))(*pplVar2,&local_380,uVar15);
    FVar5 = *pFVar1;
    plVar57 = *pplVar2;
    uVar16 = __strlen_chk("\" occDistanceWeight=\"",0x16);
    if (FVar5 == (FileOutputStream)0x0) {
      (**(code **)(*plVar57 + 0x30))(plVar57,"\" occDistanceWeight=\"");
      uVar43 = extraout_x1_46;
    }
    else {
      File::writeDosEOLExpand((File *)plVar57,"\" occDistanceWeight=\"",uVar16);
      uVar43 = extraout_x1_45;
    }
    uVar15 = FUN_0091faa0((double)*(float *)(param_1 + 1000),&local_380,uVar43,&DAT_0050d9a5);
    (**(code **)(**pplVar2 + 0x30))(*pplVar2,&local_380,uVar15);
    FVar5 = *pFVar1;
    plVar57 = *pplVar2;
    uVar16 = __strlen_chk("\" occMaxAdjacentFaces=\"",0x18);
    if (FVar5 == (FileOutputStream)0x0) {
      (**(code **)(*plVar57 + 0x30))(plVar57,"\" occMaxAdjacentFaces=\"");
      uVar43 = extraout_x1_48;
    }
    else {
      File::writeDosEOLExpand((File *)plVar57,"\" occMaxAdjacentFaces=\"",uVar16);
      uVar43 = extraout_x1_47;
    }
    uVar15 = FUN_0091faa0(&local_380,uVar43,&DAT_004cf2ba,*(undefined4 *)(param_1 + 0x3ec));
    (**(code **)(**pplVar2 + 0x30))(*pplVar2,&local_380,uVar15);
                    /* try { // try from 0090e0f8 to 0090e163 has its CatchHandler @ 009154b0 */
    iVar13 = BaseTerrain::getHeightMapSize();
    fVar71 = (float)BaseTerrain::getUnitsPerPixel();
    FVar5 = *pFVar1;
    plVar57 = *pplVar2;
    uVar16 = __strlen_chk(&DAT_004ddf6f,4);
    if (FVar5 == (FileOutputStream)0x0) {
      (**(code **)(*plVar57 + 0x30))(plVar57,&DAT_004ddf6f);
    }
    else {
      File::writeDosEOLExpand((File *)plVar57,&DAT_004ddf6f,uVar16);
    }
    uVar14 = *(uint *)(param_1 + 0x3d8);
    uVar16 = param_2 + 1;
    uVar17 = uVar16;
    if (param_2 != 0xffffffff) {
      do {
        uVar20 = uVar17;
        if (0x59 < uVar17) {
          uVar20 = 0x5a;
        }
        FVar5 = *pFVar1;
        puVar42 = &UNK_00501a54 + -(ulong)(uVar20 << 1);
        plVar57 = *pplVar2;
        uVar19 = __strlen_chk(puVar42,0xffffffffffffffff);
        if (FVar5 == (FileOutputStream)0x0) {
                    /* try { // try from 0090e1d4 to 0090e22b has its CatchHandler @ 009156a0 */
          (**(code **)(*plVar57 + 0x30))(plVar57,puVar42);
        }
        else {
          File::writeDosEOLExpand((File *)plVar57,puVar42,uVar19);
        }
        uVar17 = uVar17 - uVar20;
      } while (uVar17 != 0);
    }
    FVar5 = *pFVar1;
    plVar57 = *pplVar2;
                    /* try { // try from 0090e18c to 0090e1b3 has its CatchHandler @ 009154f8 */
    uVar17 = __strlen_chk("<OccluderLods>\n",0x10);
    if (FVar5 == (FileOutputStream)0x0) {
                    /* try { // try from 0090e238 to 0090e247 has its CatchHandler @ 009154f8 */
      (**(code **)(*plVar57 + 0x30))(plVar57,"<OccluderLods>\n");
    }
    else {
      File::writeDosEOLExpand((File *)plVar57,"<OccluderLods>\n",uVar17);
    }
    uVar20 = 0;
    uVar17 = param_2 + 2;
    fVar71 = fVar71 * (float)(ulong)(iVar13 - 1);
    uVar19 = uVar17;
    do {
      for (; uVar19 != 0; uVar19 = uVar19 - uVar22) {
        uVar22 = uVar19;
        if (0x59 < uVar19) {
          uVar22 = 0x5a;
        }
        puVar42 = &UNK_00501a54 + -(ulong)(uVar22 << 1);
        FVar5 = *pFVar1;
        plVar57 = *pplVar2;
        uVar18 = __strlen_chk(puVar42,0xffffffffffffffff);
        if (FVar5 == (FileOutputStream)0x0) {
                    /* try { // try from 0090e2d8 to 0090e33b has its CatchHandler @ 0091579c */
          (**(code **)(*plVar57 + 0x30))(plVar57,puVar42);
        }
        else {
          File::writeDosEOLExpand((File *)plVar57,puVar42,uVar18);
        }
      }
      FVar5 = *pFVar1;
      plVar57 = *pplVar2;
                    /* try { // try from 0090e350 to 0090e66b has its CatchHandler @ 00915774 */
      uVar19 = __strlen_chk("<OccluderLod ",0xe);
      if (FVar5 == (FileOutputStream)0x0) {
        (**(code **)(*plVar57 + 0x30))(plVar57,"<OccluderLod ");
      }
      else {
        File::writeDosEOLExpand((File *)plVar57,"<OccluderLod ",uVar19);
      }
      FVar5 = *pFVar1;
      plVar57 = *pplVar2;
      uVar19 = __strlen_chk("occLodLevel=\"",0xe);
      if (FVar5 == (FileOutputStream)0x0) {
        (**(code **)(*plVar57 + 0x30))(plVar57,"occLodLevel=\"");
        uVar43 = extraout_x1_50;
      }
      else {
        File::writeDosEOLExpand((File *)plVar57,"occLodLevel=\"",uVar19);
        uVar43 = extraout_x1_49;
      }
      uVar47 = (ulong)uVar20;
      uVar15 = FUN_0091faa0(&local_380,uVar43,&DAT_004cf2ba,uVar47);
      (**(code **)(**pplVar2 + 0x30))(*pplVar2,&local_380,uVar15);
      FVar5 = *pFVar1;
      plVar57 = *pplVar2;
      uVar19 = __strlen_chk("\" occFaceCount=\"",0x11);
      if (FVar5 == (FileOutputStream)0x0) {
        (**(code **)(*plVar57 + 0x30))(plVar57,"\" occFaceCount=\"");
        uVar43 = extraout_x1_52;
      }
      else {
        File::writeDosEOLExpand((File *)plVar57,"\" occFaceCount=\"",uVar19);
        uVar43 = extraout_x1_51;
      }
      local_500 = (undefined8 *)(ulong)*(uint *)(this + uVar47 * 0x10 + 0x284);
      uVar15 = FUN_0091faa0(&local_380,uVar43,&DAT_004cf2ba);
      (**(code **)(**pplVar2 + 0x30))(*pplVar2,&local_380,uVar15);
      FVar5 = *pFVar1;
      plVar57 = *pplVar2;
      uVar19 = __strlen_chk("\" occMaxHausdorffDistance=\"",0x1c);
      if (FVar5 == (FileOutputStream)0x0) {
        (**(code **)(*plVar57 + 0x30))(plVar57,"\" occMaxHausdorffDistance=\"");
        uVar43 = extraout_x1_54;
      }
      else {
        File::writeDosEOLExpand((File *)plVar57,"\" occMaxHausdorffDistance=\"",uVar19);
        uVar43 = extraout_x1_53;
      }
      uVar15 = FUN_0091faa0((double)*(float *)(this + uVar47 * 0x10 + 0x288),&local_380,uVar43,
                            &DAT_0050d9a5);
      (**(code **)(**pplVar2 + 0x30))(*pplVar2,&local_380,uVar15);
      FVar5 = *pFVar1;
      plVar57 = *pplVar2;
      uVar19 = __strlen_chk("\" occMaxHausdorffDistanceExtra=\"",0x21);
      if (FVar5 == (FileOutputStream)0x0) {
        (**(code **)(*plVar57 + 0x30))(plVar57,"\" occMaxHausdorffDistanceExtra=\"");
        uVar43 = extraout_x1_56;
      }
      else {
        File::writeDosEOLExpand((File *)plVar57,"\" occMaxHausdorffDistanceExtra=\"",uVar19);
        uVar43 = extraout_x1_55;
      }
      uVar15 = FUN_0091faa0((double)*(float *)(this + uVar47 * 0x10 + 0x28c),&local_380,uVar43,
                            &DAT_0050d9a5);
      (**(code **)(**pplVar2 + 0x30))(*pplVar2,&local_380,uVar15);
      FVar5 = *pFVar1;
      plVar57 = *pplVar2;
      uVar19 = __strlen_chk("\" occMinHorizontalDistance=\"",0x1d);
      if (FVar5 == (FileOutputStream)0x0) {
        (**(code **)(*plVar57 + 0x30))(plVar57,"\" occMinHorizontalDistance=\"");
        uVar43 = extraout_x1_58;
      }
      else {
        File::writeDosEOLExpand((File *)plVar57,"\" occMinHorizontalDistance=\"",uVar19);
        uVar43 = extraout_x1_57;
      }
      uVar15 = FUN_0091faa0((double)*(float *)(this + uVar47 * 0x10 + 0x290),&local_380,uVar43,
                            &DAT_0050d9a5);
      (**(code **)(**pplVar2 + 0x30))(*pplVar2,&local_380,uVar15);
      FVar5 = *pFVar1;
      plVar57 = *pplVar2;
      uVar19 = __strlen_chk("\" />\n",6);
      if (FVar5 == (FileOutputStream)0x0) {
                    /* try { // try from 0090e290 to 0090e29f has its CatchHandler @ 00915774 */
        (**(code **)(*plVar57 + 0x30))(plVar57,"\" />\n");
      }
      else {
        File::writeDosEOLExpand((File *)plVar57,"\" />\n",uVar19);
      }
      uVar20 = uVar20 + 1;
      uVar19 = uVar17;
      uVar22 = uVar16;
    } while (uVar20 <= uVar14);
    for (; uVar22 != 0; uVar22 = uVar22 - uVar14) {
      uVar14 = uVar22;
      if (0x59 < uVar22) {
        uVar14 = 0x5a;
      }
      puVar42 = &UNK_00501a54 + -(ulong)(uVar14 << 1);
      FVar5 = *pFVar1;
      plVar57 = *pplVar2;
      uVar20 = __strlen_chk(puVar42,0xffffffffffffffff);
      if (FVar5 == (FileOutputStream)0x0) {
                    /* try { // try from 0090e68c to 0090e6eb has its CatchHandler @ 009156c4 */
        (**(code **)(*plVar57 + 0x30))(plVar57,puVar42);
      }
      else {
        File::writeDosEOLExpand((File *)plVar57,puVar42,uVar20);
      }
    }
    FVar5 = *pFVar1;
    plVar57 = *pplVar2;
                    /* try { // try from 0090e700 to 0090e743 has its CatchHandler @ 009154f8 */
    uVar20 = __strlen_chk("</OccluderLods>\n",0x11);
    uVar14 = uVar16;
    if (FVar5 == (FileOutputStream)0x0) {
      (**(code **)(*plVar57 + 0x30))(plVar57,"</OccluderLods>\n");
    }
    else {
      File::writeDosEOLExpand((File *)plVar57,"</OccluderLods>\n",uVar20);
    }
    for (; uVar14 != 0; uVar14 = uVar14 - uVar20) {
      uVar20 = uVar14;
      if (0x59 < uVar14) {
        uVar20 = 0x5a;
      }
      puVar42 = &UNK_00501a54 + -(ulong)(uVar20 << 1);
      FVar5 = *pFVar1;
      plVar57 = *pplVar2;
      uVar19 = __strlen_chk(puVar42,0xffffffffffffffff);
      if (FVar5 == (FileOutputStream)0x0) {
                    /* try { // try from 0090e760 to 0090e7bf has its CatchHandler @ 009156c0 */
        (**(code **)(*plVar57 + 0x30))(plVar57,puVar42);
      }
      else {
        File::writeDosEOLExpand((File *)plVar57,puVar42,uVar19);
      }
    }
    FVar5 = *pFVar1;
    plVar57 = *pplVar2;
                    /* try { // try from 0090e7d4 to 0090e817 has its CatchHandler @ 009154f8 */
    uVar14 = __strlen_chk("<Layers>\n",10);
    if (FVar5 == (FileOutputStream)0x0) {
      (**(code **)(*plVar57 + 0x30))(plVar57,"<Layers>\n");
    }
    else {
      File::writeDosEOLExpand((File *)plVar57,"<Layers>\n",uVar14);
    }
    uVar14 = uVar17;
    if ((int)((ulong)(*(long *)(param_1 + 0x1e0) - *(long *)(param_1 + 0x1d8)) >> 4) * -0x33333333
        != 0) {
      for (; uVar14 != 0; uVar14 = uVar14 - uVar20) {
        uVar20 = uVar14;
        if (0x59 < uVar14) {
          uVar20 = 0x5a;
        }
        puVar42 = &UNK_00501a54 + -(ulong)(uVar20 << 1);
        FVar5 = *pFVar1;
        plVar57 = *pplVar2;
        uVar19 = __strlen_chk(puVar42,0xffffffffffffffff);
        if (FVar5 == (FileOutputStream)0x0) {
                    /* try { // try from 0090e854 to 0090e8b3 has its CatchHandler @ 00915638 */
          (**(code **)(*plVar57 + 0x30))(plVar57,puVar42);
        }
        else {
          File::writeDosEOLExpand((File *)plVar57,puVar42,uVar19);
        }
      }
      FVar5 = *pFVar1;
      plVar57 = *pplVar2;
                    /* try { // try from 0090e8c8 to 0090e90b has its CatchHandler @ 009154f8 */
      uVar14 = __strlen_chk("<LayerAttributes>\n",0x13);
      if (FVar5 == (FileOutputStream)0x0) {
        (**(code **)(*plVar57 + 0x30))(plVar57,"<LayerAttributes>\n");
      }
      else {
        File::writeDosEOLExpand((File *)plVar57,"<LayerAttributes>\n",uVar14);
      }
      lVar54 = *(long *)(param_1 + 0x1d8);
      uVar14 = uVar17;
      if ((int)((ulong)(*(long *)(param_1 + 0x1e0) - lVar54) >> 4) * -0x33333333 != 0) {
        uVar47 = 0;
        uVar20 = param_2 + 3;
        do {
          pbVar63 = (byte *)(lVar54 + uVar47 * 0x50);
          pbVar35 = pbVar63 + 0x19;
          pbVar66 = pbVar63 + 0x18;
          ppbVar61 = (byte **)(pbVar63 + 0x28);
          pbVar62 = pbVar35;
          if ((*pbVar66 & 1) != 0) {
            pbVar62 = *ppbVar61;
          }
          lVar33 = __strlen_chk(pbVar62,0xffffffffffffffff);
          lVar34 = __strlen_chk(BaseTerrain::LayerAttribute::TYPE_FLOAT,0xffffffffffffffff);
          puVar42 = BaseTerrain::LayerAttribute::TYPE_FLOAT;
          if (lVar33 == lVar34) {
            bVar7 = *pbVar66;
            pbVar69 = *ppbVar61;
            sVar27 = __strlen_chk(BaseTerrain::LayerAttribute::TYPE_FLOAT,0xffffffffffffffff);
            pbVar62 = pbVar35;
            if ((bVar7 & 1) != 0) {
              pbVar62 = pbVar69;
            }
            iVar13 = strncmp((char *)pbVar62,puVar42,sVar27);
            uVar19 = uVar20;
            if (iVar13 != 0) goto LAB_0090ea14;
            for (; uVar19 != 0; uVar19 = uVar19 - uVar22) {
              uVar22 = uVar19;
              if (0x59 < uVar19) {
                uVar22 = 0x5a;
              }
              puVar42 = &UNK_00501a54 + -(ulong)(uVar22 << 1);
              FVar5 = *pFVar1;
              plVar57 = *pplVar2;
              uVar18 = __strlen_chk(puVar42,0xffffffffffffffff);
              if (FVar5 == (FileOutputStream)0x0) {
                    /* try { // try from 0090ec3c to 0090ec9b has its CatchHandler @ 0091572c */
                (**(code **)(*plVar57 + 0x30))(plVar57,puVar42);
              }
              else {
                File::writeDosEOLExpand((File *)plVar57,puVar42,uVar18);
              }
            }
            FVar5 = *pFVar1;
            plVar57 = *pplVar2;
                    /* try { // try from 0090ecb0 to 0090ecd7 has its CatchHandler @ 00915734 */
            uVar19 = __strlen_chk("<LayerAttribute name=\"",0x17);
            if (FVar5 == (FileOutputStream)0x0) {
                    /* try { // try from 0090edd8 to 0090f197 has its CatchHandler @ 00915734 */
              (**(code **)(*plVar57 + 0x30))(plVar57,"<LayerAttribute name=\"");
            }
            else {
              File::writeDosEOLExpand((File *)plVar57,"<LayerAttribute name=\"",uVar19);
            }
            lVar33 = lVar54 + uVar47 * 0x50;
            bVar12 = (*pbVar63 & 1) != 0;
            pbVar35 = pbVar63 + 1;
            if (bVar12) {
              pbVar35 = *(byte **)(lVar33 + 0x10);
            }
            uVar19 = (uint)(*pbVar63 >> 1);
            if (bVar12) {
              uVar19 = *(uint *)(lVar33 + 8);
            }
            if (*pFVar1 == (FileOutputStream)0x0) {
              (**(code **)(**pplVar2 + 0x30))();
            }
            else {
              File::writeDosEOLExpand((File *)*pplVar2,pbVar35,uVar19);
            }
            FVar5 = *pFVar1;
            plVar57 = *pplVar2;
            uVar19 = __strlen_chk("\" type=\"",9);
            if (FVar5 == (FileOutputStream)0x0) {
              (**(code **)(*plVar57 + 0x30))(plVar57,"\" type=\"");
            }
            else {
              File::writeDosEOLExpand((File *)plVar57,"\" type=\"",uVar19);
            }
            puVar42 = BaseTerrain::LayerAttribute::TYPE_FLOAT;
            FVar5 = *pFVar1;
            plVar57 = *pplVar2;
            uVar19 = __strlen_chk(BaseTerrain::LayerAttribute::TYPE_FLOAT,0xffffffffffffffff);
            if (FVar5 == (FileOutputStream)0x0) {
              (**(code **)(*plVar57 + 0x30))(plVar57,puVar42);
            }
            else {
              File::writeDosEOLExpand((File *)plVar57,puVar42,uVar19);
            }
            FVar5 = *pFVar1;
            plVar57 = *pplVar2;
            uVar19 = __strlen_chk("\" minValue=\"",0xd);
            if (FVar5 == (FileOutputStream)0x0) {
              (**(code **)(*plVar57 + 0x30))(plVar57,"\" minValue=\"");
              uVar43 = extraout_x1_60;
            }
            else {
              File::writeDosEOLExpand((File *)plVar57,"\" minValue=\"",uVar19);
              uVar43 = extraout_x1_59;
            }
            uVar15 = FUN_0091faa0((double)*(float *)(lVar54 + uVar47 * 0x50 + 0x30),&local_380,
                                  uVar43,&DAT_0050d9a5);
            (**(code **)(**pplVar2 + 0x30))(*pplVar2,&local_380,uVar15);
            FVar5 = *pFVar1;
            plVar57 = *pplVar2;
            uVar19 = __strlen_chk("\" maxValue=\"",0xd);
            if (FVar5 == (FileOutputStream)0x0) {
              (**(code **)(*plVar57 + 0x30))(plVar57,"\" maxValue=\"");
              uVar43 = extraout_x1_62;
            }
            else {
              File::writeDosEOLExpand((File *)plVar57,"\" maxValue=\"",uVar19);
              uVar43 = extraout_x1_61;
            }
            uVar15 = FUN_0091faa0((double)*(float *)(lVar54 + uVar47 * 0x50 + 0x34),&local_380,
                                  uVar43,&DAT_0050d9a5);
            (**(code **)(**pplVar2 + 0x30))(*pplVar2,&local_380,uVar15);
            FVar5 = *pFVar1;
            plVar57 = *pplVar2;
            uVar19 = __strlen_chk("\" />\n",6);
            if (FVar5 == (FileOutputStream)0x0) {
                    /* try { // try from 0090e958 to 0090eadb has its CatchHandler @ 00915734 */
              (**(code **)(*plVar57 + 0x30))(plVar57,"\" />\n");
            }
            else {
              File::writeDosEOLExpand((File *)plVar57,"\" />\n",uVar19);
            }
          }
          else {
LAB_0090ea14:
            pbVar62 = pbVar35;
            if ((*pbVar66 & 1) != 0) {
              pbVar62 = *ppbVar61;
            }
            lVar33 = __strlen_chk(pbVar62,0xffffffffffffffff);
            lVar34 = __strlen_chk(BaseTerrain::LayerAttribute::TYPE_FLOAT_LINEAR_RGB,
                                  0xffffffffffffffff);
            puVar42 = BaseTerrain::LayerAttribute::TYPE_FLOAT_LINEAR_RGB;
            if (lVar33 == lVar34) {
              bVar7 = *pbVar66;
              pbVar69 = *ppbVar61;
              sVar27 = __strlen_chk(BaseTerrain::LayerAttribute::TYPE_FLOAT_LINEAR_RGB,
                                    0xffffffffffffffff);
              pbVar62 = pbVar35;
              if ((bVar7 & 1) != 0) {
                pbVar62 = pbVar69;
              }
              iVar13 = strncmp((char *)pbVar62,puVar42,sVar27);
              uVar19 = uVar20;
              if (iVar13 == 0) {
                for (; uVar19 != 0; uVar19 = uVar19 - uVar22) {
                  uVar22 = uVar19;
                  if (0x59 < uVar19) {
                    uVar22 = 0x5a;
                  }
                  puVar42 = &UNK_00501a54 + -(ulong)(uVar22 << 1);
                  FVar5 = *pFVar1;
                  plVar57 = *pplVar2;
                  uVar18 = __strlen_chk(puVar42,0xffffffffffffffff);
                  if (FVar5 == (FileOutputStream)0x0) {
                    /* try { // try from 0090ecf4 to 0090ed53 has its CatchHandler @ 00915718 */
                    (**(code **)(*plVar57 + 0x30))(plVar57,puVar42);
                  }
                  else {
                    File::writeDosEOLExpand((File *)plVar57,puVar42,uVar18);
                  }
                }
                FVar5 = *pFVar1;
                plVar57 = *pplVar2;
                    /* try { // try from 0090ed68 to 0090ed8f has its CatchHandler @ 00915734 */
                uVar19 = __strlen_chk("<LayerAttribute name=\"",0x17);
                if (FVar5 == (FileOutputStream)0x0) {
                  (**(code **)(*plVar57 + 0x30))(plVar57,"<LayerAttribute name=\"");
                }
                else {
                  File::writeDosEOLExpand((File *)plVar57,"<LayerAttribute name=\"",uVar19);
                }
                lVar54 = lVar54 + uVar47 * 0x50;
                bVar12 = (*pbVar63 & 1) != 0;
                pbVar35 = pbVar63 + 1;
                if (bVar12) {
                  pbVar35 = *(byte **)(lVar54 + 0x10);
                }
                uVar19 = (uint)(*pbVar63 >> 1);
                if (bVar12) {
                  uVar19 = *(uint *)(lVar54 + 8);
                }
                if (*pFVar1 == (FileOutputStream)0x0) {
                  (**(code **)(**pplVar2 + 0x30))();
                }
                else {
                  File::writeDosEOLExpand((File *)*pplVar2,pbVar35,uVar19);
                }
                FVar5 = *pFVar1;
                plVar57 = *pplVar2;
                uVar19 = __strlen_chk("\" type=\"",9);
                if (FVar5 == (FileOutputStream)0x0) {
                  (**(code **)(*plVar57 + 0x30))(plVar57,"\" type=\"");
                }
                else {
                  File::writeDosEOLExpand((File *)plVar57,"\" type=\"",uVar19);
                }
                puVar42 = BaseTerrain::LayerAttribute::TYPE_FLOAT_LINEAR_RGB;
                FVar5 = *pFVar1;
                plVar57 = *pplVar2;
                uVar19 = __strlen_chk(BaseTerrain::LayerAttribute::TYPE_FLOAT_LINEAR_RGB,
                                      0xffffffffffffffff);
                if (FVar5 == (FileOutputStream)0x0) {
                  (**(code **)(*plVar57 + 0x30))(plVar57,puVar42);
                }
                else {
                  File::writeDosEOLExpand((File *)plVar57,puVar42,uVar19);
                }
                FVar5 = *pFVar1;
                plVar57 = *pplVar2;
                uVar19 = __strlen_chk("\" />\n",6);
                if (FVar5 == (FileOutputStream)0x0) {
                  (**(code **)(*plVar57 + 0x30))(plVar57,"\" />\n");
                }
                else {
                  File::writeDosEOLExpand((File *)plVar57,"\" />\n",uVar19);
                }
                goto LAB_0090e968;
              }
            }
            pbVar62 = pbVar35;
            if ((*pbVar66 & 1) != 0) {
              pbVar62 = *ppbVar61;
            }
            lVar33 = __strlen_chk(pbVar62,0xffffffffffffffff);
            lVar34 = __strlen_chk(BaseTerrain::LayerAttribute::TYPE_ENUM,0xffffffffffffffff);
            puVar42 = BaseTerrain::LayerAttribute::TYPE_ENUM;
            if (lVar33 == lVar34) {
              bVar7 = *pbVar66;
              pbVar62 = *ppbVar61;
              sVar27 = __strlen_chk(BaseTerrain::LayerAttribute::TYPE_ENUM,0xffffffffffffffff);
              if ((bVar7 & 1) != 0) {
                pbVar35 = pbVar62;
              }
              iVar13 = strncmp((char *)pbVar35,puVar42,sVar27);
              if (iVar13 == 0) {
                local_488 = (undefined **)0x0;
                local_480 = (undefined **)0x0;
                local_478 = (char *)0x0;
                lVar33 = lVar54 + uVar47 * 0x50;
                pplVar70 = *(long ***)(lVar33 + 0x38);
                while (uVar19 = uVar20, pplVar70 != (long **)(lVar33 + 0x40)) {
                  pmVar44 = (map *)(ulong)*(uint *)(pplVar70 + 4);
                  plVar60 = (long *)((long)pplVar70 + 0x29);
                  if ((*(byte *)(pplVar70 + 5) & 1) != 0) {
                    plVar60 = pplVar70[7];
                  }
                    /* try { // try from 0090ebbc to 0090ebdb has its CatchHandler @ 0091570c */
                  local_500 = (undefined8 *)"%s:%d;";
                  FUN_009159dc(&local_380,0x40,0x40);
                  std::__ndk1::
                  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                  append((char *)&local_488);
                  pplVar51 = (long **)pplVar70[1];
                  if ((long **)pplVar70[1] == (long **)0x0) {
                    pplVar51 = pplVar70 + 2;
                    bVar12 = (long **)**pplVar51 != pplVar70;
                    pplVar70 = (long **)*pplVar51;
                    if (bVar12) {
                      do {
                        plVar57 = *pplVar51;
                        pplVar51 = (long **)(plVar57 + 2);
                        pplVar70 = (long **)*pplVar51;
                      } while (*pplVar70 != plVar57);
                    }
                  }
                  else {
                    do {
                      pplVar70 = pplVar51;
                      pplVar51 = (long **)*pplVar70;
                    } while (*pplVar70 != (long *)0x0);
                  }
                }
                for (; uVar19 != 0; uVar19 = uVar19 - uVar22) {
                  uVar22 = uVar19;
                  if (0x59 < uVar19) {
                    uVar22 = 0x5a;
                  }
                  puVar42 = &UNK_00501a54 + -(ulong)(uVar22 << 1);
                  FVar5 = *pFVar1;
                  plVar57 = *pplVar2;
                  uVar18 = __strlen_chk(puVar42,0xffffffffffffffff);
                  if (FVar5 == (FileOutputStream)0x0) {
                    /* try { // try from 0090eb34 to 0090eb93 has its CatchHandler @ 00915708 */
                    (**(code **)(*plVar57 + 0x30))(plVar57,puVar42);
                  }
                  else {
                    File::writeDosEOLExpand((File *)plVar57,puVar42,uVar18);
                  }
                }
                FVar5 = *pFVar1;
                plVar57 = *pplVar2;
                    /* try { // try from 0090eda4 to 0090edcb has its CatchHandler @ 00915624 */
                uVar19 = __strlen_chk("<LayerAttribute name=\"",0x17);
                if (FVar5 == (FileOutputStream)0x0) {
                    /* try { // try from 0090f1a4 to 0090f3ab has its CatchHandler @ 00915624 */
                  (**(code **)(*plVar57 + 0x30))(plVar57,"<LayerAttribute name=\"");
                }
                else {
                  File::writeDosEOLExpand((File *)plVar57,"<LayerAttribute name=\"",uVar19);
                }
                lVar54 = lVar54 + uVar47 * 0x50;
                bVar12 = (*pbVar63 & 1) != 0;
                pbVar35 = pbVar63 + 1;
                if (bVar12) {
                  pbVar35 = *(byte **)(lVar54 + 0x10);
                }
                uVar19 = (uint)(*pbVar63 >> 1);
                if (bVar12) {
                  uVar19 = *(uint *)(lVar54 + 8);
                }
                if (*pFVar1 == (FileOutputStream)0x0) {
                  (**(code **)(**pplVar2 + 0x30))();
                }
                else {
                  File::writeDosEOLExpand((File *)*pplVar2,pbVar35,uVar19);
                }
                FVar5 = *pFVar1;
                plVar57 = *pplVar2;
                uVar19 = __strlen_chk("\" type=\"",9);
                if (FVar5 == (FileOutputStream)0x0) {
                  (**(code **)(*plVar57 + 0x30))(plVar57,"\" type=\"");
                }
                else {
                  File::writeDosEOLExpand((File *)plVar57,"\" type=\"",uVar19);
                }
                puVar42 = BaseTerrain::LayerAttribute::TYPE_ENUM;
                FVar5 = *pFVar1;
                plVar57 = *pplVar2;
                uVar19 = __strlen_chk(BaseTerrain::LayerAttribute::TYPE_ENUM,0xffffffffffffffff);
                if (FVar5 == (FileOutputStream)0x0) {
                  (**(code **)(*plVar57 + 0x30))(plVar57,puVar42);
                }
                else {
                  File::writeDosEOLExpand((File *)plVar57,puVar42,uVar19);
                }
                FVar5 = *pFVar1;
                plVar57 = *pplVar2;
                uVar19 = __strlen_chk("\" enumValues=\"",0xf);
                if (FVar5 == (FileOutputStream)0x0) {
                  (**(code **)(*plVar57 + 0x30))(plVar57,"\" enumValues=\"");
                }
                else {
                  File::writeDosEOLExpand((File *)plVar57,"\" enumValues=\"",uVar19);
                }
                FVar5 = *pFVar1;
                pcVar29 = (char *)((ulong)&local_488 | 1);
                if (((ulong)local_488 & 1) != 0) {
                  pcVar29 = local_478;
                }
                plVar57 = *pplVar2;
                uVar19 = __strlen_chk(pcVar29,0xffffffffffffffff);
                if (FVar5 == (FileOutputStream)0x0) {
                  (**(code **)(*plVar57 + 0x30))(plVar57,pcVar29);
                }
                else {
                  File::writeDosEOLExpand((File *)plVar57,pcVar29,uVar19);
                }
                FVar5 = *pFVar1;
                plVar57 = *pplVar2;
                uVar19 = __strlen_chk("\" />\n",6);
                if (FVar5 == (FileOutputStream)0x0) {
                  (**(code **)(*plVar57 + 0x30))(plVar57,"\" />\n");
                }
                else {
                  File::writeDosEOLExpand((File *)plVar57,"\" />\n",uVar19);
                }
                if (((ulong)local_488 & 1) != 0) {
                  operator_delete(local_478);
                }
              }
            }
          }
LAB_0090e968:
          uVar47 = uVar47 + 1;
          lVar54 = *(long *)(param_1 + 0x1d8);
        } while (uVar47 < (uint)((int)((ulong)(*(long *)(param_1 + 0x1e0) - lVar54) >> 4) *
                                -0x33333333));
      }
      for (; uVar14 != 0; uVar14 = uVar14 - uVar20) {
        uVar20 = uVar14;
        if (0x59 < uVar14) {
          uVar20 = 0x5a;
        }
        puVar42 = &UNK_00501a54 + -(ulong)(uVar20 << 1);
        FVar5 = *pFVar1;
        plVar57 = *pplVar2;
        uVar19 = __strlen_chk(puVar42,0xffffffffffffffff);
        if (FVar5 == (FileOutputStream)0x0) {
                    /* try { // try from 0090f3dc to 0090f43b has its CatchHandler @ 00915634 */
          (**(code **)(*plVar57 + 0x30))(plVar57,puVar42);
        }
        else {
          File::writeDosEOLExpand((File *)plVar57,puVar42,uVar19);
        }
      }
      FVar5 = *pFVar1;
      plVar57 = *pplVar2;
                    /* try { // try from 0090f450 to 0090f493 has its CatchHandler @ 009154f8 */
      uVar14 = __strlen_chk("</LayerAttributes>\n",0x14);
      if (FVar5 == (FileOutputStream)0x0) {
        (**(code **)(*plVar57 + 0x30))(plVar57,"</LayerAttributes>\n");
      }
      else {
        File::writeDosEOLExpand((File *)plVar57,"</LayerAttributes>\n",uVar14);
      }
    }
    lVar54 = *(long *)(param_1 + 0x178);
    if ((int)((ulong)(*(long *)(param_1 + 0x180) - lVar54) >> 4) * -0x45d1745d != 0) {
      uVar47 = 0;
      do {
        uVar14 = uVar17;
        if (uVar17 != 0) {
          do {
            uVar20 = uVar14;
            if (0x59 < uVar14) {
              uVar20 = 0x5a;
            }
            puVar42 = &UNK_00501a54 + -(ulong)(uVar20 << 1);
            FVar5 = *pFVar1;
            plVar57 = *pplVar2;
            uVar19 = __strlen_chk(puVar42,0xffffffffffffffff);
            if (FVar5 == (FileOutputStream)0x0) {
                    /* try { // try from 0090f528 to 0090f587 has its CatchHandler @ 00915784 */
              (**(code **)(*plVar57 + 0x30))(plVar57,puVar42);
            }
            else {
              File::writeDosEOLExpand((File *)plVar57,puVar42,uVar19);
            }
            uVar14 = uVar14 - uVar20;
          } while (uVar14 != 0);
          lVar54 = *(long *)(param_1 + 0x178);
        }
                    /* try { // try from 0090f5a0 to 0090f5a7 has its CatchHandler @ 00915610 */
        _Var21 = std::__ndk1::
                 __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>>>
                 ::
                 find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                           ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>>>
                             *)param_9,(basic_string *)(lVar54 + uVar47 * 0xb0 + 0x28));
        if (pmVar48 == (map *)(ulong)_Var21) {
          uVar15 = 0;
        }
        else {
          uVar15 = *(undefined4 *)((map *)(ulong)_Var21 + 0x38);
        }
                    /* try { // try from 0090f5cc to 0090f5d3 has its CatchHandler @ 00915614 */
        _Var21 = std::__ndk1::
                 __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>>>
                 ::
                 find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                           ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>>>
                             *)param_9,(basic_string *)(lVar54 + uVar47 * 0xb0 + 0x40));
        if (pmVar48 == (map *)(ulong)_Var21) {
          uVar68 = 0;
        }
        else {
          uVar68 = *(undefined4 *)((map *)(ulong)_Var21 + 0x38);
        }
                    /* try { // try from 0090f5f8 to 0090f5ff has its CatchHandler @ 00915618 */
        _Var21 = std::__ndk1::
                 __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>>>
                 ::
                 find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                           ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>>>
                             *)param_9,(basic_string *)(lVar54 + uVar47 * 0xb0 + 0x58));
        if (pmVar48 == (map *)(ulong)_Var21) {
          uVar65 = 0;
        }
        else {
          uVar65 = *(undefined4 *)((map *)(ulong)_Var21 + 0x38);
        }
                    /* try { // try from 0090f624 to 0090fb9f has its CatchHandler @ 00915778 */
        _Var21 = std::__ndk1::
                 __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>>>
                 ::
                 find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                           ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>>>
                             *)param_9,(basic_string *)(lVar54 + uVar47 * 0xb0 + 0x70));
        if (pmVar48 == (map *)(ulong)_Var21) {
          local_500 = (undefined8 *)0x0;
        }
        else {
          local_500 = (undefined8 *)(ulong)*(uint *)((map *)(ulong)_Var21 + 0x38);
        }
        FVar5 = *pFVar1;
        plVar57 = *pplVar2;
        uVar14 = __strlen_chk("<Layer name=\"",0xe);
        if (FVar5 == (FileOutputStream)0x0) {
          (**(code **)(*plVar57 + 0x30))(plVar57,"<Layer name=\"");
        }
        else {
          File::writeDosEOLExpand((File *)plVar57,"<Layer name=\"",uVar14);
        }
        lVar33 = lVar54 + uVar47 * 0xb0;
        bVar12 = (*(byte *)(lVar33 + 0x10) & 1) != 0;
        pvVar31 = (void *)(lVar33 + 0x11);
        if (bVar12) {
          pvVar31 = *(void **)(lVar33 + 0x20);
        }
        uVar14 = (uint)(*(byte *)(lVar33 + 0x10) >> 1);
        if (bVar12) {
          uVar14 = *(uint *)(lVar33 + 0x18);
        }
        if (*pFVar1 == (FileOutputStream)0x0) {
          (**(code **)(**pplVar2 + 0x30))();
        }
        else {
          File::writeDosEOLExpand((File *)*pplVar2,pvVar31,uVar14);
        }
        FVar5 = *pFVar1;
        plVar57 = *pplVar2;
        uVar14 = __strlen_chk("\" detailMapId=\"",0x10);
        if (FVar5 == (FileOutputStream)0x0) {
          (**(code **)(*plVar57 + 0x30))(plVar57,"\" detailMapId=\"");
          uVar43 = extraout_x1_64;
        }
        else {
          File::writeDosEOLExpand((File *)plVar57,"\" detailMapId=\"",uVar14);
          uVar43 = extraout_x1_63;
        }
        uVar15 = FUN_0091faa0(&local_380,uVar43,&DAT_004cf2ba,uVar15);
        (**(code **)(**pplVar2 + 0x30))(*pplVar2,&local_380,uVar15);
        FVar5 = *pFVar1;
        plVar57 = *pplVar2;
        uVar14 = __strlen_chk("\" normalMapId=\"",0x10);
        if (FVar5 == (FileOutputStream)0x0) {
          (**(code **)(*plVar57 + 0x30))(plVar57,"\" normalMapId=\"");
          uVar43 = extraout_x1_66;
        }
        else {
          File::writeDosEOLExpand((File *)plVar57,"\" normalMapId=\"",uVar14);
          uVar43 = extraout_x1_65;
        }
        uVar15 = FUN_0091faa0(&local_380,uVar43,&DAT_004cf2ba,uVar68);
        (**(code **)(**pplVar2 + 0x30))(*pplVar2,&local_380,uVar15);
        FVar5 = *pFVar1;
        plVar57 = *pplVar2;
        uVar14 = __strlen_chk("\" heightMapId=\"",0x10);
        if (FVar5 == (FileOutputStream)0x0) {
          (**(code **)(*plVar57 + 0x30))(plVar57,"\" heightMapId=\"");
          uVar43 = extraout_x1_68;
        }
        else {
          File::writeDosEOLExpand((File *)plVar57,"\" heightMapId=\"",uVar14);
          uVar43 = extraout_x1_67;
        }
        uVar15 = FUN_0091faa0(&local_380,uVar43,&DAT_004cf2ba,uVar65);
        (**(code **)(**pplVar2 + 0x30))(*pplVar2,&local_380,uVar15);
        FVar5 = *pFVar1;
        plVar57 = *pplVar2;
        uVar14 = __strlen_chk("\" unitSize=\"",0xd);
        if (FVar5 == (FileOutputStream)0x0) {
          (**(code **)(*plVar57 + 0x30))(plVar57,"\" unitSize=\"");
          uVar43 = extraout_x1_70;
        }
        else {
          File::writeDosEOLExpand((File *)plVar57,"\" unitSize=\"",uVar14);
          uVar43 = extraout_x1_69;
        }
        uVar15 = FUN_0091faa0((double)(fVar71 / *(float *)(lVar54 + uVar47 * 0xb0 + 4)),&local_380,
                              uVar43,&DAT_0050d9a5);
        (**(code **)(**pplVar2 + 0x30))(*pplVar2,&local_380,uVar15);
        FVar5 = *pFVar1;
        plVar57 = *pplVar2;
        uVar14 = __strlen_chk("\" unitOffsetU=\"",0x10);
        if (FVar5 == (FileOutputStream)0x0) {
          (**(code **)(*plVar57 + 0x30))(plVar57,"\" unitOffsetU=\"");
          uVar43 = extraout_x1_72;
        }
        else {
          File::writeDosEOLExpand((File *)plVar57,"\" unitOffsetU=\"",uVar14);
          uVar43 = extraout_x1_71;
        }
        uVar15 = FUN_0091faa0((double)*(float *)(lVar54 + uVar47 * 0xb0 + 8),&local_380,uVar43,
                              &DAT_0050d9a5);
        (**(code **)(**pplVar2 + 0x30))(*pplVar2,&local_380,uVar15);
        FVar5 = *pFVar1;
        plVar57 = *pplVar2;
        uVar14 = __strlen_chk("\" unitOffsetV=\"",0x10);
        if (FVar5 == (FileOutputStream)0x0) {
          (**(code **)(*plVar57 + 0x30))(plVar57,"\" unitOffsetV=\"");
          uVar43 = extraout_x1_74;
        }
        else {
          File::writeDosEOLExpand((File *)plVar57,"\" unitOffsetV=\"",uVar14);
          uVar43 = extraout_x1_73;
        }
        uVar15 = FUN_0091faa0((double)*(float *)(lVar54 + uVar47 * 0xb0 + 0xc),&local_380,uVar43,
                              &DAT_0050d9a5);
        (**(code **)(**pplVar2 + 0x30))(*pplVar2,&local_380,uVar15);
        FVar5 = *pFVar1;
        plVar57 = *pplVar2;
        uVar14 = __strlen_chk("\" weightMapId=\"",0x10);
        if (FVar5 == (FileOutputStream)0x0) {
          (**(code **)(*plVar57 + 0x30))(plVar57,"\" weightMapId=\"");
          uVar43 = extraout_x1_76;
        }
        else {
          File::writeDosEOLExpand((File *)plVar57,"\" weightMapId=\"",uVar14);
          uVar43 = extraout_x1_75;
        }
        uVar15 = FUN_0091faa0(&local_380,uVar43,&DAT_004cf2ba);
        (**(code **)(**pplVar2 + 0x30))(*pplVar2,&local_380,uVar15);
        FVar5 = *pFVar1;
        plVar57 = *pplVar2;
        uVar14 = __strlen_chk("\" blendContrast=\"",0x12);
        if (FVar5 == (FileOutputStream)0x0) {
          (**(code **)(*plVar57 + 0x30))(plVar57,"\" blendContrast=\"");
          uVar43 = extraout_x1_78;
        }
        else {
          File::writeDosEOLExpand((File *)plVar57,"\" blendContrast=\"",uVar14);
          uVar43 = extraout_x1_77;
        }
        uVar15 = FUN_0091faa0((double)*(float *)(lVar54 + uVar47 * 0xb0 + 0x88),&local_380,uVar43,
                              &DAT_0050d9a5);
        (**(code **)(**pplVar2 + 0x30))(*pplVar2,&local_380,uVar15);
        lVar54 = lVar54 + uVar47 * 0xb0;
        plVar57 = (long *)(lVar54 + 0x90);
        plVar67 = (long *)(lVar54 + 0x98);
        if (*plVar67 != *plVar57) {
          FVar5 = *pFVar1;
          plVar64 = *pplVar2;
          uVar14 = __strlen_chk("\" attributes=\"",0xf);
          if (FVar5 == (FileOutputStream)0x0) {
            (**(code **)(*plVar64 + 0x30))(plVar64,"\" attributes=\"");
            uVar43 = extraout_x1_80;
          }
          else {
            File::writeDosEOLExpand((File *)plVar64,"\" attributes=\"",uVar14);
            uVar43 = extraout_x1_79;
          }
          if (*plVar67 != *plVar57) {
            uVar32 = 0;
            do {
              if (uVar32 != 0) {
                FVar5 = *pFVar1;
                plVar64 = *pplVar2;
                    /* try { // try from 0090fbc8 to 0090fc33 has its CatchHandler @ 00915788 */
                uVar14 = __strlen_chk(&DAT_004d3339,2);
                if (FVar5 == (FileOutputStream)0x0) {
                  (**(code **)(*plVar64 + 0x30))(plVar64,&DAT_004d3339);
                  uVar43 = extraout_x1_82;
                }
                else {
                  File::writeDosEOLExpand((File *)plVar64,&DAT_004d3339,uVar14);
                  uVar43 = extraout_x1_81;
                }
              }
              uVar15 = FUN_0091faa0((double)*(float *)(*plVar57 + uVar32 * 4),&local_380,uVar43,
                                    &DAT_0050d9a5);
              (**(code **)(**pplVar2 + 0x30))(*pplVar2,&local_380,uVar15);
              uVar32 = (ulong)((int)uVar32 + 1);
              uVar43 = extraout_x1_83;
            } while (uVar32 < (ulong)(*plVar67 - *plVar57 >> 2));
          }
        }
        FVar5 = *pFVar1;
        plVar57 = *pplVar2;
                    /* try { // try from 0090fc5c to 0090fc83 has its CatchHandler @ 00915778 */
        uVar14 = __strlen_chk(&DAT_004ddf8b,5);
        if (FVar5 == (FileOutputStream)0x0) {
                    /* try { // try from 0090f4d8 to 0090f4e7 has its CatchHandler @ 00915778 */
          (**(code **)(*plVar57 + 0x30))(plVar57,&DAT_004ddf8b);
        }
        else {
          File::writeDosEOLExpand((File *)plVar57,&DAT_004ddf8b,uVar14);
        }
        uVar47 = uVar47 + 1;
        lVar54 = *(long *)(param_1 + 0x178);
      } while (uVar47 < (uint)((int)((ulong)(*(long *)(param_1 + 0x180) - lVar54) >> 4) *
                              -0x45d1745d));
    }
    lVar54 = *(long *)(param_1 + 400);
    if ((int)((ulong)(*(long *)(param_1 + 0x198) - lVar54) >> 3) * 0x286bca1b != 0) {
      uVar47 = 0;
      do {
        uVar14 = uVar17;
        if (uVar17 != 0) {
          do {
            uVar20 = uVar14;
            if (0x59 < uVar14) {
              uVar20 = 0x5a;
            }
            puVar42 = &UNK_00501a54 + -(ulong)(uVar20 << 1);
            FVar5 = *pFVar1;
            plVar57 = *pplVar2;
            uVar19 = __strlen_chk(puVar42,0xffffffffffffffff);
            if (FVar5 == (FileOutputStream)0x0) {
                    /* try { // try from 0090fd18 to 0090fd77 has its CatchHandler @ 00915780 */
              (**(code **)(*plVar57 + 0x30))(plVar57,puVar42);
            }
            else {
              File::writeDosEOLExpand((File *)plVar57,puVar42,uVar19);
            }
            uVar14 = uVar14 - uVar20;
          } while (uVar14 != 0);
          lVar54 = *(long *)(param_1 + 400);
        }
                    /* try { // try from 0090fd90 to 0090fd97 has its CatchHandler @ 00915608 */
        _Var21 = std::__ndk1::
                 __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>>>
                 ::
                 find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                           ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>>>
                             *)param_9,(basic_string *)(lVar54 + uVar47 * 0x98 + 0x48));
        if (pmVar48 == (map *)(ulong)_Var21) {
          uVar15 = 0;
        }
        else {
          uVar15 = *(undefined4 *)((map *)(ulong)_Var21 + 0x38);
        }
                    /* try { // try from 0090fdb8 to 0090fdbf has its CatchHandler @ 0091560c */
        _Var21 = std::__ndk1::
                 __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>>>
                 ::
                 find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                           ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>>>
                             *)param_9,(basic_string *)(lVar54 + uVar47 * 0x98 + 0x60));
        if (pmVar48 == (map *)(ulong)_Var21) {
          uVar68 = 0;
        }
        else {
          uVar68 = *(undefined4 *)((map *)(ulong)_Var21 + 0x38);
        }
                    /* try { // try from 0090fde0 to 0091031f has its CatchHandler @ 00915770 */
        _Var21 = std::__ndk1::
                 __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>>>
                 ::
                 find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                           ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>>>
                             *)param_9,(basic_string *)(lVar54 + uVar47 * 0x98 + 0x78));
        if (pmVar48 == (map *)(ulong)_Var21) {
          uVar14 = 0;
        }
        else {
          uVar14 = *(uint *)((map *)(ulong)_Var21 + 0x38);
        }
        FVar5 = *pFVar1;
        plVar57 = *pplVar2;
        uVar20 = __strlen_chk("<OverlayLayer type=\"",0x15);
        if (FVar5 == (FileOutputStream)0x0) {
          (**(code **)(*plVar57 + 0x30))(plVar57,"<OverlayLayer type=\"");
        }
        else {
          File::writeDosEOLExpand((File *)plVar57,"<OverlayLayer type=\"",uVar20);
        }
        lVar33 = lVar54 + uVar47 * 0x98;
        bVar12 = (*(byte *)(lVar33 + 8) & 1) != 0;
        pvVar31 = (void *)(lVar33 + 9);
        if (bVar12) {
          pvVar31 = *(void **)(lVar33 + 0x18);
        }
        uVar20 = (uint)(*(byte *)(lVar33 + 8) >> 1);
        if (bVar12) {
          uVar20 = *(uint *)(lVar33 + 0x10);
        }
        if (*pFVar1 == (FileOutputStream)0x0) {
          (**(code **)(**pplVar2 + 0x30))();
        }
        else {
          File::writeDosEOLExpand((File *)*pplVar2,pvVar31,uVar20);
        }
        FVar5 = *pFVar1;
        plVar57 = *pplVar2;
        uVar20 = __strlen_chk("\" name=\"",9);
        if (FVar5 == (FileOutputStream)0x0) {
          (**(code **)(*plVar57 + 0x30))(plVar57,"\" name=\"");
        }
        else {
          File::writeDosEOLExpand((File *)plVar57,"\" name=\"",uVar20);
        }
        lVar33 = lVar54 + uVar47 * 0x98;
        bVar12 = (*(byte *)(lVar33 + 0x30) & 1) != 0;
        pvVar31 = (void *)(lVar33 + 0x31);
        if (bVar12) {
          pvVar31 = *(void **)(lVar33 + 0x40);
        }
        uVar20 = (uint)(*(byte *)(lVar33 + 0x30) >> 1);
        if (bVar12) {
          uVar20 = *(uint *)(lVar33 + 0x38);
        }
        if (*pFVar1 == (FileOutputStream)0x0) {
          (**(code **)(**pplVar2 + 0x30))();
        }
        else {
          File::writeDosEOLExpand((File *)*pplVar2,pvVar31,uVar20);
        }
        FVar5 = *pFVar1;
        plVar57 = *pplVar2;
        uVar20 = __strlen_chk("\" detailMapId=\"",0x10);
        if (FVar5 == (FileOutputStream)0x0) {
          (**(code **)(*plVar57 + 0x30))(plVar57,"\" detailMapId=\"");
          uVar43 = extraout_x1_85;
        }
        else {
          File::writeDosEOLExpand((File *)plVar57,"\" detailMapId=\"",uVar20);
          uVar43 = extraout_x1_84;
        }
        uVar15 = FUN_0091faa0(&local_380,uVar43,&DAT_004cf2ba,uVar15);
        (**(code **)(**pplVar2 + 0x30))(*pplVar2,&local_380,uVar15);
        FVar5 = *pFVar1;
        plVar57 = *pplVar2;
        uVar20 = __strlen_chk("\" normalMapId=\"",0x10);
        if (FVar5 == (FileOutputStream)0x0) {
          (**(code **)(*plVar57 + 0x30))(plVar57,"\" normalMapId=\"");
          uVar43 = extraout_x1_87;
        }
        else {
          File::writeDosEOLExpand((File *)plVar57,"\" normalMapId=\"",uVar20);
          uVar43 = extraout_x1_86;
        }
        uVar15 = FUN_0091faa0(&local_380,uVar43,&DAT_004cf2ba,uVar68);
        (**(code **)(**pplVar2 + 0x30))(*pplVar2,&local_380,uVar15);
        FVar5 = *pFVar1;
        plVar57 = *pplVar2;
        uVar20 = __strlen_chk("\" heightMapId=\"",0x10);
        if (FVar5 == (FileOutputStream)0x0) {
          (**(code **)(*plVar57 + 0x30))(plVar57,"\" heightMapId=\"");
          uVar43 = extraout_x1_89;
        }
        else {
          File::writeDosEOLExpand((File *)plVar57,"\" heightMapId=\"",uVar20);
          uVar43 = extraout_x1_88;
        }
        local_500 = (undefined8 *)(ulong)uVar14;
        uVar15 = FUN_0091faa0(&local_380,uVar43,&DAT_004cf2ba);
        (**(code **)(**pplVar2 + 0x30))(*pplVar2,&local_380,uVar15);
        FVar5 = *pFVar1;
        plVar57 = *pplVar2;
        uVar14 = __strlen_chk("\" unitSize=\"",0xd);
        if (FVar5 == (FileOutputStream)0x0) {
          (**(code **)(*plVar57 + 0x30))(plVar57,"\" unitSize=\"");
          uVar43 = extraout_x1_91;
        }
        else {
          File::writeDosEOLExpand((File *)plVar57,"\" unitSize=\"",uVar14);
          uVar43 = extraout_x1_90;
        }
        uVar15 = FUN_0091faa0((double)(fVar71 / *(float *)(lVar54 + uVar47 * 0x98 + 0x20)),
                              &local_380,uVar43,&DAT_0050d9a5);
        (**(code **)(**pplVar2 + 0x30))(*pplVar2,&local_380,uVar15);
        FVar5 = *pFVar1;
        plVar57 = *pplVar2;
        uVar14 = __strlen_chk("\" unitOffsetU=\"",0x10);
        if (FVar5 == (FileOutputStream)0x0) {
          (**(code **)(*plVar57 + 0x30))(plVar57,"\" unitOffsetU=\"");
          uVar43 = extraout_x1_93;
        }
        else {
          File::writeDosEOLExpand((File *)plVar57,"\" unitOffsetU=\"",uVar14);
          uVar43 = extraout_x1_92;
        }
        uVar15 = FUN_0091faa0((double)*(float *)(lVar54 + uVar47 * 0x98 + 0x24),&local_380,uVar43,
                              &DAT_0050d9a5);
        (**(code **)(**pplVar2 + 0x30))(*pplVar2,&local_380,uVar15);
        FVar5 = *pFVar1;
        plVar57 = *pplVar2;
        uVar14 = __strlen_chk("\" unitOffsetV=\"",0x10);
        if (FVar5 == (FileOutputStream)0x0) {
          (**(code **)(*plVar57 + 0x30))(plVar57,"\" unitOffsetV=\"");
          uVar43 = extraout_x1_95;
        }
        else {
          File::writeDosEOLExpand((File *)plVar57,"\" unitOffsetV=\"",uVar14);
          uVar43 = extraout_x1_94;
        }
        uVar15 = FUN_0091faa0((double)*(float *)(lVar54 + uVar47 * 0x98 + 0x28),&local_380,uVar43,
                              &DAT_0050d9a5);
        (**(code **)(**pplVar2 + 0x30))(*pplVar2,&local_380,uVar15);
        FVar5 = *pFVar1;
        plVar57 = *pplVar2;
        uVar14 = __strlen_chk("\" blendContrast=\"",0x12);
        if (FVar5 == (FileOutputStream)0x0) {
          (**(code **)(*plVar57 + 0x30))(plVar57,"\" blendContrast=\"");
          uVar43 = extraout_x1_97;
        }
        else {
          File::writeDosEOLExpand((File *)plVar57,"\" blendContrast=\"",uVar14);
          uVar43 = extraout_x1_96;
        }
        uVar15 = FUN_0091faa0((double)*(float *)(lVar54 + uVar47 * 0x98 + 0x90),&local_380,uVar43,
                              &DAT_0050d9a5);
        (**(code **)(**pplVar2 + 0x30))(*pplVar2,&local_380,uVar15);
        FVar5 = *pFVar1;
        plVar57 = *pplVar2;
        uVar14 = __strlen_chk(&DAT_004ddf8b,5);
        if (FVar5 == (FileOutputStream)0x0) {
                    /* try { // try from 0090fcc8 to 0090fcd7 has its CatchHandler @ 00915770 */
          (**(code **)(*plVar57 + 0x30))(plVar57,&DAT_004ddf8b);
        }
        else {
          File::writeDosEOLExpand((File *)plVar57,&DAT_004ddf8b,uVar14);
        }
        uVar47 = uVar47 + 1;
        lVar54 = *(long *)(param_1 + 400);
      } while (uVar47 < (uint)((int)((ulong)(*(long *)(param_1 + 0x198) - lVar54) >> 3) * 0x286bca1b
                              ));
    }
    lVar54 = *(long *)(param_1 + 0x1a8);
    if ((int)((ulong)(*(long *)(param_1 + 0x1b0) - lVar54) >> 6) != 0) {
      uVar47 = 0;
      do {
        uVar14 = uVar17;
        if (uVar17 != 0) {
          do {
            uVar20 = uVar14;
            if (0x59 < uVar14) {
              uVar20 = 0x5a;
            }
            puVar42 = &UNK_00501a54 + -(ulong)(uVar20 << 1);
            FVar5 = *pFVar1;
            plVar57 = *pplVar2;
            uVar19 = __strlen_chk(puVar42,0xffffffffffffffff);
            if (FVar5 == (FileOutputStream)0x0) {
                    /* try { // try from 009103a4 to 00910403 has its CatchHandler @ 0091577c */
              (**(code **)(*plVar57 + 0x30))(plVar57,puVar42);
            }
            else {
              File::writeDosEOLExpand((File *)plVar57,puVar42,uVar19);
            }
            uVar14 = uVar14 - uVar20;
          } while (uVar14 != 0);
          lVar54 = *(long *)(param_1 + 0x1a8);
        }
        FVar5 = *pFVar1;
        plVar57 = *pplVar2;
                    /* try { // try from 00910420 to 0091054f has its CatchHandler @ 00915740 */
        uVar14 = __strlen_chk("<CombinedLayer name=\"",0x16);
        if (FVar5 == (FileOutputStream)0x0) {
          (**(code **)(*plVar57 + 0x30))(plVar57,"<CombinedLayer name=\"");
        }
        else {
          File::writeDosEOLExpand((File *)plVar57,"<CombinedLayer name=\"",uVar14);
        }
        lVar33 = lVar54 + uVar47 * 0x40;
        bVar12 = (*(byte *)(lVar33 + 8) & 1) != 0;
        pvVar31 = (void *)(lVar33 + 9);
        if (bVar12) {
          pvVar31 = *(void **)(lVar33 + 0x18);
        }
        uVar14 = (uint)(*(byte *)(lVar33 + 8) >> 1);
        if (bVar12) {
          uVar14 = *(uint *)(lVar33 + 0x10);
        }
        if (*pFVar1 == (FileOutputStream)0x0) {
          (**(code **)(**pplVar2 + 0x30))();
        }
        else {
          File::writeDosEOLExpand((File *)*pplVar2,pvVar31,uVar14);
        }
        FVar5 = *pFVar1;
        plVar57 = *pplVar2;
        uVar14 = __strlen_chk("\" layers=\"",0xb);
        if (FVar5 == (FileOutputStream)0x0) {
          (**(code **)(*plVar57 + 0x30))(plVar57,"\" layers=\"");
        }
        else {
          File::writeDosEOLExpand((File *)plVar57,"\" layers=\"",uVar14);
        }
        lVar33 = *(long *)(param_1 + 0x178) + (ulong)*(uint *)(lVar54 + uVar47 * 0x40 + 0x24) * 0xb0
        ;
        bVar12 = (*(byte *)(lVar33 + 0x10) & 1) != 0;
        pvVar31 = (void *)(lVar33 + 0x11);
        if (bVar12) {
          pvVar31 = *(void **)(lVar33 + 0x20);
        }
        uVar14 = (uint)(*(byte *)(lVar33 + 0x10) >> 1);
        if (bVar12) {
          uVar14 = *(uint *)(lVar33 + 0x18);
        }
        if (*pFVar1 == (FileOutputStream)0x0) {
          (**(code **)(**pplVar2 + 0x30))();
        }
        else {
          File::writeDosEOLExpand((File *)*pplVar2,pvVar31,uVar14);
        }
        lVar33 = lVar54 + uVar47 * 0x40;
        puVar58 = (uint *)(lVar33 + 0x20);
        if (1 < *puVar58) {
          lVar34 = 10;
          do {
            FVar5 = *pFVar1;
            plVar57 = *pplVar2;
            uVar14 = __strlen_chk(&DAT_004e7154,2);
            if (FVar5 == (FileOutputStream)0x0) {
              (**(code **)(*plVar57 + 0x30))(plVar57,&DAT_004e7154);
            }
            else {
              File::writeDosEOLExpand((File *)plVar57,&DAT_004e7154,uVar14);
            }
            lVar50 = *(long *)(param_1 + 0x178) + (ulong)*(uint *)(lVar33 + lVar34 * 4) * 0xb0;
            bVar12 = (*(byte *)(lVar50 + 0x10) & 1) != 0;
            pvVar31 = (void *)(lVar50 + 0x11);
            if (bVar12) {
              pvVar31 = *(void **)(lVar50 + 0x20);
            }
            uVar14 = (uint)(*(byte *)(lVar50 + 0x10) >> 1);
            if (bVar12) {
              uVar14 = *(uint *)(lVar50 + 0x18);
            }
            if (*pFVar1 == (FileOutputStream)0x0) {
                    /* try { // try from 00910574 to 0091061f has its CatchHandler @ 00915794 */
              (**(code **)(**pplVar2 + 0x30))();
            }
            else {
              File::writeDosEOLExpand((File *)*pplVar2,pvVar31,uVar14);
            }
            uVar32 = lVar34 - 8;
            lVar34 = lVar34 + 1;
          } while (uVar32 < *puVar58);
        }
        FVar5 = *pFVar1;
        plVar57 = *pplVar2;
                    /* try { // try from 00910634 to 009106ef has its CatchHandler @ 00915740 */
        uVar14 = __strlen_chk("\" noiseFrequency=\"",0x13);
        if (FVar5 == (FileOutputStream)0x0) {
          (**(code **)(*plVar57 + 0x30))(plVar57,"\" noiseFrequency=\"");
          uVar43 = extraout_x1_99;
        }
        else {
          File::writeDosEOLExpand((File *)plVar57,"\" noiseFrequency=\"",uVar14);
          uVar43 = extraout_x1_98;
        }
        uVar15 = FUN_0091faa0((double)*(float *)(lVar54 + uVar47 * 0x40 + 0x34),&local_380,uVar43,
                              &DAT_0050d9a5);
        (**(code **)(**pplVar2 + 0x30))(*pplVar2,&local_380,uVar15);
        FVar5 = *pFVar1;
        plVar57 = *pplVar2;
        uVar14 = __strlen_chk(&DAT_004ddf8b,5);
        if (FVar5 == (FileOutputStream)0x0) {
                    /* try { // try from 00910360 to 0091036f has its CatchHandler @ 00915740 */
          (**(code **)(*plVar57 + 0x30))(plVar57,&DAT_004ddf8b);
        }
        else {
          File::writeDosEOLExpand((File *)plVar57,&DAT_004ddf8b,uVar14);
        }
        uVar47 = uVar47 + 1;
        lVar54 = *(long *)(param_1 + 0x1a8);
      } while (uVar47 < ((ulong)(*(long *)(param_1 + 0x1b0) - lVar54) >> 6 & 0xffffffff));
    }
    uVar14 = param_2 + 3;
    uVar20 = param_2 + 4;
                    /* try { // try from 00910738 to 0091073f has its CatchHandler @ 00915630 */
    for (uVar19 = 0; uVar22 = BaseTerrain::getNumInfoLayers(), uVar19 < uVar22; uVar19 = uVar19 + 1)
    {
      uVar18 = 0x5a;
      for (uVar22 = uVar17; uVar22 != 0; uVar22 = uVar22 - uVar25) {
        uVar25 = uVar22;
        if (0x59 < uVar22) {
          uVar25 = uVar18;
        }
        puVar42 = &UNK_00501a54 + -(ulong)(uVar25 << 1);
        FVar5 = *pFVar1;
        plVar57 = *pplVar2;
        uVar23 = __strlen_chk(puVar42,0xffffffffffffffff);
        if (FVar5 == (FileOutputStream)0x0) {
                    /* try { // try from 00910764 to 009107c3 has its CatchHandler @ 00915790 */
          (**(code **)(*plVar57 + 0x30))(plVar57,puVar42);
        }
        else {
          File::writeDosEOLExpand((File *)plVar57,puVar42,uVar23);
        }
      }
                    /* try { // try from 009107c8 to 009107d3 has its CatchHandler @ 00915628 */
      pbVar35 = (byte *)BaseTerrain::getInfoLayer(this,uVar19);
                    /* try { // try from 009107dc to 009107e3 has its CatchHandler @ 0091562c */
      _Var21 = std::__ndk1::
               __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>>>
               ::
               find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                         ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>>>
                           *)param_9,(basic_string *)(pbVar35 + 0x18));
      if (pmVar48 == (map *)(ulong)_Var21) {
        uVar15 = 0;
      }
      else {
        uVar15 = *(undefined4 *)((map *)(ulong)_Var21 + 0x38);
      }
      bVar7 = pbVar35[0x30];
      FVar5 = *pFVar1;
      plVar57 = *pplVar2;
                    /* try { // try from 00910810 to 00910a93 has its CatchHandler @ 0091575c */
      uVar22 = __strlen_chk("<InfoLayer name=\"",0x12);
      if (FVar5 == (FileOutputStream)0x0) {
        (**(code **)(*plVar57 + 0x30))(plVar57,"<InfoLayer name=\"");
      }
      else {
        File::writeDosEOLExpand((File *)plVar57,"<InfoLayer name=\"",uVar22);
      }
      pbVar62 = *(byte **)(pbVar35 + 0x10);
      bVar12 = (*pbVar35 & 1) == 0;
      if (bVar12) {
        pbVar62 = pbVar35 + 1;
      }
      uVar22 = (uint)(*pbVar35 >> 1);
      if (!bVar12) {
        uVar22 = *(uint *)(pbVar35 + 8);
      }
      if (*pFVar1 == (FileOutputStream)0x0) {
        (**(code **)(**pplVar2 + 0x30))();
      }
      else {
        File::writeDosEOLExpand((File *)*pplVar2,pbVar62,uVar22);
      }
      FVar5 = *pFVar1;
      plVar57 = *pplVar2;
      uVar22 = __strlen_chk("\" fileId=\"",0xb);
      if (FVar5 == (FileOutputStream)0x0) {
        (**(code **)(*plVar57 + 0x30))(plVar57,"\" fileId=\"");
        uVar43 = extraout_x1_x00101;
      }
      else {
        File::writeDosEOLExpand((File *)plVar57,"\" fileId=\"",uVar22);
        uVar43 = extraout_x1_x00100;
      }
      uVar15 = FUN_0091faa0(&local_380,uVar43,&DAT_004cf2ba,uVar15);
      (**(code **)(**pplVar2 + 0x30))(*pplVar2,&local_380,uVar15);
      FVar5 = *pFVar1;
      plVar57 = *pplVar2;
      uVar22 = __strlen_chk("\" numChannels=\"",0x10);
      if (FVar5 == (FileOutputStream)0x0) {
        (**(code **)(*plVar57 + 0x30))(plVar57,"\" numChannels=\"");
      }
      else {
        File::writeDosEOLExpand((File *)plVar57,"\" numChannels=\"",uVar22);
      }
      auVar72 = (**(code **)(**(long **)(*(long *)(pbVar35 + 0x38) + 0x20) + 0x58))();
      local_500 = (undefined8 *)(auVar72._0_8_ & 0xffffffff);
      uVar15 = FUN_0091faa0(&local_380,auVar72._8_8_,&DAT_004cf2ba);
      (**(code **)(**pplVar2 + 0x30))(*pplVar2,&local_380,uVar15);
      if (bVar7 != 0) {
        FVar5 = *pFVar1;
        plVar57 = *pplVar2;
        uVar22 = __strlen_chk("\" runtime=\"true",0x10);
        if (FVar5 == (FileOutputStream)0x0) {
          (**(code **)(*plVar57 + 0x30))(plVar57,"\" runtime=\"true");
        }
        else {
          File::writeDosEOLExpand((File *)plVar57,"\" runtime=\"true",uVar22);
        }
      }
      FVar5 = *pFVar1;
      plVar57 = *pplVar2;
      if (*(long *)(pbVar35 + 0x48) == *(long *)(pbVar35 + 0x40)) {
        uVar22 = __strlen_chk(&DAT_004ddf8b,5);
        if (FVar5 == (FileOutputStream)0x0) {
          (**(code **)(*plVar57 + 0x30))(plVar57,&DAT_004ddf8b);
        }
        else {
          File::writeDosEOLExpand((File *)plVar57,&DAT_004ddf8b,uVar22);
        }
      }
      else {
        uVar22 = __strlen_chk(&DAT_004ddf6f,4);
        if (FVar5 == (FileOutputStream)0x0) {
          (**(code **)(*plVar57 + 0x30))(plVar57,&DAT_004ddf6f);
        }
        else {
          File::writeDosEOLExpand((File *)plVar57,&DAT_004ddf6f,uVar22);
        }
        lVar54 = *(long *)(pbVar35 + 0x40);
        uVar22 = uVar17;
        if (*(long *)(pbVar35 + 0x48) != lVar54) {
          uVar47 = 0;
          uVar25 = uVar14;
          do {
            for (; uVar25 != 0; uVar25 = uVar25 - uVar23) {
              uVar23 = uVar25;
              if (0x59 < uVar25) {
                uVar23 = uVar18;
              }
              puVar42 = &UNK_00501a54 + -(ulong)(uVar23 << 1);
              FVar5 = *pFVar1;
              plVar57 = *pplVar2;
              uVar24 = __strlen_chk(puVar42,0xffffffffffffffff);
              if (FVar5 == (FileOutputStream)0x0) {
                    /* try { // try from 00910af8 to 00910b57 has its CatchHandler @ 009157d4 */
                (**(code **)(*plVar57 + 0x30))(plVar57,puVar42);
              }
              else {
                File::writeDosEOLExpand((File *)plVar57,puVar42,uVar24);
              }
            }
            FVar5 = *pFVar1;
            plVar57 = *pplVar2;
                    /* try { // try from 00910b6c to 00910eab has its CatchHandler @ 009157b4 */
            uVar25 = __strlen_chk("<Group name=\"",0xe);
            if (FVar5 == (FileOutputStream)0x0) {
              (**(code **)(*plVar57 + 0x30))(plVar57,"<Group name=\"");
            }
            else {
              File::writeDosEOLExpand((File *)plVar57,"<Group name=\"",uVar25);
            }
            pbVar62 = (byte *)(lVar54 + uVar47 * 0x40);
            pbVar63 = pbVar62 + 1;
            if ((*pbVar62 & 1) != 0) {
              pbVar63 = *(byte **)(lVar54 + uVar47 * 0x40 + 0x10);
            }
            FVar5 = *pFVar1;
            plVar57 = *pplVar2;
            uVar25 = __strlen_chk(pbVar63,0xffffffffffffffff);
            if (FVar5 == (FileOutputStream)0x0) {
              (**(code **)(*plVar57 + 0x30))(plVar57,pbVar63);
            }
            else {
              File::writeDosEOLExpand((File *)plVar57,pbVar63,uVar25);
            }
            FVar5 = *pFVar1;
            plVar57 = *pplVar2;
            uVar25 = __strlen_chk("\" firstChannel=\"",0x11);
            if (FVar5 == (FileOutputStream)0x0) {
              (**(code **)(*plVar57 + 0x30))(plVar57,"\" firstChannel=\"");
              uVar43 = extraout_x1_x00103;
            }
            else {
              File::writeDosEOLExpand((File *)plVar57,"\" firstChannel=\"",uVar25);
              uVar43 = extraout_x1_x00102;
            }
            uVar15 = FUN_0091faa0(&local_380,uVar43,&DAT_004cf2ba,
                                  *(undefined4 *)(lVar54 + uVar47 * 0x40 + 0x18));
            (**(code **)(**pplVar2 + 0x30))(*pplVar2,&local_380,uVar15);
            FVar5 = *pFVar1;
            plVar57 = *pplVar2;
            uVar25 = __strlen_chk("\" numChannels=\"",0x10);
            if (FVar5 == (FileOutputStream)0x0) {
              (**(code **)(*plVar57 + 0x30))(plVar57,"\" numChannels=\"");
              uVar43 = extraout_x1_x00105;
            }
            else {
              File::writeDosEOLExpand((File *)plVar57,"\" numChannels=\"",uVar25);
              uVar43 = extraout_x1_x00104;
            }
            local_500 = (undefined8 *)(ulong)*(uint *)(lVar54 + uVar47 * 0x40 + 0x1c);
            uVar15 = FUN_0091faa0(&local_380,uVar43,&DAT_004cf2ba);
            (**(code **)(**pplVar2 + 0x30))(*pplVar2,&local_380,uVar15);
            FVar5 = *pFVar1;
            plVar57 = *pplVar2;
            uVar25 = __strlen_chk(&DAT_0050d91a,3);
            if (FVar5 == (FileOutputStream)0x0) {
              (**(code **)(*plVar57 + 0x30))(plVar57,&DAT_0050d91a);
            }
            else {
              File::writeDosEOLExpand((File *)plVar57,&DAT_0050d91a,uVar25);
            }
            puVar58 = (uint *)(lVar54 + uVar47 * 0x40 + 0x20);
            if (*puVar58 != 0) {
              FVar5 = *pFVar1;
              plVar57 = *pplVar2;
              uVar25 = __strlen_chk("maxDefaultFill=\"",0x11);
              if (FVar5 == (FileOutputStream)0x0) {
                (**(code **)(*plVar57 + 0x30))(plVar57,"maxDefaultFill=\"");
                uVar43 = extraout_x1_x00107;
              }
              else {
                File::writeDosEOLExpand((File *)plVar57,"maxDefaultFill=\"",uVar25);
                uVar43 = extraout_x1_x00106;
              }
              local_500 = (undefined8 *)(ulong)*puVar58;
              uVar15 = FUN_0091faa0(&local_380,uVar43,&DAT_004cf2ba);
              (**(code **)(**pplVar2 + 0x30))(*pplVar2,&local_380,uVar15);
              FVar5 = *pFVar1;
              plVar57 = *pplVar2;
              uVar25 = __strlen_chk(&DAT_004e56b4,2);
              if (FVar5 == (FileOutputStream)0x0) {
                (**(code **)(*plVar57 + 0x30))(plVar57,&DAT_004e56b4);
              }
              else {
                File::writeDosEOLExpand((File *)plVar57,&DAT_004e56b4,uVar25);
              }
            }
            FVar5 = *pFVar1;
            plVar57 = *pplVar2;
            uVar25 = __strlen_chk(&DAT_004db81c,3);
            if (FVar5 == (FileOutputStream)0x0) {
              (**(code **)(*plVar57 + 0x30))(plVar57,&DAT_004db81c);
            }
            else {
              File::writeDosEOLExpand((File *)plVar57,&DAT_004db81c,uVar25);
            }
            lVar54 = lVar54 + uVar47 * 0x40;
            pplVar70 = *(long ***)(lVar54 + 0x28);
            while (uVar25 = uVar20, uVar23 = uVar14, pplVar70 != (long **)(lVar54 + 0x30)) {
              for (; uVar25 != 0; uVar25 = uVar25 - uVar23) {
                uVar23 = uVar25;
                if (0x59 < uVar25) {
                  uVar23 = uVar18;
                }
                puVar42 = &UNK_00501a54 + -(ulong)(uVar23 << 1);
                FVar5 = *pFVar1;
                plVar57 = *pplVar2;
                uVar24 = __strlen_chk(puVar42,0xffffffffffffffff);
                if (FVar5 == (FileOutputStream)0x0) {
                    /* try { // try from 00910ee0 to 00910f3f has its CatchHandler @ 00915800 */
                  (**(code **)(*plVar57 + 0x30))(plVar57,puVar42);
                }
                else {
                  File::writeDosEOLExpand((File *)plVar57,puVar42,uVar24);
                }
              }
              FVar5 = *pFVar1;
              plVar57 = *pplVar2;
                    /* try { // try from 00910f54 to 009110a7 has its CatchHandler @ 009157dc */
              uVar25 = __strlen_chk("<Option value=\"",0x10);
              if (FVar5 == (FileOutputStream)0x0) {
                (**(code **)(*plVar57 + 0x30))(plVar57,"<Option value=\"");
                uVar43 = extraout_x1_x00109;
              }
              else {
                File::writeDosEOLExpand((File *)plVar57,"<Option value=\"",uVar25);
                uVar43 = extraout_x1_x00108;
              }
              local_500 = (undefined8 *)(ulong)*(uint *)(pplVar70 + 4);
              uVar15 = FUN_0091faa0(&local_380,uVar43,&DAT_004cf2ba);
              (**(code **)(**pplVar2 + 0x30))(*pplVar2,&local_380,uVar15);
              FVar5 = *pFVar1;
              plVar57 = *pplVar2;
              uVar25 = __strlen_chk("\" name=\"",9);
              if (FVar5 == (FileOutputStream)0x0) {
                (**(code **)(*plVar57 + 0x30))(plVar57,"\" name=\"");
              }
              else {
                File::writeDosEOLExpand((File *)plVar57,"\" name=\"",uVar25);
              }
              bVar12 = (*(byte *)(pplVar70 + 5) & 1) != 0;
              plVar57 = (long *)((long)pplVar70 + 0x29);
              if (bVar12) {
                plVar57 = pplVar70[7];
              }
              uVar25 = (uint)(*(byte *)(pplVar70 + 5) >> 1);
              if (bVar12) {
                uVar25 = *(uint *)(pplVar70 + 6);
              }
              if (*pFVar1 == (FileOutputStream)0x0) {
                (**(code **)(**pplVar2 + 0x30))();
              }
              else {
                File::writeDosEOLExpand((File *)*pplVar2,plVar57,uVar25);
              }
              FVar5 = *pFVar1;
              plVar57 = *pplVar2;
              uVar25 = __strlen_chk(&DAT_004ddf8b,5);
              if (FVar5 == (FileOutputStream)0x0) {
                (**(code **)(*plVar57 + 0x30))(plVar57,&DAT_004ddf8b);
              }
              else {
                File::writeDosEOLExpand((File *)plVar57,&DAT_004ddf8b,uVar25);
              }
              pplVar51 = (long **)pplVar70[1];
              if ((long **)pplVar70[1] == (long **)0x0) {
                pplVar51 = pplVar70 + 2;
                bVar12 = (long **)**pplVar51 != pplVar70;
                pplVar70 = (long **)*pplVar51;
                if (bVar12) {
                  do {
                    plVar57 = *pplVar51;
                    pplVar51 = (long **)(plVar57 + 2);
                    pplVar70 = (long **)*pplVar51;
                  } while (*pplVar70 != plVar57);
                }
              }
              else {
                do {
                  pplVar70 = pplVar51;
                  pplVar51 = (long **)*pplVar70;
                } while (*pplVar70 != (long *)0x0);
              }
            }
            for (; uVar23 != 0; uVar23 = uVar23 - uVar25) {
              uVar25 = uVar23;
              if (0x59 < uVar23) {
                uVar25 = uVar18;
              }
              puVar42 = &UNK_00501a54 + -(ulong)(uVar25 << 1);
              FVar5 = *pFVar1;
              plVar57 = *pplVar2;
              uVar24 = __strlen_chk(puVar42,0xffffffffffffffff);
              if (FVar5 == (FileOutputStream)0x0) {
                    /* try { // try from 00911108 to 00911167 has its CatchHandler @ 009157d0 */
                (**(code **)(*plVar57 + 0x30))(plVar57,puVar42);
              }
              else {
                File::writeDosEOLExpand((File *)plVar57,puVar42,uVar24);
              }
            }
            FVar5 = *pFVar1;
            plVar57 = *pplVar2;
                    /* try { // try from 0091117c to 009111a3 has its CatchHandler @ 009157b4 */
            uVar25 = __strlen_chk("</Group>\n",10);
            if (FVar5 == (FileOutputStream)0x0) {
                    /* try { // try from 00910ab8 to 00910ac7 has its CatchHandler @ 009157b4 */
              (**(code **)(*plVar57 + 0x30))(plVar57,"</Group>\n");
            }
            else {
              File::writeDosEOLExpand((File *)plVar57,"</Group>\n",uVar25);
            }
            uVar47 = (ulong)((int)uVar47 + 1);
            lVar54 = *(long *)(pbVar35 + 0x40);
            uVar25 = uVar14;
          } while (uVar47 < (ulong)(*(long *)(pbVar35 + 0x48) - lVar54 >> 6));
        }
        for (; uVar22 != 0; uVar22 = uVar22 - uVar25) {
          uVar25 = uVar22;
          if (0x59 < uVar22) {
            uVar25 = uVar18;
          }
          puVar42 = &UNK_00501a54 + -(ulong)(uVar25 << 1);
          FVar5 = *pFVar1;
          plVar57 = *pplVar2;
          uVar23 = __strlen_chk(puVar42,0xffffffffffffffff);
          if (FVar5 == (FileOutputStream)0x0) {
                    /* try { // try from 009111c4 to 00911223 has its CatchHandler @ 0091576c */
            (**(code **)(*plVar57 + 0x30))(plVar57,puVar42);
          }
          else {
            File::writeDosEOLExpand((File *)plVar57,puVar42,uVar23);
          }
        }
        FVar5 = *pFVar1;
        plVar57 = *pplVar2;
                    /* try { // try from 00911238 to 0091127b has its CatchHandler @ 0091575c */
        uVar22 = __strlen_chk("</InfoLayer>\n",0xe);
        if (FVar5 == (FileOutputStream)0x0) {
                    /* try { // try from 00910724 to 00910733 has its CatchHandler @ 0091575c */
          (**(code **)(*plVar57 + 0x30))(plVar57,"</InfoLayer>\n");
        }
        else {
          File::writeDosEOLExpand((File *)plVar57,"</InfoLayer>\n",uVar22);
        }
      }
    }
    lVar54 = *(long *)(param_1 + 0x28);
    if ((int)((ulong)(*(long *)(param_1 + 0x30) - lVar54) >> 3) != 0) {
      pcVar29 = (char *)((ulong)&local_4a0 | 1);
      uVar47 = 0;
      do {
        this_02 = *(TerrainLayerTransformGroup **)(lVar54 + uVar47 * 8);
        if (((byte)this_02[0x11] >> 1 & 1) != 0) {
          this_01 = *(DensityMap **)(this_02 + 0x218);
                    /* try { // try from 00911360 to 00911367 has its CatchHandler @ 009154c8 */
          lVar54 = DensityMap::getFilename();
          if (lVar54 != 0) {
                    /* try { // try from 0091136c to 009113b7 has its CatchHandler @ 009154c4 */
            pcVar40 = (char *)DensityMap::getFilename();
            puVar36 = (undefined8 *)strlen(pcVar40);
            if ((undefined8 *)0xffffffffffffffef < puVar36) {
                    /* try { // try from 009152c8 to 009152cf has its CatchHandler @ 00915498 */
                    /* WARNING: Subroutine does not return */
              std::__ndk1::__basic_string_common<true>::__throw_length_error();
            }
            if (puVar36 < (undefined8 *)0x17) {
              local_4a0 = (undefined8 *)CONCAT71(local_4a0._1_7_,(char)((int)puVar36 << 1));
              pcVar38 = pcVar29;
              if (puVar36 != (undefined8 *)0x0) goto LAB_009113c8;
            }
            else {
              pcVar38 = (char *)operator_new((ulong)(puVar36 + 2) & 0xfffffffffffffff0);
              local_4a0 = (undefined8 *)((ulong)(puVar36 + 2) & 0xfffffffffffffff0 | 1);
              local_498 = puVar36;
              local_490 = pcVar38;
LAB_009113c8:
              memcpy(pcVar38,pcVar40,(size_t)puVar36);
            }
            pcVar38[(long)puVar36] = '\0';
            if (param_11 != (char *)0x0) {
              sVar27 = strlen(param_11);
              if (0xffffffffffffffef < sVar27) {
                    /* try { // try from 009152d0 to 009152d7 has its CatchHandler @ 00915414 */
                    /* WARNING: Subroutine does not return */
                std::__ndk1::__basic_string_common<true>::__throw_length_error();
              }
              if (sVar27 < 0x17) {
                local_380 = (FileOutputStream *)CONCAT71(local_380._1_7_,(char)((int)sVar27 << 1));
                pcVar40 = (char *)((ulong)&local_380 | 1);
                if (sVar27 != 0) goto LAB_00911438;
              }
              else {
                uVar32 = sVar27 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 0091141c to 00911423 has its CatchHandler @ 009153b0 */
                pcVar40 = (char *)operator_new(uVar32);
                local_380 = (FileOutputStream *)(uVar32 | 1);
                uStack_378 = sVar27;
                local_370 = pcVar40;
LAB_00911438:
                memcpy(pcVar40,param_11,sVar27);
              }
              pcVar40[sVar27] = '\0';
              local_488 = (undefined **)0x0;
              local_480 = (undefined **)0x0;
              local_478 = (char *)0x0;
                    /* try { // try from 00911454 to 00911467 has its CatchHandler @ 00915418 */
              local_500 = &local_488;
              uVar32 = PathUtil::buildMovedAbsolutePath
                                 ((basic_string *)&local_380,param_10,(basic_string *)&local_4a0,
                                  (basic_string *)local_500);
              if ((uVar32 & 1) != 0) {
                local_4b8 = 0;
                uStack_4b0 = 0;
                local_4a8 = (char *)0x0;
                    /* try { // try from 00911474 to 009114ab has its CatchHandler @ 0091545c */
                PathUtil::getBasePath((basic_string *)&local_488,(basic_string *)&local_4b8,true);
                pcVar40 = (char *)((ulong)&local_4b8 | 1);
                if ((local_4b8 & 1) != 0) {
                  pcVar40 = local_4a8;
                }
                NativeFileUtil::createAllFolders(pcVar40,false);
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                           *)&local_4a0,(basic_string *)&local_488);
                if ((local_4b8 & 1) != 0) {
                  operator_delete(local_4a8);
                }
              }
              if (((ulong)local_488 & 1) != 0) {
                operator_delete(local_478);
              }
              if (((ulong)local_380 & 1) != 0) {
                operator_delete(local_370);
              }
            }
            pcVar40 = pcVar29;
            if (((ulong)local_4a0 & 1) != 0) {
              pcVar40 = local_490;
            }
                    /* try { // try from 009114f0 to 009114f7 has its CatchHandler @ 0091549c */
            DensityMap::saveToFile(this_01,pcVar40);
            local_370 = (char *)0x0;
            uStack_368 = 0x100000000;
            local_358 = 0;
            p_Stack_d8 = (__tree<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
                          *)0x0;
            local_e0 = 0;
            uStack_c8 = 0;
            local_d0 = (__tree<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
                        *)0x0;
            pvStack_e8 = (void *)0x0;
            local_f0 = (void *)0x0;
            uStack_348 = uStack_348 & 0xffffffffffffff00;
            local_248[0] = '\0';
            local_f4 = 0.0;
            local_380 = (FileOutputStream *)0xff00ff42800000;
            local_360 = CONCAT44(local_360._4_4_,0xffffffff);
            uStack_378 = CONCAT44(uStack_378._4_4_,1);
            local_350 = CONCAT44(local_350._4_4_,0x42480000);
            uStack_f8 = 0;
            local_fc = 0;
            uStack_140 = 0;
            uStack_144 = 0;
            local_148 = 0;
            uStack_130 = 0;
            uStack_138 = 0;
            uStack_120 = 0;
            local_128 = 0;
            uStack_110 = 0;
            uStack_118 = 0;
            cStack_100 = '\0';
            local_10f = 0;
            uStack_108 = 0;
                    /* try { // try from 00911560 to 0091156b has its CatchHandler @ 009155a4 */
            TerrainLayerTransformGroup::saveToDesc
                      (this_02,(TerrainLayerTransformGroupDesc *)&local_380);
            uVar22 = 0x5a;
            for (uVar19 = uVar17; uVar19 != 0; uVar19 = uVar19 - uVar18) {
              uVar18 = uVar19;
              if (0x59 < uVar19) {
                uVar18 = uVar22;
              }
              puVar42 = &UNK_00501a54 + -(ulong)(uVar18 << 1);
              FVar5 = *pFVar1;
              plVar57 = *pplVar2;
              uVar25 = __strlen_chk(puVar42,0xffffffffffffffff);
              if (FVar5 == (FileOutputStream)0x0) {
                    /* try { // try from 00911584 to 009115e3 has its CatchHandler @ 00915738 */
                (**(code **)(*plVar57 + 0x30))(plVar57,puVar42);
              }
              else {
                File::writeDosEOLExpand((File *)plVar57,puVar42,uVar25);
              }
            }
            FVar5 = *pFVar1;
            plVar57 = *pplVar2;
                    /* try { // try from 009115f8 to 0091165b has its CatchHandler @ 009155a4 */
            uVar19 = __strlen_chk("<DetailLayer",0xd);
            if (FVar5 == (FileOutputStream)0x0) {
              (**(code **)(*plVar57 + 0x30))(plVar57,"<DetailLayer");
            }
            else {
              File::writeDosEOLExpand((File *)plVar57,"<DetailLayer",uVar19);
            }
            exportCommonTerrainDetailAttributes
                      ((TerrainDetailTransformGroup *)this_02,
                       (TerrainDetailTransformGroupDesc *)&local_380,this,(set *)local_500,
                       (map *)plVar60,pmVar44,param_9,true,param_14);
            local_4d0 = param_14;
            if (local_358 != 0) {
                    /* try { // try from 00911670 to 009116a7 has its CatchHandler @ 00915508 */
              I3DWriter::writeUint32Attribute
                        ((I3DWriter *)&local_4d0,"materialId",*(uint *)(local_358 + 0x18));
            }
            I3DWriter::writeFloatAttribute((I3DWriter *)&local_4d0,"viewDistance",(float)local_350);
            I3DWriter::writeFloatAttribute
                      ((I3DWriter *)&local_4d0,"blendOutDistance",local_350._4_4_);
            if ((char)uStack_348 == '\0') {
              local_500 = (undefined8 *)0x0;
            }
            else {
              local_b8 = &uStack_348;
              if (local_248[0] == '\0') {
                local_500 = (undefined8 *)0x1;
              }
              else {
                local_500 = (undefined8 *)0x2;
                local_b0 = local_248;
              }
            }
                    /* try { // try from 009116dc to 009116ef has its CatchHandler @ 009156f8 */
            I3DWriter::writeStringListAttributeWithEmptyOmit
                      ((I3DWriter *)&local_4d0,"densityMapShaderNames",(char **)&local_b8,
                       (uint)local_500);
            if (cStack_100 != '\0') {
              local_488 = (undefined **)0xfd8f40;
              local_418[0] = (undefined **)0xfd8f68;
                    /* try { // try from 00911710 to 0091171b has its CatchHandler @ 00915404 */
              std::__ndk1::ios_base::init(local_418);
              local_390 = 0;
              local_388 = 0xffffffff;
              local_488 = &PTR__basic_ostringstream_00fd8ed0;
              local_418[0] = &PTR__basic_ostringstream_00fd8ef8;
                    /* try { // try from 00911740 to 00911747 has its CatchHandler @ 009153e8 */
              std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::basic_streambuf();
              uVar19 = local_148;
              local_480 = &PTR__basic_stringbuf_00fd8fa0;
              bVar12 = local_148 == 0;
              uStack_438 = 0;
              local_440 = 0;
              uStack_428 = 0;
              local_430 = (void *)0x0;
              local_420 = 0x10;
              if (local_148 != 0) {
                uVar32 = 0;
                bVar45 = true;
                puVar58 = (uint *)((long)&uStack_140 + 4);
                do {
                  if (!bVar45) {
                    /* try { // try from 0091178c to 009117d3 has its CatchHandler @ 0091574c */
                    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                              ((basic_ostream *)&local_488,";",1);
                  }
                  pbVar37 = (basic_ostream *)
                            std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::
                            operator<<((basic_ostream<char,std::__ndk1::char_traits<char>> *)
                                       &local_488,puVar58[-1]);
                  pbVar37 = std::__ndk1::
                            __put_character_sequence<char,std::__ndk1::char_traits<char>>
                                      (pbVar37," ",1);
                  pbVar37 = (basic_ostream *)
                            std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::
                            operator<<((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar37
                                       ,*puVar58);
                  pbVar37 = std::__ndk1::
                            __put_character_sequence<char,std::__ndk1::char_traits<char>>
                                      (pbVar37," ",1);
                  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar37,0);
                  bVar45 = false;
                  uVar32 = uVar32 + 1;
                  puVar58 = puVar58 + 2;
                } while (uVar32 < local_148);
              }
              if (uStack_144 == 0) {
                if (uVar19 != 0) goto LAB_00911868;
              }
              else {
                uVar32 = 0;
                puVar58 = (uint *)((long)&uStack_120 + 4);
                do {
                  if (!bVar12) {
                    /* try { // try from 00911800 to 00911847 has its CatchHandler @ 00915748 */
                    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                              ((basic_ostream *)&local_488,";",1);
                  }
                  pbVar37 = (basic_ostream *)
                            std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::
                            operator<<((basic_ostream<char,std::__ndk1::char_traits<char>> *)
                                       &local_488,puVar58[-1]);
                  pbVar37 = std::__ndk1::
                            __put_character_sequence<char,std::__ndk1::char_traits<char>>
                                      (pbVar37," ",1);
                  pbVar37 = (basic_ostream *)
                            std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::
                            operator<<((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar37
                                       ,*puVar58);
                  pbVar37 = std::__ndk1::
                            __put_character_sequence<char,std::__ndk1::char_traits<char>>
                                      (pbVar37," ",1);
                  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar37,1);
                  bVar12 = false;
                  uVar32 = uVar32 + 1;
                  puVar58 = puVar58 + 2;
                } while (uVar32 < uStack_144);
LAB_00911868:
                    /* try { // try from 00911868 to 00911873 has its CatchHandler @ 009153e0 */
                std::__ndk1::
                basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                str();
                pcVar40 = (char *)((ulong)&local_4b8 | 1);
                if ((local_4b8 & 1) != 0) {
                  pcVar40 = local_4a8;
                }
                    /* try { // try from 00911888 to 00911897 has its CatchHandler @ 009153c8 */
                I3DWriter::writeStringAttribute
                          ((I3DWriter *)&local_4d0,"combinedValuesChannels",pcVar40);
                if ((local_4b8 & 1) != 0) {
                  operator_delete(local_4a8);
                }
              }
              local_418[0] = &PTR__basic_ostringstream_00fd8ef8;
              local_488 = &PTR__basic_ostringstream_00fd8ed0;
              local_480 = &PTR__basic_stringbuf_00fd8fa0;
              if ((local_440 & 1) != 0) {
                operator_delete(local_430);
              }
              std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::~basic_streambuf
                        ((basic_streambuf<char,std::__ndk1::char_traits<char>> *)&local_480);
              std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::~basic_ostream
                        ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_488);
              std::__ndk1::basic_ios<char,std::__ndk1::char_traits<char>>::~basic_ios
                        ((basic_ios<char,std::__ndk1::char_traits<char>> *)local_418);
            }
            if (uStack_f8 != 0) {
              FVar5 = *pFVar1;
              plVar57 = *pplVar2;
                    /* try { // try from 00911910 to 00911b57 has its CatchHandler @ 009156f8 */
              uVar19 = __strlen_chk(" heightFirstChannel=\"",0x16);
              if (FVar5 == (FileOutputStream)0x0) {
                (**(code **)(*plVar57 + 0x30))(plVar57," heightFirstChannel=\"");
                uVar43 = extraout_x1_x00111;
              }
              else {
                File::writeDosEOLExpand((File *)plVar57," heightFirstChannel=\"",uVar19);
                uVar43 = extraout_x1_x00110;
              }
              uVar15 = FUN_0091faa0(&local_488,uVar43,&DAT_004cf2ba,local_fc);
              (**(code **)(**pplVar2 + 0x30))(*pplVar2,&local_488,uVar15);
              FVar5 = *pFVar1;
              plVar57 = *pplVar2;
              uVar19 = __strlen_chk("\" heightNumChannels=\"",0x16);
              if (FVar5 == (FileOutputStream)0x0) {
                (**(code **)(*plVar57 + 0x30))(plVar57,"\" heightNumChannels=\"");
                uVar43 = extraout_x1_x00113;
              }
              else {
                File::writeDosEOLExpand((File *)plVar57,"\" heightNumChannels=\"",uVar19);
                uVar43 = extraout_x1_x00112;
              }
              local_500 = (undefined8 *)(ulong)uStack_f8;
              uVar15 = FUN_0091faa0(&local_488,uVar43,&DAT_004cf2ba);
              (**(code **)(**pplVar2 + 0x30))(*pplVar2,&local_488,uVar15);
              FVar5 = *pFVar1;
              plVar57 = *pplVar2;
              uVar19 = __strlen_chk("\" maxHeight=\"",0xe);
              if (FVar5 == (FileOutputStream)0x0) {
                (**(code **)(*plVar57 + 0x30))(plVar57,"\" maxHeight=\"");
                uVar43 = extraout_x1_x00115;
              }
              else {
                File::writeDosEOLExpand((File *)plVar57,"\" maxHeight=\"",uVar19);
                uVar43 = extraout_x1_x00114;
              }
              uVar15 = FUN_0091faa0((double)local_f4,&local_488,uVar43,&DAT_0050d9a5);
              (**(code **)(**pplVar2 + 0x30))(*pplVar2,&local_488,uVar15);
              FVar5 = *pFVar1;
              plVar57 = *pplVar2;
              uVar19 = __strlen_chk(&DAT_004e56b4,2);
              if (FVar5 == (FileOutputStream)0x0) {
                (**(code **)(*plVar57 + 0x30))(plVar57,&DAT_004e56b4);
              }
              else {
                File::writeDosEOLExpand((File *)plVar57,&DAT_004e56b4,uVar19);
              }
            }
            if ((local_d0 == p_Stack_d8) && (pvStack_e8 == local_f0)) {
              FVar5 = *pFVar1;
              plVar57 = *pplVar2;
              uVar19 = __strlen_chk(&DAT_00509104,4);
              if (FVar5 == (FileOutputStream)0x0) {
                (**(code **)(*plVar57 + 0x30))(plVar57,&DAT_00509104);
              }
              else {
                File::writeDosEOLExpand((File *)plVar57,&DAT_00509104,uVar19);
              }
            }
            else {
              FVar5 = *pFVar1;
              plVar57 = *pplVar2;
              uVar19 = __strlen_chk(&DAT_004db81c,3);
              if (FVar5 == (FileOutputStream)0x0) {
                (**(code **)(*plVar57 + 0x30))(plVar57,&DAT_004db81c);
              }
              else {
                File::writeDosEOLExpand((File *)plVar57,&DAT_004db81c,uVar19);
              }
              if (local_d0 != p_Stack_d8) {
                uVar32 = 0;
                uVar19 = uVar14;
                p_Var4 = p_Stack_d8;
                do {
                  for (; p_Var59 = p_Stack_d8, p_Stack_d8 = p_Var4, uVar19 != 0;
                      uVar19 = uVar19 - uVar18) {
                    uVar18 = uVar19;
                    if (0x59 < uVar19) {
                      uVar18 = uVar22;
                    }
                    puVar42 = &UNK_00501a54 + -(ulong)(uVar18 << 1);
                    FVar5 = *pFVar1;
                    plVar57 = *pplVar2;
                    uVar25 = __strlen_chk(puVar42,0xffffffffffffffff);
                    if (FVar5 == (FileOutputStream)0x0) {
                    /* try { // try from 00911bb8 to 00911c17 has its CatchHandler @ 009157ac */
                      (**(code **)(*plVar57 + 0x30))(plVar57,puVar42);
                    }
                    else {
                      File::writeDosEOLExpand((File *)plVar57,puVar42,uVar25);
                    }
                    p_Var4 = p_Stack_d8;
                    p_Stack_d8 = p_Var59;
                  }
                  FVar5 = *pFVar1;
                  plVar57 = *pplVar2;
                    /* try { // try from 00911c2c to 00911f6b has its CatchHandler @ 009157a0 */
                  uVar19 = __strlen_chk("<Group name=\"",0xe);
                  if (FVar5 == (FileOutputStream)0x0) {
                    (**(code **)(*plVar57 + 0x30))(plVar57,"<Group name=\"");
                  }
                  else {
                    File::writeDosEOLExpand((File *)plVar57,"<Group name=\"",uVar19);
                  }
                  p_Var4 = p_Var59 + uVar32 * 0x40 + 1;
                  if (((byte)p_Var59[uVar32 * 0x40] & 1) != 0) {
                    p_Var4 = *(__tree<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
                               **)(p_Var59 + uVar32 * 0x40 + 0x10);
                  }
                  FVar5 = *pFVar1;
                  plVar57 = *pplVar2;
                  uVar19 = __strlen_chk(p_Var4,0xffffffffffffffff);
                  if (FVar5 == (FileOutputStream)0x0) {
                    (**(code **)(*plVar57 + 0x30))(plVar57,p_Var4);
                  }
                  else {
                    File::writeDosEOLExpand((File *)plVar57,p_Var4,uVar19);
                  }
                  FVar5 = *pFVar1;
                  plVar57 = *pplVar2;
                  uVar19 = __strlen_chk("\" firstChannel=\"",0x11);
                  if (FVar5 == (FileOutputStream)0x0) {
                    (**(code **)(*plVar57 + 0x30))(plVar57,"\" firstChannel=\"");
                    uVar43 = extraout_x1_x00117;
                  }
                  else {
                    File::writeDosEOLExpand((File *)plVar57,"\" firstChannel=\"",uVar19);
                    uVar43 = extraout_x1_x00116;
                  }
                  uVar15 = FUN_0091faa0(&local_488,uVar43,&DAT_004cf2ba,
                                        *(undefined4 *)(p_Var59 + uVar32 * 0x40 + 0x18));
                  (**(code **)(**pplVar2 + 0x30))(*pplVar2,&local_488,uVar15);
                  FVar5 = *pFVar1;
                  plVar57 = *pplVar2;
                  uVar19 = __strlen_chk("\" numChannels=\"",0x10);
                  if (FVar5 == (FileOutputStream)0x0) {
                    (**(code **)(*plVar57 + 0x30))(plVar57,"\" numChannels=\"");
                    uVar43 = extraout_x1_x00119;
                  }
                  else {
                    File::writeDosEOLExpand((File *)plVar57,"\" numChannels=\"",uVar19);
                    uVar43 = extraout_x1_x00118;
                  }
                  local_500 = (undefined8 *)(ulong)*(uint *)(p_Var59 + uVar32 * 0x40 + 0x1c);
                  uVar15 = FUN_0091faa0(&local_488,uVar43,&DAT_004cf2ba);
                  (**(code **)(**pplVar2 + 0x30))(*pplVar2,&local_488,uVar15);
                  FVar5 = *pFVar1;
                  plVar57 = *pplVar2;
                  uVar19 = __strlen_chk(&DAT_0050d91a,3);
                  if (FVar5 == (FileOutputStream)0x0) {
                    (**(code **)(*plVar57 + 0x30))(plVar57,&DAT_0050d91a);
                  }
                  else {
                    File::writeDosEOLExpand((File *)plVar57,&DAT_0050d91a,uVar19);
                  }
                  if (*(uint *)(p_Var59 + uVar32 * 0x40 + 0x20) != 0) {
                    FVar5 = *pFVar1;
                    plVar57 = *pplVar2;
                    uVar19 = __strlen_chk("maxDefaultFill=\"",0x11);
                    if (FVar5 == (FileOutputStream)0x0) {
                      (**(code **)(*plVar57 + 0x30))(plVar57,"maxDefaultFill=\"");
                      uVar43 = extraout_x1_x00121;
                    }
                    else {
                      File::writeDosEOLExpand((File *)plVar57,"maxDefaultFill=\"",uVar19);
                      uVar43 = extraout_x1_x00120;
                    }
                    local_500 = (undefined8 *)(ulong)*(uint *)(p_Var59 + uVar32 * 0x40 + 0x20);
                    uVar15 = FUN_0091faa0(&local_488,uVar43,&DAT_004cf2ba);
                    (**(code **)(**pplVar2 + 0x30))(*pplVar2,&local_488,uVar15);
                    FVar5 = *pFVar1;
                    plVar57 = *pplVar2;
                    uVar19 = __strlen_chk(&DAT_004e56b4,2);
                    if (FVar5 == (FileOutputStream)0x0) {
                      (**(code **)(*plVar57 + 0x30))(plVar57,&DAT_004e56b4);
                    }
                    else {
                      File::writeDosEOLExpand((File *)plVar57,&DAT_004e56b4,uVar19);
                    }
                  }
                  FVar5 = *pFVar1;
                  plVar57 = *pplVar2;
                  uVar19 = __strlen_chk(&DAT_004db81c,3);
                  if (FVar5 == (FileOutputStream)0x0) {
                    (**(code **)(*plVar57 + 0x30))(plVar57,&DAT_004db81c);
                  }
                  else {
                    File::writeDosEOLExpand((File *)plVar57,&DAT_004db81c,uVar19);
                  }
                  pplVar70 = *(long ***)(p_Var59 + uVar32 * 0x40 + 0x28);
                  while (uVar19 = uVar20, uVar18 = uVar14,
                        pplVar70 != (long **)(p_Var59 + uVar32 * 0x40 + 0x30)) {
                    for (; uVar19 != 0; uVar19 = uVar19 - uVar18) {
                      uVar18 = uVar19;
                      if (0x59 < uVar19) {
                        uVar18 = uVar22;
                      }
                      puVar42 = &UNK_00501a54 + -(ulong)(uVar18 << 1);
                      FVar5 = *pFVar1;
                      plVar57 = *pplVar2;
                      uVar25 = __strlen_chk(puVar42,0xffffffffffffffff);
                      if (FVar5 == (FileOutputStream)0x0) {
                    /* try { // try from 00911fa0 to 00911fff has its CatchHandler @ 009157e0 */
                        (**(code **)(*plVar57 + 0x30))(plVar57,puVar42);
                      }
                      else {
                        File::writeDosEOLExpand((File *)plVar57,puVar42,uVar25);
                      }
                    }
                    FVar5 = *pFVar1;
                    plVar57 = *pplVar2;
                    /* try { // try from 00912014 to 00912163 has its CatchHandler @ 009157d8 */
                    uVar19 = __strlen_chk("<Option value=\"",0x10);
                    if (FVar5 == (FileOutputStream)0x0) {
                      (**(code **)(*plVar57 + 0x30))(plVar57,"<Option value=\"");
                      uVar43 = extraout_x1_x00123;
                    }
                    else {
                      File::writeDosEOLExpand((File *)plVar57,"<Option value=\"",uVar19);
                      uVar43 = extraout_x1_x00122;
                    }
                    local_500 = (undefined8 *)(ulong)*(uint *)(pplVar70 + 4);
                    uVar15 = FUN_0091faa0(&local_488,uVar43,&DAT_004cf2ba);
                    (**(code **)(**pplVar2 + 0x30))(*pplVar2,&local_488,uVar15);
                    FVar5 = *pFVar1;
                    plVar57 = *pplVar2;
                    uVar19 = __strlen_chk("\" name=\"",9);
                    if (FVar5 == (FileOutputStream)0x0) {
                      (**(code **)(*plVar57 + 0x30))(plVar57,"\" name=\"");
                    }
                    else {
                      File::writeDosEOLExpand((File *)plVar57,"\" name=\"",uVar19);
                    }
                    bVar12 = (*(byte *)(pplVar70 + 5) & 1) != 0;
                    plVar57 = (long *)((long)pplVar70 + 0x29);
                    if (bVar12) {
                      plVar57 = pplVar70[7];
                    }
                    uVar19 = (uint)(*(byte *)(pplVar70 + 5) >> 1);
                    if (bVar12) {
                      uVar19 = *(uint *)(pplVar70 + 6);
                    }
                    if (*pFVar1 == (FileOutputStream)0x0) {
                      (**(code **)(**pplVar2 + 0x30))();
                    }
                    else {
                      File::writeDosEOLExpand((File *)*pplVar2,plVar57,uVar19);
                    }
                    FVar5 = *pFVar1;
                    plVar57 = *pplVar2;
                    uVar19 = __strlen_chk(&DAT_004ddf8b,5);
                    if (FVar5 == (FileOutputStream)0x0) {
                      (**(code **)(*plVar57 + 0x30))(plVar57,&DAT_004ddf8b);
                    }
                    else {
                      File::writeDosEOLExpand((File *)plVar57,&DAT_004ddf8b,uVar19);
                    }
                    pplVar51 = (long **)pplVar70[1];
                    if ((long **)pplVar70[1] == (long **)0x0) {
                      pplVar51 = pplVar70 + 2;
                      bVar12 = (long **)**pplVar51 != pplVar70;
                      pplVar70 = (long **)*pplVar51;
                      if (bVar12) {
                        do {
                          plVar57 = *pplVar51;
                          pplVar51 = (long **)(plVar57 + 2);
                          pplVar70 = (long **)*pplVar51;
                        } while (*pplVar70 != plVar57);
                      }
                    }
                    else {
                      do {
                        pplVar70 = pplVar51;
                        pplVar51 = (long **)*pplVar70;
                      } while (*pplVar70 != (long *)0x0);
                    }
                  }
                  for (; uVar18 != 0; uVar18 = uVar18 - uVar19) {
                    uVar19 = uVar18;
                    if (0x59 < uVar18) {
                      uVar19 = uVar22;
                    }
                    puVar42 = &UNK_00501a54 + -(ulong)(uVar19 << 1);
                    FVar5 = *pFVar1;
                    plVar57 = *pplVar2;
                    uVar25 = __strlen_chk(puVar42,0xffffffffffffffff);
                    if (FVar5 == (FileOutputStream)0x0) {
                    /* try { // try from 009121c4 to 00912223 has its CatchHandler @ 009157a8 */
                      (**(code **)(*plVar57 + 0x30))(plVar57,puVar42);
                    }
                    else {
                      File::writeDosEOLExpand((File *)plVar57,puVar42,uVar25);
                    }
                  }
                  FVar5 = *pFVar1;
                  plVar57 = *pplVar2;
                    /* try { // try from 00912238 to 0091225f has its CatchHandler @ 009157a0 */
                  uVar19 = __strlen_chk("</Group>\n",10);
                  if (FVar5 == (FileOutputStream)0x0) {
                    /* try { // try from 00911b78 to 00911b87 has its CatchHandler @ 009157a0 */
                    (**(code **)(*plVar57 + 0x30))(plVar57,"</Group>\n");
                  }
                  else {
                    File::writeDosEOLExpand((File *)plVar57,"</Group>\n",uVar19);
                  }
                  uVar32 = (ulong)((int)uVar32 + 1);
                  uVar19 = uVar14;
                  p_Var4 = p_Stack_d8;
                } while (uVar32 < (ulong)((long)local_d0 - (long)p_Stack_d8 >> 6));
              }
              uVar19 = uVar17;
              if (pvStack_e8 != local_f0) {
                uVar32 = 0;
                uVar18 = uVar14;
                pvVar31 = local_f0;
                do {
                  for (; pvVar11 = local_f0, local_f0 = pvVar31, uVar18 != 0;
                      uVar18 = uVar18 - uVar25) {
                    uVar25 = uVar18;
                    if (0x59 < uVar18) {
                      uVar25 = uVar22;
                    }
                    puVar42 = &UNK_00501a54 + -(ulong)(uVar25 << 1);
                    FVar5 = *pFVar1;
                    plVar57 = *pplVar2;
                    uVar23 = __strlen_chk(puVar42,0xffffffffffffffff);
                    if (FVar5 == (FileOutputStream)0x0) {
                    /* try { // try from 009122d8 to 00912337 has its CatchHandler @ 009157b0 */
                      (**(code **)(*plVar57 + 0x30))(plVar57,puVar42);
                    }
                    else {
                      File::writeDosEOLExpand((File *)plVar57,puVar42,uVar23);
                    }
                    pvVar31 = local_f0;
                    local_f0 = pvVar11;
                  }
                  FVar5 = *pFVar1;
                  plVar57 = *pplVar2;
                    /* try { // try from 0091234c to 00912557 has its CatchHandler @ 0091578c */
                  uVar18 = __strlen_chk("<DistanceTexture match=\"",0x19);
                  if (FVar5 == (FileOutputStream)0x0) {
                    (**(code **)(*plVar57 + 0x30))(plVar57,"<DistanceTexture match=\"");
                  }
                  else {
                    File::writeDosEOLExpand((File *)plVar57,"<DistanceTexture match=\"",uVar18);
                  }
                  pbVar62 = (byte *)((long)pvVar11 + uVar32 * 0x38);
                  pbVar35 = pbVar62 + 1;
                  if ((*pbVar62 & 1) != 0) {
                    pbVar35 = *(byte **)((long)pvVar11 + uVar32 * 0x38 + 0x10);
                  }
                  FVar5 = *pFVar1;
                  plVar57 = *pplVar2;
                  uVar18 = __strlen_chk(pbVar35,0xffffffffffffffff);
                  if (FVar5 == (FileOutputStream)0x0) {
                    (**(code **)(*plVar57 + 0x30))(plVar57,pbVar35);
                  }
                  else {
                    File::writeDosEOLExpand((File *)plVar57,pbVar35,uVar18);
                  }
                  FVar5 = *pFVar1;
                  plVar57 = *pplVar2;
                  uVar18 = __strlen_chk("\" fileId=\"",0xb);
                  if (FVar5 == (FileOutputStream)0x0) {
                    (**(code **)(*plVar57 + 0x30))(plVar57,"\" fileId=\"");
                  }
                  else {
                    File::writeDosEOLExpand((File *)plVar57,"\" fileId=\"",uVar18);
                  }
                  _Var21 = std::__ndk1::
                           __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>>>
                           ::
                           find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                                     ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>>>
                                       *)param_9,
                                      (basic_string *)((long)pvVar11 + uVar32 * 0x38 + 0x18));
                  if (pmVar48 == (map *)(ulong)_Var21) {
                    local_500 = (undefined8 *)0x0;
                  }
                  else {
                    local_500 = (undefined8 *)(ulong)*(uint *)((map *)(ulong)_Var21 + 0x38);
                  }
                  uVar15 = FUN_0091faa0(&local_488);
                  (**(code **)(**pplVar2 + 0x30))(*pplVar2,&local_488,uVar15);
                  puVar58 = (uint *)((long)pvVar11 + uVar32 * 0x38 + 0x30);
                  if (*puVar58 != 0) {
                    FVar5 = *pFVar1;
                    plVar57 = *pplVar2;
                    uVar18 = __strlen_chk("\" layer=\"",10);
                    if (FVar5 == (FileOutputStream)0x0) {
                      (**(code **)(*plVar57 + 0x30))(plVar57,"\" layer=\"");
                      uVar43 = extraout_x1_x00125;
                    }
                    else {
                      File::writeDosEOLExpand((File *)plVar57,"\" layer=\"",uVar18);
                      uVar43 = extraout_x1_x00124;
                    }
                    local_500 = (undefined8 *)(ulong)*puVar58;
                    uVar15 = FUN_0091faa0(&local_488,uVar43,&DAT_004cf2ba);
                    (**(code **)(**pplVar2 + 0x30))(*pplVar2,&local_488,uVar15);
                  }
                  FVar5 = *pFVar1;
                  plVar57 = *pplVar2;
                  uVar18 = __strlen_chk(&DAT_004ddf8b,5);
                  if (FVar5 == (FileOutputStream)0x0) {
                    /* try { // try from 00912284 to 0091228f has its CatchHandler @ 0091578c */
                    (**(code **)(*plVar57 + 0x30))(plVar57,&DAT_004ddf8b);
                  }
                  else {
                    File::writeDosEOLExpand((File *)plVar57,&DAT_004ddf8b,uVar18);
                  }
                  uVar32 = (ulong)((int)uVar32 + 1);
                  uVar52 = ((long)pvStack_e8 - (long)local_f0 >> 3) * 0x6db6db6db6db6db7;
                  uVar18 = uVar14;
                  pvVar31 = local_f0;
                } while (uVar32 <= uVar52 && uVar52 - uVar32 != 0);
              }
              for (; uVar19 != 0; uVar19 = uVar19 - uVar18) {
                uVar18 = uVar19;
                if (0x59 < uVar19) {
                  uVar18 = uVar22;
                }
                puVar42 = &UNK_00501a54 + -(ulong)(uVar18 << 1);
                FVar5 = *pFVar1;
                plVar57 = *pplVar2;
                uVar25 = __strlen_chk(puVar42,0xffffffffffffffff);
                if (FVar5 == (FileOutputStream)0x0) {
                    /* try { // try from 00912574 to 009125d3 has its CatchHandler @ 00915730 */
                  (**(code **)(*plVar57 + 0x30))(plVar57,puVar42);
                }
                else {
                  File::writeDosEOLExpand((File *)plVar57,puVar42,uVar25);
                }
              }
              FVar5 = *pFVar1;
              plVar57 = *pplVar2;
                    /* try { // try from 009125e8 to 00912687 has its CatchHandler @ 009156f8 */
              uVar19 = __strlen_chk("</DetailLayer>\n",0x10);
              if (FVar5 == (FileOutputStream)0x0) {
                (**(code **)(*plVar57 + 0x30))(plVar57,"</DetailLayer>\n");
              }
              else {
                File::writeDosEOLExpand((File *)plVar57,"</DetailLayer>\n",uVar19);
              }
            }
            p_Var4 = p_Stack_d8;
            if (p_Stack_d8 !=
                (__tree<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
                 *)0x0) {
              if (local_d0 != p_Stack_d8) {
                p_Var59 = local_d0 + -0x18;
                do {
                  std::__ndk1::
                  __tree<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
                  ::destroy(p_Var59,*(__tree_node **)(p_Var59 + 8));
                  if (((byte)p_Var59[-0x28] & 1) != 0) {
                    operator_delete(*(void **)(p_Var59 + -0x18));
                  }
                  p_Var55 = p_Var59 + -0x28;
                  p_Var59 = p_Var59 + -0x40;
                } while (p_Var55 != p_Var4);
              }
              local_d0 = p_Var4;
              operator_delete(p_Stack_d8);
            }
            pvVar31 = local_f0;
            pvVar11 = pvStack_e8;
            if (local_f0 != (void *)0x0) {
              while (pvVar9 = pvVar11, pvVar9 != pvVar31) {
                if ((*(byte *)((long)pvVar9 + -0x20) & 1) != 0) {
                  operator_delete(*(void **)((long)pvVar9 + -0x10));
                }
                pvVar11 = (void *)((long)pvVar9 + -0x38);
                if ((*(byte *)((long)pvVar9 + -0x38) & 1) != 0) {
                  operator_delete(*(void **)((long)pvVar9 + -0x28));
                }
              }
              pvStack_e8 = pvVar31;
              operator_delete(local_f0);
            }
            if (((ulong)local_4a0 & 1) != 0) {
              operator_delete(local_490);
            }
          }
        }
        lVar54 = *(long *)(param_1 + 0x28);
        uVar47 = uVar47 + 1;
      } while (uVar47 < ((ulong)(*(long *)(param_1 + 0x30) - lVar54) >> 3 & 0xffffffff));
    }
    this_00 = **(float ***)(param_1 + 0x558);
    for (uVar19 = uVar17; uVar19 != 0; uVar19 = uVar19 - uVar22) {
      uVar22 = uVar19;
      if (0x59 < uVar19) {
        uVar22 = 0x5a;
      }
      puVar42 = &UNK_00501a54 + -(ulong)(uVar22 << 1);
      FVar5 = *pFVar1;
      plVar60 = *pplVar2;
      uVar18 = __strlen_chk(puVar42,0xffffffffffffffff);
      if (FVar5 == (FileOutputStream)0x0) {
                    /* try { // try from 00912788 to 009127e7 has its CatchHandler @ 00915644 */
        (**(code **)(*plVar60 + 0x30))(plVar60,puVar42);
      }
      else {
        File::writeDosEOLExpand((File *)plVar60,puVar42,uVar18);
      }
    }
    FVar5 = *pFVar1;
    plVar60 = *pplVar2;
                    /* try { // try from 009127fc to 009129d3 has its CatchHandler @ 00915510 */
    uVar19 = __strlen_chk("<FoliageSystem cellSize=\"",0x1a);
    if (FVar5 == (FileOutputStream)0x0) {
      (**(code **)(*plVar60 + 0x30))(plVar60,"<FoliageSystem cellSize=\"");
      uVar43 = extraout_x1_x00127;
    }
    else {
      File::writeDosEOLExpand((File *)plVar60,"<FoliageSystem cellSize=\"",uVar19);
      uVar43 = extraout_x1_x00126;
    }
    uVar15 = FUN_0091faa0((double)*this_00,&local_380,uVar43,&DAT_0050d9a5);
    (**(code **)(**pplVar2 + 0x30))(*pplVar2,&local_380,uVar15);
    FVar5 = *pFVar1;
    plVar60 = *pplVar2;
    uVar19 = __strlen_chk("\" objectMask=\"",0xf);
    if (FVar5 == (FileOutputStream)0x0) {
      (**(code **)(*plVar60 + 0x30))(plVar60,"\" objectMask=\"");
      uVar43 = extraout_x1_x00129;
    }
    else {
      File::writeDosEOLExpand((File *)plVar60,"\" objectMask=\"",uVar19);
      uVar43 = extraout_x1_x00128;
    }
    uVar15 = FUN_0091faa0(&local_380,uVar43,&DAT_004cf2ba,this_00[1]);
    (**(code **)(**pplVar2 + 0x30))(*pplVar2,&local_380,uVar15);
    FVar5 = *pFVar1;
    plVar60 = *pplVar2;
    uVar19 = __strlen_chk("\" decalLayer=\"",0xf);
    if (FVar5 == (FileOutputStream)0x0) {
      (**(code **)(*plVar60 + 0x30))(plVar60,"\" decalLayer=\"");
      uVar43 = extraout_x1_x00131;
    }
    else {
      File::writeDosEOLExpand((File *)plVar60,"\" decalLayer=\"",uVar19);
      uVar43 = extraout_x1_x00130;
    }
    uVar15 = FUN_0091faa0(&local_380,uVar43,&DAT_004cf2ba,this_00[2]);
    (**(code **)(**pplVar2 + 0x30))(*pplVar2,&local_380,uVar15);
    FVar5 = *pFVar1;
    plVar60 = *pplVar2;
    uVar19 = __strlen_chk(&DAT_004ddf6f,4);
    if (FVar5 == (FileOutputStream)0x0) {
      (**(code **)(*plVar60 + 0x30))(plVar60,&DAT_004ddf6f);
    }
    else {
      File::writeDosEOLExpand((File *)plVar60,&DAT_004ddf6f,uVar19);
    }
    uVar19 = uVar17;
    if (*(long *)(this_00 + 6) != *(long *)(this_00 + 4)) {
      pcVar29 = (char *)((ulong)&local_488 | 1);
      uVar47 = 0;
      do {
                    /* try { // try from 00912a3c to 00912a4b has its CatchHandler @ 00915588 */
        uVar22 = (uint)uVar47;
        pplVar70 = (long **)FoliageSystemDesc::getMultiLayer
                                      ((FoliageSystemDesc *)this_00,uVar22,true);
        plVar60 = *pplVar70;
                    /* try { // try from 00912a54 to 00912a9b has its CatchHandler @ 009155f8 */
        pcVar40 = (char *)DensityMap::getFilename();
        ppuVar39 = (undefined **)strlen(pcVar40);
        if ((undefined **)0xffffffffffffffef < ppuVar39) {
                    /* try { // try from 009152a0 to 009152a7 has its CatchHandler @ 0091558c */
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__basic_string_common<true>::__throw_length_error();
        }
        if (ppuVar39 < (undefined **)0x17) {
          local_488 = (undefined **)CONCAT71(local_488._1_7_,(char)((int)ppuVar39 << 1));
          pcVar38 = pcVar29;
          if (ppuVar39 != (undefined **)0x0) goto LAB_00912aac;
        }
        else {
          pcVar38 = (char *)operator_new((ulong)(ppuVar39 + 2) & 0xfffffffffffffff0);
          local_488 = (undefined **)((ulong)(ppuVar39 + 2) & 0xfffffffffffffff0 | 1);
          local_480 = ppuVar39;
          local_478 = pcVar38;
LAB_00912aac:
          memcpy(pcVar38,pcVar40,(size_t)ppuVar39);
        }
        pcVar38[(long)ppuVar39] = '\0';
        if (param_11 != (char *)0x0) {
          sVar27 = strlen(param_11);
          if (0xffffffffffffffef < sVar27) {
                    /* try { // try from 009152b8 to 009152bf has its CatchHandler @ 009154f4 */
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_length_error();
          }
          if (sVar27 < 0x17) {
            local_380 = (FileOutputStream *)CONCAT71(local_380._1_7_,(char)((int)sVar27 << 1));
            pcVar40 = (char *)((ulong)&local_380 | 1);
            if (sVar27 != 0) goto LAB_00912b1c;
          }
          else {
            uVar47 = sVar27 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 00912b00 to 00912b07 has its CatchHandler @ 009154ac */
            pcVar40 = (char *)operator_new(uVar47);
            local_380 = (FileOutputStream *)(uVar47 | 1);
            uStack_378 = sVar27;
            local_370 = pcVar40;
LAB_00912b1c:
            memcpy(pcVar40,param_11,sVar27);
          }
          pcVar40[sVar27] = '\0';
          local_4a0 = (undefined8 *)0x0;
          local_498 = (undefined8 *)0x0;
          local_490 = (char *)0x0;
                    /* try { // try from 00912b38 to 00912b4b has its CatchHandler @ 009154d4 */
          uVar47 = PathUtil::buildMovedAbsolutePath
                             ((basic_string *)&local_380,param_10,(basic_string *)&local_488,
                              (basic_string *)&local_4a0);
          if ((uVar47 & 1) != 0) {
            local_4b8 = 0;
            uStack_4b0 = 0;
            local_4a8 = (char *)0x0;
                    /* try { // try from 00912b58 to 00912b8f has its CatchHandler @ 00915514 */
            PathUtil::getBasePath((basic_string *)&local_4a0,(basic_string *)&local_4b8,true);
            pcVar40 = (char *)((ulong)&local_4b8 | 1);
            if ((local_4b8 & 1) != 0) {
              pcVar40 = local_4a8;
            }
            NativeFileUtil::createAllFolders(pcVar40,false);
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                       *)&local_488,(basic_string *)&local_4a0);
            if ((local_4b8 & 1) != 0) {
              operator_delete(local_4a8);
            }
          }
          if (((ulong)local_4a0 & 1) != 0) {
            operator_delete(local_490);
          }
          if (((ulong)local_380 & 1) != 0) {
            operator_delete(local_370);
          }
        }
        pcVar40 = pcVar29;
        if (((ulong)local_488 & 1) != 0) {
          pcVar40 = local_478;
        }
                    /* try { // try from 00912bd4 to 00912bdb has its CatchHandler @ 00915744 */
        DensityMap::saveToFile((DensityMap *)plVar60,pcVar40);
        uVar25 = 0x5a;
        for (uVar18 = uVar14; uVar18 != 0; uVar18 = uVar18 - uVar23) {
          uVar23 = uVar18;
          if (0x59 < uVar18) {
            uVar23 = uVar25;
          }
          puVar42 = &UNK_00501a54 + -(ulong)(uVar23 << 1);
          FVar5 = *pFVar1;
          plVar57 = *pplVar2;
          uVar24 = __strlen_chk(puVar42,0xffffffffffffffff);
          if (FVar5 == (FileOutputStream)0x0) {
                    /* try { // try from 00912bf8 to 00912c57 has its CatchHandler @ 00915768 */
            (**(code **)(*plVar57 + 0x30))(plVar57,puVar42);
          }
          else {
            File::writeDosEOLExpand((File *)plVar57,puVar42,uVar24);
          }
        }
        FVar5 = *pFVar1;
        plVar57 = *pplVar2;
                    /* try { // try from 00912c6c to 00912cb7 has its CatchHandler @ 00915744 */
        uVar18 = __strlen_chk("<FoliageMultiLayer densityMapId=\"",0x22);
        if (FVar5 == (FileOutputStream)0x0) {
          (**(code **)(*plVar57 + 0x30))(plVar57,"<FoliageMultiLayer densityMapId=\"");
        }
        else {
          File::writeDosEOLExpand((File *)plVar57,"<FoliageMultiLayer densityMapId=\"",uVar18);
        }
                    /* try { // try from 00912cb8 to 00912cff has its CatchHandler @ 009155f4 */
        pcVar40 = (char *)DensityMap::getFilename();
        puVar36 = (undefined8 *)strlen(pcVar40);
        if ((undefined8 *)0xffffffffffffffef < puVar36) {
                    /* try { // try from 009152a8 to 009152af has its CatchHandler @ 00915584 */
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__basic_string_common<true>::__throw_length_error();
        }
        if (puVar36 < (undefined8 *)0x17) {
          local_4a0 = (undefined8 *)CONCAT71(local_4a0._1_7_,(char)((int)puVar36 << 1));
          pcVar38 = (char *)((ulong)&local_4a0 | 1);
          if (puVar36 != (undefined8 *)0x0) goto LAB_00912d10;
        }
        else {
          pcVar38 = (char *)operator_new((ulong)(puVar36 + 2) & 0xfffffffffffffff0);
          local_4a0 = (undefined8 *)((ulong)(puVar36 + 2) & 0xfffffffffffffff0 | 1);
          local_498 = puVar36;
          local_490 = pcVar38;
LAB_00912d10:
          memcpy(pcVar38,pcVar40,(size_t)puVar36);
        }
        pcVar38[(long)puVar36] = '\0';
                    /* try { // try from 00912d24 to 00912d73 has its CatchHandler @ 009156a8 */
        std::__ndk1::
        __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>>>
        ::
        find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                  ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>>>
                    *)param_9,(basic_string *)&local_4a0);
        uVar15 = FUN_0091faa0(&local_380);
        (**(code **)(**pplVar2 + 0x30))(*pplVar2,&local_380,uVar15);
        if (((ulong)local_4a0 & 1) != 0) {
          operator_delete(local_490);
        }
        FVar5 = *pFVar1;
        plVar57 = *pplVar2;
                    /* try { // try from 00912d94 to 00912f3b has its CatchHandler @ 00915744 */
        uVar18 = __strlen_chk("\" numChannels=\"",0x10);
        if (FVar5 == (FileOutputStream)0x0) {
          (**(code **)(*plVar57 + 0x30))(plVar57,"\" numChannels=\"");
        }
        else {
          File::writeDosEOLExpand((File *)plVar57,"\" numChannels=\"",uVar18);
        }
        auVar72 = (**(code **)(*plVar60 + 0x58))(plVar60);
        uVar15 = FUN_0091faa0(&local_380,auVar72._8_8_,&DAT_004cf2ba,auVar72._0_8_ & 0xffffffff);
        (**(code **)(**pplVar2 + 0x30))(*pplVar2,&local_380,uVar15);
        FVar5 = *pFVar1;
        plVar57 = *pplVar2;
        uVar18 = __strlen_chk("\" numTypeIndexChannels=\"",0x19);
        if (FVar5 == (FileOutputStream)0x0) {
          (**(code **)(*plVar57 + 0x30))(plVar57,"\" numTypeIndexChannels=\"");
        }
        else {
          File::writeDosEOLExpand((File *)plVar57,"\" numTypeIndexChannels=\"",uVar18);
        }
        auVar72 = (**(code **)(*plVar60 + 0x60))(plVar60);
        uVar15 = FUN_0091faa0(&local_380,auVar72._8_8_,&DAT_004cf2ba,auVar72._0_8_ & 0xffffffff);
        (**(code **)(**pplVar2 + 0x30))(*pplVar2,&local_380,uVar15);
        if (1 < *(uint *)(plVar60 + 0x15)) {
          FVar5 = *pFVar1;
          plVar57 = *pplVar2;
          uVar18 = __strlen_chk("\" compressionChannels=\"",0x18);
          if (FVar5 == (FileOutputStream)0x0) {
            (**(code **)(*plVar57 + 0x30))(plVar57,"\" compressionChannels=\"");
            uVar43 = extraout_x1_x00133;
          }
          else {
            File::writeDosEOLExpand((File *)plVar57,"\" compressionChannels=\"",uVar18);
            uVar43 = extraout_x1_x00132;
          }
          uVar15 = FUN_0091faa0(&local_380,uVar43,&DAT_004cf2ba,
                                *(undefined4 *)((long)plVar60 + 0xac));
          (**(code **)(**pplVar2 + 0x30))(*pplVar2,&local_380,uVar15);
          if (*(int *)(plVar60 + 0x15) - 3U < 0xfffffffe) {
            lVar54 = 0x2c;
            do {
              FVar5 = *pFVar1;
              plVar57 = *pplVar2;
                    /* try { // try from 00912f60 to 00912fd3 has its CatchHandler @ 00915760 */
              uVar18 = __strlen_chk(&DAT_004e7154,2);
              if (FVar5 == (FileOutputStream)0x0) {
                (**(code **)(*plVar57 + 0x30))(plVar57,&DAT_004e7154);
                uVar43 = extraout_x1_x00135;
              }
              else {
                File::writeDosEOLExpand((File *)plVar57,&DAT_004e7154,uVar18);
                uVar43 = extraout_x1_x00134;
              }
              uVar15 = FUN_0091faa0(&local_380,uVar43,&DAT_004cf2ba,
                                    *(undefined4 *)((long)plVar60 + lVar54 * 4));
              (**(code **)(**pplVar2 + 0x30))(*pplVar2,&local_380,uVar15);
              uVar47 = lVar54 - 0x2a;
              lVar54 = lVar54 + 1;
            } while (uVar47 < *(int *)(plVar60 + 0x15) - 1);
          }
        }
        FVar5 = *pFVar1;
        plVar60 = *pplVar2;
                    /* try { // try from 00913000 to 00913043 has its CatchHandler @ 00915744 */
        uVar18 = __strlen_chk(&DAT_004ddf6f,4);
        if (FVar5 == (FileOutputStream)0x0) {
          (**(code **)(*plVar60 + 0x30))(plVar60,&DAT_004ddf6f);
        }
        else {
          File::writeDosEOLExpand((File *)plVar60,&DAT_004ddf6f,uVar18);
        }
        uVar18 = uVar14;
        if (pplVar70[2] != pplVar70[1]) {
          uVar47 = 0;
          do {
            pbVar35 = (byte *)FoliageSystemDesc::getLayer
                                        ((FoliageSystemDesc *)this_00,uVar22,(uint)uVar47,true);
            bVar7 = pbVar35[0x18];
            uVar32 = (ulong)(bVar7 >> 1);
            if ((bVar7 & 1) != 0) {
              uVar32 = *(ulong *)(pbVar35 + 0x20);
            }
            uVar23 = uVar20;
            if (uVar32 != 0) {
              for (; uVar23 != 0; uVar23 = uVar23 - uVar24) {
                uVar24 = uVar23;
                if (0x59 < uVar23) {
                  uVar24 = uVar25;
                }
                puVar42 = &UNK_00501a54 + -(ulong)(uVar24 << 1);
                FVar5 = *pFVar1;
                plVar60 = *pplVar2;
                uVar26 = __strlen_chk(puVar42,0xffffffffffffffff);
                if (FVar5 == (FileOutputStream)0x0) {
                    /* try { // try from 009130e8 to 00913147 has its CatchHandler @ 009157b8 */
                  (**(code **)(*plVar60 + 0x30))(plVar60,puVar42);
                }
                else {
                  File::writeDosEOLExpand((File *)plVar60,puVar42,uVar26);
                }
              }
              FVar5 = *pFVar1;
              plVar60 = *pplVar2;
                    /* try { // try from 0091315c to 009132c3 has its CatchHandler @ 009157a4 */
              uVar23 = __strlen_chk("<FoliageType name=\"",0x14);
              if (FVar5 == (FileOutputStream)0x0) {
                (**(code **)(*plVar60 + 0x30))(plVar60,"<FoliageType name=\"");
              }
              else {
                File::writeDosEOLExpand((File *)plVar60,"<FoliageType name=\"",uVar23);
              }
              pbVar62 = *(byte **)(pbVar35 + 0x10);
              bVar12 = (*pbVar35 & 1) == 0;
              if (bVar12) {
                pbVar62 = pbVar35 + 1;
              }
              uVar23 = (uint)(*pbVar35 >> 1);
              if (!bVar12) {
                uVar23 = *(uint *)(pbVar35 + 8);
              }
              if (*pFVar1 == (FileOutputStream)0x0) {
                (**(code **)(**pplVar2 + 0x30))();
              }
              else {
                File::writeDosEOLExpand((File *)*pplVar2,pbVar62,uVar23);
              }
              FVar5 = *pFVar1;
              plVar60 = *pplVar2;
              uVar23 = __strlen_chk("\" foliageXmlId=\"",0x11);
              if (FVar5 == (FileOutputStream)0x0) {
                (**(code **)(*plVar60 + 0x30))(plVar60,"\" foliageXmlId=\"");
              }
              else {
                File::writeDosEOLExpand((File *)plVar60,"\" foliageXmlId=\"",uVar23);
              }
              std::__ndk1::
              __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>>>
              ::
              find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                        ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>>>
                          *)param_9,(basic_string *)(pbVar35 + 0x18));
              uVar15 = FUN_0091faa0(&local_380);
              (**(code **)(**pplVar2 + 0x30))(*pplVar2,&local_380,uVar15);
              FVar5 = *pFVar1;
              plVar60 = *pplVar2;
              uVar23 = __strlen_chk(&DAT_004ddf8b,5);
              if (FVar5 == (FileOutputStream)0x0) {
                    /* try { // try from 00913060 to 009130af has its CatchHandler @ 009157a4 */
                (**(code **)(*plVar60 + 0x30))(plVar60,&DAT_004ddf8b);
              }
              else {
                File::writeDosEOLExpand((File *)plVar60,&DAT_004ddf8b,uVar23);
              }
            }
            uVar47 = (ulong)((uint)uVar47 + 1);
            uVar32 = ((long)pplVar70[2] - (long)pplVar70[1] >> 4) * 0x6db6db6db6db6db7;
          } while (uVar47 <= uVar32 && uVar32 - uVar47 != 0);
        }
        for (; uVar18 != 0; uVar18 = uVar18 - uVar23) {
          uVar23 = uVar18;
          if (0x59 < uVar18) {
            uVar23 = uVar25;
          }
          puVar42 = &UNK_00501a54 + -(ulong)(uVar23 << 1);
          FVar5 = *pFVar1;
          plVar60 = *pplVar2;
          uVar24 = __strlen_chk(puVar42,0xffffffffffffffff);
          if (FVar5 == (FileOutputStream)0x0) {
                    /* try { // try from 009132e0 to 0091333f has its CatchHandler @ 00915764 */
            (**(code **)(*plVar60 + 0x30))(plVar60,puVar42);
          }
          else {
            File::writeDosEOLExpand((File *)plVar60,puVar42,uVar24);
          }
        }
        FVar5 = *pFVar1;
        plVar60 = *pplVar2;
                    /* try { // try from 00913354 to 0091339b has its CatchHandler @ 00915744 */
        uVar18 = __strlen_chk("</FoliageMultiLayer>\n",0x16);
        if (FVar5 == (FileOutputStream)0x0) {
          (**(code **)(*plVar60 + 0x30))(plVar60,"</FoliageMultiLayer>\n");
        }
        else {
          File::writeDosEOLExpand((File *)plVar60,"</FoliageMultiLayer>\n",uVar18);
        }
        if (((ulong)local_488 & 1) != 0) {
          operator_delete(local_478);
        }
        uVar47 = (ulong)(uVar22 + 1);
        uVar32 = (*(long *)(this_00 + 6) - *(long *)(this_00 + 4) >> 3) * -0x3333333333333333;
      } while (uVar47 <= uVar32 && uVar32 - uVar47 != 0);
    }
    for (; uVar19 != 0; uVar19 = uVar19 - uVar20) {
      uVar20 = uVar19;
      if (0x59 < uVar19) {
        uVar20 = 0x5a;
      }
      puVar42 = &UNK_00501a54 + -(ulong)(uVar20 << 1);
      FVar5 = *pFVar1;
      plVar60 = *pplVar2;
      uVar22 = __strlen_chk(puVar42,0xffffffffffffffff);
      if (FVar5 == (FileOutputStream)0x0) {
                    /* try { // try from 009133cc to 0091342b has its CatchHandler @ 00915640 */
        (**(code **)(*plVar60 + 0x30))(plVar60,puVar42);
      }
      else {
        File::writeDosEOLExpand((File *)plVar60,puVar42,uVar22);
      }
    }
    FVar5 = *pFVar1;
    plVar60 = *pplVar2;
                    /* try { // try from 00913440 to 00913483 has its CatchHandler @ 00915510 */
    uVar19 = __strlen_chk("</FoliageSystem>\n",0x12);
    uVar20 = uVar16;
    if (FVar5 == (FileOutputStream)0x0) {
      (**(code **)(*plVar60 + 0x30))(plVar60,"</FoliageSystem>\n");
    }
    else {
      File::writeDosEOLExpand((File *)plVar60,"</FoliageSystem>\n",uVar19);
    }
    for (; uVar20 != 0; uVar20 = uVar20 - uVar19) {
      uVar19 = uVar20;
      if (0x59 < uVar20) {
        uVar19 = 0x5a;
      }
      puVar42 = &UNK_00501a54 + -(ulong)(uVar19 << 1);
      FVar5 = *pFVar1;
      plVar60 = *pplVar2;
      uVar22 = __strlen_chk(puVar42,0xffffffffffffffff);
      if (FVar5 == (FileOutputStream)0x0) {
                    /* try { // try from 009134a0 to 009134ff has its CatchHandler @ 0091563c */
        (**(code **)(*plVar60 + 0x30))(plVar60,puVar42);
      }
      else {
        File::writeDosEOLExpand((File *)plVar60,puVar42,uVar22);
      }
    }
    FVar5 = *pFVar1;
    plVar60 = *pplVar2;
                    /* try { // try from 00913514 to 00913557 has its CatchHandler @ 00915510 */
    uVar20 = __strlen_chk("</Layers>\n",0xb);
    if (FVar5 == (FileOutputStream)0x0) {
      (**(code **)(*plVar60 + 0x30))(plVar60,"</Layers>\n");
    }
    else {
      File::writeDosEOLExpand((File *)plVar60,"</Layers>\n",uVar20);
    }
                    /* try { // try from 00913558 to 0091355b has its CatchHandler @ 00915374 */
    lVar54 = ProceduralPlacementManager::getInstance();
                    /* try { // try from 00913560 to 00913563 has its CatchHandler @ 00915370 */
    lVar33 = ProceduralPlacementManager::getBlockMask();
    uStack_289 = 0;
    uStack_290 = 0;
    uStack_2a8 = 0;
    local_2b0 = 0;
    uStack_298 = 0;
    local_291 = 0;
    uStack_2a0 = 0;
    uStack_2c8 = 0;
    local_2d0 = 0;
    uStack_2b8 = 0;
    uStack_2c0 = 0;
    uStack_2e8 = 0;
    local_2f0 = 0;
    uStack_2d8 = 0;
    uStack_2e0 = 0;
    uStack_308 = 0;
    local_310 = 0;
    uStack_2f8 = 0;
    uStack_300 = 0;
    uStack_328 = 0;
    local_330 = 0;
    uStack_318 = 0;
    uStack_320 = 0;
    uStack_348 = 0;
    local_350 = 0;
    uStack_338 = 0;
    uStack_340 = 0;
    uStack_368 = 0;
    local_370 = (char *)0x0;
    local_358 = 0;
    local_360 = 0;
    uStack_378 = 0;
    local_380 = (FileOutputStream *)0x0;
                    /* try { // try from 009135a0 to 009135a3 has its CatchHandler @ 0091530c */
    if ((lVar33 != 0) &&
       (lVar33 = ProceduralPlacementManager::getInstance(), *(char *)(lVar33 + 0x162) != '\0')) {
                    /* try { // try from 009135b0 to 009135b7 has its CatchHandler @ 00915308 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string((basic_string *)&local_488);
                    /* try { // try from 009135b8 to 009135c3 has its CatchHandler @ 00915304 */
      _Var21 = std::__ndk1::
               __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>>>
               ::
               find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                         ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>>>
                           *)param_9,(basic_string *)&local_488);
      if (((ulong)local_488 & 1) != 0) {
        operator_delete(local_478);
      }
      uVar20 = uVar16;
      if (pmVar48 != (map *)(ulong)_Var21) {
                    /* try { // try from 009135e8 to 009135ff has its CatchHandler @ 009153e4 */
        FUN_009159dc(&local_380,0xff,0xff,"blockMaskFileId=\"%d\"",
                     *(undefined4 *)((map *)(ulong)_Var21 + 0x38));
      }
      for (; uVar20 != 0; uVar20 = uVar20 - uVar19) {
        uVar19 = uVar20;
        if (0x59 < uVar20) {
          uVar19 = 0x5a;
        }
        puVar42 = &UNK_00501a54 + -(ulong)(uVar19 << 1);
        FVar5 = *pFVar1;
        plVar60 = *pplVar2;
        uVar22 = __strlen_chk(puVar42,0xffffffffffffffff);
        if (FVar5 == (FileOutputStream)0x0) {
                    /* try { // try from 0091361c to 0091367b has its CatchHandler @ 00915504 */
          (**(code **)(*plVar60 + 0x30))(plVar60,puVar42);
        }
        else {
          File::writeDosEOLExpand((File *)plVar60,puVar42,uVar22);
        }
      }
      FVar5 = *pFVar1;
      plVar60 = *pplVar2;
                    /* try { // try from 00913690 to 009136b7 has its CatchHandler @ 009153e4 */
      uVar20 = __strlen_chk("<ProceduralPlacementMasks ",0x1b);
      if (FVar5 == (FileOutputStream)0x0) {
                    /* try { // try from 00914200 to 009142ab has its CatchHandler @ 009153e4 */
        (**(code **)(*plVar60 + 0x30))(plVar60,"<ProceduralPlacementMasks ");
      }
      else {
        File::writeDosEOLExpand((File *)plVar60,"<ProceduralPlacementMasks ",uVar20);
      }
      FVar5 = *pFVar1;
      plVar60 = *pplVar2;
      uVar20 = __strlen_chk(&local_380,0xff);
      if (FVar5 == (FileOutputStream)0x0) {
        (**(code **)(*plVar60 + 0x30))(plVar60,&local_380);
      }
      else {
        File::writeDosEOLExpand((File *)plVar60,&local_380,uVar20);
      }
      FVar5 = *pFVar1;
      plVar60 = *pplVar2;
      uVar20 = __strlen_chk(&DAT_004db81c,3);
      if (FVar5 == (FileOutputStream)0x0) {
        (**(code **)(*plVar60 + 0x30))(plVar60,&DAT_004db81c);
      }
      else {
        File::writeDosEOLExpand((File *)plVar60,&DAT_004db81c,uVar20);
      }
      if ((int)((ulong)(*(long *)(lVar54 + 0x58) - *(long *)(lVar54 + 0x50)) >> 3) != 0) {
        uVar47 = 0;
        do {
                    /* try { // try from 00914304 to 0091430b has its CatchHandler @ 009154bc */
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string((basic_string *)&local_488);
                    /* try { // try from 0091430c to 00914317 has its CatchHandler @ 009154c0 */
          _Var21 = std::__ndk1::
                   __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>>>
                   ::
                   find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                             ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>>>
                               *)param_9,(basic_string *)&local_488);
          if (((ulong)local_488 & 1) != 0) {
            operator_delete(local_478);
          }
          if (pmVar48 != (map *)(ulong)_Var21) {
                    /* try { // try from 0091433c to 00914343 has its CatchHandler @ 00915458 */
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            basic_string((basic_string *)&local_488);
            pcVar29 = *(char **)(param_1 + 8);
            ppuVar41 = (undefined **)strlen(pcVar29);
            ppuVar39 = (undefined **)((ulong)local_488 >> 1 & 0x7f);
            if (((ulong)local_488 & 1) != 0) {
              ppuVar39 = local_480;
            }
            if (ppuVar41 == ppuVar39) {
                    /* try { // try from 00914374 to 00914387 has its CatchHandler @ 009153bc */
              iVar13 = std::__ndk1::
                       basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                       ::compare((ulong)&local_488,0,(char *)0xffffffffffffffff,(ulong)pcVar29);
              bVar12 = iVar13 == 0;
            }
            else {
              bVar12 = false;
            }
            if (((ulong)local_488 & 1) != 0) {
              operator_delete(local_478);
            }
            uVar20 = uVar17;
            if (bVar12) {
              for (; uVar20 != 0; uVar20 = uVar20 - uVar19) {
                uVar19 = uVar20;
                if (0x59 < uVar20) {
                  uVar19 = 0x5a;
                }
                puVar42 = &UNK_00501a54 + -(ulong)(uVar19 << 1);
                FVar5 = *pFVar1;
                plVar60 = *pplVar2;
                uVar22 = __strlen_chk(puVar42,0xffffffffffffffff);
                if (FVar5 == (FileOutputStream)0x0) {
                    /* try { // try from 009143d0 to 0091442f has its CatchHandler @ 00915710 */
                  (**(code **)(*plVar60 + 0x30))(plVar60,puVar42);
                }
                else {
                  File::writeDosEOLExpand((File *)plVar60,puVar42,uVar22);
                }
              }
              FVar5 = *pFVar1;
              plVar60 = *pplVar2;
                    /* try { // try from 00914444 to 00914487 has its CatchHandler @ 00915454 */
              uVar20 = __strlen_chk("<Mask name=\"",0xd);
              if (FVar5 == (FileOutputStream)0x0) {
                (**(code **)(*plVar60 + 0x30))(plVar60,"<Mask name=\"");
              }
              else {
                File::writeDosEOLExpand((File *)plVar60,"<Mask name=\"",uVar20);
              }
                    /* try { // try from 0091448c to 00914493 has its CatchHandler @ 009153c0 */
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
              basic_string((basic_string *)&local_4a0);
              pcVar29 = (char *)((ulong)&local_4a0 | 1);
              uVar20 = (uint)((byte)local_4a0 >> 1);
              if (((ulong)local_4a0 & 1) != 0) {
                pcVar29 = local_490;
                uVar20 = (uint)local_498;
              }
              if (*pFVar1 == (FileOutputStream)0x0) {
                (**(code **)(**pplVar2 + 0x30))();
              }
              else {
                    /* try { // try from 009144cc to 009145a7 has its CatchHandler @ 0091550c */
                File::writeDosEOLExpand((File *)*pplVar2,pcVar29,uVar20);
              }
              FVar5 = *pFVar1;
              plVar60 = *pplVar2;
              uVar20 = __strlen_chk("\" fileId=\"",0xb);
              if (FVar5 == (FileOutputStream)0x0) {
                (**(code **)(*plVar60 + 0x30))(plVar60,"\" fileId=\"");
                uVar43 = extraout_x1_x00164;
              }
              else {
                File::writeDosEOLExpand((File *)plVar60,"\" fileId=\"",uVar20);
                uVar43 = extraout_x1_x00163;
              }
              uVar15 = FUN_0091faa0(&local_488,uVar43,&DAT_004cf2ba,
                                    *(undefined4 *)((map *)(ulong)_Var21 + 0x38));
              (**(code **)(**pplVar2 + 0x30))(*pplVar2,&local_488,uVar15);
              FVar5 = *pFVar1;
              plVar60 = *pplVar2;
              uVar20 = __strlen_chk("\" />\n",6);
              if (FVar5 == (FileOutputStream)0x0) {
                (**(code **)(*plVar60 + 0x30))(plVar60,"\" />\n");
              }
              else {
                File::writeDosEOLExpand((File *)plVar60,"\" />\n",uVar20);
              }
              if (((ulong)local_4a0 & 1) != 0) {
                operator_delete(local_490);
              }
            }
          }
          uVar47 = uVar47 + 1;
        } while (uVar47 < ((ulong)(*(long *)(lVar54 + 0x58) - *(long *)(lVar54 + 0x50)) >> 3 &
                          0xffffffff));
      }
      lVar33 = *(long *)(lVar54 + 0x68);
      if ((int)((ulong)(*(long *)(lVar54 + 0x70) - lVar33) >> 3) != 0) {
        uVar47 = 0;
        do {
          lVar33 = *(long *)(lVar33 + uVar47 * 8);
                    /* try { // try from 00914628 to 0091462f has its CatchHandler @ 009154b4 */
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string((basic_string *)&local_488);
                    /* try { // try from 00914630 to 0091463b has its CatchHandler @ 009154b8 */
          _Var21 = std::__ndk1::
                   __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>>>
                   ::
                   find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                             ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>>>
                               *)param_9,(basic_string *)&local_488);
          if (((ulong)local_488 & 1) != 0) {
            operator_delete(local_478);
          }
          if (pmVar48 != (map *)(ulong)_Var21) {
                    /* try { // try from 00914660 to 00914667 has its CatchHandler @ 00915450 */
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            basic_string((basic_string *)&local_488);
            pcVar29 = *(char **)(param_1 + 8);
            ppuVar41 = (undefined **)strlen(pcVar29);
            ppuVar39 = (undefined **)((ulong)local_488 >> 1 & 0x7f);
            if (((ulong)local_488 & 1) != 0) {
              ppuVar39 = local_480;
            }
            if (ppuVar41 == ppuVar39) {
                    /* try { // try from 00914698 to 009146ab has its CatchHandler @ 009153b4 */
              iVar13 = std::__ndk1::
                       basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                       ::compare((ulong)&local_488,0,(char *)0xffffffffffffffff,(ulong)pcVar29);
              bVar12 = iVar13 == 0;
            }
            else {
              bVar12 = false;
            }
            if (((ulong)local_488 & 1) != 0) {
              operator_delete(local_478);
            }
            if (bVar12) {
              uVar19 = 0x5a;
              for (uVar20 = uVar17; uVar20 != 0; uVar20 = uVar20 - uVar22) {
                uVar22 = uVar20;
                if (0x59 < uVar20) {
                  uVar22 = uVar19;
                }
                puVar42 = &UNK_00501a54 + -(ulong)(uVar22 << 1);
                FVar5 = *pFVar1;
                plVar60 = *pplVar2;
                uVar18 = __strlen_chk(puVar42,0xffffffffffffffff);
                if (FVar5 == (FileOutputStream)0x0) {
                    /* try { // try from 009146f0 to 0091474f has its CatchHandler @ 00915704 */
                  (**(code **)(*plVar60 + 0x30))(plVar60,puVar42);
                }
                else {
                  File::writeDosEOLExpand((File *)plVar60,puVar42,uVar18);
                }
              }
              FVar5 = *pFVar1;
              plVar60 = *pplVar2;
                    /* try { // try from 00914764 to 009147ab has its CatchHandler @ 009154cc */
              uVar20 = __strlen_chk("<IndexMask name=\"",0x12);
              if (FVar5 == (FileOutputStream)0x0) {
                (**(code **)(*plVar60 + 0x30))(plVar60,"<IndexMask name=\"");
              }
              else {
                File::writeDosEOLExpand((File *)plVar60,"<IndexMask name=\"",uVar20);
              }
                    /* try { // try from 009147b0 to 009147b7 has its CatchHandler @ 009153b8 */
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
              basic_string((basic_string *)&local_4a0);
              pcVar29 = (char *)((ulong)&local_4a0 | 1);
              uVar20 = (uint)((byte)local_4a0 >> 1);
              if (((ulong)local_4a0 & 1) != 0) {
                pcVar29 = local_490;
                uVar20 = (uint)local_498;
              }
              if (*pFVar1 == (FileOutputStream)0x0) {
                (**(code **)(**pplVar2 + 0x30))();
              }
              else {
                    /* try { // try from 009147e8 to 0091496f has its CatchHandler @ 009155a8 */
                File::writeDosEOLExpand((File *)*pplVar2,pcVar29,uVar20);
              }
              FVar5 = *pFVar1;
              plVar60 = *pplVar2;
              uVar20 = __strlen_chk("\" fileId=\"",0xb);
              if (FVar5 == (FileOutputStream)0x0) {
                (**(code **)(*plVar60 + 0x30))(plVar60,"\" fileId=\"");
                uVar43 = extraout_x1_x00166;
              }
              else {
                File::writeDosEOLExpand((File *)plVar60,"\" fileId=\"",uVar20);
                uVar43 = extraout_x1_x00165;
              }
              uVar15 = FUN_0091faa0(&local_488,uVar43,&DAT_004cf2ba,
                                    *(undefined4 *)((map *)(ulong)_Var21 + 0x38));
              (**(code **)(**pplVar2 + 0x30))(*pplVar2,&local_488,uVar15);
              FVar5 = *pFVar1;
              plVar60 = *pplVar2;
              uVar20 = __strlen_chk("\" maxIndex=\"",0xd);
              if (FVar5 == (FileOutputStream)0x0) {
                (**(code **)(*plVar60 + 0x30))(plVar60,"\" maxIndex=\"");
                uVar43 = extraout_x1_x00168;
              }
              else {
                File::writeDosEOLExpand((File *)plVar60,"\" maxIndex=\"",uVar20);
                uVar43 = extraout_x1_x00167;
              }
              uVar15 = FUN_0091faa0(&local_488,uVar43,&DAT_004cf2ba,
                                    (int)((ulong)(*(long *)(lVar33 + 0xd8) -
                                                 *(long *)(lVar33 + 0xd0)) >> 3) * -0x55555555 + -1)
              ;
              (**(code **)(**pplVar2 + 0x30))(*pplVar2,&local_488,uVar15);
              FVar5 = *pFVar1;
              plVar60 = *pplVar2;
              uVar20 = __strlen_chk(&DAT_004e3071,5);
              if (FVar5 == (FileOutputStream)0x0) {
                (**(code **)(*plVar60 + 0x30))(plVar60,&DAT_004e3071);
              }
              else {
                File::writeDosEOLExpand((File *)plVar60,&DAT_004e3071,uVar20);
              }
              if (((ulong)local_4a0 & 1) != 0) {
                operator_delete(local_490);
              }
              uVar20 = uVar17;
              if (((int)((ulong)(*(long *)(lVar33 + 0xd8) - *(long *)(lVar33 + 0xd0)) >> 3) *
                   -0x55555555 & 0xfffffffeU) != 0) {
                uVar22 = 1;
                uVar18 = uVar14;
                do {
                  for (; uVar18 != 0; uVar18 = uVar18 - uVar25) {
                    uVar25 = uVar18;
                    if (0x59 < uVar18) {
                      uVar25 = uVar19;
                    }
                    puVar42 = &UNK_00501a54 + -(ulong)(uVar25 << 1);
                    FVar5 = *pFVar1;
                    plVar60 = *pplVar2;
                    uVar23 = __strlen_chk(puVar42,0xffffffffffffffff);
                    if (FVar5 == (FileOutputStream)0x0) {
                    /* try { // try from 009149e4 to 00914a43 has its CatchHandler @ 00915798 */
                      (**(code **)(*plVar60 + 0x30))(plVar60,puVar42);
                    }
                    else {
                      File::writeDosEOLExpand((File *)plVar60,puVar42,uVar23);
                    }
                  }
                  FVar5 = *pFVar1;
                  plVar60 = *pplVar2;
                    /* try { // try from 00914a58 to 00914b1f has its CatchHandler @ 0091573c */
                  uVar18 = __strlen_chk("<Option index=\"",0x10);
                  if (FVar5 == (FileOutputStream)0x0) {
                    (**(code **)(*plVar60 + 0x30))(plVar60,"<Option index=\"");
                    uVar43 = extraout_x1_x00170;
                  }
                  else {
                    File::writeDosEOLExpand((File *)plVar60,"<Option index=\"",uVar18);
                    uVar43 = extraout_x1_x00169;
                  }
                  uVar15 = FUN_0091faa0(&local_488,uVar43,&DAT_004cf2ba,uVar22);
                  (**(code **)(**pplVar2 + 0x30))(*pplVar2,&local_488,uVar15);
                  FVar5 = *pFVar1;
                  plVar60 = *pplVar2;
                  uVar18 = __strlen_chk("\" name=\"",9);
                  if (FVar5 == (FileOutputStream)0x0) {
                    (**(code **)(*plVar60 + 0x30))(plVar60,"\" name=\"");
                  }
                  else {
                    File::writeDosEOLExpand((File *)plVar60,"\" name=\"",uVar18);
                  }
                    /* try { // try from 00914b2c to 00914b33 has its CatchHandler @ 00915684 */
                  std::__ndk1::
                  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                  basic_string((basic_string *)&local_488);
                  pcVar29 = (char *)((ulong)&local_488 | 1);
                  uVar18 = (uint)((byte)local_488 >> 1);
                  if (((ulong)local_488 & 1) != 0) {
                    pcVar29 = local_478;
                    uVar18 = (uint)local_480._0_4_;
                  }
                  if (*pFVar1 == (FileOutputStream)0x0) {
                    (**(code **)(**pplVar2 + 0x30))();
                  }
                  else {
                    /* try { // try from 00914b64 to 00914bc7 has its CatchHandler @ 0091571c */
                    File::writeDosEOLExpand((File *)*pplVar2,pcVar29,uVar18);
                  }
                  FVar5 = *pFVar1;
                  plVar60 = *pplVar2;
                  uVar18 = __strlen_chk("\" />\n",6);
                  if (FVar5 == (FileOutputStream)0x0) {
                    (**(code **)(*plVar60 + 0x30))(plVar60,"\" />\n");
                  }
                  else {
                    File::writeDosEOLExpand((File *)plVar60,"\" />\n",uVar18);
                  }
                  if (((ulong)local_488 & 1) != 0) {
                    operator_delete(local_478);
                  }
                  uVar22 = uVar22 + 1;
                  uVar18 = uVar14;
                } while (uVar22 < (uint)((int)((ulong)(*(long *)(lVar33 + 0xd8) -
                                                      *(long *)(lVar33 + 0xd0)) >> 3) * -0x55555555)
                        );
              }
              for (; uVar20 != 0; uVar20 = uVar20 - uVar22) {
                uVar22 = uVar20;
                if (0x59 < uVar20) {
                  uVar22 = uVar19;
                }
                puVar42 = &UNK_00501a54 + -(ulong)(uVar22 << 1);
                FVar5 = *pFVar1;
                plVar60 = *pplVar2;
                uVar18 = __strlen_chk(puVar42,0xffffffffffffffff);
                if (FVar5 == (FileOutputStream)0x0) {
                    /* try { // try from 00914bf4 to 00914c53 has its CatchHandler @ 00915700 */
                  (**(code **)(*plVar60 + 0x30))(plVar60,puVar42);
                }
                else {
                  File::writeDosEOLExpand((File *)plVar60,puVar42,uVar18);
                }
              }
              FVar5 = *pFVar1;
              plVar60 = *pplVar2;
                    /* try { // try from 00914c68 to 00914c8f has its CatchHandler @ 009154cc */
              uVar20 = __strlen_chk("</IndexMask>\n",0xe);
              if (FVar5 == (FileOutputStream)0x0) {
                    /* try { // try from 009145f4 to 00914603 has its CatchHandler @ 009154cc */
                (**(code **)(*plVar60 + 0x30))(plVar60,"</IndexMask>\n");
              }
              else {
                File::writeDosEOLExpand((File *)plVar60,"</IndexMask>\n",uVar20);
              }
            }
          }
          uVar47 = uVar47 + 1;
          lVar33 = *(long *)(lVar54 + 0x68);
        } while (uVar47 < ((ulong)(*(long *)(lVar54 + 0x70) - lVar33) >> 3 & 0xffffffff));
      }
      for (; uVar16 != 0; uVar16 = uVar16 - uVar14) {
        uVar14 = uVar16;
        if (0x59 < uVar16) {
          uVar14 = 0x5a;
        }
        puVar42 = &UNK_00501a54 + -(ulong)(uVar14 << 1);
        FVar5 = *pFVar1;
        plVar60 = *pplVar2;
        uVar17 = __strlen_chk(puVar42,0xffffffffffffffff);
        if (FVar5 == (FileOutputStream)0x0) {
                    /* try { // try from 00914cac to 00914d13 has its CatchHandler @ 00915500 */
          (**(code **)(*plVar60 + 0x30))(plVar60,puVar42);
        }
        else {
          File::writeDosEOLExpand((File *)plVar60,puVar42,uVar17);
        }
      }
      FVar5 = *pFVar1;
      plVar60 = *pplVar2;
                    /* try { // try from 00914d28 to 00914d6f has its CatchHandler @ 009153e4 */
      uVar16 = __strlen_chk("</ProceduralPlacementMasks>\n",0x1d);
      if (FVar5 == (FileOutputStream)0x0) {
        (**(code **)(*plVar60 + 0x30))(plVar60,"</ProceduralPlacementMasks>\n");
      }
      else {
        File::writeDosEOLExpand((File *)plVar60,"</ProceduralPlacementMasks>\n",uVar16);
      }
    }
    if ((local_a0 & 1) != 0) {
      operator_delete(local_90);
    }
    bVar12 = true;
  }
  else {
    if (*(uint *)(param_1 + 0x16c) < 3) {
      pcVar29 = &DAT_00519a38 + *(int *)(&DAT_00519a38 + (long)(int)*(uint *)(param_1 + 0x16c) * 4);
    }
    else {
      pcVar29 = "ambient";
    }
    plVar60 = *pplVar2;
    if (*pFVar1 == (FileOutputStream)0x0) {
      (**(code **)(*plVar60 + 0x30))(plVar60," type=\"",7);
    }
    else {
      File::writeDosEOLExpand((File *)plVar60," type=\"",7);
    }
    FVar5 = *pFVar1;
    plVar60 = *pplVar2;
    sVar27 = strlen(pcVar29);
    if (FVar5 == (FileOutputStream)0x0) {
      (**(code **)(*plVar60 + 0x30))(plVar60,pcVar29);
    }
    else {
      File::writeDosEOLExpand((File *)plVar60,pcVar29,(uint)sVar27);
    }
    plVar60 = *pplVar2;
    if (*pFVar1 == (FileOutputStream)0x0) {
      (**(code **)(*plVar60 + 0x30))(plVar60,"\" color=\"",9);
      uVar43 = extraout_x1_02;
    }
    else {
      File::writeDosEOLExpand((File *)plVar60,"\" color=\"",9);
      uVar43 = extraout_x1_01;
    }
    uVar15 = FUN_0091faa0((double)*(float *)(param_1 + 0x170),&local_380,uVar43,&DAT_0050d9a5);
    (**(code **)(**pplVar2 + 0x30))(*pplVar2,&local_380,uVar15);
    plVar60 = *pplVar2;
    if (*pFVar1 == (FileOutputStream)0x0) {
      (**(code **)(*plVar60 + 0x30))(plVar60,&DAT_004d3339,1);
      uVar43 = extraout_x1_04;
    }
    else {
      File::writeDosEOLExpand((File *)plVar60,&DAT_004d3339,1);
      uVar43 = extraout_x1_03;
    }
    uVar15 = FUN_0091faa0((double)*(float *)(param_1 + 0x174),&local_380,uVar43,&DAT_0050d9a5);
    (**(code **)(**pplVar2 + 0x30))(*pplVar2,&local_380,uVar15);
    plVar60 = *pplVar2;
    if (*pFVar1 == (FileOutputStream)0x0) {
      (**(code **)(*plVar60 + 0x30))(plVar60,&DAT_004d3339,1);
      uVar43 = extraout_x1_06;
    }
    else {
      File::writeDosEOLExpand((File *)plVar60,&DAT_004d3339,1);
      uVar43 = extraout_x1_05;
    }
    uVar15 = FUN_0091faa0((double)*(float *)(param_1 + 0x178),&local_380,uVar43,&DAT_0050d9a5);
    (**(code **)(**pplVar2 + 0x30))(*pplVar2,&local_380,uVar15);
    plVar60 = *pplVar2;
    if (*pFVar1 == (FileOutputStream)0x0) {
      (**(code **)(*plVar60 + 0x30))(plVar60,"\" emitDiffuse=\"",0xf);
    }
    else {
      File::writeDosEOLExpand((File *)plVar60,"\" emitDiffuse=\"",0xf);
    }
    uVar47 = LightSource::getLightFlags();
    FVar5 = *pFVar1;
    pcVar29 = "false";
    if ((uVar47 & 2) != 0) {
      pcVar29 = "true";
    }
    plVar60 = *pplVar2;
    uVar16 = __strlen_chk(pcVar29,6);
    if (FVar5 == (FileOutputStream)0x0) {
      (**(code **)(*plVar60 + 0x30))(plVar60,pcVar29);
    }
    else {
      File::writeDosEOLExpand((File *)plVar60,pcVar29,uVar16);
    }
    plVar60 = *pplVar2;
    if (*pFVar1 == (FileOutputStream)0x0) {
      (**(code **)(*plVar60 + 0x30))(plVar60,"\" emitSpecular=\"",0x10);
    }
    else {
      File::writeDosEOLExpand((File *)plVar60,"\" emitSpecular=\"",0x10);
    }
    uVar47 = LightSource::getLightFlags();
    pcVar29 = "false";
    if ((uVar47 & 4) != 0) {
      pcVar29 = "true";
    }
    FVar5 = *pFVar1;
    plVar60 = *pplVar2;
    uVar16 = __strlen_chk(pcVar29,6);
    if (FVar5 == (FileOutputStream)0x0) {
      (**(code **)(*plVar60 + 0x30))(plVar60,pcVar29);
    }
    else {
      File::writeDosEOLExpand((File *)plVar60,pcVar29,uVar16);
    }
    uVar16 = LightSource::getLightFlags();
    if ((uVar16 >> 5 & 1) != 0) {
      plVar60 = *pplVar2;
      if (*pFVar1 == (FileOutputStream)0x0) {
        (**(code **)(*plVar60 + 0x30))(plVar60,"\" castShadowMap=\"true",0x15);
      }
      else {
        File::writeDosEOLExpand((File *)plVar60,"\" castShadowMap=\"true",0x15);
      }
      plVar60 = *pplVar2;
      if (*pFVar1 == (FileOutputStream)0x0) {
        (**(code **)(*plVar60 + 0x30))(plVar60,"\" depthMapBias=\"",0x10);
      }
      else {
        File::writeDosEOLExpand((File *)plVar60,"\" depthMapBias=\"",0x10);
      }
      fVar71 = (float)LightSource::getDepthMapBias();
      uVar15 = FUN_0091faa0((double)fVar71,&local_380,extraout_x1_07,&DAT_0050d9a5);
      (**(code **)(**pplVar2 + 0x30))(*pplVar2,&local_380,uVar15);
      plVar60 = *pplVar2;
      if (*pFVar1 == (FileOutputStream)0x0) {
        (**(code **)(*plVar60 + 0x30))(plVar60,"\" depthMapSlopeScaleBias=\"",0x1a);
      }
      else {
        File::writeDosEOLExpand((File *)plVar60,"\" depthMapSlopeScaleBias=\"",0x1a);
      }
      fVar71 = (float)LightSource::getDepthMapSlopeScaleBias();
      uVar15 = FUN_0091faa0((double)fVar71,&local_380,extraout_x1_08,&DAT_0050d9a5);
      (**(code **)(**pplVar2 + 0x30))(*pplVar2,&local_380,uVar15);
      plVar60 = *pplVar2;
      if (*pFVar1 == (FileOutputStream)0x0) {
        (**(code **)(*plVar60 + 0x30))(plVar60,"\" depthMapSlopeClamp=\"",0x16);
      }
      else {
        File::writeDosEOLExpand((File *)plVar60,"\" depthMapSlopeClamp=\"",0x16);
      }
      fVar71 = (float)LightSource::getDepthMapSlopeClamp();
      uVar15 = FUN_0091faa0((double)fVar71,&local_380,extraout_x1_09,&DAT_0050d9a5);
      (**(code **)(**pplVar2 + 0x30))(*pplVar2,&local_380,uVar15);
      plVar60 = *pplVar2;
      if (*pFVar1 == (FileOutputStream)0x0) {
        (**(code **)(*plVar60 + 0x30))(plVar60,"\" depthMapResolution=\"",0x16);
      }
      else {
        File::writeDosEOLExpand((File *)plVar60,"\" depthMapResolution=\"",0x16);
      }
      auVar72 = LightSource::getDepthMapResolution();
      uVar15 = FUN_0091faa0(&local_380,auVar72._8_8_,&DAT_004cf2ba,auVar72._0_8_ & 0xffffffff);
      (**(code **)(**pplVar2 + 0x30))(*pplVar2,&local_380,uVar15);
      plVar60 = *pplVar2;
      if (*pFVar1 == (FileOutputStream)0x0) {
        (**(code **)(*plVar60 + 0x30))(plVar60,"\" shadowFarDistance=\"",0x15);
      }
      else {
        File::writeDosEOLExpand((File *)plVar60,"\" shadowFarDistance=\"",0x15);
      }
      fVar71 = (float)LightSource::getShadowFarDistance();
      uVar15 = FUN_0091faa0((double)fVar71,&local_380,extraout_x1_10,&DAT_0050d9a5);
      (**(code **)(**pplVar2 + 0x30))(*pplVar2,&local_380,uVar15);
      plVar60 = *pplVar2;
      if (*pFVar1 == (FileOutputStream)0x0) {
        (**(code **)(*plVar60 + 0x30))(plVar60,"\" shadowExtrusionDistance=\"",0x1b);
      }
      else {
        File::writeDosEOLExpand((File *)plVar60,"\" shadowExtrusionDistance=\"",0x1b);
      }
      fVar71 = (float)LightSource::getShadowExtrusionDistance();
      uVar15 = FUN_0091faa0((double)fVar71,&local_380,extraout_x1_11,&DAT_0050d9a5);
      (**(code **)(**pplVar2 + 0x30))(*pplVar2,&local_380,uVar15);
      plVar60 = *pplVar2;
      if (*pFVar1 == (FileOutputStream)0x0) {
        (**(code **)(*plVar60 + 0x30))(plVar60,"\" pcssLightSize=\"",0x11);
      }
      else {
        File::writeDosEOLExpand((File *)plVar60,"\" pcssLightSize=\"",0x11);
      }
      fVar71 = (float)LightSource::getSoftShadowsLightSize();
      uVar15 = FUN_0091faa0((double)fVar71,&local_380,extraout_x1_12,&DAT_0050d9a5);
      (**(code **)(**pplVar2 + 0x30))(*pplVar2,&local_380,uVar15);
      plVar60 = *pplVar2;
      if (*pFVar1 == (FileOutputStream)0x0) {
        (**(code **)(*plVar60 + 0x30))(plVar60,"\" pcssLightDistance=\"",0x15);
      }
      else {
        File::writeDosEOLExpand((File *)plVar60,"\" pcssLightDistance=\"",0x15);
      }
      fVar71 = (float)LightSource::getSoftShadowsLightDistance();
      uVar15 = FUN_0091faa0((double)fVar71,&local_380,extraout_x1_13,&DAT_0050d9a5);
      (**(code **)(**pplVar2 + 0x30))(*pplVar2,&local_380,uVar15);
      plVar60 = *pplVar2;
      if (*pFVar1 == (FileOutputStream)0x0) {
        (**(code **)(*plVar60 + 0x30))(plVar60,"\" pcssDepthBiasFactor=\"",0x17);
      }
      else {
        File::writeDosEOLExpand((File *)plVar60,"\" pcssDepthBiasFactor=\"",0x17);
      }
      fVar71 = (float)LightSource::getPCSSDepthBiasFactor();
      uVar15 = FUN_0091faa0((double)fVar71,&local_380,extraout_x1_14,&DAT_0050d9a5);
      (**(code **)(**pplVar2 + 0x30))(*pplVar2,&local_380,uVar15);
      plVar60 = *pplVar2;
      if (*pFVar1 == (FileOutputStream)0x0) {
        (**(code **)(*plVar60 + 0x30))(plVar60,"\" pcssMaxPenumbraSize=\"",0x17);
      }
      else {
        File::writeDosEOLExpand((File *)plVar60,"\" pcssMaxPenumbraSize=\"",0x17);
      }
      fVar71 = (float)LightSource::getPCSSMaxPenumbraSize();
      uVar15 = FUN_0091faa0((double)fVar71,&local_380,extraout_x1_15,&DAT_0050d9a5);
      (**(code **)(**pplVar2 + 0x30))(*pplVar2,&local_380,uVar15);
      uVar16 = LightSource::getLightFlags();
      plVar60 = *pplVar2;
      if ((uVar16 >> 6 & 1) == 0) {
        if (*pFVar1 == (FileOutputStream)0x0) {
          lVar54 = *plVar60;
          pcVar29 = "\" shadowPerspective=\"false";
          uVar43 = 0x1a;
LAB_0090cbb0:
          (**(code **)(lVar54 + 0x30))(plVar60,pcVar29,uVar43);
        }
        else {
          File::writeDosEOLExpand((File *)plVar60,"\" shadowPerspective=\"false",0x1a);
        }
      }
      else {
        if (*pFVar1 == (FileOutputStream)0x0) {
          lVar54 = *plVar60;
          pcVar29 = "\" shadowPerspective=\"true";
          uVar43 = 0x19;
          goto LAB_0090cbb0;
        }
        File::writeDosEOLExpand((File *)plVar60,"\" shadowPerspective=\"true",0x19);
      }
      if (1 < *(uint *)(param_1 + 0x1c4)) {
        plVar60 = *pplVar2;
        if (*pFVar1 == (FileOutputStream)0x0) {
          (**(code **)(*plVar60 + 0x30))(plVar60,"\" numShadowMapSplits=\"",0x16);
          uVar43 = extraout_x1_18;
        }
        else {
          File::writeDosEOLExpand((File *)plVar60,"\" numShadowMapSplits=\"",0x16);
          uVar43 = extraout_x1_17;
        }
        uVar15 = FUN_0091faa0(&local_380,uVar43,&DAT_004cf2ba,*(undefined4 *)(param_1 + 0x1c4));
        (**(code **)(**pplVar2 + 0x30))(*pplVar2,&local_380,uVar15);
        uVar47 = LightSource::getShadowMapAutoSplitDistances();
        if ((uVar47 & 1) == 0) {
          if (*(int *)(param_1 + 0x1c4) != 1) {
            uVar16 = 0;
            do {
              plVar60 = *pplVar2;
              if (*pFVar1 == (FileOutputStream)0x0) {
                (**(code **)(*plVar60 + 0x30))(plVar60,"\" shadowMapSplitDistance",0x18);
                uVar43 = extraout_x1_21;
              }
              else {
                File::writeDosEOLExpand((File *)plVar60,"\" shadowMapSplitDistance",0x18);
                uVar43 = extraout_x1_20;
              }
              uVar15 = FUN_0091faa0(&local_380,uVar43,&DAT_004cf2ba,uVar16);
              (**(code **)(**pplVar2 + 0x30))(*pplVar2,&local_380,uVar15);
              plVar60 = *pplVar2;
              if (*pFVar1 == (FileOutputStream)0x0) {
                (**(code **)(*plVar60 + 0x30))(plVar60,&DAT_004f4936,2);
              }
              else {
                File::writeDosEOLExpand((File *)plVar60,&DAT_004f4936,2);
              }
              fVar71 = (float)LightSource::getShadowMapSplitDistance((LightSource *)param_1,uVar16);
              uVar15 = FUN_0091faa0((double)fVar71,&local_380,extraout_x1_19,&DAT_0050d9a5);
              (**(code **)(**pplVar2 + 0x30))(*pplVar2,&local_380,uVar15);
              uVar16 = uVar16 + 1;
            } while (uVar16 < *(int *)(param_1 + 0x1c4) - 1U);
          }
        }
        else {
          plVar60 = *pplVar2;
          if (*pFVar1 == (FileOutputStream)0x0) {
            (**(code **)(*plVar60 + 0x30))(plVar60,"\" shadowMapSplitDistancesParameter=\"",0x24);
          }
          else {
            File::writeDosEOLExpand((File *)plVar60,"\" shadowMapSplitDistancesParameter=\"",0x24);
          }
          fVar71 = (float)LightSource::getShadowMapAutoSplitDistanceParameter();
          uVar15 = FUN_0091faa0((double)fVar71,&local_380,extraout_x1_x00138,&DAT_0050d9a5);
          (**(code **)(**pplVar2 + 0x30))(*pplVar2,&local_380,uVar15);
        }
        uVar47 = LightSource::isLastShadowMapSplitFixed();
        if ((uVar47 & 1) != 0) {
          LightSource::getLastShadowMapSplitFixedBbox
                    ((LightSource *)param_1,(Vector3 *)&local_488,(Vector3 *)&local_a0);
          plVar60 = *pplVar2;
          if (*pFVar1 == (FileOutputStream)0x0) {
            (**(code **)(*plVar60 + 0x30))(plVar60,"\" lastShadowMapSplitBboxMin=\"",0x1d);
            uVar43 = extraout_x1_x00140;
          }
          else {
            File::writeDosEOLExpand((File *)plVar60,"\" lastShadowMapSplitBboxMin=\"",0x1d);
            uVar43 = extraout_x1_x00139;
          }
          uVar15 = FUN_0091faa0((double)(float)local_488,&local_380,uVar43,&DAT_0050d9a5);
          (**(code **)(**pplVar2 + 0x30))(*pplVar2,&local_380,uVar15);
          plVar60 = *pplVar2;
          if (*pFVar1 == (FileOutputStream)0x0) {
            (**(code **)(*plVar60 + 0x30))(plVar60,&DAT_004df685,1);
            uVar43 = extraout_x1_x00142;
          }
          else {
            File::writeDosEOLExpand((File *)plVar60,&DAT_004df685,1);
            uVar43 = extraout_x1_x00141;
          }
          uVar15 = FUN_0091faa0((double)local_488._4_4_,&local_380,uVar43,&DAT_0050d9a5);
          (**(code **)(**pplVar2 + 0x30))(*pplVar2,&local_380,uVar15);
          plVar60 = *pplVar2;
          if (*pFVar1 == (FileOutputStream)0x0) {
            (**(code **)(*plVar60 + 0x30))(plVar60,&DAT_004df685,1);
            uVar43 = extraout_x1_x00144;
          }
          else {
            File::writeDosEOLExpand((File *)plVar60,&DAT_004df685,1);
            uVar43 = extraout_x1_x00143;
          }
          uVar15 = FUN_0091faa0((double)local_480._0_4_,&local_380,uVar43,&DAT_0050d9a5);
          (**(code **)(**pplVar2 + 0x30))(*pplVar2,&local_380,uVar15);
          plVar60 = *pplVar2;
          if (*pFVar1 == (FileOutputStream)0x0) {
            (**(code **)(*plVar60 + 0x30))(plVar60,"\" lastShadowMapSplitBboxMax=\"",0x1d);
            uVar43 = extraout_x1_x00146;
          }
          else {
            File::writeDosEOLExpand((File *)plVar60,"\" lastShadowMapSplitBboxMax=\"",0x1d);
            uVar43 = extraout_x1_x00145;
          }
          uVar15 = FUN_0091faa0((double)(float)local_a0,&local_380,uVar43,&DAT_0050d9a5);
          (**(code **)(**pplVar2 + 0x30))(*pplVar2,&local_380,uVar15);
          plVar60 = *pplVar2;
          if (*pFVar1 == (FileOutputStream)0x0) {
            (**(code **)(*plVar60 + 0x30))(plVar60,&DAT_004df685,1);
            uVar43 = extraout_x1_x00148;
          }
          else {
            File::writeDosEOLExpand((File *)plVar60,&DAT_004df685,1);
            uVar43 = extraout_x1_x00147;
          }
          uVar15 = FUN_0091faa0((double)local_a0._4_4_,&local_380,uVar43,&DAT_0050d9a5);
          (**(code **)(**pplVar2 + 0x30))(*pplVar2,&local_380,uVar15);
          plVar60 = *pplVar2;
          if (*pFVar1 == (FileOutputStream)0x0) {
            (**(code **)(*plVar60 + 0x30))(plVar60,&DAT_004df685,1);
            uVar43 = extraout_x1_x00150;
          }
          else {
            File::writeDosEOLExpand((File *)plVar60,&DAT_004df685,1);
            uVar43 = extraout_x1_x00149;
          }
          uVar15 = FUN_0091faa0((double)(float)local_98,&local_380,uVar43,&DAT_0050d9a5);
          (**(code **)(**pplVar2 + 0x30))(*pplVar2,&local_380,uVar15);
        }
      }
    }
    plVar60 = *pplVar2;
    if (*pFVar1 == (FileOutputStream)0x0) {
      (**(code **)(*plVar60 + 0x30))(plVar60,"\" range=\"",9);
      uVar43 = extraout_x1_x00152;
    }
    else {
      File::writeDosEOLExpand((File *)plVar60,"\" range=\"",9);
      uVar43 = extraout_x1_x00151;
    }
    uVar15 = FUN_0091faa0((double)*(float *)(param_1 + 0x194),&local_380,uVar43,&DAT_0050d9a5);
    (**(code **)(**pplVar2 + 0x30))(*pplVar2,&local_380,uVar15);
    if (*(int *)(param_1 + 0x16c) == 0) {
      uVar16 = LightSource::getLightFlags();
      if ((uVar16 >> 7 & 1) != 0) {
        plVar60 = *pplVar2;
        if (*pFVar1 == (FileOutputStream)0x0) {
          lVar54 = *plVar60;
          pcVar29 = "\" scattering=\"true";
          uVar15 = 0x12;
          goto LAB_00913d94;
        }
        File::writeDosEOLExpand((File *)plVar60,"\" scattering=\"true",0x12);
      }
    }
    else if (*(int *)(param_1 + 0x16c) == 2) {
      plVar60 = *pplVar2;
      if (*pFVar1 == (FileOutputStream)0x0) {
        (**(code **)(*plVar60 + 0x30))(plVar60,"\" coneAngle=\"",0xd);
        uVar43 = extraout_x1_x00154;
      }
      else {
        File::writeDosEOLExpand((File *)plVar60,"\" coneAngle=\"",0xd);
        uVar43 = extraout_x1_x00153;
      }
      uVar15 = FUN_0091faa0((double)*(float *)(param_1 + 0x19c),&local_380,uVar43,&DAT_0050d9a5);
      (**(code **)(**pplVar2 + 0x30))(*pplVar2,&local_380,uVar15);
      plVar60 = *pplVar2;
      if (*pFVar1 == (FileOutputStream)0x0) {
        (**(code **)(*plVar60 + 0x30))(plVar60,"\" dropOff=\"",0xb);
      }
      else {
        File::writeDosEOLExpand((File *)plVar60,"\" dropOff=\"",0xb);
      }
      fVar71 = (float)LightSource::getDropOff();
      uVar15 = FUN_0091faa0((double)fVar71,&local_380,extraout_x1_x00155,&DAT_0050d9a5);
      pcVar29 = (char *)&local_380;
      plVar60 = *pplVar2;
      lVar54 = *plVar60;
LAB_00913d94:
      (**(code **)(lVar54 + 0x30))(plVar60,pcVar29,uVar15);
    }
    plVar60 = *pplVar2;
    if (*pFVar1 == (FileOutputStream)0x0) {
LAB_00914ecc:
      (**(code **)(*plVar60 + 0x30))(plVar60,&DAT_004e56b4,1);
    }
    else {
LAB_00913dac:
      File::writeDosEOLExpand((File *)plVar60,&DAT_004e56b4,1);
    }
LAB_00914ee4:
    bVar12 = false;
  }
  if ((uVar46 >> 5 & 1) != 0) {
    exportVisibilityConditionAttributes((TransformGroup *)param_1,param_14);
  }
  if (bVar12) {
    if (param_2 != 0) {
      do {
        while( true ) {
          uVar46 = param_2;
          if (0x59 < param_2) {
            uVar46 = 0x5a;
          }
          FVar5 = *pFVar1;
          pcVar29 = &UNK_00501a54 + -(ulong)(uVar46 << 1);
          plVar60 = *pplVar2;
          sVar27 = strlen(pcVar29);
          if (FVar5 == (FileOutputStream)0x0) break;
          File::writeDosEOLExpand((File *)plVar60,pcVar29,(uint)sVar27);
          param_2 = param_2 - uVar46;
          if (param_2 == 0) goto LAB_009150fc;
        }
        (**(code **)(*plVar60 + 0x30))(plVar60,pcVar29);
        param_2 = param_2 - uVar46;
      } while (param_2 != 0);
    }
LAB_009150fc:
    plVar60 = *pplVar2;
    if (*pFVar1 == (FileOutputStream)0x0) {
      (**(code **)(*plVar60 + 0x30))(plVar60,&DAT_004ed58a,2);
    }
    else {
      File::writeDosEOLExpand((File *)plVar60,&DAT_004ed58a,2);
    }
    FVar5 = *pFVar1;
    plVar60 = *pplVar2;
    sVar27 = strlen(pcVar28);
    if (FVar5 == (FileOutputStream)0x0) {
      (**(code **)(*plVar60 + 0x30))(plVar60,pcVar28);
    }
    else {
      File::writeDosEOLExpand((File *)plVar60,pcVar28,(uint)sVar27);
    }
    plVar60 = *pplVar2;
    if (*pFVar1 != (FileOutputStream)0x0) {
      File::writeDosEOLExpand((File *)plVar60,&DAT_004db81c,2);
      goto LAB_009151c0;
    }
    lVar54 = *plVar60;
    puVar42 = &DAT_004db81c;
    uVar43 = 2;
  }
  else {
    plVar60 = *pplVar2;
    if ((int)((ulong)(*(long *)(param_1 + 0x30) - *(long *)(param_1 + 0x28)) >> 3) != 0) {
      if (*pFVar1 == (FileOutputStream)0x0) {
        (**(code **)(*plVar60 + 0x30))(plVar60,&DAT_004db81c,2);
      }
      else {
        File::writeDosEOLExpand((File *)plVar60,&DAT_004db81c,2);
      }
      lVar54 = *(long *)(param_1 + 0x28);
      if ((int)((ulong)(*(long *)(param_1 + 0x30) - lVar54) >> 3) != 0) {
        uVar47 = 0;
        do {
          exportScenegraph(*(ScenegraphNode **)(lVar54 + uVar47 * 8),param_2 + 1,param_3,param_4,
                           param_5,param_6,param_7,param_8,param_9,param_10,param_11,param_12,
                           param_13,param_14);
          uVar47 = uVar47 + 1;
          lVar54 = *(long *)(param_1 + 0x28);
        } while (uVar47 < ((ulong)(*(long *)(param_1 + 0x30) - lVar54) >> 3 & 0xffffffff));
      }
      if (param_2 != 0) {
        do {
          while( true ) {
            uVar46 = param_2;
            if (0x59 < param_2) {
              uVar46 = 0x5a;
            }
            FVar5 = *pFVar1;
            pcVar29 = &UNK_00501a54 + -(ulong)(uVar46 << 1);
            plVar60 = *pplVar2;
            sVar27 = strlen(pcVar29);
            if (FVar5 == (FileOutputStream)0x0) break;
            File::writeDosEOLExpand((File *)plVar60,pcVar29,(uint)sVar27);
            param_2 = param_2 - uVar46;
            if (param_2 == 0) goto LAB_009150fc;
          }
          (**(code **)(*plVar60 + 0x30))(plVar60,pcVar29);
          param_2 = param_2 - uVar46;
        } while (param_2 != 0);
      }
      goto LAB_009150fc;
    }
    if (*pFVar1 != (FileOutputStream)0x0) {
      File::writeDosEOLExpand((File *)plVar60,&DAT_00509104,3);
      goto LAB_009151c0;
    }
    lVar54 = *plVar60;
    puVar42 = &DAT_00509104;
    uVar43 = 3;
  }
  (**(code **)(lVar54 + 0x30))(plVar60,puVar42,uVar43);
LAB_009151c0:
  if (*(long *)(lVar8 + 0x28) == local_88) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


