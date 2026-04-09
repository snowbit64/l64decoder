// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: renderVideoOverlayImmediate
// Entry Point: 006f7c04
// Size: 868 bytes
// Signature: undefined __thiscall renderVideoOverlayImmediate(TextureOverlayRenderer * this, ITextureObject * param_1, ITextureObject * param_2, ITextureObject * param_3, ISamplerObject * param_4, float param_5, float param_6, float param_7, float param_8, SharedRenderArgs * param_9)


/* TextureOverlayRenderer::renderVideoOverlayImmediate(ITextureObject*, ITextureObject*,
   ITextureObject*, ISamplerObject*, float, float, float, float, SharedRenderArgs const&) */

void __thiscall
TextureOverlayRenderer::renderVideoOverlayImmediate
          (TextureOverlayRenderer *this,ITextureObject *param_1,ITextureObject *param_2,
          ITextureObject *param_3,ISamplerObject *param_4,float param_5,float param_6,float param_7,
          float param_8,SharedRenderArgs *param_9)

{
  long lVar1;
  long *plVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  float fVar16;
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
  if (*(int *)(this + 0x480) != 0) {
    renderOverlays(this,param_9);
  }
  prepareTransformation(this,(Matrix4x4 *)&local_c8,param_5,param_6,param_7,param_8,0.0,0.0,0.0);
  plVar2 = (long *)(**(code **)(**(long **)param_9 + 0x138))();
  pfVar3 = (float *)(**(code **)(**(long **)(this + 0x458) + 0x10))
                              (*(long **)(this + 0x458),plVar2,0,0x40,1);
  uVar12 = NEON_fmadd(fStack_c4,0,fStack_b4);
  uVar10 = NEON_fmadd(local_c8,0,local_b8);
  *(undefined8 *)(pfVar3 + 6) = 0;
  uVar14 = NEON_fmadd(local_c8,0,local_b8 * 0.0);
  uVar15 = NEON_fmadd(fStack_c4,0,fStack_b4 * 0.0);
  fVar13 = (float)NEON_fmadd(uStack_a4,0,uVar12);
  fVar11 = (float)NEON_fmadd(local_a8,0,uVar10);
  fVar4 = (float)NEON_fmadd(local_a8,0,local_c8 + local_b8);
  fVar5 = (float)NEON_fmadd(uStack_a4,0,fStack_c4 + fStack_b4);
  fVar7 = (float)NEON_fmadd(local_a8,0,uVar14);
  fVar6 = (float)NEON_fmadd(local_a8,0,local_c8 + local_b8 * 0.0);
  fVar16 = (float)NEON_fmadd(uStack_a4,0,uVar15);
  fVar9 = (float)NEON_fmadd(uStack_a4,0,fStack_c4 + fStack_b4 * 0.0);
  pfVar3[5] = fVar13 + fStack_94;
  *(undefined8 *)(pfVar3 + 2) = 0x3f80000000000000;
  *pfVar3 = local_98 + fVar7;
  uVar8 = NEON_fmov(0x3f800000,4);
  pfVar3[8] = local_98 + fVar6;
  pfVar3[4] = fVar11 + local_98;
  pfVar3[1] = fStack_94 + fVar16;
  pfVar3[9] = fStack_94 + fVar9;
  *(undefined8 *)(pfVar3 + 10) = uVar8;
  pfVar3[0xc] = fVar4 + local_98;
  pfVar3[0xd] = fVar5 + fStack_94;
  *(undefined8 *)(pfVar3 + 0xe) = 0x3f800000;
  (**(code **)(**(long **)(this + 0x458) + 0x18))(*(long **)(this + 0x458),plVar2);
  (**(code **)(*plVar2 + 0xb0))(plVar2,*(undefined8 *)this);
  (**(code **)(*plVar2 + 0xc0))(plVar2,*(undefined8 *)(this + 8));
  (**(code **)(*plVar2 + 0xb8))(plVar2,*(undefined8 *)(this + 0x18));
  (**(code **)(*plVar2 + 0x50))(plVar2,this + 0x458,1,*(undefined8 *)(this + 0x30));
  (**(code **)(*plVar2 + 0x58))(plVar2,*(undefined8 *)(this + 0x450));
  (**(code **)(*plVar2 + 0x48))(plVar2,*(undefined8 *)(this + 0x438));
  if (*(int *)(this + 0x440) != -1) {
    (**(code **)(*plVar2 + 0x68))(plVar2,*(int *)(this + 0x440),param_1);
  }
  if (*(int *)(this + 0x444) != -1) {
    (**(code **)(*plVar2 + 0x68))(plVar2,*(int *)(this + 0x444),param_2);
  }
  if (*(int *)(this + 0x448) != -1) {
    (**(code **)(*plVar2 + 0x68))(plVar2,*(int *)(this + 0x448),param_3);
  }
  if (*(int *)(this + 0x44c) != -1) {
    (**(code **)(*plVar2 + 0x80))(plVar2,*(int *)(this + 0x44c),param_4);
  }
  (**(code **)(*plVar2 + 0xe8))(plVar2,6,0,0,0,0);
  if (*(int *)(this + 0x440) != -1) {
    (**(code **)(*plVar2 + 0x68))(plVar2,*(int *)(this + 0x440),0);
  }
  if (*(int *)(this + 0x444) != -1) {
    (**(code **)(*plVar2 + 0x68))(plVar2,*(int *)(this + 0x444),0);
  }
  if (*(int *)(this + 0x448) != -1) {
    (**(code **)(*plVar2 + 0x68))(plVar2,*(int *)(this + 0x448),0);
  }
  if (*(long *)(lVar1 + 0x28) == local_88) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


