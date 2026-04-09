// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_009310f8
// Entry Point: 009310f8
// Size: 140 bytes
// Signature: undefined FUN_009310f8(void)


void FUN_009310f8(byte **param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  pbVar2 = *param_1;
  if (pbVar2 == (byte *)0x0) {
    return;
  }
  pbVar1 = param_1[1];
  pbVar3 = pbVar2;
  if (pbVar1 != pbVar2) {
    do {
      pbVar3 = pbVar1 + -0x2d8;
      TerrainLayerTransformGroupDesc::~TerrainLayerTransformGroupDesc
                ((TerrainLayerTransformGroupDesc *)(pbVar1 + -0x2c0));
      if ((*pbVar3 & 1) != 0) {
        operator_delete(*(void **)(pbVar1 + -0x2c8));
      }
      pbVar1 = pbVar3;
    } while (pbVar3 != pbVar2);
    pbVar3 = *param_1;
  }
  param_1[1] = pbVar2;
  operator_delete(pbVar3);
  return;
}


