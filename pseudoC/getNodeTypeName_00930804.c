// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getNodeTypeName
// Entry Point: 00930804
// Size: 172 bytes
// Signature: undefined __cdecl getNodeTypeName(ScenegraphNode * param_1)


/* I3DSaveUtil::getNodeTypeName(ScenegraphNode*) */

char * I3DSaveUtil::getNodeTypeName(ScenegraphNode *param_1)

{
  char *pcVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(param_1 + 0x10);
  uVar2 = (uint)uVar3;
  if ((uVar2 >> 7 & 1) != 0) {
    return "TerrainTransformGroup";
  }
  if ((uVar2 >> 0x10 & 1) != 0) {
    return "NavigationMesh";
  }
  if ((uVar2 >> 0xb & 1) != 0) {
    if ((*(long *)(param_1 + 0x170) != 0) &&
       ((*(byte *)(*(long *)(param_1 + 0x170) + 0x30) >> 1 & 1) != 0)) {
      return "Dynamic";
    }
    return "Shape";
  }
  if ((uVar2 >> 0xe & 1) != 0) {
    return "AudioSource";
  }
  if ((uVar2 >> 0xd & 1) == 0) {
    if ((uVar2 >> 0xf & 1) != 0) {
      return "Camera";
    }
    if ((uVar3 >> 0x3b & 1) == 0) {
      pcVar1 = "Unknown";
      if ((uVar3 & 0x20) != 0) {
        pcVar1 = "TransformGroup";
      }
      return pcVar1;
    }
    return "Note";
  }
  return "Light";
}


