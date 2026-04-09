// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: flipBlocksBC2Y
// Entry Point: 00a95578
// Size: 84 bytes
// Signature: undefined __cdecl flipBlocksBC2Y(uchar * param_1, uint param_2, bool * param_3)


/* ImageUtil::flipBlocksBC2Y(unsigned char*, unsigned int, bool&) */

void ImageUtil::flipBlocksBC2Y(uchar *param_1,uint param_2,bool *param_3)

{
  uchar uVar1;
  uchar uVar2;
  undefined2 uVar3;
  uchar *puVar4;
  
  if (param_2 != 0) {
    puVar4 = param_1 + 0xf;
    do {
      param_2 = param_2 - 1;
      uVar3 = *(undefined2 *)(puVar4 + -9);
      *(undefined2 *)(puVar4 + -9) = *(undefined2 *)(puVar4 + -0xf);
      uVar1 = puVar4[-3];
      *(undefined2 *)(puVar4 + -0xf) = uVar3;
      puVar4[-3] = *puVar4;
      uVar2 = puVar4[-1];
      *puVar4 = uVar1;
      puVar4[-1] = puVar4[-2];
      *(uint *)(puVar4 + -0xd) = *(uint *)(puVar4 + -0xd) >> 0x10 | *(uint *)(puVar4 + -0xd) << 0x10
      ;
      puVar4[-2] = uVar2;
      puVar4 = puVar4 + 0x10;
    } while (param_2 != 0);
  }
  return;
}


