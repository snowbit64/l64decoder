// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getScale
// Entry Point: 0074970c
// Size: 84 bytes
// Signature: undefined __thiscall getScale(Clip * this, int param_1, Vector3 * param_2)


/* Clip::getScale(int, Vector3&) */

void __thiscall Clip::getScale(Clip *this,int param_1,Vector3 *param_2)

{
  long lVar1;
  long lVar2;
  float fVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  
  lVar2 = *(long *)(*(long *)(this + 0x20) + (long)param_1 * 8);
  fVar9 = *(float *)(lVar2 + 0xb0);
  lVar1 = *(long *)(lVar2 + 0xb8) + (ulong)*(byte *)(*(long *)(lVar2 + 0xb8) + 7);
  lVar2 = *(long *)(lVar2 + 0xc0) + (ulong)*(byte *)(*(long *)(lVar2 + 0xc0) + 7);
  uVar7 = *(undefined8 *)(lVar1 + 8);
  uVar4 = *(undefined8 *)(lVar2 + 8);
  fVar6 = *(float *)(lVar2 + 0x10);
  fVar8 = *(float *)(lVar1 + 0x10);
  fVar3 = (float)uVar4;
  fVar5 = (float)((ulong)uVar4 >> 0x20);
  *(ulong *)param_2 =
       CONCAT44(fVar5 + ((float)((ulong)uVar7 >> 0x20) - fVar5) * fVar9,
                fVar3 + ((float)uVar7 - fVar3) * fVar9);
  *(float *)(param_2 + 8) = fVar6 + fVar9 * (fVar8 - fVar6);
  return;
}


