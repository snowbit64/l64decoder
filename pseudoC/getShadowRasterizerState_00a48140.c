// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getShadowRasterizerState
// Entry Point: 00a48140
// Size: 784 bytes
// Signature: undefined __thiscall getShadowRasterizerState(SharedRenderArgs * this, IRenderDevice * param_1, float param_2, float param_3, float param_4, bool param_5, bool param_6, PIXEL_FORMAT param_7)


/* SharedRenderArgs::getShadowRasterizerState(IRenderDevice*, float, float, float, bool, bool,
   PixelFormat::PIXEL_FORMAT) */

long * __thiscall
SharedRenderArgs::getShadowRasterizerState
          (SharedRenderArgs *this,IRenderDevice *param_1,float param_2,float param_3,float param_4,
          bool param_5,bool param_6,PIXEL_FORMAT param_7)

{
  byte bVar1;
  long lVar2;
  bool bVar3;
  long *plVar4;
  long **pplVar5;
  long **pplVar6;
  long *plVar7;
  PIXEL_FORMAT PVar8;
  long **pplVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 local_a0;
  uint local_9c;
  double local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined local_84;
  PIXEL_FORMAT local_80;
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  PVar8 = param_7;
  fVar12 = param_2;
  fVar13 = param_3;
  fVar14 = param_4;
  if ((*(uint *)(PixelFormatUtil::s_pixelFormats + (ulong)param_7 * 0x18 + 0xc) >> 5 & 1) == 0) {
    param_5 = false;
    PVar8 = 0;
    fVar12 = 0.0;
    fVar13 = 0.0;
    fVar14 = 0.0;
  }
  pplVar6 = *(long ***)(this + 0x150);
  pplVar9 = (long **)(this + 0x150);
  pplVar5 = pplVar9;
  if (pplVar6 != (long **)0x0) {
    do {
      bVar3 = *(float *)(pplVar6 + 4) < fVar12;
      if ((((*(float *)(pplVar6 + 4) == fVar12) &&
           (bVar3 = *(float *)((long)pplVar6 + 0x24) < fVar13,
           *(float *)((long)pplVar6 + 0x24) == fVar13)) &&
          (bVar3 = *(float *)(pplVar6 + 5) < fVar14, *(float *)(pplVar6 + 5) == fVar14)) &&
         (bVar3 = *(byte *)((long)pplVar6 + 0x2c) < param_5,
         (bool)*(byte *)((long)pplVar6 + 0x2c) == param_5)) {
        bVar3 = *(int *)(pplVar6 + 6) < (int)PVar8;
      }
      lVar10 = 8;
      if (!bVar3) {
        lVar10 = 0;
        pplVar5 = pplVar6;
      }
      pplVar6 = *(long ***)((long)pplVar6 + lVar10);
    } while (pplVar6 != (long **)0x0);
    if (pplVar5 != pplVar9) {
      bVar3 = fVar12 < *(float *)(pplVar5 + 4);
      if (((fVar12 == *(float *)(pplVar5 + 4)) &&
          (bVar3 = fVar13 < *(float *)((long)pplVar5 + 0x24),
          fVar13 == *(float *)((long)pplVar5 + 0x24))) &&
         (bVar3 = fVar14 < *(float *)(pplVar5 + 5), fVar14 == *(float *)(pplVar5 + 5))) {
        if (param_5 == (bool)*(byte *)((long)pplVar5 + 0x2c)) {
          if (*(int *)(pplVar5 + 6) <= (int)PVar8) {
LAB_00a48264:
            plVar7 = pplVar5[7];
            pplVar5[8] = *(long **)(this + 0x90);
            goto LAB_00a48414;
          }
        }
        else if (*(byte *)((long)pplVar5 + 0x2c) <= param_5) goto LAB_00a48264;
      }
      else if (!bVar3) goto LAB_00a48264;
    }
  }
  local_98 = 0.0;
  local_90 = 0;
  local_84 = 0;
  local_a0 = 1;
  local_88 = 0x1000101;
  local_80 = 0;
  if ((*(uint *)(PixelFormatUtil::s_pixelFormats + (ulong)param_7 * 0x18 + 0xc) >> 5 & 1) != 0) {
    local_98 = (double)param_2;
    local_90 = CONCAT44(param_3,param_4);
    local_80 = param_7;
  }
  local_9c = ~(uint)param_6 & 1;
  plVar7 = (long *)(**(code **)(*(long *)param_1 + 0xe8))(param_1,&local_a0);
  lVar10 = *(long *)(this + 0x90);
  pplVar5 = pplVar9;
  if (*(long **)(this + 0x150) != (long *)0x0) {
    pplVar6 = (long **)*(long **)(this + 0x150);
    pplVar5 = (long **)(this + 0x150);
    do {
      while( true ) {
        pplVar9 = pplVar6;
        fVar11 = *(float *)(pplVar9 + 4);
        if (fVar12 == fVar11) break;
        if (fVar11 <= fVar12) {
          if (fVar11 < fVar12) goto LAB_00a48308;
          goto LAB_00a483b0;
        }
LAB_00a48390:
        pplVar6 = (long **)*pplVar9;
        pplVar5 = pplVar9;
        if (*pplVar9 == (long *)0x0) goto LAB_00a483b0;
      }
      fVar11 = *(float *)((long)pplVar9 + 0x24);
      if (fVar13 != fVar11) {
        if (fVar13 < fVar11) goto LAB_00a48390;
        if (fVar11 < fVar13) goto LAB_00a48308;
        break;
      }
      fVar11 = *(float *)(pplVar9 + 5);
      if (fVar14 != fVar11) {
        if (fVar14 < fVar11) goto LAB_00a48390;
        if (fVar11 < fVar14) goto LAB_00a48308;
        break;
      }
      bVar1 = *(byte *)((long)pplVar9 + 0x2c);
      if (param_5 != (bool)bVar1) {
        if (param_5 < bVar1) goto LAB_00a48390;
        if (bVar1 < param_5) goto LAB_00a48308;
        break;
      }
      if ((int)PVar8 < *(int *)(pplVar9 + 6)) goto LAB_00a48390;
      if ((int)PVar8 <= *(int *)(pplVar9 + 6)) break;
LAB_00a48308:
      pplVar5 = pplVar9 + 1;
      pplVar6 = (long **)*pplVar5;
    } while (*pplVar5 != (long *)0x0);
  }
LAB_00a483b0:
  if (*pplVar5 == (long *)0x0) {
    plVar4 = (long *)operator_new(0x48);
    *(float *)(plVar4 + 4) = fVar12;
    *(float *)((long)plVar4 + 0x24) = fVar13;
    *(float *)(plVar4 + 5) = fVar14;
    *(bool *)((long)plVar4 + 0x2c) = param_5;
    *(PIXEL_FORMAT *)(plVar4 + 6) = PVar8;
    plVar4[7] = (long)plVar7;
    plVar4[8] = lVar10;
    *plVar4 = 0;
    plVar4[1] = 0;
    plVar4[2] = (long)pplVar9;
    *pplVar5 = plVar4;
    if (**(long **)(this + 0x148) != 0) {
      *(long *)(this + 0x148) = **(long **)(this + 0x148);
      plVar4 = *pplVar5;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 0x150),(__tree_node_base *)plVar4);
    *(long *)(this + 0x158) = *(long *)(this + 0x158) + 1;
  }
LAB_00a48414:
  if (*(long *)(lVar2 + 0x28) == local_78) {
    return plVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


