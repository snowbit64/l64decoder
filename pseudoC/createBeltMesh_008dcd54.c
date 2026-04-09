// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createBeltMesh
// Entry Point: 008dcd54
// Size: 13808 bytes
// Signature: undefined __cdecl createBeltMesh(float param_1, float param_2, float param_3, float param_4, vector * param_5, TransformGroup * param_6, TransformGroup * param_7, vector * param_8, TransformGroup * param_9, TransformGroup * * param_10, vector * param_11, uint * param_12, float * param_13)


/* WARNING: Removing unreachable block (ram,0x008de724) */
/* WARNING: Removing unreachable block (ram,0x008de788) */
/* WARNING: Removing unreachable block (ram,0x008e0318) */
/* WARNING: Removing unreachable block (ram,0x008e0320) */
/* WARNING: Type propagation algorithm not settling */
/* TensionBeltGeometryUtil::createBeltMesh(float, float, float, float,
   std::__ndk1::vector<TensionBeltGeometryUtil::Attacher,
   std::__ndk1::allocator<TensionBeltGeometryUtil::Attacher> > const&, TransformGroup*,
   TransformGroup*, std::__ndk1::vector<std::__ndk1::pair<GsShape*,
   std::__ndk1::pair<std::__ndk1::pair<float, float>, std::__ndk1::pair<float, float> > >,
   std::__ndk1::allocator<std::__ndk1::pair<GsShape*, std::__ndk1::pair<std::__ndk1::pair<float,
   float>, std::__ndk1::pair<float, float> > > > > const&, TransformGroup*, TransformGroup**,
   std::__ndk1::vector<std::__ndk1::pair<Vector3, Vector3>,
   std::__ndk1::allocator<std::__ndk1::pair<Vector3, Vector3> > > const&, unsigned int&, float&) */

IndexedTriangleSet *
TensionBeltGeometryUtil::createBeltMesh
          (float param_1,float param_2,float param_3,float param_4,vector *param_5,
          TransformGroup *param_6,TransformGroup *param_7,vector *param_8,TransformGroup *param_9,
          TransformGroup **param_10,vector *param_11,uint *param_12,float *param_13)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ushort uVar3;
  ushort uVar4;
  undefined2 uVar5;
  ulong uVar6;
  long lVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  TriangleSet *this;
  long lVar16;
  long lVar17;
  long lVar18;
  float *__dest;
  undefined8 *puVar19;
  int *piVar20;
  void *pvVar21;
  IndexedTriangleSet *this_00;
  TransformGroup *this_01;
  undefined4 *puVar22;
  long lVar23;
  long **pplVar24;
  long *plVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  int iVar30;
  uint uVar31;
  ulong uVar32;
  ulong uVar33;
  float *pfVar34;
  ulong uVar35;
  long lVar36;
  size_t sVar37;
  ulong uVar38;
  long **pplVar39;
  float *pfVar40;
  uint uVar41;
  void *pvVar42;
  int iVar43;
  int iVar44;
  ulong uVar45;
  int iVar46;
  float *pfVar47;
  long **pplVar48;
  int *piVar49;
  int *piVar50;
  float fVar51;
  float fVar52;
  undefined8 uVar53;
  undefined4 uVar54;
  float fVar55;
  undefined4 uVar56;
  undefined4 uVar57;
  undefined8 uVar58;
  float fVar59;
  float fVar60;
  undefined4 uVar61;
  undefined8 uVar62;
  float fVar63;
  float fVar64;
  undefined4 uVar65;
  float fVar66;
  float fVar67;
  undefined4 uVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  undefined8 uVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  undefined4 uVar83;
  undefined4 uVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  undefined4 uVar88;
  undefined4 uVar89;
  undefined4 uVar90;
  ulong local_2f0;
  float local_2e0;
  ulong local_2a8;
  void *local_290;
  undefined8 *local_288;
  undefined8 *local_280;
  int *local_278;
  int *local_270;
  int *local_268;
  undefined8 *local_260;
  undefined8 *local_258;
  undefined8 *local_250;
  float *local_248;
  float *local_240;
  undefined8 *local_230;
  undefined8 *local_228;
  undefined8 *local_220;
  float *local_218;
  float *local_210;
  void *local_200;
  void *local_1f8;
  undefined8 local_1f0;
  void *local_1e8;
  void *local_1e0;
  undefined8 local_1d8;
  float *local_1d0;
  float *local_1c8;
  float *local_1c0;
  float *local_1b8;
  float *local_1b0;
  float *local_1a8;
  undefined8 *local_1a0;
  undefined8 *local_198;
  undefined8 *local_190;
  long **local_188;
  undefined8 local_180;
  long local_178;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_15c;
  float local_158;
  float local_154;
  float local_150;
  float local_14c;
  float local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined8 local_138;
  float fStack_130;
  undefined4 uStack_12c;
  float local_128;
  float local_124;
  float local_120;
  float fStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 local_110;
  undefined4 uStack_10c;
  float local_108;
  float local_104;
  float local_100;
  float fStack_fc;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  Plane aPStack_e0 [12];
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c0;
  float fStack_bc;
  float local_b8;
  long local_b0;
  
  lVar7 = tpidr_el0;
  local_b0 = *(long *)(lVar7 + 0x28);
  RawTransformGroup::updateWorldTransformation();
  RawTransformGroup::updateWorldTransformation();
  fVar59 = *(float *)(param_7 + 0xec);
  fVar51 = *(float *)(param_7 + 0xf0);
  local_b8 = *(float *)(param_6 + 0xf0);
  local_c0 = *(float *)(param_6 + 0xe8);
  fStack_bc = *(float *)(param_6 + 0xec);
  fVar69 = fVar51 - local_b8;
  fVar72 = *(float *)(param_7 + 0xe8);
  fVar67 = fVar59 - fStack_bc;
  fVar71 = 1.0;
  fVar70 = fVar72 - local_c0;
  local_cc = (float)NEON_fmadd(*(float *)(param_6 + 0xd0),fVar70,fVar69 * -*(float *)(param_6 + 200)
                              );
  local_d0 = (float)NEON_fmadd(*(float *)(param_6 + 0xcc),fVar69,
                               fVar67 * -*(float *)(param_6 + 0xd0));
  local_c8 = (float)NEON_fmadd(*(float *)(param_6 + 200),fVar67,fVar70 * -*(float *)(param_6 + 0xcc)
                              );
  uVar54 = NEON_fmadd(local_d0,local_d0,local_cc * local_cc);
  fVar60 = (float)NEON_fmadd(local_c8,local_c8,uVar54);
  fVar55 = 1.0;
  if (1e-06 < fVar60) {
    fVar55 = 1.0 / SQRT(fVar60);
  }
  local_d0 = local_d0 * fVar55;
  uVar62 = *(undefined8 *)(param_6 + 0xb8);
  local_cc = local_cc * fVar55;
  local_c8 = local_c8 * fVar55;
  uVar58 = *(undefined8 *)(param_7 + 0xb8);
  uVar61 = *(undefined4 *)(param_6 + 0xc0);
  uVar56 = *(undefined4 *)(param_7 + 0xc0);
  Plane::Plane(aPStack_e0);
  Plane::set(aPStack_e0,(Vector3 *)&local_c0,(Vector3 *)&local_d0);
  fVar64 = local_b8;
  fVar75 = fStack_bc;
  fVar74 = local_c0;
  fVar63 = local_c8;
  fVar60 = local_cc;
  fVar55 = local_d0;
  uVar54 = NEON_fmadd(fVar70,fVar70,fVar67 * fVar67);
  fVar52 = (float)NEON_fmadd(fVar69,fVar69,uVar54);
  if (1e-06 < fVar52) {
    fVar71 = 1.0 / SQRT(fVar52);
  }
  local_1a0 = (undefined8 *)0x0;
  local_198 = (undefined8 *)0x0;
  local_190 = (undefined8 *)0x0;
                    /* try { // try from 008dcef0 to 008dcef7 has its CatchHandler @ 008e03a8 */
  puVar14 = (undefined8 *)operator_new(0x20);
  fVar69 = fVar69 * fVar71;
  fVar70 = fVar70 * fVar71;
  fVar67 = fVar67 * fVar71;
  local_198 = puVar14 + 4;
  *(float *)puVar14 = fVar74;
  *(float *)((long)puVar14 + 4) = fVar75;
  fVar71 = (float)NEON_fmadd(fVar63,fVar70,fVar69 * -fVar55);
  *(float *)(puVar14 + 1) = fVar64;
  uVar68 = NEON_fmadd(fVar60,fVar69,fVar67 * -fVar63);
  uVar65 = NEON_fmadd(fVar55,fVar67,fVar70 * -fVar60);
  uVar57 = NEON_fmadd(fVar74 - fVar74,fVar70,fVar67 * (fVar75 - fVar75));
  uVar54 = NEON_fmadd(fVar74 - fVar74,uVar68,fVar71 * (fVar75 - fVar75));
  *(undefined8 *)((long)puVar14 + 0xc) = uVar62;
  uVar57 = NEON_fmadd(fVar64 - fVar64,fVar69,uVar57);
  uVar54 = NEON_fmadd(fVar64 - fVar64,uVar65,uVar54);
  *(undefined4 *)((long)puVar14 + 0x14) = uVar61;
  *(undefined4 *)(puVar14 + 3) = uVar57;
  *(undefined4 *)((long)puVar14 + 0x1c) = uVar54;
  local_1a0 = puVar14;
  local_190 = local_198;
                    /* try { // try from 008dcf90 to 008dcf97 has its CatchHandler @ 008e03a4 */
  local_1a0 = (undefined8 *)operator_new(0x40);
  puVar19 = local_1a0 + 8;
  *(float *)(local_1a0 + 4) = fVar72;
  *(float *)(local_1a0 + 5) = fVar51;
  *(float *)((long)local_1a0 + 0x24) = fVar59;
  *(undefined8 *)((long)local_1a0 + 0x2c) = uVar58;
  *(undefined4 *)((long)local_1a0 + 0x34) = uVar56;
  uVar56 = NEON_fmadd(fVar72 - fVar74,fVar70,fVar67 * (fVar59 - fVar75));
  uVar54 = NEON_fmadd(fVar72 - fVar74,uVar68,fVar71 * (fVar59 - fVar75));
  uVar58 = *puVar14;
  uVar76 = puVar14[3];
  uVar62 = puVar14[2];
  uVar56 = NEON_fmadd(fVar51 - fVar64,fVar69,uVar56);
  uVar54 = NEON_fmadd(fVar51 - fVar64,uVar65,uVar54);
  local_1a0[1] = puVar14[1];
  *local_1a0 = uVar58;
  local_1a0[3] = uVar76;
  local_1a0[2] = uVar62;
  *(undefined4 *)(local_1a0 + 7) = uVar56;
  *(undefined4 *)((long)local_1a0 + 0x3c) = uVar54;
  local_198 = puVar19;
  local_190 = puVar19;
  operator_delete(puVar14);
  lVar16 = *(long *)param_11;
  if (*(long *)(param_11 + 8) != lVar16) {
    uVar38 = 0;
    do {
      puVar14 = local_1a0;
      puVar22 = (undefined4 *)(lVar16 + uVar38 * 0x18);
      local_138 = *(undefined8 *)(puVar22 + 3);
      fStack_130 = (float)puVar22[5];
      uVar54 = NEON_fmadd(*puVar22,local_d0,(float)puVar22[1] * local_cc);
      fVar51 = (float)NEON_fmadd(puVar22[2],local_c8,uVar54);
      fVar51 = -local_d4 - fVar51;
      fVar55 = (float)NEON_fmadd(local_cc,fVar51,puVar22[1]);
      fVar59 = (float)NEON_fmadd(local_d0,fVar51,*puVar22);
      fVar60 = (float)NEON_fmadd(local_c8,fVar51,puVar22[2]);
      uVar54 = NEON_fmadd(fVar59 - fVar74,uVar68,fVar71 * (fVar55 - fVar75));
      fVar51 = (float)NEON_fmadd(fVar60 - fVar64,uVar65,uVar54);
      if (fVar51 <= -0.0001) {
        uVar54 = NEON_fmadd(fVar59 - fVar74,fVar70,fVar67 * (fVar55 - fVar75));
        uVar54 = NEON_fmadd(fVar60 - fVar64,fVar69,uVar54);
        if (puVar19 == local_190) {
          uVar45 = (long)puVar19 - (long)local_1a0;
          uVar26 = ((long)uVar45 >> 5) + 1;
          if (uVar26 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__vector_base_common<true>::__throw_length_error();
          }
          if (uVar26 <= (ulong)((long)uVar45 >> 4)) {
            uVar26 = (long)uVar45 >> 4;
          }
          if (0x7fffffffffffffdf < uVar45) {
            uVar26 = 0x7ffffffffffffff;
          }
          if (uVar26 >> 0x3b != 0) {
                    /* try { // try from 008e027c to 008e028f has its CatchHandler @ 008e0414 */
                    /* WARNING: Subroutine does not return */
            FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
          }
                    /* try { // try from 008dd184 to 008dd187 has its CatchHandler @ 008e03fc */
          puVar15 = (undefined8 *)operator_new(uVar26 << 5);
          puVar19 = puVar15 + ((long)uVar45 >> 5) * 4;
          *(float *)puVar19 = fVar59;
          *(float *)((long)puVar19 + 4) = fVar55;
          *(float *)(puVar19 + 1) = fVar60;
          *(undefined8 *)((long)puVar19 + 0xc) = local_138;
          *(float *)((long)puVar19 + 0x14) = fStack_130;
          *(undefined4 *)(puVar19 + 3) = uVar54;
          *(float *)((long)puVar19 + 0x1c) = fVar51;
          if (0 < (long)uVar45) {
            memcpy(puVar15,puVar14,uVar45);
          }
          puVar19 = puVar19 + 4;
          local_190 = puVar15 + uVar26 * 4;
          local_1a0 = puVar15;
          local_198 = puVar19;
          if (puVar14 != (undefined8 *)0x0) {
            operator_delete(puVar14);
          }
        }
        else {
          *(float *)puVar19 = fVar59;
          *(float *)((long)puVar19 + 4) = fVar55;
          *(float *)(puVar19 + 1) = fVar60;
          *(undefined4 *)(puVar19 + 3) = uVar54;
          *(float *)((long)puVar19 + 0x1c) = fVar51;
          *(undefined8 *)((long)puVar19 + 0xc) = local_138;
          *(float *)((long)puVar19 + 0x14) = fStack_130;
          puVar19 = puVar19 + 4;
          local_198 = puVar19;
        }
      }
      lVar16 = *(long *)param_11;
      uVar38 = (ulong)((int)uVar38 + 1);
      uVar26 = (*(long *)(param_11 + 8) - lVar16 >> 3) * -0x5555555555555555;
    } while (uVar38 <= uVar26 && uVar26 - uVar38 != 0);
  }
  *param_12 = 0;
  uVar38 = (*(long *)(param_8 + 8) - *(long *)param_8 >> 3) * -0x5555555555555555;
  if ((int)uVar38 != 0) {
    uVar26 = 0;
    do {
                    /* try { // try from 008dd254 to 008dd257 has its CatchHandler @ 008e043c */
      this = (TriangleSet *)Geometry::getCollisionProxyMesh();
      lVar36 = *(long *)(*(long *)param_8 + uVar26 * 0x18);
                    /* try { // try from 008dd268 to 008dd26f has its CatchHandler @ 008e0440 */
      RawTransformGroup::updateWorldTransformation();
                    /* try { // try from 008dd270 to 008dd27b has its CatchHandler @ 008e0444 */
      lVar16 = IndexedTriangleSet::getIndices16();
                    /* try { // try from 008dd27c to 008dd287 has its CatchHandler @ 008e0448 */
      lVar17 = TriangleSet::getPositions();
                    /* try { // try from 008dd288 to 008dd2fb has its CatchHandler @ 008e0464 */
      lVar18 = TriangleSet::getTexCoords(this,0);
      if ((lVar16 != 0 && lVar17 != 0) && lVar18 != 0) {
        uVar41 = 0;
        lVar23 = *(long *)param_8 + uVar26 * 0x18;
        fVar59 = *(float *)(lVar23 + 8);
        fVar60 = *(float *)(lVar23 + 0xc);
        fVar55 = *(float *)(lVar23 + 0x10);
        fVar51 = *(float *)(lVar23 + 0x14);
        local_180 = (long **)0x0;
        local_178 = 0;
        local_188 = (long **)&local_180;
LAB_008dd33c:
                    /* try { // try from 008dd33c to 008dd343 has its CatchHandler @ 008e05d8 */
        uVar12 = IndexedTriangleSet::getNumIndices();
        if (uVar41 < uVar12) {
          lVar23 = 0;
          uVar3 = *(ushort *)(lVar16 + (ulong)uVar41 * 2);
          uVar4 = *(ushort *)(lVar16 + (ulong)(uVar41 + 1) * 2);
          uVar5 = *(undefined2 *)(lVar16 + (ulong)(uVar41 + 2) * 2);
          local_f8._0_4_ = CONCAT22(uVar4,uVar3);
          local_f8 = (void *)CONCAT26(uVar5,CONCAT24(uVar3,(undefined4)local_f8));
LAB_008dd380:
          fVar72 = *(float *)(lVar18 + (ulong)uVar3 * 8);
          bVar10 = fVar59 <= fVar72;
          if ((bVar10 && fVar72 == fVar60 || bVar10 && fVar72 < fVar60) &&
             (fVar72 = *(float *)(lVar18 + (ulong)uVar4 * 8), bVar10 = fVar55 <= fVar72,
             bVar10 && fVar72 == fVar51 || bVar10 && fVar72 < fVar51)) {
            uVar12 = (uint)uVar3;
            if (uVar3 <= uVar4) {
              uVar12 = (uint)uVar4;
            }
            uVar31 = (uint)uVar4;
            if (uVar3 <= uVar4) {
              uVar31 = (uint)uVar3;
            }
            pplVar48 = (long **)&local_180;
            pplVar39 = (long **)&local_180;
            pplVar24 = local_180;
joined_r0x008dd3c0:
            if (pplVar24 != (long **)0x0) {
              do {
                pplVar39 = pplVar24;
                if (*(ushort *)((long)pplVar39 + 0x1a) <= uVar31) {
                  if (*(ushort *)((long)pplVar39 + 0x1a) < uVar31) goto LAB_008dd404;
                  if (*(ushort *)((long)pplVar39 + 0x1c) <= uVar12) goto code_r0x008dd3fc;
                }
                pplVar24 = (long **)*pplVar39;
                pplVar48 = pplVar39;
                if ((long **)*pplVar39 == (long **)0x0) {
                  plVar25 = *pplVar39;
                  goto joined_r0x008dd434;
                }
              } while( true );
            }
            goto LAB_008dd420;
          }
          goto LAB_008dd5c8;
        }
        std::__ndk1::
        __tree<std::__ndk1::pair<unsigned_short,unsigned_short>,std::__ndk1::less<std::__ndk1::pair<unsigned_short,unsigned_short>>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_short,unsigned_short>>>
        ::destroy((__tree<std::__ndk1::pair<unsigned_short,unsigned_short>,std::__ndk1::less<std::__ndk1::pair<unsigned_short,unsigned_short>>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_short,unsigned_short>>>
                   *)&local_188,(__tree_node *)local_180);
        goto LAB_008dd604;
      }
      if ((DAT_0107e090 & 1) == 0) {
        DAT_0107e090 = 1;
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar13 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
           iVar13 != 0)) {
                    /* try { // try from 008dd628 to 008dd633 has its CatchHandler @ 008e0344 */
          LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                          "Warning: Can\'t create tensions belt with invalid shape %s.\n",
                          *(undefined8 *)(*(long *)(*(long *)param_8 + uVar26 * 0x18) + 8));
      }
