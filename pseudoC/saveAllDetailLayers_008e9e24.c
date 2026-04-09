// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: saveAllDetailLayers
// Entry Point: 008e9e24
// Size: 356 bytes
// Signature: undefined saveAllDetailLayers(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* BaseTerrain::saveAllDetailLayers() */

void BaseTerrain::saveAllDetailLayers(void)

{
  char *pcVar1;
  long lVar2;
  long in_x0;
  uchar *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  TerrainLodTexture *this;
  int local_d0;
  int iStack_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  int local_b0;
  uchar *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined2 local_88;
  undefined4 local_84;
  undefined2 local_80;
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  lVar4 = *(long *)(in_x0 + 8);
  if (*(long *)(in_x0 + 0x10) != lVar4) {
    uVar6 = 0;
    do {
      this = *(TerrainLodTexture **)(in_x0 + 0xd8);
      lVar4 = lVar4 + uVar6 * 0xb0;
      pcVar1 = (char *)(lVar4 + 0x71);
      if ((*(byte *)(lVar4 + 0x70) & 1) != 0) {
        pcVar1 = *(char **)(lVar4 + 0x80);
      }
      puVar3 = (uchar *)operator_new__((ulong)(uint)(*(int *)(this + 8) * *(int *)(this + 8)));
      TerrainLodTexture::getLayerRegion
                (this,(uint)uVar6,0,0,*(uint *)(this + 8),*(uint *)(this + 8),puVar3);
      local_c0 = 0;
      uStack_b4 = 0;
      local_c8 = 0x100000001;
      local_88 = 0;
      local_84 = 0;
      local_80 = 0;
      local_a0 = 0;
      uStack_98 = 0;
      uStack_bc = 1;
      uStack_b8 = 1;
      local_d0 = *(int *)(*(long *)(in_x0 + 0xd8) + 8);
      local_90 = 1;
      local_b0 = local_d0 * local_d0;
      iStack_cc = local_d0;
      local_a8 = puVar3;
      ImageSaveUtil::saveImage(pcVar1,(ImageDesc *)&local_d0,true);
      operator_delete__(puVar3);
      lVar4 = *(long *)(in_x0 + 8);
      uVar6 = (ulong)((uint)uVar6 + 1);
      uVar5 = (*(long *)(in_x0 + 0x10) - lVar4 >> 4) * 0x2e8ba2e8ba2e8ba3;
    } while (uVar6 <= uVar5 && uVar5 - uVar6 != 0);
  }
  if (*(long *)(lVar2 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


