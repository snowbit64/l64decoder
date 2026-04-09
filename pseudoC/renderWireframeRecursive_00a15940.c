// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: renderWireframeRecursive
// Entry Point: 00a15940
// Size: 156 bytes
// Signature: undefined __thiscall renderWireframeRecursive(Renderer * this, ScenegraphNode * param_1, float * param_2, ICommandBuffer * param_3, ITextureObject * param_4)


/* Renderer::renderWireframeRecursive(ScenegraphNode*, float const*, ICommandBuffer*,
   ITextureObject*) */

void __thiscall
Renderer::renderWireframeRecursive
          (Renderer *this,ScenegraphNode *param_1,float *param_2,ICommandBuffer *param_3,
          ITextureObject *param_4)

{
  ScenegraphNode *pSVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  renderWireframeNode(this,param_1,param_2,param_3,param_4);
  lVar3 = *(long *)(param_1 + 0x28);
  lVar2 = *(long *)(param_1 + 0x30);
  if ((int)((ulong)(lVar2 - lVar3) >> 3) != 0) {
    uVar4 = 0;
    do {
      pSVar1 = *(ScenegraphNode **)(lVar3 + uVar4 * 8);
      if ((((byte)pSVar1[0x40] & 1) != 0) && (((byte)param_1[0x11] >> 2 & 1) == 0)) {
        renderWireframeRecursive(this,pSVar1,param_2,param_3,param_4);
        lVar3 = *(long *)(param_1 + 0x28);
        lVar2 = *(long *)(param_1 + 0x30);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < ((ulong)(lVar2 - lVar3) >> 3 & 0xffffffff));
  }
  return;
}


