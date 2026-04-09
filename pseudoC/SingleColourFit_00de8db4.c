// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: SingleColourFit
// Entry Point: 00de8db4
// Size: 172 bytes
// Signature: undefined __thiscall SingleColourFit(SingleColourFit * this, ColourSet * param_1, int param_2)


/* squish::SingleColourFit::SingleColourFit(squish::ColourSet const*, int) */

void __thiscall
squish::SingleColourFit::SingleColourFit(SingleColourFit *this,ColourSet *param_1,int param_2)

{
  long lVar1;
  int iVar2;
  float fVar3;
  
  ColourFit::ColourFit((ColourFit *)this,param_1,param_2);
  lVar1 = *(long *)(this + 8);
  iVar2 = (int)(*(float *)(lVar1 + 4) * 255.0 + 0.5);
  if (0xfe < iVar2) {
    iVar2 = 0xff;
  }
  this[0x14] = (SingleColourFit)((byte)iVar2 & ((byte)(iVar2 >> 0x1f) ^ 0xff));
  iVar2 = (int)(*(float *)(lVar1 + 8) * 255.0 + 0.5);
  if (0xfe < iVar2) {
    iVar2 = 0xff;
  }
  this[0x15] = (SingleColourFit)((byte)iVar2 & ((byte)(iVar2 >> 0x1f) ^ 0xff));
  fVar3 = *(float *)(lVar1 + 0xc);
  *(undefined ***)this = &PTR_Compress3_010130f0;
  iVar2 = (int)(fVar3 * 255.0 + 0.5);
  if (0xfe < iVar2) {
    iVar2 = 0xff;
  }
  *(undefined4 *)(this + 0x38) = 0x7fffffff;
  this[0x16] = (SingleColourFit)((byte)iVar2 & ((byte)(iVar2 >> 0x1f) ^ 0xff));
  return;
}


