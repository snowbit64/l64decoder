// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: renderDrawDataScreenSpace
// Entry Point: 009fcb18
// Size: 440 bytes
// Signature: undefined __thiscall renderDrawDataScreenSpace(DeferredDebugRenderer * this, DrawData * param_1, ICommandBuffer * param_2, RenderArgs * param_3)


/* DeferredDebugRenderer::renderDrawDataScreenSpace(DeferredDebugRenderer::DrawData const&,
   ICommandBuffer*, RenderArgs const&) const */

void __thiscall
DeferredDebugRenderer::renderDrawDataScreenSpace
          (DeferredDebugRenderer *this,DrawData *param_1,ICommandBuffer *param_2,RenderArgs *param_3
          )

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  void *local_50;
  void *local_48;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar7 = *(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48);
  uVar3 = (uint)(uVar7 >> 2);
  if (6 < uVar3) {
    iVar5 = (int)((uVar7 >> 2 & 0xffffffff) * 0x24924925 >> 0x20);
    std::__ndk1::vector<float,std::__ndk1::allocator<float>>::vector
              ((vector<float,std::__ndk1::allocator<float>> *)&local_50,(vector *)(param_1 + 0x48));
    uVar4 = (uint)((ulong)((long)local_48 - (long)local_50) >> 2);
    if (uVar4 != 0) {
      uVar6 = 0;
      do {
        uVar7 = (ulong)uVar6;
        lVar8 = (ulong)(uVar6 + 1) * 4;
        uVar1 = uVar6 + 2;
        uVar6 = uVar6 + 7;
        fVar9 = (float)NEON_fmadd(*(undefined4 *)((long)local_50 + lVar8),0x40000000,0xbf800000);
        uVar10 = NEON_fmadd(*(undefined4 *)((long)local_50 + uVar7 * 4),0x40000000,0xbf800000);
        uVar11 = NEON_fmadd(uVar10,*(undefined4 *)(param_3 + 0x15c),
                            fVar9 * *(float *)(param_3 + 0x16c));
        fVar12 = (float)NEON_fmadd(*(undefined4 *)(param_3 + 0x17c),0x3c23d70a,uVar11);
        fVar13 = 1.0 / (*(float *)(param_3 + 0x18c) + fVar12);
        uVar11 = NEON_fmadd(uVar10,*(undefined4 *)(param_3 + 0x150),
                            fVar9 * *(float *)(param_3 + 0x160));
        uVar16 = NEON_fmadd(uVar10,*(undefined4 *)(param_3 + 0x154),
                            fVar9 * *(float *)(param_3 + 0x164));
        uVar10 = NEON_fmadd(uVar10,*(undefined4 *)(param_3 + 0x158),
                            fVar9 * *(float *)(param_3 + 0x168));
        fVar15 = (float)NEON_fmadd(*(undefined4 *)(param_3 + 0x170),0x3c23d70a,uVar11);
        fVar12 = (float)NEON_fmadd(*(undefined4 *)(param_3 + 0x174),0x3c23d70a,uVar16);
        fVar17 = *(float *)(param_3 + 0x184);
        fVar9 = (float)NEON_fmadd(*(undefined4 *)(param_3 + 0x178),0x3c23d70a,uVar10);
        fVar14 = *(float *)(param_3 + 0x188);
        *(float *)((long)local_50 + uVar7 * 4) = (*(float *)(param_3 + 0x180) + fVar15) * fVar13;
        *(float *)((long)local_50 + lVar8) = (fVar17 + fVar12) * fVar13;
        *(float *)((long)local_50 + (ulong)uVar1 * 4) = (fVar14 + fVar9) * fVar13;
      } while (uVar6 < uVar4);
    }
                    /* try { // try from 009fcc80 to 009fcc97 has its CatchHandler @ 009fccd0 */
    (**(code **)(*(long *)param_2 + 0x108))
              (param_2,local_50,0x1c,(long)local_50 + 0xc,0x1c,0,iVar5 + (uVar3 - iVar5 >> 1) >> 2);
    if (local_50 != (void *)0x0) {
      local_48 = local_50;
      operator_delete(local_50);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


