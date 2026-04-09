// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: unload
// Entry Point: 00962b50
// Size: 116 bytes
// Signature: undefined unload(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Texture::unload() */

void Texture::unload(void)

{
  long in_x0;
  void *pvVar1;
  BitmapImage *this;
  void *pvVar2;
  
  this = *(BitmapImage **)(in_x0 + 0x58);
  if (this != (BitmapImage *)0x0) {
    BitmapImage::~BitmapImage(this);
    operator_delete(this);
  }
  pvVar2 = *(void **)(in_x0 + 0x60);
  *(undefined8 *)(in_x0 + 0x58) = 0;
  if (pvVar2 == (void *)0x0) goto LAB_00962bb4;
  if (*(void **)((long)pvVar2 + 0x10) == (void *)0x0) {
    *(undefined8 *)((long)pvVar2 + 0x10) = 0;
LAB_00962ba8:
    operator_delete(pvVar2);
  }
  else {
    operator_delete__(*(void **)((long)pvVar2 + 0x10));
    pvVar1 = *(void **)(in_x0 + 0x60);
    *(undefined8 *)((long)pvVar2 + 0x10) = 0;
    pvVar2 = pvVar1;
    if (pvVar1 != (void *)0x0) goto LAB_00962ba8;
  }
  *(undefined8 *)(in_x0 + 0x60) = 0;
LAB_00962bb4:
  *(undefined *)(in_x0 + 0x20) = 0;
  return;
}


