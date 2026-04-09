// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: update
// Entry Point: 006f93a0
// Size: 648 bytes
// Signature: undefined __cdecl update(uint param_1, float param_2)


/* BillboardShape::update(unsigned int, float) */

void BillboardShape::update(uint param_1,float param_2)

{
  BillboardShape BVar1;
  long lVar2;
  AdsBrockerManager **this;
  EntityRegistryManager *this_00;
  GsShape *pGVar3;
  long lVar4;
  ulong uVar5;
  uint extraout_w1;
  Renderer *pRVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  float fVar17;
  undefined4 uVar18;
  float local_98;
  float fStack_94;
  float local_90;
  float local_8c;
  float fStack_88;
  float local_84;
  float local_80;
  float fStack_7c;
  long local_78;
  
  this = (AdsBrockerManager **)(ulong)param_1;
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  this_00 = (EntityRegistryManager *)EntityRegistryManager::getInstance();
  pGVar3 = (GsShape *)EntityRegistryManager::getEntityById(this_00,*(uint *)((long)this + 0xc));
  if ((pGVar3 == (GsShape *)0x0) || (((byte)pGVar3[0x11] >> 3 & 1) == 0)) {
    pGVar3 = (GsShape *)0x0;
    *(BillboardShape *)(this + 1) = (BillboardShape)0x1;
    BVar1 = *(BillboardShape *)((long)this + 9);
  }
  else {
    BVar1 = *(BillboardShape *)((long)this + 9);
  }
  if (BVar1 == (BillboardShape)0x0) {
    init();
    *(BillboardShape *)((long)this + 9) = (BillboardShape)0x1;
    BVar1 = *(BillboardShape *)(this + 1);
  }
  else {
    BVar1 = *(BillboardShape *)(this + 1);
  }
  if ((BVar1 == (BillboardShape)0x0) && (this[5] != (AdsBrockerManager *)0x0)) {
    fVar7 = (float)GiantsAdPlacement::getAngleThreshold();
    fVar8 = (float)GiantsAdPlacement::getMinVisibleArea();
    fVar9 = (float)GiantsAdPlacement::getMaxVisibleArea();
    lVar4 = EngineManager::getInstance();
    pRVar6 = *(Renderer **)(lVar4 + 0xb8);
    lVar4 = Renderer::getCamera();
    if (lVar4 == 0) {
      uVar16 = 0;
      fVar17 = 0.0;
      uVar18 = 0xbf800000;
    }
    else {
      RawTransformGroup::updateWorldTransformation();
      uVar16 = *(undefined4 *)(lVar4 + 0xd8);
      fVar17 = *(float *)(lVar4 + 0xdc);
      uVar18 = *(undefined4 *)(lVar4 + 0xe0);
    }
    RawTransformGroup::updateWorldTransformation();
    uVar13 = *(undefined4 *)(this + 7);
    fVar10 = *(float *)((long)this + 0x3c);
    uVar15 = *(undefined4 *)(this + 8);
    uVar11 = NEON_fmadd(uVar13,*(undefined4 *)(pGVar3 + 0xbc),fVar10 * *(float *)(pGVar3 + 0xcc));
    uVar14 = NEON_fmadd(uVar13,*(undefined4 *)(pGVar3 + 0xb8),fVar10 * *(float *)(pGVar3 + 200));
    fVar12 = (float)NEON_fmadd(uVar15,*(undefined4 *)(pGVar3 + 0xdc),uVar11);
    uVar14 = NEON_fmadd(uVar15,*(undefined4 *)(pGVar3 + 0xd8),uVar14);
    uVar11 = NEON_fmadd(uVar13,*(undefined4 *)(pGVar3 + 0xc0),fVar10 * *(float *)(pGVar3 + 0xd0));
    uVar11 = NEON_fmadd(uVar15,*(undefined4 *)(pGVar3 + 0xe0),uVar11);
    uVar16 = NEON_fmadd(uVar14,uVar16,fVar17 * fVar12);
    fVar10 = (float)NEON_fmadd(uVar11,uVar18,uVar16);
    fVar17 = -1.0;
    if ((-1.0 <= fVar10) && (fVar17 = 1.0, fVar10 <= 1.0)) {
      fVar17 = fVar10;
    }
    fVar10 = acosf(fVar17);
    fVar17 = 0.0;
    if (ABS(fVar10) <= fVar7) {
      uVar5 = getVisibleAreaPoints((BillboardShape *)this,pGVar3,pRVar6,&local_98);
      fVar17 = 0.0;
      if ((uVar5 & 1) != 0) {
        fVar7 = (float)NEON_fmadd(fStack_94 - local_84,local_80 - local_90,
                                  (local_8c - fStack_7c) * (local_98 - fStack_88));
        fVar7 = ABS(fVar7) * 0.5;
        if ((fVar8 <= fVar7) && (fVar7 <= fVar9)) {
          uVar5 = AdsBrockerManager::overlapOcclusionRegion(*this,&local_98);
          fVar17 = fVar7;
          if ((uVar5 & 1) == 0) {
            updateRays((BillboardShape *)this,pGVar3);
          }
          else {
            *(BillboardShape *)((long)this + 0x74) = (BillboardShape)0x1;
          }
        }
      }
    }
    if (*(BillboardShape *)((long)this + 0x74) != (BillboardShape)0x0) {
      fVar17 = 0.0;
    }
    GiantsAdPlacement::track((GiantsAdPlacement *)this[5],fVar17,fVar10);
    if (this[5][0x3c] != (AdsBrockerManager)0x0) {
      debugRender((BillboardShape *)this,extraout_w1,fVar10,pGVar3);
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


