// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: CompressAlphaDxt3
// Entry Point: 00deb204
// Size: 728 bytes
// Signature: undefined __cdecl CompressAlphaDxt3(uchar * param_1, int param_2, void * param_3)


/* squish::CompressAlphaDxt3(unsigned char const*, int, void*) */

void squish::CompressAlphaDxt3(uchar *param_1,int param_2,void *param_3)

{
  int iVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = (float)NEON_ucvtf((uint)param_1[3]);
  fVar4 = (float)NEON_ucvtf((uint)param_1[7]);
  iVar1 = (int)(fVar3 * 0.05882353 + 0.5);
  uVar2 = (uint)(fVar4 * 0.05882353 + 0.5);
  if (0xe < iVar1) {
    iVar1 = 0xf;
  }
  if (0xe < (int)uVar2) {
    uVar2 = 0xf;
  }
  *(byte *)param_3 =
       -((byte)((uint)param_2 >> 1) & 1) & (byte)((uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU)) << 4)
       | -((byte)param_2 & 1) & (byte)iVar1 & ((byte)(iVar1 >> 0x1f) ^ 0xff);
  fVar3 = (float)NEON_ucvtf((uint)param_1[0xb]);
  fVar4 = (float)NEON_ucvtf((uint)param_1[0xf]);
  iVar1 = (int)(fVar3 * 0.05882353 + 0.5);
  uVar2 = (uint)(fVar4 * 0.05882353 + 0.5);
  if (0xe < iVar1) {
    iVar1 = 0xf;
  }
  if (0xe < (int)uVar2) {
    uVar2 = 0xf;
  }
  *(byte *)((long)param_3 + 1) =
       -((byte)((uint)param_2 >> 3) & 1) & (byte)((uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU)) << 4)
       | (byte)iVar1 & ((byte)(iVar1 >> 0x1f) ^ 0xff) & (byte)((param_2 << 0x1d) >> 0x1f);
  fVar3 = (float)NEON_ucvtf((uint)param_1[0x13]);
  fVar4 = (float)NEON_ucvtf((uint)param_1[0x17]);
  iVar1 = (int)(fVar3 * 0.05882353 + 0.5);
  uVar2 = (uint)(fVar4 * 0.05882353 + 0.5);
  if (0xe < iVar1) {
    iVar1 = 0xf;
  }
  if (0xe < (int)uVar2) {
    uVar2 = 0xf;
  }
  *(byte *)((long)param_3 + 2) =
       -((byte)((uint)param_2 >> 5) & 1) & (byte)((uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU)) << 4)
       | (byte)iVar1 & ((byte)(iVar1 >> 0x1f) ^ 0xff) & (byte)((param_2 << 0x1b) >> 0x1f);
  fVar3 = (float)NEON_ucvtf((uint)param_1[0x1b]);
  fVar4 = (float)NEON_ucvtf((uint)param_1[0x1f]);
  iVar1 = (int)(fVar3 * 0.05882353 + 0.5);
  uVar2 = (uint)(fVar4 * 0.05882353 + 0.5);
  if (0xe < iVar1) {
    iVar1 = 0xf;
  }
  if (0xe < (int)uVar2) {
    uVar2 = 0xf;
  }
  *(byte *)((long)param_3 + 3) =
       -((byte)((uint)param_2 >> 7) & 1) & (byte)((uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU)) << 4)
       | (byte)iVar1 & ((byte)(iVar1 >> 0x1f) ^ 0xff) & (byte)((param_2 << 0x19) >> 0x1f);
  fVar3 = (float)NEON_ucvtf((uint)param_1[0x23]);
  fVar4 = (float)NEON_ucvtf((uint)param_1[0x27]);
  iVar1 = (int)(fVar3 * 0.05882353 + 0.5);
  uVar2 = (uint)(fVar4 * 0.05882353 + 0.5);
  if (0xe < iVar1) {
    iVar1 = 0xf;
  }
  if (0xe < (int)uVar2) {
    uVar2 = 0xf;
  }
  *(byte *)((long)param_3 + 4) =
       -((byte)((uint)param_2 >> 9) & 1) & (byte)((uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU)) << 4)
       | (byte)iVar1 & ((byte)(iVar1 >> 0x1f) ^ 0xff) & (byte)((param_2 << 0x17) >> 0x1f);
  fVar3 = (float)NEON_ucvtf((uint)param_1[0x2b]);
  fVar4 = (float)NEON_ucvtf((uint)param_1[0x2f]);
  iVar1 = (int)(fVar3 * 0.05882353 + 0.5);
  uVar2 = (uint)(fVar4 * 0.05882353 + 0.5);
  if (0xe < iVar1) {
    iVar1 = 0xf;
  }
  if (0xe < (int)uVar2) {
    uVar2 = 0xf;
  }
  *(byte *)((long)param_3 + 5) =
       -((byte)((uint)param_2 >> 0xb) & 1) &
       (byte)((uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU)) << 4) |
       (byte)iVar1 & ((byte)(iVar1 >> 0x1f) ^ 0xff) & (byte)((param_2 << 0x15) >> 0x1f);
  fVar3 = (float)NEON_ucvtf((uint)param_1[0x33]);
  fVar4 = (float)NEON_ucvtf((uint)param_1[0x37]);
  iVar1 = (int)(fVar3 * 0.05882353 + 0.5);
  uVar2 = (uint)(fVar4 * 0.05882353 + 0.5);
  if (0xe < iVar1) {
    iVar1 = 0xf;
  }
  if (0xe < (int)uVar2) {
    uVar2 = 0xf;
  }
  *(byte *)((long)param_3 + 6) =
       -((byte)((uint)param_2 >> 0xd) & 1) &
       (byte)((uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU)) << 4) |
       (byte)iVar1 & ((byte)(iVar1 >> 0x1f) ^ 0xff) & (byte)((param_2 << 0x13) >> 0x1f);
  fVar3 = (float)NEON_ucvtf((uint)param_1[0x3b]);
  fVar4 = (float)NEON_ucvtf((uint)param_1[0x3f]);
  iVar1 = (int)(fVar3 * 0.05882353 + 0.5);
  uVar2 = (uint)(fVar4 * 0.05882353 + 0.5);
  if (0xe < iVar1) {
    iVar1 = 0xf;
  }
  if (0xe < (int)uVar2) {
    uVar2 = 0xf;
  }
  *(byte *)((long)param_3 + 7) =
       -((byte)((uint)param_2 >> 0xf) & 1) &
       (byte)((uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU)) << 4) |
       (byte)iVar1 & ((byte)(iVar1 >> 0x1f) ^ 0xff) & (byte)((param_2 << 0x11) >> 0x1f);
  return;
}


