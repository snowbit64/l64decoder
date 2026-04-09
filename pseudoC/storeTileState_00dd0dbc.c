// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: storeTileState
// Entry Point: 00dd0dbc
// Size: 180 bytes
// Signature: undefined __thiscall storeTileState(dtNavMesh * this, dtMeshTile * param_1, uchar * param_2, int param_3)


/* dtNavMesh::storeTileState(dtMeshTile const*, unsigned char*, int) const */

undefined8 __thiscall
dtNavMesh::storeTileState(dtNavMesh *this,dtMeshTile *param_1,uchar *param_2,int param_3)

{
  uint uVar1;
  byte bVar2;
  ulong uVar3;
  undefined2 *puVar4;
  long lVar5;
  byte *pbVar6;
  
  if (param_1 == (dtMeshTile *)0x0) {
    if (-1 < param_3) goto LAB_00dd0df0;
  }
  else if (*(int *)(*(long *)(param_1 + 8) + 0x18) * 4 + 0xc <= param_3) {
LAB_00dd0df0:
    lVar5 = *(long *)(this + 0x50);
    uVar1 = *(uint *)(*(long *)(param_1 + 8) + 0x18);
    uVar3 = (ulong)uVar1;
    *(undefined8 *)param_2 = 0x1444e4d53;
    *(int *)(param_2 + 8) =
         (int)((ulong)((long)param_1 - lVar5) >> 3) * -0x3b13b13b <<
         (ulong)(*(uint *)(this + 0x60) & 0x1f) |
         *(int *)param_1 << (ulong)(*(int *)(this + 0x5c) + *(uint *)(this + 0x60) & 0x1f);
    if (0 < (int)uVar1) {
      puVar4 = (undefined2 *)(*(long *)(param_1 + 0x10) + 0x1c);
      pbVar6 = param_2 + 0xe;
      do {
        bVar2 = *(byte *)((long)puVar4 + 3);
        uVar3 = uVar3 - 1;
        *(undefined2 *)(pbVar6 + -2) = *puVar4;
        *pbVar6 = bVar2 & 0x3f;
        puVar4 = puVar4 + 0x10;
        pbVar6 = pbVar6 + 4;
      } while (uVar3 != 0);
    }
    return 0x40000000;
  }
  return 0x80000010;
}


