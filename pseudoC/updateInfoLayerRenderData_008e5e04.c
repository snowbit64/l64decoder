// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateInfoLayerRenderData
// Entry Point: 008e5e04
// Size: 1236 bytes
// Signature: undefined __thiscall updateInfoLayerRenderData(BaseTerrain * this, uint param_1, uint param_2, bool param_3, int param_4, int param_5, uint param_6, uint param_7)


/* BaseTerrain::updateInfoLayerRenderData(unsigned int, unsigned int, bool, int, int, unsigned int,
   unsigned int) */

void __thiscall
BaseTerrain::updateInfoLayerRenderData
          (BaseTerrain *this,uint param_1,uint param_2,bool param_3,int param_4,int param_5,
          uint param_6,uint param_7)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  char cVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  long *plVar14;
  undefined8 uVar15;
  ITextureObject *pIVar16;
  void *pvVar17;
  ulong uVar18;
  int iVar19;
  long *plVar20;
  undefined uVar21;
  char cVar22;
  ulong uVar23;
  long *plVar24;
  int iVar25;
  uint uVar26;
  uint uVar27;
  float fVar28;
  DensityMapModifier aDStack_f8 [48];
  void *local_c8;
  uint local_c0;
  undefined8 local_bc;
  uint local_b4;
  uint uStack_b0;
  undefined8 local_ac;
  undefined8 uStack_a4;
  undefined4 local_9c;
  undefined local_98;
  undefined8 local_94;
  undefined8 local_8c;
  undefined8 uStack_84;
  undefined4 local_7c;
  char *local_78;
  long local_70;
  
  uVar18 = (ulong)param_1;
  lVar8 = tpidr_el0;
  local_70 = *(long *)(lVar8 + 0x28);
  if ((*(long *)(this + 0xe8) != 0) &&
     (uVar23 = (*(long *)(this + 0x58) - *(long *)(this + 0x50) >> 3) * 0x2e8ba2e8ba2e8ba3,
     uVar18 <= uVar23 && uVar23 - uVar18 != 0)) {
    plVar24 = (long *)(*(long *)(this + 0x50) + uVar18 * 0x58 + 0x38);
    uVar9 = (**(code **)(**(long **)(*plVar24 + 0x20) + 0x48))();
    uVar10 = (**(code **)(**(long **)(*plVar24 + 0x20) + 0x50))();
    RenderDeviceManager::getInstance();
    plVar14 = (long *)RenderDeviceManager::getCurrentRenderDevice();
    plVar20 = *(long **)(*(long *)(this + 0xe8) + 0x68);
    if ((plVar20 == (long *)0x0) ||
       ((uVar11 = (**(code **)(*plVar20 + 0x20))(plVar20), uVar11 != uVar9 ||
        (uVar11 = (**(code **)(**(long **)(*(long *)(this + 0xe8) + 0x68) + 0x28))(),
        uVar11 != uVar10)))) {
      local_c0 = local_c0 & 0xffff0000;
      local_98 = 0;
      local_9c = 5;
      local_7c = 0;
      uStack_a4 = 0;
      local_ac = 0x100000001;
      local_bc = 0xffffffff00000000;
      uStack_84 = 0x3f80000000000000;
      local_8c = 0;
      local_c8 = (void *)0x0;
      local_94 = 0x100000004;
      local_78 = "BaseTerrainInfoLayer";
      local_b4 = uVar9;
      uStack_b0 = uVar10;
      uVar15 = (**(code **)(*plVar14 + 0x138))(plVar14);
      pIVar16 = (ITextureObject *)(**(code **)(*plVar14 + 0x100))(plVar14,uVar15,&local_c8);
      Texture::setITextureObject(*(Texture **)(this + 0xe8),pIVar16,true);
      if (*(void **)(this + 0xf0) != (void *)0x0) {
        operator_delete__(*(void **)(this + 0xf0));
      }
      pvVar17 = operator_new__((ulong)(uVar9 * uVar10 * 4));
      param_5 = 0;
      param_4 = 0;
      *(void **)(this + 0xf0) = pvVar17;
      param_7 = uVar10;
      param_6 = uVar9;
    }
    uVar11 = uVar9;
    uVar2 = uVar10;
    if ((param_6 | param_7 | param_5 | param_4) != 0) {
      uVar11 = param_6;
      uVar2 = param_7;
    }
    if ((*(long *)(this + 0xe8) != 0) && (*(long *)(this + 0xf0) != 0)) {
      plVar20 = *(long **)(*(long *)(this + 0xe8) + 0x68);
      DensityMapModifier::DensityMapModifier(aDStack_f8,*(DensityMap **)(*plVar24 + 0x20));
                    /* try { // try from 008e6010 to 008e6013 has its CatchHandler @ 008e62d8 */
      uVar12 = (**(code **)(**(long **)(*plVar24 + 0x20) + 0x58))();
      fVar28 = powf((float)(ulong)(uint)(1 << (ulong)(uVar12 & 0x1f)),0.3333333);
      uVar12 = uVar9 - 1;
      if (param_4 <= (int)(uVar9 - 1)) {
        uVar12 = param_4;
      }
      uVar3 = 0;
      if (-1 < param_4) {
        uVar3 = uVar12;
      }
      uVar12 = uVar10 - 1;
      if (param_5 <= (int)(uVar10 - 1)) {
        uVar12 = param_5;
      }
      uVar11 = uVar11 + param_4;
      uVar27 = 0;
      if (-1 < param_5) {
        uVar27 = uVar12;
      }
      uVar12 = uVar9;
      if ((int)uVar11 <= (int)uVar9) {
        uVar12 = uVar11;
      }
      uVar2 = uVar2 + param_5;
      uVar4 = 0;
      if (-1 < (int)uVar11) {
        uVar4 = uVar12;
      }
      uVar11 = uVar10;
      if ((int)uVar2 <= (int)uVar10) {
        uVar11 = uVar2;
      }
      uVar12 = 0;
      if (-1 < (int)uVar2) {
        uVar12 = uVar11;
      }
      if ((int)uVar27 < (int)uVar12) {
        uVar11 = (uint)fVar28;
        cVar5 = '\0';
        if (uVar11 != 0) {
          cVar5 = (char)(0xb4 / uVar11);
        }
        uVar2 = uVar11 * uVar11;
        iVar25 = (uVar3 + uVar27 * uVar9) * 4;
        do {
          if ((int)uVar3 < (int)uVar4) {
            iVar1 = iVar25;
            uVar26 = uVar3;
            do {
                    /* try { // try from 008e6148 to 008e6157 has its CatchHandler @ 008e62e0 */
              uVar13 = DensityMapModifier::readValue(aDStack_f8,uVar26,uVar27);
              if (uVar13 == param_2) {
                cVar22 = -1;
                uVar21 = 0xff;
                *(undefined *)(*(long *)(this + 0xf0) + (long)iVar1) = 0xff;
                *(undefined *)(*(long *)(this + 0xf0) + (long)(iVar1 + 1)) = 0xff;
                iVar19 = iVar1;
              }
              else {
                iVar19 = (uVar27 * uVar9 + uVar26) * 4;
                if ((uVar13 == 0) || (!param_3)) {
                  cVar22 = '\0';
                  uVar21 = 0;
                  *(undefined *)(*(long *)(this + 0xf0) + (long)iVar1) = 0;
                  *(undefined *)(*(long *)(this + 0xf0) + (long)(iVar1 + 1)) = 0;
                }
                else {
                  uVar7 = 0;
                  if (uVar2 != 0) {
                    uVar7 = uVar13 / uVar2;
                  }
                  uVar13 = uVar13 - uVar2 * uVar7;
                  cVar6 = '\0';
                  if (uVar11 != 0) {
                    cVar6 = (char)(uVar13 / uVar11);
                  }
                  *(char *)(*(long *)(this + 0xf0) + (long)iVar1) =
                       ((char)uVar13 - cVar6 * (char)uVar11) * cVar5 + '%';
                  cVar22 = (char)uVar7 * cVar5 + '%';
                  uVar21 = 0xff;
                  *(char *)(*(long *)(this + 0xf0) + (long)(iVar1 + 1)) = cVar6 * cVar5 + '%';
                }
              }
              uVar26 = uVar26 + 1;
              iVar1 = iVar1 + 4;
              *(char *)(*(long *)(this + 0xf0) + ((long)iVar19 | 2U)) = cVar22;
              *(undefined *)(*(long *)(this + 0xf0) + ((long)iVar19 | 3U)) = uVar21;
            } while (uVar4 != uVar26);
          }
          uVar27 = uVar27 + 1;
          iVar25 = iVar25 + uVar9 * 4;
        } while (uVar27 != uVar12);
      }
                    /* try { // try from 008e61f0 to 008e6297 has its CatchHandler @ 008e62dc */
      uVar15 = (**(code **)(*plVar14 + 0x138))();
      (**(code **)(*plVar20 + 0x68))(plVar20,uVar15,0,0,0,0,uVar9,uVar10,0,1,1,&local_c8);
      PixelFormatUtil::convertPixelFormat
                (*(void **)(this + 0xf0),0,0,5,local_c8,local_c0,0,5,uVar9,uVar10,1);
      uVar15 = (**(code **)(*plVar14 + 0x138))();
      (**(code **)(*plVar20 + 0x70))(plVar20,uVar15,&local_c8);
      DensityMapModifier::~DensityMapModifier(aDStack_f8);
    }
  }
  if (*(long *)(lVar8 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


