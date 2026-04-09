// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: retrieveExact
// Entry Point: 00b6f500
// Size: 224 bytes
// Signature: undefined __thiscall retrieveExact(BrepSpatialHash * this, Brep * param_1, Vector3 * param_2)


/* BrepSpatialHash::retrieveExact(Brep const*, Vector3 const&) const */

ushort __thiscall
BrepSpatialHash::retrieveExact(BrepSpatialHash *this,Brep *param_1,Vector3 *param_2)

{
  long lVar1;
  ushort *puVar2;
  ushort *puVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar5 = (float)NEON_fmadd(*(float *)param_2,0x42c80000,0x3f000000);
  fVar6 = (float)NEON_fmadd(*(float *)(param_2 + 4),0x42c80000,0x3f000000);
  fVar4 = (float)NEON_fmadd(*(float *)(param_2 + 8),0x42c80000,0x3f000000);
  puVar3 = *(ushort **)
            (this + (ulong)((uint)((int)fVar6 * 0x127409f ^ (int)fVar5 * 0x466f45d ^
                                  (int)fVar4 * 0x4f9ffb7) % 500) * 0x18);
  puVar2 = *(ushort **)
            ((long)(this + (ulong)((uint)((int)fVar6 * 0x127409f ^ (int)fVar5 * 0x466f45d ^
                                         (int)fVar4 * 0x4f9ffb7) % 500) * 0x18) + 8);
  if (puVar3 == puVar2) {
LAB_00b6f5c8:
    if (puVar3 != puVar2) {
      return *puVar3;
    }
  }
  else {
    do {
      if (((*(float *)param_2 == *(float *)(*(long *)(param_1 + 0x2ef0) + (ulong)*puVar3 * 0x10)) &&
          (lVar1 = *(long *)(param_1 + 0x2ef0) + (ulong)*puVar3 * 0x10,
          *(float *)(param_2 + 4) == *(float *)(lVar1 + 4))) &&
         (*(float *)(param_2 + 8) == *(float *)(lVar1 + 8))) goto LAB_00b6f5c8;
      puVar3 = puVar3 + 1;
    } while (puVar3 != puVar2);
  }
  return 0xffff;
}


