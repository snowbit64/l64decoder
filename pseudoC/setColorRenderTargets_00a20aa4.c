// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setColorRenderTargets
// Entry Point: 00a20aa4
// Size: 212 bytes
// Signature: undefined __thiscall setColorRenderTargets(RenderQueue * this, uint param_1, ITextureObject * * param_2, LOAD_ACTION param_3, ACCESS_MODE param_4, bool param_5)


/* RenderQueue::setColorRenderTargets(unsigned int, ITextureObject**, RenderTargetDesc::LOAD_ACTION,
   RenderTargetDesc::ACCESS_MODE, bool) */

void __thiscall
RenderQueue::setColorRenderTargets
          (RenderQueue *this,uint param_1,ITextureObject **param_2,LOAD_ACTION param_3,
          ACCESS_MODE param_4,bool param_5)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined4 *puVar4;
  ITextureObject **ppIVar5;
  ITextureObject **ppIVar6;
  undefined8 *puVar7;
  ITextureObject *pIVar8;
  ulong uVar9;
  ITextureObject *pIVar10;
  
  *(uint *)(this + 0x16c) = param_1;
  if (param_1 == 0) goto LAB_00a20b20;
  uVar1 = (ulong)param_1;
  if (param_1 == 1) {
LAB_00a20adc:
    uVar3 = 0;
  }
  else {
    if ((this + 0xc0 < param_2 + uVar1) && (param_2 < this + uVar1 * 8 + 0xc0)) goto LAB_00a20adc;
    uVar3 = uVar1 & 0xfffffffe;
    puVar7 = (undefined8 *)(this + 0x180);
    ppIVar5 = (ITextureObject **)(this + 0xc0);
    uVar9 = uVar3;
    ppIVar6 = param_2;
    do {
      pIVar10 = ppIVar6[1];
      pIVar8 = *ppIVar6;
      puVar7[-2] = 0;
      uVar9 = uVar9 - 2;
      *puVar7 = 0;
      puVar7[-0xe] = CONCAT44(param_3,param_3);
      puVar7[-9] = CONCAT44(param_4,param_4);
      puVar7 = puVar7 + 1;
      ppIVar5[1] = pIVar10;
      *ppIVar5 = pIVar8;
      ppIVar5 = ppIVar5 + 2;
      ppIVar6 = ppIVar6 + 2;
    } while (uVar9 != 0);
    if (uVar3 == uVar1) goto LAB_00a20b20;
  }
  lVar2 = uVar1 - uVar3;
  puVar4 = (undefined4 *)(this + uVar3 * 4 + 0x180);
  ppIVar5 = param_2 + uVar3;
  ppIVar6 = (ITextureObject **)(this + uVar3 * 8 + 0xc0);
  do {
    pIVar8 = *ppIVar5;
    puVar4[-4] = 0;
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4[-0x1c] = param_3;
    puVar4[-0x12] = param_4;
    puVar4 = puVar4 + 1;
    *ppIVar6 = pIVar8;
    ppIVar5 = ppIVar5 + 1;
    ppIVar6 = ppIVar6 + 1;
  } while (lVar2 != 0);
LAB_00a20b20:
  this[0x160] = (RenderQueue)param_5;
  return;
}


