// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: load
// Entry Point: 009622c8
// Size: 296 bytes
// Signature: undefined __thiscall load(Texture * this, uchar * param_1, uint param_2)


/* Texture::load(unsigned char*, unsigned int) */

Texture __thiscall Texture::load(Texture *this,uchar *param_1,uint param_2)

{
  Texture *pTVar1;
  byte bVar2;
  uint uVar3;
  BitmapImage *this_00;
  undefined4 uVar4;
  
  if ((this[0x20] == (Texture)0x0) && (*(int *)(this + 0x18) == 0)) {
    this_00 = (BitmapImage *)operator_new(0x40);
    pTVar1 = this + 0x31;
    if (((byte)this[0x30] & 1) != 0) {
      pTVar1 = *(Texture **)(this + 0x40);
    }
                    /* try { // try from 0096231c to 0096232b has its CatchHandler @ 009623f0 */
    BitmapImage::BitmapImage
              (this_00,(char *)pTVar1,param_1,param_2,1,(uint)*(ushort *)(this + 0x4a));
    *(BitmapImage **)(this + 0x58) = this_00;
    bVar2 = BitmapImage::isLoaded();
    this[0x20] = (Texture)(bVar2 & 1);
    *(ushort *)(this + 0x48) = *(ushort *)(this + 0x48) & 0xfff3;
    if ((bVar2 & 1) == 0) {
      *(undefined8 *)(this + 0x4c) = 0x500000000;
    }
    else {
      pTVar1 = this + 0x31;
      if (((byte)this[0x30] & 1) != 0) {
        pTVar1 = *(Texture **)(this + 0x40);
      }
      uVar3 = PixelFormatUtil::getPixelFormat
                        (*(BitmapImage **)(this + 0x58),
                         (*(BitmapImage **)(this + 0x58))[0x2d] == (BitmapImage)0x0,(char *)pTVar1);
      *(uint *)(this + 0x4c) = uVar3;
      if (*(uint *)(*(long *)(this + 0x58) + 0x38) < 4) {
        uVar4 = *(undefined4 *)
                 (&DAT_004c4600 + (long)(int)*(uint *)(*(long *)(this + 0x58) + 0x38) * 4);
      }
      else {
        uVar4 = 5;
      }
      *(undefined4 *)(this + 0x50) = uVar4;
      if ((PixelFormatUtil::s_pixelFormats[(ulong)uVar3 * 0x18 + 0xc] & 1) != 0) {
        *(ushort *)(this + 0x48) = *(ushort *)(this + 0x48) | 4;
      }
    }
  }
  return this[0x20];
}


