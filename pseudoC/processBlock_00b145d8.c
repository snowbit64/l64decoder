// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: processBlock
// Entry Point: 00b145d8
// Size: 100 bytes
// Signature: undefined __thiscall processBlock(IIRFilter * this, int param_1, float * param_2)


/* IIRFilter::processBlock(int, float*) */

void __thiscall IIRFilter::processBlock(IIRFilter *this,int param_1,float *param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  
  if (0 < param_1) {
    uVar1 = (ulong)(uint)param_1;
    do {
      fVar3 = *(float *)(this + 0x14);
      fVar4 = *param_2;
      uVar1 = uVar1 - 1;
      uVar5 = *(undefined4 *)(this + 0x18);
      *(float *)(this + 0x18) = fVar3;
      *(undefined4 *)(this + 0x1c) = uVar5;
      *(float *)(this + 0x14) = fVar4;
      uVar2 = NEON_fmadd(*(undefined4 *)this,fVar4,fVar3 * *(float *)(this + 4));
      uVar2 = NEON_fmadd(*(undefined4 *)(this + 8),uVar5,uVar2);
      uVar2 = NEON_fmsub(*(undefined4 *)(this + 0xc),*(undefined4 *)(this + 0x20),uVar2);
      uVar5 = *(undefined4 *)(this + 0x24);
      *(undefined4 *)(this + 0x24) = *(undefined4 *)(this + 0x20);
      *(undefined4 *)(this + 0x28) = uVar5;
      fVar3 = (float)NEON_fmsub(*(undefined4 *)(this + 0x10),uVar5,uVar2);
      *(float *)(this + 0x20) = fVar3;
      *param_2 = fVar3;
      param_2 = param_2 + 1;
    } while (uVar1 != 0);
  }
  return;
}


