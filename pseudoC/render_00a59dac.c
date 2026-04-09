// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: render
// Entry Point: 00a59dac
// Size: 672 bytes
// Signature: undefined render(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* NoteNode::render() */

void NoteNode::render(void)

{
  char *pcVar1;
  char *pcVar2;
  long lVar3;
  ulong uVar4;
  long in_x0;
  SharedRenderArgs *pSVar5;
  TextureOverlayRenderer *this;
  ITextureObject *pIVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  uint local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_98;
  float fStack_94;
  float local_90;
  undefined8 local_88;
  float local_80;
  long local_78;
  
  lVar3 = tpidr_el0;
  local_78 = *(long *)(lVar3 + 0x28);
  if ((*(byte *)(in_x0 + 0x40) >> 1 & 1) != 0) {
    pcVar1 = (char *)(in_x0 + 0x159);
    uVar4 = (ulong)(*(byte *)(in_x0 + 0x158) >> 1);
    if ((*(byte *)(in_x0 + 0x158) & 1) != 0) {
      pcVar1 = *(char **)(in_x0 + 0x168);
      uVar4 = *(ulong *)(in_x0 + 0x160);
    }
    pcVar2 = *(char **)(in_x0 + 8);
    if (uVar4 != 0) {
      pcVar2 = pcVar1;
    }
    RawTransformGroup::updateWorldTransformation();
    local_88 = *(undefined8 *)(in_x0 + 0xe8);
    local_80 = *(float *)(in_x0 + 0xf0);
    Renderer::projectClipCoords
              (*(Renderer **)(in_x0 + 0x180),(Vector3 *)&local_88,(Vector3 *)&local_98);
    local_ac = 0;
    fVar10 = local_90 + local_90;
    if (*(char *)(in_x0 + 0x1cc) != '\0') {
      fVar10 = 0.02;
    }
    uVar7 = FontOverlayRenderer::getTextWidth
                      (*(FontOverlayRenderer **)(in_x0 + 0x188),fVar10,false,0,pcVar2);
    fVar8 = (float)FontOverlayRenderer::getTextHeight
                             (*(FontOverlayRenderer **)(in_x0 + 0x188),fVar10,false,0,pcVar2,
                              &local_ac);
    fVar11 = (float)NEON_ucvtf(local_ac);
    fVar11 = fVar8 / fVar11;
    fVar12 = fVar11 * 0.3;
    fVar14 = (float)NEON_fmadd(fVar12,0x40000000,uVar7);
    fVar13 = (float)NEON_fmadd(fVar12,0x40000000,fVar8);
    fVar16 = fStack_94 - fVar13 * 0.5;
    fVar15 = local_98 - fVar14 * 0.5;
    fVar9 = *(float *)(in_x0 + 0x174);
    FontOverlayRenderer::setColor(*(FontOverlayRenderer **)(in_x0 + 0x188),fVar9,fVar9,fVar9,1.0);
    FontOverlayRenderer::xyprintf
              (*(FontOverlayRenderer **)(in_x0 + 0x188),(local_98 + fVar12) - fVar14 * 0.5,
               (fVar11 * 0.2 + (fVar8 - fVar11) + fStack_94 + fVar12) - fVar13 * 0.5,fVar10,0,pcVar2
              );
    this = *(TextureOverlayRenderer **)(in_x0 + 400);
    pIVar6 = *(ITextureObject **)(*(long *)(in_x0 + 0x178) + 0x68);
    pSVar5 = (SharedRenderArgs *)Renderer::getSharedRenderArgs();
    TextureOverlayRenderer::enqueueOverlay
              (this,pIVar6,(ISamplerObject *)0x0,0,fVar15,fVar16,fVar14,fVar13,0xffffffff,0xffffffff
               ,0xffffffff,0xffffffff,0.0,0.0,0.0,1.0,1.0,1.0,1.0,0.0,0.0,0.0,0.0,0.0,false,pSVar5);
    *(float *)(in_x0 + 0x1a0) = fVar14;
    local_a4 = (float)NEON_fmadd(fVar13,0x3f000000,local_a4);
    *(float *)(in_x0 + 0x1a4) = fVar13;
    *(float *)(in_x0 + 0x198) = fVar15;
    *(float *)(in_x0 + 0x19c) = fVar16;
    local_a8 = NAN;
    Renderer::unProjectClipCoords
              (*(Renderer **)(in_x0 + 0x180),(Vector3 *)&local_98,(Vector3 *)&local_a8);
    uVar7 = NEON_fmadd(local_88._4_4_ - local_a4,local_88._4_4_ - local_a4,
                       ((float)local_88 - local_a8) * ((float)local_88 - local_a8));
    fVar10 = (float)NEON_fmadd(local_80 - local_a0,local_80 - local_a0,uVar7);
    *(float *)(in_x0 + 0x1c8) = SQRT(fVar10);
  }
  if (*(long *)(lVar3 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


