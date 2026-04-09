// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: debugDraw
// Entry Point: 0098c9cc
// Size: 1008 bytes
// Signature: undefined debugDraw(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* PlayerCenteredCollisionHeightmap::debugDraw() */

void PlayerCenteredCollisionHeightmap::debugDraw(void)

{
  undefined4 *puVar1;
  long lVar2;
  long lVar3;
  uint *in_x0;
  DeferredDebugRenderer *pDVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  uint uVar13;
  uint uVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float local_c8;
  undefined4 uStack_c4;
  float local_c0;
  float local_b8;
  undefined4 local_b4;
  float local_b0;
  float afStack_a8 [4];
  long local_98;
  
  lVar3 = tpidr_el0;
  local_98 = *(long *)(lVar3 + 0x28);
  Vector4::set((Vector4 *)afStack_a8,1.0,0.2,1.0,1.0);
  uVar6 = in_x0[1];
  if (uVar6 != 0) {
    uVar13 = in_x0[7];
    uVar14 = in_x0[8];
    fVar16 = (float)in_x0[4];
    uVar8 = 0;
    uVar5 = (ulong)*in_x0;
    uVar12 = uVar5;
    do {
      if ((int)uVar12 != 0) {
        lVar9 = 0;
        uVar10 = 0;
        do {
          lVar11 = *(long *)(in_x0 + 0xc);
          uVar12 = (ulong)(uVar8 * (int)uVar12);
          puVar1 = (undefined4 *)(lVar11 + uVar12 * 8 + lVar9);
          if (*(char *)(puVar1 + 1) != '\0') {
            fVar15 = (float)in_x0[4];
            uVar17 = *puVar1;
            fVar20 = (float)NEON_fmadd((float)(ulong)uVar8,fVar15,fVar16 * (float)uVar14);
            fVar19 = (float)NEON_fmadd((float)(uVar10 & 0xffffffff),fVar15,fVar16 * (float)uVar13);
            fVar18 = fVar15 + fVar20;
            fVar15 = fVar15 + fVar19;
            local_c8 = fVar15;
            uStack_c4 = uVar17;
            local_c0 = fVar20;
            local_b8 = fVar19;
            local_b4 = uVar17;
            local_b0 = fVar20;
            EngineManager::getInstance();
            pDVar4 = (DeferredDebugRenderer *)Renderer::getDeferredDebugRenderer();
            DeferredDebugRenderer::addLine(pDVar4,&local_b8,afStack_a8,&local_c8,afStack_a8,0x400);
            local_c8 = fVar15;
            uStack_c4 = uVar17;
            local_c0 = fVar18;
            local_b8 = fVar15;
            local_b4 = uVar17;
            local_b0 = fVar20;
            EngineManager::getInstance();
            pDVar4 = (DeferredDebugRenderer *)Renderer::getDeferredDebugRenderer();
            DeferredDebugRenderer::addLine(pDVar4,&local_b8,afStack_a8,&local_c8,afStack_a8,0x400);
            local_c8 = fVar19;
            uStack_c4 = uVar17;
            local_c0 = fVar18;
            local_b8 = fVar15;
            local_b4 = uVar17;
            local_b0 = fVar18;
            EngineManager::getInstance();
            pDVar4 = (DeferredDebugRenderer *)Renderer::getDeferredDebugRenderer();
            DeferredDebugRenderer::addLine(pDVar4,&local_b8,afStack_a8,&local_c8,afStack_a8,0x400);
            local_c8 = fVar19;
            uStack_c4 = uVar17;
            local_c0 = fVar20;
            local_b8 = fVar19;
            local_b4 = uVar17;
            local_b0 = fVar20;
            EngineManager::getInstance();
            pDVar4 = (DeferredDebugRenderer *)Renderer::getDeferredDebugRenderer();
            DeferredDebugRenderer::addLine(pDVar4,&local_b8,afStack_a8,&local_c8,afStack_a8,0x400);
            uVar6 = *in_x0;
            lVar2 = lVar11 + (uVar12 - uVar6) * 8 + lVar9;
            lVar7 = -(ulong)uVar6;
            if ((lVar9 != 0 && uVar8 != 0) && (*(char *)(lVar2 + -4) != '\0')) {
              local_b4 = *(undefined4 *)(lVar2 + -8);
              local_c8 = fVar19;
              uStack_c4 = uVar17;
              local_c0 = fVar20;
              local_b8 = fVar19;
              local_b0 = fVar20;
              EngineManager::getInstance();
              pDVar4 = (DeferredDebugRenderer *)Renderer::getDeferredDebugRenderer();
              DeferredDebugRenderer::addLine(pDVar4,&local_b8,afStack_a8,&local_c8,afStack_a8,0x400)
              ;
              uVar6 = *in_x0;
              lVar7 = -(ulong)uVar6;
            }
            lVar2 = lVar11 + (lVar7 + uVar12) * 8 + lVar9;
            if ((uVar10 != uVar6 - 1 && uVar8 != 0) && (*(char *)(lVar2 + 0xc) != '\0')) {
              local_b4 = *(undefined4 *)(lVar2 + 8);
              local_c8 = fVar15;
              uStack_c4 = uVar17;
              local_c0 = fVar20;
              local_b8 = fVar15;
              local_b0 = fVar20;
              EngineManager::getInstance();
              pDVar4 = (DeferredDebugRenderer *)Renderer::getDeferredDebugRenderer();
              DeferredDebugRenderer::addLine(pDVar4,&local_b8,afStack_a8,&local_c8,afStack_a8,0x400)
              ;
            }
            if (((lVar9 != 0) && (uVar8 != in_x0[1] - 1)) &&
               (*(char *)(lVar11 + (*in_x0 + uVar12) * 8 + lVar9 + -4) != '\0')) {
              local_b4 = *(undefined4 *)(lVar11 + (*in_x0 + uVar12) * 8 + lVar9 + -8);
              local_c8 = fVar19;
              uStack_c4 = uVar17;
              local_c0 = fVar18;
              local_b8 = fVar19;
              local_b0 = fVar18;
              EngineManager::getInstance();
              pDVar4 = (DeferredDebugRenderer *)Renderer::getDeferredDebugRenderer();
              DeferredDebugRenderer::addLine(pDVar4,&local_b8,afStack_a8,&local_c8,afStack_a8,0x400)
              ;
            }
            uVar5 = (ulong)*in_x0;
            if (((uVar10 != *in_x0 - 1) && (uVar8 != in_x0[1] - 1)) &&
               (*(char *)(lVar11 + (uVar5 + uVar12) * 8 + lVar9 + 0xc) != '\0')) {
              local_b4 = *(undefined4 *)(lVar11 + (uVar5 + uVar12) * 8 + lVar9 + 8);
              local_c8 = fVar15;
              uStack_c4 = uVar17;
              local_c0 = fVar18;
              local_b8 = fVar15;
              local_b0 = fVar18;
              EngineManager::getInstance();
              pDVar4 = (DeferredDebugRenderer *)Renderer::getDeferredDebugRenderer();
              DeferredDebugRenderer::addLine(pDVar4,&local_b8,afStack_a8,&local_c8,afStack_a8,0x400)
              ;
              uVar5 = (ulong)*in_x0;
            }
          }
          uVar10 = uVar10 + 1;
          lVar9 = lVar9 + 8;
          uVar12 = uVar5;
        } while (uVar10 < uVar5);
        uVar6 = in_x0[1];
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar6);
  }
  if (*(long *)(lVar3 + 0x28) != local_98) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


