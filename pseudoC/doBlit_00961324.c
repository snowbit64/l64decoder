// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: doBlit
// Entry Point: 00961324
// Size: 444 bytes
// Signature: undefined __thiscall doBlit(MultiresTextureGpuUpdater * this, ICommandBuffer * param_1, TileUpdateInfo * param_2)


/* MultiresTextureGpuUpdater::doBlit(ICommandBuffer*, MultiresTextureGpuUpdater::TileUpdateInfo&) */

void __thiscall
MultiresTextureGpuUpdater::doBlit
          (MultiresTextureGpuUpdater *this,ICommandBuffer *param_1,TileUpdateInfo *param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  uint local_78;
  uint local_74;
  uint local_70;
  uint uStack_6c;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if (*(int *)(*(long *)(this + 0x110) + 0x1c) != 0) {
    uVar3 = 0;
    puVar5 = (undefined8 *)(param_2 + 0xb0);
    do {
      SoftVirtualTexture::getTilePaletteRegion
                (*(SoftVirtualTexture **)(*(long *)(this + 0x118) + 0xe0),*(uint *)param_2,
                 (uint)uVar3,&uStack_6c,&local_70,&local_74,&local_78);
      lVar2 = *(long *)(this + 0x110);
      if (*(int *)(lVar2 + 0x18) != 0) {
        uVar6 = 0;
        lVar7 = 0x80;
        puVar4 = puVar5;
        do {
          (**(code **)(*(long *)param_1 + 0x130))
                    (param_1,puVar4[-8],0,*(undefined4 *)(this + uVar3 * 4 + 0x360),
                     *(undefined8 *)(*(long *)(*(long *)(this + 0x118) + 0xe0) + lVar7),
                     uVar3 & 0xffffffff,0,uStack_6c,local_70,local_74,local_78);
          lVar2 = *(long *)(this + 0x110);
          if (*(char *)(lVar2 + 0x40) != '\0') {
            (**(code **)(*(long *)param_1 + 0x130))
                      (param_1,puVar4[-8],0,*(undefined4 *)(this + uVar3 * 4 + 0x360),*puVar4,0,0,0,
                       0,local_74,local_78);
            (**(code **)(*(long *)param_1 + 0x120))(param_1,1,puVar4,0,0,0,0);
            lVar2 = *(long *)(this + 0x110);
          }
          uVar6 = uVar6 + 1;
          puVar4 = puVar4 + 1;
          lVar7 = lVar7 + 0x10;
        } while (uVar6 < *(uint *)(lVar2 + 0x18));
      }
      uVar3 = uVar3 + 1;
      puVar5 = puVar5 + 4;
    } while (uVar3 < *(uint *)(lVar2 + 0x1c));
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


