// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: startShapes
// Entry Point: 0093fd24
// Size: 3036 bytes
// Signature: undefined __cdecl startShapes(void * param_1, char * param_2, char * * param_3)


/* WARNING: Type propagation algorithm not settling */
/* I3DShapePoolFactory::startShapes(void*, char const*, char const**) */

void I3DShapePoolFactory::startShapes(void *param_1,char *param_2,char **param_3)

{
  long **pplVar1;
  uint uVar2;
  char *pcVar3;
  long lVar4;
  long *plVar5;
  Brep **ppBVar6;
  undefined **ppuVar7;
  byte bVar8;
  uint uVar9;
  int iVar10;
  long lVar11;
  long *this;
  ulong uVar12;
  long lVar13;
  undefined1 *puVar14;
  IndexedTriangleSet *pIVar15;
  long *plVar16;
  StreamManager *pSVar17;
  uchar *puVar18;
  MeshSplitAttachmentSharedData *this_00;
  void *__dest;
  long *plVar19;
  ulong uVar20;
  char *pcVar21;
  ulong uVar22;
  long **pplVar23;
  long **pplVar24;
  long **pplVar25;
  uint uVar26;
  void *__src;
  size_t __n;
  Brep *local_158;
  float local_14c;
  long *local_148;
  uint local_13c;
  ulong local_138;
  undefined8 uStack_130;
  char *local_128;
  uint local_120;
  uint local_11c;
  uint local_118;
  uint local_114;
  undefined **local_110;
  byte local_108;
  long *local_100;
  char local_f8;
  undefined1 *local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  basic_string local_c8 [4];
  char *local_b8;
  Brep **local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  Brep **local_98;
  undefined4 local_90;
  Brep **local_88;
  Brep **local_80;
  undefined8 local_78;
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  lVar11 = ExpatUtil::getAttr("externalShapesFile",param_3);
  if (lVar11 != 0) {
    *(undefined *)((long)param_1 + 0x2a0) = 1;
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string(local_c8);
                    /* try { // try from 0093fd84 to 0093fd8f has its CatchHandler @ 00940a40 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)local_c8);
    pcVar21 = (char *)((ulong)local_c8 | 1);
    if (((byte)local_c8[0] & 1) != 0) {
      pcVar21 = local_b8;
    }
                    /* try { // try from 0093fda4 to 0093fde3 has its CatchHandler @ 00940a80 */
    this = (long *)FileManager::get((FileManager *)FileManager::s_singletonFileManager,pcVar21,0,
                                    false);
    if (((this == (long *)0x0) || (uVar12 = (**(code **)(*this + 0x10))(this), (uVar12 & 1) == 0))
       || (lVar13 = (**(code **)(*this + 0x48))(this), lVar13 < 1)) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar10 != 0
         )) {
                    /* try { // try from 009407d8 to 009407e3 has its CatchHandler @ 0094090c */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
                    /* try { // try from 009406cc to 009406e3 has its CatchHandler @ 00940a80 */
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "Error: Failed to open shapes file \'%s\'.\n",lVar11);
    }
    else {
                    /* try { // try from 0093fdec to 0093fdf3 has its CatchHandler @ 009409e4 */
      File::File((File *)&local_110);
      local_e8 = 0x10000;
      local_110 = &PTR__BufferedFileReader_00fe02c0;
      local_f8 = '\0';
      local_f0 = s_readBuffer;
      local_100 = this;
                    /* try { // try from 0093fe28 to 0093fe5f has its CatchHandler @ 00940a18 */
      local_d0 = (**(code **)(*this + 0x48))(this);
      local_d8 = (**(code **)(*local_100 + 0x40))(local_100);
      bVar8 = (**(code **)(*local_100 + 0x60))(local_100);
      local_108 = ~bVar8 & 1;
      local_e4 = 0;
      local_e0 = local_d8;
      local_114 = 0;
                    /* try { // try from 0093fe88 to 0093fe97 has its CatchHandler @ 009409e0 */
      (**(code **)(*this + 0x28))(this,&local_114,4);
      uVar9 = local_114 >> 0xd & 7;
      uVar26 = local_114 >> 0x10;
      uVar2 = 0;
      if (local_114 >> 0x19 != 1) {
        uVar2 = local_114 & 0xff;
      }
                    /* try { // try from 0093fec4 to 0093fefb has its CatchHandler @ 009409f4 */
      if ((uVar9 != 0) && (uVar12 = (**(code **)(*this + 0x18))(this), (uVar12 & 1) != 0)) {
        iVar10 = 0xfff3;
        if (uVar9 != 1) {
          iVar10 = 0xffed;
        }
        uVar26 = iVar10 + uVar26 & 0xffff;
      }
      if (uVar26 != 0) {
        local_f8 = '\x01';
        this = (long *)operator_new(0x20);
                    /* try { // try from 0093ff00 to 0093ff0f has its CatchHandler @ 00940994 */
        UGCProtection::UGCProtection((UGCProtection *)this,uVar26,(File *)&local_110,false);
      }
      if ((uVar2 & 0xfc) == 4) {
        if (uVar2 < 7) {
          if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
             iVar10 != 0)) {
                    /* try { // try from 0094087c to 00940887 has its CatchHandler @ 00940904 */
            LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
            __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                         &PTR_LOOP_00fd8de0);
            __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
          }
                    /* try { // try from 0093ff38 to 0093ff4f has its CatchHandler @ 009409f4 */
          LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                            "Warning: Old shape file format version found \'%s\'.\n",lVar11);
        }
        local_118 = 0;
                    /* try { // try from 0093ff5c to 0093ff6b has its CatchHandler @ 00940990 */
        (**(code **)(*this + 0x28))(this,&local_118,4);
        if (local_118 != 0) {
          uVar26 = 0;
          pcVar21 = (char *)((ulong)&local_138 | 1);
          pplVar1 = (long **)((long)param_1 + 0xc0);
          do {
            local_11c = 0;
                    /* try { // try from 0093ffb8 to 0093ffc7 has its CatchHandler @ 00940a3c */
            (**(code **)(*this + 0x28))(this,&local_11c,4);
            local_120 = 0;
                    /* try { // try from 0093ffd4 to 0093ffe3 has its CatchHandler @ 00940a38 */
            (**(code **)(*this + 0x28))(this,&local_120,4);
            if (local_120 < 0x800001) {
LAB_00940080:
              uVar12 = (ulong)local_120;
              puVar14 = s_shapeBuffer;
            }
            else {
              if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
                 (iVar10 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
                 iVar10 != 0)) {
                    /* try { // try from 00940634 to 0094063f has its CatchHandler @ 0094092c */
                LogManager::LogManager
                          ((LogManager *)&LogManager::getInstance()::singletonLogManager);
                __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager
                             ,&PTR_LOOP_00fd8de0);
                __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
              }
                    /* try { // try from 00940008 to 0094009f has its CatchHandler @ 00940a5c */
              LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                                "Warning: Shape from \'%s\' too big (%u KB). Maximum supported size on Consoles is %u KB.\n"
                                ,lVar11,local_120 >> 10,0x2000);
              if (local_120 < 0x1000001) goto LAB_00940080;
              if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
                 (iVar10 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
                 iVar10 != 0)) {
                    /* try { // try from 00940680 to 0094068b has its CatchHandler @ 00940928 */
                LogManager::LogManager
                          ((LogManager *)&LogManager::getInstance()::singletonLogManager);
                __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager
                             ,&PTR_LOOP_00fd8de0);
                __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
              }
              LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                                 "Error: Shape from \'%s\' too big (%u KB). Maximum supported size is %u KB.\n"
                                 ,lVar11,local_120 >> 10,0x4000);
              uVar12 = (ulong)local_120;
              puVar14 = (undefined1 *)operator_new__(uVar12);
            }
            uVar9 = (**(code **)(*this + 0x28))(this,puVar14,uVar12);
            if (uVar9 != local_120) {
              if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
                 (iVar10 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
                 iVar10 != 0)) {
                    /* try { // try from 009408c4 to 009408cf has its CatchHandler @ 00940900 */
                LogManager::LogManager
                          ((LogManager *)&LogManager::getInstance()::singletonLogManager);
                __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager
                             ,&PTR_LOOP_00fd8de0);
                __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
              }
                    /* try { // try from 00940774 to 0094078b has its CatchHandler @ 00940944 */
              LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                                 "Error: Failed to read shapes file \'%s\'.\n",lVar11);
              break;
            }
            local_138 = 0;
            uStack_130 = 0;
            local_128 = (char *)0x0;
            local_13c = 0;
            local_148 = (long *)0x0;
            if (local_11c == 1) {
              local_98 = (Brep **)((ulong)local_98 & 0xffffffff00000000);
                    /* try { // try from 009400cc to 009400d3 has its CatchHandler @ 00940a34 */
              pIVar15 = (IndexedTriangleSet *)operator_new(0x90);
                    /* try { // try from 009400d8 to 009400db has its CatchHandler @ 009409f8 */
              IndexedTriangleSet::IndexedTriangleSet(pIVar15);
                    /* try { // try from 009400dc to 009400ff has its CatchHandler @ 00940a34 */
              SerializationHelper::deserializeIndexedTriangleSet
                        ((basic_string *)&local_138,&local_13c,(float *)&local_88,(float *)&local_98
                         ,pIVar15,(Bt2PhysicsCookedDataSet **)&local_148,uVar2,puVar14);
              local_b0 = local_88;
              local_a8 = (Brep **)CONCAT44(local_a8._4_4_,local_80._0_4_);
                    /* try { // try from 00940110 to 00940117 has its CatchHandler @ 00940a44 */
              plVar16 = (long *)operator_new(0x168);
              pcVar3 = pcVar21;
              if ((local_138 & 1) != 0) {
                pcVar3 = local_128;
              }
                    /* try { // try from 00940134 to 0094013f has its CatchHandler @ 00940a08 */
              IndexedTriangleSetGeometry::IndexedTriangleSetGeometry
                        ((IndexedTriangleSetGeometry *)plVar16,pcVar3,pIVar15,(Vector3 *)&local_b0,
                         local_98._0_4_);
                    /* try { // try from 00940140 to 0094014f has its CatchHandler @ 00940a44 */
              pSVar17 = (StreamManager *)StreamManager::getInstance();
              StreamManager::addStreamable
                        (pSVar17,(Streamable *)(plVar16 + 0xb),
                         *(STREAM_QUEUE *)((long)param_1 + 0x254));
            }
            else if ((local_11c & 0xfffffffb) == 2) {
              local_88 = (Brep **)0x0;
                    /* try { // try from 00940164 to 0094017b has its CatchHandler @ 009409e8 */
              SerializationHelper::deserializeSpline
                        ((basic_string *)&local_138,&local_13c,(Spline **)&local_88,uVar2,puVar14,
                         local_11c);
                    /* try { // try from 0094017c to 00940183 has its CatchHandler @ 00940a30 */
              plVar16 = (long *)operator_new(0xe0);
              pcVar3 = pcVar21;
              if ((local_138 & 1) != 0) {
                pcVar3 = local_128;
              }
                    /* try { // try from 009401a0 to 009401a3 has its CatchHandler @ 009409ec */
              SplineGeometry::SplineGeometry((SplineGeometry *)plVar16,pcVar3,(Spline *)local_88);
                    /* try { // try from 009401a4 to 009401b3 has its CatchHandler @ 00940a30 */
              pSVar17 = (StreamManager *)StreamManager::getInstance();
              StreamManager::addStreamable
                        (pSVar17,(Streamable *)(plVar16 + 0x19),
                         *(STREAM_QUEUE *)((long)param_1 + 0x254));
            }
            else {
              if (local_11c == 5) {
                local_88 = (Brep **)0x0;
                local_80 = (Brep **)0x0;
                local_78 = 0;
                    /* try { // try from 00940310 to 00940317 has its CatchHandler @ 0094096c */
                pIVar15 = (IndexedTriangleSet *)operator_new(0x90);
                    /* try { // try from 0094031c to 0094031f has its CatchHandler @ 00940968 */
                IndexedTriangleSet::IndexedTriangleSet(pIVar15);
                local_b0 = (Brep **)0x0;
                local_a8 = (Brep **)0x0;
                local_a0 = 0;
                    /* try { // try from 00940328 to 00940347 has its CatchHandler @ 00940964 */
                SerializationHelper::deserializeSplitMeshAttachment
                          ((basic_string *)&local_138,&local_13c,(vector *)&local_88,pIVar15,
                           (vector *)&local_b0,uVar2,puVar14);
                    /* try { // try from 00940348 to 0094034f has its CatchHandler @ 009409ac */
                this_00 = (MeshSplitAttachmentSharedData *)operator_new(0x58);
                    /* try { // try from 00940354 to 0094035f has its CatchHandler @ 00940954 */
                MeshSplitAttachmentSharedData::MeshSplitAttachmentSharedData
                          (this_00,pIVar15,(vector *)&local_b0);
                    /* try { // try from 00940360 to 0094036f has its CatchHandler @ 009409ac */
                pSVar17 = (StreamManager *)StreamManager::getInstance();
                StreamManager::addStreamable
                          (pSVar17,(Streamable *)this_00,*(STREAM_QUEUE *)((long)param_1 + 0x254));
                    /* try { // try from 00940370 to 00940377 has its CatchHandler @ 009409a8 */
                plVar16 = (long *)operator_new(0xa8);
                pcVar3 = pcVar21;
                if ((local_138 & 1) != 0) {
                  pcVar3 = local_128;
                }
                    /* try { // try from 00940390 to 0094039b has its CatchHandler @ 00940948 */
                MeshSplitAttachmentGeometry::MeshSplitAttachmentGeometry
                          ((MeshSplitAttachmentGeometry *)plVar16,pcVar3,(vector *)&local_88,this_00
                          );
                    /* try { // try from 0094039c to 009403ab has its CatchHandler @ 009409a8 */
                pSVar17 = (StreamManager *)StreamManager::getInstance();
                StreamManager::addStreamable
                          (pSVar17,(Streamable *)(plVar16 + 0xb),
                           *(STREAM_QUEUE *)((long)param_1 + 0x254));
                if (local_b0 != (Brep **)0x0) {
                  local_a8 = local_b0;
                  operator_delete(local_b0);
                }
              }
              else {
                if (local_11c != 4) {
                  if (local_11c == 3) {
                    local_88 = (Brep **)0x0;
                    /* try { // try from 009401d4 to 009401eb has its CatchHandler @ 0094098c */
                    SerializationHelper::deserializeNavigationMesh
                              ((basic_string *)&local_138,&local_13c,(NavigationMesh **)&local_88,
                               uVar2,puVar14);
                    ppBVar6 = local_88;
                    FUN_00f276d0(1,local_88 + 1);
                    uVar9 = local_13c;
                    pplVar23 = *(long ***)(long **)((long)param_1 + 0x150);
                    pplVar24 = (long **)((long)param_1 + 0x150);
                    while (pplVar25 = pplVar24, pplVar23 != (long **)0x0) {
                      while (pplVar24 = pplVar23, *(uint *)(pplVar24 + 4) <= local_13c) {
                        if (local_13c <= *(uint *)(pplVar24 + 4)) goto LAB_009403dc;
                        pplVar25 = pplVar24 + 1;
                        pplVar23 = (long **)*pplVar25;
                        if ((long **)*pplVar25 == (long **)0x0) goto LAB_009403dc;
                      }
                      pplVar23 = (long **)*pplVar24;
                    }
LAB_009403dc:
                    if (*pplVar25 == (long *)0x0) {
                    /* try { // try from 009403e4 to 009403ef has its CatchHandler @ 00940940 */
                      plVar16 = (long *)operator_new(0x30);
                      *(uint *)(plVar16 + 4) = uVar9;
                      plVar16[5] = (long)ppBVar6;
                      *plVar16 = 0;
                      plVar16[1] = 0;
                      plVar16[2] = (long)pplVar24;
                      *pplVar25 = plVar16;
                      if (**(long **)((long)param_1 + 0x148) != 0) {
                        *(long *)((long)param_1 + 0x148) = **(long **)((long)param_1 + 0x148);
                        plVar16 = *pplVar25;
                      }
                      std::__ndk1::
                      __tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                                (*(__tree_node_base **)((long)param_1 + 0x150),
                                 (__tree_node_base *)plVar16);
                      *(long *)((long)param_1 + 0x158) = *(long *)((long)param_1 + 0x158) + 1;
                    }
                  }
                  plVar16 = (long *)0x0;
                  goto LAB_00940430;
                }
                local_14c = 0.0;
                    /* try { // try from 0094024c to 00940253 has its CatchHandler @ 00940988 */
                pIVar15 = (IndexedTriangleSet *)operator_new(0x90);
                    /* try { // try from 00940258 to 0094025b has its CatchHandler @ 00940984 */
                IndexedTriangleSet::IndexedTriangleSet(pIVar15);
                    /* try { // try from 0094025c to 00940283 has its CatchHandler @ 00940980 */
                puVar18 = (uchar *)SerializationHelper::deserializeIndexedTriangleSet
                                             ((basic_string *)&local_138,&local_13c,
                                              (float *)&local_b0,&local_14c,pIVar15,
                                              (Bt2PhysicsCookedDataSet **)&local_148,uVar2,puVar14);
                local_88 = (Brep **)0x0;
                local_80 = (Brep **)0x0;
                local_78 = 0;
                    /* try { // try from 00940290 to 0094029f has its CatchHandler @ 0094097c */
                SerializationHelper::deserializeSplitMeshBreps
                          (&local_158,(vector *)&local_88,uVar2,puVar18);
                local_98 = local_b0;
                local_90 = (undefined4)local_a8;
                    /* try { // try from 009402b0 to 009402b7 has its CatchHandler @ 009409c8 */
                plVar16 = (long *)operator_new(0x1b0);
                pcVar3 = pcVar21;
                if ((local_138 & 1) != 0) {
                  pcVar3 = local_128;
                }
                    /* try { // try from 009402e4 to 009402f3 has its CatchHandler @ 00940970 */
                MeshSplitGeometry::MeshSplitGeometry
                          ((MeshSplitGeometry *)plVar16,pcVar3,pIVar15,(Vector3 *)&local_98,
                           local_14c,local_158,(uint)((ulong)((long)local_80 - (long)local_88) >> 3)
                           ,local_88,0);
                    /* try { // try from 009402f4 to 00940303 has its CatchHandler @ 009409c8 */
                pSVar17 = (StreamManager *)StreamManager::getInstance();
                StreamManager::addStreamable
                          (pSVar17,(Streamable *)(plVar16 + 0xb),
                           *(STREAM_QUEUE *)((long)param_1 + 0x254));
              }
              if (local_88 != (Brep **)0x0) {
                local_80 = local_88;
                operator_delete(local_88);
              }
            }
