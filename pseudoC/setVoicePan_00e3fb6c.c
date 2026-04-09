// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setVoicePan
// Entry Point: 00e3fb6c
// Size: 212 bytes
// Signature: undefined __thiscall setVoicePan(Soloud * this, uint param_1, float param_2)


/* SoLoud::Soloud::setVoicePan(unsigned int, float) */

void __thiscall SoLoud::Soloud::setVoicePan(Soloud *this,uint param_1,float param_2)

{
  int iVar1;
  float *pfVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  double local_28;
  double local_8;
  
  lVar3 = *(long *)(this + (ulong)param_1 * 8 + 0xa0);
  if (lVar3 == 0) {
    return;
  }
  *(float *)(lVar3 + 0x18) = param_2;
  sincos((double)(param_2 + 1.0) * 3.141592653589793 * 0.25,&local_8,&local_28);
  iVar1 = *(int *)(lVar3 + 0x4c);
  fVar5 = (float)local_28;
  fVar4 = (float)local_8;
  *(float *)(lVar3 + 0x1c) = fVar5;
  *(float *)(lVar3 + 0x20) = fVar4;
  if (iVar1 == 8) {
    *(float *)(lVar3 + 0x2c) = fVar5;
    *(float *)(lVar3 + 0x30) = fVar4;
    *(float *)(lVar3 + 0x34) = fVar5;
    pfVar2 = (float *)(lVar3 + 0x38);
  }
  else {
    if (iVar1 != 6) {
      if (iVar1 != 4) {
        return;
      }
      pfVar2 = (float *)(lVar3 + 0x28);
      *(float *)(lVar3 + 0x24) = fVar5;
      goto LAB_00e3fc2c;
    }
    *(float *)(lVar3 + 0x2c) = fVar5;
    pfVar2 = (float *)(lVar3 + 0x30);
  }
  *(undefined8 *)(lVar3 + 0x24) = 0x3f8000003f3504f3;
LAB_00e3fc2c:
  *pfVar2 = fVar4;
  return;
}


