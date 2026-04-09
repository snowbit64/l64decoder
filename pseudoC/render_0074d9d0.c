// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: render
// Entry Point: 0074d9d0
// Size: 1216 bytes
// Signature: undefined render(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DebugMarkerManager::render() */

void DebugMarkerManager::render(void)

{
  TransformGroup **ppTVar1;
  TransformGroup TVar2;
  long lVar3;
  TransformGroup **ppTVar4;
  DeferredDebugRenderer **in_x0;
  long lVar5;
  DeferredDebugRenderer *pDVar6;
  EntityRegistryManager *this;
  ulong uVar7;
  uint uVar8;
  TransformGroup *pTVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  TransformGroup **local_228;
  TransformGroup **local_220;
  undefined8 local_218;
  float local_210;
  float fStack_20c;
  float local_208;
  undefined4 local_204;
  float local_200;
  float fStack_1fc;
  float local_1f8;
  undefined4 local_1f4;
  float local_1f0;
  float fStack_1ec;
  float local_1e8;
  undefined4 local_1e4;
  undefined8 local_1e0;
  undefined4 local_1d8;
  undefined4 local_1d4;
  float local_1d0;
  float fStack_1cc;
  float local_1c8;
  undefined **local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  float afStack_c8 [4];
  long local_b8;
  
  lVar3 = tpidr_el0;
  local_b8 = *(long *)(lVar3 + 0x28);
  if (*(DebugMarkerManager *)((long)in_x0 + 0xc4) != (DebugMarkerManager)0x0) {
    lVar5 = EngineManager::getInstance();
    in_x0[1] = *(DeferredDebugRenderer **)(lVar5 + 0xb8);
    pDVar6 = (DeferredDebugRenderer *)Renderer::getDeferredDebugRenderer();
    *in_x0 = pDVar6;
    lVar5 = EngineManager::getInstance();
    in_x0[2] = *(DeferredDebugRenderer **)(lVar5 + 0xf8);
    lVar5 = Renderer::getCamera();
    RawTransformGroup::updateWorldTransformation();
    local_228 = (TransformGroup **)0x0;
    local_220 = (TransformGroup **)0x0;
    uVar11 = *(undefined4 *)(lVar5 + 0xf0);
    local_218 = 0;
    in_x0[0x17] = *(DeferredDebugRenderer **)(lVar5 + 0xe8);
    *(undefined4 *)(in_x0 + 0x18) = uVar11;
                    /* try { // try from 0074da60 to 0074da6f has its CatchHandler @ 0074de94 */
    this = (EntityRegistryManager *)EntityRegistryManager::getInstance();
    EntityRegistryManager::getEntitiesByTypes(this,0x20,(vector *)&local_228);
                    /* try { // try from 0074da74 to 0074da77 has its CatchHandler @ 0074de90 */
    lVar5 = Renderer::getFrustum();
    ppTVar4 = local_220;
    uStack_1b0 = *(undefined8 *)(lVar5 + 0x10);
    local_1b8 = *(undefined8 *)(lVar5 + 8);
    uStack_1a0 = *(undefined8 *)(lVar5 + 0x20);
    local_1a8 = *(undefined8 *)(lVar5 + 0x18);
    uStack_190 = *(undefined8 *)(lVar5 + 0x30);
    local_198 = *(undefined8 *)(lVar5 + 0x28);
    local_1c0 = &PTR__CullingBody_00fea1a8;
    uStack_180 = *(undefined8 *)(lVar5 + 0x40);
    local_188 = *(undefined8 *)(lVar5 + 0x38);
    uStack_150 = *(undefined8 *)(lVar5 + 0x70);
    local_158 = *(undefined8 *)(lVar5 + 0x68);
    uStack_160 = *(undefined8 *)(lVar5 + 0x60);
    local_168 = *(undefined8 *)(lVar5 + 0x58);
    uStack_170 = *(undefined8 *)(lVar5 + 0x50);
    local_178 = *(undefined8 *)(lVar5 + 0x48);
    uStack_140 = *(undefined8 *)(lVar5 + 0x80);
    local_148 = *(undefined8 *)(lVar5 + 0x78);
    uStack_110 = *(undefined8 *)(lVar5 + 0xb0);
    local_118 = *(undefined8 *)(lVar5 + 0xa8);
    uStack_120 = *(undefined8 *)(lVar5 + 0xa0);
    local_128 = *(undefined8 *)(lVar5 + 0x98);
    uStack_130 = *(undefined8 *)(lVar5 + 0x90);
    local_138 = *(undefined8 *)(lVar5 + 0x88);
    uStack_e0 = *(undefined8 *)(lVar5 + 0xe0);
    local_e8 = *(undefined8 *)(lVar5 + 0xd8);
    local_d8 = *(undefined8 *)(lVar5 + 0xe8);
    uStack_100 = *(undefined8 *)(lVar5 + 0xc0);
    local_108 = *(undefined8 *)(lVar5 + 0xb8);
    uStack_f0 = *(undefined8 *)(lVar5 + 0xd0);
    local_f8 = *(undefined8 *)(lVar5 + 200);
    for (ppTVar1 = local_228; ppTVar1 != ppTVar4; ppTVar1 = ppTVar1 + 1) {
      pTVar9 = *ppTVar1;
      TVar2 = pTVar9[300];
      if ((byte)TVar2 != 0) {
                    /* try { // try from 0074db6c to 0074db73 has its CatchHandler @ 0074dea0 */
        RawTransformGroup::updateWorldTransformation();
        local_1d0 = *(float *)(pTVar9 + 0xe8);
        fStack_1cc = *(float *)(pTVar9 + 0xec);
        local_1c8 = *(float *)(pTVar9 + 0xf0);
        fVar12 = fStack_1cc - *(float *)((long)in_x0 + 0xbc);
        uVar11 = NEON_fmadd(fVar12,fVar12,
                            (local_1d0 - *(float *)(in_x0 + 0x17)) *
                            (local_1d0 - *(float *)(in_x0 + 0x17)));
        fVar12 = (float)NEON_fmadd(local_1c8 - *(float *)(in_x0 + 0x18),
                                   local_1c8 - *(float *)(in_x0 + 0x18),uVar11);
        if (fVar12 <= 22500.0) {
          fVar12 = SQRT(fVar12);
          fVar15 = 1.0;
          if ((byte)TVar2 - 2 < 2) {
            if (10.0 <= fVar12) {
              if (40.0 < fVar12) {
                fVar15 = fVar12 / 40.0;
              }
            }
            else {
              fVar15 = fVar12 / 10.0;
            }
          }
          else if (TVar2 == (TransformGroup)0x1) {
            if (10.0 <= fVar12) {
              if (fVar12 <= 40.0) {
                fVar15 = (float)NEON_fmadd((fVar12 + -10.0) / 30.0,0xbca3d70a,0x3cf5c28f);
              }
              else {
                fVar15 = 0.01;
              }
            }
            else {
              fVar15 = 0.03;
            }
          }
                    /* try { // try from 0074dc68 to 0074dc87 has its CatchHandler @ 0074dea4 */
          fVar10 = (float)getRadius((DebugMarkerManager *)in_x0,pTVar9,(uchar)TVar2,fVar15);
          uVar7 = Frustum::sphereInFrustumNonVirtual
                            ((Frustum *)&local_1c0,(Vector3 *)&local_1d0,fVar10);
          if ((uVar7 & 1) != 0) {
            fVar10 = 1.0;
            if (100.0 < fVar12) {
              fVar10 = (fVar12 + -100.0) / -50.0 + 1.0;
            }
                    /* try { // try from 0074dcb8 to 0074dcbf has its CatchHandler @ 0074de9c */
            RawTransformGroup::updateWorldTransformation();
            local_210 = *(float *)(pTVar9 + 0xb8);
            fStack_20c = *(float *)(pTVar9 + 0xbc);
            local_208 = *(float *)(pTVar9 + 0xc0);
            fVar14 = 1.0;
            uVar11 = NEON_fmadd(local_210,local_210,fStack_20c * fStack_20c);
            fVar13 = (float)NEON_fmadd(local_208,local_208,uVar11);
            fVar12 = 1.0;
            if (1e-06 < fVar13) {
              fVar14 = 1.0 / SQRT(fVar13);
            }
            local_200 = *(float *)(pTVar9 + 200);
            fStack_1fc = *(float *)(pTVar9 + 0xcc);
            uVar11 = NEON_fmadd(local_200,local_200,fStack_1fc * fStack_1fc);
            local_1f8 = *(float *)(pTVar9 + 0xd0);
            fVar13 = (float)NEON_fmadd(local_1f8,local_1f8,uVar11);
            if (1e-06 < fVar13) {
              fVar12 = 1.0 / SQRT(fVar13);
            }
            local_1f0 = *(float *)(pTVar9 + 0xd8);
            fStack_1ec = *(float *)(pTVar9 + 0xdc);
            uVar11 = NEON_fmadd(local_1f0,local_1f0,fStack_1ec * fStack_1ec);
            local_1e8 = *(float *)(pTVar9 + 0xe0);
            fVar16 = (float)NEON_fmadd(local_1e8,local_1e8,uVar11);
            fVar13 = 1.0;
            if (1e-06 < fVar16) {
              fVar13 = 1.0 / SQRT(fVar16);
            }
            local_210 = local_210 * fVar14;
            fStack_20c = fStack_20c * fVar14;
            local_208 = local_208 * fVar14;
            local_200 = local_200 * fVar12;
            fStack_1fc = fStack_1fc * fVar12;
            local_1f8 = local_1f8 * fVar12;
            local_204 = 0;
            local_1f0 = local_1f0 * fVar13;
            fStack_1ec = fStack_1ec * fVar13;
            local_1e8 = local_1e8 * fVar13;
            local_1e0 = *(undefined8 *)(pTVar9 + 0xe8);
            uVar8 = 0;
            if ((byte)pTVar9[0x12d] < 0x10) {
              uVar8 = (uint)(byte)pTVar9[0x12d];
            }
            local_1d8 = *(undefined4 *)(pTVar9 + 0xf0);
            local_1f4 = 0;
            local_1e4 = 0;
            local_1d4 = 0x3f800000;
            if (TVar2 == (TransformGroup)0x1) {
                    /* try { // try from 0074db40 to 0074db53 has its CatchHandler @ 0074de98 */
              renderNameTag((DebugMarkerManager *)in_x0,(Matrix4x4 *)&local_210,(uchar)uVar8,fVar15,
                            fVar10,*(char **)(pTVar9 + 8));
            }
            else if (TVar2 == (TransformGroup)0x2) {
              lVar5 = (ulong)uVar8 * 0xc;
              Vector4::set((Vector4 *)afStack_c8,*(float *)(s_colors + lVar5),
                           *(float *)(s_colors + lVar5 + 4),*(float *)(s_colors + lVar5 + 8),fVar10)
              ;
              DeferredDebugRenderer::addSolidMesh
                        (*in_x0,(Matrix4x4 *)&local_210,afStack_c8,(float *)s_diamondVerts,
                         (ushort *)s_diamondIndices,8,fVar15,0x7ff,true);
            }
            else if (TVar2 == (TransformGroup)0x3) {
                    /* try { // try from 0074ddc4 to 0074de33 has its CatchHandler @ 0074de98 */
              renderDiamondWithArrows
                        ((DebugMarkerManager *)in_x0,(Matrix4x4 *)&local_210,(uchar)uVar8,fVar15,
                         fVar10);
            }
          }
        }
      }
    }
    if (local_228 != (TransformGroup **)0x0) {
      local_220 = local_228;
      operator_delete(local_228);
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_b8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


