// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateIndexDebugData
// Entry Point: 00a9a81c
// Size: 244 bytes
// Signature: undefined __thiscall updateIndexDebugData(SoftVirtualTexture * this, ICommandBuffer * param_1, uint * param_2)


/* SoftVirtualTexture::updateIndexDebugData(ICommandBuffer*, unsigned int const*) */

void __thiscall
SoftVirtualTexture::updateIndexDebugData
          (SoftVirtualTexture *this,ICommandBuffer *param_1,uint *param_2)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  int iVar4;
  void *__dest;
  void *local_a8;
  uint local_a0;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  plVar3 = *(long **)(this + 0x68);
  iVar4 = *(int *)this;
  (**(code **)(*plVar3 + 0x68))(plVar3,param_1,0,0,0,0,iVar4,iVar4,0,1,3,&local_a8);
  if (iVar4 != 0) {
    uVar1 = iVar4 << 2;
    __dest = local_a8;
    do {
      memcpy(__dest,param_2,(ulong)uVar1);
      param_2 = (uint *)((long)param_2 + (ulong)uVar1);
      iVar4 = iVar4 + -1;
      __dest = (void *)((long)__dest + (ulong)local_a0);
    } while (iVar4 != 0);
  }
  (**(code **)(*plVar3 + 0x70))(plVar3,param_1,&local_a8);
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


