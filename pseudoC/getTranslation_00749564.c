// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getTranslation
// Entry Point: 00749564
// Size: 68 bytes
// Signature: undefined __thiscall getTranslation(Clip * this, int param_1, Vector3 * param_2)


/* Clip::getTranslation(int, Vector3&) */

void __thiscall Clip::getTranslation(Clip *this,int param_1,Vector3 *param_2)

{
  long lVar1;
  float fVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  
  lVar1 = *(long *)(*(long *)(this + 0x20) + (long)param_1 * 8);
  fVar8 = *(float *)(lVar1 + 0xa8);
  uVar6 = *(undefined8 *)(*(long *)(lVar1 + 0xb8) + 8);
  uVar3 = *(undefined8 *)(*(long *)(lVar1 + 0xc0) + 8);
  fVar5 = *(float *)(*(long *)(lVar1 + 0xc0) + 0x10);
  fVar7 = *(float *)(*(long *)(lVar1 + 0xb8) + 0x10);
  fVar2 = (float)uVar3;
  fVar4 = (float)((ulong)uVar3 >> 0x20);
  *(ulong *)param_2 =
       CONCAT44(fVar4 + ((float)((ulong)uVar6 >> 0x20) - fVar4) * fVar8,
                fVar2 + ((float)uVar6 - fVar2) * fVar8);
  *(float *)(param_2 + 8) = fVar5 + fVar8 * (fVar7 - fVar5);
  return;
}


