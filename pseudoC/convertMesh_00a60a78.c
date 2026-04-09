// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: convertMesh
// Entry Point: 00a60a78
// Size: 1132 bytes
// Signature: undefined __cdecl convertMesh(IndexedTriangleSet * param_1, char * param_2, char * param_3, char * param_4, float * param_5, float * param_6, float * param_7)


/* FoliageLayerGraphics::convertMesh(IndexedTriangleSet*, char const*, char const*, char const*,
   float&, float&, float&) */

undefined8
FoliageLayerGraphics::convertMesh
          (IndexedTriangleSet *param_1,char *param_2,char *param_3,char *param_4,float *param_5,
          float *param_6,float *param_7)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  short sVar4;
  byte bVar5;
  int *piVar6;
  SoftInstFoliageMeshData *pSVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  Logger *this;
  ushort *puVar12;
  undefined8 uVar13;
  int iVar14;
  uint uVar15;
  ulong uVar16;
  ushort *puVar17;
  undefined8 *puVar18;
  uint uVar19;
  ulong uVar20;
  SoftInstFoliageMeshData *pSVar21;
  ulong uVar22;
  float fVar23;
  undefined8 uVar24;
  float fVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  
  *(uint *)(param_1 + 0x8c) = *(uint *)(param_1 + 0x8c) | 0x80;
  piVar6 = (int *)IndexedTriangleSet::getSubset(param_1,0);
  uVar2 = piVar6[1];
  pSVar7 = (SoftInstFoliageMeshData *)operator_new__((ulong)uVar2 << 5);
  lVar8 = TriangleSet::getPositions();
  lVar9 = TriangleSet::getTexCoords((TriangleSet *)param_1,0);
  lVar10 = TriangleSet::getNormals();
  lVar11 = TriangleSet::getTangents();
  if (uVar2 == 0) {
    fVar31 = 0.0;
    fVar33 = 32.0;
    fVar32 = -32.0;
  }
  else {
    fVar31 = 0.0;
    fVar32 = -32.0;
    fVar33 = 32.0;
    uVar22 = 0;
    bVar5 = 0;
    pSVar21 = pSVar7;
    do {
      fVar28 = 0.0;
      fVar30 = 0.0;
      fVar39 = 1.0;
      fVar29 = 1.0;
      iVar14 = (int)uVar22 + *piVar6;
      uVar3 = iVar14 * 3;
      if (lVar10 != 0) {
        fVar28 = *(float *)(lVar10 + (ulong)uVar3 * 4);
        fVar29 = *(float *)(lVar10 + (ulong)(uVar3 + 1) * 4);
        fVar30 = *(float *)(lVar10 + (ulong)(uVar3 + 2) * 4);
      }
      if (lVar11 == 0) {
        fVar40 = 0.0;
        fVar41 = 0.0;
        fVar25 = 0.0;
      }
      else {
        fVar39 = *(float *)(lVar11 + (ulong)(uint)(iVar14 * 4) * 4);
        fVar41 = *(float *)(lVar11 + (ulong)(iVar14 * 4 | 1) * 4);
        fVar40 = *(float *)(lVar11 + (ulong)(iVar14 * 4 | 2) * 4);
        fVar25 = *(float *)(lVar11 + (ulong)(iVar14 * 4 | 3) * 4);
      }
      fVar34 = *(float *)(lVar8 + (ulong)uVar3 * 4);
      fVar35 = *(float *)(lVar8 + (ulong)(uVar3 + 1) * 4);
      fVar36 = *(float *)(lVar8 + (ulong)(uVar3 + 2) * 4);
      fVar37 = *(float *)(lVar9 + (ulong)(uint)(iVar14 * 2) * 4);
      fVar38 = *(float *)(lVar9 + (ulong)(iVar14 * 2 | 1) * 4);
      if (!(bool)((((((-16.0 <= fVar34 && fVar34 <= 16.0) && -16.0 <= fVar35) && fVar35 <= 16.0) &&
                   -16.0 <= fVar36) && fVar36 <= 16.0) | bVar5)) {
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar14 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
           iVar14 != 0)) {
                    /* try { // try from 00a60ce0 to 00a60ce7 has its CatchHandler @ 00a60f04 */
          this = (Logger *)operator_new(0x38);
                    /* try { // try from 00a60cec to 00a60cef has its CatchHandler @ 00a60ef4 */
          Logger::Logger(this);
          LogManager::getInstance()::singletonLogManager = this;
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                          "Warning: XYZ range for block meshes is (-16,-16,-16)-(16,16,16); this rule is broken in foliage \'%s\' \'%s\' \'%s\'.\n"
                          ,param_2,param_3,param_4);
        bVar5 = 1;
      }
      if (fVar35 < fVar33) {
        fVar33 = fVar35;
      }
      fVar23 = (float)NEON_fmadd(fVar34,fVar34,fVar36 * fVar36);
      if (fVar32 < fVar35) {
        fVar32 = fVar35;
      }
      if (fVar31 < fVar23) {
        fVar31 = fVar23;
      }
      setSoftInstMeshVertex
                (pSVar21,fVar34,fVar35,fVar36,fVar37,fVar38,fVar28,fVar29,fVar30,fVar39,fVar41,
                 fVar40,fVar25);
      uVar22 = uVar22 + 1;
      pSVar21 = pSVar21 + 0x20;
    } while (uVar2 != uVar22);
  }
  uVar3 = piVar6[3];
  uVar22 = (ulong)uVar3;
  *param_5 = fVar33;
  *param_6 = fVar32;
  *param_7 = SQRT(fVar31);
  lVar8 = IndexedTriangleSet::getIndices16();
  puVar12 = (ushort *)operator_new__(uVar22 << 1);
  if (uVar3 == 0) goto LAB_00a60d9c;
  uVar15 = piVar6[2];
  sVar4 = (short)*piVar6;
  if (uVar3 < 0x10) {
LAB_00a60d74:
    uVar16 = 0;
  }
  else {
    uVar16 = 0;
    if ((!CARRY4(uVar15,(uint)(uVar22 - 1))) && (uVar22 - 1 >> 0x20 == 0)) {
      if ((puVar12 < (ushort *)(lVar8 + (uVar22 + uVar15) * 2)) &&
         ((ushort *)(lVar8 + (ulong)uVar15 * 2) < puVar12 + uVar22)) goto LAB_00a60d74;
      uVar16 = uVar22 & 0xfffffff0;
      puVar18 = (undefined8 *)(puVar12 + 8);
      uVar20 = uVar16;
      uVar19 = uVar15;
      do {
        puVar1 = (undefined8 *)(lVar8 + (ulong)uVar19 * 2);
        uVar20 = uVar20 - 0x10;
        uVar19 = uVar19 + 0x10;
        uVar24 = puVar1[1];
        uVar13 = *puVar1;
        uVar27 = puVar1[3];
        uVar26 = puVar1[2];
        puVar18[-1] = CONCAT26((short)((ulong)uVar24 >> 0x30) - sVar4,
                               CONCAT24((short)((ulong)uVar24 >> 0x20) - sVar4,
                                        CONCAT22((short)((ulong)uVar24 >> 0x10) - sVar4,
                                                 (short)uVar24 - sVar4)));
        puVar18[-2] = CONCAT26((short)((ulong)uVar13 >> 0x30) - sVar4,
                               CONCAT24((short)((ulong)uVar13 >> 0x20) - sVar4,
                                        CONCAT22((short)((ulong)uVar13 >> 0x10) - sVar4,
                                                 (short)uVar13 - sVar4)));
        puVar18[1] = CONCAT26((short)((ulong)uVar27 >> 0x30) - sVar4,
                              CONCAT24((short)((ulong)uVar27 >> 0x20) - sVar4,
                                       CONCAT22((short)((ulong)uVar27 >> 0x10) - sVar4,
                                                (short)uVar27 - sVar4)));
        *puVar18 = CONCAT26((short)((ulong)uVar26 >> 0x30) - sVar4,
                            CONCAT24((short)((ulong)uVar26 >> 0x20) - sVar4,
                                     CONCAT22((short)((ulong)uVar26 >> 0x10) - sVar4,
                                              (short)uVar26 - sVar4)));
        puVar18 = puVar18 + 4;
      } while (uVar20 != 0);
      if (uVar16 == uVar22) goto LAB_00a60d9c;
    }
  }
  uVar15 = uVar15 + (int)uVar16;
  lVar9 = uVar22 - uVar16;
  puVar17 = puVar12 + uVar16;
  do {
    uVar22 = (ulong)uVar15;
    uVar15 = uVar15 + 1;
    lVar9 = lVar9 + -1;
    *puVar17 = *(short *)(lVar8 + uVar22 * 2) - sVar4;
    puVar17 = puVar17 + 1;
  } while (lVar9 != 0);
LAB_00a60d9c:
  if (((InstancedGeometryManager::getInstance()::s_instance & 1) == 0) &&
     (iVar14 = __cxa_guard_acquire(&InstancedGeometryManager::getInstance()::s_instance),
     iVar14 != 0)) {
                    /* try { // try from 00a60eac to 00a60eb7 has its CatchHandler @ 00a60ee4 */
    InstancedGeometryManager::InstancedGeometryManager
              ((InstancedGeometryManager *)InstancedGeometryManager::getInstance()::s_instance);
    __cxa_atexit(InstancedGeometryManager::~InstancedGeometryManager,
                 InstancedGeometryManager::getInstance()::s_instance,&PTR_LOOP_00fd8de0);
    __cxa_guard_release(&InstancedGeometryManager::getInstance()::s_instance);
  }
  uVar13 = InstancedGeometryManager::registerInstancedMesh
                     ((InstancedGeometryManager *)
                      InstancedGeometryManager::getInstance()::s_instance,0x20,uVar2,pSVar7,uVar3,
                      puVar12,true,0);
  operator_delete__(pSVar7);
  operator_delete__(puVar12);
  return uVar13;
}