LAB_00940430:
            if (puVar14 != s_shapeBuffer) {
              operator_delete__(puVar14);
            }
            uVar9 = local_13c;
            plVar19 = local_148;
            if ((plVar16 == (long *)0x0) || (local_13c == 0)) {
              if (local_148 != (long *)0x0) {
                Bt2PhysicsCookedDataSet::~Bt2PhysicsCookedDataSet
                          ((Bt2PhysicsCookedDataSet *)local_148);
                operator_delete(plVar19);
              }
              if (plVar16 != (long *)0x0) {
                (**(code **)(*plVar16 + 8))(plVar16);
              }
            }
            else {
              FUN_00f276d0(1,plVar16 + 1);
              pplVar25 = (long **)*pplVar1;
              pplVar23 = pplVar1;
              pplVar24 = pplVar1;
              while (pplVar25 != (long **)0x0) {
                while (pplVar24 = pplVar25, uVar9 < *(uint *)(pplVar24 + 4)) {
                  pplVar25 = (long **)*pplVar24;
                  pplVar23 = pplVar24;
                  if ((long **)*pplVar24 == (long **)0x0) {
                    plVar19 = *pplVar24;
                    goto joined_r0x009404e0;
                  }
                }
                if (uVar9 <= *(uint *)(pplVar24 + 4)) break;
                pplVar23 = pplVar24 + 1;
                pplVar25 = (long **)*pplVar23;
              }
              plVar19 = *pplVar23;
joined_r0x009404e0:
              plVar5 = local_148;
              if (plVar19 == (long *)0x0) {
                    /* try { // try from 009404fc to 00940507 has its CatchHandler @ 009409c4 */
                plVar19 = (long *)operator_new(0x30);
                *(uint *)(plVar19 + 4) = uVar9;
                plVar19[5] = (long)plVar16;
                *plVar19 = 0;
                plVar19[1] = 0;
                plVar19[2] = (long)pplVar24;
                *pplVar23 = plVar19;
                if (**(long **)((long)param_1 + 0xb8) != 0) {
                  *(long *)((long)param_1 + 0xb8) = **(long **)((long)param_1 + 0xb8);
                  plVar19 = *pplVar23;
                }
                std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                          (*(__tree_node_base **)((long)param_1 + 0xc0),(__tree_node_base *)plVar19)
                ;
                *(long *)((long)param_1 + 200) = *(long *)((long)param_1 + 200) + 1;
                plVar5 = local_148;
              }
              local_148 = plVar5;
              if (plVar5 != (long *)0x0) {
                pplVar24 = *(long ***)((long)param_1 + 0xd8);
                if (pplVar24 < *(long ***)((long)param_1 + 0xe0)) {
                  *pplVar24 = plVar16;
                  pplVar24[1] = plVar5;
                  *(long ***)((long)param_1 + 0xd8) = pplVar24 + 2;
                }
                else {
                  __src = *(void **)((long)param_1 + 0xd0);
                  __n = (long)pplVar24 - (long)__src;
                  uVar12 = ((long)__n >> 4) + 1;
                  if (uVar12 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
                    std::__ndk1::__vector_base_common<true>::__throw_length_error();
                  }
                  uVar20 = (long)*(long ***)((long)param_1 + 0xe0) - (long)__src;
                  uVar22 = (long)uVar20 >> 3;
                  if (uVar12 <= uVar22) {
                    uVar12 = uVar22;
                  }
                  if (0x7fffffffffffffef < uVar20) {
                    uVar12 = 0xfffffffffffffff;
                  }
                  if (uVar12 >> 0x3c != 0) {
                    /* try { // try from 00940810 to 00940823 has its CatchHandler @ 009409f0 */
                    /* WARNING: Subroutine does not return */
                    FUN_006d1f18(
                                "allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                                );
                  }
                    /* try { // try from 009405bc to 009405bf has its CatchHandler @ 009409a4 */
                  __dest = operator_new(uVar12 << 4);
                  pplVar24 = (long **)((long)__dest + ((long)__n >> 4) * 0x10);
                  *pplVar24 = plVar16;
                  pplVar24[1] = plVar5;
                  if (0 < (long)__n) {
                    memcpy(__dest,__src,__n);
                  }
                  *(void **)((long)param_1 + 0xd0) = __dest;
                  *(long ***)((long)param_1 + 0xd8) = pplVar24 + 2;
                  *(void **)((long)param_1 + 0xe0) = (void *)((long)__dest + uVar12 * 0x10);
                  if (__src != (void *)0x0) {
                    operator_delete(__src);
                  }
                }
              }
            }
            if ((local_138 & 1) != 0) {
              operator_delete(local_128);
            }
            uVar26 = uVar26 + 1;
          } while (uVar26 < local_118);
        }
      }
      else {
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
           iVar10 != 0)) {
                    /* try { // try from 00940834 to 0094083f has its CatchHandler @ 00940908 */
          LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
                    /* try { // try from 00940748 to 0094075f has its CatchHandler @ 009409f4 */
        LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                           "Error: Unsupported shape file format version found \'%s\'.\n",lVar11);
      }
      local_110 = &PTR__BufferedFileReader_00fe02c0;
      ppuVar7 = &PTR__BufferedFileReader_00fe02c0;
      if ((local_f8 != '\0') && (ppuVar7 = local_110, local_100 != (long *)0x0)) {
        local_110 = &PTR__BufferedFileReader_00fe02c0;
        (**(code **)(*local_100 + 8))();
        ppuVar7 = local_110;
      }
      local_110 = ppuVar7;
      File::~File((File *)&local_110);
    }
    if (this != (long *)0x0) {
      (**(code **)(*this + 8))(this);
    }
    if (((byte)local_c8[0] & 1) != 0) {
      operator_delete(local_b8);
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


