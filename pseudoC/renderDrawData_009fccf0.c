// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: renderDrawData
// Entry Point: 009fccf0
// Size: 364 bytes
// Signature: undefined __cdecl renderDrawData(DrawData * param_1, ICommandBuffer * param_2, RenderArgs * param_3)


/* DeferredDebugRenderer::renderDrawData(DeferredDebugRenderer::DrawData const&, ICommandBuffer*,
   RenderArgs const&) const */

DrawData *
DeferredDebugRenderer::renderDrawData(DrawData *param_1,ICommandBuffer *param_2,RenderArgs *param_3)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  
  lVar7 = *(long *)(param_2 + 0x18);
  uVar3 = (uint)((ulong)(*(long *)(param_2 + 0x20) - lVar7) >> 2);
  if (0xd < uVar3) {
    param_1 = (DrawData *)
              (**(code **)(*(long *)param_3 + 0xf8))
                        (0x3f800000,param_3,lVar7,0x1c,lVar7 + 0xc,0x1c,(ulong)(uVar3 >> 1) / 7);
  }
  lVar7 = *(long *)(param_2 + 0x30);
  uVar3 = (uint)((ulong)(*(long *)(param_2 + 0x38) - lVar7) >> 2);
  if (0xd < uVar3) {
    param_1 = (DrawData *)
              (**(code **)(*(long *)param_3 + 0xf8))
                        (0x40000000,param_3,lVar7,0x1c,lVar7 + 0xc,0x1c,(ulong)(uVar3 >> 1) / 7);
  }
  lVar7 = *(long *)(param_2 + 0x48);
  uVar4 = (ulong)(*(long *)(param_2 + 0x50) - lVar7) >> 2;
  uVar3 = (uint)uVar4;
  if (6 < uVar3) {
    iVar6 = (int)((uVar4 & 0xffffffff) * 0x24924925 >> 0x20);
    param_1 = (DrawData *)
              (**(code **)(*(long *)param_3 + 0x108))
                        (param_3,lVar7,0x1c,lVar7 + 0xc,0x1c,0,iVar6 + (uVar3 - iVar6 >> 1) >> 2);
  }
  lVar7 = *(long *)(param_2 + 0x60);
  lVar5 = *(long *)(param_2 + 0x68);
  if (lVar5 != lVar7) {
    uVar4 = 0;
    do {
      lVar2 = *(long *)(lVar7 + uVar4 * 0x10);
      if (lVar2 != 0) {
        lVar1 = lVar7 + uVar4 * 0x10;
        if (*(int *)(lVar1 + 8) != 0) {
          param_1 = (DrawData *)
                    (**(code **)(*(long *)param_3 + 0x108))
                              (param_3,lVar2,0x1c,lVar2 + 0xc,0x1c,*(undefined4 *)(lVar1 + 0xc));
          lVar7 = *(long *)(param_2 + 0x60);
          lVar5 = *(long *)(param_2 + 0x68);
        }
      }
      uVar4 = (ulong)((int)uVar4 + 1);
    } while (uVar4 < (ulong)(lVar5 - lVar7 >> 4));
  }
  return param_1;
}


