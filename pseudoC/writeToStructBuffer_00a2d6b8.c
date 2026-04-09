// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: writeToStructBuffer
// Entry Point: 00a2d6b8
// Size: 108 bytes
// Signature: undefined __thiscall writeToStructBuffer(RenderQueueItemAllocator * this, float * param_1, uint param_2, MaterialShader * param_3, GeometryParam * param_4)


/* RenderQueueItemAllocator::writeToStructBuffer(float*, unsigned int, MaterialShader const*,
   RenderQueueItem::GeometryParam const&) const */

void __thiscall
RenderQueueItemAllocator::writeToStructBuffer
          (RenderQueueItemAllocator *this,float *param_1,uint param_2,MaterialShader *param_3,
          GeometryParam *param_4)

{
  ulong uVar1;
  ushort uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = (ulong)*(ushort *)(param_3 + (ulong)*(ushort *)param_4 * 2 + 0xe);
  if (uVar4 != 0xffff) {
    uVar2 = *(ushort *)(param_4 + 2);
    if ((short)uVar2 < 0) {
      memcpy(param_1 + uVar4,*(void **)(param_4 + 8),(ulong)(uVar2 & 0x7fff) << 2);
      return;
    }
    if (uVar2 != 0) {
      uVar3 = 0;
      do {
        uVar1 = uVar3 + 1;
        param_1[uVar4 + uVar3] = *(float *)(param_4 + uVar3 * 4 + 8);
        uVar3 = uVar1;
      } while (uVar1 < ((ulong)*(ushort *)(param_4 + 2) & 0x7fff));
    }
  }
  return;
}


