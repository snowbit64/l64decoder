// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: init
// Entry Point: 00a186f8
// Size: 352 bytes
// Signature: undefined __thiscall init(RenderList * this, CullingArgs * param_1)


/* RenderList::init(CullingArgs const*) */

void __thiscall RenderList::init(RenderList *this,CullingArgs *param_1)

{
  uint uVar1;
  long lVar2;
  undefined4 uVar3;
  
  *(CullingArgs **)(this + 0x28) = param_1;
  if ((char)param_1[0x3a8] < '\0') {
    uVar1 = 0;
    if (*(uint *)(param_1 + 0x3b8) != 0) {
      uVar1 = *(uint *)(param_1 + 0x3b4) / *(uint *)(param_1 + 0x3b8);
    }
    lVar2 = OcclusionCullingManager::createOcclusionCulling
                      ((OcclusionCullingManager *)
                       OcclusionCullingManager::s_occlusionCullingManagerInstance,uVar1 * 0x2d0,
                       0x2d0);
    *(long *)(this + 8) = lVar2;
    uVar3 = Camera::getNearClip();
    *(undefined4 *)(lVar2 + 8) = uVar3;
  }
  this[0x50] = (RenderList)0x0;
  if (*(long *)(this + 0x60) != *(long *)(this + 0x58)) {
    *(long *)(this + 0x60) = *(long *)(this + 0x58);
  }
  if (*(long *)(this + 0x78) != *(long *)(this + 0x70)) {
    *(long *)(this + 0x78) = *(long *)(this + 0x70);
  }
  if (*(long *)(this + 0xa8) != *(long *)(this + 0xa0)) {
    *(long *)(this + 0xa8) = *(long *)(this + 0xa0);
  }
  if (*(long *)(this + 0xd8) != *(long *)(this + 0xd0)) {
    *(long *)(this + 0xd8) = *(long *)(this + 0xd0);
  }
  if (*(long *)(this + 0x90) != *(long *)(this + 0x88)) {
    *(long *)(this + 0x90) = *(long *)(this + 0x88);
  }
  if (*(long *)(this + 0xc0) != *(long *)(this + 0xb8)) {
    *(long *)(this + 0xc0) = *(long *)(this + 0xb8);
  }
  if (*(long *)(this + 0xf0) != *(long *)(this + 0xe8)) {
    *(long *)(this + 0xf0) = *(long *)(this + 0xe8);
  }
  *(undefined4 *)(this + 0x2ac) = 0;
  *(undefined4 *)(this + 0x2cc) = 0;
  if (*(long *)(this + 0x40) != *(long *)(this + 0x38)) {
    *(long *)(this + 0x40) = *(long *)(this + 0x38);
  }
  lVar2 = *(long *)(this + 0x20);
  if (*(float *)(*(long *)(lVar2 + 0x30) + 8) != 0.0) {
    ShadowRenderController::reset
              ((ShadowRenderController *)(this + 0x2d8),param_1,*(bool *)(lVar2 + 0x27),
               *(uint *)(lVar2 + 0x28));
  }
  if (((byte)param_1[0x3a8] & 1) == 0) {
    return;
  }
  LightList::resetList();
  LightList::setCameraFarDistance(*(LightList **)(this + 0x30),250.0);
  LightList::setRenderSize
            (*(LightList **)(this + 0x30),*(uint *)(param_1 + 0x3b4),*(uint *)(param_1 + 0x3b8));
  return;
}


