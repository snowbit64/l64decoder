// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: translate
// Entry Point: 00b64f80
// Size: 304 bytes
// Signature: undefined __thiscall translate(Brep * this, Vector3 * param_1)


/* Brep::translate(Vector3 const&) */

void __thiscall Brep::translate(Brep *this,Vector3 *param_1)

{
  float *pfVar1;
  Brep BVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  lVar3 = *(long *)(this + 0x2ef8);
  lVar4 = *(long *)(this + 0x2ef0);
  if ((int)((ulong)(lVar3 - lVar4) >> 4) != 0) {
    uVar5 = 0;
    lVar6 = 4;
    do {
      BVar2 = this[0x2fb5];
      if (BVar2 != (Brep)0x0) {
        BrepSpatialHash::erase((BrepSpatialHash *)(this + 0x10),this,(ushort)uVar5);
        BVar2 = this[0x2fb5];
      }
      pfVar1 = (float *)(*(long *)(this + 0x2ef0) + lVar6);
      pfVar1[-1] = *(float *)param_1 + pfVar1[-1];
      *pfVar1 = *(float *)(param_1 + 4) + *pfVar1;
      pfVar1[1] = *(float *)(param_1 + 8) + pfVar1[1];
      if (BVar2 != (Brep)0x0) {
        BrepSpatialHash::insert((BrepSpatialHash *)(this + 0x10),this,(ushort)uVar5);
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0x10;
    } while (((ulong)(lVar3 - lVar4) >> 4 & 0xffffffff) != uVar5);
  }
  if (this[0x2fb4] != (Brep)0x0) {
    lVar4 = *(long *)(this + 0x2f88);
    for (lVar3 = *(long *)(this + 0x2f80); lVar3 != lVar4; lVar3 = lVar3 + 0x18) {
      *(float *)(lVar3 + 0xc) = *(float *)param_1 + *(float *)(lVar3 + 0xc);
      *(float *)(lVar3 + 0x10) = *(float *)(param_1 + 4) + *(float *)(lVar3 + 0x10);
      *(float *)(lVar3 + 0x14) = *(float *)(param_1 + 8) + *(float *)(lVar3 + 0x14);
    }
  }
  return;
}


