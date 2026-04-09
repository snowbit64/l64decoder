// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: enqueueClearArea
// Entry Point: 006f7654
// Size: 788 bytes
// Signature: undefined __thiscall enqueueClearArea(TextureOverlayRenderer * this, float param_1, float param_2, float param_3, float param_4, float param_5, float param_6, float param_7, SharedRenderArgs * param_8)


/* TextureOverlayRenderer::enqueueClearArea(float, float, float, float, float, float, float,
   SharedRenderArgs const&) */

void __thiscall
TextureOverlayRenderer::enqueueClearArea
          (TextureOverlayRenderer *this,float param_1,float param_2,float param_3,float param_4,
          float param_5,float param_6,float param_7,SharedRenderArgs *param_8)

{
  long lVar1;
  long *plVar2;
  void *__dest;
  ulong uVar3;
  float *pfVar4;
  long *plVar5;
  void *__src;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  undefined4 uVar17;
  float local_c8;
  float fStack_c4;
  float local_b8;
  float fStack_b4;
  undefined4 local_a8;
  undefined4 uStack_a4;
  float local_98;
  float fStack_94;
  long local_88;
  
  lVar1 = tpidr_el0;
  local_88 = *(long *)(lVar1 + 0x28);
  if (this[0x47c] != (TextureOverlayRenderer)0x0) {
    renderOverlays(this,param_8);
    prepareTransformation
              (this,(Matrix4x4 *)&local_c8,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
    uVar11 = NEON_fmadd(local_c8,0,local_b8);
    uVar13 = NEON_fmadd(fStack_c4,0,fStack_b4);
    uVar15 = NEON_fmadd(local_c8,0,local_b8 * 0.0);
    uVar17 = NEON_fmadd(fStack_c4,0,fStack_b4 * 0.0);
    fVar12 = (float)NEON_fmadd(local_a8,0,uVar11);
    fVar14 = (float)NEON_fmadd(uStack_a4,0,uVar13);
    fVar7 = (float)NEON_fmadd(local_a8,0,local_c8 + local_b8);
    fVar16 = (float)NEON_fmadd(local_a8,0,uVar15);
    fVar9 = (float)NEON_fmadd(uStack_a4,0,uVar17);
    pfVar4 = (float *)(*(long *)(this + 0x4f0) + (ulong)(uint)(*(int *)(this + 0x480) << 2) * 0x1c);
    fVar8 = (float)NEON_fmadd(local_a8,0,local_c8 + local_b8 * 0.0);
    fVar10 = (float)NEON_fmadd(uStack_a4,0,fStack_c4 + fStack_b4 * 0.0);
    fVar6 = (float)NEON_fmadd(uStack_a4,0,fStack_c4 + fStack_b4);
    *(undefined8 *)(pfVar4 + 5) = 0;
    *pfVar4 = local_98 + fVar16;
    pfVar4[1] = fStack_94 + fVar9;
    pfVar4[2] = -NAN;
    *(undefined8 *)(pfVar4 + 3) = 0;
    pfVar4[7] = fVar12 + local_98;
    pfVar4[8] = fVar14 + fStack_94;
    pfVar4[9] = -NAN;
    *(undefined8 *)(pfVar4 + 10) = 0;
    *(undefined8 *)(pfVar4 + 0xc) = 0;
    pfVar4[0xe] = local_98 + fVar8;
    pfVar4[0xf] = fStack_94 + fVar10;
    pfVar4[0x10] = -NAN;
    *(undefined8 *)(pfVar4 + 0x13) = 0;
    *(undefined8 *)(pfVar4 + 0x11) = 0;
    pfVar4[0x15] = fVar7 + local_98;
    pfVar4[0x16] = fVar6 + fStack_94;
    pfVar4[0x17] = -NAN;
    *(undefined8 *)(pfVar4 + 0x18) = 0;
    *(undefined8 *)(pfVar4 + 0x1a) = 0;
    plVar2 = (long *)(**(code **)(**(long **)param_8 + 0x138))();
    plVar5 = *(long **)(this + 0x458);
    uVar11 = (**(code **)(*plVar5 + 0x20))(plVar5);
    __dest = (void *)(**(code **)(*plVar5 + 0x10))(plVar5,plVar2,0,uVar11,1);
    __src = *(void **)(this + 0x4f0);
    uVar3 = (**(code **)(**(long **)(this + 0x458) + 0x20))();
    memcpy(__dest,__src,uVar3 & 0xffffffff);
    (**(code **)(**(long **)(this + 0x458) + 0x18))(*(long **)(this + 0x458),plVar2);
    (**(code **)(*plVar2 + 0x50))(plVar2,this + 0x458,1,*(undefined8 *)(this + 0x28));
    (**(code **)(*plVar2 + 0x58))(plVar2,*(undefined8 *)(this + 0x450));
    (**(code **)(*plVar2 + 0x48))(plVar2,*(undefined8 *)(this + 0x38));
    if (-1 < *(int *)(this + 0x40)) {
      (**(code **)(*plVar2 + 0x68))(plVar2,*(int *)(this + 0x40),*(undefined8 *)(this + 0x20));
    }
    if (-1 < *(int *)(this + 0x44)) {
      (**(code **)(*plVar2 + 0x80))(plVar2,*(int *)(this + 0x44),*(undefined8 *)(this + 0x468));
    }
    (**(code **)(*plVar2 + 0xb0))(plVar2,*(undefined8 *)this);
    (**(code **)(*plVar2 + 0xc0))(plVar2,*(undefined8 *)(this + 0x10));
    (**(code **)(*plVar2 + 0xb8))(plVar2,*(undefined8 *)(this + 0x18));
    (**(code **)(*plVar2 + 0xe8))(plVar2,6,0,0,0,0);
    if (-1 < *(int *)(this + 0x40)) {
      (**(code **)(*plVar2 + 0x68))(plVar2,*(int *)(this + 0x40),0);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_88) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


