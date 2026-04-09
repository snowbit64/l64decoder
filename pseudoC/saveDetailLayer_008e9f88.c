// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: saveDetailLayer
// Entry Point: 008e9f88
// Size: 236 bytes
// Signature: undefined __thiscall saveDetailLayer(BaseTerrain * this, uint param_1, char * param_2)


/* BaseTerrain::saveDetailLayer(unsigned int, char const*) */

void __thiscall BaseTerrain::saveDetailLayer(BaseTerrain *this,uint param_1,char *param_2)

{
  long lVar1;
  uchar *puVar2;
  TerrainLodTexture *this_00;
  int local_a0;
  int iStack_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  int local_80;
  uchar *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined2 local_58;
  undefined4 local_54;
  undefined2 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this_00 = *(TerrainLodTexture **)(this + 0xd8);
  puVar2 = (uchar *)operator_new__((ulong)(uint)(*(int *)(this_00 + 8) * *(int *)(this_00 + 8)));
  TerrainLodTexture::getLayerRegion
            (this_00,param_1,0,0,*(uint *)(this_00 + 8),*(uint *)(this_00 + 8),puVar2);
  local_90 = 0;
  uStack_84 = 0;
  local_58 = 0;
  local_54 = 0;
  local_98 = 0x100000001;
  local_50 = 0;
  local_70 = 0;
  uStack_68 = 0;
  uStack_8c = 1;
  uStack_88 = 1;
  local_a0 = *(int *)(*(long *)(this + 0xd8) + 8);
  local_60 = 1;
  local_80 = local_a0 * local_a0;
  iStack_9c = local_a0;
  local_78 = puVar2;
  ImageSaveUtil::saveImage(param_2,(ImageDesc *)&local_a0,true);
  operator_delete__(puVar2);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


