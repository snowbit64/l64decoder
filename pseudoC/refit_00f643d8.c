// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: refit
// Entry Point: 00f643d8
// Size: 168 bytes
// Signature: undefined __thiscall refit(btOptimizedBvh * this, btStridingMeshInterface * param_1, btVector3 * param_2, btVector3 * param_3)


/* btOptimizedBvh::refit(btStridingMeshInterface*, btVector3 const&, btVector3 const&) */

void __thiscall
btOptimizedBvh::refit
          (btOptimizedBvh *this,btStridingMeshInterface *param_1,btVector3 *param_2,
          btVector3 *param_3)

{
  undefined2 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined2 *puVar4;
  
  if (this[0x40] != (btOptimizedBvh)0x0) {
    btQuantizedBvh::setQuantizationValues((btQuantizedBvh *)this,param_2,param_3,1.0);
    updateBvhNodes((btStridingMeshInterface *)this,(int)param_1,0,*(int *)(this + 0x3c));
    uVar2 = (ulong)*(uint *)(this + 0xd4);
    if (0 < (int)*(uint *)(this + 0xd4)) {
      lVar3 = *(long *)(this + 0xb8);
      puVar4 = (undefined2 *)(*(long *)(this + 0xe0) + 6);
      do {
        uVar2 = uVar2 - 1;
        puVar1 = (undefined2 *)(lVar3 + (long)*(int *)(puVar4 + 3) * 0x10);
        puVar4[-3] = *puVar1;
        puVar4[-2] = puVar1[1];
        puVar4[-1] = puVar1[2];
        *puVar4 = puVar1[3];
        puVar4[1] = puVar1[4];
        puVar4[2] = puVar1[5];
        puVar4 = puVar4 + 0x10;
      } while (uVar2 != 0);
    }
  }
  return;
}


