// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: restoreTileState
// Entry Point: 00dd0e70
// Size: 244 bytes
// Signature: undefined __thiscall restoreTileState(dtNavMesh * this, dtMeshTile * param_1, uchar * param_2, int param_3)


/* dtNavMesh::restoreTileState(dtMeshTile*, unsigned char const*, int) */

undefined8 __thiscall
dtNavMesh::restoreTileState(dtNavMesh *this,dtMeshTile *param_1,uchar *param_2,int param_3)

{
  undefined2 *puVar1;
  byte bVar2;
  ulong uVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  if (param_1 == (dtMeshTile *)0x0) {
    if (param_3 != 0 && -1 < -param_3) {
      return 0x80000008;
    }
  }
  else if (param_3 < *(int *)(*(long *)(param_1 + 8) + 0x18) * 4 + 0xc) {
    return 0x80000008;
  }
  if (*(int *)param_2 != 0x444e4d53) {
    return 0x80000001;
  }
  if (*(int *)(param_2 + 4) != 1) {
    return 0x80000002;
  }
  if (*(uint *)(param_2 + 8) !=
      ((int)((ulong)((long)param_1 - *(long *)(this + 0x50)) >> 3) * -0x3b13b13b <<
       (ulong)(*(uint *)(this + 0x60) & 0x1f) |
      *(int *)param_1 << (ulong)(*(int *)(this + 0x5c) + *(uint *)(this + 0x60) & 0x1f))) {
    return 0x80000008;
  }
  uVar3 = (ulong)*(uint *)(*(long *)(param_1 + 8) + 0x18);
  if (0 < (int)*(uint *)(*(long *)(param_1 + 8) + 0x18)) {
    pbVar5 = param_2 + 0xe;
    pbVar4 = (byte *)(*(long *)(param_1 + 0x10) + 0x1f);
    do {
      bVar2 = *pbVar5;
      uVar3 = uVar3 - 1;
      puVar1 = (undefined2 *)(pbVar5 + -2);
      pbVar5 = pbVar5 + 4;
      *(undefined2 *)(pbVar4 + -3) = *puVar1;
      *pbVar4 = *pbVar4 & 0xc0 | bVar2 & 0x3f;
      pbVar4 = pbVar4 + 0x20;
    } while (uVar3 != 0);
  }
  return 0x40000000;
}


