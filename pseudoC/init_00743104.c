// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: init
// Entry Point: 00743104
// Size: 92 bytes
// Signature: undefined __thiscall init(TractorTrailer * this, PlanarPose * param_1)


/* TractorTrailer::init(PlanarPose const&) */

void __thiscall TractorTrailer::init(TractorTrailer *this,PlanarPose *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  float *pfVar5;
  float fVar6;
  undefined8 uVar7;
  
  uVar7 = *(undefined8 *)param_1;
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)this = uVar7;
  if (*(int *)(this + 0x58) != 0) {
    uVar4 = 0;
    do {
      uVar2 = uVar4 + 1;
      uVar7 = *(undefined8 *)(this + (ulong)uVar4 * 0x10);
      puVar1 = (undefined8 *)(this + (ulong)uVar2 * 0x10);
      puVar1[1] = *(undefined8 *)((long)(this + (ulong)uVar4 * 0x10) + 8);
      *puVar1 = uVar7;
      pfVar5 = (float *)(*(long *)(this + 0x50) + (ulong)uVar4 * 0xc);
      uVar3 = *(uint *)(this + 0x58);
      fVar6 = *pfVar5 - pfVar5[1];
      *puVar1 = CONCAT44((float)((ulong)*puVar1 >> 0x20) + (float)((ulong)puVar1[1] >> 0x20) * fVar6
                         ,(float)*puVar1 + (float)puVar1[1] * fVar6);
      uVar4 = uVar2;
    } while (uVar2 != uVar3);
  }
  return;
}


