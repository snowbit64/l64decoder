// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getNumMipMaps
// Entry Point: 00aac27c
// Size: 164 bytes
// Signature: undefined getNumMipMaps(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* NullTexture::getNumMipMaps() const */

int NullTexture::getNumMipMaps(void)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  long *in_x0;
  
  iVar5 = *(int *)((long)in_x0 + 0x14);
  if (iVar5 == -1) {
    uVar2 = (**(code **)(*in_x0 + 0x20))();
    uVar3 = (**(code **)(*in_x0 + 0x28))();
    uVar4 = (**(code **)(*in_x0 + 0x30))();
    if (uVar2 <= uVar3) {
      uVar3 = uVar2;
    }
    if ((uVar3 <= uVar4 || uVar4 == 0) || uVar4 < uVar3 && uVar4 == 1) {
      uVar4 = uVar3;
    }
    if (uVar4 < 2) {
      iVar5 = 0;
    }
    else {
      iVar5 = 0;
      do {
        iVar5 = iVar5 + 1;
        bVar1 = 3 < uVar4;
        uVar4 = uVar4 >> 1;
      } while (bVar1);
    }
  }
  return iVar5;
}


