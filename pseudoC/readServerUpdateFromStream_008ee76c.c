// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: readServerUpdateFromStream
// Entry Point: 008ee76c
// Size: 520 bytes
// Signature: undefined __thiscall readServerUpdateFromStream(BaseTerrainSyncer * this, GsBitStream * param_1)


/* BaseTerrainSyncer::readServerUpdateFromStream(GsBitStream*) */

void __thiscall
BaseTerrainSyncer::readServerUpdateFromStream(BaseTerrainSyncer *this,GsBitStream *param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ushort uVar5;
  ushort local_78 [2];
  ushort local_74 [2];
  ushort local_70 [2];
  ushort local_6c [2];
  uchar local_68 [4];
  ushort local_64 [2];
  uchar local_60 [4];
  uchar local_5c [4];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_5c[0] = '\0';
  GsBitStream::readBits(param_1,local_5c,1,true);
  if (local_5c[0] != '\0') {
    local_60[0] = '\0';
    GsBitStream::readBits(param_1,local_60,1,true);
    GsBitStream::readBits(param_1,(uchar *)local_64,0x10,true);
    if (local_64[0] != 0) {
      uVar4 = 0;
      uVar5 = 0xffff;
      do {
        local_68[0] = '\0';
        GsBitStream::readBits(param_1,local_68,1,true);
        local_6c[0] = uVar5 + 1;
        if (local_68[0] != '\0') {
          GsBitStream::readBits(param_1,(uchar *)local_6c,0x10,true);
        }
        uVar5 = local_6c[0];
        GsBitStream::readBits(param_1,(uchar *)local_70,0x10,true);
        GsBitStream::readBits(param_1,(uchar *)local_74,0x10,true);
        if (*(long *)(this + 0x28) != 0) {
          uVar3 = (uint)local_70[0];
          this[0x40] = (BaseTerrainSyncer)0x1;
          uVar2 = (uint)local_74[0];
          if (local_70[0] < local_74[0]) {
            do {
              if (local_60[0] == '\0') {
                GsBitStream::readBits(param_1,(uchar *)local_78,0x10,true);
                BaseTerrain::setRawHeightAtPoint
                          (*(BaseTerrain **)(this + 0x28),uVar3,(uint)local_6c[0],local_78[0]);
              }
              else {
                GsBitStream::readBits(param_1,(uchar *)local_78,8,true);
                TerrainLodTexture::setLayersRegion
                          (*(TerrainLodTexture **)(*(long *)(this + 0x28) + 0xd8),uVar3,
                           (uint)local_6c[0],1,1,(uchar *)local_78);
              }
              uVar3 = uVar3 + 1;
              uVar2 = (uint)local_74[0];
            } while (uVar3 < uVar2);
          }
          if (local_60[0] == '\0') {
            (**(code **)(**(long **)(this + 0x28) + 0x10))();
          }
          else {
            BaseTerrain::markLayersRegionDirty
                      ((BaseTerrain *)*(long **)(this + 0x28),(uint)local_70[0],(uint)local_6c[0],
                       uVar2 - local_70[0],1);
          }
          this[0x40] = (BaseTerrainSyncer)0x0;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < local_64[0]);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


