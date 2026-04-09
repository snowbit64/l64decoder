// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: IndexedTriangleSetEmitterShape
// Entry Point: 008d9e60
// Size: 1144 bytes
// Signature: undefined __thiscall IndexedTriangleSetEmitterShape(IndexedTriangleSetEmitterShape * this, GsShape * param_1, ParticleSystem * param_2, uint param_3, bool param_4)


/* IndexedTriangleSetEmitterShape::IndexedTriangleSetEmitterShape(GsShape*, ParticleSystem*,
   unsigned int, bool) */

void __thiscall
IndexedTriangleSetEmitterShape::IndexedTriangleSetEmitterShape
          (IndexedTriangleSetEmitterShape *this,GsShape *param_1,ParticleSystem *param_2,
          uint param_3,bool param_4)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  void *pvVar5;
  float *pfVar6;
  ushort *puVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  uint uVar11;
  long lVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  *(undefined ***)this = &PTR__IndexedTriangleSetEmitterShape_00fde388;
  *(GsShape **)(this + 8) = param_1;
  if ((param_1 == (GsShape *)0x0) || (*(long *)(param_1 + 0x170) == 0)) {
    *(undefined8 *)(this + 0x20) = 0;
    *(undefined4 *)(this + 0x1c) = 0;
  }
  else {
    lVar3 = Geometry::getBoundingVolume();
    lVar12 = *(long *)(this + 8);
    RawTransformGroup::updateWorldTransformation();
    uVar13 = NEON_fmadd(*(undefined4 *)(lVar3 + 0xc),*(undefined4 *)(lVar12 + 0xb8),
                        *(float *)(lVar3 + 0x10) * *(float *)(lVar12 + 200));
    fVar14 = (float)NEON_fmadd(*(undefined4 *)(lVar3 + 0x14),*(undefined4 *)(lVar12 + 0xd8),uVar13);
    *(float *)(this + 0x1c) = fVar14 + *(float *)(lVar12 + 0xe8);
    uVar13 = NEON_fmadd(*(undefined4 *)(lVar3 + 0xc),*(undefined4 *)(lVar12 + 0xbc),
                        *(float *)(lVar3 + 0x10) * *(float *)(lVar12 + 0xcc));
    fVar14 = (float)NEON_fmadd(*(undefined4 *)(lVar3 + 0x14),*(undefined4 *)(lVar12 + 0xdc),uVar13);
    *(float *)(this + 0x20) = fVar14 + *(float *)(lVar12 + 0xec);
    uVar13 = NEON_fmadd(*(undefined4 *)(lVar3 + 0xc),*(undefined4 *)(lVar12 + 0xc0),
                        *(float *)(lVar3 + 0x10) * *(float *)(lVar12 + 0xd0));
    fVar14 = (float)NEON_fmadd(*(undefined4 *)(lVar3 + 0x14),*(undefined4 *)(lVar12 + 0xe0),uVar13);
    *(float *)(this + 0x24) = fVar14 + *(float *)(lVar12 + 0xf0);
  }
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  lVar3 = Geometry::getCollisionProxyMesh();
  uVar1 = *(uint *)(lVar3 + 0x8c);
  *(uint *)(lVar3 + 0x8c) = uVar1 | 4;
  if (uVar1 == 0) {
    if ((*(long *)(lVar3 + 0x10) == 0) || (!param_4)) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0))
      {
                    /* try { // try from 008da258 to 008da263 has its CatchHandler @ 008da2dc */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "Error: Particle system emitter mesh \'%s\' is not marked as an emitter or as a CPU Mesh.\n"
                         ,*(undefined8 *)(*(long *)(*(long *)(this + 8) + 0x170) + 0x18));
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0))
      {
                    /* try { // try from 008da2a0 to 008da2ab has its CatchHandler @ 008da2d8 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "Error: Particle system emitter cannot be initialized\n");
      goto LAB_008da158;
    }
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0)) {
                    /* try { // try from 008da210 to 008da21b has its CatchHandler @ 008da2e0 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                      "Warning: Particle system emitter mesh \'%s\' is not marked as an emitter or as a CPU Mesh - this will not work on consoles..\n"
                      ,*(undefined8 *)(*(long *)(*(long *)(this + 8) + 0x170) + 0x18));
  }
  uVar4 = IndexedTriangleSet::is16Bit();
  if ((uVar4 & 1) != 0) {
    uVar1 = IndexedTriangleSet::getNumIndices();
    pvVar5 = operator_new__((ulong)uVar1 / 3 << 2);
    *(void **)(this + 0x10) = pvVar5;
    if (0x302 < uVar1) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0))
      {
                    /* try { // try from 008da1c8 to 008da1d3 has its CatchHandler @ 008da2e4 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                        "Warning: Particle system emitter mesh is too large at %u triangles (max 256) - shape \'%s\'.\n"
                        ,(ulong)uVar1 / 3,*(undefined8 *)(param_1 + 8));
    }
    lVar3 = TriangleSet::getPositions();
    lVar12 = IndexedTriangleSet::getIndices16();
    if (uVar1 < 3) {
      return;
    }
    uVar11 = uVar1 / 3;
    if (uVar1 / 3 < 2) {
      uVar11 = 1;
    }
    uVar4 = (ulong)uVar11;
    pfVar6 = *(float **)(this + 0x10);
    puVar7 = (ushort *)(lVar12 + 4);
    do {
      uVar4 = uVar4 - 1;
      pfVar8 = (float *)(lVar3 + (ulong)puVar7[-2] * 0xc);
      pfVar9 = (float *)(lVar3 + (ulong)puVar7[-1] * 0xc);
      pfVar10 = (float *)(lVar3 + (ulong)*puVar7 * 0xc);
      fVar16 = *pfVar9 - *pfVar8;
      fVar19 = pfVar9[1] - pfVar8[1];
      fVar15 = pfVar10[1] - pfVar8[1];
      fVar20 = pfVar9[2] - pfVar8[2];
      fVar17 = pfVar10[2] - pfVar8[2];
      fVar14 = *pfVar10 - *pfVar8;
      fVar21 = (float)NEON_fmadd(fVar20,fVar14,fVar17 * -fVar16);
      uVar18 = NEON_fmadd(fVar19,fVar17,fVar15 * -fVar20);
      uVar13 = NEON_fmadd(fVar16,fVar15,fVar14 * -fVar19);
      uVar18 = NEON_fmadd(uVar18,uVar18,fVar21 * fVar21);
      fVar14 = (float)NEON_fmadd(uVar13,uVar13,uVar18);
      fVar14 = *(float *)(this + 0x18) + SQRT(fVar14) * 0.5;
      *(float *)(this + 0x18) = fVar14;
      *pfVar6 = fVar14;
      pfVar6 = pfVar6 + 1;
      puVar7 = puVar7 + 3;
    } while (uVar4 != 0);
    return;
  }
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0)) {
                    /* try { // try from 008da180 to 008da18b has its CatchHandler @ 008da2e8 */
    LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                     "Error: Particle systems do not support 32bit index emitter meshes \'%s\'.\n",
                     *(undefined8 *)(param_1 + 8));
LAB_008da158:
  *(undefined8 *)(this + 8) = 0;
  return;
}


