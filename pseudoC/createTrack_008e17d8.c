// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createTrack
// Entry Point: 008e17d8
// Size: 144 bytes
// Signature: undefined __thiscall createTrack(TyreTrackSystem * this, float param_1, int param_2)


/* TyreTrackSystem::createTrack(float, int) */

int __thiscall TyreTrackSystem::createTrack(TyreTrackSystem *this,float param_1,int param_2)

{
  uint uVar1;
  float *pfVar2;
  ulong uVar3;
  long lVar4;
  
  uVar1 = *(uint *)(*(long *)(this + 0x28) + 0x60);
  if (uVar1 != 0) {
    uVar3 = 0;
    lVar4 = *(long *)(*(long *)(this + 0x28) + 0x68);
    do {
      if (*(long *)(lVar4 + uVar3 * 8) == 0) {
        pfVar2 = (float *)operator_new(0x94);
        *pfVar2 = param_1;
        *(undefined *)(pfVar2 + 2) = 0;
        pfVar2[0x23] = 0.0;
        pfVar2[0x24] = (float)param_2;
        pfVar2[1] = 1.0;
        *(undefined8 *)(pfVar2 + 0x21) = 0xffffffffffffffff;
        *(float **)(lVar4 + uVar3 * 8) = pfVar2;
        return (int)uVar3 + 1;
      }
      uVar3 = uVar3 + 1;
    } while (uVar1 != uVar3);
  }
  return 0;
}


