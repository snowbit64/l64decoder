// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: renderOverlays
// Entry Point: 006f727c
// Size: 984 bytes
// Signature: undefined __thiscall renderOverlays(TextureOverlayRenderer * this, SharedRenderArgs * param_1)


/* TextureOverlayRenderer::renderOverlays(SharedRenderArgs const&) */

void __thiscall
TextureOverlayRenderer::renderOverlays(TextureOverlayRenderer *this,SharedRenderArgs *param_1)

{
  long **pplVar1;
  TextureOverlayRenderer TVar2;
  undefined4 uVar3;
  int iVar4;
  long *plVar5;
  void *__dest;
  ulong uVar6;
  undefined4 *puVar7;
  ResourceManager *this_00;
  undefined8 uVar8;
  uint uVar9;
  long lVar10;
  long *plVar11;
  uint uVar12;
  void *__src;
  float fVar13;
  float fVar14;
  
  if ((this[0x47c] == (TextureOverlayRenderer)0x0) || (*(int *)(this + 0x480) == 0)) {
    *(undefined4 *)(this + 0x480) = 0;
    return;
  }
  plVar5 = (long *)(**(code **)(**(long **)param_1 + 0x138))();
  plVar11 = *(long **)(this + 0x458);
  uVar3 = (**(code **)(*plVar11 + 0x20))(plVar11);
  __dest = (void *)(**(code **)(*plVar11 + 0x10))(plVar11,plVar5,0,uVar3,1);
  __src = *(void **)(this + 0x4f0);
  uVar6 = (**(code **)(**(long **)(this + 0x458) + 0x20))();
  memcpy(__dest,__src,uVar6 & 0xffffffff);
  (**(code **)(**(long **)(this + 0x458) + 0x18))(*(long **)(this + 0x458),plVar5);
  (**(code **)(*plVar5 + 0x50))(plVar5,this + 0x458,1,*(undefined8 *)(this + 0x28));
  (**(code **)(*plVar5 + 0x58))(plVar5,*(undefined8 *)(this + 0x450));
  pplVar1 = (long **)(this + 0x488);
  uVar6 = (**(code **)(**(long **)(this + 0x488) + 0x18))();
  uVar12 = *(uint *)(PixelFormatUtil::s_pixelFormats + (uVar6 & 0xffffffff) * 0x18 + 0xc);
  if ((uVar12 >> 3 & 1) == 0) {
    if ((uVar12 >> 4 & 1) == 0) {
      uVar12 = 0;
      fVar14 = 1.0;
      goto LAB_006f73dc;
    }
    uVar9 = 0x7fffffff;
    if ((uVar12 & 0x80) == 0) {
      uVar9 = 0xffffffff;
    }
  }
  else {
    uVar9 = 0xffff;
    if ((uVar12 & 0x80) != 0) {
      uVar9 = 0x7fff;
    }
  }
  uVar12 = 4;
  fVar14 = 1.0 / (float)(ulong)uVar9;
LAB_006f73dc:
  iVar4 = (**(code **)(**pplVar1 + 0x10))();
  if (iVar4 == 3) {
    uVar9 = uVar12 | 1;
  }
  else {
    iVar4 = (**(code **)(**pplVar1 + 0x10))();
    uVar9 = uVar12 | 8;
    if (iVar4 != 2) {
      uVar9 = uVar12;
    }
  }
  if (*(long *)(this + 0x4a0) != 0) {
    uVar9 = uVar9 | 2;
  }
  if (*(int *)(this + 0x498) != *(int *)(this + 0x478)) {
    uVar9 = uVar9 | 0x10;
  }
  uVar6 = (ulong)uVar9;
  (**(code **)(*plVar5 + 0x48))(plVar5,*(undefined8 *)(this + uVar6 * 0x20 + 0x38));
  iVar4 = *(int *)(this + uVar6 * 0x20 + 0x40);
  if (-1 < iVar4) {
    (**(code **)(*plVar5 + 0x68))(plVar5,iVar4,*pplVar1);
  }
  if (-1 < *(int *)(this + uVar6 * 0x20 + 0x44)) {
    (**(code **)(*plVar5 + 0x80))
              (plVar5,*(int *)(this + uVar6 * 0x20 + 0x44),*(undefined8 *)(this + 0x490));
  }
  iVar4 = *(int *)(this + uVar6 * 0x20 + 0x48);
  if (-1 < iVar4) {
    lVar10 = *(long *)(this + 0x4a0);
    if (lVar10 == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined8 *)(lVar10 + 0x68);
    }
    (**(code **)(*plVar5 + 0x68))(plVar5,iVar4,uVar8);
  }
  if (-1 < *(int *)(this + uVar6 * 0x20 + 0x4c)) {
    (**(code **)(*plVar5 + 0x80))
              (plVar5,*(int *)(this + uVar6 * 0x20 + 0x4c),*(undefined8 *)(this + 0x4a8));
  }
  iVar4 = *(int *)(this + uVar6 * 0x20 + 0x50);
  if (-1 < iVar4) {
    puVar7 = (undefined4 *)(**(code **)(*plVar5 + 0xa0))(plVar5,iVar4,*(undefined8 *)(this + 0x460))
    ;
    TVar2 = this[0x4b0];
    uVar8 = *(undefined8 *)(this + 0x460);
    *puVar7 = *(undefined4 *)(this + 0x4b4);
    uVar3 = *(undefined4 *)(this + 0x498);
    puVar7[1] = *(undefined4 *)(this + 0x4b8);
    fVar13 = *(float *)(this + 0x4bc);
    puVar7[6] = uVar3;
    lVar10 = *plVar5;
    iVar4 = *(int *)(this + uVar6 * 0x20 + 0x50);
    puVar7[2] = 1.0 / fVar13;
    fVar13 = *(float *)(this + 0x4c0);
    puVar7[5] = fVar14;
    uVar3 = 0;
    if (TVar2 != (TextureOverlayRenderer)0x0) {
      uVar3 = 0x3f800000;
    }
    puVar7[4] = uVar3;
    puVar7[3] = 1.0 / fVar13;
    (**(code **)(lVar10 + 0xa8))(plVar5,iVar4,uVar8);
  }
  (**(code **)(*plVar5 + 0xb0))(plVar5,*(undefined8 *)this);
  (**(code **)(*plVar5 + 0xc0))(plVar5,*(undefined8 *)(this + 8));
  (**(code **)(*plVar5 + 0xb8))(plVar5,*(undefined8 *)(this + 0x18));
  (**(code **)(*plVar5 + 0xe8))(plVar5,*(int *)(this + 0x480) * 6,0,0,0,0);
  iVar4 = *(int *)(this + uVar6 * 0x20 + 0x40);
  if (-1 < iVar4) {
    (**(code **)(*plVar5 + 0x68))(plVar5,iVar4,0);
  }
  iVar4 = *(int *)(this + uVar6 * 0x20 + 0x48);
  if (-1 < iVar4) {
    (**(code **)(*plVar5 + 0x68))(plVar5,iVar4,0);
  }
  *(undefined4 *)(this + 0x480) = 0;
  *pplVar1 = (long *)0x0;
  *(undefined8 *)(this + 0x490) = 0;
  if (*(long *)(this + 0x4a0) != 0) {
    this_00 = (ResourceManager *)ResourceManager::getInstance();
    ResourceManager::release(this_00,*(Resource **)(this + 0x4a0));
    *(long *)(this + 0x4a0) = 0;
    *(undefined8 *)(this + 0x4a8) = 0;
    this[0x4b0] = (TextureOverlayRenderer)0x0;
    *(undefined8 *)(this + 0x4bc) = 0;
    *(undefined8 *)(this + 0x4b4) = 0;
  }
  return;
}


