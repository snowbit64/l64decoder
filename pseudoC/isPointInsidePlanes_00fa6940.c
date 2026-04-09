// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: isPointInsidePlanes
// Entry Point: 00fa6940
// Size: 120 bytes
// Signature: undefined __cdecl isPointInsidePlanes(btAlignedObjectArray * param_1, btVector3 * param_2, float param_3)


/* btGeometryUtil::isPointInsidePlanes(btAlignedObjectArray<btVector3> const&, btVector3 const&,
   float) */

byte btGeometryUtil::isPointInsidePlanes
               (btAlignedObjectArray *param_1,btVector3 *param_2,float param_3)

{
  uint uVar1;
  bool bVar2;
  ulong uVar3;
  undefined4 *puVar4;
  float fVar5;
  
  uVar1 = *(uint *)(param_1 + 4);
  if ((int)uVar1 < 1) {
    bVar2 = false;
  }
  else {
    puVar4 = *(undefined4 **)(param_1 + 0x10);
    uVar3 = 0;
    bVar2 = true;
    do {
      fVar5 = (float)NEON_fnmsub(*(undefined4 *)param_2,*puVar4,param_3);
      if (0.0 < fVar5 + (float)*(undefined8 *)(param_2 + 4) * (float)*(undefined8 *)(puVar4 + 1) +
                (float)((ulong)*(undefined8 *)(param_2 + 4) >> 0x20) *
                (float)((ulong)*(undefined8 *)(puVar4 + 1) >> 0x20) + (float)puVar4[3]) break;
      uVar3 = uVar3 + 1;
      puVar4 = puVar4 + 4;
      bVar2 = uVar3 < uVar1;
    } while (uVar1 != uVar3);
  }
  return ~bVar2 & 1;
}


