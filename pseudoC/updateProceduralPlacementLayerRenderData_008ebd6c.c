// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateProceduralPlacementLayerRenderData
// Entry Point: 008ebd6c
// Size: 1200 bytes
// Signature: undefined __thiscall updateProceduralPlacementLayerRenderData(BaseTerrain * this, uint param_1, uint param_2, bool param_3, int param_4, int param_5, uint param_6, uint param_7)


/* BaseTerrain::updateProceduralPlacementLayerRenderData(unsigned int, unsigned int, bool, int, int,
   unsigned int, unsigned int) */

void __thiscall
BaseTerrain::updateProceduralPlacementLayerRenderData
          (BaseTerrain *this,uint param_1,uint param_2,bool param_3,int param_4,int param_5,
          uint param_6,uint param_7)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  char cVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  undefined8 uVar17;
  ITextureObject *pIVar18;
  void *pvVar19;
  long *plVar20;
  long *plVar21;
  int iVar22;
  uint uVar23;
  float fVar24;
  uint local_d8;
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
  
  lVar9 = tpidr_el0;
  local_70 = *(long *)(lVar9 + 0x28);
  if (*(long *)(this + 0xe8) == 0) goto LAB_008ec1d8;
  lVar14 = ProceduralPlacementManager::getInstance();
  cVar8 = *(char *)(lVar14 + 0x108);
  lVar14 = ProceduralPlacementManager::getInstance();
  if (cVar8 == '\0') {
    lVar7 = *(long *)(lVar14 + 0x50);
    lVar14 = *(long *)(lVar14 + 0x58);
    lVar15 = ProceduralPlacementManager::getInstance();
    uVar10 = (uint)((ulong)(lVar14 - lVar7) >> 3);
    if (param_1 < (int)((ulong)(*(long *)(lVar15 + 0x70) - *(long *)(lVar15 + 0x68)) >> 3) + uVar10)
    {
      lVar14 = ProceduralPlacementManager::getInstance();
      if (param_1 < uVar10) {
        lVar14 = *(long *)(lVar14 + 0x50);
        goto LAB_008ebe20;
      }
      plVar21 = *(long **)(*(long *)(lVar14 + 0x68) + (ulong)(param_1 - uVar10) * 8);
      goto LAB_008ebe24;
    }
    ProceduralPlacementManager::getInstance();
    plVar21 = (long *)ProceduralPlacementManager::getBlockMask();
    local_d8 = 1;
  }
  else {
    if ((uint)((ulong)(*(long *)(lVar14 + 0x88) - *(long *)(lVar14 + 0x80)) >> 3) <= param_1)
    goto LAB_008ec1d8;
    lVar14 = ProceduralPlacementManager::getInstance();
    lVar14 = *(long *)(lVar14 + 0x80);
LAB_008ebe20:
    plVar21 = *(long **)(lVar14 + (ulong)param_1 * 8);
LAB_008ebe24:
    local_d8 = 0;
  }
  if ((plVar21 != (long *)0x0) &&
     ((plVar21[0xb] != 0 || ((**(code **)(*plVar21 + 0x18))(plVar21), plVar21[0xb] != 0)))) {
    uVar10 = (**(code **)(*plVar21 + 0x40))(plVar21);
    uVar11 = (**(code **)(*plVar21 + 0x48))(plVar21);
    RenderDeviceManager::getInstance();
    plVar16 = (long *)RenderDeviceManager::getCurrentRenderDevice();
    plVar20 = *(long **)(*(long *)(this + 0xe8) + 0x68);
    if ((plVar20 == (long *)0x0) ||
       ((uVar12 = (**(code **)(*plVar20 + 0x20))(plVar20), uVar12 != uVar10 ||
        (uVar12 = (**(code **)(**(long **)(*(long *)(this + 0xe8) + 0x68) + 0x28))(),
        uVar12 != uVar11)))) {
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
      local_78 = "BaseTerrainProceduralPlacementLayer";
      local_b4 = uVar10;
      uStack_b0 = uVar11;
      uVar17 = (**(code **)(*plVar16 + 0x138))(plVar16);
      pIVar18 = (ITextureObject *)(**(code **)(*plVar16 + 0x100))(plVar16,uVar17,&local_c8);
      Texture::setITextureObject(*(Texture **)(this + 0xe8),pIVar18,true);
      if (*(void **)(this + 0xf0) != (void *)0x0) {
        operator_delete__(*(void **)(this + 0xf0));
      }
      pvVar19 = operator_new__((ulong)(uVar10 * uVar11 * 4));
      param_5 = 0;
      param_4 = 0;
      *(void **)(this + 0xf0) = pvVar19;
      param_7 = uVar11;
      param_6 = uVar10;
    }
    uVar12 = uVar10;
    uVar3 = uVar11;
    if ((param_6 | param_7 | param_5 | param_4) != 0) {
      uVar12 = param_6;
      uVar3 = param_7;
    }
    uVar13 = (**(code **)(*plVar21 + 0x58))(plVar21);
    if ((*(long *)(this + 0xe8) != 0) && (*(long *)(this + 0xf0) != 0)) {
      uVar12 = uVar12 + param_4;
      uVar6 = uVar10 - 1;
      if (param_4 <= (int)(uVar10 - 1)) {
        uVar6 = param_4;
      }
      uVar4 = 0;
      if (-1 < param_4) {
        uVar4 = uVar6;
      }
      plVar20 = *(long **)(*(long *)(this + 0xe8) + 0x68);
      uVar6 = uVar11 - 1;
      if (param_5 <= (int)(uVar11 - 1)) {
        uVar6 = param_5;
      }
      uVar23 = 0;
      if (-1 < param_5) {
        uVar23 = uVar6;
      }
      uVar6 = uVar10;
      if ((int)uVar12 <= (int)uVar10) {
        uVar6 = uVar12;
      }
      uVar5 = 0;
      if (-1 < (int)uVar12) {
        uVar5 = uVar6;
      }
      uVar3 = uVar3 + param_5;
      uVar12 = uVar11;
      if ((int)uVar3 <= (int)uVar11) {
        uVar12 = uVar3;
      }
      uVar6 = 0;
      if (-1 < (int)uVar3) {
        uVar6 = uVar12;
      }
      if ((int)uVar23 < (int)uVar6) {
        iVar22 = (uVar4 + uVar23 * uVar10) * 4;
        do {
          lVar14 = (long)(int)uVar5 - (long)(int)uVar4;
          uVar12 = uVar4;
          iVar2 = iVar22;
          if ((int)uVar4 < (int)uVar5) {
            do {
              fVar24 = (float)(**(code **)(*plVar21 + 0x68))(plVar21,uVar12,uVar23);
              uVar12 = uVar12 + 1;
              cVar8 = (char)(int)fVar24 * '\n';
              if ((local_d8 | uVar13 & 1) == 0) {
                cVar8 = (char)(int)fVar24;
              }
              lVar14 = lVar14 + -1;
              *(char *)(*(long *)(this + 0xf0) + (long)iVar2) = cVar8;
              *(char *)(*(long *)(this + 0xf0) + (long)(iVar2 + 1)) = cVar8;
              *(char *)(*(long *)(this + 0xf0) + (long)(iVar2 + 2)) = cVar8;
              iVar1 = iVar2 + 3;
              iVar2 = iVar2 + 4;
              *(undefined *)(*(long *)(this + 0xf0) + (long)iVar1) = 0xff;
            } while (lVar14 != 0);
          }
          uVar23 = uVar23 + 1;
          iVar22 = iVar22 + uVar10 * 4;
        } while (uVar23 != uVar6);
      }
      uVar17 = (**(code **)(*plVar16 + 0x138))(plVar16);
      (**(code **)(*plVar20 + 0x68))(plVar20,uVar17,0,0,0,0,uVar10,uVar11,0,1,1,&local_c8);
      PixelFormatUtil::convertPixelFormat
                (*(void **)(this + 0xf0),0,0,5,local_c8,local_c0,0,5,uVar10,uVar11,1);
      uVar17 = (**(code **)(*plVar16 + 0x138))(plVar16);
      (**(code **)(*plVar20 + 0x70))(plVar20,uVar17,&local_c8);
    }
  }
LAB_008ec1d8:
  if (*(long *)(lVar9 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


