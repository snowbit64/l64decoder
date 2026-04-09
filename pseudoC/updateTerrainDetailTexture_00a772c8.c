// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateTerrainDetailTexture
// Entry Point: 00a772c8
// Size: 292 bytes
// Signature: undefined updateTerrainDetailTexture(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* TerrainTransformGroup::updateTerrainDetailTexture() */

void TerrainTransformGroup::updateTerrainDetailTexture(void)

{
  long lVar1;
  undefined8 uVar2;
  long in_x0;
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined local_60;
  byte bStack_5f;
  byte bStack_5e;
  byte bStack_5d;
  undefined uStack_5c;
  byte bStack_5b;
  byte bStack_5a;
  byte bStack_59;
  undefined uStack_50;
  byte bStack_4f;
  byte bStack_4e;
  byte bStack_4d;
  undefined uStack_4c;
  byte bStack_4b;
  byte bStack_4a;
  byte bStack_49;
  float local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  GsMaterial::setAlbedoMap(*(GsMaterial **)(in_x0 + 0x4c8),(Texture *)0x0);
  GsMaterial::setNormalMap(*(GsMaterial **)(in_x0 + 0x4c8),(Texture *)0x0);
  GsMaterial::setCustomTexture
            (*(GsMaterial **)(in_x0 + 0x4d0),*(uint *)(in_x0 + 0x534),*(Texture **)(in_x0 + 0x2b8));
  GsMaterial::setCustomTexture
            (*(GsMaterial **)(in_x0 + 0x4d8),*(uint *)(in_x0 + 0x534),*(Texture **)(in_x0 + 0x2b8));
  local_44 = 0;
  local_48 = (float)NEON_ucvtf(*(undefined4 *)(in_x0 + 0x2c4));
  local_40 = BaseTerrain::getOverlayLayerTextureArrayOffset
                       ((BaseTerrain *)(in_x0 + 0x170),"groundDetail");
  local_3c = BaseTerrain::getOverlayLayerTextureArrayOffset((BaseTerrain *)(in_x0 + 0x170),"spray");
  GsMaterial::setCustomParameter(*(GsMaterial **)(in_x0 + 0x4d0),*(uint *)(in_x0 + 0x518),&local_48)
  ;
  GsMaterial::setCustomParameter(*(GsMaterial **)(in_x0 + 0x4d8),*(uint *)(in_x0 + 0x518),&local_48)
  ;
  auVar3._8_8_ = 0xffffffffffffffff;
  auVar3._0_8_ = 0xffffffffffffffff;
  uVar2 = *(undefined8 *)(in_x0 + 0x2d0);
  uStack_50 = (undefined)uVar2;
  bStack_4f = (byte)((ulong)uVar2 >> 8);
  bStack_4e = (byte)((ulong)uVar2 >> 0x10);
  bStack_4d = (byte)((ulong)uVar2 >> 0x18);
  uStack_4c = (undefined)((ulong)uVar2 >> 0x20);
  bStack_4b = (byte)((ulong)uVar2 >> 0x28);
  bStack_4a = (byte)((ulong)uVar2 >> 0x30);
  bStack_49 = (byte)((ulong)uVar2 >> 0x38);
  uVar2 = *(undefined8 *)(unkbyte9 *)(in_x0 + 0x2c8);
  local_60 = (undefined)uVar2;
  uStack_5c = (undefined)((ulong)uVar2 >> 0x20);
  auVar4[9] = bStack_4f;
  auVar4._0_9_ = *(unkbyte9 *)(in_x0 + 0x2c8);
  auVar4[10] = bStack_4e;
  auVar4[11] = bStack_4d;
  auVar4[12] = uStack_4c;
  auVar4[13] = bStack_4b;
  auVar4[14] = bStack_4a;
  auVar4[15] = bStack_49;
  auVar4 = NEON_ushl(auVar3,auVar4,4);
  bStack_5f = ~auVar4[0] | (byte)((ulong)uVar2 >> 8);
  bStack_5e = ~auVar4[1] | (byte)((ulong)uVar2 >> 0x10);
  bStack_5d = ~auVar4[2] | (byte)((ulong)uVar2 >> 0x18);
  bStack_5b = ~auVar4[4] | (byte)((ulong)uVar2 >> 0x28);
  bStack_5a = ~auVar4[5] | (byte)((ulong)uVar2 >> 0x30);
  bStack_59 = ~auVar4[6] | (byte)((ulong)uVar2 >> 0x38);
  bStack_4f = ~auVar4[8] | bStack_4f;
  bStack_4e = ~auVar4[9] | bStack_4e;
  bStack_4d = ~auVar4[10] | bStack_4d;
  bStack_4b = ~auVar4[12] | bStack_4b;
  bStack_4a = ~auVar4[13] | bStack_4a;
  bStack_49 = ~auVar4[14] | bStack_49;
  GsMaterial::setCustomParameter
            (*(GsMaterial **)(in_x0 + 0x4d0),*(uint *)(in_x0 + 0x51c),(float *)&local_60);
  GsMaterial::setCustomParameter
            (*(GsMaterial **)(in_x0 + 0x4d8),*(uint *)(in_x0 + 0x51c),(float *)&local_60);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


