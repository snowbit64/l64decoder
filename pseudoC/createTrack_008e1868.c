// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createTrack
// Entry Point: 008e1868
// Size: 140 bytes
// Signature: undefined __thiscall createTrack(TyreTrackGeometry * this, float param_1, int param_2)


/* TyreTrackGeometry::createTrack(float, int) */

int __thiscall TyreTrackGeometry::createTrack(TyreTrackGeometry *this,float param_1,int param_2)

{
  float *pfVar1;
  ulong uVar2;
  long lVar3;
  
  if (*(uint *)(this + 0x60) != 0) {
    uVar2 = 0;
    lVar3 = *(long *)(this + 0x68);
    do {
      if (*(long *)(lVar3 + uVar2 * 8) == 0) {
        pfVar1 = (float *)operator_new(0x94);
        *pfVar1 = param_1;
        *(undefined *)(pfVar1 + 2) = 0;
        pfVar1[0x23] = 0.0;
        pfVar1[0x24] = (float)param_2;
        pfVar1[1] = 1.0;
        *(undefined8 *)(pfVar1 + 0x21) = 0xffffffffffffffff;
        *(float **)(lVar3 + uVar2 * 8) = pfVar1;
        return (int)uVar2 + 1;
      }
      uVar2 = uVar2 + 1;
    } while (*(uint *)(this + 0x60) != uVar2);
  }
  return 0;
}


