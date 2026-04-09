// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createHighShelf
// Entry Point: 00b1445c
// Size: 244 bytes
// Signature: undefined __thiscall createHighShelf(IIRFilter * this, float param_1, float param_2, float param_3, float param_4)


/* IIRFilter::createHighShelf(float, float, float, float) */

void __thiscall
IIRFilter::createHighShelf(IIRFilter *this,float param_1,float param_2,float param_3,float param_4)

{
  float *in_x8;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_28;
  float local_24;
  
  fVar3 = SQRT(param_3);
  if (param_2 <= 2.0) {
    param_2 = 2.0;
  }
  sincosf((param_2 * 6.283185) / param_1,&local_24,&local_28);
  fVar4 = fVar3 + -1.0;
  fVar2 = fVar3 + 1.0;
  fVar1 = (local_24 * SQRT(fVar3)) / param_4;
  fVar5 = (float)NEON_fmadd(fVar4,local_28,fVar2);
  fVar6 = (float)NEON_fmsub(fVar4,local_28,fVar2);
  fVar7 = (float)NEON_fmadd(fVar2,local_28,fVar4);
  fVar2 = (float)NEON_fmsub(fVar2,local_28,fVar4);
  fVar4 = fVar6 + fVar1;
  *in_x8 = (fVar3 * (fVar5 + fVar1)) / fVar4;
  in_x8[1] = (fVar3 * -2.0 * fVar7) / fVar4;
  *(ulong *)(in_x8 + 2) = CONCAT44((fVar2 * 2.0) / fVar4,(fVar3 * (fVar5 - fVar1)) / fVar4);
  in_x8[4] = (fVar6 - fVar1) / fVar4;
  return;
}


