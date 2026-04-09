// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: executeSave
// Entry Point: 00b87b38
// Size: 64 bytes
// Signature: undefined __thiscall executeSave(DensityMapSaveHelper * this, char * param_1)


/* DensityMap::DensityMapSaveHelper::executeSave(char const*) */

undefined8 __thiscall
DensityMap::DensityMapSaveHelper::executeSave(DensityMapSaveHelper *this,char *param_1)

{
  undefined8 uVar1;
  
  if (*(uchar **)(this + 0x58) != (uchar *)0x0) {
    uVar1 = ChunkedBitSquare::saveMemImageToFile
                      (param_1,*(uchar **)(this + 0x58),*(uint *)(this + 0x60));
    return uVar1;
  }
  if (*(BitVector **)(this + 0x68) != (BitVector *)0x0) {
    uVar1 = RLEUtil::saveRLEImage
                      (param_1,*(BitVector **)(this + 0x68),*(uint *)(this + 0x70),
                       *(uint *)(this + 0x74),*(uint *)(this + 0x78),true);
    return uVar1;
  }
  return 0;
}