LAB_008dd604:
      uVar26 = uVar26 + 1;
      puVar19 = local_198;
    } while (uVar26 != (uVar38 & 0xffffffff));
  }
  local_f8 = (void *)0x0;
  local_f0 = (void *)0x0;
  local_e8 = 0;
                    /* try { // try from 008dd690 to 008dd69b has its CatchHandler @ 008e0394 */
  ConvexHull2DUtil::createHull
            ((uchar *)(local_1a0 + 3),0x20,(uint)((ulong)((long)puVar19 - (long)local_1a0) >> 5),
             (vector *)&local_f8);
  uVar38 = (long)local_f0 - (long)local_f8;
  if (uVar38 == 0) {
    pfVar40 = (float *)0x0;
    local_1b8 = (float *)0x0;
    local_1b0 = (float *)0x0;
    local_1a8 = (float *)0x0;
    local_1d0 = (float *)0x0;
    local_1c8 = (float *)0x0;
    local_1c0 = (float *)0x0;
  }
  else {
    uVar45 = 0;
    uVar26 = (long)uVar38 >> 2;
    do {
      if (*(int *)((long)local_f8 + uVar45 * 4) == 0) goto LAB_008dd6c8;
      uVar45 = (ulong)((int)uVar45 + 1);
    } while (uVar45 < uVar26);
    uVar45 = 0;
LAB_008dd6c8:
    pfVar40 = (float *)0x0;
    local_1b8 = (float *)0x0;
    local_1b0 = (float *)0x0;
    local_1a8 = (float *)0x0;
    local_1d0 = (float *)0x0;
    local_1c8 = (float *)0x0;
    local_1c0 = (float *)0x0;
    if ((int)(uVar38 >> 2) != 0) {
      iVar13 = (int)uVar45;
      uVar38 = 0;
      do {
        puVar19 = local_1a0;
        pfVar47 = local_1b8;
        uVar27 = (ulong)(uint)(iVar13 + (int)uVar38);
        uVar29 = uVar38 + 1;
        fVar51 = 1.0;
        uVar33 = 0;
        if (uVar26 != 0) {
          uVar33 = uVar27 / uVar26;
        }
        lVar16 = uVar27 - uVar33 * uVar26;
        if (1 < uVar38) {
          uVar33 = uVar26 - 1;
          fVar51 = 1.0;
          if (uVar38 < uVar33) {
            uVar32 = (ulong)(uint)(iVar13 + (int)uVar29);
            uVar27 = 0;
            if (uVar26 != 0) {
              uVar27 = uVar32 / uVar26;
            }
            uVar28 = (ulong)(uint)(iVar13 + -1 + (int)uVar38);
            uVar35 = 0;
            if (uVar26 != 0) {
              uVar35 = uVar28 / uVar26;
            }
            puVar14 = local_1a0 +
                      (ulong)*(uint *)((long)local_f8 + (uVar32 - uVar27 * uVar26) * 4) * 4;
            uVar27 = (ulong)*(uint *)((long)local_f8 + (uVar28 - uVar35 * uVar26) * 4);
            puVar15 = local_1a0 + (ulong)*(uint *)((long)local_f8 + lVar16 * 4) * 4;
            fVar72 = *(float *)puVar15;
            fVar63 = *(float *)((long)puVar15 + 4);
            puVar1 = local_1a0 + uVar27 * 4;
            fVar60 = *(float *)(puVar15 + 1);
            fVar52 = fVar72 - *(float *)puVar1;
            fVar66 = fVar60 - *(float *)(puVar1 + 1);
            fVar73 = fVar63 - *(float *)((long)puVar1 + 4);
            fVar59 = fVar52 + (*(float *)puVar14 - fVar72);
            fVar55 = fVar66 + (*(float *)(puVar14 + 1) - fVar60);
            fVar77 = fVar73 + (*(float *)((long)puVar14 + 4) - fVar63);
            fVar51 = (float)NEON_fmadd(fVar55,local_d0,local_c8 * -fVar59);
            fVar55 = (float)NEON_fmadd(fVar77,local_c8,local_cc * -fVar55);
            fVar59 = (float)NEON_fmadd(fVar59,local_cc,local_d0 * -fVar77);
            uVar54 = NEON_fmadd(fVar55,fVar55,fVar51 * fVar51);
            fVar78 = (float)NEON_fmadd(fVar59,fVar59,uVar54);
            fVar77 = 1.0;
            if (1e-06 < fVar78) {
              fVar77 = 1.0 / SQRT(fVar78);
            }
            puVar14 = (undefined8 *)((long)puVar15 + 0xc);
            pfVar34 = (float *)((long)puVar15 + 0x14);
            uVar56 = NEON_fmadd(local_d0,*(undefined4 *)puVar14,local_cc * *(float *)(puVar15 + 2));
            uVar54 = NEON_fmadd(fVar55 * fVar77,*(undefined4 *)puVar14,
                                fVar51 * fVar77 * *(float *)(puVar15 + 2));
            fVar78 = (float)NEON_fmadd(local_c8,*pfVar34,uVar56);
            uVar54 = NEON_fmadd(fVar59 * fVar77,*pfVar34,uVar54);
            fVar78 = (float)NEON_fmadd(uVar54,uVar54,fVar78 * fVar78);
            if (fVar78 < 0.36) {
              uVar35 = uVar26 & 0xffffffff;
              uVar32 = 0;
              if (uVar35 != 0) {
                uVar32 = (uVar33 + uVar45) / uVar35;
              }
              do {
                iVar30 = (int)uVar38;
                uVar28 = (uVar33 + uVar45) - uVar32 * uVar35;
                if (uVar33 <= iVar30 + 1) break;
                uVar41 = iVar13 + iVar30;
                uVar38 = 0;
                if (uVar26 != 0) {
                  uVar38 = uVar41 / uVar26;
                }
                uVar28 = 0;
                if (uVar26 != 0) {
                  uVar28 = (uVar41 + 1) / uVar26;
                }
                uVar28 = (ulong)(uVar41 + 1) - uVar28 * uVar26;
                uVar6 = 0;
                if (uVar26 != 0) {
                  uVar6 = (uVar41 + 2) / uVar26;
                }
                puVar15 = local_1a0 + (ulong)*(uint *)((long)local_f8 + uVar28 * 4) * 4;
                puVar1 = local_1a0 +
                         (ulong)*(uint *)((long)local_f8 + ((ulong)uVar41 - uVar38 * uVar26) * 4) *
                         4;
                puVar2 = local_1a0 +
                         (ulong)*(uint *)((long)local_f8 +
                                         ((ulong)(uVar41 + 2) - uVar6 * uVar26) * 4) * 4;
                fVar82 = (*(float *)puVar15 - *(float *)puVar1) +
                         (*(float *)puVar2 - *(float *)puVar15);
                fVar79 = (*(float *)(puVar15 + 1) - *(float *)(puVar1 + 1)) +
                         (*(float *)(puVar2 + 1) - *(float *)(puVar15 + 1));
                fVar78 = (*(float *)((long)puVar15 + 4) - *(float *)((long)puVar1 + 4)) +
                         (*(float *)((long)puVar2 + 4) - *(float *)((long)puVar15 + 4));
                fVar80 = (float)NEON_fmadd(fVar79,local_d0,local_c8 * -fVar82);
                fVar79 = (float)NEON_fmadd(fVar78,local_c8,local_cc * -fVar79);
                fVar78 = (float)NEON_fmadd(fVar82,local_cc,local_d0 * -fVar78);
                uVar54 = NEON_fmadd(fVar79,fVar79,fVar80 * fVar80);
                fVar81 = (float)NEON_fmadd(fVar78,fVar78,uVar54);
                fVar82 = 1.0;
                if (1e-06 < fVar81) {
                  fVar82 = 1.0 / SQRT(fVar81);
                }
                uVar38 = (ulong)(iVar30 + 1);
                uVar56 = NEON_fmadd(local_d0,*(undefined4 *)((long)puVar15 + 0xc),
                                    local_cc * *(float *)(puVar15 + 2));
                uVar54 = NEON_fmadd(fVar79 * fVar82,*(undefined4 *)((long)puVar15 + 0xc),
                                    fVar80 * fVar82 * *(float *)(puVar15 + 2));
                fVar79 = (float)NEON_fmadd(local_c8,*(undefined4 *)((long)puVar15 + 0x14),uVar56);
                uVar54 = NEON_fmadd(fVar78 * fVar82,*(undefined4 *)((long)puVar15 + 0x14),uVar54);
                fVar78 = (float)NEON_fmadd(uVar54,uVar54,fVar79 * fVar79);
              } while (fVar78 < 0.36);
              uVar54 = NEON_fmadd(fVar52,fVar52,fVar73 * fVar73);
              puVar15 = local_1a0 + (ulong)*(uint *)((long)local_f8 + (uVar28 & 0xffffffff) * 4) * 4
              ;
              fVar52 = (float)NEON_fmadd(fVar66,fVar66,uVar54);
              fVar63 = *(float *)((long)puVar15 + 4) - fVar63;
              uVar54 = NEON_fmadd(*(float *)puVar15 - fVar72,*(float *)puVar15 - fVar72,
                                  fVar63 * fVar63);
              uVar58 = *(undefined8 *)((long)local_1a0 + uVar27 * 0x20 + 0xc);
              fVar60 = (float)NEON_fmadd(*(float *)(puVar15 + 1) - fVar60,
                                         *(float *)(puVar15 + 1) - fVar60,uVar54);
              fVar63 = SQRT(fVar52) / (SQRT(fVar52) + SQRT(fVar60));
              fVar60 = ((float)*(undefined8 *)((long)puVar15 + 0xc) - (float)uVar58) * fVar63;
              fVar72 = ((float)((ulong)*(undefined8 *)((long)puVar15 + 0xc) >> 0x20) -
                       (float)((ulong)uVar58 >> 0x20)) * fVar63;
              fVar63 = fVar63 * (*(float *)((long)puVar15 + 0x14) -
                                *(float *)((long)local_1a0 + uVar27 * 0x20 + 0x14));
              *puVar14 = CONCAT44(fVar72,fVar60);
              uVar58 = *(undefined8 *)((long)local_1a0 + uVar27 * 0x20 + 0xc);
              *pfVar34 = fVar63;
              fVar60 = fVar60 + (float)uVar58;
              fVar72 = fVar72 + (float)((ulong)uVar58 >> 0x20);
              fVar63 = fVar63 + *(float *)((long)local_1a0 + uVar27 * 0x20 + 0x14);
              *puVar14 = CONCAT44(fVar72,fVar60);
              *pfVar34 = fVar63;
              fVar66 = (float)NEON_fmadd(fVar63,fVar63,fVar72 * fVar72 + fVar60 * fVar60);
              fVar52 = 1.0;
              if (1e-06 < fVar66) {
                fVar52 = 1.0 / SQRT(fVar66);
              }
              fVar60 = fVar60 * fVar52;
              fVar72 = fVar72 * fVar52;
              fVar63 = fVar63 * fVar52;
              *puVar14 = CONCAT44(fVar72,fVar60);
              *pfVar34 = fVar63;
              uVar54 = NEON_fmadd(fVar59 * fVar77,fVar63,
                                  fVar51 * fVar77 * fVar72 + fVar55 * fVar77 * fVar60);
              fVar51 = (float)NEON_fmadd(local_c8,fVar63,local_cc * fVar72 + local_d0 * fVar60);
              fVar78 = (float)NEON_fmadd(uVar54,uVar54,fVar51 * fVar51);
            }
            fVar51 = 1.0 / SQRT(fVar78);
          }
        }
        puVar14 = local_1a0 + (ulong)*(uint *)((long)local_f8 + lVar16 * 4) * 4;
        fVar55 = fVar51 * param_1 * -0.5;
        fVar63 = (float)NEON_fmadd(*(undefined4 *)(puVar14 + 2),fVar55,
                                   *(undefined4 *)((long)puVar14 + 4));
        fVar60 = (float)NEON_fmadd(*(undefined4 *)((long)puVar14 + 0xc),fVar55,
                                   *(undefined4 *)puVar14);
        fVar55 = (float)NEON_fmadd(*(undefined4 *)((long)puVar14 + 0x14),fVar55,
                                   *(undefined4 *)(puVar14 + 1));
        uVar56 = NEON_fmadd(fVar60 - fVar74,fVar70,fVar67 * (fVar63 - fVar75));
        uVar54 = NEON_fmadd(fVar60 - fVar74,uVar68,fVar71 * (fVar63 - fVar75));
        fVar72 = (float)NEON_fmadd(fVar55 - fVar64,fVar69,uVar56);
        fVar59 = (float)NEON_fmadd(fVar55 - fVar64,uVar65,uVar54);
        if (local_1b0 == local_1a8) {
          uVar26 = (long)local_1b0 - (long)local_1b8;
          uVar38 = ((long)uVar26 >> 5) + 1;
          if (uVar38 >> 0x3b != 0) {
                    /* try { // try from 008e025c to 008e026f has its CatchHandler @ 008e0418 */
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__vector_base_common<true>::__throw_length_error();
          }
          if (uVar38 <= (ulong)((long)uVar26 >> 4)) {
            uVar38 = (long)uVar26 >> 4;
          }
          if (0x7fffffffffffffdf < uVar26) {
            uVar38 = 0x7ffffffffffffff;
          }
          if (uVar38 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
          }
                    /* try { // try from 008ddb94 to 008ddb97 has its CatchHandler @ 008e0400 */
          __dest = (float *)operator_new(uVar38 << 5);
          pfVar34 = __dest + ((long)uVar26 >> 5) * 8;
          *pfVar34 = fVar60;
          pfVar34[1] = fVar63;
          pfVar34[2] = fVar55;
          pfVar34[6] = fVar72;
          pfVar34[7] = fVar59;
          if (0 < (long)uVar26) {
            memcpy(__dest,pfVar47,uVar26);
          }
          local_1b0 = pfVar34 + 8;
          local_1a8 = __dest + uVar38 * 8;
          local_1b8 = __dest;
          if (pfVar47 != (float *)0x0) {
            operator_delete(pfVar47);
          }
        }
        else {
          *local_1b0 = fVar60;
          local_1b0[1] = fVar63;
          local_1b0[2] = fVar55;
          local_1b0[6] = fVar72;
          local_1b0[7] = fVar59;
          pfVar40 = local_1c8;
          local_1b0 = local_1b0 + 8;
        }
        pfVar47 = local_1d0;
        fVar51 = fVar51 * param_1 * 0.5;
        puVar19 = puVar19 + (ulong)*(uint *)((long)local_f8 + lVar16 * 4) * 4;
        fVar55 = (float)NEON_fmadd(*(undefined4 *)(puVar19 + 2),fVar51,
                                   *(undefined4 *)((long)puVar19 + 4));
        fVar72 = (float)NEON_fmadd(*(undefined4 *)((long)puVar19 + 0xc),fVar51,
                                   *(undefined4 *)puVar19);
        fVar60 = (float)NEON_fmadd(*(undefined4 *)((long)puVar19 + 0x14),fVar51,
                                   *(undefined4 *)(puVar19 + 1));
        uVar56 = NEON_fmadd(fVar72 - fVar74,fVar70,fVar67 * (fVar55 - fVar75));
        uVar54 = NEON_fmadd(fVar72 - fVar74,uVar68,fVar71 * (fVar55 - fVar75));
        fVar59 = (float)NEON_fmadd(fVar60 - fVar64,fVar69,uVar56);
        fVar51 = (float)NEON_fmadd(fVar60 - fVar64,uVar65,uVar54);
        if (pfVar40 == local_1c0) {
          uVar26 = (long)pfVar40 - (long)local_1d0;
          uVar38 = ((long)uVar26 >> 5) + 1;
          if (uVar38 >> 0x3b != 0) {
                    /* try { // try from 008e0254 to 008e025b has its CatchHandler @ 008e041c */
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__vector_base_common<true>::__throw_length_error();
          }
          if (uVar38 <= (ulong)((long)uVar26 >> 4)) {
            uVar38 = (long)uVar26 >> 4;
          }
          if (0x7fffffffffffffdf < uVar26) {
            uVar38 = 0x7ffffffffffffff;
          }
          if (uVar38 >> 0x3b != 0) {
                    /* try { // try from 008e0270 to 008e027b has its CatchHandler @ 008e041c */
                    /* WARNING: Subroutine does not return */
            FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
          }
                    /* try { // try from 008ddcb4 to 008ddcb7 has its CatchHandler @ 008e0404 */
          pfVar34 = (float *)operator_new(uVar38 << 5);
          pfVar40 = pfVar34 + ((long)uVar26 >> 5) * 8;
          *pfVar40 = fVar72;
          pfVar40[1] = fVar55;
          pfVar40[2] = fVar60;
          pfVar40[6] = fVar59;
          pfVar40[7] = fVar51;
          if (0 < (long)uVar26) {
            memcpy(pfVar34,pfVar47,uVar26);
          }
          pfVar40 = pfVar40 + 8;
          local_1c0 = pfVar34 + uVar38 * 8;
          local_1d0 = pfVar34;
          local_1c8 = pfVar40;
          if (pfVar47 != (float *)0x0) {
            operator_delete(pfVar47);
          }
        }
        else {
          *pfVar40 = fVar72;
          pfVar40[1] = fVar55;
          pfVar40[2] = fVar60;
          pfVar40[6] = fVar59;
          pfVar40[7] = fVar51;
          *(undefined8 *)(pfVar40 + 3) = local_138;
          pfVar40[5] = fStack_130;
          pfVar40 = pfVar40 + 8;
          local_1c8 = pfVar40;
        }
        uVar26 = (long)local_f0 - (long)local_f8 >> 2;
        uVar38 = uVar29;
      } while (uVar29 < (uVar26 & 0xffffffff));
    }
  }
  pfVar47 = local_1b8;
  local_1e8 = (void *)0x0;
  local_1e0 = (void *)0x0;
  local_1d8 = 0;
                    /* try { // try from 008ddd58 to 008ddd63 has its CatchHandler @ 008e0384 */
  ConvexHull2DUtil::createHull
            ((uchar *)(local_1b8 + 6),0x20,(uint)((ulong)((long)local_1b0 - (long)local_1b8) >> 5),
             (vector *)&local_1e8);
  if ((long)local_1e0 - (long)local_1e8 != 0) {
    uVar38 = 0;
    do {
      if (*(int *)((long)local_1e8 + uVar38 * 4) == 0) goto LAB_008ddd90;
      uVar38 = (ulong)((int)uVar38 + 1);
    } while (uVar38 < (ulong)((long)local_1e0 - (long)local_1e8 >> 2));
  }
  uVar38 = 0;
