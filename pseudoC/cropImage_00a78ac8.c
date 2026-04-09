// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: cropImage
// Entry Point: 00a78ac8
// Size: 244 bytes
// Signature: undefined __thiscall cropImage(BitmapImage * this, uint param_1, uint param_2, uint param_3, uint param_4)


/* BitmapImage::cropImage(unsigned int, unsigned int, unsigned int, unsigned int) */

bool __thiscall
BitmapImage::cropImage(BitmapImage *this,uint param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  void *pvVar5;
  ulong uVar6;
  void *pvVar7;
  uint uVar8;
  uint uVar9;
  
  pvVar7 = *(void **)(this + 0x20);
  iVar1 = *(int *)(this + 0x34);
  if (pvVar7 != (void *)0x0 && iVar1 == 1) {
    iVar2 = *(int *)(this + 0x14);
    uVar4 = iVar2 * param_3;
    *(uint *)(this + 0x28) = uVar4 * param_4;
    pvVar5 = operator_new__((ulong)(uVar4 * param_4));
    if (param_4 != 0) {
      iVar3 = *(int *)(this + 8);
      uVar9 = 0;
      uVar8 = iVar2 * (param_1 + iVar3 * param_2);
      uVar6 = (ulong)param_4;
      do {
        memcpy((void *)((long)pvVar5 + (ulong)uVar9),(void *)((long)pvVar7 + (ulong)uVar8),
               (ulong)uVar4);
        uVar9 = uVar9 + uVar4;
        uVar8 = uVar8 + iVar3 * iVar2;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    if (*this != (BitmapImage)0x0) {
      operator_delete__(pvVar7);
    }
    *(void **)(this + 0x20) = pvVar5;
    *this = (BitmapImage)0x1;
    *(uint *)(this + 8) = param_3;
    *(uint *)(this + 0xc) = param_4;
  }
  return pvVar7 != (void *)0x0 && iVar1 == 1;
}


