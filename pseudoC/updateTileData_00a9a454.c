// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateTileData
// Entry Point: 00a9a454
// Size: 412 bytes
// Signature: undefined __thiscall updateTileData(SoftVirtualTexture * this, ICommandBuffer * param_1, uint param_2, uint param_3, void * * param_4, uint * param_5)


/* SoftVirtualTexture::updateTileData(ICommandBuffer*, unsigned int, unsigned int, void const*
   const*, unsigned int const*) */

void __thiscall
SoftVirtualTexture::updateTileData
          (SoftVirtualTexture *this,ICommandBuffer *param_1,uint param_2,uint param_3,void **param_4
          ,uint *param_5)

{
  int iVar1;
  uint uVar2;
  SoftVirtualTexture SVar3;
  uint uVar4;
  long lVar5;
  void *__dest;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  long *plVar11;
  void *__src;
  void *local_c0;
  uint local_b8;
  long local_70;
  
  lVar5 = tpidr_el0;
  local_70 = *(long *)(lVar5 + 0x28);
  if (*(int *)(this + 0x1c) != 0) {
    uVar8 = 0;
    uVar6 = *(uint *)(this + 0x4c);
    uVar10 = *(uint *)(this + 0x50);
    uVar7 = 0;
    if (uVar10 != 0) {
      uVar7 = param_3 / uVar10;
    }
    uVar9 = uVar6 * uVar7;
    uVar10 = (param_3 - uVar7 * uVar10) * uVar6;
    do {
      iVar1 = *(int *)(this + (ulong)param_2 * 0x10 + 0x88);
      plVar11 = *(long **)(this + (ulong)param_2 * 0x10 + 0x80);
      __src = param_4[uVar8];
      SVar3 = this[(ulong)param_2 * 0x10 + 0x8c];
      uVar2 = param_5[uVar8];
      (**(code **)(*plVar11 + 0x68))
                (plVar11,param_1,0,uVar8 & 0xffffffff,uVar10,uVar9,uVar6 + uVar10,uVar6 + uVar9,0,1,
                 3,&local_c0);
      uVar7 = uVar6;
      if (SVar3 != (SoftVirtualTexture)0x0) {
        uVar7 = uVar6 >> 2;
      }
      if (uVar7 != 0) {
        uVar4 = uVar7 * iVar1;
        __dest = local_c0;
        do {
          memcpy(__dest,__src,(ulong)uVar4);
          __src = (void *)((long)__src + (ulong)uVar2);
          uVar7 = uVar7 - 1;
          __dest = (void *)((long)__dest + (ulong)local_b8);
        } while (uVar7 != 0);
      }
      (**(code **)(*plVar11 + 0x70))(plVar11,param_1,&local_c0);
      uVar10 = uVar10 >> 1;
      uVar9 = uVar9 >> 1;
      uVar6 = uVar6 >> 1;
      uVar8 = uVar8 + 1;
    } while (uVar8 < *(uint *)(this + 0x1c));
  }
  if (*(long *)(lVar5 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


