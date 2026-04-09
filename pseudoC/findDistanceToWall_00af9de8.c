// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: findDistanceToWall
// Entry Point: 00af9de8
// Size: 384 bytes
// Signature: undefined __thiscall findDistanceToWall(DetourNavigationMeshQuery * this, float * param_1, float param_2, bool * param_3, float * param_4, float * param_5)


/* DetourNavigationMeshQuery::findDistanceToWall(float const*, float, bool&, float*, float*) */

void __thiscall
DetourNavigationMeshQuery::findDistanceToWall
          (DetourNavigationMeshQuery *this,float *param_1,float param_2,bool *param_3,float *param_4
          ,float *param_5)

{
  dtPoly dVar1;
  long lVar2;
  ulong uVar3;
  ushort *puVar4;
  undefined4 *puVar5;
  long lVar6;
  undefined4 *puVar7;
  float fVar8;
  dtPoly *local_c8;
  dtMeshTile *local_c0;
  float local_b8;
  uint local_b4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  float local_64;
  undefined4 local_60;
  float local_5c;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  local_60 = 0x40800000;
  local_b4 = 0;
  local_64 = param_2;
  local_5c = param_2;
  dtNavMeshQuery::findNearestPoly
            (*(dtNavMeshQuery **)(this + 8),param_1,&local_64,(dtQueryFilter *)(this + 0x10),
             &local_b4,(float *)0x0);
  *param_3 = false;
  local_b8 = -1.0;
  uVar3 = dtNavMesh::isValidPolyRef(*(dtNavMesh **)this,local_b4);
  fVar8 = -1.0;
  if ((uVar3 & 1) != 0) {
    dtNavMeshQuery::findDistanceToWall
              (*(dtNavMeshQuery **)(this + 8),local_b4,param_1,param_2,
               (dtQueryFilter *)(this + 0x10),&local_b8,param_4,param_5);
    local_c8 = (dtPoly *)0x0;
    local_c0 = (dtMeshTile *)0x0;
    dtNavMesh::getTileAndPolyByRefUnsafe(*(dtNavMesh **)this,local_b4,&local_c0,&local_c8);
    local_70 = 0;
    uStack_88 = 0;
    local_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_a8 = 0;
    local_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    dVar1 = local_c8[0x1e];
    uVar3 = (ulong)(byte)dVar1;
    if ((byte)dVar1 != 0) {
      lVar6 = *(long *)(local_c0 + 0x18);
      puVar4 = (ushort *)(local_c8 + 4);
      puVar5 = (undefined4 *)((ulong)&local_b0 | 8);
      do {
        uVar3 = uVar3 - 1;
        puVar7 = (undefined4 *)(lVar6 + (ulong)*puVar4 * 0xc);
        puVar5[-2] = *puVar7;
        puVar5[-1] = puVar7[1];
        *puVar5 = puVar7[2];
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 3;
      } while (uVar3 != 0);
    }
    uVar3 = dtPointInPolygon(param_1,(float *)&local_b0,(uint)(byte)dVar1);
    fVar8 = local_b8;
    if ((uVar3 & 1) != 0) {
      *param_3 = true;
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(fVar8);
  }
  return;
}


