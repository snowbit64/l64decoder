// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateTextureSubRegion
// Entry Point: 00a9a6f4
// Size: 296 bytes
// Signature: undefined __thiscall updateTextureSubRegion(SoftVirtualTexture * this, ICommandBuffer * param_1, ITextureObject * param_2, uint param_3, uint param_4, void * param_5, uint param_6, uint param_7, bool param_8, uint param_9, uint param_10, uint param_11, uint param_12)


/* SoftVirtualTexture::updateTextureSubRegion(ICommandBuffer*, ITextureObject*, unsigned int,
   unsigned int, void const*, unsigned int, unsigned int, bool, unsigned int, unsigned int, unsigned
   int, unsigned int) */

void __thiscall
SoftVirtualTexture::updateTextureSubRegion
          (SoftVirtualTexture *this,ICommandBuffer *param_1,ITextureObject *param_2,uint param_3,
          uint param_4,void *param_5,uint param_6,uint param_7,bool param_8,uint param_9,
          uint param_10,uint param_11,uint param_12)

{
  uint uVar1;
  long lVar2;
  void *__dest;
  uint uVar3;
  void *local_b8;
  uint local_b0;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  (**(code **)(*(long *)param_2 + 0x68))
            (param_2,param_1,param_3,param_4,param_9,param_10,param_11 + param_9,param_12 + param_10
             ,0,1,3,&local_b8);
  uVar1 = param_11 >> 2;
  uVar3 = param_12 >> 2;
  if (!param_8) {
    uVar1 = param_11;
    uVar3 = param_12;
  }
  if (uVar3 != 0) {
    __dest = local_b8;
    do {
      memcpy(__dest,param_5,(ulong)(uVar1 * param_7));
      param_5 = (void *)((long)param_5 + (ulong)param_6);
      uVar3 = uVar3 - 1;
      __dest = (void *)((long)__dest + (ulong)local_b0);
    } while (uVar3 != 0);
  }
  (**(code **)(*(long *)param_2 + 0x70))(param_2,param_1,&local_b8);
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


