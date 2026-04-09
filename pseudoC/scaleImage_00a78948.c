// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: scaleImage
// Entry Point: 00a78948
// Size: 180 bytes
// Signature: undefined __thiscall scaleImage(BitmapImage * this, uint param_1, uint param_2)


/* BitmapImage::scaleImage(unsigned int, unsigned int) */

undefined8 __thiscall BitmapImage::scaleImage(BitmapImage *this,uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uchar *puVar3;
  uchar *puVar4;
  
  puVar4 = *(uchar **)(this + 0x20);
  if (puVar4 != (uchar *)0x0) {
    if (param_1 == 0) {
      param_1 = 1;
    }
    if (param_2 == 0) {
      param_2 = 1;
    }
    if (*(int *)(this + 0x34) == 1) {
      uVar1 = *(uint *)(this + 0x14);
      uVar2 = param_2 * param_1 * uVar1;
      *(uint *)(this + 0x28) = uVar2;
      puVar3 = (uchar *)operator_new__((ulong)uVar2);
      ImageScale::scaleImageBilinear
                (puVar4,*(uint *)(this + 8),*(uint *)(this + 0xc),uVar1,puVar3,0,param_1,param_2);
      if ((*this != (BitmapImage)0x0) && (*(void **)(this + 0x20) != (void *)0x0)) {
        operator_delete__(*(void **)(this + 0x20));
      }
      *(uchar **)(this + 0x20) = puVar3;
      *(uint *)(this + 8) = param_1;
      *(uint *)(this + 0xc) = param_2;
      *this = (BitmapImage)0x1;
      return 1;
    }
  }
  return 0;
}


