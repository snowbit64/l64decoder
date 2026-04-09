// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: processSample
// Entry Point: 00b1463c
// Size: 76 bytes
// Signature: undefined __thiscall processSample(IIRFilter * this, float param_1)


/* IIRFilter::processSample(float) */

undefined4 __thiscall IIRFilter::processSample(IIRFilter *this,float param_1)

{
  undefined4 uVar1;
  float fVar2;
  undefined4 uVar3;
  
  fVar2 = *(float *)(this + 0x14);
  uVar3 = *(undefined4 *)(this + 0x18);
  *(float *)(this + 0x14) = param_1;
  *(undefined4 *)(this + 0x1c) = uVar3;
  *(float *)(this + 0x18) = fVar2;
  uVar1 = NEON_fmadd(*(undefined4 *)this,param_1,fVar2 * *(float *)(this + 4));
  uVar1 = NEON_fmadd(*(undefined4 *)(this + 8),uVar3,uVar1);
  uVar1 = NEON_fmsub(*(undefined4 *)(this + 0xc),*(undefined4 *)(this + 0x20),uVar1);
  uVar3 = *(undefined4 *)(this + 0x24);
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(this + 0x20);
  *(undefined4 *)(this + 0x28) = uVar3;
  uVar1 = NEON_fmsub(*(undefined4 *)(this + 0x10),uVar3,uVar1);
  *(undefined4 *)(this + 0x20) = uVar1;
  return uVar1;
}


