// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getLevel
// Entry Point: 00a58970
// Size: 180 bytes
// Signature: undefined __thiscall getLevel(LODTransformGroup * this, Vector3 * param_1, float param_2)


/* LODTransformGroup::getLevel(Vector3 const&, float) */

undefined8 __thiscall
LODTransformGroup::getLevel(LODTransformGroup *this,Vector3 *param_1,float param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined4 uVar4;
  float fVar5;
  
  RawTransformGroup::updateWorldTransformation();
  uVar1 = (uint)((ulong)(*(long *)(this + 0x30) - *(long *)(this + 0x28)) >> 3);
  uVar2 = uVar1;
  if (3 < uVar1) {
    uVar2 = 4;
  }
  if (1 < uVar2) {
    lVar3 = 0;
    uVar4 = NEON_fmadd(*(float *)(this + 0xe8) - *(float *)param_1,
                       *(float *)(this + 0xe8) - *(float *)param_1,
                       (*(float *)(this + 0xec) - *(float *)(param_1 + 4)) *
                       (*(float *)(this + 0xec) - *(float *)(param_1 + 4)));
    fVar5 = (float)NEON_fmadd(*(float *)(this + 0xf0) - *(float *)(param_1 + 8),
                              *(float *)(this + 0xf0) - *(float *)(param_1 + 8),uVar4);
    do {
      if (fVar5 < *(float *)(this + lVar3 * 4 + 0x158) * param_2 *
                  *(float *)(this + lVar3 * 4 + 0x158) * param_2) {
        uVar1 = (int)lVar3 + 1;
        break;
      }
      lVar3 = lVar3 + 1;
    } while ((ulong)uVar2 - 1 != lVar3);
  }
  return *(undefined8 *)(*(long *)(this + 0x28) + (ulong)(uVar1 - 1) * 8);
}


