// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: swizzleChannels
// Entry Point: 00a78bbc
// Size: 268 bytes
// Signature: undefined __thiscall swizzleChannels(BitmapImage * this, uint param_1, uint * param_2, uchar * param_3)


/* BitmapImage::swizzleChannels(unsigned int, unsigned int const*, unsigned char const*) */

bool __thiscall
BitmapImage::swizzleChannels(BitmapImage *this,uint param_1,uint *param_2,uchar *param_3)

{
  uint uVar1;
  uchar *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  void *pvVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  uchar *puVar10;
  uint *puVar11;
  void *pvVar12;
  
  pvVar12 = *(void **)(this + 0x20);
  iVar3 = *(int *)(this + 0x34);
  if (pvVar12 != (void *)0x0 && iVar3 == 1) {
    iVar5 = *(int *)(this + 0xc) * *(int *)(this + 8);
    *(uint *)(this + 0x28) = iVar5 * param_1;
    pvVar6 = operator_new__((ulong)(iVar5 * param_1));
    if (iVar5 != 0) {
      uVar7 = 0;
      iVar8 = 0;
      uVar4 = *(uint *)(this + 0x14);
      do {
        if (param_1 != 0) {
          uVar9 = (ulong)param_1;
          puVar10 = param_3;
          puVar11 = param_2;
          uVar1 = uVar7;
          do {
            puVar2 = (uchar *)((long)pvVar12 + (ulong)(uVar4 * iVar8 + *puVar11));
            if (uVar4 <= *puVar11) {
              puVar2 = puVar10;
            }
            puVar10 = puVar10 + 1;
            uVar9 = uVar9 - 1;
            *(uchar *)((long)pvVar6 + (ulong)uVar1) = *puVar2;
            uVar1 = uVar1 + 1;
            puVar11 = puVar11 + 1;
          } while (uVar9 != 0);
        }
        iVar8 = iVar8 + 1;
        uVar7 = uVar7 + param_1;
      } while (iVar8 != iVar5);
    }
    if (*this != (BitmapImage)0x0) {
      operator_delete__(pvVar12);
    }
    *(void **)(this + 0x20) = pvVar6;
    *this = (BitmapImage)0x1;
  }
  return pvVar12 != (void *)0x0 && iVar3 == 1;
}


