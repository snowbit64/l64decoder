// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: startShape
// Entry Point: 009328a0
// Size: 3536 bytes
// Signature: undefined __cdecl startShape(void * param_1, char * param_2, char * * param_3)


/* WARNING: Type propagation algorithm not settling */
/* I3DSceneGraphFactory::startShape(void*, char const*, char const**) */

void I3DSceneGraphFactory::startShape(void *param_1,char *param_2,char **param_3)

{
  uchar *puVar1;
  uchar *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  char *pcVar11;
  long *plVar12;
  char *pcVar13;
  TransformGroup *this;
  IndexedTriangleSet *pIVar14;
  long *plVar15;
  undefined8 *puVar16;
  GsShape *this_00;
  ulong uVar17;
  GsMaterial *pGVar18;
  MaterialManager *pMVar19;
  long lVar20;
  size_t sVar21;
  AdsBrockerManager *this_01;
  void *pvVar22;
  long **pplVar23;
  long *plVar24;
  long **pplVar25;
  long **pplVar26;
  long *plVar27;
  ulong uVar28;
  uchar *puVar29;
  long **pplVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  char **local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160 [9];
  ulong local_118;
  ulong uStack_110;
  undefined8 *local_108;
  undefined auStack_100 [72];
  ulong local_b8;
  ulong uStack_b0;
  undefined *local_a8;
  long local_a0;
  
  lVar3 = tpidr_el0;
  local_a0 = *(long *)(lVar3 + 0x28);
  plVar27 = *(long **)((long)param_1 + 0x280);
  local_178 = param_3;
  pcVar11 = (char *)ExpatUtil::getAttr("shapeId",param_3);
  if (pcVar11 == (char *)0x0) {
    plVar12 = (long *)0x0;
    uVar28 = 0xffffffff;
  }
  else {
    uVar7 = StringUtil::strtouint(pcVar11);
    uVar28 = (ulong)uVar7;
    plVar12 = (long *)I3DLoad::findShape((I3DLoad *)param_1,uVar7);
  }
  pcVar13 = (char *)ExpatUtil::getAttr("name",param_3);
  pcVar11 = "Unknown";
  if (pcVar13 != (char *)0x0) {
    pcVar11 = pcVar13;
  }
  if (plVar12 == (long *)0x0) {
    this = (TransformGroup *)operator_new(0x158);
                    /* try { // try from 00932978 to 0093297f has its CatchHandler @ 009336b8 */
    TransformGroup::TransformGroup(this,pcVar11);
    readTransformGroup((I3DReader *)&local_178,(I3DLoad *)param_1,this,true,false,true,false);
    plVar27 = *(long **)(*(long *)((long)param_1 + 0x280) + 0x60);
    (**(code **)(*plVar27 + 0x18))(plVar27,this,0xffffffff);
    *(TransformGroup **)(*(long *)((long)param_1 + 0x280) + 0x60) = this;
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar9 != 0)) {
                    /* try { // try from 009335a4 to 009335af has its CatchHandler @ 00933678 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                      "Warning: Shape %s with id %u not found. Replace with empty transform group.\n"
                      ,pcVar11,uVar28);
    goto LAB_00933558;
  }
  pcVar13 = (char *)ExpatUtil::getAttr("splitType",param_3);
  if (pcVar13 == (char *)0x0) {
    uVar8 = 0;
    uVar7 = *(uint *)(plVar12 + 6);
LAB_00932a00:
    if ((uVar7 >> 10 & 1) == 0) goto LAB_00932a3c;
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar9 != 0)) {
                    /* try { // try from 009335ec to 009335f7 has its CatchHandler @ 00933674 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                      "Warning: Shape %s with id %u is of split shape type, but no splitType is defined.\n"
                      ,pcVar11,uVar28);
    uVar7 = *(uint *)(plVar12 + 6);
    uVar8 = 1;
LAB_00932a40:
    if ((uVar7 >> 10 & 1) == 0) {
      pplVar26 = *(long ***)((long)param_1 + 0x168);
      pplVar25 = (long **)((long)param_1 + 0x168);
      pplVar23 = pplVar25;
      if (pplVar26 == (long **)0x0) {
LAB_00932a80:
        pIVar14 = (IndexedTriangleSet *)Geometry::getCollisionProxyMesh();
        if (pIVar14 == (IndexedTriangleSet *)0x0) {
          plVar15 = (long *)0x0;
        }
        else {
          plVar15 = (long *)MeshSplitGeometry::createFromIndexedTriangleSet
                                      ((char *)plVar12[3],pIVar14,
                                       *(STREAM_QUEUE *)((long)param_1 + 0x254));
          if (plVar15 != (long *)0x0) {
            FUN_00f276d0(1,plVar15 + 1);
            pplVar23 = (long **)((long)param_1 + 0x180);
            pplVar30 = *(long ***)((long)param_1 + 0x180);
            pplVar26 = pplVar23;
            while (pplVar30 != (long **)0x0) {
              while (pplVar26 = pplVar30, plVar15 < pplVar26[4]) {
                pplVar23 = pplVar26;
                pplVar30 = (long **)*pplVar26;
                if ((long **)*pplVar26 == (long **)0x0) {
                  plVar24 = *pplVar26;
                  goto joined_r0x00932b2c;
                }
              }
              if (plVar15 <= pplVar26[4]) break;
              pplVar23 = pplVar26 + 1;
              pplVar30 = (long **)*pplVar23;
            }
            plVar24 = *pplVar23;
joined_r0x00932b2c:
            if (plVar24 == (long *)0x0) {
              plVar24 = (long *)operator_new(0x28);
              plVar24[4] = (long)plVar15;
              *plVar24 = 0;
              plVar24[1] = 0;
              plVar24[2] = (long)pplVar26;
              *pplVar23 = plVar24;
              if (**(long **)((long)param_1 + 0x178) != 0) {
                *(long *)((long)param_1 + 0x178) = **(long **)((long)param_1 + 0x178);
                plVar24 = *pplVar23;
              }
              std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                        (*(__tree_node_base **)((long)param_1 + 0x180),(__tree_node_base *)plVar24);
              *(long *)((long)param_1 + 0x188) = *(long *)((long)param_1 + 0x188) + 1;
            }
          }
        }
        pplVar26 = (long **)*pplVar25;
        pplVar23 = pplVar25;
        if (*pplVar25 == (long *)0x0) {
          plVar24 = *pplVar25;
        }
        else {
          do {
            while (pplVar25 = pplVar26, plVar12 < pplVar25[4]) {
              pplVar26 = (long **)*pplVar25;
              pplVar23 = pplVar25;
              if ((long **)*pplVar25 == (long **)0x0) {
                plVar24 = *pplVar25;
                goto joined_r0x00932bcc;
              }
            }
            if (plVar12 <= pplVar25[4]) break;
            pplVar23 = pplVar25 + 1;
            pplVar26 = (long **)*pplVar23;
          } while ((long **)*pplVar23 != (long **)0x0);
          plVar24 = *pplVar23;
        }
joined_r0x00932bcc:
        if (plVar24 == (long *)0x0) {
          puVar16 = (undefined8 *)operator_new(0x30);
          puVar16[4] = plVar12;
          puVar16[5] = plVar15;
          *puVar16 = 0;
          puVar16[1] = 0;
          puVar16[2] = pplVar25;
          *pplVar23 = puVar16;
          if (**(long **)((long)param_1 + 0x160) != 0) {
            *(long *)((long)param_1 + 0x160) = **(long **)((long)param_1 + 0x160);
            puVar16 = *pplVar23;
          }
          std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                    (*(__tree_node_base **)((long)param_1 + 0x168),(__tree_node_base *)puVar16);
          *(long *)((long)param_1 + 0x170) = *(long *)((long)param_1 + 0x170) + 1;
        }
      }
      else {
        do {
          if (pplVar26[4] >= plVar12) {
            pplVar23 = pplVar26;
          }
          pplVar26 = (long **)pplVar26[pplVar26[4] < plVar12];
        } while (pplVar26 != (long **)0x0);
        if ((pplVar23 == pplVar25) || (plVar12 < pplVar23[4])) goto LAB_00932a80;
        plVar15 = pplVar23[5];
      }
      if (plVar15 != (long *)0x0) {
        plVar12 = plVar15;
      }
      uVar7 = *(uint *)(plVar12 + 6);
    }
  }
  else {
    uVar8 = StringUtil::strtouint(pcVar13);
    uVar7 = *(uint *)(plVar12 + 6);
    if (uVar8 == 0) goto LAB_00932a00;
LAB_00932a3c:
    if (uVar8 != 0) goto LAB_00932a40;
  }
  if ((uVar7 >> 10 & 1) == 0) {
    this_00 = (GsShape *)operator_new(0x200);
                    /* try { // try from 00932c64 to 00932c6f has its CatchHandler @ 009336ac */
    GsShape::GsShape(this_00,pcVar11,(Geometry *)plVar12);
  }
  else {
    pcVar13 = (char *)ExpatUtil::getAttr("splitUvs",local_178);
    if (pcVar13 == (char *)0x0) {
      fVar33 = 0.6765267;
      fVar34 = 0.8344727;
      fVar32 = 1.0;
      fVar35 = 1.0;
      fVar36 = 1.0;
    }
    else {
      pcVar13 = (char *)StringUtil::atof(pcVar13,(float *)&local_170);
      pcVar13 = (char *)StringUtil::atof(pcVar13,(float *)((long)&local_170 + 4));
      pcVar13 = (char *)StringUtil::atof(pcVar13,(float *)&local_168);
      pcVar13 = (char *)StringUtil::atof(pcVar13,(float *)((long)&local_168 + 4));
      StringUtil::atof(pcVar13,(float *)local_160);
      fVar33 = local_170._4_4_;
      fVar34 = (float)local_170;
      fVar32 = (float)local_168;
      fVar35 = local_168._4_4_;
      fVar36 = (float)local_160[0];
    }
    pplVar23 = (long **)(plVar27 + 7);
    pplVar26 = (long **)*pplVar23;
    pplVar25 = pplVar23;
    if (pplVar26 == (long **)0x0) {
LAB_00932da4:
      plVar15 = (long *)operator_new(0x18);
      *(float *)plVar15 = fVar34;
      *(float *)((long)plVar15 + 4) = fVar33;
      *(float *)(plVar15 + 2) = fVar36;
      *(float *)(plVar15 + 1) = fVar32 - fVar34;
      *(float *)((long)plVar15 + 0xc) = fVar35 - fVar33;
      *(undefined4 *)((long)plVar15 + 0x14) = 1;
      pplVar25 = pplVar23;
      if ((long **)*pplVar23 != (long **)0x0) {
        pplVar26 = (long **)*pplVar23;
        pplVar25 = (long **)(plVar27 + 7);
        do {
          while( true ) {
            pplVar23 = pplVar26;
            fVar31 = *(float *)(pplVar23 + 4);
            if (fVar34 == fVar31) break;
            if (fVar31 <= fVar34) {
              if (fVar31 < fVar34) goto LAB_00932dec;
              goto LAB_00932e94;
            }
LAB_00932e70:
            pplVar26 = (long **)*pplVar23;
            pplVar25 = pplVar23;
            if ((long **)*pplVar23 == (long **)0x0) goto LAB_00932e94;
          }
          fVar31 = *(float *)((long)pplVar23 + 0x24);
          if (fVar33 != fVar31) {
            if (fVar33 < fVar31) goto LAB_00932e70;
            if (fVar31 < fVar33) goto LAB_00932dec;
            break;
          }
          fVar31 = *(float *)(pplVar23 + 5);
          if (fVar32 != fVar31) {
            if (fVar32 < fVar31) goto LAB_00932e70;
            if (fVar31 < fVar32) goto LAB_00932dec;
            break;
          }
          fVar31 = *(float *)((long)pplVar23 + 0x2c);
          if (fVar35 == fVar31) {
            if (fVar36 < *(float *)(pplVar23 + 6)) goto LAB_00932e70;
            if (*(float *)(pplVar23 + 6) < fVar36) goto LAB_00932dec;
            break;
          }
          if (fVar35 < fVar31) goto LAB_00932e70;
          if (fVar35 <= fVar31) break;
LAB_00932dec:
          pplVar25 = pplVar23 + 1;
          pplVar26 = (long **)*pplVar25;
        } while ((long **)*pplVar25 != (long **)0x0);
      }
LAB_00932e94:
      if (*pplVar25 == (long *)0x0) {
        plVar24 = (long *)operator_new(0x40);
        *(float *)(plVar24 + 4) = fVar34;
        *(float *)((long)plVar24 + 0x24) = fVar33;
        *(float *)(plVar24 + 5) = fVar32;
        *(float *)((long)plVar24 + 0x2c) = fVar35;
        *(float *)(plVar24 + 6) = fVar36;
        plVar24[7] = (long)plVar15;
        *plVar24 = 0;
        plVar24[1] = 0;
        plVar24[2] = (long)pplVar23;
        *pplVar25 = plVar24;
        if (*(long *)plVar27[6] != 0) {
          plVar27[6] = *(long *)plVar27[6];
          plVar24 = *pplVar25;
        }
        std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                  ((__tree_node_base *)plVar27[7],(__tree_node_base *)plVar24);
        plVar27[8] = plVar27[8] + 1;
      }
    }
    else {
      do {
        bVar6 = *(float *)(pplVar26 + 4) < fVar34;
        if ((((*(float *)(pplVar26 + 4) == fVar34) &&
             (bVar6 = *(float *)((long)pplVar26 + 0x24) < fVar33,
             *(float *)((long)pplVar26 + 0x24) == fVar33)) &&
            (bVar6 = *(float *)(pplVar26 + 5) < fVar32, *(float *)(pplVar26 + 5) == fVar32)) &&
           (bVar6 = *(float *)((long)pplVar26 + 0x2c) < fVar35,
           *(float *)((long)pplVar26 + 0x2c) == fVar35)) {
          bVar6 = *(float *)(pplVar26 + 6) < fVar36;
        }
        lVar20 = 8;
        if (!bVar6) {
          lVar20 = 0;
          pplVar25 = pplVar26;
        }
        pplVar26 = *(long ***)((long)pplVar26 + lVar20);
      } while (pplVar26 != (long **)0x0);
      if (pplVar25 == pplVar23) goto LAB_00932da4;
      bVar6 = fVar34 < *(float *)(pplVar25 + 4);
      if (((fVar34 == *(float *)(pplVar25 + 4)) &&
          (bVar6 = fVar33 < *(float *)((long)pplVar25 + 0x24),
          fVar33 == *(float *)((long)pplVar25 + 0x24))) &&
         ((bVar6 = fVar32 < *(float *)(pplVar25 + 5), fVar32 == *(float *)(pplVar25 + 5) &&
          (bVar6 = fVar35 < *(float *)((long)pplVar25 + 0x2c),
          fVar35 == *(float *)((long)pplVar25 + 0x2c))))) {
        if (fVar36 < *(float *)(pplVar25 + 6)) goto LAB_00932da4;
      }
      else if (bVar6) goto LAB_00932da4;
      plVar15 = pplVar25[7];
    }
    this_00 = (GsShape *)operator_new(0x218);
                    /* try { // try from 00932efc to 00932f0b has its CatchHandler @ 009336a8 */
    MeshSplitShape::MeshSplitShape
              ((MeshSplitShape *)this_00,pcVar11,(MeshSplitGeometry *)plVar12,
               (MeshSplitShapeSharedData *)plVar15);
    *(uint *)((MeshSplitShape *)this_00 + 0x210) =
         *(uint *)((MeshSplitShape *)this_00 + 0x210) & 0xffffffc0 | uVar8 & 0x3f;
  }
  readTransformGroup((I3DReader *)&local_178,(I3DLoad *)param_1,(TransformGroup *)this_00,true,false
                     ,true,false);
  uVar17 = I3DLoadUtil::hasGeometryShapeMaterials((Geometry *)plVar12);
  if ((uVar17 & 1) == 0) {
    if ((*(uint *)(plVar12 + 6) >> 4 & 1) == 0) {
      if ((*(uint *)(plVar12 + 6) >> 6 & 1) != 0) {
        pGVar18 = (GsMaterial *)I3DLoad::findPrecipitationMaterial((I3DLoad *)param_1,(uint)uVar28);
        if (pGVar18 != (GsMaterial *)0x0) {
          GsMaterial::validateTextures(pGVar18,*(STREAM_QUEUE *)((long)param_1 + 0x254));
          GsShape::addMaterial(this_00,pGVar18);
        }
        ScenegraphNode::setCullOverride((ScenegraphNode *)this_00,true);
      }
    }
    else {
      pMVar19 = (MaterialManager *)MaterialManager::getInstance();
      pGVar18 = (GsMaterial *)
                MaterialManager::getDefaultMaterial
                          (pMVar19,*(STREAM_QUEUE *)((long)param_1 + 0x254));
      GsShape::addMaterial(this_00,pGVar18);
      GsShape::addMaterial(this_00,pGVar18);
      pMVar19 = (MaterialManager *)MaterialManager::getInstance();
      MaterialManager::releaseMaterial(pMVar19,pGVar18);
    }
  }
  else {
    local_170 = (void *)0x0;
    local_168 = (void *)0x0;
    local_160[0] = 0;
                    /* try { // try from 00932f50 to 00932f63 has its CatchHandler @ 009336a4 */
    I3DReader::readUint32ListAttribute((I3DReader *)&local_178,"materialIds",(vector *)&local_170);
    pvVar22 = local_168;
    if (local_168 != local_170) {
      uVar28 = 0;
      do {
                    /* try { // try from 00932fb0 to 00932ffb has its CatchHandler @ 009336d8 */
        pGVar18 = (GsMaterial *)
                  I3DLoad::findMaterial((I3DLoad *)param_1,*(uint *)((long)local_170 + uVar28 * 4));
        if (pGVar18 == (GsMaterial *)0x0) {
          if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
             iVar9 != 0)) {
                    /* try { // try from 0093300c to 00933013 has its CatchHandler @ 00933690 */
            LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
            __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                         &PTR_LOOP_00fd8de0);
            __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
          }
          LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                            "Warning: Material with id %u not found in shape \'%s\'.\n",
                            (ulong)*(uint *)((long)local_170 + uVar28 * 4),pcVar11);
        }
        else {
          GsMaterial::validateTextures(pGVar18,*(STREAM_QUEUE *)((long)param_1 + 0x254));
          GsShape::addMaterial(this_00,pGVar18);
        }
        uVar28 = (ulong)((int)uVar28 + 1);
        pvVar22 = local_170;
      } while (uVar28 < (ulong)((long)local_168 - (long)local_170 >> 2));
    }
    if (pvVar22 != (void *)0x0) {
      local_168 = pvVar22;
      operator_delete(pvVar22);
    }
  }
  uVar7 = *(uint *)(this_00 + 400);
  pcVar11 = (char *)ExpatUtil::getAttr("castsShadows",local_178);
  if (pcVar11 != (char *)0x0) {
    iVar9 = strcasecmp(pcVar11,"false");
    if (iVar9 != 0) {
      uVar7 = uVar7 | 0x100;
    }
  }
  pcVar11 = (char *)ExpatUtil::getAttr("receiveShadows",local_178);
  if (pcVar11 != (char *)0x0) {
    iVar9 = strcasecmp(pcVar11,"false");
    if (iVar9 != 0) {
      uVar7 = uVar7 | 0x200;
    }
  }
  pcVar11 = (char *)ExpatUtil::getAttr("nonRenderable",local_178);
  if (pcVar11 != (char *)0x0) {
    iVar9 = strcasecmp(pcVar11,"false");
    if (iVar9 != 0) {
      uVar7 = uVar7 | 0x400;
    }
  }
  pcVar11 = (char *)ExpatUtil::getAttr("distanceBlending",local_178);
  if ((pcVar11 == (char *)0x0) || (iVar9 = strcasecmp(pcVar11,"false"), iVar9 != 0)) {
    uVar7 = uVar7 | 0x800;
  }
  pcVar11 = (char *)ExpatUtil::getAttr("occluder",local_178);
  if ((((pcVar11 != (char *)0x0) && (iVar9 = strcasecmp(pcVar11,"false"), iVar9 != 0)) &&
      (uVar7 = uVar7 | 0x1000, plVar12 != (long *)0x0)) &&
     ((lVar20 = Geometry::getCollisionProxyMesh(), lVar20 != 0 &&
      (lVar20 = Geometry::getCollisionProxyMesh(), *(char *)(lVar20 + 0x89) != '\0')))) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar9 != 0)) {
                    /* try { // try from 00933634 to 0093363f has its CatchHandler @ 00933670 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "ERROR: geometry \'%s\' needs to be marked as an occluder by the editor; please load/save the I3D to flush the occluder shape flag to the geometry.\n"
                       ,plVar12[3]);
  }
  pcVar11 = (char *)ExpatUtil::getAttr("terrainDecal",local_178);
  if (pcVar11 != (char *)0x0) {
    iVar9 = strcasecmp(pcVar11,"false");
    if (iVar9 != 0) {
      uVar7 = uVar7 | 0x1000000;
    }
  }
  pcVar11 = (char *)ExpatUtil::getAttr("renderedInViewports",local_178);
  if ((pcVar11 != (char *)0x0) && (iVar9 = strcasecmp(pcVar11,"false"), iVar9 == 0)) {
    uVar7 = uVar7 & 0xffffff7f;
  }
  pcVar11 = (char *)ExpatUtil::getAttr("doubleSided",local_178);
  if (pcVar11 != (char *)0x0) {
    iVar9 = strcasecmp(pcVar11,"false");
    if (iVar9 != 0) {
      uVar7 = uVar7 | 0x40;
    }
  }
  pcVar11 = (char *)ExpatUtil::getAttr("materialHolder",local_178);
  if (pcVar11 != (char *)0x0) {
    iVar9 = strcasecmp(pcVar11,"false");
    if (iVar9 != 0) {
      uVar7 = uVar7 | 0x2000000;
    }
  }
  pcVar11 = (char *)ExpatUtil::getAttr("buildNavMeshMask",local_178);
  if (pcVar11 == (char *)0x0) {
    pcVar11 = (char *)ExpatUtil::getAttr("buildNavMesh",local_178);
    if (pcVar11 != (char *)0x0) {
      iVar9 = strcasecmp(pcVar11,"false");
      if (iVar9 != 0) {
        uVar7 = uVar7 | 0x3fc000;
      }
    }
  }
  else {
    uVar8 = StringUtil::strtouint(pcVar11);
    uVar7 = (uVar8 & 0xff) << 0xe | uVar7;
  }
  pcVar11 = (char *)ExpatUtil::getAttr("adPlacementId",local_178);
  if ((pcVar11 != (char *)0x0) && (uVar8 = StringUtil::strtouint(pcVar11), uVar8 != 0)) {
    if (*(char *)((long)param_1 + 0x240) == '\0') {
      puVar1 = (uchar *)((long)param_1 + 0x211);
      puVar29 = puVar1;
      if ((*(byte *)((long)param_1 + 0x210) & 1) != 0) {
        puVar29 = *(uchar **)((long)param_1 + 0x220);
      }
      *(undefined *)((long)param_1 + 0x240) = 1;
      uVar28 = PathUtil::isAbsolutePath((char *)puVar29);
      if ((uVar28 & 1) != 0) {
        puVar2 = puVar1;
        if ((*(byte *)((long)param_1 + 0x210) & 1) != 0) {
          puVar2 = *(uchar **)((long)param_1 + 0x220);
        }
        pcVar11 = FileManager::s_singletonFileManager + 0x31;
        if ((FileManager::s_singletonFileManager[48] & 1) != 0) {
          pcVar11 = (char *)FileManager::s_singletonFileManager._64_8_;
        }
        uVar28 = StringUtil::startsWith((char *)puVar2,pcVar11);
        if ((uVar28 & 1) != 0) {
          if ((*(byte *)((long)param_1 + 0x210) & 1) != 0) {
            puVar1 = *(uchar **)((long)param_1 + 0x220);
          }
          pcVar11 = FileManager::s_singletonFileManager + 0x31;
          if ((FileManager::s_singletonFileManager[48] & 1) != 0) {
            pcVar11 = (char *)FileManager::s_singletonFileManager._64_8_;
          }
          sVar21 = strlen(pcVar11);
          puVar29 = puVar1 + sVar21;
        }
      }
      MD5Hash::MD5Hash((MD5Hash *)&local_170);
                    /* try { // try from 0093339c to 009333eb has its CatchHandler @ 009336c4 */
      uVar10 = __strlen_chk("$game$",7);
      MD5Hash::add((MD5Hash *)&local_170,(uchar *)"$game$",uVar10);
      uVar10 = __strlen_chk(puVar29,0xffffffffffffffff);
      MD5Hash::add((MD5Hash *)&local_170,puVar29,uVar10);
      MD5Hash::getMD5Hash((MD5Hash *)&local_170,(uchar *)((long)param_1 + 0x241));
      if (uStack_b0 <= local_b8) {
        local_b8 = uStack_b0;
      }
      if (local_a8 == auStack_100) {
        for (; local_b8 != 0; local_b8 = local_b8 - 1) {
          *(undefined4 *)(local_a8 + local_b8 * 4 + -4) = 0;
        }
      }
      if (uStack_110 <= local_118) {
        local_118 = uStack_110;
      }
      if (local_108 == local_160) {
        for (; local_118 != 0; local_118 = local_118 - 1) {
          *(undefined4 *)((long)local_108 + local_118 * 4 + -4) = 0;
        }
      }
    }
    this_01 = (AdsBrockerManager *)AdsBrockerManager::getInstance();
    AdsBrockerManager::addBillboardShape(this_01,this_00,(uchar *)((long)param_1 + 0x241),uVar8);
    uVar7 = uVar7 | 0x2000;
  }
  GsShape::setShapeFlags(this_00,uVar7);
  pcVar11 = (char *)ExpatUtil::getAttr("decalLayer",local_178);
  if (pcVar11 == (char *)0x0) {
    uVar7 = 0;
  }
  else {
    uVar7 = StringUtil::strtouint(pcVar11);
    uVar7 = (uVar7 & 3) << 0x16;
  }
  *(uint *)(this_00 + 400) = *(uint *)(this_00 + 400) & 0xff3fffff | uVar7;
  lVar20 = ExpatUtil::getAttr("skinBindNodeIds",local_178);
  if (lVar20 != 0) {
    lVar20 = *plVar27;
    lVar5 = plVar27[1];
    if (plVar27[1] - lVar20 == -0x20) {
      while (lVar4 = lVar5, lVar4 != lVar20) {
        pvVar22 = *(void **)(lVar4 + -0x18);
        lVar5 = lVar4 + -0x20;
        if (pvVar22 != (void *)0x0) {
          *(void **)(lVar4 + -0x10) = pvVar22;
          operator_delete(pvVar22);
        }
      }
      plVar27[1] = lVar20;
    }
    else {
      std::__ndk1::
      vector<I3DSceneGraphFactory::SkinnedShape,std::__ndk1::allocator<I3DSceneGraphFactory::SkinnedShape>>
      ::__append((vector<I3DSceneGraphFactory::SkinnedShape,std::__ndk1::allocator<I3DSceneGraphFactory::SkinnedShape>>
                  *)plVar27,1);
      lVar20 = plVar27[1];
    }
    I3DReader::readUint32ListAttribute
              ((I3DReader *)&local_178,"skinBindNodeIds",(vector *)(lVar20 + -0x18));
    *(GsShape **)(lVar20 + -0x20) = this_00;
  }
  plVar27 = *(long **)(*(long *)((long)param_1 + 0x280) + 0x60);
  (**(code **)(*plVar27 + 0x18))(plVar27,this_00,0xffffffff);
  *(GsShape **)(*(long *)((long)param_1 + 0x280) + 0x60) = this_00;
LAB_00933558:
  if (*(long *)(lVar3 + 0x28) != local_a0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