LAB_008ddd90:
  local_200 = (void *)0x0;
  local_1f8 = (void *)0x0;
  local_1f0 = 0;
                    /* try { // try from 008ddda8 to 008dddb3 has its CatchHandler @ 008e037c */
  ConvexHull2DUtil::createHull
            ((uchar *)(local_1d0 + 6),0x20,(uint)((ulong)((long)pfVar40 - (long)local_1d0) >> 5),
             (vector *)&local_200);
  pvVar42 = local_1e8;
  pvVar21 = local_200;
  uVar26 = (long)local_1f8 - (long)local_200;
  uVar45 = (long)uVar26 >> 2;
  if (uVar26 != 0) {
    local_2f0 = 0;
    do {
      if (*(int *)((long)local_200 + local_2f0 * 4) == 0) goto LAB_008dddec;
      local_2f0 = (ulong)((int)local_2f0 + 1);
    } while (local_2f0 < uVar45);
  }
  local_2f0 = 0;
LAB_008dddec:
  local_210 = (float *)0x0;
  local_218 = (float *)0x0;
  uVar29 = (long)local_1e0 - (long)local_1e8;
  iVar13 = (int)uVar38;
  if (uVar29 == 0) {
    local_230 = (undefined8 *)0x0;
    local_228 = (undefined8 *)0x0;
    local_2e0 = 0.0;
  }
  else {
    if ((long)uVar29 < 0) {
                    /* try { // try from 008e0308 to 008e030f has its CatchHandler @ 008e03c4 */
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
                    /* try { // try from 008dde04 to 008dde0b has its CatchHandler @ 008e03c4 */
    local_218 = (float *)operator_new(uVar29);
    uVar38 = (long)uVar29 >> 2;
    local_210 = local_218 + uVar38;
    memset(local_218,0,uVar29 & 0xfffffffffffffffc);
    local_230 = (undefined8 *)0x0;
    local_228 = (undefined8 *)0x0;
    local_220 = (undefined8 *)0x0;
    local_2e0 = 0.0;
    if (4 < uVar29) {
      local_228 = (undefined8 *)0x0;
      local_2e0 = 0.0;
      local_2a8 = 1;
      do {
        uVar41 = iVar13 + (int)local_2a8;
        uVar26 = 0;
        if (uVar38 != 0) {
          uVar26 = uVar41 / uVar38;
        }
        lVar16 = (ulong)uVar41 - uVar26 * uVar38;
        uVar26 = 0;
        if (uVar38 != 0) {
          uVar26 = (uVar41 - 1) / uVar38;
        }
        uVar12 = *(uint *)((long)pvVar42 + lVar16 * 4);
        lVar17 = (ulong)(uVar41 - 1) - uVar26 * uVar38;
        puVar19 = (undefined8 *)(pfVar47 + (ulong)*(uint *)((long)pvVar42 + lVar17 * 4) * 8);
        fVar51 = pfVar47[(ulong)uVar12 * 8 + 7] - *(float *)((long)puVar19 + 0x1c);
        fVar51 = (float)NEON_fmadd(pfVar47[(ulong)uVar12 * 8 + 6] - *(float *)(puVar19 + 3),
                                   pfVar47[(ulong)uVar12 * 8 + 6] - *(float *)(puVar19 + 3),
                                   fVar51 * fVar51);
        local_2e0 = local_2e0 + SQRT(fVar51);
        local_218[local_2a8] = local_2e0;
        if (local_228 == local_220) {
          uVar26 = (long)local_220 - (long)local_230;
          uVar38 = ((long)uVar26 >> 5) + 1;
          if (uVar38 >> 0x3b != 0) {
                    /* try { // try from 008e0290 to 008e0297 has its CatchHandler @ 008e0410 */
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__vector_base_common<true>::__throw_length_error();
          }
          if (uVar38 <= (ulong)((long)uVar26 >> 4)) {
            uVar38 = (long)uVar26 >> 4;
          }
          if (0x7fffffffffffffdf < uVar26) {
            uVar38 = 0x7ffffffffffffff;
          }
          if (uVar38 == 0) {
            puVar14 = (undefined8 *)0x0;
          }
          else {
            if (uVar38 >> 0x3b != 0) {
                    /* try { // try from 008e02a0 to 008e02ab has its CatchHandler @ 008e0410 */
                    /* WARNING: Subroutine does not return */
              FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
            }
                    /* try { // try from 008ddf20 to 008ddf23 has its CatchHandler @ 008e03ec */
            puVar14 = (undefined8 *)operator_new(uVar38 << 5);
          }
          uVar76 = *puVar19;
          uVar62 = puVar19[3];
          uVar58 = puVar19[2];
          local_228 = puVar14 + ((long)uVar26 >> 5) * 4;
          local_228[1] = puVar19[1];
          *local_228 = uVar76;
          local_228[3] = uVar62;
          local_228[2] = uVar58;
          if (0 < (long)uVar26) {
            memcpy(puVar14,local_230,uVar26);
          }
          local_228 = local_228 + 4;
          local_220 = puVar14 + uVar38 * 4;
          if (local_230 != (undefined8 *)0x0) {
            operator_delete(local_230);
          }
        }
        else {
          uVar58 = *puVar19;
          uVar76 = puVar19[3];
          uVar62 = puVar19[2];
          local_228[1] = puVar19[1];
          *local_228 = uVar58;
          local_228[3] = uVar76;
          local_228[2] = uVar62;
          puVar14 = local_230;
          local_228 = local_228 + 4;
        }
        local_230 = puVar14;
        fVar51 = SQRT(fVar51) / param_2;
        uVar41 = (uint)fVar51;
        if (1 < uVar41) {
          uVar12 = 2;
          fVar51 = (float)NEON_ucvtf((int)(float)(int)fVar51);
          while( true ) {
            fVar55 = (float)(ulong)(uVar12 - 1) / fVar51;
            uVar58 = *(undefined8 *)(pfVar47 + (ulong)*(uint *)((long)local_1e8 + lVar16 * 4) * 8);
            uVar62 = *(undefined8 *)(pfVar47 + (ulong)*(uint *)((long)local_1e8 + lVar17 * 4) * 8);
            fVar72 = *(float *)((long)(pfVar47 + (ulong)*(uint *)((long)local_1e8 + lVar17 * 4) * 8)
                               + 8);
            fVar59 = (float)uVar62;
            fVar60 = (float)((ulong)uVar62 >> 0x20);
            fVar59 = fVar59 + ((float)uVar58 - fVar59) * fVar55;
            fVar60 = fVar60 + ((float)((ulong)uVar58 >> 0x20) - fVar60) * fVar55;
            uVar58 = CONCAT44(fVar60,fVar59);
            fVar60 = fVar60 - fVar75;
            fVar72 = fVar72 + fVar55 * (*(float *)((long)(pfVar47 +
                                                         (ulong)*(uint *)((long)local_1e8 +
                                                                         lVar16 * 4) * 8) + 8) -
                                       fVar72);
            fVar59 = fVar59 - fVar74;
            uVar56 = NEON_fmadd(fVar59,fVar70,fVar67 * fVar60);
            uVar54 = NEON_fmadd(fVar59,uVar68,fVar71 * fVar60);
            uVar56 = NEON_fmadd(fVar72 - fVar64,fVar69,uVar56);
            uVar54 = NEON_fmadd(fVar72 - fVar64,uVar65,uVar54);
            if (local_228 == local_220) {
              uVar26 = (long)local_220 - (long)local_230;
              uVar38 = ((long)uVar26 >> 5) + 1;
              if (uVar38 >> 0x3b != 0) {
                    /* try { // try from 008e0180 to 008e0193 has its CatchHandler @ 008e0520 */
                    /* WARNING: Subroutine does not return */
                std::__ndk1::__vector_base_common<true>::__throw_length_error();
              }
              if (uVar38 <= (ulong)((long)uVar26 >> 4)) {
                uVar38 = (long)uVar26 >> 4;
              }
              if (0x7fffffffffffffdf < uVar26) {
                uVar38 = 0x7ffffffffffffff;
              }
              if (uVar38 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
                FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                            );
              }
                    /* try { // try from 008de094 to 008de097 has its CatchHandler @ 008e049c */
              puVar19 = (undefined8 *)operator_new(uVar38 << 5);
              local_228 = puVar19 + ((long)uVar26 >> 5) * 4;
              *(float *)(local_228 + 1) = fVar72;
              *local_228 = uVar58;
              *(undefined4 *)(local_228 + 3) = uVar56;
              *(undefined4 *)((long)local_228 + 0x1c) = uVar54;
              if (0 < (long)uVar26) {
                memcpy(puVar19,local_230,uVar26);
              }
              local_228 = local_228 + 4;
              local_220 = puVar19 + uVar38 * 4;
              if (local_230 != (undefined8 *)0x0) {
                operator_delete(local_230);
              }
            }
            else {
              *local_228 = uVar58;
              *(float *)(local_228 + 1) = fVar72;
              *(undefined4 *)(local_228 + 3) = uVar56;
              *(undefined4 *)((long)local_228 + 0x1c) = uVar54;
              *(undefined8 *)((long)local_228 + 0xc) = local_138;
              *(float *)((long)local_228 + 0x14) = fStack_130;
              local_228 = local_228 + 4;
              puVar19 = local_230;
            }
            local_230 = puVar19;
            if (uVar41 == uVar12) break;
            uVar12 = uVar12 + 1;
            pfVar47 = local_1b8;
          }
        }
        pvVar42 = local_1e8;
        uVar38 = (long)local_1e0 - (long)local_1e8 >> 2;
        puVar19 = local_230;
        if (uVar38 - 1 == local_2a8) {
          puVar14 = (undefined8 *)(local_1b8 + (ulong)*(uint *)((long)local_1e8 + lVar16 * 4) * 8);
          if (local_228 == local_220) {
            uVar45 = (long)local_228 - (long)local_230;
            uVar26 = ((long)uVar45 >> 5) + 1;
            if (uVar26 >> 0x3b != 0) {
                    /* try { // try from 008e02b8 to 008e02bf has its CatchHandler @ 008e03f8 */
                    /* WARNING: Subroutine does not return */
              std::__ndk1::__vector_base_common<true>::__throw_length_error();
            }
            if (uVar26 <= (ulong)((long)uVar45 >> 4)) {
              uVar26 = (long)uVar45 >> 4;
            }
            if (0x7fffffffffffffdf < uVar45) {
              uVar26 = 0x7ffffffffffffff;
            }
            if (uVar26 == 0) {
              puVar19 = (undefined8 *)0x0;
            }
            else {
              if (uVar26 >> 0x3b != 0) {
                    /* try { // try from 008e02c8 to 008e02d3 has its CatchHandler @ 008e03f8 */
                    /* WARNING: Subroutine does not return */
                FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                            );
              }
                    /* try { // try from 008de18c to 008de18f has its CatchHandler @ 008e03b0 */
              puVar19 = (undefined8 *)operator_new(uVar26 << 5);
            }
            uVar76 = *puVar14;
            uVar62 = puVar14[3];
            uVar58 = puVar14[2];
            local_228 = puVar19 + ((long)uVar45 >> 5) * 4;
            local_228[1] = puVar14[1];
            *local_228 = uVar76;
            local_228[3] = uVar62;
            local_228[2] = uVar58;
            if (0 < (long)uVar45) {
              memcpy(puVar19,local_230,uVar45);
            }
            local_228 = local_228 + 4;
            local_220 = puVar19 + uVar26 * 4;
            if (local_230 != (undefined8 *)0x0) {
              operator_delete(local_230);
              uVar38 = (long)local_1e0 - (long)local_1e8 >> 2;
              pvVar42 = local_1e8;
            }
          }
          else {
            uVar58 = *puVar14;
            uVar76 = puVar14[3];
            uVar62 = puVar14[2];
            local_228[1] = puVar14[1];
            *local_228 = uVar58;
            local_228[3] = uVar76;
            local_228[2] = uVar62;
            local_228 = local_228 + 4;
          }
        }
        local_230 = puVar19;
        local_2a8 = (ulong)((int)local_2a8 + 1);
        pfVar47 = local_1b8;
      } while (local_2a8 < uVar38);
      uVar26 = (long)local_1f8 - (long)local_200;
      uVar45 = (long)uVar26 >> 2;
      pvVar21 = local_200;
    }
  }
  local_248 = (float *)0x0;
  local_240 = (float *)0x0;
  iVar30 = (int)local_2f0;
  if (uVar26 == 0) {
    fVar51 = 0.0;
    local_260 = (undefined8 *)0x0;
    local_258 = (undefined8 *)0x0;
  }
  else {
    if ((long)uVar26 < 0) {
                    /* try { // try from 008e0310 to 008e0317 has its CatchHandler @ 008e03b4 */
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
                    /* try { // try from 008de238 to 008de23f has its CatchHandler @ 008e03b4 */
    local_248 = (float *)operator_new(uVar26);
    local_240 = local_248 + uVar45;
    memset(local_248,0,uVar45 * 4);
    fVar51 = 0.0;
    local_260 = (undefined8 *)0x0;
    local_258 = (undefined8 *)0x0;
    local_250 = (undefined8 *)0x0;
    if (4 < uVar26) {
      fVar51 = 0.0;
      local_258 = (undefined8 *)0x0;
      local_2a8 = 1;
      do {
        pfVar40 = local_1d0;
        uVar41 = iVar30 + (int)local_2a8;
        uVar38 = 0;
        if (uVar45 != 0) {
          uVar38 = uVar41 / uVar45;
        }
        lVar16 = (ulong)uVar41 - uVar38 * uVar45;
        uVar38 = 0;
        if (uVar45 != 0) {
          uVar38 = (uVar41 - 1) / uVar45;
        }
        uVar12 = *(uint *)((long)pvVar21 + lVar16 * 4);
        lVar17 = (ulong)(uVar41 - 1) - uVar38 * uVar45;
        puVar19 = (undefined8 *)(local_1d0 + (ulong)*(uint *)((long)pvVar21 + lVar17 * 4) * 8);
        fVar55 = local_1d0[(ulong)uVar12 * 8 + 7] - *(float *)((long)puVar19 + 0x1c);
        fVar55 = (float)NEON_fmadd(local_1d0[(ulong)uVar12 * 8 + 6] - *(float *)(puVar19 + 3),
                                   local_1d0[(ulong)uVar12 * 8 + 6] - *(float *)(puVar19 + 3),
                                   fVar55 * fVar55);
        fVar51 = fVar51 + SQRT(fVar55);
        local_248[local_2a8] = fVar51;
        if (local_258 == local_250) {
          uVar26 = (long)local_250 - (long)local_260;
          uVar38 = ((long)uVar26 >> 5) + 1;
          if (uVar38 >> 0x3b != 0) {
                    /* try { // try from 008e0298 to 008e029f has its CatchHandler @ 008e040c */
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__vector_base_common<true>::__throw_length_error();
          }
          if (uVar38 <= (ulong)((long)uVar26 >> 4)) {
            uVar38 = (long)uVar26 >> 4;
          }
          if (0x7fffffffffffffdf < uVar26) {
            uVar38 = 0x7ffffffffffffff;
          }
          if (uVar38 == 0) {
            puVar14 = (undefined8 *)0x0;
          }
          else {
            if (uVar38 >> 0x3b != 0) {
                    /* try { // try from 008e02ac to 008e02b7 has its CatchHandler @ 008e040c */
                    /* WARNING: Subroutine does not return */
              FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
            }
                    /* try { // try from 008de344 to 008de347 has its CatchHandler @ 008e03e8 */
            puVar14 = (undefined8 *)operator_new(uVar38 << 5);
          }
          uVar76 = *puVar19;
          uVar62 = puVar19[3];
          uVar58 = puVar19[2];
          local_258 = puVar14 + ((long)uVar26 >> 5) * 4;
          local_258[1] = puVar19[1];
          *local_258 = uVar76;
          local_258[3] = uVar62;
          local_258[2] = uVar58;
          if (0 < (long)uVar26) {
            memcpy(puVar14,local_260,uVar26);
          }
          local_258 = local_258 + 4;
          local_250 = puVar14 + uVar38 * 4;
          if (local_260 != (undefined8 *)0x0) {
            operator_delete(local_260);
          }
        }
        else {
          uVar58 = *puVar19;
          uVar76 = puVar19[3];
          uVar62 = puVar19[2];
          local_258[1] = puVar19[1];
          *local_258 = uVar58;
          local_258[3] = uVar76;
          local_258[2] = uVar62;
          puVar14 = local_260;
          local_258 = local_258 + 4;
        }
        local_260 = puVar14;
        fVar55 = SQRT(fVar55) / param_2;
        uVar41 = (uint)fVar55;
        if (1 < uVar41) {
          uVar12 = 2;
          fVar55 = (float)NEON_ucvtf((int)(float)(int)fVar55);
          while( true ) {
            fVar59 = (float)(ulong)(uVar12 - 1) / fVar55;
            uVar58 = *(undefined8 *)(pfVar40 + (ulong)*(uint *)((long)local_200 + lVar16 * 4) * 8);
            uVar62 = *(undefined8 *)(pfVar40 + (ulong)*(uint *)((long)local_200 + lVar17 * 4) * 8);
            fVar63 = *(float *)((long)(pfVar40 + (ulong)*(uint *)((long)local_200 + lVar17 * 4) * 8)
                               + 8);
            fVar60 = (float)uVar62;
            fVar72 = (float)((ulong)uVar62 >> 0x20);
            fVar60 = fVar60 + ((float)uVar58 - fVar60) * fVar59;
            fVar72 = fVar72 + ((float)((ulong)uVar58 >> 0x20) - fVar72) * fVar59;
            uVar58 = CONCAT44(fVar72,fVar60);
            fVar72 = fVar72 - fVar75;
            fVar63 = fVar63 + fVar59 * (*(float *)((long)(pfVar40 +
                                                         (ulong)*(uint *)((long)local_200 +
                                                                         lVar16 * 4) * 8) + 8) -
                                       fVar63);
            fVar60 = fVar60 - fVar74;
            uVar56 = NEON_fmadd(fVar60,fVar70,fVar67 * fVar72);
            uVar54 = NEON_fmadd(fVar60,uVar68,fVar71 * fVar72);
            uVar56 = NEON_fmadd(fVar63 - fVar64,fVar69,uVar56);
            uVar54 = NEON_fmadd(fVar63 - fVar64,uVar65,uVar54);
            if (local_258 == local_250) {
              uVar26 = (long)local_250 - (long)local_260;
              uVar38 = ((long)uVar26 >> 5) + 1;
              if (uVar38 >> 0x3b != 0) {
                    /* try { // try from 008e0194 to 008e01a7 has its CatchHandler @ 008e0510 */
                    /* WARNING: Subroutine does not return */
                std::__ndk1::__vector_base_common<true>::__throw_length_error();
              }
              if (uVar38 <= (ulong)((long)uVar26 >> 4)) {
                uVar38 = (long)uVar26 >> 4;
              }
              if (0x7fffffffffffffdf < uVar26) {
                uVar38 = 0x7ffffffffffffff;
              }
              if (uVar38 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
                FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                            );
              }
                    /* try { // try from 008de4c0 to 008de4c3 has its CatchHandler @ 008e0498 */
              puVar19 = (undefined8 *)operator_new(uVar38 << 5);
              local_258 = puVar19 + ((long)uVar26 >> 5) * 4;
              *(float *)(local_258 + 1) = fVar63;
              *local_258 = uVar58;
              *(undefined4 *)(local_258 + 3) = uVar56;
              *(undefined4 *)((long)local_258 + 0x1c) = uVar54;
              if (0 < (long)uVar26) {
                memcpy(puVar19,local_260,uVar26);
              }
              local_258 = local_258 + 4;
              local_250 = puVar19 + uVar38 * 4;
              if (local_260 != (undefined8 *)0x0) {
                operator_delete(local_260);
              }
            }
            else {
              *local_258 = uVar58;
              *(float *)(local_258 + 1) = fVar63;
              *(undefined4 *)(local_258 + 3) = uVar56;
              *(undefined4 *)((long)local_258 + 0x1c) = uVar54;
              *(undefined8 *)((long)local_258 + 0xc) = local_138;
              *(float *)((long)local_258 + 0x14) = fStack_130;
              local_258 = local_258 + 4;
              puVar19 = local_260;
            }
            local_260 = puVar19;
            if (uVar41 == uVar12) break;
            uVar12 = uVar12 + 1;
            pfVar40 = local_1d0;
          }
        }
        pvVar21 = local_200;
        uVar45 = (long)local_1f8 - (long)local_200 >> 2;
        puVar19 = local_260;
        if (uVar45 - 1 == local_2a8) {
          puVar14 = (undefined8 *)(local_1d0 + (ulong)*(uint *)((long)local_200 + lVar16 * 4) * 8);
          if (local_258 == local_250) {
            uVar26 = (long)local_258 - (long)local_260;
            uVar38 = ((long)uVar26 >> 5) + 1;
            if (uVar38 >> 0x3b != 0) {
                    /* try { // try from 008e02c0 to 008e02c7 has its CatchHandler @ 008e03f4 */
                    /* WARNING: Subroutine does not return */
              std::__ndk1::__vector_base_common<true>::__throw_length_error();
            }
            if (uVar38 <= (ulong)((long)uVar26 >> 4)) {
              uVar38 = (long)uVar26 >> 4;
            }
            if (0x7fffffffffffffdf < uVar26) {
              uVar38 = 0x7ffffffffffffff;
            }
            if (uVar38 == 0) {
              puVar19 = (undefined8 *)0x0;
            }
            else {
              if (uVar38 >> 0x3b != 0) {
                    /* try { // try from 008e02d4 to 008e02df has its CatchHandler @ 008e03f4 */
                    /* WARNING: Subroutine does not return */
                FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                            );
              }
                    /* try { // try from 008de5c0 to 008de5c3 has its CatchHandler @ 008e03ac */
              puVar19 = (undefined8 *)operator_new(uVar38 << 5);
            }
            uVar76 = *puVar14;
            uVar62 = puVar14[3];
            uVar58 = puVar14[2];
            local_258 = puVar19 + ((long)uVar26 >> 5) * 4;
            local_258[1] = puVar14[1];
            *local_258 = uVar76;
            local_258[3] = uVar62;
            local_258[2] = uVar58;
            if (0 < (long)uVar26) {
              memcpy(puVar19,local_260,uVar26);
            }
            local_258 = local_258 + 4;
            local_250 = puVar19 + uVar38 * 4;
            if (local_260 != (undefined8 *)0x0) {
              operator_delete(local_260);
              uVar45 = (long)local_1f8 - (long)local_200 >> 2;
              pvVar21 = local_200;
            }
          }
          else {
            uVar58 = *puVar14;
            uVar76 = puVar14[3];
            uVar62 = puVar14[2];
            local_258[1] = puVar14[1];
            *local_258 = uVar58;
            local_258[3] = uVar76;
            local_258[2] = uVar62;
            local_258 = local_258 + 4;
          }
        }
        local_260 = puVar19;
        local_2a8 = (ulong)((int)local_2a8 + 1);
      } while (local_2a8 < uVar45);
    }
  }
  local_278 = (int *)0x0;
  local_270 = (int *)0x0;
  local_268 = (int *)0x0;
  fVar55 = (local_2e0 + fVar51) * 0.5;
  *param_13 = fVar55;
  local_138 = *local_230;
  fStack_130 = *(float *)(local_230 + 1);
                    /* try { // try from 008de680 to 008de687 has its CatchHandler @ 008e0378 */
  puVar19 = (undefined8 *)operator_new(0x20);
  *(undefined8 *)((long)puVar19 + 0x14) = 0;
  *(undefined8 *)((long)puVar19 + 0xc) = 0;
  *(undefined4 *)((long)puVar19 + 0x1c) = 0;
  *puVar19 = local_138;
  *(float *)(puVar19 + 1) = fStack_130;
  local_138 = *local_230;
  fStack_130 = *(float *)(local_230 + 1);
                    /* try { // try from 008de6c4 to 008de6cb has its CatchHandler @ 008e0374 */
  puVar15 = (undefined8 *)operator_new(0x40);
  *(undefined8 *)((long)puVar15 + 0x34) = 0;
  uVar62 = puVar19[1];
  uVar58 = *puVar19;
  uVar53 = puVar19[3];
  uVar76 = puVar19[2];
  *(undefined8 *)((long)puVar15 + 0x2c) = 0;
  puVar15[4] = local_138;
  *(undefined4 *)((long)puVar15 + 0x3c) = 0;
  puVar15[1] = uVar62;
  *puVar15 = uVar58;
  puVar15[3] = uVar53;
  puVar15[2] = uVar76;
  *(float *)(puVar15 + 5) = fStack_130;
  operator_delete(puVar19);
  local_138 = *local_260;
  fStack_130 = *(float *)(local_260 + 1);
                    /* try { // try from 008de798 to 008de79b has its CatchHandler @ 008e03d8 */
  pvVar21 = operator_new(0x80);
  puVar14 = (undefined8 *)((long)pvVar21 + 0x40);
  local_280 = (undefined8 *)((long)pvVar21 + 0x80);
  puVar19 = puVar14 + 4;
  *puVar14 = local_138;
  *(float *)(puVar14 + 1) = fStack_130;
  *(undefined4 *)((long)pvVar21 + 0x4c) = 0;
  puVar14[2] = 0;
  puVar14[3] = 0x3f800000;
  memcpy(pvVar21,puVar15,0x40);
  if (puVar15 != (undefined8 *)0x0) {
    operator_delete(puVar15);
  }
  local_138 = *local_260;
  fStack_130 = *(float *)(local_260 + 1);
  if (puVar19 < local_280) {
    uVar58 = *local_260;
    uVar54 = *(undefined4 *)(local_260 + 1);
    puVar14[6] = 0;
    *puVar19 = uVar58;
    local_288 = puVar14 + 8;
    *(undefined4 *)(puVar14 + 5) = uVar54;
    *(undefined4 *)((long)pvVar21 + 0x6c) = 0;
    puVar14[7] = 0x3f800000;
    local_290 = pvVar21;
  }
  else {
    sVar37 = (long)puVar19 - (long)pvVar21;
    uVar38 = ((long)sVar37 >> 5) + 1;
    if (uVar38 >> 0x3b != 0) {
                    /* try { // try from 008e032c to 008e033f has its CatchHandler @ 008e03d4 */
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    uVar26 = (long)local_280 - (long)pvVar21 >> 4;
    if (uVar38 <= uVar26) {
      uVar38 = uVar26;
    }
    if (0x7fffffffffffffdf < (ulong)((long)local_280 - (long)pvVar21)) {
      uVar38 = 0x7ffffffffffffff;
    }
    if (uVar38 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
                    /* try { // try from 008de888 to 008de88b has its CatchHandler @ 008e03d4 */
    local_290 = operator_new(uVar38 << 5);
    puVar19 = (undefined8 *)((long)local_290 + ((long)sVar37 >> 5) * 0x20);
    local_280 = (undefined8 *)((long)local_290 + uVar38 * 0x20);
    local_288 = puVar19 + 4;
    *puVar19 = local_138;
    *(float *)(puVar19 + 1) = fStack_130;
    *(undefined4 *)((long)puVar19 + 0xc) = 0;
    puVar19[2] = 0;
    puVar19[3] = 0x3f800000;
    if (0 < (long)sVar37) {
      memcpy(local_290,pvVar21,sVar37);
    }
    if (pvVar21 != (void *)0x0) {
      operator_delete(pvVar21);
    }
  }
  fVar67 = -fVar67;
  fVar69 = -fVar69;
  fVar59 = 0.0;
  fVar60 = 0.0;
  lVar17 = 0;
  uVar38 = 1;
  lVar16 = 2;
  uVar41 = 1;
  bVar10 = false;
  fVar70 = -fVar70;
LAB_008de938:
  uVar26 = (ulong)((int)uVar38 - 1);
  iVar43 = (int)lVar16;
  bVar8 = bVar10;
  do {
    bVar10 = bVar8;
    if (uVar38 < (ulong)((long)local_258 - (long)local_260 >> 5)) {
      local_2a8 = (ulong)(uVar41 - 1);
      if ((ulong)uVar41 < (ulong)((long)local_228 - (long)local_230 >> 5)) {
        puVar19 = local_230 + local_2a8 * 4;
        puVar14 = local_260 + uVar26 * 4;
        puVar15 = local_260 + uVar38 * 4;
        puVar1 = local_230 + (ulong)uVar41 * 4;
        fVar52 = *(float *)puVar19 - *(float *)puVar14;
        fVar74 = *(float *)(puVar19 + 1) - *(float *)(puVar14 + 1);
        fVar78 = *(float *)((long)puVar19 + 4) - *(float *)((long)puVar14 + 4);
        fVar66 = *(float *)(puVar15 + 1) - *(float *)(puVar19 + 1);
        fVar73 = *(float *)((long)puVar15 + 4) - *(float *)((long)puVar19 + 4);
        fVar75 = *(float *)puVar15 - *(float *)puVar19;
        fVar79 = *(float *)puVar1 - *(float *)puVar14;
        fVar64 = *(float *)(puVar1 + 1) - *(float *)(puVar14 + 1);
        fVar80 = *(float *)((long)puVar1 + 4) - *(float *)((long)puVar14 + 4);
        fVar71 = (float)NEON_fmadd(fVar74,fVar75,fVar66 * -fVar52);
        fVar63 = (float)NEON_fmadd(fVar78,fVar66,fVar73 * -fVar74);
        fVar72 = (float)NEON_fmadd(fVar74,fVar79,fVar64 * -fVar52);
        uVar54 = NEON_fmadd(fVar75,fVar75,fVar73 * fVar73);
        uVar61 = NEON_fmadd(fVar79,fVar79,fVar80 * fVar80);
        fVar74 = (float)NEON_fmadd(fVar78,fVar64,fVar80 * -fVar74);
        fVar75 = (float)NEON_fmadd(fVar52,fVar73,fVar75 * -fVar78);
        uVar56 = NEON_fmadd(fVar63,fVar63,fVar71 * fVar71);
        fVar73 = (float)NEON_fmadd(fVar66,fVar66,uVar54);
        fVar77 = (float)NEON_fmadd(fVar64,fVar64,uVar61);
        fVar64 = (float)NEON_fmadd(fVar52,fVar80,fVar79 * -fVar78);
        uVar54 = NEON_fmadd(fVar74,fVar74,fVar72 * fVar72);
        fVar66 = (float)NEON_fmadd(fVar75,fVar75,uVar56);
        bVar11 = fVar73 < fVar77;
        fVar52 = (float)NEON_fmadd(fVar64,fVar64,uVar54);
        bVar10 = 0.0001 < fVar66 && 0.0001 < fVar52;
        if (bVar10) {
          bVar9 = bVar11;
          if (bVar8) {
            fVar66 = 1.0 / SQRT(fVar66);
            fVar52 = 1.0 / SQRT(fVar52);
            fVar71 = fVar71 * fVar66;
            fVar63 = fVar63 * fVar66;
            fVar75 = fVar75 * fVar66;
            fVar72 = fVar72 * fVar52;
            fVar74 = fVar74 * fVar52;
            fVar64 = fVar64 * fVar52;
            uVar54 = NEON_fmadd(fVar70,fVar63,fVar67 * fVar71);
            fVar52 = (float)NEON_fmadd(fVar69,fVar75,uVar54);
            uVar54 = NEON_fmadd(fVar70,fVar74,fVar67 * fVar72);
            fVar67 = (float)NEON_fmadd(fVar69,fVar64,uVar54);
            bVar9 = fVar67 < fVar52;
            if (ABS(fVar52 - fVar67) <= 0.01) {
              bVar9 = bVar11;
            }
          }
          bVar11 = bVar9;
          fVar67 = fVar72;
          fVar69 = fVar64;
          fVar70 = fVar74;
          if (bVar11) {
            fVar67 = fVar71;
            fVar69 = fVar75;
            fVar70 = fVar63;
          }
        }
      }
      else {
        bVar11 = true;
      }
    }
    else {
      if ((ulong)((long)local_228 - (long)local_230 >> 5) <= (ulong)uVar41) {
        if (0xb < (ulong)((long)local_270 - (long)local_278)) {
          uVar41 = 2;
          uVar12 = 1;
          do {
            uVar38 = (ulong)(uint)local_278[uVar41 - 1];
            uVar26 = (ulong)(uint)local_278[uVar41 - 2];
            pfVar40 = (float *)((long)local_290 + uVar38 * 0x20);
            pfVar47 = (float *)((long)local_290 + uVar26 * 0x20);
            fVar67 = pfVar40[1] - pfVar47[1];
            fVar69 = *pfVar40 - *pfVar47;
            fVar55 = pfVar40[2] - pfVar47[2];
            uVar54 = NEON_fmadd(fVar69,fVar69,fVar67 * fVar67);
            fVar59 = (float)NEON_fmadd(fVar55,fVar55,uVar54);
            fVar70 = 1.0;
            if (1e-06 < fVar59) {
              fVar70 = 1.0 / SQRT(fVar59);
            }
            uVar45 = (ulong)(uint)local_278[uVar41];
            fVar63 = 1.0;
            pfVar34 = (float *)((long)local_290 + uVar45 * 0x20);
            fVar72 = pfVar34[1] - pfVar47[1];
            fVar60 = *pfVar34 - *pfVar47;
            fVar71 = pfVar34[2] - pfVar47[2];
            uVar54 = NEON_fmadd(fVar60,fVar60,fVar72 * fVar72);
            fVar74 = (float)NEON_fmadd(fVar71,fVar71,uVar54);
            fVar59 = 1.0;
            if (1e-06 < fVar74) {
              fVar63 = 1.0 / SQRT(fVar74);
            }
            fVar74 = pfVar34[1] - pfVar40[1];
            fVar75 = *pfVar34 - *pfVar40;
            fVar64 = pfVar34[2] - pfVar40[2];
            uVar54 = NEON_fmadd(fVar75,fVar75,fVar74 * fVar74);
            fVar52 = (float)NEON_fmadd(fVar64,fVar64,uVar54);
            if (1e-06 < fVar52) {
              fVar59 = 1.0 / SQRT(fVar52);
            }
            fVar69 = fVar69 * fVar70;
            fVar55 = fVar55 * fVar70;
            fVar71 = fVar71 * fVar63;
            fVar67 = fVar67 * fVar70;
            fVar72 = fVar72 * fVar63;
            fVar60 = fVar60 * fVar63;
            fVar63 = (float)NEON_fmadd(fVar55,fVar60,fVar71 * -fVar69);
            fVar52 = (float)NEON_fmadd(fVar67,fVar71,fVar72 * -fVar55);
            fVar66 = (float)NEON_fmadd(fVar69,fVar72,fVar60 * -fVar67);
            uVar54 = NEON_fmadd(fVar52,fVar52,fVar63 * fVar63);
            fVar70 = (float)NEON_fmadd(fVar66,fVar66,uVar54);
            fVar70 = SQRT(fVar70);
            if (0.0001 <= fVar70) {
              fVar73 = 1.0 / fVar70;
              fVar52 = fVar52 * fVar73;
              fVar63 = fVar63 * fVar73;
              fVar66 = fVar66 * fVar73;
            }
            fVar70 = (float)NEON_fmin(fVar70,0x3f800000);
            fVar75 = fVar75 * fVar59;
            fVar74 = fVar74 * fVar59;
            fVar64 = fVar64 * fVar59;
            fVar70 = asinf(fVar70);
            fVar59 = (float)NEON_fmadd(fVar55,fVar75,fVar64 * -fVar69);
            fVar55 = (float)NEON_fmadd(fVar67,fVar64,fVar74 * -fVar55);
            fVar69 = (float)NEON_fmadd(fVar69,fVar74,fVar75 * -fVar67);
            uVar54 = NEON_fmadd(fVar55,fVar55,fVar59 * fVar59);
            fVar67 = (float)NEON_fmadd(fVar69,fVar69,uVar54);
            uVar56 = NEON_fmadd(fVar52,fVar70,*(undefined4 *)((long)local_290 + uVar26 * 0x20 + 0xc)
                               );
            uVar61 = NEON_fmadd(fVar63,fVar70,
                                *(undefined4 *)((long)local_290 + uVar26 * 0x20 + 0x10));
            uVar54 = NEON_fmadd(fVar66,fVar70,
                                *(undefined4 *)((long)local_290 + uVar26 * 0x20 + 0x14));
            fVar67 = SQRT(fVar67);
            *(undefined4 *)((long)local_290 + uVar26 * 0x20 + 0xc) = uVar56;
            *(undefined4 *)((long)local_290 + uVar26 * 0x20 + 0x10) = uVar61;
            *(undefined4 *)((long)local_290 + uVar26 * 0x20 + 0x14) = uVar54;
            if (0.0001 <= fVar67) {
              fVar70 = 1.0 / fVar67;
              fVar55 = fVar55 * fVar70;
              fVar59 = fVar59 * fVar70;
              fVar69 = fVar69 * fVar70;
            }
            fVar67 = (float)NEON_fmin(fVar67,0x3f800000);
            fVar67 = asinf(fVar67);
            fVar63 = (float)NEON_fmadd(fVar71,fVar75,fVar64 * -fVar60);
            fVar71 = (float)NEON_fmadd(fVar72,fVar64,fVar74 * -fVar71);
            fVar60 = (float)NEON_fmadd(fVar60,fVar74,fVar75 * -fVar72);
            uVar54 = NEON_fmadd(fVar71,fVar71,fVar63 * fVar63);
            fVar70 = (float)NEON_fmadd(fVar60,fVar60,uVar54);
            uVar56 = NEON_fmadd(fVar55,fVar67,*(undefined4 *)((long)local_290 + uVar38 * 0x20 + 0xc)
                               );
            uVar61 = NEON_fmadd(fVar59,fVar67,
                                *(undefined4 *)((long)local_290 + uVar38 * 0x20 + 0x10));
            uVar54 = NEON_fmadd(fVar69,fVar67,
                                *(undefined4 *)((long)local_290 + uVar38 * 0x20 + 0x14));
            fVar70 = SQRT(fVar70);
            *(undefined4 *)((long)local_290 + uVar38 * 0x20 + 0xc) = uVar56;
            *(undefined4 *)((long)local_290 + uVar38 * 0x20 + 0x10) = uVar61;
            *(undefined4 *)((long)local_290 + uVar38 * 0x20 + 0x14) = uVar54;
            if (0.0001 <= fVar70) {
              fVar67 = 1.0 / fVar70;
              fVar71 = fVar71 * fVar67;
              fVar63 = fVar63 * fVar67;
              fVar60 = fVar60 * fVar67;
            }
            fVar67 = (float)NEON_fmin(fVar70,0x3f800000);
            fVar67 = asinf(fVar67);
            uVar38 = (ulong)uVar12;
            uVar41 = uVar41 + 3;
            uVar56 = NEON_fmadd(fVar71,fVar67,*(undefined4 *)((long)local_290 + uVar45 * 0x20 + 0xc)
                               );
            uVar61 = NEON_fmadd(fVar63,fVar67,
                                *(undefined4 *)((long)local_290 + uVar45 * 0x20 + 0x10));
            uVar54 = NEON_fmadd(fVar60,fVar67,
                                *(undefined4 *)((long)local_290 + uVar45 * 0x20 + 0x14));
            *(undefined4 *)((long)local_290 + uVar45 * 0x20 + 0xc) = uVar56;
            *(undefined4 *)((long)local_290 + uVar45 * 0x20 + 0x10) = uVar61;
            *(undefined4 *)((long)local_290 + uVar45 * 0x20 + 0x14) = uVar54;
            uVar12 = uVar12 + 1;
          } while (uVar38 < (ulong)((long)local_270 - (long)local_278 >> 2) / 3);
        }
                    /* try { // try from 008df3cc to 008df3d3 has its CatchHandler @ 008e03f0 */
        this_00 = (IndexedTriangleSet *)operator_new(0x90);
                    /* try { // try from 008df3dc to 008df3df has its CatchHandler @ 008e0368 */
        IndexedTriangleSet::IndexedTriangleSet(this_00);
                    /* try { // try from 008df3ec to 008df40b has its CatchHandler @ 008e03f0 */
        TriangleSet::setNumVertices
                  ((TriangleSet *)this_00,(uint)((ulong)((long)local_288 - (long)local_290) >> 5),
                   0x83);
        IndexedTriangleSet::setNumIndices
                  (this_00,(uint)((ulong)((long)local_270 - (long)local_278) >> 2));
                    /* try { // try from 008df40c to 008df41f has its CatchHandler @ 008e03e4 */
        RawTransformGroup::updateWorldTransformation();
        Matrix4x4::invert3x4((Matrix4x4 *)&local_138,(Matrix4x4 *)(param_9 + 0xb8));
        if ((long)local_288 - (long)local_290 != 0) {
          uVar26 = 0;
          uVar38 = (long)local_288 - (long)local_290 >> 5;
          do {
            puVar22 = (undefined4 *)((long)local_290 + uVar26 * 0x20);
            fVar67 = (float)puVar22[4];
            fVar70 = (float)puVar22[3];
            uVar54 = NEON_fmadd(fVar70,fVar70,fVar67 * fVar67);
            fVar69 = (float)puVar22[5];
            fVar59 = (float)NEON_fmadd(fVar69,fVar69,uVar54);
            fVar55 = 1.0;
            if (1e-06 < fVar59) {
              fVar55 = 1.0 / SQRT(fVar59);
            }
            uVar41 = (uint)uVar26;
            puVar22[3] = fVar70 * fVar55;
            puVar22[4] = fVar67 * fVar55;
            puVar22[5] = fVar69 * fVar55;
            if ((uVar41 < 4) || (uVar38 - 4 <= uVar26)) {
              uVar54 = *puVar22;
              fVar67 = *(float *)((long)local_290 + uVar26 * 0x20 + 4);
              uVar56 = *(undefined4 *)((long)local_290 + uVar26 * 0x20 + 8);
            }
            else {
              uVar38 = uVar26 & 0xfffffffe;
              uVar54 = NEON_fmadd(*(undefined4 *)((long)local_290 + uVar38 * 0x20 + 0xc),param_3,
                                  *puVar22);
              fVar67 = (float)NEON_fmadd(*(undefined4 *)((long)local_290 + uVar38 * 0x20 + 0x10),
                                         param_3,*(undefined4 *)
                                                  ((long)local_290 + uVar26 * 0x20 + 4));
              uVar56 = NEON_fmadd(*(undefined4 *)((long)local_290 + uVar38 * 0x20 + 0x14),param_3,
                                  *(undefined4 *)((long)local_290 + uVar26 * 0x20 + 8));
              *puVar22 = uVar54;
              *(float *)((long)local_290 + uVar26 * 0x20 + 4) = fVar67;
              *(undefined4 *)((long)local_290 + uVar26 * 0x20 + 8) = uVar56;
            }
            uVar54 = NEON_fmadd(uVar54,(float)local_138,fVar67 * local_128);
            fVar67 = (float)NEON_fmadd(uVar56,local_118,uVar54);
            uVar54 = NEON_fmadd(*puVar22,local_138._4_4_,
                                *(float *)((long)local_290 + uVar26 * 0x20 + 4) * local_124);
            fVar69 = (float)NEON_fmadd(*(undefined4 *)((long)local_290 + uVar26 * 0x20 + 8),
                                       uStack_114,uVar54);
            local_188 = (long **)CONCAT44(fVar69 + local_104,fVar67 + local_108);
            uVar54 = NEON_fmadd(*puVar22,fStack_130,
                                *(float *)((long)local_290 + uVar26 * 0x20 + 4) * local_120);
            fVar67 = (float)NEON_fmadd(*(undefined4 *)((long)local_290 + uVar26 * 0x20 + 8),
                                       local_110,uVar54);
            local_180 = (long **)CONCAT44(local_180._4_4_,fVar67 + local_100);
                    /* try { // try from 008df564 to 008df573 has its CatchHandler @ 008e045c */
            TriangleSet::setPosition((TriangleSet *)this_00,(float *)&local_188,uVar41);
            uVar54 = NEON_fmadd(*(undefined4 *)((long)local_290 + uVar26 * 0x20 + 0xc),
                                (float)local_138,
                                *(float *)((long)local_290 + uVar26 * 0x20 + 0x10) * local_128);
            local_148 = (float)NEON_fmadd(*(undefined4 *)((long)local_290 + uVar26 * 0x20 + 0x14),
                                          local_118,uVar54);
            uVar54 = NEON_fmadd(*(undefined4 *)((long)local_290 + uVar26 * 0x20 + 0xc),
                                local_138._4_4_,
                                *(float *)((long)local_290 + uVar26 * 0x20 + 0x10) * local_124);
            local_144 = NEON_fmadd(*(undefined4 *)((long)local_290 + uVar26 * 0x20 + 0x14),
                                   uStack_114,uVar54);
            uVar54 = NEON_fmadd(*(undefined4 *)((long)local_290 + uVar26 * 0x20 + 0xc),fStack_130,
                                *(float *)((long)local_290 + uVar26 * 0x20 + 0x10) * local_120);
            local_140 = NEON_fmadd(*(undefined4 *)((long)local_290 + uVar26 * 0x20 + 0x14),local_110
                                   ,uVar54);
                    /* try { // try from 008df5e0 to 008df60b has its CatchHandler @ 008e0484 */
            TriangleSet::setNormal((TriangleSet *)this_00,&local_148,uVar41);
            TriangleSet::setTexCoord
                      ((TriangleSet *)this_00,(float *)((long)local_290 + uVar26 * 0x20 + 0x18),0,
                       uVar41);
            uVar26 = (ulong)(uVar41 + 1);
            uVar38 = (long)local_288 - (long)local_290 >> 5;
          } while (uVar26 < uVar38);
        }
        if (local_270 == local_278) {
          uVar38 = 0;
        }
        else {
          uVar26 = 0;
          do {
                    /* try { // try from 008df638 to 008df643 has its CatchHandler @ 008e0460 */
            IndexedTriangleSet::setIndex(this_00,local_278[uVar26],(uint)uVar26);
            uVar26 = (ulong)((uint)uVar26 + 1);
            uVar38 = (long)local_270 - (long)local_278 >> 2;
          } while (uVar26 < uVar38);
        }
                    /* try { // try from 008df94c to 008df9bb has its CatchHandler @ 008e0408 */
        uVar54 = IndexedTriangleSet::computeUvDensity(this_00,0,0,(uint)uVar38);
        IndexedTriangleSet::setNumSubsets(this_00,1);
        puVar22 = (undefined4 *)operator_new(0x20);
        puVar22[4] = uVar54;
        *(undefined8 *)(puVar22 + 5) = 0;
        puVar22[7] = 0;
        *puVar22 = 0;
        puVar22[1] = (int)((ulong)((long)local_288 - (long)local_290) >> 5);
        puVar22[2] = 0;
        puVar22[3] = (int)((ulong)((long)local_270 - (long)local_278) >> 2);
        IndexedTriangleSet::setSubset(this_00,(IndexedTriangleSubset *)puVar22,0);
        IndexedTriangleSet::buildTangents(this_00,0);
        lVar16 = *(long *)param_5;
        if (*(long *)(param_5 + 8) == lVar16) goto LAB_008e0070;
        uVar38 = 0;
        do {
          puVar22 = (undefined4 *)(lVar16 + uVar38 * 0xc);
          uVar54 = *puVar22;
          uVar56 = puVar22[1];
          fVar70 = (float)NEON_fmadd(local_2e0,uVar54,uVar56);
          fVar69 = (float)NEON_fmadd(fVar51,uVar54,uVar56);
          fVar67 = local_2e0;
          if (fVar70 < local_2e0) {
            fVar67 = fVar70;
          }
          fVar70 = fVar51;
          if (fVar69 < fVar51) {
            fVar70 = fVar69;
          }
          if (local_218 == local_210) {
LAB_008dfa54:
            uVar41 = 0;
          }
          else {
            uVar41 = 0;
            pfVar40 = local_218;
            while (*pfVar40 < fVar67) {
              pfVar40 = pfVar40 + 1;
              uVar41 = uVar41 + 1;
              if (pfVar40 == local_210) goto LAB_008dfa54;
            }
          }
          if (local_248 == local_240) {
LAB_008dfa88:
            uVar12 = 0;
          }
          else {
            uVar12 = 0;
            pfVar40 = local_248;
            while (*pfVar40 < fVar70) {
              pfVar40 = pfVar40 + 1;
              uVar12 = uVar12 + 1;
              if (pfVar40 == local_240) goto LAB_008dfa88;
            }
          }
          if (uVar41 == 0) {
            uVar41 = 1;
          }
          uVar29 = (ulong)((uVar41 - 1) + iVar13);
          uVar45 = (long)local_1e0 - (long)local_1e8 >> 2;
          uVar26 = 0;
          if (uVar45 != 0) {
            uVar26 = uVar29 / uVar45;
          }
          uVar31 = (uint)((ulong)((long)local_210 - (long)local_218) >> 2);
          fVar69 = local_218[uVar41] - local_218[uVar41 - 1];
          if (uVar41 + 1 <= uVar31) {
            uVar31 = uVar41 + 1;
          }
          uVar33 = 0;
          if (uVar45 != 0) {
            uVar33 = (uVar41 + iVar13) / uVar45;
          }
          fVar60 = (fVar69 - (local_218[uVar41] - fVar67)) / fVar69;
          pfVar40 = local_1b8 +
                    (ulong)*(uint *)((long)local_1e8 + (uVar29 - uVar26 * uVar45) * 4) * 8;
          fVar74 = *pfVar40;
          fVar75 = pfVar40[1];
          fVar64 = pfVar40[2];
          pfVar40 = local_1b8 +
                    (ulong)*(uint *)((long)local_1e8 +
                                    ((ulong)(uVar41 + iVar13) - uVar33 * uVar45) * 4) * 8;
          fVar52 = *pfVar40;
          fVar66 = pfVar40[1];
          fVar73 = pfVar40[2];
          fVar63 = fVar52 - fVar74;
          fVar71 = fVar66 - fVar75;
          fVar72 = fVar73 - fVar64;
          fVar67 = fVar75;
          fVar55 = fVar74;
          fVar59 = fVar64;
          if ((0.0 < fVar60) && (fVar67 = fVar66, fVar55 = fVar52, fVar59 = fVar73, fVar60 < 1.0)) {
            fVar55 = fVar74 + fVar60 * fVar63;
            fVar67 = fVar75 + fVar60 * fVar71;
            fVar59 = fVar64 + fVar60 * fVar72;
          }
          bVar10 = false;
          fVar77 = *(float *)(lVar16 + uVar38 * 0xc + 8);
          if (uVar41 != uVar31) {
            uVar54 = NEON_fmadd(fVar52 - fVar55,fVar52 - fVar55,
                                (fVar66 - fVar67) * (fVar66 - fVar67));
            fVar78 = (float)NEON_fmadd(fVar73 - fVar59,fVar73 - fVar59,uVar54);
            if (fVar78 < fVar77 * fVar77) {
              fVar82 = 1.0;
              uVar54 = NEON_fmadd(fVar63,fVar63,fVar71 * fVar71);
              fVar79 = (float)NEON_fmadd(fVar72,fVar72,uVar54);
              fVar80 = 1.0;
              if (1e-06 < fVar79) {
                fVar82 = 1.0 / SQRT(fVar79);
              }
              uVar26 = 0;
              if (uVar45 != 0) {
                uVar26 = (uVar31 + iVar13) / uVar45;
              }
              pfVar40 = local_1b8 +
                        (ulong)*(uint *)((long)local_1e8 +
                                        ((ulong)(uVar31 + iVar13) - uVar26 * uVar45) * 4) * 8;
              fVar86 = pfVar40[1] - fVar66;
              fVar87 = pfVar40[2] - fVar73;
              fVar85 = *pfVar40 - fVar52;
              uVar54 = NEON_fmadd(fVar85,fVar85,fVar86 * fVar86);
              fVar81 = (float)NEON_fmadd(fVar87,fVar87,uVar54);
              if (1e-06 < fVar81) {
                fVar80 = 1.0 / SQRT(fVar81);
              }
              uVar54 = NEON_fmadd(fVar63 * fVar82,fVar85 * fVar80,fVar71 * fVar82 * fVar86 * fVar80)
              ;
              fVar80 = (float)NEON_fmadd(fVar72 * fVar82,fVar87 * fVar80,uVar54);
              bVar10 = 0.001 < 1.0 - fVar80;
              if (0.001 < 1.0 - fVar80 && fVar77 * fVar77 < fVar79) {
                fVar60 = fVar60 - (fVar77 - SQRT(fVar78)) / fVar69;
                if (fVar60 <= 0.0) {
                  bVar10 = true;
                  fVar67 = fVar75;
                  fVar55 = fVar74;
                  fVar59 = fVar64;
                }
                else if (1.0 <= fVar60) {
                  bVar10 = true;
                  fVar67 = fVar66;
                  fVar55 = fVar52;
                  fVar59 = fVar73;
                }
                else {
                  bVar10 = true;
                  fVar67 = fVar75 + fVar71 * fVar60;
                  fVar55 = fVar74 + fVar63 * fVar60;
                  fVar59 = fVar64 + fVar72 * fVar60;
                }
              }
            }
          }
          if (uVar12 == 0) {
            uVar12 = 1;
          }
          uVar29 = (ulong)((uVar12 - 1) + iVar30);
          uVar45 = (long)local_1f8 - (long)local_200 >> 2;
          uVar26 = 0;
          if (uVar45 != 0) {
            uVar26 = uVar29 / uVar45;
          }
          fVar69 = local_248[uVar12] - local_248[uVar12 - 1];
          uVar33 = 0;
          if (uVar45 != 0) {
            uVar33 = (uVar12 + iVar30) / uVar45;
          }
          fVar75 = (fVar69 - (local_248[uVar12] - fVar70)) / fVar69;
          fVar64 = local_1d0[(ulong)*(uint *)((long)local_200 + (uVar29 - uVar26 * uVar45) * 4) * 8]
          ;
          uVar62 = *(undefined8 *)
                    (local_1d0 +
                     (ulong)*(uint *)((long)local_200 + (uVar29 - uVar26 * uVar45) * 4) * 8 + 1);
          fVar73 = local_1d0[(ulong)*(uint *)((long)local_200 +
                                             ((ulong)(uVar12 + iVar30) - uVar33 * uVar45) * 4) * 8];
          uVar76 = *(undefined8 *)
                    (local_1d0 +
                     (ulong)*(uint *)((long)local_200 +
                                     ((ulong)(uVar12 + iVar30) - uVar33 * uVar45) * 4) * 8 + 1);
          fVar60 = (float)uVar62;
          fVar74 = (float)((ulong)uVar62 >> 0x20);
          fVar52 = (float)uVar76;
          fVar66 = (float)((ulong)uVar76 >> 0x20);
          fVar70 = fVar64;
          uVar58 = uVar62;
          if ((0.0 < fVar75) && (fVar70 = fVar73, uVar58 = uVar76, fVar75 < 1.0)) {
            fVar70 = fVar64 + fVar75 * (fVar73 - fVar64);
            uVar58 = CONCAT44(fVar74 + (fVar66 - fVar74) * fVar75,
                              fVar60 + (fVar52 - fVar60) * fVar75);
          }
          if (bVar10) {
            fVar78 = fVar52 - (float)uVar58;
            fVar79 = fVar66 - (float)((ulong)uVar58 >> 0x20);
            fVar70 = (float)NEON_fmadd(fVar73 - fVar70,fVar73 - fVar70,fVar78 * fVar78);
            fVar75 = fVar75 - (fVar77 - SQRT(fVar70 + fVar79 * fVar79)) / fVar69;
            fVar70 = fVar64;
            uVar58 = uVar62;
            if ((0.0 < fVar75) && (fVar70 = fVar73, uVar58 = uVar76, fVar75 < 1.0)) {
              fVar70 = fVar64 + (fVar73 - fVar64) * fVar75;
              uVar58 = CONCAT44(fVar74 + (fVar66 - fVar74) * fVar75,
                                fVar60 + (fVar52 - fVar60) * fVar75);
            }
          }
          fVar74 = 1.0;
          uVar54 = NEON_fmadd(fVar63,fVar63,fVar71 * fVar71);
          fVar60 = (float)NEON_fmadd(fVar72,fVar72,uVar54);
          fVar69 = 1.0;
          if (1e-06 < fVar60) {
            fVar74 = 1.0 / SQRT(fVar60);
          }
          fVar64 = (float)uVar58 - fVar67;
          fVar70 = fVar70 - fVar55;
          fVar60 = (float)((ulong)uVar58 >> 0x20) - fVar59;
          uVar54 = NEON_fmadd(fVar70,fVar70,fVar64 * fVar64);
          fVar75 = (float)NEON_fmadd(fVar60,fVar60,uVar54);
          if (1e-06 < fVar75) {
            fVar69 = 1.0 / SQRT(fVar75);
          }
          fVar63 = fVar63 * fVar74;
          fVar72 = fVar72 * fVar74;
          fVar71 = fVar71 * fVar74;
          fVar66 = 1.0;
          fVar74 = (float)NEON_fmadd(fVar72,fVar70 * fVar69,fVar60 * fVar69 * -fVar63);
          fVar52 = (float)NEON_fmadd(fVar71,fVar60 * fVar69,fVar64 * fVar69 * -fVar72);
          fVar75 = (float)NEON_fmadd(fVar63,fVar64 * fVar69,fVar70 * fVar69 * -fVar71);
          uVar54 = NEON_fmadd(fVar52,fVar52,fVar74 * fVar74);
          fVar69 = (float)NEON_fmadd(fVar75,fVar75,uVar54);
          if (1e-06 < fVar69) {
            fVar66 = 1.0 / SQRT(fVar69);
          }
          fVar73 = fVar75 * fVar66;
          fVar77 = fVar74 * fVar66;
          fVar69 = fVar52 * fVar66;
          fVar52 = (float)NEON_fmadd(fVar73,fVar63,fVar72 * -(fVar52 * fVar66));
          uVar56 = NEON_fmadd(fVar77,fVar72,fVar71 * -(fVar75 * fVar66));
          fVar55 = fVar55 + fVar70 * 0.5;
          uVar65 = NEON_fmadd(fVar69,fVar71,fVar63 * -(fVar74 * fVar66));
          fVar67 = fVar67 + fVar64 * 0.5;
          uVar61 = NEON_fmadd(uVar56,(float)local_138,fVar52 * local_128);
          fVar59 = fVar59 + fVar60 * 0.5;
          uVar88 = NEON_fmadd(uVar56,local_138._4_4_,fVar52 * local_124);
          uVar54 = NEON_fmadd(uVar56,fStack_130,fVar52 * local_120);
          uVar68 = NEON_fmadd(uVar56,uStack_12c,fVar52 * fStack_11c);
          uVar57 = NEON_fmadd(uVar65,local_118,uVar61);
          uVar56 = NEON_fmadd(fVar69,(float)local_138,fVar77 * local_128);
          uVar61 = NEON_fmadd(fVar69,local_138._4_4_,fVar77 * local_124);
          uVar89 = NEON_fmadd(uVar65,uStack_114,uVar88);
          uVar54 = NEON_fmadd(uVar65,local_110,uVar54);
          uVar88 = NEON_fmadd(uVar65,uStack_10c,uVar68);
          uVar68 = NEON_fmadd(fVar69,fStack_130,fVar77 * local_120);
          uVar65 = NEON_fmadd(fVar69,uStack_12c,fVar77 * fStack_11c);
          uVar57 = NEON_fmadd(local_108,0,uVar57);
          uVar56 = NEON_fmadd(fVar73,local_118,uVar56);
          uVar90 = NEON_fmadd(local_104,0,uVar89);
          uVar61 = NEON_fmadd(fVar73,uStack_114,uVar61);
          uVar89 = NEON_fmadd(fVar73,local_110,uVar68);
          uVar68 = NEON_fmadd(fVar73,uStack_10c,uVar65);
          uVar83 = NEON_fmadd(fStack_fc,0,uVar88);
          uVar65 = NEON_fmadd(local_100,0,uVar54);
          uVar54 = NEON_fmadd(local_108,0,uVar56);
          local_188 = (long **)CONCAT44(uVar90,uVar57);
          uVar56 = NEON_fmadd(local_104,0,uVar61);
          local_170 = NEON_fmadd(local_100,0,uVar89);
          local_16c = NEON_fmadd(fStack_fc,0,uVar68);
          local_178 = CONCAT44(uVar56,uVar54);
          uVar54 = NEON_fmadd(fVar63,(float)local_138,fVar71 * local_128);
          uVar89 = NEON_fmadd(fVar63,local_138._4_4_,fVar71 * local_124);
          uVar84 = NEON_fmadd(fVar63,fStack_130,fVar71 * local_120);
          uVar56 = NEON_fmadd(fVar63,uStack_12c,fVar71 * fStack_11c);
          uVar61 = NEON_fmadd(fVar72,local_118,uVar54);
          uVar57 = NEON_fmadd(fVar55,(float)local_138,fVar67 * local_128);
          uVar68 = NEON_fmadd(fVar55,local_138._4_4_,fVar67 * local_124);
          uVar88 = NEON_fmadd(fVar55,fStack_130,fVar67 * local_120);
          uVar54 = NEON_fmadd(fVar55,uStack_12c,fVar67 * fStack_11c);
          uVar90 = NEON_fmadd(fVar72,uStack_114,uVar89);
          uVar89 = NEON_fmadd(fVar72,local_110,uVar84);
          uVar56 = NEON_fmadd(fVar72,uStack_10c,uVar56);
          local_168 = NEON_fmadd(local_108,0,uVar61);
          local_158 = (float)NEON_fmadd(fVar59,local_118,uVar57);
          local_154 = (float)NEON_fmadd(fVar59,uStack_114,uVar68);
          local_150 = (float)NEON_fmadd(fVar59,local_110,uVar88);
          local_14c = (float)NEON_fmadd(fVar59,uStack_10c,uVar54);
          local_164 = NEON_fmadd(local_104,0,uVar90);
          local_160 = NEON_fmadd(local_100,0,uVar89);
          local_15c = NEON_fmadd(fStack_fc,0,uVar56);
          local_158 = local_108 + local_158;
          local_154 = local_104 + local_154;
          local_150 = local_100 + local_150;
          local_14c = fStack_fc + local_14c;
          local_180 = (long **)CONCAT44(uVar83,uVar65);
                    /* try { // try from 008e0024 to 008e002b has its CatchHandler @ 008e0480 */
          this_01 = (TransformGroup *)operator_new(0x158);
                    /* try { // try from 008e0030 to 008e0037 has its CatchHandler @ 008e044c */
          TransformGroup::TransformGroup(this_01,"beltAttacherNode");
          param_10[uVar38] = this_01;
                    /* try { // try from 008e003c to 008e004b has its CatchHandler @ 008e0480 */
          RawTransformGroup::setTransformation
                    ((RawTransformGroup *)this_01,(Matrix4x4 *)&local_188,0);
          uVar38 = (ulong)((int)uVar38 + 1);
          lVar16 = *(long *)param_5;
          uVar26 = (*(long *)(param_5 + 8) - lVar16 >> 2) * -0x5555555555555555;
          if (uVar26 < uVar38 || uVar26 - uVar38 == 0) {
LAB_008e0070:
            if (local_290 != (void *)0x0) {
              operator_delete(local_290);
            }
            if (local_278 != (int *)0x0) {
              operator_delete(local_278);
            }
            if (local_260 != (undefined8 *)0x0) {
              operator_delete(local_260);
            }
            if (local_248 != (float *)0x0) {
              operator_delete(local_248);
            }
            if (local_230 != (undefined8 *)0x0) {
              operator_delete(local_230);
            }
            if (local_218 != (float *)0x0) {
              operator_delete(local_218);
            }
            if (local_200 != (void *)0x0) {
              local_1f8 = local_200;
              operator_delete(local_200);
            }
            if (local_1e8 != (void *)0x0) {
              local_1e0 = local_1e8;
              operator_delete(local_1e8);
            }
            if (local_1d0 != (float *)0x0) {
              local_1c8 = local_1d0;
              operator_delete(local_1d0);
            }
            if (local_1b8 != (float *)0x0) {
              local_1b0 = local_1b8;
              operator_delete(local_1b8);
            }
            if (local_f8 != (void *)0x0) {
              local_f0 = local_f8;
              operator_delete(local_f8);
            }
            if (local_1a0 != (undefined8 *)0x0) {
              local_198 = local_1a0;
              operator_delete(local_1a0);
            }
            if (*(long *)(lVar7 + 0x28) != local_b0) {
                    /* WARNING: Subroutine does not return */
              __stack_chk_fail();
            }
            return this_00;
          }
        } while( true );
      }
      local_2a8 = (ulong)(uVar41 - 1);
      bVar11 = false;
    }
    if (local_270 == local_268) {
      uVar29 = (long)local_270 - (long)local_278;
      uVar45 = ((long)uVar29 >> 2) + 1;
      if (uVar45 >> 0x3e != 0) {
                    /* try { // try from 008e01fc to 008e020b has its CatchHandler @ 008e04a8 */
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      if (uVar45 <= (ulong)((long)uVar29 >> 1)) {
        uVar45 = (long)uVar29 >> 1;
      }
      if (0x7ffffffffffffffb < uVar29) {
        uVar45 = 0x3fffffffffffffff;
      }
      if (uVar45 == 0) {
        piVar20 = (int *)0x0;
      }
      else {
        if (uVar45 >> 0x3e != 0) {
                    /* try { // try from 008e023c to 008e0253 has its CatchHandler @ 008e04a8 */
                    /* WARNING: Subroutine does not return */
          FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
        }
                    /* try { // try from 008debc4 to 008debc7 has its CatchHandler @ 008e0474 */
        piVar20 = (int *)operator_new(uVar45 << 2);
      }
      piVar50 = piVar20 + ((long)uVar29 >> 2) + 1;
      piVar20[(long)uVar29 >> 2] = iVar43;
      if (0 < (long)uVar29) {
        memcpy(piVar20,local_278,uVar29);
      }
      local_268 = piVar20 + uVar45;
      if (local_278 != (int *)0x0) {
        operator_delete(local_278);
      }
    }
    else {
      piVar50 = local_270 + 1;
      *local_270 = iVar43;
      piVar20 = local_278;
    }
    local_278 = piVar20;
    iVar46 = (int)lVar17;
    if (piVar50 == local_268) {
      uVar29 = (long)local_268 - (long)local_278;
      uVar45 = ((long)uVar29 >> 2) + 1;
      if (uVar45 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      if (uVar45 <= (ulong)((long)uVar29 >> 1)) {
        uVar45 = (long)uVar29 >> 1;
      }
      if (0x7ffffffffffffffb < uVar29) {
        uVar45 = 0x3fffffffffffffff;
      }
      if (uVar45 == 0) {
        piVar20 = (int *)0x0;
      }
      else {
        if (uVar45 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
        }
                    /* try { // try from 008dec70 to 008dec73 has its CatchHandler @ 008e0474 */
        piVar20 = (int *)operator_new(uVar45 << 2);
      }
      piVar49 = piVar20 + ((long)uVar29 >> 2) + 1;
      piVar20[(long)uVar29 >> 2] = iVar46;
      if (0 < (long)uVar29) {
        memcpy(piVar20,local_278,uVar29);
      }
      local_268 = piVar20 + uVar45;
      if (local_278 != (int *)0x0) {
        operator_delete(local_278);
      }
    }
    else {
      piVar49 = piVar50 + 1;
      *piVar50 = iVar46;
      piVar20 = local_278;
    }
    local_278 = piVar20;
    iVar44 = (int)((ulong)((long)local_288 - (long)local_290) >> 5);
    if (piVar49 < local_268) {
      piVar50 = piVar49 + 1;
      *piVar49 = iVar44;
      piVar20 = local_278;
    }
    else {
      sVar37 = (long)piVar49 - (long)local_278;
      uVar45 = ((long)sVar37 >> 2) + 1;
      if (uVar45 >> 0x3e != 0) {
                    /* try { // try from 008e01bc to 008e01c3 has its CatchHandler @ 008e048c */
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      uVar29 = (long)local_268 - (long)local_278 >> 1;
      if (uVar45 <= uVar29) {
        uVar45 = uVar29;
      }
      if (0x7ffffffffffffffb < (ulong)((long)local_268 - (long)local_278)) {
        uVar45 = 0x3fffffffffffffff;
      }
      if (uVar45 == 0) {
        piVar20 = (int *)0x0;
      }
      else {
        if (uVar45 >> 0x3e != 0) {
                    /* try { // try from 008e0224 to 008e022f has its CatchHandler @ 008e048c */
                    /* WARNING: Subroutine does not return */
          FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
        }
                    /* try { // try from 008ded28 to 008ded2b has its CatchHandler @ 008e0430 */
        piVar20 = (int *)operator_new(uVar45 << 2);
      }
      piVar50 = piVar20 + ((long)sVar37 >> 2) + 1;
      piVar20[(long)sVar37 >> 2] = iVar44;
      if (0 < (long)sVar37) {
        memcpy(piVar20,local_278,sVar37);
      }
      local_268 = piVar20 + uVar45;
      if (local_278 != (int *)0x0) {
        operator_delete(local_278);
      }
    }
    local_278 = piVar20;
    if (piVar50 < local_268) {
      piVar49 = piVar50 + 1;
      *piVar50 = iVar46 + 1;
      piVar20 = local_278;
    }
    else {
      sVar37 = (long)piVar50 - (long)local_278;
      uVar45 = ((long)sVar37 >> 2) + 1;
      if (uVar45 >> 0x3e != 0) {
                    /* try { // try from 008e01c4 to 008e01cb has its CatchHandler @ 008e0490 */
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      uVar29 = (long)local_268 - (long)local_278 >> 1;
      if (uVar45 <= uVar29) {
        uVar45 = uVar29;
      }
      if (0x7ffffffffffffffb < (ulong)((long)local_268 - (long)local_278)) {
        uVar45 = 0x3fffffffffffffff;
      }
      if (uVar45 == 0) {
        piVar20 = (int *)0x0;
      }
      else {
        if (uVar45 >> 0x3e != 0) {
                    /* try { // try from 008e0218 to 008e0223 has its CatchHandler @ 008e0490 */
                    /* WARNING: Subroutine does not return */
          FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
        }
                    /* try { // try from 008dedd8 to 008deddb has its CatchHandler @ 008e0438 */
        piVar20 = (int *)operator_new(uVar45 << 2);
      }
      piVar49 = piVar20 + ((long)sVar37 >> 2) + 1;
      piVar20[(long)sVar37 >> 2] = iVar46 + 1;
      if (0 < (long)sVar37) {
        memcpy(piVar20,local_278,sVar37);
      }
      local_268 = piVar20 + uVar45;
      if (local_278 != (int *)0x0) {
        operator_delete(local_278);
      }
    }
    local_278 = piVar20;
    if (piVar49 < local_268) {
      piVar50 = piVar49 + 1;
      *piVar49 = iVar43 + 1;
      piVar20 = local_278;
    }
    else {
      sVar37 = (long)piVar49 - (long)local_278;
      uVar45 = ((long)sVar37 >> 2) + 1;
      if (uVar45 >> 0x3e != 0) {
                    /* try { // try from 008e01b4 to 008e01bb has its CatchHandler @ 008e0494 */
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      uVar29 = (long)local_268 - (long)local_278 >> 1;
      if (uVar45 <= uVar29) {
        uVar45 = uVar29;
      }
      if (0x7ffffffffffffffb < (ulong)((long)local_268 - (long)local_278)) {
        uVar45 = 0x3fffffffffffffff;
      }
      if (uVar45 == 0) {
        piVar20 = (int *)0x0;
      }
      else {
        if (uVar45 >> 0x3e != 0) {
                    /* try { // try from 008e020c to 008e0217 has its CatchHandler @ 008e0494 */
                    /* WARNING: Subroutine does not return */
          FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
        }
                    /* try { // try from 008dee88 to 008dee8b has its CatchHandler @ 008e042c */
        piVar20 = (int *)operator_new(uVar45 << 2);
      }
      piVar50 = piVar20 + ((long)sVar37 >> 2) + 1;
      piVar20[(long)sVar37 >> 2] = iVar43 + 1;
      if (0 < (long)sVar37) {
        memcpy(piVar20,local_278,sVar37);
      }
      local_268 = piVar20 + uVar45;
      if (local_278 != (int *)0x0) {
        operator_delete(local_278);
      }
    }
    local_278 = piVar20;
    iVar46 = (int)((ulong)((long)local_288 - (long)local_290) >> 5) + 1;
    if (piVar50 < local_268) {
      local_270 = piVar50 + 1;
      *piVar50 = iVar46;
      piVar20 = local_278;
    }
    else {
      sVar37 = (long)piVar50 - (long)local_278;
      uVar45 = ((long)sVar37 >> 2) + 1;
      if (uVar45 >> 0x3e != 0) {
                    /* try { // try from 008e01cc to 008e01d3 has its CatchHandler @ 008e0488 */
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      uVar29 = (long)local_268 - (long)local_278 >> 1;
      if (uVar45 <= uVar29) {
        uVar45 = uVar29;
      }
      if (0x7ffffffffffffffb < (ulong)((long)local_268 - (long)local_278)) {
        uVar45 = 0x3fffffffffffffff;
      }
      if (uVar45 == 0) {
        piVar20 = (int *)0x0;
      }
      else {
        if (uVar45 >> 0x3e != 0) {
                    /* try { // try from 008e0230 to 008e023b has its CatchHandler @ 008e0488 */
                    /* WARNING: Subroutine does not return */
          FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
        }
                    /* try { // try from 008def48 to 008def4b has its CatchHandler @ 008e0434 */
        piVar20 = (int *)operator_new(uVar45 << 2);
      }
      local_270 = piVar20 + ((long)sVar37 >> 2) + 1;
      piVar20[(long)sVar37 >> 2] = iVar46;
      if (0 < (long)sVar37) {
        memcpy(piVar20,local_278,sVar37);
      }
      local_268 = piVar20 + uVar45;
      if (local_278 != (int *)0x0) {
        operator_delete(local_278);
      }
    }
    local_278 = piVar20;
    if (bVar11) goto LAB_008df180;
    puVar19 = local_230 + (ulong)uVar41 * 4;
    local_138 = *puVar19;
    fVar71 = *(float *)((long)puVar19 + 0x1c) -
             *(float *)((long)local_230 + local_2a8 * 0x20 + 0x1c);
    fStack_130 = *(float *)(puVar19 + 1);
    sVar37 = (long)local_288 - (long)local_290;
    lVar17 = (long)sVar37 >> 5;
    fVar71 = (float)NEON_fmadd(*(float *)(puVar19 + 3) - *(float *)(local_230 + local_2a8 * 4 + 3),
                               *(float *)(puVar19 + 3) - *(float *)(local_230 + local_2a8 * 4 + 3),
                               fVar71 * fVar71);
    fVar60 = fVar60 + SQRT(fVar71);
    fVar71 = (fVar55 / local_2e0) * param_4 * fVar60;
    if (local_288 < local_280) {
      uVar54 = *(undefined4 *)(puVar19 + 1);
      uVar58 = *puVar19;
      *(undefined8 *)((long)local_288 + 0x14) = 0;
      *(undefined8 *)((long)local_288 + 0xc) = 0;
      *(undefined4 *)(local_288 + 1) = uVar54;
      *local_288 = uVar58;
      puVar19 = local_288 + 4;
      *(float *)((long)local_288 + 0x1c) = fVar71;
      pvVar21 = local_290;
    }
    else {
      uVar45 = lVar17 + 1;
      if (uVar45 >> 0x3b != 0) {
                    /* try { // try from 008e01e0 to 008e01e7 has its CatchHandler @ 008e04a0 */
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      uVar29 = (long)local_280 - (long)local_290 >> 4;
      if (uVar45 <= uVar29) {
        uVar45 = uVar29;
      }
      if (0x7fffffffffffffdf < (ulong)((long)local_280 - (long)local_290)) {
        uVar45 = 0x7ffffffffffffff;
      }
      if (uVar45 >> 0x3b != 0) {
                    /* try { // try from 008e01f0 to 008e01fb has its CatchHandler @ 008e04a0 */
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
                    /* try { // try from 008df05c to 008df05f has its CatchHandler @ 008e0478 */
      pvVar21 = operator_new(uVar45 << 5);
      puVar19 = (undefined8 *)((long)pvVar21 + lVar17 * 0x20);
      *(undefined8 *)((long)puVar19 + 0x14) = 0;
      *puVar19 = local_138;
      *(float *)(puVar19 + 1) = fStack_130;
      *(undefined8 *)((long)puVar19 + 0xc) = 0;
      *(float *)((long)puVar19 + 0x1c) = fVar71;
      if (0 < (long)sVar37) {
        memcpy(pvVar21,local_290,sVar37);
      }
      puVar19 = puVar19 + 4;
      local_280 = (undefined8 *)((long)pvVar21 + uVar45 * 0x20);
      if (local_290 != (void *)0x0) {
        operator_delete(local_290);
      }
    }
    local_290 = pvVar21;
    puVar14 = local_230 + (ulong)uVar41 * 4;
    fStack_130 = *(float *)(puVar14 + 1);
    local_138 = *puVar14;
    if (puVar19 < local_280) {
      uVar54 = *(undefined4 *)(puVar14 + 1);
      local_288 = puVar19 + 4;
      uVar58 = *puVar14;
      *(undefined8 *)((long)puVar19 + 0x14) = 0;
      *(undefined8 *)((long)puVar19 + 0xc) = 0;
      *(undefined4 *)(puVar19 + 1) = uVar54;
      *puVar19 = uVar58;
      *(float *)((long)puVar19 + 0x1c) = fVar71;
      pvVar21 = local_290;
    }
    else {
      sVar37 = (long)puVar19 - (long)local_290;
      uVar45 = ((long)sVar37 >> 5) + 1;
      if (uVar45 >> 0x3b != 0) {
                    /* try { // try from 008e01e8 to 008e01ef has its CatchHandler @ 008e04a4 */
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      uVar29 = (long)local_280 - (long)local_290 >> 4;
      if (uVar45 <= uVar29) {
        uVar45 = uVar29;
      }
      if (0x7fffffffffffffdf < (ulong)((long)local_280 - (long)local_290)) {
        uVar45 = 0x7ffffffffffffff;
      }
      if (uVar45 >> 0x3b != 0) {
                    /* try { // try from 008e01d4 to 008e01df has its CatchHandler @ 008e04a4 */
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
                    /* try { // try from 008df120 to 008df123 has its CatchHandler @ 008e047c */
      pvVar21 = operator_new(uVar45 << 5);
      local_288 = (undefined8 *)((long)pvVar21 + ((long)sVar37 >> 5) * 0x20);
      *(undefined8 *)((long)local_288 + 0x14) = 0;
      *local_288 = local_138;
      *(float *)(local_288 + 1) = fStack_130;
      *(undefined8 *)((long)local_288 + 0xc) = 0;
      *(float *)((long)local_288 + 0x1c) = fVar71;
      if (0 < (long)sVar37) {
        memcpy(pvVar21,local_290,sVar37);
      }
      local_288 = local_288 + 4;
      local_280 = (undefined8 *)((long)pvVar21 + uVar45 * 0x20);
      if (local_290 != (void *)0x0) {
        operator_delete(local_290);
      }
    }
    local_290 = pvVar21;
    uVar41 = uVar41 + 1;
    bVar8 = bVar10;
  } while( true );
code_r0x008dd3fc:
  if (uVar12 <= *(ushort *)((long)pplVar39 + 0x1c)) goto LAB_008dd420;
LAB_008dd404:
  pplVar48 = pplVar39 + 1;
  pplVar24 = (long **)*pplVar48;
  goto joined_r0x008dd3c0;
LAB_008dd420:
  plVar25 = *pplVar48;
joined_r0x008dd434:
  if (plVar25 == (long *)0x0) {
                    /* try { // try from 008dd438 to 008dd443 has its CatchHandler @ 008e05dc */
    plVar25 = (long *)operator_new(0x20);
    *plVar25 = 0;
    plVar25[1] = 0;
    plVar25[2] = (long)pplVar39;
    *(uint *)((long)plVar25 + 0x1a) = uVar12 << 0x10 | uVar31;
    *pplVar48 = plVar25;
    if ((long **)*local_188 != (long **)0x0) {
      plVar25 = *pplVar48;
      local_188 = (long **)*local_188;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_180,(__tree_node_base *)plVar25);
    local_178 = local_178 + 1;
                    /* try { // try from 008dd4a4 to 008dd577 has its CatchHandler @ 008e05e0 */
    uVar45 = intersectWithPlane((float *)(lVar17 + (ulong)uVar31 * 0xc),
                                (float *)(lVar17 + (ulong)uVar12 * 0xc),(Matrix4x4 *)(lVar36 + 0xb8)
                                ,aPStack_e0,(Vector3 *)&local_138,(Vector3 *)&uStack_12c);
    puVar19 = local_1a0;
    if ((uVar45 & 1) != 0) {
      uVar56 = NEON_fmadd((float)local_138 - fVar74,uVar68,fVar71 * (local_138._4_4_ - fVar75));
      uVar54 = NEON_fmadd((float)local_138 - fVar74,fVar70,fVar67 * (local_138._4_4_ - fVar75));
      fStack_11c = (float)NEON_fmadd(fStack_130 - fVar64,uVar65,uVar56);
      local_120 = (float)NEON_fmadd(fStack_130 - fVar64,fVar69,uVar54);
      if (fStack_11c <= -0.0001) {
        if (local_198 == local_190) {
          uVar29 = (long)local_198 - (long)local_1a0;
          uVar45 = ((long)uVar29 >> 5) + 1;
          if (uVar45 >> 0x3b != 0) {
                    /* try { // try from 008e0178 to 008e017f has its CatchHandler @ 008e05d4 */
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__vector_base_common<true>::__throw_length_error();
          }
          if (uVar45 <= (ulong)((long)uVar29 >> 4)) {
            uVar45 = (long)uVar29 >> 4;
          }
          if (0x7fffffffffffffdf < uVar29) {
            uVar45 = 0x7ffffffffffffff;
          }
          if (uVar45 == 0) {
            puVar14 = (undefined8 *)0x0;
          }
          else {
            if (uVar45 >> 0x3b != 0) {
                    /* try { // try from 008e01a8 to 008e01b3 has its CatchHandler @ 008e05d4 */
                    /* WARNING: Subroutine does not return */
              FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
            }
            puVar14 = (undefined8 *)operator_new(uVar45 << 5);
          }
          puVar15 = puVar14 + ((long)uVar29 >> 5) * 4;
          puVar15[1] = CONCAT44(uStack_12c,fStack_130);
          *puVar15 = local_138;
          puVar15[3] = CONCAT44(fStack_11c,local_120);
          puVar15[2] = CONCAT44(local_124,local_128);
          if (0 < (long)uVar29) {
            memcpy(puVar14,puVar19,uVar29);
          }
          local_198 = puVar15 + 4;
          local_190 = puVar14 + uVar45 * 4;
          local_1a0 = puVar14;
          if (puVar19 != (undefined8 *)0x0) {
            operator_delete(puVar19);
          }
        }
        else {
          local_198[1] = CONCAT44(uStack_12c,fStack_130);
          *local_198 = local_138;
          local_198[3] = CONCAT44(fStack_11c,local_120);
          local_198[2] = CONCAT44(local_124,local_128);
          local_198 = local_198 + 4;
        }
      }
    }
  }
LAB_008dd5c8:
  lVar23 = lVar23 + 1;
  if (lVar23 == 3) goto LAB_008dd330;
  uVar3 = *(ushort *)((long)&local_f8 + lVar23 * 4);
  uVar4 = *(ushort *)((long)&local_f8 + lVar23 * 4 + 2);
  goto LAB_008dd380;
LAB_008dd330:
  uVar41 = uVar41 + 3;
  goto LAB_008dd33c;
LAB_008df180:
  puVar19 = local_260 + uVar38 * 4;
  local_138 = *puVar19;
  fVar71 = *(float *)((long)puVar19 + 0x1c) - *(float *)((long)local_260 + uVar26 * 0x20 + 0x1c);
  fStack_130 = *(float *)(puVar19 + 1);
  sVar37 = (long)local_288 - (long)local_290;
  lVar16 = (long)sVar37 >> 5;
  fVar71 = (float)NEON_fmadd(*(float *)(puVar19 + 3) - *(float *)(local_260 + uVar26 * 4 + 3),
                             *(float *)(puVar19 + 3) - *(float *)(local_260 + uVar26 * 4 + 3),
                             fVar71 * fVar71);
  fVar59 = fVar59 + SQRT(fVar71);
  fVar71 = (fVar55 / fVar51) * param_4 * fVar59;
  if (local_288 < local_280) {
    uVar58 = *puVar19;
    uVar54 = *(undefined4 *)(puVar19 + 1);
    *(undefined4 *)((long)local_288 + 0xc) = 0;
    *(undefined4 *)(local_288 + 2) = 0;
    *(float *)((long)local_288 + 0x1c) = fVar71;
    *local_288 = uVar58;
    *(undefined4 *)(local_288 + 1) = uVar54;
    puVar19 = local_288 + 4;
    *(undefined8 *)((long)local_288 + 0x14) = 0x3f80000000000000;
    pvVar21 = local_290;
  }
  else {
    uVar26 = lVar16 + 1;
    if (uVar26 >> 0x3b != 0) {
                    /* try { // try from 008e02e8 to 008e02ef has its CatchHandler @ 008e03dc */
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    uVar45 = (long)local_280 - (long)local_290 >> 4;
    if (uVar26 <= uVar45) {
      uVar26 = uVar45;
    }
    if (0x7fffffffffffffdf < (ulong)((long)local_280 - (long)local_290)) {
      uVar26 = 0x7ffffffffffffff;
    }
    if (uVar26 >> 0x3b != 0) {
                    /* try { // try from 008e02fc to 008e0307 has its CatchHandler @ 008e03dc */
                    /* WARNING: Subroutine does not return */
      FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
                    /* try { // try from 008df254 to 008df257 has its CatchHandler @ 008e0360 */
    pvVar21 = operator_new(uVar26 << 5);
    puVar19 = (undefined8 *)((long)pvVar21 + lVar16 * 0x20);
    *puVar19 = local_138;
    *(undefined4 *)((long)puVar19 + 0xc) = 0;
    *(undefined4 *)(puVar19 + 2) = 0;
    *(float *)(puVar19 + 1) = fStack_130;
    *(undefined8 *)((long)puVar19 + 0x14) = 0x3f80000000000000;
    *(float *)((long)puVar19 + 0x1c) = fVar71;
    if (0 < (long)sVar37) {
      memcpy(pvVar21,local_290,sVar37);
    }
    puVar19 = puVar19 + 4;
    local_280 = (undefined8 *)((long)pvVar21 + uVar26 * 0x20);
    if (local_290 != (void *)0x0) {
      operator_delete(local_290);
    }
  }
  local_290 = pvVar21;
  puVar14 = local_260 + uVar38 * 4;
  local_138 = *puVar14;
  fStack_130 = *(float *)(puVar14 + 1);
  if (puVar19 < local_280) {
    uVar58 = *puVar14;
    uVar54 = *(undefined4 *)(puVar14 + 1);
    *(undefined4 *)((long)puVar19 + 0xc) = 0;
    *(undefined4 *)(puVar19 + 2) = 0;
    *(float *)((long)puVar19 + 0x1c) = fVar71;
    *puVar19 = uVar58;
    local_288 = puVar19 + 4;
    *(undefined4 *)(puVar19 + 1) = uVar54;
    *(undefined8 *)((long)puVar19 + 0x14) = 0x3f80000000000000;
    pvVar21 = local_290;
  }
  else {
    sVar37 = (long)puVar19 - (long)local_290;
    uVar26 = ((long)sVar37 >> 5) + 1;
    if (uVar26 >> 0x3b != 0) {
                    /* try { // try from 008e02e0 to 008e02e7 has its CatchHandler @ 008e03e0 */
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    uVar45 = (long)local_280 - (long)local_290 >> 4;
    if (uVar26 <= uVar45) {
      uVar26 = uVar45;
    }
    if (0x7fffffffffffffdf < (ulong)((long)local_280 - (long)local_290)) {
      uVar26 = 0x7ffffffffffffff;
    }
    if (uVar26 >> 0x3b != 0) {
                    /* try { // try from 008e02f0 to 008e02fb has its CatchHandler @ 008e03e0 */
                    /* WARNING: Subroutine does not return */
      FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
                    /* try { // try from 008df34c to 008df34f has its CatchHandler @ 008e0364 */
    pvVar21 = operator_new(uVar26 << 5);
    local_288 = (undefined8 *)((long)pvVar21 + ((long)sVar37 >> 5) * 0x20);
    *local_288 = local_138;
    *(undefined4 *)((long)local_288 + 0xc) = 0;
    *(undefined4 *)(local_288 + 2) = 0;
    *(float *)(local_288 + 1) = fStack_130;
    *(undefined8 *)((long)local_288 + 0x14) = 0x3f80000000000000;
    *(float *)((long)local_288 + 0x1c) = fVar71;
    if (0 < (long)sVar37) {
      memcpy(pvVar21,local_290,sVar37);
    }
    local_288 = local_288 + 4;
    local_280 = (undefined8 *)((long)pvVar21 + uVar26 * 0x20);
    if (local_290 != (void *)0x0) {
      operator_delete(local_290);
    }
  }
  local_290 = pvVar21;
  uVar38 = (ulong)((int)uVar38 + 1);
  goto LAB_008de938;
}


