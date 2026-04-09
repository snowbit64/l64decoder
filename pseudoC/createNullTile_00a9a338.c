// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createNullTile
// Entry Point: 00a9a338
// Size: 284 bytes
// Signature: undefined __thiscall createNullTile(SoftVirtualTexture * this, ICommandBuffer * param_1, uint param_2, uint param_3)


/* SoftVirtualTexture::createNullTile(ICommandBuffer*, unsigned int, unsigned int) */

void __thiscall
SoftVirtualTexture::createNullTile
          (SoftVirtualTexture *this,ICommandBuffer *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  uint *puVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  uint local_70;
  int iStack_6c;
  void *local_68;
  void *pvStack_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  uVar9 = *(uint *)(this + 0x4c);
  uVar1 = uVar9 * uVar9;
  uVar10 = (ulong)uVar1;
  pvVar3 = operator_new__(uVar10 << 2);
  if (uVar1 != 0) {
    if (uVar1 < 8) {
      uVar4 = 0;
    }
    else {
      uVar4 = uVar10 & 0xfffffff8;
      puVar6 = (undefined8 *)((long)pvVar3 + 0x10);
      uVar8 = uVar4;
      do {
        puVar6[-1] = CONCAT44(param_3,param_3);
        puVar6[-2] = CONCAT44(param_3,param_3);
        puVar6[1] = CONCAT44(param_3,param_3);
        *puVar6 = CONCAT44(param_3,param_3);
        puVar6 = puVar6 + 4;
        uVar8 = uVar8 - 8;
      } while (uVar8 != 0);
      if (uVar4 == uVar10) goto LAB_00a9a3d4;
    }
    lVar5 = uVar10 - uVar4;
    puVar7 = (uint *)((long)pvVar3 + uVar4 * 4);
    do {
      lVar5 = lVar5 + -1;
      *puVar7 = param_3;
      puVar7 = puVar7 + 1;
    } while (lVar5 != 0);
  }
LAB_00a9a3d4:
  local_70 = uVar9 << 2;
  iStack_6c = (uVar9 & 0x3fffffff) << 1;
  local_68 = pvVar3;
  pvStack_60 = pvVar3;
  if (*(int *)(this + 0x18) != 0) {
    uVar9 = 0;
    do {
      updateTileData(this,param_1,uVar9,param_2,&local_68,&local_70);
      uVar9 = uVar9 + 1;
    } while (uVar9 < *(uint *)(this + 0x18));
  }
  operator_delete__(pvVar3);
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


